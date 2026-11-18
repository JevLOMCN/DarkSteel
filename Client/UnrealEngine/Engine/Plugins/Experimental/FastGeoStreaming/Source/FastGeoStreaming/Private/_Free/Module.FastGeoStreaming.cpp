// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 222

// NAME_FastGeoPhysicsBodyInstanceOwner'' @ 1413e51a0

void __cdecl
`dynamic_initializer_for_'FFastGeoPhysicsBodyInstanceOwner::NAME_FastGeoPhysicsBodyInstanceOwner__
          (void)

{
  ::FName::FName(&FFastGeoPhysicsBodyInstanceOwner::NAME_FastGeoPhysicsBodyInstanceOwner,
                 L"FastGeoPhysicsBodyInstanceOwner");
  return;
}

// OnCreateRenderThreadResources'' @ 1413e51c0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 1413e51e0

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// Type'' @ 1413e5200

void __cdecl `dynamic_initializer_for_'FFastGeoComponent::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoComponent::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5220

void __cdecl `dynamic_initializer_for_'FFastGeoComponentCluster::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoComponentCluster::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5240

void __cdecl `dynamic_initializer_for_'FFastGeoHLOD::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoHLOD::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5260

void __cdecl `dynamic_initializer_for_'FFastGeoInstancedSkinnedMeshComponent::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoInstancedSkinnedMeshComponent::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5280

void __cdecl `dynamic_initializer_for_'FFastGeoInstancedStaticMeshComponent::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoInstancedStaticMeshComponent::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e52a0

void __cdecl `dynamic_initializer_for_'FFastGeoMeshComponent::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoMeshComponent::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e52c0

void __cdecl `dynamic_initializer_for_'FFastGeoPrimitiveComponent::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoPrimitiveComponent::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e52e0

void __cdecl `dynamic_initializer_for_'FFastGeoProceduralISMComponent::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoProceduralISMComponent::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5300

void __cdecl `dynamic_initializer_for_'FFastGeoSkinnedMeshComponent::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoSkinnedMeshComponent::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5320

void __cdecl `dynamic_initializer_for_'FFastGeoSkinnedMeshComponentBase::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoSkinnedMeshComponentBase::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5340

void __cdecl `dynamic_initializer_for_'FFastGeoStaticMeshComponent::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoStaticMeshComponent::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5360

void __cdecl `dynamic_initializer_for_'FFastGeoStaticMeshComponentBase::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  FFastGeoStaticMeshComponentBase::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// Type'' @ 1413e5380

void __cdecl `dynamic_initializer_for_'IFastGeoElement::Type__(void)

{
  FFastGeoElementType::NextUniqueID = FFastGeoElementType::NextUniqueID + 1;
  IFastGeoElement::Type.ID = FFastGeoElementType::NextUniqueID;
  return;
}

// `dynamic_initializer_for_'CVarAsyncRenderStateTaskMaxNumComponentsToProcess'' @ 1413e53a0

void __cdecl
FastGeo::_dynamic_initializer_for__CVarAsyncRenderStateTaskMaxNumComponentsToProcess__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncRenderStateTaskMaxNumComponentsToProcess,
             L"FastGeo.AsyncRenderStateTask.MaxNumComponentsToProcess",
             &GAsyncRenderStateTaskMaxNumComponentsToProcess,
             L"Maximum number of components to process (0 = no component limit)",0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncRenderStateTaskMaxNumComponentsToProcess__);
  return;
}

// `dynamic_initializer_for_'CVarAsyncRenderStateTaskParallelWorkerCount'' @ 1413e53f0

void __cdecl FastGeo::_dynamic_initializer_for__CVarAsyncRenderStateTaskParallelWorkerCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncRenderStateTaskParallelWorkerCount,
             L"FastGeo.AsyncRenderStateTask.ParallelWorkerCount",
             &GAsyncRenderStateTaskParallelWorkerCount,
             L"Set the max number of workers to use when creating FastGeo render state. Only taken into account if value is greater than 1."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncRenderStateTaskParallelWorkerCount__);
  return;
}

// `dynamic_initializer_for_'CVarAsyncRenderStateTaskTimeBudgetMS'' @ 1413e5440

void __cdecl FastGeo::_dynamic_initializer_for__CVarAsyncRenderStateTaskTimeBudgetMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncRenderStateTaskTimeBudgetMS,L"FastGeo.AsyncRenderStateTask.TimeBudgetMS",
             &GAsyncRenderStateTaskTimeBudgetMS,
             L"Maximum time budget in milliseconds for the async render state tasks (0 = no time limit)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncRenderStateTaskTimeBudgetMS__);
  return;
}

// `dynamic_initializer_for_'DebugTimeSliceDefaultSectionName'' @ 1413e5490

void __cdecl FNavigationSystem::_dynamic_initializer_for__DebugTimeSliceDefaultSectionName__(void)

{
  ::FName::FName(&DebugTimeSliceDefaultSectionName,L"DefaultSection");
  return;
}

// `dynamic_initializer_for_'GShowFastGeoCommand'' @ 1413e54b0

void __cdecl FastGeo::_dynamic_initializer_for__GShowFastGeoCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FastGeo::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GShowFastGeoCommand,L"FastGeo.Show",L"Turn on/off rendering of FastGeo.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GShowFastGeoCommand__);
  return;
}

// `dynamic_initializer_for_'LogFastGeoStreaming'' @ 1413e55e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFastGeoStreaming__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogFastGeoStreaming,L"LogFastGeoStreaming",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFastGeoStreaming__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantFastGeoStreaming'' @ 1413e5620

void __cdecl _dynamic_initializer_for__ModuleRegistrantFastGeoStreaming__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "FastGeoStreaming";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"FastGeoStreaming",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FFastGeoStreamingModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'NAME_FastGeoColorHandler'' @ 1413e5670

void __cdecl _dynamic_initializer_for__NAME_FastGeoColorHandler__(void)

{
  FName::FName(&NAME_FastGeoColorHandler,L"FastGeo");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413e5690

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413e5720

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413e57b0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413e5840

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413e58d0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413e5960

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413e59f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413e5a80

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413e5b10

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413e5ba0

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoComponent_h__Script_FastGeoStreaming_2960182831'' @ 1413e5c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoComponent_h__Script_FastGeoStreaming_2960182831__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FastGeoStreaming",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoComponent_h__Script_FastGeoStreaming_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h__Script_FastGeoStreaming_291271797'' @ 1413e5c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h__Script_FastGeoStreaming_291271797__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FastGeoStreaming",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h__Script_FastGeoStreaming_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoInstancedStaticMeshComponent_h__Script_FastGeoStreaming_1203847355'' @ 1413e5cb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoInstancedStaticMeshComponent_h__Script_FastGeoStreaming_1203847355__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FastGeoStreaming",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoInstancedStaticMeshComponent_h__Script_FastGeoStreaming_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoPrimitiveComponent_h__Script_FastGeoStreaming_4274162665'' @ 1413e5cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoPrimitiveComponent_h__Script_FastGeoStreaming_4274162665__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FastGeoStreaming",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoPrimitiveComponent_h__Script_FastGeoStreaming_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoStaticMeshComponent_h__Script_FastGeoStreaming_738480544'' @ 1413e5d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoStaticMeshComponent_h__Script_FastGeoStreaming_738480544__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FastGeoStreaming",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoStaticMeshComponent_h__Script_FastGeoStreaming_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Private_FastGeoWorldSubsystem_h__Script_FastGeoStreaming_2346839459'' @ 1413e5d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Private_FastGeoWorldSubsystem_h__Script_FastGeoStreaming_2346839459__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FastGeoStreaming",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Private_FastGeoWorldSubsystem_h__Script_FastGeoStreaming_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Public_FastGeoWorldPartitionRuntimeCellTransformer_h__Script_FastGeoStreaming_3905060002'' @ 1413e5db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Public_FastGeoWorldPartitionRuntimeCellTransformer_h__Script_FastGeoStreaming_3905060002__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/FastGeoStreaming",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Public_FastGeoWorldPartitionRuntimeCellTransformer_h__Script_FastGeoStreaming_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_FastGeoStreaming'' @ 1413e5df0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_FastGeoStreaming__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x70bf9a48;
  local_res8[0].DeclarationsHash = 0xe24b9f02;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_FastGeoStreaming,L"/Script/FastGeoStreaming",
             &Z_Registration_Info_UPackage__Script_FastGeoStreaming,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_FastGeo'' @ 1413e5e30

void __cdecl _dynamic_initializer_for___GCsvCategory_FastGeo__(void)

{
  FString::operator=(&_GCsvCategory_FastGeo.Name,L"FastGeo");
  _GCsvCategory_FastGeo.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_FastGeo.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_FastGeo__);
  return;
}

// Z_Construct_UClass_UFastGeoWorldPartitionRuntimeCellTransformer @ 14da061d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFastGeoWorldPartitionRuntimeCellTransformer(void)

{
  if (Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.
                OuterSingleton,
               &Z_Construct_UClass_UFastGeoWorldPartitionRuntimeCellTransformer_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14da06400

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FastGeo::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,FastGeo::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UFastGeoComponentEditorProxy @ 14da064e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFastGeoComponentEditorProxy(void)

{
  if (Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.OuterSingleton,
               &Z_Construct_UClass_UFastGeoComponentEditorProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.OuterSingleton;
}

// Z_Construct_UPackage__Script_FastGeoStreaming @ 14da06520

UPackage * __cdecl Z_Construct_UPackage__Script_FastGeoStreaming(void)

{
  if (Z_Registration_Info_UPackage__Script_FastGeoStreaming.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_FastGeoStreaming.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_FastGeoStreaming.OuterSingleton;
}

// Z_Construct_UClass_UFastGeoWorldSubsystem @ 14da06620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFastGeoWorldSubsystem(void)

{
  if (Z_Registration_Info_UClass_UFastGeoWorldSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFastGeoWorldSubsystem.OuterSingleton,
               &Z_Construct_UClass_UFastGeoWorldSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFastGeoWorldSubsystem.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14da06900

void * __thiscall
FFastGeoStreamingModule::_scalar_deleting_destructor_(FFastGeoStreamingModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UClass_UFastGeoContainer @ 14da06940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFastGeoContainer(void)

{
  if (Z_Registration_Info_UClass_UFastGeoContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFastGeoContainer.OuterSingleton,
               &Z_Construct_UClass_UFastGeoContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFastGeoContainer.OuterSingleton;
}

// Z_Construct_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy @ 14da06980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy(void)

{
  if (Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.
                OuterSingleton,
               &Z_Construct_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.OuterSingleton;
}

// Z_Construct_UClass_UFastGeoStaticMeshComponentEditorProxy @ 14da069c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFastGeoStaticMeshComponentEditorProxy(void)

{
  if (Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.OuterSingleton,
               &Z_Construct_UClass_UFastGeoStaticMeshComponentEditorProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.OuterSingleton;
}

// Z_Construct_UClass_UFastGeoPrimitiveComponentEditorProxy @ 14da06a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFastGeoPrimitiveComponentEditorProxy(void)

{
  if (Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.OuterSingleton,
               &Z_Construct_UClass_UFastGeoPrimitiveComponentEditorProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.OuterSingleton;
}

// operator<<<URuntimeVirtualTexture_*,TSizedDefaultAllocator<32>_> @ 14da06be0

FArchive * __cdecl
operator<<<URuntimeVirtualTexture_*,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<URuntimeVirtualTexture_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            (**(code **)(*(longlong *)param_1 + 0x168))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<URuntimeVirtualTexture_*,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x168))(param_1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFastGeoComponentCluster,TSizedDefaultAllocator<32>_> @ 14da06bf0

FArchive * __cdecl
operator<<<FFastGeoComponentCluster,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FFastGeoComponentCluster,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x88);
  uVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FFastGeoComponentCluster,int>
                ((FFastGeoComponentCluster *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1e1e2)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = uVar10;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = (uint)uVar10;
              uVar6 = 0;
              if ((int)uVar8 < (int)uVar11) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + uVar12;
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar12 = uVar12 + 0x88;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar8 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFastGeoComponentCluster,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0])
          ;
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x888,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x88;
              DefaultConstructItems<FFastGeoComponentCluster,int>(pFVar9,1);
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar11 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFastGeoHLOD,TSizedDefaultAllocator<32>_> @ 14da06c00

FArchive * __cdecl
operator<<<FFastGeoHLOD,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FFastGeoHLOD,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 200);
  uVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FFastGeoHLOD,int>
                ((FFastGeoHLOD *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x147af)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = uVar10;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = (uint)uVar10;
              uVar6 = 0;
              if ((int)uVar8 < (int)uVar11) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + uVar12;
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar12 = uVar12 + 200;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar8 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFastGeoHLOD,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x8c8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 200;
              DefaultConstructItems<FFastGeoHLOD,int>(pFVar9,1);
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar11 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> @ 14da06c10

FArchive * __cdecl
operator<<<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x5f0);
  uVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FFastGeoInstancedSkinnedMeshComponent,int>
                ((FFastGeoInstancedSkinnedMeshComponent *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x5f0,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2b1e)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = uVar10;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = (uint)uVar10;
              uVar6 = 0;
              if ((int)uVar8 < (int)uVar11) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + uVar12;
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar12 = uVar12 + 0x5f0;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar8 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x5f0,0x10,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x5f0;
              DefaultConstructItems<FFastGeoInstancedSkinnedMeshComponent,int>(pFVar9,1);
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar11 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> @ 14da06c20

FArchive * __cdecl
operator<<<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x650);
  uVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FFastGeoInstancedStaticMeshComponent,int>
                ((FFastGeoInstancedStaticMeshComponent *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x650,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x288e)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = uVar10;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = (uint)uVar10;
              uVar6 = 0;
              if ((int)uVar8 < (int)uVar11) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + uVar12;
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar12 = uVar12 + 0x650;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar8 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x650,0x10,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x650;
              DefaultConstructItems<FFastGeoInstancedStaticMeshComponent,int>(pFVar9,1);
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar11 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> @ 14da06c30

FArchive * __cdecl
operator<<<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x5f0);
  uVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FFastGeoProceduralISMComponent,int>
                ((FFastGeoProceduralISMComponent *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x5f0,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2b1e)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = uVar10;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = (uint)uVar10;
              uVar6 = 0;
              if ((int)uVar8 < (int)uVar11) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + uVar12;
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar12 = uVar12 + 0x5f0;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar8 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x5f0,0x10,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x5f0;
              DefaultConstructItems<FFastGeoProceduralISMComponent,int>(pFVar9,1);
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar11 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> @ 14da06c40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FArchive * __cdecl
operator<<<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x590);
  uVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FFastGeoSkinnedMeshComponent,int>
                ((FFastGeoSkinnedMeshComponent *)(param_2->AllocatorInstance).Data,param_2->ArrayNum
                );
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x590,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2e06)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = uVar10;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = (uint)uVar10;
              uVar6 = 0;
              if ((int)uVar8 < (int)uVar11) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + uVar12;
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar12 = uVar12 + 0x590;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar8 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x590,0x10,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x590;
              DefaultConstructItems<FFastGeoSkinnedMeshComponent,int>(pFVar9,1);
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar11 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> @ 14da06c50

FArchive * __cdecl
operator<<<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x580);
  uVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FFastGeoStaticMeshComponent,int>
                ((FFastGeoStaticMeshComponent *)(param_2->AllocatorInstance).Data,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x580,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2e8c)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = uVar10;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = (uint)uVar10;
              uVar6 = 0;
              if ((int)uVar8 < (int)uVar11) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + uVar12;
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar12 = uVar12 + 0x580;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar8 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x580,0x10,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x580;
              DefaultConstructItems<FFastGeoStaticMeshComponent,int>(pFVar9,1);
              (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9,param_1);
              uVar11 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<enum_ESkinCacheUsage,TSizedDefaultAllocator<32>_> @ 14da06c60

FArchive * __cdecl
operator<<<enum_ESkinCacheUsage,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<ESkinCacheUsage,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum,(longlong)*piVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1000001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ConstructItems<FSkelMeshComponentLODInfo,FSkelMeshComponentLODInfo,int> @ 14da0e0a0

void __cdecl
ConstructItems<FSkelMeshComponentLODInfo,FSkelMeshComponentLODInfo,int>
          (void *param_1,FSkelMeshComponentLODInfo *param_2,int param_3)

{
  FSkinWeightVertexBuffer **ppFVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  FColorVertexBuffer **ppFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0xc);
    ppFVar5 = &param_2->OverrideVertexColors;
    lVar6 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)(lVar6 + (longlong)ppFVar5) = 0;
      pFVar2 = (ForAnyElementType *)(lVar6 + (longlong)ppFVar5);
      iVar3 = *(int *)(ppFVar5 + -1);
      _Src = (((FSkelMeshComponentLODInfo *)(ppFVar5 + -2))->HiddenMaterials).AllocatorInstance.Data
      ;
      piVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,0,pFVar2,iVar3,piVar4);
        memcpy(pFVar2->Data,_Src,(longlong)iVar3);
      }
      *(FColorVertexBuffer **)(piVar4 + 1) = *ppFVar5;
      *(FSkinWeightVertexBuffer **)(piVar4 + 3) = (FSkinWeightVertexBuffer *)ppFVar5[1];
      ppFVar1 = (FSkinWeightVertexBuffer **)(ppFVar5 + 2);
      ppFVar5 = ppFVar5 + 5;
      *(FSkinWeightVertexBuffer **)(piVar4 + 5) = *ppFVar1;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFastGeoInstancedSkinnedMeshComponent,FFastGeoInstancedSkinnedMeshComponent,int> @ 14da0e190

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ConstructItems<FFastGeoInstancedSkinnedMeshComponent,FFastGeoInstancedSkinnedMeshComponent,int>
          (void *param_1,FFastGeoInstancedSkinnedMeshComponent *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FFastGeoSkinnedMeshComponentBase *this;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  longlong lVar3;
  UObject *pUVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = &(param_2->InstanceCustomData).ArrayNum;
    piVar6 = (int *)((longlong)param_1 + 0x420);
    do {
      this = (FFastGeoSkinnedMeshComponentBase *)
             ((longlong)param_1 + (-0x420 - (longlong)param_2) + (longlong)piVar5);
      FFastGeoSkinnedMeshComponentBase::FFastGeoSkinnedMeshComponentBase
                (this,(FFastGeoSkinnedMeshComponentBase *)(piVar5 + -0x108));
      this->_padding_ = (longlong)&___7FFastGeoInstancedSkinnedMeshComponent__6B_;
      piVar6[-8] = 0;
      piVar6[-7] = 0;
      iVar2 = piVar5[-6];
      _Src = *(void **)(piVar5 + -8);
      piVar6[-6] = iVar2;
      if (iVar2 == 0) {
        piVar6[-5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,iVar2,0,(ForAnyElementType *)(piVar6 + -8),iVar2,piVar6 + -5);
        memcpy(((ForAnyElementType *)(piVar6 + -8))->Data,_Src,(longlong)iVar2 << 6);
      }
      pFVar1 = (ForAnyElementType *)(piVar6 + -2);
      piVar6[-4] = piVar5[-4];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar5;
      _Src_00 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->AllocatorInstance).
                Data;
      *piVar6 = iVar2;
      if (iVar2 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar6 + 1);
        memcpy(pFVar1->Data,_Src_00,(longlong)iVar2 << 2);
      }
      FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc
                ((FSkinnedMeshSceneProxyDesc *)(piVar6 + 2),
                 (FSkinnedMeshSceneProxyDesc *)(piVar5 + 2));
      *(undefined ***)(piVar6 + 2) = &___7FInstancedSkinnedMeshSceneProxyDesc__6B_;
      *(undefined8 *)(piVar6 + 0x66) = *(undefined8 *)(piVar5 + 0x66);
      lVar3 = *(longlong *)(piVar5 + 0x68);
      *(longlong *)(piVar6 + 0x68) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      pUVar4 = *(UObject **)(piVar5 + 0x6a);
      *(UObject **)(piVar6 + 0x6a) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      piVar6[0x6c] = piVar5[0x6c];
      piVar6[0x6d] = piVar5[0x6d];
      piVar6[0x6e] = piVar5[0x6e];
      piVar6[0x6f] = piVar5[0x6f];
      *(undefined8 *)(piVar6 + 0x70) = *(undefined8 *)(piVar5 + 0x70);
      lVar3 = *(longlong *)(piVar5 + 0x72);
      *(longlong *)(piVar6 + 0x72) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      piVar6 = piVar6 + 0x17c;
      piVar5 = piVar5 + 0x17c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFastGeoInstancedStaticMeshComponent,FFastGeoInstancedStaticMeshComponent,int> @ 14da0e3b0

void __cdecl
ConstructItems<FFastGeoInstancedStaticMeshComponent,FFastGeoInstancedStaticMeshComponent,int>
          (void *param_1,FFastGeoInstancedStaticMeshComponent *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FFastGeoStaticMeshComponentBase *this;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x408);
    piVar7 = &(param_2->PerInstanceSMCustomData).ArrayNum;
    do {
      this = (FFastGeoStaticMeshComponentBase *)
             ((longlong)param_1 + (-0x408 - (longlong)param_2) + (longlong)piVar7);
      FFastGeoStaticMeshComponentBase::FFastGeoStaticMeshComponentBase
                (this,(FFastGeoStaticMeshComponentBase *)(piVar7 + -0x102));
      *(undefined ***)this = &___7FFastGeoInstancedStaticMeshComponent__6B_;
      pFVar1 = (ForAnyElementType *)(piVar6 + -8);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar7[-6];
      pvVar3 = *(void **)(piVar7 + -8);
      piVar6[-6] = iVar2;
      if (iVar2 == 0) {
        piVar6[-5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,iVar2,0,pFVar1,iVar2,piVar6 + -5);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 7);
      }
      pFVar1 = (ForAnyElementType *)(piVar6 + -2);
      piVar6[-4] = piVar7[-4];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar7;
      _Src = (((TArray<float,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->AllocatorInstance).Data;
      *piVar6 = iVar2;
      if (iVar2 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar6 + 1);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      piVar6[2] = 0;
      piVar6[3] = 0;
      iVar2 = piVar7[4];
      pvVar3 = *(void **)(piVar7 + 2);
      piVar6[4] = iVar2;
      if (iVar2 == 0) {
        piVar6[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,(ForAnyElementType *)(piVar6 + 2),iVar2,piVar6 + 5);
        memcpy(((ForAnyElementType *)(piVar6 + 2))->Data,pvVar3,(longlong)iVar2 << 3);
      }
      uVar5 = *(undefined8 *)(piVar7 + 8);
      *(undefined8 *)(piVar6 + 6) = *(undefined8 *)(piVar7 + 6);
      *(undefined8 *)(piVar6 + 8) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + 0xc);
      *(undefined8 *)(piVar6 + 10) = *(undefined8 *)(piVar7 + 10);
      *(undefined8 *)(piVar6 + 0xc) = uVar5;
      uVar5 = *(undefined8 *)(piVar7 + 0x10);
      *(undefined8 *)(piVar6 + 0xe) = *(undefined8 *)(piVar7 + 0xe);
      *(undefined8 *)(piVar6 + 0x10) = uVar5;
      *(undefined8 *)(piVar6 + 0x12) = *(undefined8 *)(piVar7 + 0x12);
      FInstancedStaticMeshSceneProxyDesc::FInstancedStaticMeshSceneProxyDesc
                ((FInstancedStaticMeshSceneProxyDesc *)(piVar6 + 0x14),
                 (FInstancedStaticMeshSceneProxyDesc *)(piVar7 + 0x14));
      *(undefined8 *)(piVar6 + 0x82) = *(undefined8 *)(piVar7 + 0x82);
      lVar4 = *(longlong *)(piVar7 + 0x84);
      *(longlong *)(piVar6 + 0x84) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pFVar1 = (ForAnyElementType *)(piVar6 + 0x86);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar7[0x88];
      pvVar3 = *(void **)(piVar7 + 0x86);
      piVar6[0x88] = iVar2;
      if (iVar2 == 0) {
        piVar6[0x89] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar6 + 0x89);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 2);
      }
      pFVar1 = (ForAnyElementType *)(piVar6 + 0x8a);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar7[0x8c];
      pvVar3 = *(void **)(piVar7 + 0x8a);
      piVar6[0x8c] = iVar2;
      if (iVar2 == 0) {
        piVar6[0x8d] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,pFVar1,iVar2,piVar6 + 0x8d);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 3);
      }
      pFVar1 = (ForAnyElementType *)(piVar6 + 0x8e);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar7[0x90];
      pvVar3 = *(void **)(piVar7 + 0x8e);
      piVar6[0x90] = iVar2;
      if (iVar2 == 0) {
        piVar6[0x91] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,pFVar1,iVar2,piVar6 + 0x91);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 << 3);
      }
      piVar6 = piVar6 + 0x194;
      piVar7 = piVar7 + 0x194;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFastGeoProceduralISMComponent,FFastGeoProceduralISMComponent,int> @ 14da0e6f0

void __cdecl
ConstructItems<FFastGeoProceduralISMComponent,FFastGeoProceduralISMComponent,int>
          (void *param_1,FFastGeoProceduralISMComponent *param_2,int param_3)

{
  FFastGeoStaticMeshComponentBase *this;
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  double dVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = &param_2->NumCustomDataFloats;
    piVar5 = (int *)((longlong)param_1 + 0x3ec);
    do {
      this = (FFastGeoStaticMeshComponentBase *)
             ((longlong)param_1 + (-0x3ec - (longlong)param_2) + (longlong)piVar4);
      FFastGeoStaticMeshComponentBase::FFastGeoStaticMeshComponentBase
                (this,(FFastGeoStaticMeshComponentBase *)(piVar4 + -0xfb));
      *(undefined ***)this = &___7FFastGeoProceduralISMComponent__6B_;
      piVar5[-1] = piVar4[-1];
      *piVar5 = *piVar4;
      uVar2 = *(undefined8 *)(piVar4 + 3);
      *(double *)(piVar5 + 1) = (((TBox<double> *)(piVar4 + 1))->Min).field0_0x0._s_0.X;
      *(undefined8 *)(piVar5 + 3) = uVar2;
      dVar3 = (((TVector<double> *)(piVar4 + 7))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar5 + 5) = *(undefined8 *)(piVar4 + 5);
      *(double *)(piVar5 + 7) = dVar3;
      uVar2 = *(undefined8 *)(piVar4 + 0xb);
      *(undefined8 *)(piVar5 + 9) = *(undefined8 *)(piVar4 + 9);
      *(undefined8 *)(piVar5 + 0xb) = uVar2;
      *(undefined8 *)(piVar5 + 0xd) = *(undefined8 *)(piVar4 + 0xd);
      FInstancedStaticMeshSceneProxyDesc::FInstancedStaticMeshSceneProxyDesc
                ((FInstancedStaticMeshSceneProxyDesc *)(piVar5 + 0xf),
                 (FInstancedStaticMeshSceneProxyDesc *)(piVar4 + 0xf));
      *(FInstanceDataSceneProxy **)(piVar5 + 0x7d) =
           ((TSharedPtr<FInstanceDataSceneProxy,1> *)(piVar4 + 0x7d))->Object;
      pTVar1 = ((FSharedReferencer<1> *)(piVar4 + 0x7f))->ReferenceController;
      *(TReferenceControllerBase<1> **)(piVar5 + 0x7f) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      piVar5 = piVar5 + 0x17c;
      piVar4 = piVar4 + 0x17c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFastGeoSkinnedMeshComponent,FFastGeoSkinnedMeshComponent,int> @ 14da0e7f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ConstructItems<FFastGeoSkinnedMeshComponent,FFastGeoSkinnedMeshComponent,int>
          (void *param_1,FFastGeoSkinnedMeshComponent *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      FFastGeoSkinnedMeshComponentBase::FFastGeoSkinnedMeshComponentBase
                (param_1,(FFastGeoSkinnedMeshComponentBase *)(lVar1 + (longlong)param_1));
      ((FFastGeoSkinnedMeshComponentBase *)param_1)->_padding_ =
           (longlong)&___7FFastGeoSkinnedMeshComponent__6B_;
      FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc
                ((FSkinnedMeshSceneProxyDesc *)((longlong)param_1 + 0x400),
                 (FSkinnedMeshSceneProxyDesc *)(lVar1 + 0x400 + (longlong)param_1));
      param_1 = &((FFastGeoSkinnedMeshComponentBase *)((longlong)param_1 + 0x400))->_padding_;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFastGeoStaticMeshComponent,FFastGeoStaticMeshComponent,int> @ 14da0e870

void __cdecl
ConstructItems<FFastGeoStaticMeshComponent,FFastGeoStaticMeshComponent,int>
          (void *param_1,FFastGeoStaticMeshComponent *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      FFastGeoStaticMeshComponentBase::FFastGeoStaticMeshComponentBase
                (param_1,(FFastGeoStaticMeshComponentBase *)(lVar1 + (longlong)param_1));
      *(undefined ***)param_1 = &___7FFastGeoStaticMeshComponent__6B_;
      FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
                ((FStaticMeshSceneProxyDesc *)
                 &((FFastGeoStaticMeshComponentBase *)param_1)->field_0x3e8,
                 (FStaticMeshSceneProxyDesc *)(lVar1 + 1000 + (longlong)param_1));
      param_1 = &((FFastGeoStaticMeshComponentBase *)((longlong)param_1 + 0x3f0))->field_0x190;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FFastGeoComponentCluster,int> @ 14da0efd0

void __cdecl DefaultConstructItems<FFastGeoComponentCluster,int>(void *param_1,int param_2)

{
  FFastGeoElementType FVar1;
  undefined8 *puVar2;
  FName local_res8;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      FVar1 = FFastGeoComponentCluster::Type;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      puVar2[-3] = &___7FFastGeoComponentCluster__6B_;
      *(FFastGeoElementType *)(puVar2 + -2) = FVar1;
      *puVar2 = 0;
      FName::ToString(&local_res8,(FString *)(puVar2 + 1));
      *(undefined4 *)(puVar2 + 3) = 0xffffffff;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2 = puVar2 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FFastGeoHLOD,int> @ 14da0f090

void __cdecl DefaultConstructItems<FFastGeoHLOD,int>(void *param_1,int param_2)

{
  FFastGeoElementType FVar1;
  undefined8 *puVar2;
  FName local_res8;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      FVar1 = FFastGeoHLOD::Type;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      puVar2[-3] = &___7FFastGeoComponentCluster__6B_;
      *(FFastGeoElementType *)(puVar2 + -2) = FVar1;
      *puVar2 = 0;
      FName::ToString(&local_res8,(FString *)(puVar2 + 1));
      *(undefined4 *)(puVar2 + 3) = 0xffffffff;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[-3] = &FFastGeoHLOD::_vftable__for__FFastGeoComponentCluster__;
      puVar2[0xe] = &FFastGeoHLOD::_vftable__for__IWorldPartitionHLODObject__;
      *(undefined2 *)(puVar2 + 0xf) = 1;
      *(undefined8 *)((longlong)puVar2 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x84) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x8c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x94) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x9c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xa4) = 0;
      puVar2 = puVar2 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FFastGeoInstancedSkinnedMeshComponent,int> @ 14da0f1b0

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

void __cdecl
DefaultConstructItems<FFastGeoInstancedSkinnedMeshComponent,int>(void *param_1,int param_2)

{
  TReferenceControllerBase<1> **ppTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> FStack_50;
  FFastGeoElementType local_48 [2];
  
  pTVar4 = _UNK_150651568;
  pTVar3 = ___xmm_00000000000000000000000000000010;
  if (param_2 != 0) {
    puVar8 = (undefined8 *)((longlong)param_1 + 0x5c0);
    do {
      local_48[0] = FFastGeoInstancedSkinnedMeshComponent::Type;
      FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(puVar8 + -0xb8),-1,local_48);
      *(byte *)(puVar8 + -0x3c) = *(byte *)(puVar8 + -0x3c) & 0xfe;
      *(byte *)((longlong)puVar8 + -0x1de) = *(byte *)((longlong)puVar8 + -0x1de) & 0xfe;
      puVar8[-0x40] = 0;
      puVar8[-0x3f] = 0;
      puVar8[-0x3e] = 0;
      puVar8[-0x3d] = 0;
      *(undefined1 *)((longlong)puVar8 + -0x1df) = 0;
      *(undefined4 *)((longlong)puVar8 + -0x1dc) = 0;
      puVar8[-0x3b] = 0;
      puVar8[-0x3a] = 0;
      puVar8[-0x39] = 0;
      puVar8[-0xb8] = &___7FFastGeoInstancedSkinnedMeshComponent__6B_;
      puVar8[-0x38] = 0;
      puVar8[-0x37] = 0;
      *(undefined4 *)(puVar8 + -0x36) = 0;
      puVar8[-0x35] = 0;
      puVar8[-0x34] = 0;
      FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc
                ((FSkinnedMeshSceneProxyDesc *)(puVar8 + -0x33));
      puVar8[-0x33] = &___7FInstancedSkinnedMeshSceneProxyDesc__6B_;
      puVar8[-1] = 0;
      ppTVar1 = (TReferenceControllerBase<1> **)(puVar8 + 4);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *ppTVar1 = (TReferenceControllerBase<1> *)0x0;
      puVar8[5] = 0;
      pTVar6 = operator_new(0x108);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_58 = pTVar3;
        FStack_50.ReferenceController = pTVar4;
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFInstanceDataManager___00_SharedPointerInternals__6B_
        ;
        FInstanceDataManager::FInstanceDataManager
                  ((FInstanceDataManager *)(pTVar6 + 1),(UPrimitiveComponent *)0x0);
        pTVar7 = pTVar6 + 1;
        if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        FStack_50.ReferenceController = pTVar6;
        local_58 = pTVar7;
      }
      if (ppTVar1 != &local_58) {
        *ppTVar1 = pTVar7;
        local_58 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar8 + 5),&FStack_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_50.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      puVar8 = puVar8 + 0xbe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FFastGeoInstancedStaticMeshComponent,int> @ 14da0f400

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
DefaultConstructItems<FFastGeoInstancedStaticMeshComponent,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  FFastGeoElementType local_28;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x5f0);
    do {
      local_28 = FFastGeoInstancedStaticMeshComponent::Type;
      FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(puVar1 + -0xbe),-1,&local_28);
      puVar1[-0x46] = 0;
      puVar1[-0x45] = 0;
      *(undefined1 *)(puVar1 + -0x44) = 0;
      puVar1[-0x43] = 0;
      puVar1[-0x42] = 0;
      puVar1[-0xbe] = &___7FFastGeoInstancedStaticMeshComponent__6B_;
      puVar1[-0x41] = 0;
      puVar1[-0x40] = 0;
      *(undefined4 *)(puVar1 + -0x3f) = 0;
      puVar1[-0x3e] = 0;
      puVar1[-0x3d] = 0;
      puVar1[-0x3c] = 0;
      puVar1[-0x3b] = 0;
      *(undefined1 *)(puVar1 + -0x34) = 0;
      memset(puVar1 + -0x33,0,0x1b8);
      FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
                ((FStaticMeshSceneProxyDesc *)(puVar1 + -0x33));
      puVar1[-0x33] = &___7FInstancedStaticMeshSceneProxyDesc__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1 = puVar1 + 0xca;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FFastGeoProceduralISMComponent,int> @ 14da0f560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl DefaultConstructItems<FFastGeoProceduralISMComponent,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  FFastGeoElementType local_28;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x5c0);
    do {
      local_28 = FFastGeoProceduralISMComponent::Type;
      FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(puVar1 + -0xb8),-1,&local_28);
      puVar1[-0x3f] = 0;
      *(undefined1 *)(puVar1 + -0x3e) = 0;
      puVar1[-0x3c] = 0;
      puVar1[-0xb8] = &___7FFastGeoProceduralISMComponent__6B_;
      puVar1[-0x3b] = 0;
      puVar1[-0x3a] = 0;
      puVar1[-0x39] = 0;
      puVar1[-0x38] = 0;
      puVar1[-0x37] = 0;
      puVar1[-0x36] = 0;
      puVar1[-0x35] = 0;
      puVar1[-0x40] = 0;
      puVar1[-0x3d] = 0;
      *(undefined1 *)(puVar1 + -0x34) = 0;
      *(undefined4 *)((longlong)puVar1 + -0x19f) = 0;
      *(undefined2 *)((longlong)puVar1 + -0x19b) = 0;
      *(undefined1 *)((longlong)puVar1 + -0x199) = 0;
      memset(puVar1 + -0x33,0,0x1b8);
      FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
                ((FStaticMeshSceneProxyDesc *)(puVar1 + -0x33));
      puVar1[-0x33] = &___7FInstancedStaticMeshSceneProxyDesc__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1 = puVar1 + 0xbe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FFastGeoSkinnedMeshComponent,int> @ 14da0f6c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl DefaultConstructItems<FFastGeoSkinnedMeshComponent,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  FFastGeoElementType local_18;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x3c8);
    do {
      local_18 = FFastGeoSkinnedMeshComponent::Type;
      FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(puVar1 + -0x79),-1,&local_18);
      *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) & 0xfe;
      *(byte *)((longlong)puVar1 + 0x1a) = *(byte *)((longlong)puVar1 + 0x1a) & 0xfe;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)((longlong)puVar1 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[-0x79] = &___7FFastGeoSkinnedMeshComponent__6B_;
      memset(puVar1 + 7,0,400);
      FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc
                ((FSkinnedMeshSceneProxyDesc *)(puVar1 + 7));
      puVar1 = puVar1 + 0xb2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FFastGeoStaticMeshComponent,int> @ 14da0f790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl DefaultConstructItems<FFastGeoStaticMeshComponent,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  FFastGeoElementType local_18;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x3c8);
    do {
      local_18 = FFastGeoStaticMeshComponent::Type;
      FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(puVar1 + -0x79),-1,&local_18);
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[-0x79] = &___7FFastGeoStaticMeshComponent__6B_;
      FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
                ((FStaticMeshSceneProxyDesc *)(puVar1 + 4));
      puVar1 = puVar1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>,int> @ 14da0f8a0

void __cdecl
DestructItems<TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>,int>
          (TUniquePtr<FFastGeoAsyncRenderStateJobQueue::FJobSet,TDefaultDelete<FFastGeoAsyncRenderStateJobQueue::FJobSet>_>
           *param_1,int param_2)

{
  TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)param_1->Ptr;
    if (this != (TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0) {
      *(undefined4 *)&this[1].field_0x10 = 0;
      if (*(void **)&this[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FFastGeoAsyncRenderStateJobQueue::FJob>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this);
      operator_delete(this,0x50);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FFastGeoComponentCluster,int> @ 14da0f920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<FFastGeoComponentCluster,int>(FFastGeoComponentCluster *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ProceduralISMComponents;
    do {
      *(undefined ***)((longlong)(pTVar2 + -8) + 8) = &___7FFastGeoComponentCluster__6B_;
      DestructItems<FFastGeoProceduralISMComponent,int>
                ((FFastGeoProceduralISMComponent *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum
                );
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FFastGeoInstancedSkinnedMeshComponent,int>
                ((FFastGeoInstancedSkinnedMeshComponent *)
                 (((TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -1))->AllocatorInstance).Data,
                 ((TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -1))->ArrayNum);
      pFVar1 = (((TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FFastGeoSkinnedMeshComponent,int>
                ((FFastGeoSkinnedMeshComponent *)
                 (((TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2)
                  )->AllocatorInstance).Data,
                 ((TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))
                 ->ArrayNum);
      pFVar1 = (((TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FFastGeoInstancedStaticMeshComponent,int>
                ((FFastGeoInstancedStaticMeshComponent *)
                 (((TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                  (pTVar2 + -3))->AllocatorInstance).Data,
                 ((TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                 (pTVar2 + -3))->ArrayNum);
      pFVar1 = (((TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -3))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FFastGeoStaticMeshComponent,int>
                ((FFastGeoStaticMeshComponent *)
                 (((TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))
                 ->AllocatorInstance).Data,
                 ((TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))
                 ->ArrayNum);
      pFVar1 = (((TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)((longlong)(pTVar2 + -6) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      *(undefined ***)((longlong)(pTVar2 + -8) + 8) = &___7IFastGeoElement__6B_;
      pTVar2 = (TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFastGeoHLOD,int> @ 14da0fa20

void __cdecl DestructItems<FFastGeoHLOD,int>(FFastGeoHLOD *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&FFastGeoHLOD::_vftable__for__FFastGeoComponentCluster__;
    param_1->_padding_ = (longlong)&FFastGeoHLOD::_vftable__for__IWorldPartitionHLODObject__;
    FFastGeoComponentCluster::~FFastGeoComponentCluster((FFastGeoComponentCluster *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FFastGeoInstancedSkinnedMeshComponent,int> @ 14da0fa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<FFastGeoInstancedSkinnedMeshComponent,int>
          (FFastGeoInstancedSkinnedMeshComponent *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &(param_1->SceneProxyDesc)._padding_;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)plVar1[0x15]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(plVar1 + 0x10))->ReferenceController);
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc
                ((FPrimitiveSceneProxyDesc *)(plVar1 + -0x23));
      if ((void *)plVar1[-0x25] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-0x25]);
      }
      if ((void *)plVar1[-0x28] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-0x28]);
      }
      DestructItems<FSkelMeshComponentLODInfo,int>
                ((FSkelMeshComponentLODInfo *)plVar1[-0x2b],*(int *)(plVar1 + -0x2a));
      if ((void *)plVar1[-0x2b] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-0x2b]);
      }
      if ((void *)plVar1[-0x2e] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-0x2e]);
      }
      if ((void *)plVar1[-0x30] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-0x30]);
      }
      FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(plVar1 + -0xa8));
      plVar1 = plVar1 + 0xbe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFastGeoInstancedStaticMeshComponent,int> @ 14da0fb80

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
DestructItems<FFastGeoInstancedStaticMeshComponent,int>
          (FFastGeoInstancedStaticMeshComponent *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->AsyncDestroyPhysicsStatePayload;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((TSharedPtr<FInstanceDataSceneProxy,1> *)(pTVar2 + -3))->SharedReferenceCount).
                 ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(pTVar2 + -5))->ReferenceController);
      FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc
                ((FStaticMeshSceneProxyDesc *)((longlong)(pTVar2 + -0x1f) + 8));
      pFVar1 = (((TArray<FInstancedStaticMeshRandomSeed,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -0x23))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar2 + -0x24))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FInstancedStaticMeshInstanceData,TSizedDefaultAllocator<32>_> *)
                ((longlong)(pTVar2 + -0x26) + 8))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -0x27) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -0x27) + 8));
      }
      if (*(void **)(pTVar2 + -0x28) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -0x28));
      }
      FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(pTVar2 + -100));
      pTVar2 = pTVar2 + 0x65;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFastGeoProceduralISMComponent,int> @ 14da0fc70

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
DestructItems<FFastGeoProceduralISMComponent,int>
          (FFastGeoProceduralISMComponent *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->DataProxy).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-5].ReferenceController);
      FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc
                ((FStaticMeshSceneProxyDesc *)(pFVar1 + -0x38));
      if (pFVar1[-0x42].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-0x42].ReferenceController);
      }
      if (pFVar1[-0x45].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-0x45].ReferenceController);
      }
      FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(pFVar1 + -0xbd));
      pFVar1 = pFVar1 + 0xbe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFastGeoSkinnedMeshComponent,int> @ 14da0fcf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<FFastGeoSkinnedMeshComponent,int>(FFastGeoSkinnedMeshComponent *param_1,int param_2)

{
  FPrimitiveSceneProxyDesc *this;
  
  if (param_2 != 0) {
    this = (FPrimitiveSceneProxyDesc *)&param_1->SceneProxyDesc;
    do {
      if (this[1].AdditionalStatObjectPtr != (UObject *)0x0) {
        FMemory::Free(this[1].AdditionalStatObjectPtr);
      }
      FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc(this);
      DestructItems<FSkelMeshComponentLODInfo,int>
                (*(FSkelMeshComponentLODInfo **)&this[-1].BoundsScale,this[-1].FeatureLevel);
      if (*(void **)&this[-1].BoundsScale != (void *)0x0) {
        FMemory::Free(*(void **)&this[-1].BoundsScale);
      }
      if (*(void **)&this[-1].VirtualTextureCullMips != (void *)0x0) {
        FMemory::Free(*(void **)&this[-1].VirtualTextureCullMips);
      }
      if (*(void **)&this[-1].CustomDepthStencilValue != (void *)0x0) {
        FMemory::Free(*(void **)&this[-1].CustomDepthStencilValue);
      }
      FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)&this[-6].CustomDepthStencilValue);
      this = (FPrimitiveSceneProxyDesc *)&this[7].PrimitiveComponentInterface;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFastGeoStaticMeshComponent,int> @ 14da0fd90

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
DestructItems<FFastGeoStaticMeshComponent,int>(FFastGeoStaticMeshComponent *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x3d8;
    do {
      FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc
                ((FStaticMeshSceneProxyDesc *)(puVar1 + 2));
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      if ((void *)puVar1[-3] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-3]);
      }
      FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent
                ((FFastGeoPrimitiveComponent *)(puVar1 + -0x7b));
      puVar1 = puVar1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::TSTR_168>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14da10450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FFastGeoComponentCluster::UpdateVisibility_Internal_::__l5::TSTR_168>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  FRenderCommandTag *pFVar16;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar17;
  undefined8 uVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar19;
  FTaskBase *this_02;
  FName FVar20;
  FNameEntryId FVar21;
  FNameEntryId FVar22;
  uint local_res10;
  uint uStackX_14;
  ETaskPriority local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar16 = (FRenderCommandTag *)
            TRenderCommandTag<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::TSTR_168>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar16->SpecId,pFVar16->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar16->SpecId);
  }
  bVar14 = IsInRenderingThread();
  if ((!bVar14) && ((GIsThreadedRendering != false || (bVar14 = IsInGameThread(), !bVar14)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar14 = IsInGameThread(), bVar14 &&
        (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar14)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_V__TRenderCommandTask_V__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___FRenderThreadCommandPipe____6B_
        ;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar16;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar9 = param_1->field_0x2c;
      uVar10 = param_1->field_0x2d;
      uVar11 = *(undefined2 *)&param_1->field_0x2e;
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)*(undefined4 *)&param_1->field_0x28;
      this_02[1].ExtendedPriority = uVar9;
      this_02[1].TaskTriggered = (atomic<bool>)uVar10;
      this_02[1]._padding_ = uVar11;
      *(undefined8 *)&param_1->field_0x28 = 0;
      uVar12 = *(undefined4 *)&param_1->field_0x18;
      uVar13 = *(undefined4 *)&param_1->field_0x1c;
      this_02[1]._padding_ = *(longlong *)&param_1->field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar12;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar13;
      this_02[1].Pipe = *(FPipe **)&param_1->field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_res18,
                 (EExtendedTaskPriority *)&local_res10);
      UE::Tasks::Private::FTaskBase::Init
                (this_02,L"GraphTask",local_res18[0],(EExtendedTaskPriority)local_res10,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar16);
    }
    goto LAB_14da10878;
  }
  pTVar4 = (pFVar16->StatId).StatIdPtr;
  FVar22.Value = 0;
  bVar14 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar20 = *(FName *)&pTVar4->Name;
  FVar21 = FVar20.ComparisonIndex.Value;
  uVar15 = FVar20.Number;
  if ((FVar21.Value == 0) && (uVar15 == 0)) {
LAB_14da10762:
    bVar6 = false;
    FVar20 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar14 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar21.Value;
        local_68.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar14 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14da10762;
    local_res10 = FVar21.Value;
    uStackX_14 = uVar15;
    local_58 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
    FVar22.Value = local_58.ComparisonIndex.Value;
  }
  pFVar17 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar5 = *(code **)param_1;
  plVar19 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar19 = *(longlong **)&param_1->field_0x28;
  }
  uVar18 = (**(code **)(*plVar19 + 8))();
  (*pcVar5)(uVar18,pFVar17);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar22.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_14da10878:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachComponent<FFastGeoComponentCluster_const_,FFastGeoPrimitiveComponent_const_,```UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l2::<lambda_1>::operator()'::__l19::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14da108b0

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
FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster_const_,FFastGeoPrimitiveComponent_const_,___UFastGeoWorldSubsystem::UFastGeoWorldSubsystem_::__l2::<lambda_1>::operator()_::__l19::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FFastGeoComponentCluster *param_1,<lambda_1> *param_2)

{
  int iVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FLinearColor_u_0 local_28;
  
  uVar4 = FFastGeoPrimitiveComponent::Type.ID;
  if ((FFastGeoStaticMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->StaticMeshComponents).ArrayNum;
    pFVar5 = (param_1->StaticMeshComponents).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x580;
    while( true ) {
      if ((param_1->StaticMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoStaticMeshComponent_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar6) break;
      if (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348) != (FPrimitiveSceneProxy *)0x0) {
        pFVar3 = &FLinearColor::White;
        if (UFastGeoWorldSubsystem::bEnableDebugView != false) {
          pFVar3 = &FLinearColor::Blue;
        }
        local_28._0_8_ = *(undefined8 *)&pFVar3->field0_0x0;
        local_28._8_8_ = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
        FPrimitiveSceneProxy::SetPrimitiveColor_GameThread
                  (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348),(FLinearColor *)&local_28._s_0);
      }
      pFVar5 = pFVar5 + 0x580;
    }
  }
  if ((FFastGeoInstancedStaticMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoInstancedStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoInstancedStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->InstancedStaticMeshComponents).ArrayNum;
    pFVar5 = (param_1->InstancedStaticMeshComponents).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x650;
    while( true ) {
      if ((param_1->InstancedStaticMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar6) break;
      if (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348) != (FPrimitiveSceneProxy *)0x0) {
        pFVar3 = &FLinearColor::White;
        if (UFastGeoWorldSubsystem::bEnableDebugView != false) {
          pFVar3 = &FLinearColor::Blue;
        }
        local_28._0_8_ = *(undefined8 *)&pFVar3->field0_0x0;
        local_28._8_8_ = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
        FPrimitiveSceneProxy::SetPrimitiveColor_GameThread
                  (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348),(FLinearColor *)&local_28._s_0);
      }
      pFVar5 = pFVar5 + 0x650;
    }
  }
  if ((FFastGeoSkinnedMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->SkinnedMeshComponents).ArrayNum;
    pFVar5 = (param_1->SkinnedMeshComponents).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x590;
    while( true ) {
      if ((param_1->SkinnedMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar6) break;
      if (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348) != (FPrimitiveSceneProxy *)0x0) {
        pFVar3 = &FLinearColor::White;
        if (UFastGeoWorldSubsystem::bEnableDebugView != false) {
          pFVar3 = &FLinearColor::Blue;
        }
        local_28._0_8_ = *(undefined8 *)&pFVar3->field0_0x0;
        local_28._8_8_ = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
        FPrimitiveSceneProxy::SetPrimitiveColor_GameThread
                  (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348),(FLinearColor *)&local_28._s_0);
      }
      pFVar5 = pFVar5 + 0x590;
    }
  }
  if ((FFastGeoInstancedSkinnedMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoInstancedSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoInstancedSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->InstancedSkinnedMeshComponents).ArrayNum;
    pFVar5 = (param_1->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x5f0;
    while( true ) {
      if ((param_1->InstancedSkinnedMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar6) break;
      if (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348) != (FPrimitiveSceneProxy *)0x0) {
        pFVar3 = &FLinearColor::White;
        if (UFastGeoWorldSubsystem::bEnableDebugView != false) {
          pFVar3 = &FLinearColor::Blue;
        }
        local_28._0_8_ = *(undefined8 *)&pFVar3->field0_0x0;
        local_28._8_8_ = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
        FPrimitiveSceneProxy::SetPrimitiveColor_GameThread
                  (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348),(FLinearColor *)&local_28._s_0);
      }
      pFVar5 = pFVar5 + 0x5f0;
    }
  }
  if ((FFastGeoProceduralISMComponent::Type.ID == uVar4) ||
     ((FFastGeoProceduralISMComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoProceduralISMComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->ProceduralISMComponents).ArrayNum;
    pFVar5 = (param_1->ProceduralISMComponents).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x5f0;
    while( true ) {
      if ((param_1->ProceduralISMComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoProceduralISMComponent_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar6) break;
      if (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348) != (FPrimitiveSceneProxy *)0x0) {
        pFVar3 = &FLinearColor::White;
        if (UFastGeoWorldSubsystem::bEnableDebugView != false) {
          pFVar3 = &FLinearColor::Blue;
        }
        local_28._0_8_ = *(undefined8 *)&pFVar3->field0_0x0;
        local_28._8_8_ = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
        FPrimitiveSceneProxy::SetPrimitiveColor_GameThread
                  (*(FPrimitiveSceneProxy **)(pFVar5 + 0x348),(FLinearColor *)&local_28._s_0);
      }
      pFVar5 = pFVar5 + 0x5f0;
    }
  }
  return;
}

// ForEachComponent<FFastGeoComponentCluster_const_,FFastGeoStaticMeshComponentBase_const_,`FFastGeoHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 14da10bb0

void __cdecl
FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster_const_,FFastGeoStaticMeshComponentBase_const_,_FFastGeoHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
          (FFastGeoComponentCluster *param_1,<lambda_1> *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong local_res10;
  UObject *local_res18;
  UObject *local_res20;
  
  uVar5 = FFastGeoStaticMeshComponentBase::Type.ID;
  if ((FFastGeoStaticMeshComponent::Type.ID == FFastGeoStaticMeshComponentBase::Type.ID) ||
     ((FFastGeoStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoStaticMeshComponent::Type.ParentType,
                          &FFastGeoStaticMeshComponentBase::Type), bVar2)))) {
    iVar1 = (param_1->StaticMeshComponents).ArrayNum;
    pFVar6 = (param_1->StaticMeshComponents).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x580;
    while( true ) {
      if ((param_1->StaticMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoStaticMeshComponent_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      uVar5 = FFastGeoStaticMeshComponentBase::Type.ID;
      if (pFVar6 == pFVar7) break;
      if ((*(uint *)(pFVar6 + 8) != FFastGeoInstancedStaticMeshComponent::Type.ID) &&
         ((*(FFastGeoElementType **)(pFVar6 + 0x10) == (FFastGeoElementType *)0x0 ||
          (bVar2 = FFastGeoElementType::IsA
                             (*(FFastGeoElementType **)(pFVar6 + 0x10),
                              &FFastGeoInstancedStaticMeshComponent::Type), !bVar2)))) {
        iVar8 = 0;
        iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
        if (0 < iVar3) {
          do {
            lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x58))(pFVar6,iVar8);
            if (lVar4 != 0) {
              local_res10 = lVar4;
              TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                        (param_2->AssetsToWarmup,&local_res18,(bool *)&local_res10);
            }
            iVar8 = iVar8 + 1;
            iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
          } while (iVar8 < iVar3);
        }
        lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x110))(pFVar6);
        if (*(longlong *)(lVar4 + 0x100) != 0) {
          local_res10 = *(longlong *)(lVar4 + 0x100);
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                    (param_2->AssetsToWarmup,&local_res20,(bool *)&local_res10);
        }
      }
      pFVar6 = pFVar6 + 0x580;
    }
  }
  if ((FFastGeoInstancedStaticMeshComponent::Type.ID == uVar5) ||
     ((FFastGeoInstancedStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoInstancedStaticMeshComponent::Type.ParentType,
                          &FFastGeoStaticMeshComponentBase::Type), bVar2)))) {
    iVar1 = (param_1->InstancedStaticMeshComponents).ArrayNum;
    pFVar6 = (param_1->InstancedStaticMeshComponents).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x650;
    while( true ) {
      if ((param_1->InstancedStaticMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res10);
      }
      uVar5 = FFastGeoStaticMeshComponentBase::Type.ID;
      if (pFVar6 == pFVar7) break;
      if ((*(uint *)(pFVar6 + 8) != FFastGeoInstancedStaticMeshComponent::Type.ID) &&
         ((*(FFastGeoElementType **)(pFVar6 + 0x10) == (FFastGeoElementType *)0x0 ||
          (bVar2 = FFastGeoElementType::IsA
                             (*(FFastGeoElementType **)(pFVar6 + 0x10),
                              &FFastGeoInstancedStaticMeshComponent::Type), !bVar2)))) {
        iVar8 = 0;
        iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
        if (0 < iVar3) {
          do {
            lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x58))(pFVar6,iVar8);
            if (lVar4 != 0) {
              local_res10 = lVar4;
              TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                        (param_2->AssetsToWarmup,&local_res18,(bool *)&local_res10);
            }
            iVar8 = iVar8 + 1;
            iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
          } while (iVar8 < iVar3);
        }
        lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x110))(pFVar6);
        if (*(longlong *)(lVar4 + 0x100) != 0) {
          local_res10 = *(longlong *)(lVar4 + 0x100);
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                    (param_2->AssetsToWarmup,&local_res20,(bool *)&local_res10);
        }
      }
      pFVar6 = pFVar6 + 0x650;
    }
  }
  if ((FFastGeoSkinnedMeshComponent::Type.ID == uVar5) ||
     ((FFastGeoSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoStaticMeshComponentBase::Type), bVar2)))) {
    iVar1 = (param_1->SkinnedMeshComponents).ArrayNum;
    pFVar6 = (param_1->SkinnedMeshComponents).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x590;
    while( true ) {
      if ((param_1->SkinnedMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      uVar5 = FFastGeoStaticMeshComponentBase::Type.ID;
      if (pFVar6 == pFVar7) break;
      if ((*(uint *)(pFVar6 + 8) != FFastGeoInstancedStaticMeshComponent::Type.ID) &&
         ((*(FFastGeoElementType **)(pFVar6 + 0x10) == (FFastGeoElementType *)0x0 ||
          (bVar2 = FFastGeoElementType::IsA
                             (*(FFastGeoElementType **)(pFVar6 + 0x10),
                              &FFastGeoInstancedStaticMeshComponent::Type), !bVar2)))) {
        iVar8 = 0;
        iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
        if (0 < iVar3) {
          do {
            lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x58))(pFVar6,iVar8);
            if (lVar4 != 0) {
              local_res10 = lVar4;
              TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                        (param_2->AssetsToWarmup,&local_res18,(bool *)&local_res10);
            }
            iVar8 = iVar8 + 1;
            iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
          } while (iVar8 < iVar3);
        }
        lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x110))(pFVar6);
        if (*(longlong *)(lVar4 + 0x100) != 0) {
          local_res10 = *(longlong *)(lVar4 + 0x100);
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                    (param_2->AssetsToWarmup,&local_res20,(bool *)&local_res10);
        }
      }
      pFVar6 = pFVar6 + 0x590;
    }
  }
  if ((FFastGeoInstancedSkinnedMeshComponent::Type.ID == uVar5) ||
     ((FFastGeoInstancedSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoInstancedSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoStaticMeshComponentBase::Type), bVar2)))) {
    iVar1 = (param_1->InstancedSkinnedMeshComponents).ArrayNum;
    pFVar6 = (param_1->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x5f0;
    while( true ) {
      if ((param_1->InstancedSkinnedMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res10);
      }
      uVar5 = FFastGeoStaticMeshComponentBase::Type.ID;
      if (pFVar6 == pFVar7) break;
      if ((*(uint *)(pFVar6 + 8) != FFastGeoInstancedStaticMeshComponent::Type.ID) &&
         ((*(FFastGeoElementType **)(pFVar6 + 0x10) == (FFastGeoElementType *)0x0 ||
          (bVar2 = FFastGeoElementType::IsA
                             (*(FFastGeoElementType **)(pFVar6 + 0x10),
                              &FFastGeoInstancedStaticMeshComponent::Type), !bVar2)))) {
        iVar8 = 0;
        iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
        if (0 < iVar3) {
          do {
            lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x58))(pFVar6,iVar8);
            if (lVar4 != 0) {
              local_res10 = lVar4;
              TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                        (param_2->AssetsToWarmup,&local_res18,(bool *)&local_res10);
            }
            iVar8 = iVar8 + 1;
            iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
          } while (iVar8 < iVar3);
        }
        lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x110))(pFVar6);
        if (*(longlong *)(lVar4 + 0x100) != 0) {
          local_res10 = *(longlong *)(lVar4 + 0x100);
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                    (param_2->AssetsToWarmup,&local_res20,(bool *)&local_res10);
        }
      }
      pFVar6 = pFVar6 + 0x5f0;
    }
  }
  if ((FFastGeoProceduralISMComponent::Type.ID == uVar5) ||
     ((FFastGeoProceduralISMComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoProceduralISMComponent::Type.ParentType,
                          &FFastGeoStaticMeshComponentBase::Type), bVar2)))) {
    iVar1 = (param_1->ProceduralISMComponents).ArrayNum;
    pFVar6 = (param_1->ProceduralISMComponents).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x5f0;
    while( true ) {
      if ((param_1->ProceduralISMComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoProceduralISMComponent_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      if (pFVar6 == pFVar7) break;
      if ((*(uint *)(pFVar6 + 8) != FFastGeoInstancedStaticMeshComponent::Type.ID) &&
         ((*(FFastGeoElementType **)(pFVar6 + 0x10) == (FFastGeoElementType *)0x0 ||
          (bVar2 = FFastGeoElementType::IsA
                             (*(FFastGeoElementType **)(pFVar6 + 0x10),
                              &FFastGeoInstancedStaticMeshComponent::Type), !bVar2)))) {
        iVar8 = 0;
        iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
        if (0 < iVar3) {
          do {
            lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x58))(pFVar6,iVar8);
            if (lVar4 != 0) {
              local_res10 = lVar4;
              TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                        (param_2->AssetsToWarmup,&local_res18,(bool *)&local_res10);
            }
            iVar8 = iVar8 + 1;
            iVar3 = (**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
          } while (iVar8 < iVar3);
        }
        lVar4 = (**(code **)(*(longlong *)pFVar6 + 0x110))(pFVar6);
        if (*(longlong *)(lVar4 + 0x100) != 0) {
          local_res10 = *(longlong *)(lVar4 + 0x100);
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
                    (param_2->AssetsToWarmup,&local_res20,(bool *)&local_res10);
        }
      }
      pFVar6 = pFVar6 + 0x5f0;
    }
  }
  return;
}

// ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,``UFastGeoContainer::InitializeDynamicProperties'::__l5::<lambda_2>::operator()'::__l2::<lambda_1>_> @ 14da11130

void __cdecl
FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,__UFastGeoContainer::InitializeDynamicProperties_::__l5::<lambda_2>::operator()_::__l2::<lambda_1>_>
          (FFastGeoComponentCluster *param_1,<lambda_1> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  
  iVar1 = (param_1->StaticMeshComponents).ArrayNum;
  pFVar9 = (param_1->StaticMeshComponents).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x580;
  while( true ) {
    if ((param_1->StaticMeshComponents).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFastGeoStaticMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    cVar4 = (**(code **)(*(longlong *)pFVar9 + 0x10))(pFVar9);
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)param_2;
      pFVar7 = (ForAnyElementType *)(lVar2 + 0xf0);
      local_60 = pFVar9;
      if ((pFVar7->Data <= (FScriptContainerElement *)&local_60) &&
         ((FScriptContainerElement *)&local_60 < pFVar7->Data + (longlong)*(int *)(lVar2 + 0xfc) * 8
         )) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = *(int *)(lVar2 + 0xf8);
      if (iVar6 == *(int *)(lVar2 + 0xfc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar7,(int *)(lVar2 + 0xfc));
      }
      *(int *)(lVar2 + 0xf8) = iVar6 + 1;
      *(FScriptContainerElement **)(pFVar7->Data + (longlong)iVar6 * 8) = local_60;
    }
    pFVar9 = pFVar9 + 0x580;
  }
  iVar1 = (param_1->InstancedStaticMeshComponents).ArrayNum;
  pFVar9 = (param_1->InstancedStaticMeshComponents).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x650;
  while( true ) {
    if ((param_1->InstancedStaticMeshComponents).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar8) break;
    cVar4 = (**(code **)(*(longlong *)pFVar9 + 0x10))(pFVar9);
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)param_2;
      pFVar7 = (ForAnyElementType *)(lVar2 + 0xf0);
      local_58 = pFVar9;
      if ((pFVar7->Data <= (FScriptContainerElement *)&local_58) &&
         ((FScriptContainerElement *)&local_58 < pFVar7->Data + (longlong)*(int *)(lVar2 + 0xfc) * 8
         )) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = *(int *)(lVar2 + 0xf8);
      if (iVar6 == *(int *)(lVar2 + 0xfc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar7,(int *)(lVar2 + 0xfc));
      }
      *(int *)(lVar2 + 0xf8) = iVar6 + 1;
      *(FScriptContainerElement **)(pFVar7->Data + (longlong)iVar6 * 8) = local_58;
    }
    pFVar9 = pFVar9 + 0x650;
  }
  iVar1 = (param_1->SkinnedMeshComponents).ArrayNum;
  pFVar9 = (param_1->SkinnedMeshComponents).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x590;
  while( true ) {
    if ((param_1->SkinnedMeshComponents).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar9 == pFVar8) break;
    cVar4 = (**(code **)(*(longlong *)pFVar9 + 0x10))(pFVar9);
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)param_2;
      pFVar7 = (ForAnyElementType *)(lVar2 + 0xf0);
      local_50 = pFVar9;
      if ((pFVar7->Data <= (FScriptContainerElement *)&local_50) &&
         ((FScriptContainerElement *)&local_50 < pFVar7->Data + (longlong)*(int *)(lVar2 + 0xfc) * 8
         )) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = *(int *)(lVar2 + 0xf8);
      if (iVar6 == *(int *)(lVar2 + 0xfc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar7,(int *)(lVar2 + 0xfc));
      }
      *(int *)(lVar2 + 0xf8) = iVar6 + 1;
      *(FScriptContainerElement **)(pFVar7->Data + (longlong)iVar6 * 8) = local_50;
    }
    pFVar9 = pFVar9 + 0x590;
  }
  iVar1 = (param_1->InstancedSkinnedMeshComponents).ArrayNum;
  pFVar9 = (param_1->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x5f0;
  while( true ) {
    if ((param_1->InstancedSkinnedMeshComponents).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar9 == pFVar8) break;
    cVar4 = (**(code **)(*(longlong *)pFVar9 + 0x10))(pFVar9);
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)param_2;
      pFVar7 = (ForAnyElementType *)(lVar2 + 0xf0);
      local_48 = pFVar9;
      if ((pFVar7->Data <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar7->Data + (longlong)*(int *)(lVar2 + 0xfc) * 8
         )) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = *(int *)(lVar2 + 0xf8);
      if (iVar6 == *(int *)(lVar2 + 0xfc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar7,(int *)(lVar2 + 0xfc));
      }
      *(int *)(lVar2 + 0xf8) = iVar6 + 1;
      *(FScriptContainerElement **)(pFVar7->Data + (longlong)iVar6 * 8) = local_48;
    }
    pFVar9 = pFVar9 + 0x5f0;
  }
  iVar1 = (param_1->ProceduralISMComponents).ArrayNum;
  pFVar9 = (param_1->ProceduralISMComponents).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x5f0;
  while( true ) {
    if ((param_1->ProceduralISMComponents).ArrayNum != iVar1) {
      local_68[0] = 0;
      `TCheckedPointerIterator<FFastGeoProceduralISMComponent,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_68);
    }
    if (pFVar9 == pFVar8) break;
    cVar4 = (**(code **)(*(longlong *)pFVar9 + 0x10))(pFVar9);
    if (cVar4 != '\0') {
      lVar2 = *(longlong *)param_2;
      pFVar7 = (ForAnyElementType *)(lVar2 + 0xf0);
      local_40 = pFVar9;
      if ((pFVar7->Data <= (FScriptContainerElement *)&local_40) &&
         ((FScriptContainerElement *)&local_40 < pFVar7->Data + (longlong)*(int *)(lVar2 + 0xfc) * 8
         )) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = *(int *)(lVar2 + 0xf8);
      if (iVar6 == *(int *)(lVar2 + 0xfc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar7,(int *)(lVar2 + 0xfc));
      }
      *(int *)(lVar2 + 0xf8) = iVar6 + 1;
      *(FScriptContainerElement **)(pFVar7->Data + (longlong)iVar6 * 8) = local_40;
    }
    pFVar9 = pFVar9 + 0x5f0;
  }
  return;
}

// ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,`FFastGeoComponentCluster::InitializeDynamicProperties'::__l2::<lambda_1>_> @ 14da11630

void __cdecl
FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,_FFastGeoComponentCluster::InitializeDynamicProperties_::__l2::<lambda_1>_>
          (FFastGeoComponentCluster *param_1,<lambda_1> *param_2)

{
  int iVar1;
  FFastGeoComponentCluster *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [24];
  
  iVar1 = (param_1->StaticMeshComponents).ArrayNum;
  pFVar5 = (param_1->StaticMeshComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x580;
  while( true ) {
    if ((param_1->StaticMeshComponents).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFastGeoStaticMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pFVar2 = param_2->__this;
    if (pFVar2 == (FFastGeoComponentCluster *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x27,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(FFastGeoComponentCluster **)(pFVar5 + 0x20) = pFVar2;
    (**(code **)(*(longlong *)pFVar5 + 0x20))(pFVar5);
    pFVar5 = pFVar5 + 0x580;
  }
  iVar1 = (param_1->InstancedStaticMeshComponents).ArrayNum;
  pFVar5 = (param_1->InstancedStaticMeshComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x650;
  while( true ) {
    if ((param_1->InstancedStaticMeshComponents).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    pFVar2 = param_2->__this;
    if (pFVar2 == (FFastGeoComponentCluster *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x27,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(FFastGeoComponentCluster **)(pFVar5 + 0x20) = pFVar2;
    (**(code **)(*(longlong *)pFVar5 + 0x20))(pFVar5);
    pFVar5 = pFVar5 + 0x650;
  }
  iVar1 = (param_1->SkinnedMeshComponents).ArrayNum;
  pFVar5 = (param_1->SkinnedMeshComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x590;
  while( true ) {
    if ((param_1->SkinnedMeshComponents).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    pFVar2 = param_2->__this;
    if (pFVar2 == (FFastGeoComponentCluster *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x27,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(FFastGeoComponentCluster **)(pFVar5 + 0x20) = pFVar2;
    (**(code **)(*(longlong *)pFVar5 + 0x20))(pFVar5);
    pFVar5 = pFVar5 + 0x590;
  }
  iVar1 = (param_1->InstancedSkinnedMeshComponents).ArrayNum;
  pFVar5 = (param_1->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x5f0;
  while( true ) {
    if ((param_1->InstancedSkinnedMeshComponents).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar5 == pFVar6) break;
    pFVar2 = param_2->__this;
    if (pFVar2 == (FFastGeoComponentCluster *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x27,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(FFastGeoComponentCluster **)(pFVar5 + 0x20) = pFVar2;
    (**(code **)(*(longlong *)pFVar5 + 0x20))(pFVar5);
    pFVar5 = pFVar5 + 0x5f0;
  }
  iVar1 = (param_1->ProceduralISMComponents).ArrayNum;
  pFVar5 = (param_1->ProceduralISMComponents).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x5f0;
  while( true ) {
    if ((param_1->ProceduralISMComponents).ArrayNum != iVar1) {
      local_48[0] = 0;
      `TCheckedPointerIterator<FFastGeoProceduralISMComponent,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_48);
    }
    if (pFVar5 == pFVar6) break;
    pFVar2 = param_2->__this;
    if (pFVar2 == (FFastGeoComponentCluster *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x27,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(FFastGeoComponentCluster **)(pFVar5 + 0x20) = pFVar2;
    (**(code **)(*(longlong *)pFVar5 + 0x20))(pFVar5);
    pFVar5 = pFVar5 + 0x5f0;
  }
  return;
}

// ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14da118b0

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
FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,__UFastGeoContainer::RegisterToNavigationSystem_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FFastGeoComponentCluster *param_1,<lambda_1> *param_2)

{
  int iVar1;
  bool bVar2;
  FFastGeoPrimitiveComponent *pFVar3;
  uint uVar4;
  FFastGeoPrimitiveComponent *pFVar5;
  undefined1 local_res10 [8];
  
  uVar4 = FFastGeoPrimitiveComponent::Type.ID;
  if ((FFastGeoStaticMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->StaticMeshComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)(param_1->StaticMeshComponents).AllocatorInstance.Data;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x580);
    while( true ) {
      if ((param_1->StaticMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoStaticMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar3) break;
      ``UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::
      <lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.SolverAsyncDeltaTime;
    }
  }
  if ((FFastGeoInstancedStaticMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoInstancedStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoInstancedStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->InstancedStaticMeshComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)
             (param_1->InstancedStaticMeshComponents).AllocatorInstance.Data;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x650);
    while( true ) {
      if ((param_1->InstancedStaticMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar3) break;
      ``UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::
      <lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.WalkableSlopeOverride;
    }
  }
  if ((FFastGeoSkinnedMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->SkinnedMeshComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)(param_1->SkinnedMeshComponents).AllocatorInstance.Data;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x590);
    while( true ) {
      if ((param_1->SkinnedMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar3) break;
      ``UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::
      <lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.Scale3D;
    }
  }
  if ((FFastGeoInstancedSkinnedMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoInstancedSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoInstancedSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->InstancedSkinnedMeshComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)
             (param_1->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x5f0);
    while( true ) {
      if ((param_1->InstancedSkinnedMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar3) break;
      ``UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::
      <lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.CustomDOFPlaneNormal;
    }
  }
  if ((FFastGeoProceduralISMComponent::Type.ID == uVar4) ||
     ((FFastGeoProceduralISMComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoProceduralISMComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->ProceduralISMComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)(param_1->ProceduralISMComponents).AllocatorInstance.Data
    ;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x5f0);
    while( true ) {
      if ((param_1->ProceduralISMComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoProceduralISMComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar3) break;
      ``UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::
      <lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.CustomDOFPlaneNormal;
    }
  }
  return;
}

// ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Unregister'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14da11b00

void __cdecl
FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,__UFastGeoContainer::Unregister_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FFastGeoComponentCluster *param_1,<lambda_1> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68;
  undefined1 local_67 [7];
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  
  uVar6 = FFastGeoPrimitiveComponent::Type.ID;
  if ((FFastGeoStaticMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar4 = FFastGeoElementType::IsA
                         (FFastGeoStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar4)))) {
    iVar1 = (param_1->StaticMeshComponents).ArrayNum;
    pFVar8 = (param_1->StaticMeshComponents).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar1 * 0x580;
    while( true ) {
      if ((param_1->StaticMeshComponents).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FFastGeoStaticMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      uVar6 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar8 == pFVar7) break;
      if (pFVar8[0x390] == (FScriptContainerElement)0x3) {
        lVar2 = *(longlong *)param_2;
        local_60 = pFVar8;
        if (((*(FScriptContainerElement ***)(lVar2 + 0x70) <= &local_60) &&
            (&local_60 < *(FScriptContainerElement ***)(lVar2 + 0x70) + *(int *)(lVar2 + 0x7c))) &&
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
        iVar5 = *(int *)(lVar2 + 0x78);
        if (iVar5 == *(int *)(lVar2 + 0x7c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar2 + 0x70),(int *)(lVar2 + 0x7c));
        }
        *(int *)(lVar2 + 0x78) = iVar5 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar5 * 8) = local_60;
      }
      pFVar8 = pFVar8 + 0x580;
    }
  }
  if ((FFastGeoInstancedStaticMeshComponent::Type.ID == uVar6) ||
     ((FFastGeoInstancedStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar4 = FFastGeoElementType::IsA
                         (FFastGeoInstancedStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar4)))) {
    iVar1 = (param_1->InstancedStaticMeshComponents).ArrayNum;
    pFVar8 = (param_1->InstancedStaticMeshComponents).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar1 * 0x650;
    while( true ) {
      if ((param_1->InstancedStaticMeshComponents).ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      uVar6 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar8 == pFVar7) break;
      if (pFVar8[0x390] == (FScriptContainerElement)0x3) {
        lVar2 = *(longlong *)param_2;
        local_58 = pFVar8;
        if (((*(FScriptContainerElement ***)(lVar2 + 0x70) <= &local_58) &&
            (&local_58 < *(FScriptContainerElement ***)(lVar2 + 0x70) + *(int *)(lVar2 + 0x7c))) &&
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
        iVar5 = *(int *)(lVar2 + 0x78);
        if (iVar5 == *(int *)(lVar2 + 0x7c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar2 + 0x70),(int *)(lVar2 + 0x7c));
        }
        *(int *)(lVar2 + 0x78) = iVar5 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar5 * 8) = local_58;
      }
      pFVar8 = pFVar8 + 0x650;
    }
  }
  if ((FFastGeoSkinnedMeshComponent::Type.ID == uVar6) ||
     ((FFastGeoSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar4 = FFastGeoElementType::IsA
                         (FFastGeoSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar4)))) {
    iVar1 = (param_1->SkinnedMeshComponents).ArrayNum;
    pFVar8 = (param_1->SkinnedMeshComponents).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar1 * 0x590;
    while( true ) {
      if ((param_1->SkinnedMeshComponents).ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      uVar6 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar8 == pFVar7) break;
      if (pFVar8[0x390] == (FScriptContainerElement)0x3) {
        lVar2 = *(longlong *)param_2;
        local_50 = pFVar8;
        if (((*(FScriptContainerElement ***)(lVar2 + 0x70) <= &local_50) &&
            (&local_50 < *(FScriptContainerElement ***)(lVar2 + 0x70) + *(int *)(lVar2 + 0x7c))) &&
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
        iVar5 = *(int *)(lVar2 + 0x78);
        if (iVar5 == *(int *)(lVar2 + 0x7c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar2 + 0x70),(int *)(lVar2 + 0x7c));
        }
        *(int *)(lVar2 + 0x78) = iVar5 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar5 * 8) = local_50;
      }
      pFVar8 = pFVar8 + 0x590;
    }
  }
  if ((FFastGeoInstancedSkinnedMeshComponent::Type.ID == uVar6) ||
     ((FFastGeoInstancedSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar4 = FFastGeoElementType::IsA
                         (FFastGeoInstancedSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar4)))) {
    iVar1 = (param_1->InstancedSkinnedMeshComponents).ArrayNum;
    pFVar8 = (param_1->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar1 * 0x5f0;
    while( true ) {
      if ((param_1->InstancedSkinnedMeshComponents).ArrayNum != iVar1) {
        local_68 = 0;
        `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_68);
      }
      uVar6 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar8 == pFVar7) break;
      if (pFVar8[0x390] == (FScriptContainerElement)0x3) {
        lVar2 = *(longlong *)param_2;
        local_48 = pFVar8;
        if (((*(FScriptContainerElement ***)(lVar2 + 0x70) <= &local_48) &&
            (&local_48 < *(FScriptContainerElement ***)(lVar2 + 0x70) + *(int *)(lVar2 + 0x7c))) &&
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
        iVar5 = *(int *)(lVar2 + 0x78);
        if (iVar5 == *(int *)(lVar2 + 0x7c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar2 + 0x70),(int *)(lVar2 + 0x7c));
        }
        *(int *)(lVar2 + 0x78) = iVar5 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar5 * 8) = local_48;
      }
      pFVar8 = pFVar8 + 0x5f0;
    }
  }
  if ((FFastGeoProceduralISMComponent::Type.ID == uVar6) ||
     ((FFastGeoProceduralISMComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar4 = FFastGeoElementType::IsA
                         (FFastGeoProceduralISMComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar4)))) {
    iVar1 = (param_1->ProceduralISMComponents).ArrayNum;
    pFVar8 = (param_1->ProceduralISMComponents).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar1 * 0x5f0;
    while( true ) {
      if ((param_1->ProceduralISMComponents).ArrayNum != iVar1) {
        local_67[0] = 0;
        `TCheckedPointerIterator<FFastGeoProceduralISMComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_67);
      }
      if (pFVar8 == pFVar7) break;
      if (pFVar8[0x390] == (FScriptContainerElement)0x3) {
        lVar2 = *(longlong *)param_2;
        local_40 = pFVar8;
        if (((*(FScriptContainerElement ***)(lVar2 + 0x70) <= &local_40) &&
            (&local_40 < *(FScriptContainerElement ***)(lVar2 + 0x70) + *(int *)(lVar2 + 0x7c))) &&
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
        iVar5 = *(int *)(lVar2 + 0x78);
        if (iVar5 == *(int *)(lVar2 + 0x7c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar2 + 0x70),(int *)(lVar2 + 0x7c));
        }
        *(int *)(lVar2 + 0x78) = iVar5 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar5 * 8) = local_40;
      }
      pFVar8 = pFVar8 + 0x5f0;
    }
  }
  return;
}

// ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,`FFastGeoComponentCluster::UpdateVisibility'::__l2::<lambda_1>_> @ 14da120d0

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
FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,_FFastGeoComponentCluster::UpdateVisibility_::__l2::<lambda_1>_>
          (FFastGeoComponentCluster *param_1,<lambda_1> *param_2)

{
  int iVar1;
  bool bVar2;
  FFastGeoPrimitiveComponent *pFVar3;
  uint uVar4;
  FFastGeoPrimitiveComponent *pFVar5;
  undefined1 local_res10 [8];
  
  uVar4 = FFastGeoPrimitiveComponent::Type.ID;
  if ((FFastGeoStaticMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->StaticMeshComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)(param_1->StaticMeshComponents).AllocatorInstance.Data;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x580);
    while( true ) {
      if ((param_1->StaticMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoStaticMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar3) break;
      `FFastGeoComponentCluster::UpdateVisibility'::__l2::<lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.SolverAsyncDeltaTime;
    }
  }
  if ((FFastGeoInstancedStaticMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoInstancedStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoInstancedStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->InstancedStaticMeshComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)
             (param_1->InstancedStaticMeshComponents).AllocatorInstance.Data;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x650);
    while( true ) {
      if ((param_1->InstancedStaticMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar3) break;
      `FFastGeoComponentCluster::UpdateVisibility'::__l2::<lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.WalkableSlopeOverride;
    }
  }
  if ((FFastGeoSkinnedMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->SkinnedMeshComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)(param_1->SkinnedMeshComponents).AllocatorInstance.Data;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x590);
    while( true ) {
      if ((param_1->SkinnedMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar3) break;
      `FFastGeoComponentCluster::UpdateVisibility'::__l2::<lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.Scale3D;
    }
  }
  if ((FFastGeoInstancedSkinnedMeshComponent::Type.ID == uVar4) ||
     ((FFastGeoInstancedSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoInstancedSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->InstancedSkinnedMeshComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)
             (param_1->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x5f0);
    while( true ) {
      if ((param_1->InstancedSkinnedMeshComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      uVar4 = FFastGeoPrimitiveComponent::Type.ID;
      if (pFVar5 == pFVar3) break;
      `FFastGeoComponentCluster::UpdateVisibility'::__l2::<lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.CustomDOFPlaneNormal;
    }
  }
  if ((FFastGeoProceduralISMComponent::Type.ID == uVar4) ||
     ((FFastGeoProceduralISMComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar2 = FFastGeoElementType::IsA
                         (FFastGeoProceduralISMComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar2)))) {
    iVar1 = (param_1->ProceduralISMComponents).ArrayNum;
    pFVar5 = (FFastGeoPrimitiveComponent *)(param_1->ProceduralISMComponents).AllocatorInstance.Data
    ;
    pFVar3 = (FFastGeoPrimitiveComponent *)((longlong)pFVar5 + (longlong)iVar1 * 0x5f0);
    while( true ) {
      if ((param_1->ProceduralISMComponents).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoProceduralISMComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar3) break;
      `FFastGeoComponentCluster::UpdateVisibility'::__l2::<lambda_1>::operator()(param_2,pFVar5);
      pFVar5 = (FFastGeoPrimitiveComponent *)&pFVar5[1].BodyInstance.CustomDOFPlaneNormal;
    }
  }
  return;
}

// ForEachComponentCluster<UFastGeoContainer,FFastGeoHLOD,`UFastGeoWorldSubsystem::ForEachHLODObjectInCell'::__l19::<lambda_1>_> @ 14da12320

void __cdecl
UFastGeoContainer::
ForEachComponentCluster<UFastGeoContainer,FFastGeoHLOD,_UFastGeoWorldSubsystem::ForEachHLODObjectInCell_::__l19::<lambda_1>_>
          (UFastGeoContainer *param_1,<lambda_1> *param_2)

{
  int iVar1;
  TFunction<void___cdecl(IWorldPartitionHLODObject_*)> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *local_res10;
  
  if (FFastGeoComponentCluster::Type.ID != FFastGeoHLOD::Type.ID) {
    if (FFastGeoComponentCluster::Type.ParentType == (FFastGeoElementType *)0x0) goto LAB_14da123f5;
    bVar4 = FFastGeoElementType::IsA(FFastGeoComponentCluster::Type.ParentType,&FFastGeoHLOD::Type);
    if (!bVar4) goto LAB_14da123f5;
  }
  iVar1 = (param_1->ComponentClusters).ArrayNum;
  pFVar7 = (param_1->ComponentClusters).AllocatorInstance.Data;
  pFVar8 = pFVar7;
  while( true ) {
    if ((param_1->ComponentClusters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (pFVar8 == pFVar7 + (longlong)iVar1 * 0x88) break;
    pTVar2 = param_2->InFunc;
    local_res10 = pFVar8 + 0x88;
    if (pFVar8 == (FScriptContainerElement *)0x0) {
      local_res10 = (FScriptContainerElement *)0x0;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar2);
    pcVar3 = *(code **)pTVar2;
    plVar6 = *(longlong **)&pTVar2->field_0x28;
    if (*(longlong **)&pTVar2->field_0x28 == (longlong *)0x0) {
      plVar6 = (longlong *)&pTVar2->field_0x10;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(uVar5,&local_res10);
    pFVar8 = pFVar8 + 0x88;
  }
LAB_14da123f5:
  iVar1 = (param_1->HLODs).ArrayNum;
  pFVar7 = (param_1->HLODs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 200;
  while( true ) {
    if ((param_1->HLODs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar7 == pFVar8) break;
    pTVar2 = param_2->InFunc;
    local_res10 = pFVar7 + 0x88;
    if (pFVar7 == (FScriptContainerElement *)0x0) {
      local_res10 = (FScriptContainerElement *)0x0;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar2);
    pcVar3 = *(code **)pTVar2;
    plVar6 = *(longlong **)&pTVar2->field_0x28;
    if (*(longlong **)&pTVar2->field_0x28 == (longlong *)0x0) {
      plVar6 = (longlong *)&pTVar2->field_0x10;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(uVar5,&local_res10);
    pFVar7 = pFVar7 + 200;
  }
  return;
}

// GetMaterialMeshName<FFastGeoInstancedStaticMeshComponent> @ 14da13080

FString * __cdecl
Nanite::Private::GetMaterialMeshName<FFastGeoInstancedStaticMeshComponent>
          (FString *__return_storage_ptr__,FFastGeoInstancedStaticMeshComponent *param_1)

{
  longlong lVar1;
  FName local_res8 [4];
  
  lVar1 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
  local_res8[0] = *(FName *)(*(longlong *)(lVar1 + 0x100) + 0x18);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialMeshName<FFastGeoProceduralISMComponent> @ 14da130d0

FString * __cdecl
Nanite::Private::GetMaterialMeshName<FFastGeoProceduralISMComponent>
          (FString *__return_storage_ptr__,FFastGeoProceduralISMComponent *param_1)

{
  longlong lVar1;
  FName local_res8 [4];
  
  lVar1 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
  local_res8[0] = *(FName *)(*(longlong *)(lVar1 + 0x100) + 0x18);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialMeshName<FFastGeoStaticMeshComponentBase> @ 14da13120

FString * __cdecl
Nanite::Private::GetMaterialMeshName<FFastGeoStaticMeshComponentBase>
          (FString *__return_storage_ptr__,FFastGeoStaticMeshComponentBase *param_1)

{
  longlong lVar1;
  FName local_res8 [4];
  
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  local_res8[0] = *(FName *)(*(longlong *)(lVar1 + 0x100) + 0x18);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialSlotInfos<FFastGeoInstancedStaticMeshComponent> @ 14da13340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
* __cdecl Nanite::Private::GetMaterialSlotInfos<FFastGeoInstancedStaticMeshComponent>
                    (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,FFastGeoInstancedStaticMeshComponent *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar8;
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  UMaterialInterface **local_a8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [8];
  FFastGeoInstancedStaticMeshComponent *local_70;
  UMaterialInterface *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar11 = 0;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x20;
  local_70 = param_1;
  lVar7 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
  lVar7 = *(longlong *)(lVar7 + 0x100);
  if (lVar7 != 0) {
    lVar12 = *(longlong *)(lVar7 + 0x170);
    iVar2 = *(int *)(lVar7 + 0x178);
    puVar14 = (undefined8 *)(lVar12 + 0x18);
    lVar13 = (longlong)iVar2 * 0x38 + lVar12;
    while( true ) {
      if (*(int *)(lVar7 + 0x178) != iVar2) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FStaticMaterial,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      if (lVar12 == lVar13) break;
      local_68 = FStaticMeshComponentHelper::GetMaterial<FFastGeoStaticMeshComponentBase>
                           ((FFastGeoStaticMeshComponentBase *)local_70,iVar11,true,false);
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      local_58 = *puVar14;
      uStack_50 = puVar14[1];
      uStack_60 = puVar14[-2];
      local_48 = *(undefined4 *)(puVar14 + 2);
      FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
        FVar8 = FVar3;
      }
      if ((ulonglong)FVar8 <= &local_68) {
        FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
        if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
          FVar8 = FVar3;
        }
        if (&local_68 <
            (UMaterialInterface **)
            ((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) {
          local_90 = (longlong)__return_storage_ptr__->ArrayNum;
          local_88 = 0x28;
          local_a0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__
          ;
          if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
            local_a0 = FVar3;
          }
          local_a8 = &local_68;
          local_98 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar4)();
            return pTVar9;
          }
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::Private::FAuditMaterialSlotInfo>_>
                          (0x828,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      lVar10 = (longlong)iVar6;
      FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
        FVar8 = FVar3;
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x38;
      puVar14 = puVar14 + 7;
      puVar1 = (undefined8 *)((longlong)FVar8 + lVar10 * 0x28);
      *puVar1 = local_68;
      puVar1[1] = uStack_60;
      *(undefined8 *)((uchar *)((longlong)FVar8 + 0x10) + lVar10 * 0x28) = local_58;
      *(undefined8 *)((uchar *)((longlong)FVar8 + 0x10) + lVar10 * 0x28 + 8) = uStack_50;
      *(ulonglong *)((uchar *)((longlong)FVar8 + 0x20) + lVar10 * 0x28) =
           CONCAT44(uStack_44,local_48);
    }
  }
  return __return_storage_ptr__;
}

// GetMaterialSlotInfos<FFastGeoProceduralISMComponent> @ 14da13580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
* __cdecl Nanite::Private::GetMaterialSlotInfos<FFastGeoProceduralISMComponent>
                    (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,FFastGeoProceduralISMComponent *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar8;
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  UMaterialInterface **local_a8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [8];
  FFastGeoProceduralISMComponent *local_70;
  UMaterialInterface *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar11 = 0;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x20;
  local_70 = param_1;
  lVar7 = (**(code **)(param_1->_padding_ + 0x110))(param_1);
  lVar7 = *(longlong *)(lVar7 + 0x100);
  if (lVar7 != 0) {
    lVar12 = *(longlong *)(lVar7 + 0x170);
    iVar2 = *(int *)(lVar7 + 0x178);
    puVar14 = (undefined8 *)(lVar12 + 0x18);
    lVar13 = (longlong)iVar2 * 0x38 + lVar12;
    while( true ) {
      if (*(int *)(lVar7 + 0x178) != iVar2) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FStaticMaterial,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      if (lVar12 == lVar13) break;
      local_68 = FStaticMeshComponentHelper::GetMaterial<FFastGeoStaticMeshComponentBase>
                           ((FFastGeoStaticMeshComponentBase *)local_70,iVar11,true,false);
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      local_58 = *puVar14;
      uStack_50 = puVar14[1];
      uStack_60 = puVar14[-2];
      local_48 = *(undefined4 *)(puVar14 + 2);
      FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
        FVar8 = FVar3;
      }
      if ((ulonglong)FVar8 <= &local_68) {
        FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
        if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
          FVar8 = FVar3;
        }
        if (&local_68 <
            (UMaterialInterface **)
            ((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) {
          local_90 = (longlong)__return_storage_ptr__->ArrayNum;
          local_88 = 0x28;
          local_a0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__
          ;
          if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
            local_a0 = FVar3;
          }
          local_a8 = &local_68;
          local_98 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar4)();
            return pTVar9;
          }
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::Private::FAuditMaterialSlotInfo>_>
                          (0x828,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      lVar10 = (longlong)iVar6;
      FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
        FVar8 = FVar3;
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x38;
      puVar14 = puVar14 + 7;
      puVar1 = (undefined8 *)((longlong)FVar8 + lVar10 * 0x28);
      *puVar1 = local_68;
      puVar1[1] = uStack_60;
      *(undefined8 *)((uchar *)((longlong)FVar8 + 0x10) + lVar10 * 0x28) = local_58;
      *(undefined8 *)((uchar *)((longlong)FVar8 + 0x10) + lVar10 * 0x28 + 8) = uStack_50;
      *(ulonglong *)((uchar *)((longlong)FVar8 + 0x20) + lVar10 * 0x28) =
           CONCAT44(uStack_44,local_48);
    }
  }
  return __return_storage_ptr__;
}

// GetMaterialSlotInfos<FFastGeoStaticMeshComponentBase> @ 14da137c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
* __cdecl Nanite::Private::GetMaterialSlotInfos<FFastGeoStaticMeshComponentBase>
                    (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,FFastGeoStaticMeshComponentBase *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> FVar8;
  TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  UMaterialInterface **local_a8;
  ForElementType<Nanite::Private::FAuditMaterialSlotInfo> local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [8];
  FFastGeoStaticMeshComponentBase *local_70;
  UMaterialInterface *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar11 = 0;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x20;
  local_70 = param_1;
  lVar7 = (**(code **)(*(longlong *)param_1 + 0x110))(param_1);
  lVar7 = *(longlong *)(lVar7 + 0x100);
  if (lVar7 != 0) {
    lVar12 = *(longlong *)(lVar7 + 0x170);
    iVar2 = *(int *)(lVar7 + 0x178);
    puVar14 = (undefined8 *)(lVar12 + 0x18);
    lVar13 = (longlong)iVar2 * 0x38 + lVar12;
    while( true ) {
      if (*(int *)(lVar7 + 0x178) != iVar2) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FStaticMaterial,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      if (lVar12 == lVar13) break;
      local_68 = FStaticMeshComponentHelper::GetMaterial<FFastGeoStaticMeshComponentBase>
                           (local_70,iVar11,true,false);
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      local_58 = *puVar14;
      uStack_50 = puVar14[1];
      uStack_60 = puVar14[-2];
      local_48 = *(undefined4 *)(puVar14 + 2);
      FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
        FVar8 = FVar3;
      }
      if ((ulonglong)FVar8 <= &local_68) {
        FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
        if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
          FVar8 = FVar3;
        }
        if (&local_68 <
            (UMaterialInterface **)
            ((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) {
          local_90 = (longlong)__return_storage_ptr__->ArrayNum;
          local_88 = 0x28;
          local_a0 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__
          ;
          if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
            local_a0 = FVar3;
          }
          local_a8 = &local_68;
          local_98 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<Nanite::Private::FAuditMaterialSlotInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar4)();
            return pTVar9;
          }
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<Nanite::Private::FAuditMaterialSlotInfo>_>
                          (0x828,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      lVar10 = (longlong)iVar6;
      FVar8 = (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<Nanite::Private::FAuditMaterialSlotInfo>)0x0) {
        FVar8 = FVar3;
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x38;
      puVar14 = puVar14 + 7;
      puVar1 = (undefined8 *)((longlong)FVar8 + lVar10 * 0x28);
      *puVar1 = local_68;
      puVar1[1] = uStack_60;
      *(undefined8 *)((uchar *)((longlong)FVar8 + 0x10) + lVar10 * 0x28) = local_58;
      *(undefined8 *)((uchar *)((longlong)FVar8 + 0x10) + lVar10 * 0x28 + 8) = uStack_50;
      *(ulonglong *)((uchar *)((longlong)FVar8 + 0x20) + lVar10 * 0x28) =
           CONCAT44(uStack_44,local_48);
    }
  }
  return __return_storage_ptr__;
}

// InternalConstructor<UFastGeoComponentEditorProxy> @ 14da15540

void __cdecl InternalConstructor<UFastGeoComponentEditorProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  }
  return;
}

// InternalConstructor<UFastGeoContainer> @ 14da15570

void __cdecl InternalConstructor<UFastGeoContainer>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &UFastGeoContainer::_vftable__for__UAssetUserData__;
    *(undefined ***)(this + 1) = &UFastGeoContainer::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this[1].field_0x8 =
         &UFastGeoContainer::_vftable__for__IPhysicsBodyInstanceOwnerResolver__;
    FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState
              ((FFastGeoComponentClusterPendingState *)&this[1].field_0x10);
    FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState
              ((FFastGeoComponentClusterPendingState *)&this[2].field_0x20);
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    this[6].field_0x20 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)(this + 7));
    return;
  }
  return;
}

// InternalConstructor<UFastGeoInstancedStaticMeshComponentEditorProxy> @ 14da15640

void __cdecl
InternalConstructor<UFastGeoInstancedStaticMeshComponentEditorProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UFastGeoInstancedStaticMeshComponentEditorProxy__6B_;
  }
  return;
}

// InternalConstructor<UFastGeoPrimitiveComponentEditorProxy> @ 14da15670

void __cdecl InternalConstructor<UFastGeoPrimitiveComponentEditorProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UFastGeoPrimitiveComponentEditorProxy__6B_;
  }
  return;
}

// InternalConstructor<UFastGeoStaticMeshComponentEditorProxy> @ 14da156a0

void __cdecl
InternalConstructor<UFastGeoStaticMeshComponentEditorProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UFastGeoStaticMeshComponentEditorProxy__6B_;
  }
  return;
}

// InternalConstructor<UFastGeoWorldPartitionRuntimeCellTransformer> @ 14da156d0

void __cdecl
InternalConstructor<UFastGeoWorldPartitionRuntimeCellTransformer>(FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeCellTransformer *this;
  
  this = (UWorldPartitionRuntimeCellTransformer *)param_1->Obj;
  if (this != (UWorldPartitionRuntimeCellTransformer *)0x0) {
    UWorldPartitionRuntimeCellTransformer::UWorldPartitionRuntimeCellTransformer(this,param_1);
    this->_padding_ = (longlong)&___7UFastGeoWorldPartitionRuntimeCellTransformer__6B_;
  }
  return;
}

// InternalConstructor<UFastGeoWorldSubsystem> @ 14da15700

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

void __cdecl InternalConstructor<UFastGeoWorldSubsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FActorPrimitiveColorHandler *this_00;
  longlong *plVar6;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [8];
  FText FStack_120;
  longlong lStack_108;
  undefined8 uStack_100;
  longlong alStack_f8 [3];
  longlong *plStack_e0;
  undefined1 auStack_d8 [48];
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this == (UTickableWorldSubsystem *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  UTickableWorldSubsystem::UTickableWorldSubsystem(this);
  this->_padding_ = (longlong)&UFastGeoWorldSubsystem::_vftable__for__UWorldSubsystem__;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this->_padding_ = (longlong)&UFastGeoWorldSubsystem::_vftable__for__FTickableGameObject__;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined4 *)&this[1].bInitialized = 0;
  this[1].field_0x44 = 0;
  this[2]._padding_ = 0;
  if ((this->_padding_ & 0x10) != 0) {
    pUVar4 = UFastGeoWorldSubsystem::GetPrivateStaticClass();
    if ((UClass *)this->_padding_ == pUVar4) {
      auStack_d8._0_4_ = 0;
      auStack_d8._4_4_ = 0;
      FText::FText((FText *)(auStack_d8 + 8));
      FText::FText((FText *)(auStack_d8 + 0x18));
      auStack_d8._0_4_ = NAME_FastGeoColorHandler.ComparisonIndex.Value;
      auStack_d8._4_4_ = NAME_FastGeoColorHandler.Number;
      lStack_a8 = 0;
      plStack_80 = (longlong *)0x0;
      pcStack_78 = (code *)0x0;
      plStack_50 = (longlong *)0x0;
      pcStack_48 = (code *)0x0;
      plStack_20 = (longlong *)0x0;
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_120,L"FastGeoWorldSubsystem",L"FastGeo",L"FastGeo");
      FText::operator=((FText *)(auStack_d8 + 8),pFVar5);
      if (FStack_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_120.TextData.Reference + 0x10))();
      }
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_120,L"FastGeoWorldSubsystem",L"FastGeoColor_ToopTip",
                          L"Colorize FastGeo primitives. ISM [Orange], HLOD ISM [Red], SM [Cyan], HLOD SM [Blue], else White."
                         );
      FText::operator=((FText *)(auStack_d8 + 0x18),pFVar5);
      if (FStack_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_120.TextData.Reference + 0x10))();
      }
      plStack_e0 = plStack_80;
      uVar3 = uStack_a0;
      lStack_108 = lStack_a8;
      uVar1 = uStack_88;
      uVar2 = uStack_84;
      lStack_a8 = (longlong)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<FLinearColor_(__cdecl*)(UPrimitiveComponent_const_*),FLinearColor,UPrimitiveComponent_const_*>
                  ::Call;
      uStack_a0 = uStack_100;
      uStack_88 = (undefined4)alStack_f8[2];
      uStack_84 = alStack_f8[2]._4_4_;
      plStack_80 = (longlong *)0x0;
      auStack_d8[0x28] = false;
      uStack_98 = 0x5197a148;
      uStack_94 = 1;
      uStack_90 = 0x4da06bc0;
      uStack_8c = 1;
      uStack_100 = uVar3;
      alStack_f8[2]._0_4_ = uVar1;
      alStack_f8[2]._4_4_ = uVar2;
      if (lStack_108 != 0) {
        plVar6 = alStack_f8;
        if (plStack_e0 != (longlong *)0x0) {
          plVar6 = plStack_e0;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      plStack_e0 = plStack_50;
      uVar3 = uStack_70;
      lStack_108 = (longlong)pcStack_78;
      uVar1 = uStack_58;
      uVar2 = uStack_54;
      puStack_60 = auStack_128;
      pcStack_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,void>
                   ::Call;
      uStack_70 = uStack_100;
      uStack_58 = (undefined4)alStack_f8[2];
      uStack_54 = alStack_f8[2]._4_4_;
      plStack_50 = (longlong *)0x0;
      uStack_68 = 0x52c58a88;
      uStack_64 = 1;
      uStack_100 = uVar3;
      alStack_f8[2]._0_4_ = uVar1;
      alStack_f8[2]._4_4_ = uVar2;
      if (lStack_108 != 0) {
        plVar6 = alStack_f8;
        if (plStack_e0 != (longlong *)0x0) {
          plVar6 = plStack_e0;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      plStack_e0 = plStack_20;
      uVar3 = uStack_40;
      lStack_108 = (longlong)pcStack_48;
      puStack_30 = auStack_128;
      pcStack_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,void>
                   ::Call;
      uStack_40 = uStack_100;
      uStack_28 = (undefined4)alStack_f8[2];
      uStack_24 = alStack_f8[2]._4_4_;
      plStack_20 = (longlong *)0x0;
      uStack_38 = 0x52c58aa8;
      uStack_34 = 1;
      uStack_100 = uVar3;
      if (lStack_108 != 0) {
        plVar6 = alStack_f8;
        if (plStack_e0 != (longlong *)0x0) {
          plVar6 = plStack_e0;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      this_00 = FActorPrimitiveColorHandler::Get();
      FActorPrimitiveColorHandler::RegisterPrimitiveColorHandler
                (this_00,(FPrimitiveColorHandler *)auStack_d8);
      if (pcStack_48 != (code *)0x0) {
        plVar6 = (longlong *)&uStack_38;
        if (plStack_20 != (longlong *)0x0) {
          plVar6 = plStack_20;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (pcStack_78 != (code *)0x0) {
        plVar6 = (longlong *)&uStack_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar6 = plStack_50;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((code *)lStack_a8 != (code *)0x0) {
        plVar6 = (longlong *)&uStack_98;
        if (plStack_80 != (longlong *)0x0) {
          plVar6 = plStack_80;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((ITextData *)auStack_d8._24_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)auStack_d8._24_8_ + 0x10))();
      }
      if ((ITextData *)auStack_d8._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)auStack_d8._8_8_ + 0x10))();
      }
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<UFastGeoComponentEditorProxy> @ 14da15720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFastGeoComponentEditorProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFastGeoComponentEditorProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFastGeoComponentEditorProxy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFastGeoContainer> @ 14da157d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFastGeoContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFastGeoContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &UFastGeoContainer::_vftable__for__UAssetUserData__;
    *(undefined ***)(pUVar1 + 1) = &UFastGeoContainer::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UFastGeoContainer::_vftable__for__IPhysicsBodyInstanceOwnerResolver__;
    FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState
              ((FFastGeoComponentClusterPendingState *)&pUVar1[1].field_0x10);
    FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState
              ((FFastGeoComponentClusterPendingState *)&pUVar1[2].field_0x20);
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    pUVar1[6].field_0x20 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)(pUVar1 + 7));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFastGeoInstancedStaticMeshComponentEditorProxy> @ 14da15920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFastGeoInstancedStaticMeshComponentEditorProxy>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFastGeoInstancedStaticMeshComponentEditorProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFastGeoInstancedStaticMeshComponentEditorProxy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFastGeoPrimitiveComponentEditorProxy> @ 14da159d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFastGeoPrimitiveComponentEditorProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFastGeoPrimitiveComponentEditorProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFastGeoPrimitiveComponentEditorProxy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFastGeoStaticMeshComponentEditorProxy> @ 14da15a80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFastGeoStaticMeshComponentEditorProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFastGeoStaticMeshComponentEditorProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UFastGeoStaticMeshComponentEditorProxy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFastGeoWorldPartitionRuntimeCellTransformer> @ 14da15b30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFastGeoWorldPartitionRuntimeCellTransformer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionRuntimeCellTransformer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFastGeoWorldPartitionRuntimeCellTransformer::GetPrivateStaticClass();
  this = (UWorldPartitionRuntimeCellTransformer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldPartitionRuntimeCellTransformer *)0x0) {
    UWorldPartitionRuntimeCellTransformer::UWorldPartitionRuntimeCellTransformer(this,param_1);
    this->_padding_ = (longlong)&___7UFastGeoWorldPartitionRuntimeCellTransformer__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFastGeoWorldSubsystem> @ 14da15be0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFastGeoWorldSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFastGeoWorldSubsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&UFastGeoWorldSubsystem::_vftable__for__UWorldSubsystem__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UFastGeoWorldSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1].field_0x44 = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].bInitialized = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsMaterialSkeletalMesh<FFastGeoInstancedStaticMeshComponent> @ 14da15d60

bool __cdecl
Nanite::Private::IsMaterialSkeletalMesh<FFastGeoInstancedStaticMeshComponent>
          (FFastGeoInstancedStaticMeshComponent *param_1)

{
  return false;
}

// IsMaterialSkeletalMesh<FFastGeoProceduralISMComponent> @ 14da15d70

bool __cdecl
Nanite::Private::IsMaterialSkeletalMesh<FFastGeoProceduralISMComponent>
          (FFastGeoProceduralISMComponent *param_1)

{
  return false;
}

// IsMaterialSkeletalMesh<FFastGeoStaticMeshComponentBase> @ 14da15d80

bool __cdecl
Nanite::Private::IsMaterialSkeletalMesh<FFastGeoStaticMeshComponentBase>
          (FFastGeoStaticMeshComponentBase *param_1)

{
  return false;
}

// Launch<`FastGeo::FAsyncTaskWithAssetRefs::~FAsyncTaskWithAssetRefs'::__l2::<lambda_1>_> @ 14da15e70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_FastGeo::FAsyncTaskWithAssetRefs::~FAsyncTaskWithAssetRefs_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1___1FAsyncTaskWithAssetRefs_FastGeo__QEAA_XZ_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1___1FAsyncTaskWithAssetRefs_FastGeo__QEAA_XZ__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UFastGeoContainer::PrecachePSOs'::__l8::<lambda_2>_> @ 14da15f60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
FastGeo::FAsyncTaskWithAssetRefs::Launch<_UFastGeoContainer::PrecachePSOs_::__l8::<lambda_2>_>
          (wchar_t *param_1,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_2> *param_3,ETaskPriority param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  UFastGeoContainer *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  FTaskBase *pFVar10;
  FAsyncTaskAssetReferenceManager *pFVar11;
  TTask<void> TVar12;
  FTaskBase *this;
  FTaskBase *pFVar13;
  FTaskBase *this_00;
  undefined7 in_register_00000089;
  longlong *plVar14;
  TPairInitializer<FGuid_const_&,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_const_&>
  local_res8;
  ETaskPriority in_stack_00000028;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  atomic<unsigned_int> *local_48;
  
  plVar14 = (longlong *)CONCAT71(in_register_00000089,param_4);
  local_res8.Value = param_2;
  pFVar10 = ::operator_new(0x40);
  this_00 = (FTaskBase *)0x0;
  if (pFVar10 == (FTaskBase *)0x0) {
    local_58 = (longlong *)&DAT_00000010;
    pFVar10 = this_00;
LAB_14da16086:
    if (((*local_58 == 0) || (local_58[1] == 0)) || (*(int *)(local_58[1] + 8) < 1)) {
      if (pFVar10 != (FTaskBase *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
        UNLOCK();
      }
      *local_58 = (longlong)local_58;
      if (pFVar10 != (FTaskBase *)local_58[1]) {
        if (pFVar10 != (FTaskBase *)0x0) {
          LOCK();
          ((atomic<int> *)&pFVar10->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pFVar10->_padding_)[1] + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)local_58[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        local_58[1] = (longlong)pFVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
    }
    if (pFVar10 == (FTaskBase *)0x0) goto LAB_14da160ed;
  }
  else {
    *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar10->_padding_)[1] = (atomic<int>)0x1;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAsyncTaskWithAssetRefs_FastGeo___00_SharedPointerInternals__6B_
    ;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    FGuid::NewGuid((FGuid *)&pFVar10->_padding_);
    local_48 = &pFVar10->RefCount;
    *(undefined8 *)&local_48->field_0x0 = 0;
    piVar1 = (int *)((longlong)&pFVar10->Pipe + 4);
    iVar2 = *(int *)&(param_3->Components).AllocatorInstance.Data;
    pUVar4 = param_3->__this;
    *(int *)&pFVar10->Pipe = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,0,(ForAnyElementType *)local_48,iVar2,piVar1);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                (*(void **)&local_48->field_0x0,(TObjectPtr<UObject> *)pUVar4,iVar2);
    }
    local_50 = (TReferenceControllerBase<1> *)&pFVar10->_padding_;
    pFVar11 = FAsyncTaskAssetReferenceManager::Get();
    TSet<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FGuid_const_&,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&pFVar11->TasksAssets,&local_res8,(bool *)&local_50);
    local_58 = &pFVar10->_padding_;
    if (local_58 != (longlong *)0x0) goto LAB_14da16086;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      TVar12 = (TTask<void>)(*pcVar8)();
      return TVar12;
    }
  }
  LOCK();
  *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
  UNLOCK();
LAB_14da160ed:
  lVar6 = *plVar14;
  pFVar13 = (FTaskBase *)plVar14[1];
  plVar14[1] = 0;
  local_res8.Key._0_4_ = (undefined4)plVar14[2];
  uVar3 = *(undefined4 *)((longlong)plVar14 + 0x14);
  plVar14[2] = 0;
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FastGeo::FAsyncTaskWithAssetRefs::Launch<`UFastGeoContainer::PrecachePSOs'::`8'::<lambda_2>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this,(wchar_t *)local_res8.Value,in_stack_00000028,None,None);
    this[1]._padding_ = (longlong)local_58;
    this[1]._padding_ = (longlong)pFVar10;
    if (pFVar10 != (FTaskBase *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    this[1]._padding_ = (longlong)pFVar13;
    this[1]._padding_ = lVar6;
    *(undefined4 *)&this[1]._padding_ = local_res8.Key._0_4_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar3;
    this->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FastGeo::FAsyncTaskWithAssetRefs::Launch<`UFastGeoContainer::PrecachePSOs'::`8'::<lambda_2>_>'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar13 = this_00;
    this_00 = this;
  }
  puVar7 = *(undefined8 **)param_1;
  if (puVar7 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar7 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  *(FTaskBase **)param_1 = this_00;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  if (pFVar13 != (FTaskBase *)0x0) {
    FMemory::Free(pFVar13);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return (TTask<void>)param_1;
}

// RemoveAll<`TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14da16240

int __thiscall
TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  TWeakObjectPtr<UFastGeoContainer,FWeakObjectPtr> *pTVar2;
  FScriptContainerElement *this_00;
  bool bVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  int local_res18;
  
  iVar1 = this->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pTVar2 = *(TWeakObjectPtr<UFastGeoContainer,FWeakObjectPtr> **)param_1;
  this_00 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  local_res18 = 0;
  bVar3 = TWeakObjectPtr<UFastGeoContainer,FWeakObjectPtr>::UEOpEquals<UFastGeoContainer,bool>
                    ((TWeakObjectPtr<UFastGeoContainer,FWeakObjectPtr> *)this_00,pTVar2);
  if ((((bVar3) &&
       (((FWeakObjectPtr *)&this_00[8].field_0x0)->ObjectIndex == pTVar2[1].WeakPtr.ObjectIndex)) &&
      (*(int *)&this_00[0xc].field_0x0 == pTVar2[1].WeakPtr.ObjectSerialNumber)) &&
     ((((FWeakObjectPtr *)&this_00[0x10].field_0x0)->ObjectIndex == pTVar2[2].WeakPtr.ObjectIndex &&
      (*(int *)&this_00[0x14].field_0x0 == pTVar2[2].WeakPtr.ObjectSerialNumber)))) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  lVar9 = 0;
  iVar6 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar7 = iVar6 + 1;
    if (lVar9 < lVar8) {
      pFVar5 = this_00 + (lVar9 * 3 + 1) * 8 + 4;
      do {
        pTVar2 = *(TWeakObjectPtr<UFastGeoContainer,FWeakObjectPtr> **)param_1;
        bVar3 = TWeakObjectPtr<UFastGeoContainer,FWeakObjectPtr>::UEOpEquals<UFastGeoContainer,bool>
                          ((TWeakObjectPtr<UFastGeoContainer,FWeakObjectPtr> *)(pFVar5 + -0xc),
                           pTVar2);
        if (((bVar3) && (*(int *)&pFVar5[-4].field_0x0 == pTVar2[1].WeakPtr.ObjectIndex)) &&
           ((*(int *)pFVar5 == pTVar2[1].WeakPtr.ObjectSerialNumber &&
            ((*(int *)(pFVar5 + 4) == pTVar2[2].WeakPtr.ObjectIndex &&
             (*(int *)(pFVar5 + 8) == pTVar2[2].WeakPtr.ObjectSerialNumber)))))) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        iVar11 = local_res18;
        if (bVar10 != bVar4) break;
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 1;
        pFVar5 = pFVar5 + 0x18;
      } while (lVar9 < lVar8);
    }
    if (bVar10 != 0) {
      if (iVar11 != iVar6) {
        memmove(this_00 + (longlong)iVar11 * 0x18,this_00 + (longlong)iVar6 * 0x18,
                (longlong)(iVar7 - iVar6) * 0x18);
      }
      iVar11 = iVar11 + (iVar7 - iVar6);
      local_res18 = iVar11;
    }
    bVar10 = bVar10 ^ 1;
    iVar6 = iVar7;
    if (lVar8 <= lVar9) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EPSOPrecachePriority>_> @ 14da18240

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EPSOPrecachePriority>_>
          (_Atomic_padded<EPSOPrecachePriority> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EPSOPrecachePriority>_> @ 14da18250

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EPSOPrecachePriority>_>
          (_Atomic_padded<EPSOPrecachePriority> *param_1)

{
  return (char *)param_1;
}

// _Atomic_reinterpret_as<char,enum_EPSOPrecachePriority> @ 14da18260

char __cdecl
std::_Atomic_reinterpret_as<char,enum_EPSOPrecachePriority>(EPSOPrecachePriority *param_1)

{
  return *param_1;
}

// ~TFunction_OwnedObject<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>,0,1> @ 14da1ae40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetComponentDesc_VFFastGeoInstancedSkinnedMeshComponent___0A__FInstancedSkinnedMeshComponentHelper__SA_AUFInstanceDataManagerSourceDataDesc__AEAVFFastGeoInstancedSkinnedMeshComponent__W4EShaderPlatform___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>,1,1> @ 14da1ae60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FFastGeoComponentCluster::UpdateVisibility_Internal_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,0,0> @ 14da1aea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UFastGeoWorldSubsystem::UFastGeoWorldSubsystem_::__l5::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::`5'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,0,0> @ 14da1aec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UFastGeoWorldSubsystem::UFastGeoWorldSubsystem_::__l5::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::`5'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// operator<< @ 14da1bd10

FArchive * __cdecl operator<<(FArchive *param_1,FFastGeoComponent *param_2)

{
  (**(code **)(param_2->_padding_ + 0x18))(param_2,param_1);
  return param_1;
}

// operator<< @ 14da1bd40

FArchive * __cdecl operator<<(FArchive *param_1,FFastGeoComponentCluster *param_2)

{
  (**(code **)(param_2->_padding_ + 0x18))(param_2,param_1);
  return param_1;
}

// operator() @ 14da1d520

FRenderTransform * __thiscall
``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::
__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRenderTransform *__return_storage_ptr__,int param_1)

{
  float *pfVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  FRenderTransform *pFVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar2 = *(longlong *)this;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar2 + 0x408)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FRenderTransform *)(*pcVar3)();
      return pFVar13;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x400);
  lVar14 = (longlong)param_1 * 0x40;
  pfVar1 = (float *)(lVar14 + lVar2);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar7 = pfVar1[3];
  fVar17 = fVar5 + fVar5;
  fVar19 = fVar6 + fVar6;
  fVar20 = fVar4 * (fVar4 + fVar4);
  fVar18 = (fVar4 + fVar4) * fVar7;
  pfVar1 = (float *)(lVar14 + 0x20 + lVar2);
  fVar8 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar10 = pfVar1[2];
  auVar15._0_4_ =
       (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar6 * fVar19 + fVar5 * fVar17)) * fVar8;
  auVar15._4_4_ = (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar6 * fVar19 + fVar20)) * fVar9;
  auVar15._8_4_ = (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar5 * fVar17 + fVar20)) * fVar10
  ;
  auVar15._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar20 + fVar20)) * pfVar1[3];
  auVar15 = insertps(auVar15,auVar15,8);
  auVar16 = blendps(*(undefined1 (*) [16])(lVar14 + 0x10 + lVar2),
                    (undefined1  [16])GlobalVectorConstants::FloatOne,8);
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.X = auVar15._0_4_;
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Y =
       (fVar19 * fVar7 + fVar17 * fVar4) * fVar8;
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Z =
       fVar8 * (fVar19 * fVar4 - fVar17 * fVar7);
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.X =
       fVar9 * (fVar17 * fVar4 - fVar19 * fVar7);
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Y = auVar15._4_4_;
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z = (fVar18 + fVar19 * fVar5) * fVar9;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.X =
       (fVar17 * fVar7 + fVar19 * fVar4) * fVar10;
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Y = fVar10 * (fVar19 * fVar5 - fVar18);
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z = auVar15._8_4_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = auVar16._0_4_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = auVar16._4_4_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = auVar16._8_4_;
  return __return_storage_ptr__;
}

// operator() @ 14da1d6c0

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
``UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,FFastGeoPrimitiveComponent *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  double *pdVar9;
  UBodySetup *pUVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ForAnyElementType *pFVar13;
  undefined1 auStackY_238 [32];
  FNavigationElementHandle local_1e8;
  UObject *local_1d8;
  UObject *local_1d0;
  FDestructionSentinel local_1c8;
  undefined1 *local_1b0;
  FDestructionSentinel local_1a8;
  undefined1 *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  TDelegateBase<FNotThreadSafeDelegateMode> local_148 [2];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 TStack_a0;
  double local_88;
  Type local_78;
  bool local_73;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_238;
  cVar6 = (**(code **)(param_1->_padding_ + 0x70))(param_1);
  if (cVar6 != '\0') {
    FNavigationElement::FNavigationElement
              ((FNavigationElement *)local_188,*(UObject **)this,(ulong64)param_1);
    cVar6 = (**(code **)(param_1->_padding_ + 0x78))(param_1);
    local_73 = cVar6 == '\0';
    pdVar9 = (double *)(**(code **)(param_1->_padding_ + 0x80))(param_1,local_68);
    local_b8._s_0.X = *pdVar9;
    local_b8._s_0.Y = pdVar9[1];
    local_b8._s_0.Z = pdVar9[2];
    TStack_a0._s_0.X = pdVar9[3];
    TStack_a0._8_4_ = *(undefined4 *)(pdVar9 + 4);
    TStack_a0._12_4_ = *(undefined4 *)((longlong)pdVar9 + 0x24);
    TStack_a0._16_4_ = *(undefined4 *)(pdVar9 + 5);
    TStack_a0._20_4_ = *(undefined4 *)((longlong)pdVar9 + 0x2c);
    local_88 = pdVar9[6];
    pUVar10 = (UBodySetup *)(**(code **)(param_1->_padding_ + 8))(param_1);
    FNavigationElement::SetBodySetup((FNavigationElement *)local_188,pUVar10);
    local_118 = (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
    dStack_110 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
    local_108 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
    dStack_100 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
    local_f8 = (param_1->WorldTransform).Translation.XY.m128d_f64[0];
    dStack_f0 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
    local_e8 = (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
    dStack_e0 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
    local_d8 = *(undefined4 *)(param_1->WorldTransform).Scale3D.XY.m128d_f64;
    uStack_d4 = *(undefined4 *)((longlong)(param_1->WorldTransform).Scale3D.XY.m128d_f64 + 4);
    uStack_d0 = *(undefined4 *)((param_1->WorldTransform).Scale3D.XY.m128d_f64 + 1);
    uStack_cc = *(undefined4 *)((longlong)(param_1->WorldTransform).Scale3D.XY.m128d_f64 + 0xc);
    local_c8 = *(undefined4 *)(param_1->WorldTransform).Scale3D.ZW.m128d_f64;
    uStack_c4 = *(undefined4 *)((longlong)(param_1->WorldTransform).Scale3D.ZW.m128d_f64 + 4);
    uStack_c0 = *(undefined4 *)((param_1->WorldTransform).Scale3D.ZW.m128d_f64 + 1);
    uStack_bc = *(undefined4 *)((longlong)(param_1->WorldTransform).Scale3D.ZW.m128d_f64 + 0xc);
    local_78 = (**(code **)(param_1->_padding_ + 0x90))(param_1);
    pUVar2 = *(UObject **)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
               (FWriteAccessScope *)&local_1c8);
    local_1b0 = local_178 + 8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(local_178 + 8));
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigationRelevantData___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
                  ::_vftable_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      puVar11[3] = 0;
      local_1d8 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_1d8);
      puVar11[4] = param_1;
    }
    if (local_1c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
    }
    pUVar2 = *(UObject **)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_160,
               (FWriteAccessScope *)&local_1a8);
    local_190 = local_160 + 8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(local_160 + 8));
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFNavigationElement__AEAUFNavigableGeometryExport__AEA_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>_>
                  ::_vftable_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      puVar11[3] = 0;
      local_1d0 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_1d0);
      puVar11[4] = param_1;
    }
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    FNavigationSystem::AddNavigationElement
              (&local_1e8,*(UWorld **)((longlong)this + 8),(FNavigationElement *)local_188);
    if (((local_1e8.OwnerUObject.WeakPtr.ObjectIndex ==
          FNavigationElementHandle::Invalid.OwnerUObject.WeakPtr.ObjectIndex) &&
        (local_1e8.OwnerUObject.WeakPtr.ObjectSerialNumber ==
         FNavigationElementHandle::Invalid.OwnerUObject.WeakPtr.ObjectSerialNumber)) &&
       (local_1e8.SubElementId ==
        CONCAT44(FNavigationElementHandle::Invalid.SubElementId._4_4_,
                 (undefined4)FNavigationElementHandle::Invalid.SubElementId))) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<990252586093248873>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x169,"Handle.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      lVar3 = *(longlong *)this;
      pFVar13 = (ForAnyElementType *)(lVar3 + 0x100);
      if (((FNavigationElementHandle *)pFVar13->Data <= &local_1e8) &&
         (&local_1e8 < (FNavigationElementHandle *)pFVar13->Data + *(int *)(lVar3 + 0x10c))) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)(lVar3 + 0x108);
      if (iVar8 == *(int *)(lVar3 + 0x10c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar13,(int *)(lVar3 + 0x10c));
      }
      *(int *)(lVar3 + 0x108) = iVar8 + 1;
      pFVar4 = pFVar13->Data;
      *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0x10) =
           CONCAT44(local_1e8.OwnerUObject.WeakPtr.ObjectSerialNumber,
                    local_1e8.OwnerUObject.WeakPtr.ObjectIndex);
      *(ulong64 *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = local_1e8.SubElementId;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_148)
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
    if ((longlong *)local_188._8_8_ != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)(local_188._8_8_ + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)local_188._8_8_ + 8))(local_188._8_8_,1);
      }
    }
  }
  return;
}

// operator() @ 14da1dad0

void __thiscall
``FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()'::__l2::
<lambda_1>::operator()
          (void *this,TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  PSRWLOCK SRWLock;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [16];
  longlong local_res20;
  longlong local_68 [2];
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
LAB_14da1db01:
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFastGeoPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar2) {
      return;
    }
    local_68[0] = *(longlong *)pFVar8;
    SRWLock = *(PSRWLOCK *)(local_68[0] + 0x3b8);
    AcquireSRWLockShared(SRWLock);
    local_res20 = *(longlong *)(local_68[0] + 0x348);
    if (local_res20 != 0) {
      iVar7 = *(int *)(*(longlong *)(local_res20 + 0x228) + 0x188);
      if ((iVar7 != -1) && (iVar7 != 0x7fffffff)) {
        local_58 = &local_res20;
        uStack_50 = 1;
        uStack_40 = 1;
        uStack_3c = uStack_4c;
        local_48 = local_58;
        (**(code **)(**(longlong **)(local_res20 + 0x220) + 0x3f0))
                  (*(longlong **)(local_res20 + 0x220),&local_48,param_2);
        ReleaseSRWLockShared(SRWLock);
        pFVar8 = pFVar8 + 8;
        goto LAB_14da1db01;
      }
      pFVar4 = *(ForAnyElementType **)this;
      if ((pFVar4->Data <= (FScriptContainerElement *)local_68) &&
         ((FScriptContainerElement *)local_68 <
          pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) {
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
      iVar7 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar7 + 1;
      *(longlong *)(pFVar4->Data + (longlong)iVar7 * 8) = local_68[0];
    }
    ReleaseSRWLockShared(SRWLock);
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// operator() @ 14da1e310

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
FastGeo::<lambda_25>::operator()
          (<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWorld *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  UClass *pUVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  FFastGeoComponentCluster *pFVar11;
  FFastGeoComponentCluster *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  UClass *local_58;
  UEngine *local_50;
  FScriptContainerElement *local_48;
  
  if (param_1->ArrayNum == 1) {
    pFVar13 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar13 + 8) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)pFVar13;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"0");
    GShowFastGeo = 0;
    if (iVar5 == 0) goto LAB_14da1e354;
  }
  GShowFastGeo = 1;
LAB_14da1e354:
  local_50 = GEngine;
  local_res18 = (GEngine->WorldList).Array.ArrayNum;
  uVar10 = (ulonglong)(int)local_res18;
  pFVar13 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  local_48 = pFVar13 + uVar10 * 8;
  while( true ) {
    pFVar1 = local_48;
    local_res20 = pFVar13;
    if ((local_50->WorldList).Array.ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar1) break;
    this_00 = *(UWorld **)(*(longlong *)pFVar13 + 0x2c0);
    if ((this_00 != (UWorld *)0x0) && (bVar4 = UWorld::IsGameWorld(this_00), bVar4)) {
      pTVar6 = UWorld::GetLevels(this_00);
      pFVar14 = (pTVar6->AllocatorInstance).Data;
      iVar5 = pTVar6->ArrayNum;
      pFVar1 = pFVar14 + (longlong)iVar5 * 8;
      while( true ) {
        if (pTVar6->ArrayNum != iVar5) {
          `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        pFVar13 = local_res20;
        if (pFVar14 == pFVar1) break;
        lVar7 = *(longlong *)pFVar14;
        pcVar3 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x18);
        local_58 = UFastGeoContainer::StaticClass();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_58);
        }
        lVar7 = (*pcVar3)(lVar7 + 0x28,&local_58);
        if (lVar7 != 0) {
          pUVar8 = UFastGeoContainer::StaticClass();
          iVar2 = (int)pUVar8->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar8->_padding_)) {
            iVar2 = *(int *)(lVar7 + 0xb8);
            pFVar11 = *(FFastGeoComponentCluster **)(lVar7 + 0xb0);
            pFVar12 = pFVar11 + iVar2;
            while( true ) {
              if (*(int *)(lVar7 + 0xb8) != iVar2) {
                `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (pFVar11 == pFVar12) break;
              FFastGeoComponentCluster::UpdateVisibility(pFVar11);
              pFVar11 = pFVar11 + 1;
            }
            iVar2 = *(int *)(lVar7 + 200);
            pFVar11 = *(FFastGeoComponentCluster **)(lVar7 + 0xc0);
            pFVar12 = (FFastGeoComponentCluster *)((longlong)iVar2 * 200 + (longlong)pFVar11);
            while( true ) {
              if (*(int *)(lVar7 + 200) != iVar2) {
                `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res10);
              }
              if (pFVar11 == pFVar12) break;
              FFastGeoComponentCluster::UpdateVisibility(pFVar11);
              pFVar11 = (FFastGeoComponentCluster *)&pFVar11[1].StaticMeshComponents.ArrayNum;
            }
          }
        }
        pFVar14 = pFVar14 + 8;
      }
    }
    pFVar13 = pFVar13 + 8;
    uVar10 = (ulonglong)local_res18;
  }
  return;
}

// operator() @ 14da1e550

uint __thiscall
``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::
__l2::<lambda_1>::operator()'::__l5::<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((param_1 < 0) || (*(int *)(*(longlong *)this + 0x408) <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponent.InstanceData.IsValidIndex(InstanceIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedSkinnedMeshComponentHelper.h"
                       ,0x5a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x408)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014da1e610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x2e0))
                    (*(longlong **)((longlong)this + 8),param_1,(longlong)this + 0x10,
                     (longlong)param_1 * 0x40 + *(longlong *)(lVar1 + 0x400));
  return uVar4;
}

// operator() @ 14da1e620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRenderBounds * __thiscall
``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::
__l2::<lambda_1>::operator()'::__l10::<lambda_3>::operator()
          (void *this,FRenderBounds *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FRenderBounds *pFVar6;
  undefined8 uVar7;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x408)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRenderBounds *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_28 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  uStack_20 = _UNK_150a9e6b8;
  local_18 = 0xff7fffff;
  uStack_14 = 0xff7fffff;
  cVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x2d8))
                    (*(longlong **)((longlong)this + 8),
                     *(undefined4 *)((longlong)param_1 * 0x40 + 0x30 + *(longlong *)(lVar1 + 0x400))
                     ,&local_28);
  if (cVar4 == '\0') {
    local_28 = *(undefined8 *)((longlong)this + 0x10);
    uStack_20 = *(undefined8 *)((longlong)this + 0x18);
    uVar7 = *(undefined8 *)((longlong)this + 0x20);
  }
  else {
    uVar7 = CONCAT44(uStack_14,local_18);
  }
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = local_28;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uStack_20;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar7;
  return __return_storage_ptr__;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14da1e710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FFastGeoPhysicsBodyInstanceOwner::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FFastGeoPhysicsBodyInstanceOwner::_vector_deleting_destructor__adjustor_16__
          (FFastGeoPhysicsBodyInstanceOwner *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FFastGeoPhysicsBodyInstanceOwner *)&this[-1].OwnerComponent,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14da1e720

/* [thunk]:public: virtual void * __ptr64 __cdecl UFastGeoContainer::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UFastGeoContainer::_vector_deleting_destructor__adjustor_48__(UFastGeoContainer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFastGeoContainer *)&this[-1].CollisionComponents,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14da1e730

/* [thunk]:private: virtual void * __ptr64 __cdecl UFastGeoWorldSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UFastGeoWorldSubsystem::_vector_deleting_destructor__adjustor_56__
          (UFastGeoWorldSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UFastGeoWorldSubsystem *)&this[-1].Handle_OnForEachHLODObjectInCell,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14da1e740

void * __thiscall
IBaseDelegateInstance<void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e770

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e7a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e7d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FFastGeoAsyncRenderStateJobQueue,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FFastGeoAsyncRenderStateJobQueue,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e800

void * __thiscall
TBaseRawMethodDelegateInstance<0,FFastGeoStreamingModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FFastGeoStreamingModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e830

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e860

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e890

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e8c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e8f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e920

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e950

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFastGeoWorldSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e980

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(ULevel_*,bool,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e9b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorld_*,ULevel_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1e9e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ea10

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FastGeo::FAsyncTaskWithAssetRefs::Launch<`UFastGeoContainer::PrecachePSOs'::__l8::<lambda_2>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ea80

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FastGeo::FAsyncTaskWithAssetRefs::~FAsyncTaskWithAssetRefs'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1eaf0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FFastGeoAsyncRenderStateJobQueue::Launch'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1eb60

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()'::__l8::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ebd0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FastGeo::FAsyncTaskWithAssetRefs::Launch<`UFastGeoContainer::PrecachePSOs'::__l8::<lambda_2>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ec10

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FastGeo::FAsyncTaskWithAssetRefs::~FAsyncTaskWithAssetRefs'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ec50

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FFastGeoAsyncRenderStateJobQueue::Launch'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ec90

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()'::__l8::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ecd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetComponentDesc_VFFastGeoInstancedSkinnedMeshComponent___0A__FInstancedSkinnedMeshComponentHelper__SA_AUFInstanceDataManagerSourceDataDesc__AEAVFFastGeoInstancedSkinnedMeshComponent__W4EShaderPlatform___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ed10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ed70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::`5'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1edb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::`5'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1edf0

void * __thiscall
TGraphTask<FFastGeoPSOPrecacheFinishedTask>::_scalar_deleting_destructor_
          (TGraphTask<FFastGeoPSOPrecacheFinishedTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ee50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FastGeo::FAsyncTaskWithAssetRefs,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FastGeo::FAsyncTaskWithAssetRefs,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ee90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInstanceDataManager,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FInstanceDataManager,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1eed0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::DoCustomNavigableGeometryExport'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ef00

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FFastGeoInstancedStaticMeshComponent::GetNavigationData'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ef30

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigableGeometryExport_&,bool_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ef60

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy,```UFastGeoContainer::RegisterToNavigationSystem'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1ef90

void * __thiscall
FastGeo::FAssetRemapArchive::_scalar_deleting_destructor_(FAssetRemapArchive *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->UniqueAssets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UniqueAssets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UniqueAssets);
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f000

void * __thiscall
FastGeo::FAsyncTaskAssetReferenceManager::_scalar_deleting_destructor_
          (FAsyncTaskAssetReferenceManager *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->TasksAssets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TasksAssets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TasksAssets);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f070

void * __thiscall
FChaosUserDefinedEntity::_scalar_deleting_destructor_(FChaosUserDefinedEntity *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChaosUserDefinedEntity__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f0b0

void * __thiscall
FFastGeoComponent::_scalar_deleting_destructor_(FFastGeoComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFastGeoElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f0f0

void * __thiscall
FFastGeoComponentCluster::_scalar_deleting_destructor_(FFastGeoComponentCluster *this,uint param_1)

{
  ~FFastGeoComponentCluster(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f130

void * __thiscall
FFastGeoGatherFastGeoContainerAssetRefsArchive::_scalar_deleting_destructor_
          (FFastGeoGatherFastGeoContainerAssetRefsArchive *this,uint param_1)

{
  ~FFastGeoGatherFastGeoContainerAssetRefsArchive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f170

void * __thiscall FFastGeoHLOD::_scalar_deleting_destructor_(FFastGeoHLOD *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__FFastGeoComponentCluster__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  FFastGeoComponentCluster::~FFastGeoComponentCluster((FFastGeoComponentCluster *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f1d0

void * __thiscall
FFastGeoInstancedSkinnedMeshComponent::_scalar_deleting_destructor_
          (FFastGeoInstancedSkinnedMeshComponent *this,uint param_1)

{
  ~FFastGeoInstancedSkinnedMeshComponent(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x5f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f210

void * __thiscall
FFastGeoInstancedStaticMeshComponent::_scalar_deleting_destructor_
          (FFastGeoInstancedStaticMeshComponent *this,uint param_1)

{
  ~FFastGeoInstancedStaticMeshComponent(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x650);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f250

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
FFastGeoMeshComponent::_scalar_deleting_destructor_(FFastGeoMeshComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f2a0

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
FFastGeoPhysicsBodyInstanceOwner::_scalar_deleting_destructor_
          (FFastGeoPhysicsBodyInstanceOwner *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FChaosUserDefinedEntity__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f2e0

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
FFastGeoPrimitiveComponent::_scalar_deleting_destructor_
          (FFastGeoPrimitiveComponent *this,uint param_1)

{
  ~FFastGeoPrimitiveComponent(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f320

void * __thiscall
FFastGeoProceduralISMComponent::_scalar_deleting_destructor_
          (FFastGeoProceduralISMComponent *this,uint param_1)

{
  ~FFastGeoProceduralISMComponent(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x5f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FFastGeoSkinnedMeshComponent::_scalar_deleting_destructor_
          (FFastGeoSkinnedMeshComponent *this,uint param_1)

{
  ~FFastGeoSkinnedMeshComponent(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x590);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f3a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FFastGeoSkinnedMeshComponentBase::_scalar_deleting_destructor_
          (FFastGeoSkinnedMeshComponentBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSkelMeshComponentLODInfo,int>
            ((FSkelMeshComponentLODInfo *)(this->LODInfo).AllocatorInstance.Data,
             (this->LODInfo).ArrayNum);
  pFVar1 = (this->LODInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkinCacheUsage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f430

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
FFastGeoStaticMeshComponent::_scalar_deleting_destructor_
          (FFastGeoStaticMeshComponent *this,uint param_1)

{
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc(&this->SceneProxyDesc);
  if (*(void **)&this->field_0x3d8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x3d8);
  }
  if (*(void **)&this->field_0x3c0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x3c0);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x580);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f4a0

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
FFastGeoStaticMeshComponentBase::_scalar_deleting_destructor_
          (FFastGeoStaticMeshComponentBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LODData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->field_0x3c0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x3c0);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f500

void * __thiscall IFastGeoElement::_scalar_deleting_destructor_(IFastGeoElement *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IFastGeoElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f540

void * __thiscall
IPhysicsBodyInstanceOwner::_scalar_deleting_destructor_
          (IPhysicsBodyInstanceOwner *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f570

void * __thiscall
IPhysicsBodyInstanceOwnerResolver::_scalar_deleting_destructor_
          (IPhysicsBodyInstanceOwnerResolver *this,uint param_1)

{
  *this = (IPhysicsBodyInstanceOwnerResolver)&___7IPhysicsBodyInstanceOwnerResolver__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f5b0

void * __thiscall
UFastGeoComponentEditorProxy::_scalar_deleting_destructor_
          (UFastGeoComponentEditorProxy *this,uint param_1)

{
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f610

void * __thiscall
UFastGeoContainer::_scalar_deleting_destructor_(UFastGeoContainer *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TTask<void> TVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UAssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsBodyInstanceOwnerResolver__;
  FRenderCommandFence::~FRenderCommandFence(&this->DestroyFence);
  pFVar3 = (this->NavigationElementHandles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CollisionComponents).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TVar4 = this->PrecachePSOsTask;
  if (TVar4 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar4 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar4)(TVar4,1);
    }
  }
  pFVar3 = (this->Assets).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FFastGeoHLOD,int>
            ((FFastGeoHLOD *)(this->HLODs).AllocatorInstance.Data,(this->HLODs).ArrayNum);
  pFVar3 = (this->HLODs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FFastGeoComponentCluster,int>
            ((FFastGeoComponentCluster *)(this->ComponentClusters).AllocatorInstance.Data,
             (this->ComponentClusters).ArrayNum);
  pFVar3 = (this->ComponentClusters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IPhysicsBodyInstanceOwnerResolver__6B_;
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f760

void * __thiscall
UFastGeoInstancedStaticMeshComponentEditorProxy::_scalar_deleting_destructor_
          (UFastGeoInstancedStaticMeshComponentEditorProxy *this,uint param_1)

{
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f7c0

void * __thiscall
UFastGeoPrimitiveComponentEditorProxy::_scalar_deleting_destructor_
          (UFastGeoPrimitiveComponentEditorProxy *this,uint param_1)

{
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f820

void * __thiscall
UFastGeoStaticMeshComponentEditorProxy::_scalar_deleting_destructor_
          (UFastGeoStaticMeshComponentEditorProxy *this,uint param_1)

{
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f880

void * __thiscall
UFastGeoWorldPartitionRuntimeCellTransformer::_scalar_deleting_destructor_
          (UFastGeoWorldPartitionRuntimeCellTransformer *this,uint param_1)

{
  *(undefined ***)this = &___7UFastGeoWorldPartitionRuntimeCellTransformer__6B_;
  UWorldPartitionRuntimeCellTransformer::~UWorldPartitionRuntimeCellTransformer
            ((UWorldPartitionRuntimeCellTransformer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14da1f8e0

void * __thiscall
UFastGeoWorldSubsystem::_scalar_deleting_destructor_(UFastGeoWorldSubsystem *this,uint param_1)

{
  FFastGeoAsyncRenderStateJobQueue *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  UClass *pUVar5;
  FActorPrimitiveColorHandler *this_01;
  void *pvVar6;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  if ((this->_padding_ & 0x10) != 0) {
    pUVar5 = GetPrivateStaticClass();
    if ((UClass *)this->_padding_ == pUVar5) {
      this_01 = FActorPrimitiveColorHandler::Get();
      FActorPrimitiveColorHandler::UnregisterPrimitiveColorHandler(this_01,NAME_FastGeoColorHandler)
      ;
    }
  }
  this_00 = (this->AsyncRenderStateJobQueue).Ptr;
  if (this_00 != (FFastGeoAsyncRenderStateJobQueue *)0x0) {
    FFastGeoAsyncRenderStateJobQueue::~FFastGeoAsyncRenderStateJobQueue(this_00);
    ::operator_delete(this_00,0x68);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar2)();
      return pvVar6;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  pFVar1 = (this->ComponentsPendingRecreate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeFastGeoComponent @ 14da27710

void __cdecl EmptyLinkFunctionForGeneratedCodeFastGeoComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFastGeoContainer @ 14da27720

void __cdecl EmptyLinkFunctionForGeneratedCodeFastGeoContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFastGeoInstancedStaticMeshComponent @ 14da27730

void __cdecl EmptyLinkFunctionForGeneratedCodeFastGeoInstancedStaticMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFastGeoPrimitiveComponent @ 14da27740

void __cdecl EmptyLinkFunctionForGeneratedCodeFastGeoPrimitiveComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFastGeoStaticMeshComponent @ 14da27750

void __cdecl EmptyLinkFunctionForGeneratedCodeFastGeoStaticMeshComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFastGeoStreaming_init @ 14da27760

void __cdecl EmptyLinkFunctionForGeneratedCodeFastGeoStreaming_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFastGeoWorldPartitionRuntimeCellTransformer @ 14da27770

void __cdecl EmptyLinkFunctionForGeneratedCodeFastGeoWorldPartitionRuntimeCellTransformer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFastGeoWorldSubsystem @ 14da27780

void __cdecl EmptyLinkFunctionForGeneratedCodeFastGeoWorldSubsystem(void)

{
  return;
}

// Z_Construct_UClass_UFastGeoComponentEditorProxy_NoRegister @ 14da399d0

UClass * __cdecl Z_Construct_UClass_UFastGeoComponentEditorProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton,
               UFastGeoComponentEditorProxy::StaticRegisterNativesUFastGeoComponentEditorProxy,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFastGeoComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoComponentEditorProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton;
}

// Z_Construct_UClass_UFastGeoContainer_NoRegister @ 14da39a80

UClass * __cdecl Z_Construct_UClass_UFastGeoContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoContainer",
               &Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton,
               UFastGeoContainer::StaticRegisterNativesUFastGeoContainer,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoContainer>,
               InternalVTableHelperCtorCaller<UFastGeoContainer>,local_res8,
               UAssetUserData::StaticClass,ULevel::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton;
}

// Z_Construct_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy_NoRegister @ 14da39b40

UClass * __cdecl Z_Construct_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoInstancedStaticMeshComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.
                InnerSingleton,
               UFastGeoInstancedStaticMeshComponentEditorProxy::
               StaticRegisterNativesUFastGeoInstancedStaticMeshComponentEditorProxy,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFastGeoInstancedStaticMeshComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoInstancedStaticMeshComponentEditorProxy>,
               local_res8,UFastGeoStaticMeshComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.InnerSingleton;
}

// Z_Construct_UClass_UFastGeoPrimitiveComponentEditorProxy_NoRegister @ 14da39c00

UClass * __cdecl Z_Construct_UClass_UFastGeoPrimitiveComponentEditorProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoPrimitiveComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton,
               UFastGeoPrimitiveComponentEditorProxy::
               StaticRegisterNativesUFastGeoPrimitiveComponentEditorProxy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoPrimitiveComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoPrimitiveComponentEditorProxy>,local_res8,
               UFastGeoComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton;
}

// Z_Construct_UClass_UFastGeoStaticMeshComponentEditorProxy_NoRegister @ 14da39cc0

UClass * __cdecl Z_Construct_UClass_UFastGeoStaticMeshComponentEditorProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoStaticMeshComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton,
               UFastGeoStaticMeshComponentEditorProxy::
               StaticRegisterNativesUFastGeoStaticMeshComponentEditorProxy,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoStaticMeshComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoStaticMeshComponentEditorProxy>,local_res8,
               UFastGeoPrimitiveComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton;
}

// Z_Construct_UClass_UFastGeoWorldPartitionRuntimeCellTransformer_NoRegister @ 14da39d80

UClass * __cdecl Z_Construct_UClass_UFastGeoWorldPartitionRuntimeCellTransformer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoWorldPartitionRuntimeCellTransformer",
               &Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.
                InnerSingleton,
               UFastGeoWorldPartitionRuntimeCellTransformer::
               StaticRegisterNativesUFastGeoWorldPartitionRuntimeCellTransformer,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"FastGeoStreaming",
               InternalConstructor<UFastGeoWorldPartitionRuntimeCellTransformer>,
               InternalVTableHelperCtorCaller<UFastGeoWorldPartitionRuntimeCellTransformer>,
               local_res8,UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.InnerSingleton;
}

// Z_Construct_UClass_UFastGeoWorldSubsystem_NoRegister @ 14da39e40

UClass * __cdecl Z_Construct_UClass_UFastGeoWorldSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoWorldSubsystem",
               &Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton,
               UFastGeoWorldSubsystem::StaticRegisterNativesUFastGeoWorldSubsystem,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoWorldSubsystem>,
               InternalVTableHelperCtorCaller<UFastGeoWorldSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoWorldSubsystem.InnerSingleton;
}

// IMPLEMENT_MODULE_FastGeoStreaming @ 14da39f20

void __cdecl IMPLEMENT_MODULE_FastGeoStreaming(void)

{
  return;
}

// OnCreateRenderThreadResources'' @ 15045b950

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources);
  return;
}

// OnDestroyRenderThreadResources'' @ 15045b990

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
OnDestroyRenderThreadResources__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_)
    ;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncRenderStateTaskMaxNumComponentsToProcess'' @ 15045b9d0

void __cdecl
FastGeo::_dynamic_atexit_destructor_for__CVarAsyncRenderStateTaskMaxNumComponentsToProcess__(void)

{
  CVarAsyncRenderStateTaskMaxNumComponentsToProcess._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAsyncRenderStateTaskMaxNumComponentsToProcess);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncRenderStateTaskParallelWorkerCount'' @ 15045b9f0

void __cdecl
FastGeo::_dynamic_atexit_destructor_for__CVarAsyncRenderStateTaskParallelWorkerCount__(void)

{
  CVarAsyncRenderStateTaskParallelWorkerCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAsyncRenderStateTaskParallelWorkerCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncRenderStateTaskTimeBudgetMS'' @ 15045ba10

void __cdecl FastGeo::_dynamic_atexit_destructor_for__CVarAsyncRenderStateTaskTimeBudgetMS__(void)

{
  CVarAsyncRenderStateTaskTimeBudgetMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAsyncRenderStateTaskTimeBudgetMS);
  return;
}

// `dynamic_atexit_destructor_for_'GShowFastGeoCommand'' @ 15045ba30

void __cdecl FastGeo::_dynamic_atexit_destructor_for__GShowFastGeoCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GShowFastGeoCommand);
  return;
}

// `dynamic_atexit_destructor_for_'LogFastGeoStreaming'' @ 15045ba50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogFastGeoStreaming__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogFastGeoStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'Manager'' @ 15045ba70

void __cdecl
`FastGeo::FAsyncTaskAssetReferenceManager::Get'::__l2::_dynamic_atexit_destructor_for__Manager__
          (void)

{
  `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
  ::__l2::Manager.TasksAssets._72_4_ = 0;
  if (`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
                          ::__l2::Manager.TasksAssets._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
                 ::__l2::Manager.TasksAssets);
  `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
  ::__l2::Manager._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject
            ((FGCObject *)
             &`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
              ::__l2::Manager);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_FastGeo'' @ 15045bac0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_FastGeo__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_FastGeo.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_FastGeo.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_FastGeo.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

