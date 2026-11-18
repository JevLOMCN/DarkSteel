// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 680

// ExecHandler'' @ 1410b0de0

void __cdecl `dynamic_initializer_for_'UNavigationSystemV1::ExecHandler__(void)

{
  FSelfRegisteringExec::FSelfRegisteringExec
            ((FSelfRegisteringExec *)&UNavigationSystemV1::ExecHandler);
  UNavigationSystemV1::ExecHandler = (FNavigationSystemExec)&___7FNavigationSystemExec__6B_;
  atexit(`dynamic_atexit_destructor_for_'UNavigationSystemV1::ExecHandler__);
  return;
}

// NavigationDirtyEvent'' @ 1410b0e20

void __cdecl `dynamic_initializer_for_'UNavigationSystemV1::NavigationDirtyEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNavigationSystemV1::NavigationDirtyEvent__);
  return;
}

// Type'' @ 1410b0e40

void __cdecl `dynamic_initializer_for_'FAbstractNavigationPath::Type__(void)

{
  FNavPathType::NextUniqueId = FNavPathType::NextUniqueId + 1;
  FAbstractNavigationPath::Type.Id = FNavPathType::NextUniqueId;
  return;
}

// Type'' @ 1410b0e60

void __cdecl `dynamic_initializer_for_'FNavigationPath::Type__(void)

{
  FNavPathType::NextUniqueId = FNavPathType::NextUniqueId + 1;
  FNavigationPath::Type.Id = FNavPathType::NextUniqueId;
  return;
}

// `dynamic_initializer_for_'CPrio_TriggerAsyncQueries'' @ 1410b0e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_TriggerAsyncQueries__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_TriggerAsyncQueries,L"TaskGraph.TaskPriorities.NavTriggerAsyncQueries",
             L"Task and thread priority for UNavigationSystemV1::PerformAsyncQueries.",
             BackgroundThreadPriority,MainQueue,MainQueue);
  atexit(_dynamic_atexit_destructor_for__CPrio_TriggerAsyncQueries__);
  return;
}

// `dynamic_initializer_for_'CVarDestroyNavDataInCleanUpAndMarkPendingKill'' @ 1410b0ed0

void __cdecl
UE::Navigation::Private::_dynamic_initializer_for__CVarDestroyNavDataInCleanUpAndMarkPendingKill__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDestroyNavDataInCleanUpAndMarkPendingKill,
             L"ai.DestroyNavDataInCleanUpAndMarkPendingKill",
             &bDestroyNavDataInCleanUpAndMarkPendingKill,
             L"If set to 1 NavData will be destroyed in CleanUpAndMarkPendingKill rather than being marked as garbage.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDestroyNavDataInCleanUpAndMarkPendingKill__);
  return;
}

// `dynamic_initializer_for_'CVarMaxDirtyAreasCountWhileSuspended'' @ 1410b0f20

void __cdecl
UE::Navigation::Private::_dynamic_initializer_for__CVarMaxDirtyAreasCountWhileSuspended__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxDirtyAreasCountWhileSuspended,L"ai.navigation.MaxDirtyAreasCountWhileSuspended"
             ,&MaxDirtyAreasCountWhileSuspended,
             L"If a navigation data accumulates too many dirty areas because it\'s been indefinitely suspended, we\'ll stop accumulating them and rebuild the entire navigation data if it ever resumes building.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxDirtyAreasCountWhileSuspended__);
  return;
}

// `dynamic_initializer_for_'CVarNavCollisionAvailable'' @ 1410b0f70

void __cdecl _dynamic_initializer_for__CVarNavCollisionAvailable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNavCollisionAvailable,L"ai.NavCollisionAvailable",local_res8,
             L"If set to 0 NavCollision won\'t be cooked and will be unavailable at runtime.\n",0x40
            );
  atexit(_dynamic_atexit_destructor_for__CVarNavCollisionAvailable__);
  return;
}

// `dynamic_initializer_for_'CVarRollbackNavigationComponentShouldWaitForActorToRegister'' @ 1410b0fc0

void __cdecl
UE::Navigation::Private::
_dynamic_initializer_for__CVarRollbackNavigationComponentShouldWaitForActorToRegister__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRollbackNavigationComponentShouldWaitForActorToRegister,
             L"UE.Rollback.Navigation.ComponentShouldWaitForActorToRegister",
             &bComponentShouldWaitForActorToRegister,
             L"Components registration to navigation octree will be postponed until owning actor is registered to the octree.\nCategory: [Navigation]"
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarRollbackNavigationComponentShouldWaitForActorToRegister__
        );
  return;
}

// `dynamic_initializer_for_'CmdDumpOctreeElements'' @ 1410b1010

void __cdecl UE::Navigation::Private::_dynamic_initializer_for__CmdDumpOctreeElements__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"ai.debug.nav.DumpOctreeElements",
                      L"Iterates through all nodes of the navigation octree and log details about each element to the output device."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdDumpOctreeElements,pIVar5);
  CmdDumpOctreeElements._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CmdDumpOctreeElements__);
  return;
}

// `dynamic_initializer_for_'CmdDumpRepositoryElements'' @ 1410b11a0

void __cdecl UE::Navigation::Private::_dynamic_initializer_for__CmdDumpRepositoryElements__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"ai.debug.nav.DumpRepositoryElements",
                      L"Logs details about each element stored in the navigation repository to the output device."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdDumpRepositoryElements,pIVar5);
  CmdDumpRepositoryElements._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CmdDumpRepositoryElements__);
  return;
}

// `dynamic_initializer_for_'CmdLogInvokers'' @ 1410b1330

void __cdecl UE::Navigation::Private::_dynamic_initializer_for__CmdLogInvokers__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"ai.debug.nav.LogInvokers",
                      L"Iterate through all the navigation invokers and log details about each of them to the output device."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdLogInvokers,pIVar5);
  CmdLogInvokers._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CmdLogInvokers__);
  return;
}

// `dynamic_initializer_for_'CmdNavDirtyAreaAroundPlayer'' @ 1410b14c0

void __cdecl UE::Navigation::Private::_dynamic_initializer_for__CmdNavDirtyAreaAroundPlayer__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"ai.debug.nav.DirtyAreaAroundPlayer",
                      L"Dirty all tiles in a square area around the local player using provided value as extent (in cm), using 10 meters if not specified."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdNavDirtyAreaAroundPlayer,pIVar5);
  CmdNavDirtyAreaAroundPlayer._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CmdNavDirtyAreaAroundPlayer__);
  return;
}

// `dynamic_initializer_for_'ConsoleVariables'' @ 1410b1650

void __cdecl UE::NavigationOctree::Private::_dynamic_initializer_for__ConsoleVariables__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (ConsoleVariables,L"ai.debug.nav.validateConsistencyWhenAddingOctreeNode",
             &bValidateConsistencyWhenAddingNode,
             L"Used to validate that registered FNavigationElement matches the values returned by INavRelevantInterface when processing pending updates to add elements to the octree."
             ,0);
  atexit(_dynamic_atexit_destructor_for__ConsoleVariables__);
  return;
}

// `dynamic_initializer_for_'DebugTimeSliceDefaultSectionName'' @ 1410b16a0

void __cdecl FNavigationSystem::_dynamic_initializer_for__DebugTimeSliceDefaultSectionName__(void)

{
  ::FName::FName(&DebugTimeSliceDefaultSectionName,L"DefaultSection");
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_NavigationOctree'' @ 1410b16c0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_NavigationOctree__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_NavigationOctree,L"NavigationOctree",(FName)0x0,(FName)0x0,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogNavOctree'' @ 1410b1710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavOctree__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNavOctree,L"LogNavOctree",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNavOctree__);
  return;
}

// `dynamic_initializer_for_'LogNavigationDirtyArea'' @ 1410b1750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNavigationDirtyArea__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNavigationDirtyArea,L"LogNavigationDirtyArea",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNavigationDirtyArea__);
  return;
}

// `dynamic_initializer_for_'NAVCOLLISION_FORMAT'' @ 1410b1790

void __cdecl _dynamic_initializer_for__NAVCOLLISION_FORMAT__(void)

{
  FName::FName(&NAVCOLLISION_FORMAT,L"NavCollision_Chaos");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1410b17b0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1410b1840

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1410b18d0

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

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1410b1960

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1410b19f0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1410b1a80

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1410b1b10

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1410b1ba0

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1410b1c30

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

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1410b1cc0

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

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileBVTreeMemory'' @ 1410b1d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileBVTreeMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileBVTreeMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileBVTreeMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileBVTreeMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileBVTreeMemory,*pFVar1,
               L"Detour Tile BV Tree Memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileClustersMemory'' @ 1410b1de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileClustersMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileClustersMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileClustersMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileClustersMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileClustersMemory,*pFVar1,
               L"Detour Tile Poly CLusters Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileDetailMeshesMemory'' @ 1410b1e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileDetailMeshesMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileDetailMeshesMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailMeshesMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileDetailMeshesMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailMeshesMemory,*pFVar1,
               L"Detour Tile Detail Meshes Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileDetailTrisMemory'' @ 1410b1f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileDetailTrisMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileDetailTrisMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailTrisMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileDetailTrisMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailTrisMemory,*pFVar1,
               L"Detour Tile Detail Tris Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileDetailVertsMemory'' @ 1410b1f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileDetailVertsMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileDetailVertsMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileDetailVertsMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileDetailVertsMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileDetailVertsMemory,*pFVar1,
               L"Detour Tile Detail Verts Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileLinksMemory'' @ 1410b2020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileLinksMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileLinksMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileLinksMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileLinksMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileLinksMemory,*pFVar1,
               L"Detour Tile Links Memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileMemory'' @ 1410b20b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileMemory == (FThreadSafeStaticStat<FStat_STAT_DetourTileMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileMemory,*pFVar1,
               L"Detour Tile Memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileMeshHeaderMemory'' @ 1410b2140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileMeshHeaderMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileMeshHeaderMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileMeshHeaderMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileMeshHeaderMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileMeshHeaderMemory,*pFVar1,
               L"Detour Tile Mesh Header Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileNavPolysMemory'' @ 1410b21d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileNavPolysMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileNavPolysMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileNavPolysMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileNavPolysMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileNavPolysMemory,*pFVar1,
               L"Detour Tile Nav Polys Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileNavVertsMemory'' @ 1410b2260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileNavVertsMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileNavVertsMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileNavVertsMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileNavVertsMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileNavVertsMemory,*pFVar1,
               L"Detour Tile Nav Verts Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileOffMeshConsMemory'' @ 1410b22f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileOffMeshConsMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileOffMeshConsMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshConsMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileOffMeshConsMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileOffMeshConsMemory,*pFVar1,
               L"Detour Tile Off Mesh Cons Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTileOffMeshSegsMemory'' @ 1410b2380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTileOffMeshSegsMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTileOffMeshSegsMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTileOffMeshSegsMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTileOffMeshSegsMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTileOffMeshSegsMemory,*pFVar1,
               L"Detour Tile Off Mesh Segs Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DetourTilePolyClustersMemory'' @ 1410b2410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DetourTilePolyClustersMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DetourTilePolyClustersMemory ==
      (FThreadSafeStaticStat<FStat_STAT_DetourTilePolyClustersMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DetourTilePolyClustersMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DetourTilePolyClustersMemory,*pFVar1,
               L"Detour Tile Poly CLusters Memory","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NavOctreeBookkeeping'' @ 1410b24a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NavOctreeBookkeeping__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NavOctreeBookkeeping ==
      (FThreadSafeStaticStat<FStat_STAT_NavOctreeBookkeeping>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NavOctreeBookkeeping");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavOctreeBookkeeping,*pFVar1,
               L"NavOctree bookkeeping","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_ActorsGeometryExportSync'' @ 1410b2530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_ActorsGeometryExportSync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_ActorsGeometryExportSync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_ActorsGeometryExportSync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_ActorsGeometryExportSync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_ActorsGeometryExportSync,
               *pFVar1,L"Sync actors\' geometry export","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_AddingActorsToNavOctree'' @ 1410b25c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_AddingActorsToNavOctree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_AddingActorsToNavOctree ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_AddingActorsToNavOctree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_AddingActorsToNavOctree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_AddingActorsToNavOctree,*pFVar1
               ,L"Adding actors to navoctree","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_AdjustingNavLinks'' @ 1410b2650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_AdjustingNavLinks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_AdjustingNavLinks ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_AdjustingNavLinks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_AdjustingNavLinks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_AdjustingNavLinks,*pFVar1,
               L"Adjusting nav links","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_BSPExportSync'' @ 1410b26e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_BSPExportSync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_BSPExportSync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_BSPExportSync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_BSPExportSync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_BSPExportSync,*pFVar1,
               L"Sync BSP geometry export","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_BuildTime'' @ 1410b2770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_BuildTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_BuildTime ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_BuildTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_BuildTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_BuildTime,*pFVar1,
               L"Navmesh build time","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_CollisionTreeMemory'' @ 1410b2800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_CollisionTreeMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_CollisionTreeMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,*pFVar1,
               L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,false
               ,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_CreateTileGenerator'' @ 1410b2890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_CreateTileGenerator__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_CreateTileGenerator ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_CreateTileGenerator>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_CreateTileGenerator");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CreateTileGenerator,*pFVar1,
               L"Recast: create tile generator","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_CumulativeBuildTime'' @ 1410b2920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_CumulativeBuildTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_CumulativeBuildTime ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_CumulativeBuildTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_CumulativeBuildTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CumulativeBuildTime,*pFVar1,
               L"Navmesh cumulative build Time","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM'' @ 1410b29b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM,*pFVar1,
               L"Detour PERM","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE'' @ 1410b2a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_AVOIDANCE>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_AVOIDANCE");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_AVOIDANCE,*pFVar1,
               L"Detour PERM_AVOIDANCE","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_CROWD'' @ 1410b2ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_CROWD__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_CROWD ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_CROWD>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_CROWD");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_CROWD,*pFVar1,
               L"Detour PERM_CROWD","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_LOOKUP'' @ 1410b2b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_LOOKUP__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_LOOKUP ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_LOOKUP>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_LOOKUP");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_LOOKUP,*pFVar1,
               L"Detour PERM_LOOKUP","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_NAVMESH'' @ 1410b2bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_NAVMESH__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_NAVMESH ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVMESH>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_NAVMESH");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_NAVMESH,*pFVar1,
               L"Detour PERM_NAVMESH","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_NAVQUERY'' @ 1410b2c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_NAVQUERY__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_NAVQUERY ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NAVQUERY>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_NAVQUERY");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_NAVQUERY,*pFVar1,
               L"Detour PERM_NAVQUERY","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_NODE_POOL'' @ 1410b2d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_NODE_POOL__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_NODE_POOL ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_NODE_POOL>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_NODE_POOL");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_NODE_POOL,*pFVar1,
               L"Detour PERM_NODE_POOL","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR'' @ 1410b2da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_CORRIDOR>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_PATH_CORRIDOR");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_PATH_CORRIDOR,
               *pFVar1,L"Detour PERM_PATH_CORRIDOR","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE'' @ 1410b2e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PATH_QUEUE>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_PATH_QUEUE");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_PATH_QUEUE,*pFVar1,
               L"Detour PERM_PATH_QUEUE","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID'' @ 1410b2ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_PROXY_GRID>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_PROXY_GRID");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_PROXY_GRID,*pFVar1,
               L"Detour PERM_PROXY_GRID","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_TILES'' @ 1410b2f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_TILES__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_TILES ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILES>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_TILES");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_TILES,*pFVar1,
               L"Detour PERM_TILES","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_TILE_DATA'' @ 1410b2fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_TILE_DATA__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_TILE_DATA ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DATA>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_TILE_DATA");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_TILE_DATA,*pFVar1,
               L"Detour PERM_TILE_DATA","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER'' @ 1410b3070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_CLUSTER
               ,*pFVar1,L"Detour PERM_TILE_DYNLINK_CLUSTER","STATGROUP_Navigation",
               "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH'' @ 1410b3100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_TILE_DYNLINK_OFFMESH
               ,*pFVar1,L"Detour PERM_TILE_DYNLINK_OFFMESH","STATGROUP_Navigation",
               "STATCAT_Advanced",L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER'' @ 1410b3190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourPERM_TILE_LINK_BUILDER");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourPERM_TILE_LINK_BUILDER,
               *pFVar1,L"Detour PERM_TILE_LINK_BUILDER","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DetourTEMP'' @ 1410b3220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DetourTEMP__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DetourTEMP ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DetourTEMP>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DetourTEMP");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DetourTEMP,*pFVar1,
               L"Detour TEMP","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DispatchAsyncPathfindingResults'' @ 1410b32b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_Navigation_DispatchAsyncPathfindingResults__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DispatchAsyncPathfindingResults ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_DispatchAsyncPathfindingResults>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DispatchAsyncPathfindingResults");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DispatchAsyncPathfindingResults
               ,*pFVar1,L"Nav Tick: dispatch async pathfinding results","STATGROUP_Navigation",
               "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_DoWork'' @ 1410b3340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_DoWork__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_DoWork == (FThreadSafeStaticStat<FStat_STAT_Navigation_DoWork>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_DoWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DoWork,*pFVar1,
               L"Recast: do work","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_FilterLedgeSpans'' @ 1410b33d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_FilterLedgeSpans__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_FilterLedgeSpans ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_FilterLedgeSpans");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_FilterLedgeSpans,*pFVar1,
               L"Recast: filter ledge spans","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_GatheringNavigationModifiersSync'' @ 1410b3460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_Navigation_GatheringNavigationModifiersSync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_GatheringNavigationModifiersSync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_GatheringNavigationModifiersSync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_GatheringNavigationModifiersSync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_Navigation_GatheringNavigationModifiersSync,*pFVar1,
               L"Sync gathering navigation modifiers","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_GenerateNavigationDataLayer'' @ 1410b34f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_GenerateNavigationDataLayer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_GenerateNavigationDataLayer ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_GenerateNavigationDataLayer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_GenerateNavigationDataLayer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_GenerateNavigationDataLayer,
               *pFVar1,L"Recast: build navigation layer","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_NavDataMemory'' @ 1410b3580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_NavDataMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_NavDataMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_NavDataMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_NavDataMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_NavDataMemory,*pFVar1,
               L"Nav data memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,false
               ,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_ObservedPathsCount'' @ 1410b3610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_ObservedPathsCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_ObservedPathsCount ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_ObservedPathsCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_ObservedPathsCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_ObservedPathsCount,*pFVar1,
               L"Num observed nav paths","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_OffsetFromCorners'' @ 1410b36a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_OffsetFromCorners__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_OffsetFromCorners ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_OffsetFromCorners>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_OffsetFromCorners");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_OffsetFromCorners,*pFVar1,
               L"Offset from corners","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_OutOfNodesPath'' @ 1410b3730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_OutOfNodesPath__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_OutOfNodesPath ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_OutOfNodesPath>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_OutOfNodesPath");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_OutOfNodesPath,*pFVar1,
               L"Out of nodes path","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_PartialPath'' @ 1410b37c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_PartialPath__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_PartialPath ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_PartialPath>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_PartialPath");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_PartialPath,*pFVar1,
               L"Partial path","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_PathVisibilityOptimisation'' @ 1410b3850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_PathVisibilityOptimisation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_PathVisibilityOptimisation ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_PathVisibilityOptimisation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_PathVisibilityOptimisation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_PathVisibilityOptimisation,
               *pFVar1,L"Visibility test for path optimisation","STATGROUP_Navigation",
               "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_PathfindingAsync'' @ 1410b38e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_PathfindingAsync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_PathfindingAsync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_PathfindingAsync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_PathfindingAsync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_PathfindingAsync,*pFVar1,
               L"Async pathfinding","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_PathfindingSync'' @ 1410b3970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_PathfindingSync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_PathfindingSync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_PathfindingSync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_PathfindingSync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_PathfindingSync,*pFVar1,
               L"Sync pathfinding","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_ProcessingActorsForNavMeshBuilding'' @ 1410b3a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_Navigation_ProcessingActorsForNavMeshBuilding__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_ProcessingActorsForNavMeshBuilding ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_ProcessingActorsForNavMeshBuilding>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_ProcessingActorsForNavMeshBuilding");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_Navigation_ProcessingActorsForNavMeshBuilding,*pFVar1,
               L"Processing world for building navmesh","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_QueriesTimeSync'' @ 1410b3a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_QueriesTimeSync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_QueriesTimeSync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_QueriesTimeSync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_QueriesTimeSync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_QueriesTimeSync,*pFVar1,
               L"Sync queries","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastAddGeneratedTileLayer'' @ 1410b3b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastAddGeneratedTileLayer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastAddGeneratedTileLayer ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTileLayer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastAddGeneratedTileLayer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastAddGeneratedTileLayer,
               *pFVar1,L"Recast: sync add generated tile Layer","STATGROUP_Navigation",
               "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastAddGeneratedTiles'' @ 1410b3bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastAddGeneratedTiles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastAddGeneratedTiles ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTiles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastAddGeneratedTiles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastAddGeneratedTiles,*pFVar1
               ,L"Recast: sync add generated tiles","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildCompactHeightField'' @ 1410b3c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildCompactHeightField__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildCompactHeightField ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompactHeightField>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildCompactHeightField");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildCompactHeightField,
               *pFVar1,L"Recast: build compact height field","STATGROUP_Navigation",
               "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildCompressedLayers'' @ 1410b3cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildCompressedLayers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildCompressedLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompressedLayers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildCompressedLayers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildCompressedLayers,
               *pFVar1,L"Recast: build compressed layers","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildContours'' @ 1410b3d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildContours__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildContours ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildContours>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildContours");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildContours,*pFVar1,
               L"Recast: build contours","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildLayers'' @ 1410b3df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildLayers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLayers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildLayers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildLayers,*pFVar1,
               L"Recast: build layers","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildLinks'' @ 1410b3e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildLinks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildLinks ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLinks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildLinks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildLinks,*pFVar1,
               L"Recast: build links","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildLinks_FindEdges'' @ 1410b3f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildLinks_FindEdges__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildLinks_FindEdges ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLinks_FindEdges>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildLinks_FindEdges");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildLinks_FindEdges,
               *pFVar1,L"Recast: build links, find edges","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildLinks_Sample'' @ 1410b3fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildLinks_Sample__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildLinks_Sample ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLinks_Sample>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildLinks_Sample");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildLinks_Sample,*pFVar1
               ,L"Recast: build links, sample","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildNavigation'' @ 1410b4030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildNavigation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildNavigation ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildNavigation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildNavigation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildNavigation,*pFVar1,
               L"Recast: build navmesh","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildPolyDetail'' @ 1410b40c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildPolyDetail__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildPolyDetail ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildPolyDetail>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildPolyDetail");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildPolyDetail,*pFVar1,
               L"Recast: build poly detail","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildPolyMesh'' @ 1410b4150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildPolyMesh__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildPolyMesh ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildPolyMesh>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildPolyMesh");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildPolyMesh,*pFVar1,
               L"Recast: build poly mesh","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildRegions'' @ 1410b41e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildRegions__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildRegions ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildRegions>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildRegions");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildRegions,*pFVar1,
               L"Recast: build regions","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastBuildTileCache'' @ 1410b4270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastBuildTileCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastBuildTileCache ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildTileCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastBuildTileCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildTileCache,*pFVar1,
               L"Recast: build tile cache","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastComputeRasterizationMasks'' @ 1410b4300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_Navigation_RecastComputeRasterizationMasks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastComputeRasterizationMasks ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastComputeRasterizationMasks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastComputeRasterizationMasks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastComputeRasterizationMasks
               ,*pFVar1,L"Recast: compute rasterizaion masks","STATGROUP_Navigation",
               "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastCreateHeightField'' @ 1410b4390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastCreateHeightField__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastCreateHeightField ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateHeightField>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastCreateHeightField");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastCreateHeightField,*pFVar1
               ,L"Recast: create height field","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastCreateNavMeshData'' @ 1410b4420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastCreateNavMeshData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastCreateNavMeshData ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateNavMeshData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastCreateNavMeshData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastCreateNavMeshData,*pFVar1
               ,L"Recast: create mesh data","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastErodeWalkable'' @ 1410b44b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastErodeWalkable__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastErodeWalkable ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastErodeWalkable>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastErodeWalkable");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastErodeWalkable,*pFVar1,
               L"Recast: erode walkable areas","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastFilter'' @ 1410b4540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastFilter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastFilter ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastFilter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastFilter,*pFVar1,
               L"Recast: create filters","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastGatherOffMeshData'' @ 1410b45d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastGatherOffMeshData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastGatherOffMeshData ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastGatherOffMeshData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastGatherOffMeshData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastGatherOffMeshData,*pFVar1
               ,L"Recast: gather off mesh data","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastMarkAreas'' @ 1410b4660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastMarkAreas__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastMarkAreas ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMarkAreas>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastMarkAreas");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastMarkAreas,*pFVar1,
               L"Recast: mark areas","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastMemory'' @ 1410b46f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastMemory,*pFVar1,
               L"Recast memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastPathfinding'' @ 1410b4780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastPathfinding__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastPathfinding ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastPathfinding>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastPathfinding");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastPathfinding,*pFVar1,
               L"Recast: pathfinding","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastRasterizeTriangles'' @ 1410b4810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastRasterizeTriangles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastRasterizeTriangles ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastRasterizeTriangles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastRasterizeTriangles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastRasterizeTriangles,
               *pFVar1,L"Recast: rasterize triangles","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastTestPath'' @ 1410b48a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastTestPath__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastTestPath ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastTestPath>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastTestPath");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastTestPath,*pFVar1,
               L"Recast: test path","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastTick'' @ 1410b4930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastTick ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastTick,*pFVar1,
               L"Recast: tick","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RecastVoxelFilter'' @ 1410b49c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RecastVoxelFilter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RecastVoxelFilter ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastVoxelFilter>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RecastVoxelFilter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastVoxelFilter,*pFVar1,
               L"Recast: create voxel filter","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RegisterNavOctreeElement'' @ 1410b4a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RegisterNavOctreeElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RegisterNavOctreeElement ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RegisterNavOctreeElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RegisterNavOctreeElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RegisterNavOctreeElement,
               *pFVar1,L"Registering Nav Octree Element","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RemoveLayers'' @ 1410b4ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RemoveLayers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RemoveLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RemoveLayers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RemoveLayers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RemoveLayers,*pFVar1,
               L"Recast: remove layers","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_RequestingAsyncPathfinding'' @ 1410b4b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_RequestingAsyncPathfinding__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_RequestingAsyncPathfinding ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RequestingAsyncPathfinding>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_RequestingAsyncPathfinding");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RequestingAsyncPathfinding,
               *pFVar1,L"Sync requests for async pathfinding","STATGROUP_Navigation",
               "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_StoringCompressedLayers'' @ 1410b4c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_StoringCompressedLayers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_StoringCompressedLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_StoringCompressedLayers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_StoringCompressedLayers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_StoringCompressedLayers,*pFVar1
               ,L"Recast: storing compressed layers","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TickAsyncBuild'' @ 1410b4c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TickAsyncBuild__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TickAsyncBuild ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TickAsyncBuild>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TickAsyncBuild");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TickAsyncBuild,*pFVar1,
               L"Nav Tick: async build","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TickAsyncPathfinding'' @ 1410b4d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TickAsyncPathfinding__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TickAsyncPathfinding ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TickAsyncPathfinding>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TickAsyncPathfinding");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TickAsyncPathfinding,*pFVar1,
               L"Nav Tick: async pathfinding","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TickMarkDirty'' @ 1410b4db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TickMarkDirty__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TickMarkDirty ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TickMarkDirty>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TickMarkDirty");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TickMarkDirty,*pFVar1,
               L"Nav Tick: mark dirty","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TileBuildAsync'' @ 1410b4e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TileBuildAsync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TileBuildAsync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TileBuildAsync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TileBuildAsync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileBuildAsync,*pFVar1,
               L"Async navmesh tile building","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TileBuildPreparationSync'' @ 1410b4ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TileBuildPreparationSync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TileBuildPreparationSync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TileBuildPreparationSync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TileBuildPreparationSync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileBuildPreparationSync,
               *pFVar1,L"Sync tiles building preparation","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TileCacheMemory'' @ 1410b4f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TileCacheMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TileCacheMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TileCacheMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileCacheMemory,*pFVar1,
               L"Tile cache memory","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TileGeometryExportToObjAsync'' @ 1410b4ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TileGeometryExportToObjAsync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TileGeometryExportToObjAsync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TileGeometryExportToObjAsync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TileGeometryExportToObjAsync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileGeometryExportToObjAsync,
               *pFVar1,L"Async debug OBJ file export","STATGROUP_Navigation","STATCAT_Advanced",
               L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TileNavAreaSorting'' @ 1410b5080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TileNavAreaSorting__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TileNavAreaSorting ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TileNavAreaSorting>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TileNavAreaSorting");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileNavAreaSorting,*pFVar1,
               L"Async nav areas sorting","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_TileVoxelFilteringAsync'' @ 1410b5110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_TileVoxelFilteringAsync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_TileVoxelFilteringAsync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TileVoxelFilteringAsync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_TileVoxelFilteringAsync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileVoxelFilteringAsync,*pFVar1
               ,L"Async voxel filtering","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_UnregisterNavOctreeElement'' @ 1410b51a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_UnregisterNavOctreeElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_UnregisterNavOctreeElement ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_UnregisterNavOctreeElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_UnregisterNavOctreeElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_UnregisterNavOctreeElement,
               *pFVar1,L"Unregistering Nav Octree Element","STATGROUP_Navigation","STATCAT_Advanced"
               ,L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Navigation_UpdateNavOctree'' @ 1410b5230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Navigation_UpdateNavOctree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Navigation_UpdateNavOctree ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_UpdateNavOctree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Navigation_UpdateNavOctree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_UpdateNavOctree,*pFVar1,
               L"Num update nav octree","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true
               ,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h__Script_NavigationSystem_177191092'' @ 1410b52c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h__Script_NavigationSystem_177191092__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h__Script_NavigationSystem_2692556014'' @ 1410b5300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h__Script_NavigationSystem_2692556014__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h__Script_NavigationSystem_738965971'' @ 1410b5340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h__Script_NavigationSystem_738965971__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h__Script_NavigationSystem_3345628080'' @ 1410b5380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h__Script_NavigationSystem_3345628080__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h__Script_NavigationSystem_99165561'' @ 1410b53c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h__Script_NavigationSystem_99165561__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h__Script_NavigationSystem_4074688995'' @ 1410b5400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h__Script_NavigationSystem_4074688995__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h__Script_NavigationSystem_2648861335'' @ 1410b5440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h__Script_NavigationSystem_2648861335__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Default_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h__Script_NavigationSystem_3957143825'' @ 1410b5480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h__Script_NavigationSystem_3957143825__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h__Script_NavigationSystem_1669506900'' @ 1410b54c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h__Script_NavigationSystem_1669506900__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h__Script_NavigationSystem_1914151620'' @ 1410b5500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h__Script_NavigationSystem_1914151620__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h__Script_NavigationSystem_2589955455'' @ 1410b5540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h__Script_NavigationSystem_2589955455__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h__Script_NavigationSystem_4156448428'' @ 1410b5580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h__Script_NavigationSystem_4156448428__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h__Script_NavigationSystem_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h__Script_NavigationSystem_3795824542'' @ 1410b55d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h__Script_NavigationSystem_3795824542__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h__Script_NavigationSystem_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h__Script_NavigationSystem_1700540967'' @ 1410b5620

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h__Script_NavigationSystem_1700540967__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h__Script_NavigationSystem_40120676'' @ 1410b5660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h__Script_NavigationSystem_40120676__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h__Script_NavigationSystem_3910727386'' @ 1410b56a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h__Script_NavigationSystem_3910727386__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h__Script_NavigationSystem_4032562674'' @ 1410b56e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h__Script_NavigationSystem_4032562674__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h__Script_NavigationSystem_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h__Script_NavigationSystem_4253601667'' @ 1410b5730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h__Script_NavigationSystem_4253601667__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h__Script_NavigationSystem_3500146037'' @ 1410b5770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h__Script_NavigationSystem_3500146037__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkHostInterface_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h__Script_NavigationSystem_495656585'' @ 1410b57b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h__Script_NavigationSystem_495656585__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationDebugFlags_h__Script_NavigationSystem_2800704514'' @ 1410b57f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationDebugFlags_h__Script_NavigationSystem_2800704514__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationDebugFlags_h__Script_NavigationSystem_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h__Script_NavigationSystem_941121232'' @ 1410b5840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h__Script_NavigationSystem_941121232__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h__Script_NavigationSystem_2169407394'' @ 1410b5880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h__Script_NavigationSystem_2169407394__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h__Script_NavigationSystem_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h__Script_NavigationSystem_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h__Script_NavigationSystem_2697577818'' @ 1410b58d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h__Script_NavigationSystem_2697577818__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h__Script_NavigationSystem_2582090746'' @ 1410b5910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h__Script_NavigationSystem_2582090746__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPathGenerator_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h__Script_NavigationSystem_1934367769'' @ 1410b5950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h__Script_NavigationSystem_1934367769__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h__Script_NavigationSystem_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h__Script_NavigationSystem_3973789323'' @ 1410b5990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h__Script_NavigationSystem_3973789323__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NavigationSystem",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h__Script_NavigationSystem_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NavigationSystem'' @ 1410b59d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NavigationSystem__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xba1521e9;
  local_res8[0].DeclarationsHash = 0x6081a15c;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NavigationSystem,L"/Script/NavigationSystem",
             &Z_Registration_Info_UPackage__Script_NavigationSystem,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NavInvokers'' @ 1410b5a10

void __cdecl _dynamic_initializer_for___GCsvCategory_NavInvokers__(void)

{
  FString::operator=(&_GCsvCategory_NavInvokers.Name,L"NavInvokers");
  _GCsvCategory_NavInvokers.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NavInvokers.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NavInvokers__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NavTasks'' @ 1410b5a60

void __cdecl _dynamic_initializer_for___GCsvCategory_NavTasks__(void)

{
  FString::operator=(&_GCsvCategory_NavTasks.Name,L"NavTasks");
  _GCsvCategory_NavTasks.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NavTasks.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NavTasks__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NavTasksDelays'' @ 1410b5ab0

void __cdecl _dynamic_initializer_for___GCsvCategory_NavTasksDelays__(void)

{
  FString::operator=(&_GCsvCategory_NavTasksDelays.Name,L"NavTasksDelays");
  _GCsvCategory_NavTasksDelays.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NavTasksDelays.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NavTasksDelays__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NavigationBuildDetailed'' @ 1410b5b00

void __cdecl _dynamic_initializer_for___GCsvCategory_NavigationBuildDetailed__(void)

{
  FString::operator=(&_GCsvCategory_NavigationBuildDetailed.Name,L"NavigationBuildDetailed");
  _GCsvCategory_NavigationBuildDetailed.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NavigationBuildDetailed.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NavigationBuildDetailed__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NavigationSystem'' @ 1410b5b50

void __cdecl _dynamic_initializer_for___GCsvCategory_NavigationSystem__(void)

{
  FString::operator=(&_GCsvCategory_NavigationSystem.Name,L"NavigationSystem");
  _GCsvCategory_NavigationSystem.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NavigationSystem.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NavigationSystem__);
  return;
}

// Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius @ 146d60260

UFunction * __cdecl
Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d602a0

void __cdecl
Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation @ 146d602c0

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d60300

void __cdecl
Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData @ 146d60310

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d60350

void __cdecl
Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UClass_UNavLinkCustomInterface @ 146d60360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavLinkCustomInterface(void)

{
  if (Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton,
               &Z_Construct_UClass_UNavLinkCustomInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton;
}

// Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast @ 146d603a0

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated @ 146d604a0

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavCollision @ 146d606a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavCollision(void)

{
  if (Z_Registration_Info_UClass_UNavCollision.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavCollision.OuterSingleton,
               &Z_Construct_UClass_UNavCollision_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavCollision.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNavCollisionBox @ 146d606e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavCollisionBox(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavCollisionBox.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavCollisionBox.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavCollisionBox_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavCollisionBox.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavCollisionBox.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavCollisionCylinder @ 146d60760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavCollisionCylinder(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavCollisionCylinder.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavCollisionCylinder.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavCollisionCylinder.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FNavCollisionCylinder.InnerSingleton;
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

// NewStructOps @ 146d607e0

void * __cdecl Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavCollisionCylinder,&UE::CoreUObject::Private::Construct<FNavCollisionCylinder>,&UE::CoreUObject::Private::ConstructForTests<FNavCollisionCylinder>,&UE::CoreUObject::Private::Destruct<FNavCollisionCylinder>,&UE::CoreUObject::Private::Copy<FNavCollisionCylinder>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker @ 146d60820

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount @ 146d60860

UFunction * __cdecl
Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode @ 146d608a0

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavLinkHostInterface @ 146d608e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavLinkHostInterface(void)

{
  if (Z_Registration_Info_UClass_UNavLinkHostInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavLinkHostInterface.OuterSingleton,
               &Z_Construct_UClass_UNavLinkHostInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavLinkHostInterface.OuterSingleton;
}

// Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount @ 146d60920

UFunction * __cdecl
Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146d60960

void * __cdecl Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavCollisionBox,&UE::CoreUObject::Private::Construct<FNavCollisionBox>,&UE::CoreUObject::Private::ConstructForTests<FNavCollisionBox>,&UE::CoreUObject::Private::Destruct<FNavCollisionBox>,&UE::CoreUObject::Private::Copy<FNavCollisionBox>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker @ 146d609a0

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoCreateNavigationData_SetBit @ 146d609e0

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 1;
  return;
}

// NewProp_bSpawnNavDataInNavBoundsLevel_SetBit @ 146d60ab0

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 2;
  return;
}

// NewProp_bAllowClientSideNavigation_SetBit @ 146d60ac0

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 4;
  return;
}

// NewProp_bShouldDiscardSubLevelNavData_SetBit @ 146d60ad0

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 8;
  return;
}

// NewProp_bTickWhilePaused_SetBit @ 146d60ae0

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 0x10;
  return;
}

// NewProp_bSupportRebuilding_SetBit @ 146d60af0

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 0x20;
  return;
}

// NewProp_bInitialBuildingLocked_SetBit @ 146d60b00

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 0x40;
  return;
}

// NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit @ 146d60b10

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::
NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x68) = *(uint *)((longlong)param_1 + 0x68) | 0x100;
  return;
}

// NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit @ 146d60b20

void __cdecl
Z_Construct_UClass_UNavigationSystemV1_Statics::
NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 1;
  return;
}

// NewProp_bGatherConvexGeometry_SetBit @ 146d60b30

void __cdecl
Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x108) = *(uint *)((longlong)param_1 + 0x108) | 1;
  return;
}

// NewProp_bCreateOnClient_SetBit @ 146d60b40

void __cdecl Z_Construct_UClass_UNavCollision_Statics::NewProp_bCreateOnClient_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x108) = *(uint *)((longlong)param_1 + 0x108) | 2;
  return;
}

// Z_Construct_UClass_UNavLinkTrivial @ 146d60b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavLinkTrivial(void)

{
  if (Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton,
               &Z_Construct_UClass_UNavLinkTrivial_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146d60ed0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UNavNodeInterface @ 146d60f00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavNodeInterface(void)

{
  if (Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton,
               &Z_Construct_UClass_UNavNodeInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton;
}

// Z_Construct_UClass_UCrowdManagerBase_NoRegister @ 146d60f40

UClass * __cdecl Z_Construct_UClass_UCrowdManagerBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"CrowdManagerBase",
               &Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton,
               UCrowdManagerBase::StaticRegisterNativesUCrowdManagerBase,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCrowdManagerBase>,
               InternalVTableHelperCtorCaller<UCrowdManagerBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdManagerBase.InnerSingleton;
}

// Z_Construct_UClass_UCrowdManagerBase @ 146d61160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCrowdManagerBase(void)

{
  if (Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton,
               &Z_Construct_UClass_UCrowdManagerBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton;
}

// Z_Construct_UPackage__Script_NavigationSystem @ 146d611a0

UPackage * __cdecl Z_Construct_UPackage__Script_NavigationSystem(void)

{
  if (Z_Registration_Info_UPackage__Script_NavigationSystem.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NavigationSystem.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_NavigationSystem.OuterSingleton;
}

// NewProp_bStrictlyStatic_SetBit @ 146d611e0

void __cdecl
Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x58) = *(uint *)((longlong)param_1 + 0x58) | 1;
  return;
}

// NewProp_bCreateOnClient_SetBit @ 146d611f0

void __cdecl
Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x58) = *(uint *)((longlong)param_1 + 0x58) | 2;
  return;
}

// NewProp_bAutoSpawnMissingNavData_SetBit @ 146d61200

void __cdecl
Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x58) = *(uint *)((longlong)param_1 + 0x58) | 4;
  return;
}

// NewProp_bSpawnNavDataInNavBoundsLevel_SetBit @ 146d61210

void __cdecl
Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::
NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x58) = *(uint *)((longlong)param_1 + 0x58) | 8;
  return;
}

// Z_Construct_UClass_AAbstractNavData @ 146d61280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AAbstractNavData(void)

{
  if (Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton,
               &Z_Construct_UClass_AAbstractNavData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton;
}

// Z_Construct_UClass_ANavigationData @ 146d612c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANavigationData(void)

{
  if (Z_Registration_Info_UClass_ANavigationData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANavigationData.OuterSingleton,
               &Z_Construct_UClass_ANavigationData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANavigationData.OuterSingleton;
}

// ELinkGenerationDebugFlags_StaticEnum @ 146d61300

UEnum * __cdecl ELinkGenerationDebugFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags,
                       (UObject *)pUVar1,L"ELinkGenerationDebugFlags");
  }
  return Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton;
}

// Z_Construct_UClass_UNavArea_Null @ 146d61340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavArea_Null(void)

{
  if (Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton,
               &Z_Construct_UClass_UNavArea_Null_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton;
}

// Z_Construct_UClass_ANavigationGraphNode @ 146d614f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANavigationGraphNode(void)

{
  if (Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton,
               &Z_Construct_UClass_ANavigationGraphNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton;
}

// Z_Construct_UClass_UBaseGeneratedNavLinksProxy @ 146d61530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBaseGeneratedNavLinksProxy(void)

{
  if (Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.OuterSingleton,
               &Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.OuterSingleton;
}

// Z_Construct_UClass_UNavArea_Obstacle @ 146d61680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavArea_Obstacle(void)

{
  if (Z_Registration_Info_UClass_UNavArea_Obstacle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavArea_Obstacle.OuterSingleton,
               &Z_Construct_UClass_UNavArea_Obstacle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavArea_Obstacle.OuterSingleton;
}

// Z_Construct_UClass_UNavigationObjectRepository @ 146d61860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationObjectRepository(void)

{
  if (Z_Registration_Info_UClass_UNavigationObjectRepository.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationObjectRepository.OuterSingleton,
               &Z_Construct_UClass_UNavigationObjectRepository_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationObjectRepository.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146d61a90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d61cb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d61f50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_ANavigationData_NoRegister @ 146d61ff0

UClass * __cdecl Z_Construct_UClass_ANavigationData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationData",
               &Z_Registration_Info_UClass_ANavigationData.InnerSingleton,
               ANavigationData::StaticRegisterNativesANavigationData,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<ANavigationData>,
               InternalVTableHelperCtorCaller<ANavigationData>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationData.InnerSingleton;
}

// Z_Construct_UClass_UNavigationQueryFilter_NoRegister @ 146d62130

UClass * __cdecl Z_Construct_UClass_UNavigationQueryFilter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationQueryFilter",
               &Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton,
               UNavigationQueryFilter::StaticRegisterNativesUNavigationQueryFilter,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationQueryFilter>,
               InternalVTableHelperCtorCaller<UNavigationQueryFilter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationQueryFilter.InnerSingleton;
}

// Z_Construct_UClass_ANavigationGraph @ 146d62310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANavigationGraph(void)

{
  if (Z_Registration_Info_UClass_ANavigationGraph.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANavigationGraph.OuterSingleton,
               &Z_Construct_UClass_ANavigationGraph_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANavigationGraph.OuterSingleton;
}

// NewStructOps @ 146d62350

void * __cdecl Z_Construct_UScriptStruct_FNavGraphEdge_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavGraphEdge,&UE::CoreUObject::Private::Construct<FNavGraphEdge>,&UE::CoreUObject::Private::ConstructForTests<FNavGraphEdge>,&UE::CoreUObject::Private::Destruct<FNavGraphEdge>,&UE::CoreUObject::Private::Copy<FNavGraphEdge>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146d62450

void * __cdecl Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavGraphNode,&UE::CoreUObject::Private::Construct<FNavGraphNode>,&UE::CoreUObject::Private::ConstructForTests<FNavGraphNode>,&UE::CoreUObject::Private::Destruct<FNavGraphNode>,&UE::CoreUObject::Private::Copy<FNavGraphNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNavigationQueryFilter @ 146d625d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationQueryFilter(void)

{
  if (Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton,
               &Z_Construct_UClass_UNavigationQueryFilter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNavigationFilterArea @ 146d62610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationFilterArea(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationFilterArea.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationFilterArea.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationFilterArea.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FNavigationFilterArea.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationFilterFlags @ 146d62690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationFilterFlags(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationFilterFlags.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationFilterFlags.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationFilterFlags.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationFilterFlags.InnerSingleton;
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

// Z_Construct_UClass_UNavArea @ 146d62710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavArea(void)

{
  if (Z_Registration_Info_UClass_UNavArea.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavArea.OuterSingleton,
               &Z_Construct_UClass_UNavArea_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavArea.OuterSingleton;
}

// NewProp_bIsExcluded_SetBit @ 146d62750

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) | 1;
  return;
}

// NewProp_bOverrideTravelCost_SetBit @ 146d62760

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) | 2;
  return;
}

// NewProp_bOverrideEnteringCost_SetBit @ 146d62770

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x10) = *(uint *)((longlong)param_1 + 0x10) | 4;
  return;
}

// NewStructOps @ 146d62780

void * __cdecl Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationFilterArea,&UE::CoreUObject::Private::Construct<FNavigationFilterArea>,&UE::CoreUObject::Private::ConstructForTests<FNavigationFilterArea>,&UE::CoreUObject::Private::Destruct<FNavigationFilterArea>,&UE::CoreUObject::Private::Copy<FNavigationFilterArea>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSupportsAgent0_SetBit @ 146d627c0

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 1;
  return;
}

// NewProp_bSupportsAgent1_SetBit @ 146d627d0

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 2;
  return;
}

// NewProp_bSupportsAgent2_SetBit @ 146d627e0

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 4;
  return;
}

// NewProp_bSupportsAgent3_SetBit @ 146d627f0

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 8;
  return;
}

// NewProp_bSupportsAgent4_SetBit @ 146d62800

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x10;
  return;
}

// NewProp_bSupportsAgent5_SetBit @ 146d62810

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x20;
  return;
}

// NewProp_bSupportsAgent6_SetBit @ 146d62820

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x40;
  return;
}

// NewProp_bSupportsAgent7_SetBit @ 146d62830

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x80;
  return;
}

// NewProp_bSupportsAgent8_SetBit @ 146d62840

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x100;
  return;
}

// NewProp_bSupportsAgent9_SetBit @ 146d62850

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x200;
  return;
}

// NewProp_bSupportsAgent10_SetBit @ 146d62860

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x400;
  return;
}

// NewProp_bSupportsAgent11_SetBit @ 146d62870

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x800;
  return;
}

// NewProp_bSupportsAgent12_SetBit @ 146d62880

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x1000;
  return;
}

// NewProp_bSupportsAgent13_SetBit @ 146d62890

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x2000;
  return;
}

// NewProp_bSupportsAgent14_SetBit @ 146d628a0

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x4000;
  return;
}

// NewProp_bSupportsAgent15_SetBit @ 146d628b0

void __cdecl Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) | 0x8000;
  return;
}

// NewProp_bNavFlag0_SetBit @ 146d628c0

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bNavFlag1_SetBit @ 146d628d0

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bNavFlag2_SetBit @ 146d628e0

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bNavFlag3_SetBit @ 146d628f0

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// NewProp_bNavFlag4_SetBit @ 146d62900

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x10;
  return;
}

// NewProp_bNavFlag5_SetBit @ 146d62910

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x20;
  return;
}

// NewProp_bNavFlag6_SetBit @ 146d62920

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x40;
  return;
}

// NewProp_bNavFlag7_SetBit @ 146d62930

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x80;
  return;
}

// NewProp_bNavFlag8_SetBit @ 146d62940

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x100;
  return;
}

// NewProp_bNavFlag9_SetBit @ 146d62950

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x200;
  return;
}

// NewProp_bNavFlag10_SetBit @ 146d62960

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x400;
  return;
}

// NewProp_bNavFlag11_SetBit @ 146d62970

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x800;
  return;
}

// NewProp_bNavFlag12_SetBit @ 146d62980

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x1000;
  return;
}

// NewProp_bNavFlag13_SetBit @ 146d62990

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x2000;
  return;
}

// NewProp_bNavFlag14_SetBit @ 146d629a0

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x4000;
  return;
}

// NewProp_bNavFlag15_SetBit @ 146d629b0

void __cdecl
Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x8000;
  return;
}

// NewStructOps @ 146d629c0

void * __cdecl Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationFilterFlags,&UE::CoreUObject::Private::Construct<FNavigationFilterFlags>,&UE::CoreUObject::Private::ConstructForTests<FNavigationFilterFlags>,&UE::CoreUObject::Private::Destruct<FNavigationFilterFlags>,&UE::CoreUObject::Private::Copy<FNavigationFilterFlags>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNavigationPath @ 146d62a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationPath(void)

{
  if (Z_Registration_Info_UClass_UNavigationPath.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationPath.OuterSingleton,
               &Z_Construct_UClass_UNavigationPath_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationPath.OuterSingleton;
}

// NewProp_bShouldDrawDebugData_SetBit @ 146d62a40

void __cdecl
Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::
NewProp_bShouldDrawDebugData_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing @ 146d62b10

UFunction * __cdecl Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation @ 146d62b50

UFunction * __cdecl Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavAreaMeta @ 146d62b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavAreaMeta(void)

{
  if (Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton,
               &Z_Construct_UClass_UNavAreaMeta_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton;
}

// Z_Construct_UFunction_UNavigationPath_GetDebugString @ 146d62bd0

UFunction * __cdecl Z_Construct_UFunction_UNavigationPath_GetDebugString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationPath_GetPathCost @ 146d62cd0

UFunction * __cdecl Z_Construct_UFunction_UNavigationPath_GetPathCost(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationPath_GetPathLength @ 146d62dd0

UFunction * __cdecl Z_Construct_UFunction_UNavigationPath_GetPathLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d62e10

void __cdecl
Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavigationPath_IsPartial @ 146d62e20

UFunction * __cdecl Z_Construct_UFunction_UNavigationPath_IsPartial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavigationInvokerComponent @ 146d62e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationInvokerComponent(void)

{
  if (Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton,
               &Z_Construct_UClass_UNavigationInvokerComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146d62ea0

void __cdecl
Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavigationPath_IsStringPulled @ 146d62f70

UFunction * __cdecl Z_Construct_UFunction_UNavigationPath_IsStringPulled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d62fb0

void __cdecl
Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNavigationPath_IsValid @ 146d63080

UFunction * __cdecl Z_Construct_UFunction_UNavigationPath_IsValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UNavigationPath_IsValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavAreaMeta_SwitchByAgent @ 146d630c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavAreaMeta_SwitchByAgent(void)

{
  if (Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.OuterSingleton,
               &Z_Construct_UClass_UNavAreaMeta_SwitchByAgent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.OuterSingleton;
}

// Z_Construct_UClass_UNavigationObjectRepository_NoRegister @ 146d63240

UClass * __cdecl Z_Construct_UClass_UNavigationObjectRepository_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationObjectRepository",
               &Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton,
               UNavigationObjectRepository::StaticRegisterNativesUNavigationObjectRepository,0x150,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationObjectRepository>,
               InternalVTableHelperCtorCaller<UNavigationObjectRepository>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationObjectRepository.InnerSingleton;
}

// Z_Construct_UClass_UNavArea_Default @ 146d633c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavArea_Default(void)

{
  if (Z_Registration_Info_UClass_UNavArea_Default.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavArea_Default.OuterSingleton,
               &Z_Construct_UClass_UNavArea_Default_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavArea_Default.OuterSingleton;
}

// Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType @ 146d634c0

UEnum * __cdecl Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType(void)

{
  if (Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton,
               &Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSupportedAreaData @ 146d63500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSupportedAreaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSupportedAreaData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSupportedAreaData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSupportedAreaData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSupportedAreaData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSupportedAreaData.InnerSingleton;
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

// Z_Construct_UClass_UNavArea_LowHeight @ 146d63580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavArea_LowHeight(void)

{
  if (Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton,
               &Z_Construct_UClass_UNavArea_LowHeight_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton;
}

// NewStructOps @ 146d635c0

void * __cdecl Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSupportedAreaData,&UE::CoreUObject::Private::Construct<FSupportedAreaData>,&UE::CoreUObject::Private::ConstructForTests<FSupportedAreaData>,&UE::CoreUObject::Private::Destruct<FSupportedAreaData>,&UE::CoreUObject::Private::Copy<FSupportedAreaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNavigationSystemV1_NoRegister @ 146d63600

UClass * __cdecl Z_Construct_UClass_UNavigationSystemV1_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemV1.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNavigationSystemV1::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationSystemV1",
               &Z_Registration_Info_UClass_UNavigationSystemV1.InnerSingleton,
               UNavigationSystemV1::StaticRegisterNativesUNavigationSystemV1,0x16a0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Engine",InternalConstructor<UNavigationSystemV1>,
               InternalVTableHelperCtorCaller<UNavigationSystemV1>,local_res8,
               UNavigationSystemBase::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemV1.InnerSingleton;
}

// ERuntimeGenerationType_StaticEnum @ 146d63780

UEnum * __cdecl ERuntimeGenerationType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType,(UObject *)pUVar1,
                       L"ERuntimeGenerationType");
  }
  return Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton;
}

// Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister @ 146d63880

UClass * __cdecl Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraphNodeComponent",
               &Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton,
               UNavigationGraphNodeComponent::StaticRegisterNativesUNavigationGraphNodeComponent,
               0x280,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationGraphNodeComponent>,
               InternalVTableHelperCtorCaller<UNavigationGraphNodeComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton;
}

// NewProp_bEnableDrawing_SetBit @ 146d63a00

void __cdecl
Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x358) = *(uint *)((longlong)param_1 + 0x358) | 1;
  return;
}

// NewProp_bForceRebuildOnLoad_SetBit @ 146d63a10

void __cdecl
Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x358) = *(uint *)((longlong)param_1 + 0x358) | 2;
  return;
}

// NewProp_bAutoDestroyWhenNoNavigation_SetBit @ 146d63a20

void __cdecl
Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x358) = *(uint *)((longlong)param_1 + 0x358) | 4;
  return;
}

// NewProp_bCanBeMainNavData_SetBit @ 146d63a30

void __cdecl
Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x358) = *(uint *)((longlong)param_1 + 0x358) | 8;
  return;
}

// NewProp_bCanSpawnOnRebuild_SetBit @ 146d63a40

void __cdecl
Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x358) = *(uint *)((longlong)param_1 + 0x358) | 0x10;
  return;
}

// NewProp_bRebuildAtRuntime_SetBit @ 146d63a50

void __cdecl
Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x358) = *(uint *)((longlong)param_1 + 0x358) | 0x20;
  return;
}

// `scalar_deleting_destructor' @ 146d63d90

void * __thiscall
FNavigationSystemExec::_scalar_deleting_destructor_(FNavigationSystemExec *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UNavigationGraphNodeComponent @ 146d63dd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationGraphNodeComponent(void)

{
  if (Z_Registration_Info_UClass_UNavigationGraphNodeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationGraphNodeComponent.OuterSingleton,
               &Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationGraphNodeComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNavGraphNode @ 146d63e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavGraphNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavGraphNode.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavGraphNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavGraphNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavGraphNode.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavGraphNode.InnerSingleton;
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

// Z_Construct_UClass_UNavigationPathGenerator @ 146d63f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationPathGenerator(void)

{
  if (Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton,
               &Z_Construct_UClass_UNavigationPathGenerator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationPathGenerator.OuterSingleton;
}

// Z_Construct_UClass_UNavigationPath_NoRegister @ 146d63f90

UClass * __cdecl Z_Construct_UClass_UNavigationPath_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationPath.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationPath",
               &Z_Registration_Info_UClass_UNavigationPath.InnerSingleton,
               UNavigationPath::StaticRegisterNativesUNavigationPath,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavigationPath>,
               InternalVTableHelperCtorCaller<UNavigationPath>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationPath.InnerSingleton;
}

// Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature @ 146d64040

UFunction * __cdecl
Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature @ 146d64080

UFunction * __cdecl
Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavArea_NoRegister @ 146d64170

UClass * __cdecl Z_Construct_UClass_UNavArea_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea",
               &Z_Registration_Info_UClass_UNavArea.InnerSingleton,
               UNavArea::StaticRegisterNativesUNavArea,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavArea>,InternalVTableHelperCtorCaller<UNavArea>,local_res8,
               UNavAreaBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea.InnerSingleton;
}

// Z_Construct_UClass_URecastFilter_UseDefaultArea @ 146d642f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URecastFilter_UseDefaultArea(void)

{
  if (Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.OuterSingleton,
               &Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.OuterSingleton;
}

// Z_Construct_UClass_UNavigationSystemModuleConfig @ 146d643f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationSystemModuleConfig(void)

{
  if (Z_Registration_Info_UClass_UNavigationSystemModuleConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationSystemModuleConfig.OuterSingleton,
               &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationSystemModuleConfig.OuterSingleton;
}

// Z_Construct_UClass_UNavigationSystemV1 @ 146d64430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationSystemV1(void)

{
  if (Z_Registration_Info_UClass_UNavigationSystemV1.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationSystemV1.OuterSingleton,
               &Z_Construct_UClass_UNavigationSystemV1_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationSystemV1.OuterSingleton;
}

// Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously @ 146d64470

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously @ 146d644b0

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem @ 146d644f0

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationSystemV1_GetPathCost @ 146d64590

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_GetPathCost(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNavigationSystemV1_GetPathLength @ 146d64700

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_GetPathLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d64740

void __cdecl
Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt @ 146d64750

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d64790

void __cdecl
Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked @ 146d647a0

UFunction * __cdecl Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d647e0

void __cdecl
Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius @ 146d647f0

UFunction * __cdecl
Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d64830

void __cdecl
Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius @ 146d64840

UFunction * __cdecl
Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146d64880

void __cdecl
Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// FNavigationMemoryStat> @ 146d64d60

FArchive * __cdecl
operator<<<int,NavMeshMemory::FNavigationMemoryStat>
          (FArchive *param_1,TArray<int,NavMeshMemory::FNavigationMemoryStat> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
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
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::
          ReallocForCopy<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                    (4,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance)._padding_,(longlong)param_2->ArrayNum << 2);
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

// FNavigationMemoryStat> @ 146d64d70

FArchive * __cdecl
operator<<<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat>
          (FArchive *param_1,
          TArray<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FArchive *pFVar6;
  int iVar7;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar7 = 0;
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
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((((param_1->field_0x28 & 1) != 0) &&
            (UE::Core::Private::
             ReallocForCopy<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                       (0x18,8,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],
                        piVar1), (param_1->field_0x28 & 1) != 0)) &&
           ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec)) {
          TArray<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat>::Empty
                    (param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar5 = param_2->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                (0x818,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar5 + 1;
            UE::Math::operator<<
                      (param_1,(TVector<double> *)
                               ((param_2->AllocatorInstance)._padding_ + (longlong)iVar5 * 0x18));
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)auStackX_8[0]);
          return param_1;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance)._padding_,(longlong)param_2->ArrayNum * 0x18
                  );
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar3)();
        return pFVar6;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<UNavArea> @ 146d64d80

FArchive * __cdecl operator<<<UNavArea>(FArchive *param_1,TSubclassOf<UNavArea> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x150))();
  return param_1;
}

// Cast<UNavigationSystemV1,UNavigationSystemBase> @ 146d66bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavigationSystemV1 * __cdecl
Cast<UNavigationSystemV1,UNavigationSystemBase>(UNavigationSystemBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UNavigationSystemBase *)0x0) {
    pUVar2 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UNavigationSystemV1 *)param_1;
    }
  }
  return (UNavigationSystemV1 *)0x0;
}

// CastChecked<AAbstractNavData,AActor> @ 146d66c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAbstractNavData * __cdecl CastChecked<AAbstractNavData,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<AAbstractNavData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AAbstractNavData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AAbstractNavData *)param_1;
  }
  pFVar3 = GetTypeName<AAbstractNavData>(&local_28);
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

// CastChecked<ANavMeshBoundsVolume,AActor> @ 146d66cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavMeshBoundsVolume * __cdecl CastChecked<ANavMeshBoundsVolume,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ANavMeshBoundsVolume>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ANavMeshBoundsVolume *)param_1;
  }
  pFVar3 = GetTypeName<ANavMeshBoundsVolume>(&local_28);
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

// CastChecked<ANavigationData,AActor> @ 146d66d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationData * __cdecl CastChecked<ANavigationData,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ANavigationData>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ANavigationData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ANavigationData *)param_1;
  }
  pFVar3 = GetTypeName<ANavigationData>(&local_28);
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

// CastChecked<ANavigationData,AActor> @ 146d66e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationData * __cdecl CastChecked<ANavigationData,AActor>(AActor *param_1,Type param_2)

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
      return (ANavigationData *)0x0;
    }
    pFVar3 = GetTypeName<ANavigationData>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ANavigationData::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ANavigationData *)param_1;
  }
  pFVar3 = GetTypeName<ANavigationData>(&local_28);
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

// CastChecked<ARecastNavMesh,AActor> @ 146d66f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ARecastNavMesh * __cdecl CastChecked<ARecastNavMesh,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ARecastNavMesh>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ARecastNavMesh *)param_1;
  }
  pFVar3 = GetTypeName<ARecastNavMesh>(&local_28);
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

// CastChecked<INavAgentInterface,AActor_const_> @ 146d66ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

INavAgentInterface * __cdecl CastChecked<INavAgentInterface,AActor_const_>(AActor *param_1)

{
  UClass *pUVar1;
  INavAgentInterface *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<INavAgentInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar1 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
  if (pIVar2 != (INavAgentInterface *)0x0) {
    return pIVar2;
  }
  pFVar3 = GetTypeName<INavAgentInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNavigationSystemV1,UObject> @ 146d670a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavigationSystemV1 * __cdecl CastChecked<UNavigationSystemV1,UObject>(UObject *param_1)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar2 = GetTypeName<UNavigationSystemV1>(&local_28);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar3);
  }
  bVar1 = UObjectBaseUtility::IsA<UNavigationSystemV1>((UObjectBaseUtility *)param_1);
  if (bVar1) {
    return (UNavigationSystemV1 *)param_1;
  }
  pFVar2 = GetTypeName<UNavigationSystemV1>(&local_28);
  pwVar3 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pFVar2 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar2->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar3,pwVar4);
}

// ConstructItems<FAsyncPathFindingQuery,FAsyncPathFindingQuery,int> @ 146d67360

void __cdecl
ConstructItems<FAsyncPathFindingQuery,FAsyncPathFindingQuery,int>
          (void *param_1,FAsyncPathFindingQuery *param_2,int param_3)

{
  Type *pTVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = &param_2->_padding_;
    plVar4 = (longlong *)((longlong)param_1 + 0x60);
    do {
      FPathFindingQueryData::FPathFindingQueryData
                ((FPathFindingQueryData *)(plVar4 + -0xc),
                 (FPathFindingQueryData *)
                 ((longlong)param_2 + (-0x60 - (longlong)param_1) + (longlong)plVar4));
      plVar4[-1] = plVar5[-1];
      *plVar4 = *plVar5;
      lVar2 = plVar5[1];
      plVar4[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      FNavAgentProperties::FNavAgentProperties
                ((FNavAgentProperties *)(plVar4 + 2),(FNavAgentProperties *)(plVar5 + 2));
      *(uint *)(plVar4 + 9) = *(uint *)(plVar5 + 9);
      TDelegate<void___cdecl(unsigned_int,enum_ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
      ::
      TDelegate<void___cdecl(unsigned_int,enum_ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
                (plVar4 + 10,
                 (TDelegate<void___cdecl(unsigned_int,ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
                  *)(plVar5 + 10));
      *(uchar *)(plVar4 + 0xd) = ((TEnumAsByte<EPathFindingMode::Type> *)(plVar5 + 0xd))->Value;
      plVar4[0xe] = (longlong)(((FPathFindingResult *)(plVar5 + 0xe))->Path).Object;
      pTVar3 = ((FSharedReferencer<1> *)(plVar5 + 0xf))->ReferenceController;
      plVar4[0xf] = (longlong)pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar1 = (Type *)(plVar5 + 0x10);
      plVar5 = plVar5 + 0x1d;
      *(Type *)(plVar4 + 0x10) = *pTVar1;
      plVar4 = plVar4 + 0x1d;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavDataConfig,FNavDataConfig,int> @ 146d67440

void __cdecl
ConstructItems<FNavDataConfig,FNavDataConfig,int>(void *param_1,FNavDataConfig *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FNavDataConfig::FNavDataConfig((FNavDataConfig *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavPathRecalculationRequest,FNavPathRecalculationRequest,int> @ 146d67490

void __cdecl
ConstructItems<FNavPathRecalculationRequest,FNavPathRecalculationRequest,int>
          (void *param_1,FNavPathRecalculationRequest *param_2,int param_3)

{
  Type TVar1;
  TReferenceControllerBase<1> *pTVar2;
  Type *pTVar3;
  Type *pTVar4;
  
  if (param_3 != 0) {
    pTVar4 = &param_2->Reason;
    pTVar3 = (Type *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(pTVar3 + -4) =
           *(undefined8 *)((longlong)pTVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pTVar2 = ((FWeakReferencer<1> *)(pTVar4 + -2))->ReferenceController;
      *(TReferenceControllerBase<1> **)(pTVar3 + -2) = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
        UNLOCK();
      }
      TVar1 = *pTVar4;
      pTVar4 = pTVar4 + 6;
      *pTVar3 = TVar1;
      pTVar3 = pTVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNavigationDirtyArea,FNavigationDirtyArea,int> @ 146d674e0

void __cdecl
ConstructItems<FNavigationDirtyArea,FNavigationDirtyArea,int>
          (void *param_1,FNavigationDirtyArea *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FNavigationDirtyArea::FNavigationDirtyArea
                ((FNavigationDirtyArea *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FNode,int> @ 146d67840

void __cdecl
DefaultConstructItems<TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FNode,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 146d67870

void __cdecl
DefaultConstructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x488);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x10;
      puVar1 = puVar1 + 0x124;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FNavigationElement_const_,1>_const_,int> @ 146d67900

void __cdecl
DestructItems<TSharedRef<FNavigationElement_const_,1>_const_,int>
          (TSharedRef<FNavigationElement_const_,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAreaNavModifier,int> @ 146d67940

void __cdecl DestructItems<FAreaNavModifier,int>(FAreaNavModifier *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Points;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAsyncPathFindingQuery,int> @ 146d67980

void __cdecl DestructItems<FAsyncPathFindingQuery,int>(FAsyncPathFindingQuery *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->OnDoneDelegate;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[1].field_0x10);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
      if (*(void **)(this + -1) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(this + -3));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-5].field_0x8);
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[9].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNavAgentProperties,int> @ 146d679f0

void __cdecl DestructItems<FNavAgentProperties,int>(FNavAgentProperties *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->PreferredNavData).field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNavDataConfig,int> @ 146d67a30

void __cdecl DestructItems<FNavDataConfig,int>(FNavDataConfig *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)plVar1[10] != (void *)0x0) {
        FMemory::Free((void *)plVar1[10]);
      }
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNavPathRecalculationRequest,int> @ 146d67a80

void __cdecl
DestructItems<FNavPathRecalculationRequest,int>(FNavPathRecalculationRequest *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->Path).WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNavigationDirtyArea,int> @ 146d67ad0

void __cdecl DestructItems<FNavigationDirtyArea,int>(FNavigationDirtyArea *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->OptionalSourceElement).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNavigationOctreeElement,int> @ 146d67b10

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
DestructItems<FNavigationOctreeElement,int>(FNavigationOctreeElement *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Data).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSimpleLinkNavModifier,int> @ 146d67b50

void __cdecl DestructItems<FSimpleLinkNavModifier,int>(FSimpleLinkNavModifier *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Links;
    do {
      pFVar1 = (((TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSupportedAreaData,int> @ 146d67ba0

void __cdecl DestructItems<FSupportedAreaData,int>(FSupportedAreaData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AreaClassName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<double,TSizedDefaultAllocator<32>_>,int> @ 146d67be0

void __cdecl
DestructItems<TArray<double,TSizedDefaultAllocator<32>_>,int>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 146d67c20

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
DestructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  ForElementType<FNavigationOctreeElement> FVar1;
  ForElementType<FNavigationOctreeElement> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      FVar1 = *pFVar2;
      if (*pFVar2 == (ForElementType<FNavigationOctreeElement>)0x0) {
        FVar1 = (ForElementType<FNavigationOctreeElement>)(pFVar2 + -0x90);
      }
      DestructItems<FNavigationOctreeElement,int>
                ((FNavigationOctreeElement *)FVar1,*(int *)(pFVar2 + 1));
      if (*pFVar2 != (ForElementType<FNavigationOctreeElement>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      pFVar2 = pFVar2 + 0x92;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,int> @ 146d67c90

void __cdecl
DestructItems<TArray<FTileHistoryData,TSizedDefaultAllocator<32>_>,int>
          (TArray<FTileHistoryData,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TWeakPtr<FNavigationPath,1>,int> @ 146d67cd0

void __cdecl
DestructItems<TWeakPtr<FNavigationPath,1>,int>(TWeakPtr<FNavigationPath,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindElementsWithBoundsTestInternal<`FNavigationDataHandler::FindElementsInNavOctree'::__l2::<lambda_1>_> @ 146d69d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
FindElementsWithBoundsTestInternal<_FNavigationDataHandler::FindElementsInNavOctree_::__l2::<lambda_1>_>
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,uint param_1,
          FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,<lambda_1> *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  TArray<FNavigationOctreeElement,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  bool bVar25;
  uint uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined4 uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  undefined1 *this_00;
  FNavigationRelevantData *this_01;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  byte bVar38;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  longlong lVar42;
  longlong lVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  double dVar52;
  uint uVar53;
  double dVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  undefined1 local_res8 [8];
  uint local_res10;
  FOctreeNodeContext *local_res18;
  TVector4<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  uint uVar39;
  
  uVar40 = ~param_1 >> 0x1f;
  uVar26 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar26 = uVar40;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  if ((uVar26 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)param_1 * 8 + 4) != 0) {
    uVar26 = 0;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar26 = uVar40;
    }
    uVar31 = (ulonglong)uVar26;
    if (uVar26 == 0) {
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar31 = CONCAT71(extraout_var,bVar25);
      if (bVar25) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar36 = _UNK_15061cc8c;
    uVar30 = _UNK_15061cc88;
    uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar41 = (this->TreeElements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x490;
    iVar34 = *(int *)(pFVar41 + 0x488);
    pFVar37 = *(FScriptContainerElement **)(pFVar41 + 0x480);
    if (*(FScriptContainerElement **)(pFVar41 + 0x480) == (FScriptContainerElement *)0x0) {
      pFVar37 = pFVar41;
    }
    this_01 = (FNavigationRelevantData *)((longlong)iVar34 * 9);
    pFVar1 = pFVar37 + (longlong)iVar34 * 0x48;
    while( true ) {
      uVar27 = (undefined4)uVar31;
      uVar32 = SUB84(this_01,0);
      if (*(int *)(pFVar41 + 0x488) != iVar34) {
        this_00 = local_res8;
        local_res8[0] = 0;
        bVar25 = `TCheckedPointerIterator<FNavigationOctreeElement_const_,int,0>::operator!='::__l2
                 ::<lambda_1>::operator()(this_00);
        uVar32 = SUB84(this_00,0);
        uVar27 = (undefined4)CONCAT71(extraout_var_00,bVar25);
      }
      uVar28 = local_res10;
      if (pFVar37 == pFVar1) break;
      dVar52 = *(double *)(pFVar37 + 0x10) - (param_3->Center).field0_0x0._s_0.Z;
      dVar54 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      lVar42 = -(ulonglong)
                ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
                (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & uVar36,SUB84(dVar54,0) & uVar30
                                ));
      auVar11._8_4_ = (int)lVar42;
      auVar11._0_8_ =
           -(ulonglong)
            (*(double *)(pFVar37 + 0x28) + (param_3->Extent).field0_0x0._s_0.Z <
            (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar29,SUB84(dVar52,0) & uVar26));
      auVar11._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
      iVar33 = movmskpd(uVar32,auVar11);
      dVar52 = *(double *)pFVar37 - (param_3->Center).field0_0x0._s_0.X;
      dVar54 = *(double *)(pFVar37 + 8) - (param_3->Center).field0_0x0._s_0.Y;
      lVar42 = -(ulonglong)
                (*(double *)(pFVar37 + 0x20) + (param_3->Extent).field0_0x0._s_0.Y <
                (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & uVar36,SUB84(dVar54,0) & uVar30
                                ));
      auVar6._8_4_ = (int)lVar42;
      auVar6._0_8_ = -(ulonglong)
                      (*(double *)(pFVar37 + 0x18) + (param_3->Extent).field0_0x0._s_0.X <
                      (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar29,
                                       SUB84(dVar52,0) & uVar26));
      auVar6._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
      uVar28 = movmskpd(uVar27,auVar6);
      uVar31 = (ulonglong)uVar28;
      uVar28 = iVar33 << 2 | uVar28;
      this_01 = (FNavigationRelevantData *)(ulonglong)uVar28;
      if (uVar28 == 0) {
        this_01 = *(FNavigationRelevantData **)(pFVar37 + 0x38);
        bVar25 = FNavigationRelevantData::IsMatchingFilter(this_01,param_4->Filter);
        uVar31 = CONCAT71(extraout_var_01,bVar25);
        if (bVar25) {
          pTVar3 = param_4->Elements;
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar4 <= pFVar37) && (pFVar37 < pFVar4 + (longlong)pTVar3->ArrayMax * 0x48)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar33 = pTVar3->ArrayNum;
          if (iVar33 == pTVar3->ArrayMax) {
            iVar33 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
          }
          lVar42 = (longlong)iVar33;
          pTVar3->ArrayNum = iVar33 + 1;
          uVar21 = *(undefined8 *)(pFVar37 + 8);
          this_01 = (FNavigationRelevantData *)(pTVar3->AllocatorInstance).Data;
          puVar2 = (undefined8 *)((longlong)&this_01->Bounds + lVar42 * 0x48 + -0x40);
          *puVar2 = *(undefined8 *)pFVar37;
          puVar2[1] = uVar21;
          uVar21 = *(undefined8 *)(pFVar37 + 0x18);
          puVar2 = (undefined8 *)((longlong)&this_01->Bounds + lVar42 * 0x48 + -0x30);
          *puVar2 = *(undefined8 *)(pFVar37 + 0x10);
          puVar2[1] = uVar21;
          uVar21 = *(undefined8 *)(pFVar37 + 0x28);
          puVar2 = (undefined8 *)((longlong)&this_01->Bounds + lVar42 * 0x48 + -0x20);
          *puVar2 = *(undefined8 *)(pFVar37 + 0x20);
          puVar2[1] = uVar21;
          *(undefined8 *)((longlong)&this_01->Bounds + lVar42 * 0x48 + -0x10) =
               *(undefined8 *)(pFVar37 + 0x30);
          *(undefined8 *)((longlong)&this_01->Bounds + lVar42 * 0x48 + -8) =
               *(undefined8 *)(pFVar37 + 0x38);
          uVar31 = *(ulonglong *)(pFVar37 + 0x40);
          *(ulonglong *)((longlong)&this_01->Bounds + lVar42 * 0x48) = uVar31;
          if (uVar31 != 0) {
            LOCK();
            *(int *)(uVar31 + 8) = *(int *)(uVar31 + 8) + 1;
            UNLOCK();
          }
        }
      }
      pFVar37 = pFVar37 + 0x48;
    }
    iVar34 = (this->TreeNodes).ArrayNum;
    lVar42 = (longlong)(int)local_res10;
    uVar26 = 0;
    if ((int)local_res10 < iVar34) {
      uVar26 = uVar40;
    }
    if (uVar26 == 0) {
      iVar34 = 0x506106c8;
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar25) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar41 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar41 + lVar42 * 8) != -1) {
      dVar10 = (param_3->Center).field0_0x0._s_0.Z;
      dVar14 = (param_3->Center).field0_0x0._s_0.W;
      dVar15 = (local_res18->Bounds).Center.field0_0x0._s_0.Z;
      dVar16 = (local_res18->Bounds).Center.field0_0x0._s_0.W;
      dVar52 = local_res18->ChildCenterOffset;
      dVar54 = local_res18->ChildExtent;
      dVar17 = (local_res18->Bounds).Center.field0_0x0._s_0.X;
      dVar18 = (local_res18->Bounds).Center.field0_0x0._s_0.Y;
      dVar19 = (param_3->Center).field0_0x0._s_0.X;
      dVar20 = (param_3->Center).field0_0x0._s_0.Y;
      lVar43 = -(ulonglong)
                ((dVar52 + dVar16) - dVar54 < (param_3->Extent).field0_0x0._s_0.W + dVar14);
      auVar7._8_4_ = (int)lVar43;
      auVar7._0_8_ = -(ulonglong)
                      ((dVar52 + dVar15) - dVar54 < (param_3->Extent).field0_0x0._s_0.Z + dVar10);
      auVar7._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      uVar36 = movmskpd((int)pFVar37,auVar7);
      lVar43 = -(ulonglong)
                ((dVar52 + dVar18) - dVar54 < (param_3->Extent).field0_0x0._s_0.Y + dVar20);
      auVar8._8_4_ = (int)lVar43;
      auVar8._0_8_ = -(ulonglong)
                      ((dVar52 + dVar17) - dVar54 < (param_3->Extent).field0_0x0._s_0.X + dVar19);
      auVar8._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      uVar29 = movmskpd((int)pFVar41,auVar8);
      auVar59._8_8_ =
           -(ulonglong)(dVar14 - (param_3->Extent).field0_0x0._s_0.W <= (dVar16 - dVar52) + dVar54);
      auVar59._0_8_ =
           -(ulonglong)(dVar10 - (param_3->Extent).field0_0x0._s_0.Z <= (dVar15 - dVar52) + dVar54);
      iVar34 = movmskpd(iVar34,auVar59);
      lVar43 = -(ulonglong)
                (dVar20 - (param_3->Extent).field0_0x0._s_0.Y <= (dVar18 - dVar52) + dVar54);
      auVar13._8_4_ = (int)lVar43;
      auVar13._0_8_ =
           -(ulonglong)(dVar19 - (param_3->Extent).field0_0x0._s_0.X <= (dVar17 - dVar52) + dVar54);
      auVar13._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      uVar30 = movmskpd(uVar29,auVar13);
      uVar26 = 0;
      if ((int)uVar28 < (this->TreeNodes).ArrayNum) {
        uVar26 = uVar40;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar24 = _UNK_15074415c;
      uVar28 = _UNK_150744158;
      uVar40 = _UNK_150744154;
      uVar26 = ___xmm_00000008000000040000000200000001;
      dVar54 = __real_3ff1000000000000;
      fVar23 = _UNK_15068954c;
      fVar22 = _UNK_150689548;
      dVar52 = __real_3fe0000000000000;
      uVar60 = (uint)__xmm_80000000000000008000000000000000;
      uVar31 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar33 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar42 * 8);
      uVar39 = 0;
      do {
        uVar35 = (~uVar39 & 7) << 3 | uVar39 & 7;
        if ((uVar35 & ((uVar36 & 1) << 2 | uVar29 & 7 | (iVar34 << 2 | uVar30) << 3)) == uVar35) {
          uVar55 = SUB84(local_res18->ChildCenterOffset,0) ^ uVar60;
          uVar56 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20) ^ (uint)uVar31;
          dVar10 = (double)(float)-(uint)((uVar39 & uVar26) == uVar26);
          uVar35 = SUB84(dVar10,0);
          uVar44 = (uint)((ulonglong)dVar10 >> 0x20);
          dVar10 = (double)(float)-(uint)((uVar39 & uVar40) == uVar40);
          uVar45 = SUB84(dVar10,0);
          uVar46 = (uint)((ulonglong)dVar10 >> 0x20);
          dVar10 = (double)(float)-(uint)((uVar39 & uVar28) == uVar28);
          uVar47 = SUB84(dVar10,0);
          uVar48 = (uint)((ulonglong)dVar10 >> 0x20);
          dVar10 = (double)(float)-(uint)((uVar39 & uVar24) == uVar24);
          uVar49 = SUB84(dVar10,0);
          uVar50 = (uint)((ulonglong)dVar10 >> 0x20);
          uVar51 = SUB84(local_res18->ChildCenterOffset,0);
          auVar58._0_4_ = uVar35 & uVar51;
          uVar53 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20);
          auVar58._4_4_ = uVar44 & uVar53;
          auVar58._8_4_ = uVar45 & uVar51;
          auVar58._12_4_ = uVar46 & uVar53;
          auVar9._4_4_ = ~uVar44 & uVar56;
          auVar9._0_4_ = ~uVar35 & uVar55;
          auVar9._8_4_ = ~uVar45 & uVar55;
          auVar9._12_4_ = ~uVar46 & uVar56;
          local_f8._s_0.X =
               SUB168(auVar58 | auVar9,0) + (local_res18->Bounds).Center.field0_0x0._s_0.X;
          local_f8._s_0.Y =
               SUB168(auVar58 | auVar9,8) + (local_res18->Bounds).Center.field0_0x0._s_0.Y;
          auVar57._0_4_ = uVar47 & uVar51;
          auVar57._4_4_ = uVar48 & uVar53;
          auVar57._8_4_ = uVar49 & uVar51;
          auVar57._12_4_ = uVar50 & uVar53;
          auVar12._4_4_ = ~uVar48 & uVar56;
          auVar12._0_4_ = ~uVar47 & uVar55;
          auVar12._8_4_ = ~uVar49 & uVar55;
          auVar12._12_4_ = ~uVar50 & uVar56;
          local_b0 = local_res18->ChildExtent;
          local_d8._8_4_ = SUB84(local_b0,0);
          local_d8._0_8_ = local_b0;
          local_d8._12_4_ = (int)((ulonglong)local_b0 >> 0x20);
          dVar10 = local_b0 * (double)fVar23;
          local_f8._16_8_ =
               (SUB168(auVar57 | auVar12,0) + (local_res18->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar22;
          local_f8._24_8_ =
               (SUB168(auVar57 | auVar12,8) + (local_res18->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar23;
          local_c8._8_4_ = SUB84(dVar10,0);
          local_c8._0_8_ = local_b0 * (double)fVar22;
          local_c8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_b8 = local_b0 * dVar52 * dVar54;
          local_b0 = local_b0 - local_b8;
          FindElementsWithBoundsTestInternal<_FNavigationDataHandler::FindElementsInNavOctree_::__l2::<lambda_1>_>
                    (this,uVar39 + iVar33,(FOctreeNodeContext *)&local_f8._s_0,param_3,param_4);
        }
        bVar38 = (char)uVar39 + 1;
        uVar39 = (uint)bVar38;
      } while ((char)bVar38 < '\b');
    }
  }
  return;
}

// FindNodesWithPredicateInternal<`UE::Navigation::Private::<lambda_27>::operator()'::__l8::<lambda_1>,`UE::Navigation::Private::<lambda_27>::operator()'::__l8::<lambda_2>_> @ 146d6a630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
FindNodesWithPredicateInternal<_UE::Navigation::Private::<lambda_27>::operator()_::__l8::<lambda_1>,_UE::Navigation::Private::<lambda_27>::operator()_::__l8::<lambda_2>_>
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,uint param_1,
          uint param_2,FOctreeNodeContext *param_3,<lambda_1> *param_4,<lambda_2> *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  uint uVar21;
  uint uVar22;
  double dVar23;
  uint uVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  TVector4<double>_u_0 local_c8;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  
  lVar14 = (longlong)(int)param_2;
  uVar16 = ~param_2 >> 0x1f;
  uVar12 = 0;
  if ((int)param_2 < (this->TreeNodes).ArrayNum) {
    uVar12 = uVar16;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar14 * 8 + 4) != 0) {
    `UE::Navigation::Private::<lambda_27>::operator()'::__l8::<lambda_2>::operator()
              (param_5,param_1,param_2,&param_3->Bounds);
    uVar12 = 0;
    if ((int)param_2 < (this->TreeNodes).ArrayNum) {
      uVar12 = uVar16;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar14 * 8) != -1) {
      uVar12 = 0;
      if ((int)param_2 < (this->TreeNodes).ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = _UNK_15074415c;
      uVar9 = _UNK_150744158;
      uVar16 = _UNK_150744154;
      uVar12 = ___xmm_00000008000000040000000200000001;
      dVar8 = __real_3ff1000000000000;
      dVar7 = __real_3fe0000000000000;
      bVar15 = 0;
      iVar1 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar14 * 8);
      uVar34 = (uint)__xmm_80000000000000008000000000000000;
      uVar6 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      dVar4 = (double)_UNK_150689548;
      dVar5 = (double)_UNK_15068954c;
      do {
        uVar30 = SUB84(param_3->ChildCenterOffset,0) ^ uVar34;
        uVar31 = (uint)((ulonglong)param_3->ChildCenterOffset >> 0x20) ^ (uint)uVar6;
        uVar13 = (uint)bVar15;
        dVar18 = (double)(float)-(uint)((uVar13 & uVar12) == uVar12);
        dVar23 = (double)(float)-(uint)((uVar13 & uVar16) == uVar16);
        uVar17 = SUB84(dVar18,0);
        uVar21 = (uint)((ulonglong)dVar18 >> 0x20);
        uVar22 = SUB84(dVar23,0);
        uVar24 = (uint)((ulonglong)dVar23 >> 0x20);
        auVar19._0_4_ = ~uVar17 & uVar30;
        auVar19._4_4_ = ~uVar21 & uVar31;
        auVar19._8_4_ = ~uVar22 & uVar30;
        auVar19._12_4_ = ~uVar24 & uVar31;
        dVar18 = (double)(float)-(uint)((uVar13 & uVar9) == uVar9);
        uVar25 = SUB84(dVar18,0);
        uVar26 = (uint)((ulonglong)dVar18 >> 0x20);
        dVar18 = (double)(float)-(uint)((uVar13 & uVar10) == uVar10);
        uVar27 = SUB84(dVar18,0);
        uVar28 = (uint)((ulonglong)dVar18 >> 0x20);
        uVar29 = SUB84(param_3->ChildCenterOffset,0);
        auVar33._0_4_ = uVar17 & uVar29;
        uVar17 = (uint)((ulonglong)param_3->ChildCenterOffset >> 0x20);
        auVar33._4_4_ = uVar21 & uVar17;
        auVar33._8_4_ = uVar22 & uVar29;
        auVar33._12_4_ = uVar24 & uVar17;
        local_c8._s_0.X = SUB168(auVar33 | auVar19,0) + (param_3->Bounds).Center.field0_0x0._s_0.X;
        local_c8._s_0.Y = SUB168(auVar33 | auVar19,8) + (param_3->Bounds).Center.field0_0x0._s_0.Y;
        auVar32._0_4_ = uVar25 & uVar29;
        auVar32._4_4_ = uVar26 & uVar17;
        auVar32._8_4_ = uVar27 & uVar29;
        auVar32._12_4_ = uVar28 & uVar17;
        auVar3._4_4_ = ~uVar26 & uVar31;
        auVar3._0_4_ = ~uVar25 & uVar30;
        auVar3._8_4_ = ~uVar27 & uVar30;
        auVar3._12_4_ = ~uVar28 & uVar31;
        local_80 = param_3->ChildExtent;
        auVar20._8_4_ = SUB84(dVar5,0);
        auVar20._0_8_ = dVar4;
        auVar20._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_98 = dVar4 * local_80;
        dStack_90 = auVar20._8_8_ * local_80;
        local_c8._s_0.Z =
             (SUB168(auVar32 | auVar3,0) + (param_3->Bounds).Center.field0_0x0._s_0.Z) * dVar4;
        local_c8._s_0.W =
             (SUB168(auVar32 | auVar3,8) + (param_3->Bounds).Center.field0_0x0._s_0.W) * dVar5;
        local_a8._8_4_ = SUB84(local_80,0);
        local_a8._0_8_ = local_80;
        local_a8._12_4_ = (int)((ulonglong)local_80 >> 0x20);
        local_88 = local_80 * dVar7 * dVar8;
        local_80 = local_80 - local_88;
        FindNodesWithPredicateInternal<_UE::Navigation::Private::<lambda_27>::operator()_::__l8::<lambda_1>,_UE::Navigation::Private::<lambda_27>::operator()_::__l8::<lambda_2>_>
                  (this,param_2,uVar13 + iVar1,(FOctreeNodeContext *)&local_c8._s_0,param_4,param_5)
        ;
        bVar15 = bVar15 + 1;
      } while ((char)bVar15 < '\b');
    }
  }
  return;
}

// FindNodesWithPredicateInternal<`UNavigationSystemV1::GatherDebugLabels'::__l8::<lambda_1>,`UNavigationSystemV1::GatherDebugLabels'::__l8::<lambda_2>_> @ 146d6a8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
FindNodesWithPredicateInternal<_UNavigationSystemV1::GatherDebugLabels_::__l8::<lambda_1>,_UNavigationSystemV1::GatherDebugLabels_::__l8::<lambda_2>_>
          (TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *this,uint param_1,
          uint param_2,FOctreeNodeContext *param_3,<lambda_1> *param_4,<lambda_2> *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  TArrayView<FNavigationOctreeElement_const_,int> *pTVar14;
  longlong lVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  uint uVar22;
  uint uVar23;
  double dVar24;
  uint uVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  TArrayView<FNavigationOctreeElement_const_,int> local_d8;
  TVector4<double>_u_0 local_c8;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  
  lVar15 = (longlong)(int)param_2;
  uVar17 = ~param_2 >> 0x1f;
  uVar12 = 0;
  if ((int)param_2 < (this->TreeNodes).ArrayNum) {
    uVar12 = uVar17;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar15 * 8 + 4) != 0) {
    *param_5->NumNodes = *param_5->NumNodes + 1;
    pTVar14 = GetElementsForNode((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                                 &param_5->Octree->_padding_,&local_d8,param_2);
    *param_5->NumElements = *param_5->NumElements + pTVar14->ArrayNum;
    uVar12 = 0;
    if ((int)param_2 < (this->TreeNodes).ArrayNum) {
      uVar12 = uVar17;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar15 * 8) != -1) {
      uVar12 = 0;
      if ((int)param_2 < (this->TreeNodes).ArrayNum) {
        uVar12 = uVar17;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = _UNK_15074415c;
      uVar9 = _UNK_150744158;
      uVar17 = _UNK_150744154;
      uVar12 = ___xmm_00000008000000040000000200000001;
      dVar8 = __real_3ff1000000000000;
      dVar7 = __real_3fe0000000000000;
      bVar16 = 0;
      iVar1 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar15 * 8);
      uVar35 = (uint)__xmm_80000000000000008000000000000000;
      uVar6 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      dVar4 = (double)_UNK_150689548;
      dVar5 = (double)_UNK_15068954c;
      do {
        uVar31 = SUB84(param_3->ChildCenterOffset,0) ^ uVar35;
        uVar32 = (uint)((ulonglong)param_3->ChildCenterOffset >> 0x20) ^ (uint)uVar6;
        uVar13 = (uint)bVar16;
        dVar19 = (double)(float)-(uint)((uVar13 & uVar12) == uVar12);
        dVar24 = (double)(float)-(uint)((uVar13 & uVar17) == uVar17);
        uVar18 = SUB84(dVar19,0);
        uVar22 = (uint)((ulonglong)dVar19 >> 0x20);
        uVar23 = SUB84(dVar24,0);
        uVar25 = (uint)((ulonglong)dVar24 >> 0x20);
        auVar20._0_4_ = ~uVar18 & uVar31;
        auVar20._4_4_ = ~uVar22 & uVar32;
        auVar20._8_4_ = ~uVar23 & uVar31;
        auVar20._12_4_ = ~uVar25 & uVar32;
        dVar19 = (double)(float)-(uint)((uVar13 & uVar9) == uVar9);
        uVar26 = SUB84(dVar19,0);
        uVar27 = (uint)((ulonglong)dVar19 >> 0x20);
        dVar19 = (double)(float)-(uint)((uVar13 & uVar10) == uVar10);
        uVar28 = SUB84(dVar19,0);
        uVar29 = (uint)((ulonglong)dVar19 >> 0x20);
        uVar30 = SUB84(param_3->ChildCenterOffset,0);
        auVar34._0_4_ = uVar18 & uVar30;
        uVar18 = (uint)((ulonglong)param_3->ChildCenterOffset >> 0x20);
        auVar34._4_4_ = uVar22 & uVar18;
        auVar34._8_4_ = uVar23 & uVar30;
        auVar34._12_4_ = uVar25 & uVar18;
        local_c8._s_0.X = SUB168(auVar34 | auVar20,0) + (param_3->Bounds).Center.field0_0x0._s_0.X;
        local_c8._s_0.Y = SUB168(auVar34 | auVar20,8) + (param_3->Bounds).Center.field0_0x0._s_0.Y;
        auVar33._0_4_ = uVar26 & uVar30;
        auVar33._4_4_ = uVar27 & uVar18;
        auVar33._8_4_ = uVar28 & uVar30;
        auVar33._12_4_ = uVar29 & uVar18;
        auVar3._4_4_ = ~uVar27 & uVar32;
        auVar3._0_4_ = ~uVar26 & uVar31;
        auVar3._8_4_ = ~uVar28 & uVar31;
        auVar3._12_4_ = ~uVar29 & uVar32;
        local_80 = param_3->ChildExtent;
        auVar21._8_4_ = SUB84(dVar5,0);
        auVar21._0_8_ = dVar4;
        auVar21._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_98 = dVar4 * local_80;
        dStack_90 = auVar21._8_8_ * local_80;
        local_c8._s_0.Z =
             (SUB168(auVar33 | auVar3,0) + (param_3->Bounds).Center.field0_0x0._s_0.Z) * dVar4;
        local_c8._s_0.W =
             (SUB168(auVar33 | auVar3,8) + (param_3->Bounds).Center.field0_0x0._s_0.W) * dVar5;
        local_a8._8_4_ = SUB84(local_80,0);
        local_a8._0_8_ = local_80;
        local_a8._12_4_ = (int)((ulonglong)local_80 >> 0x20);
        local_88 = local_80 * dVar7 * dVar8;
        local_80 = local_80 - local_88;
        FindNodesWithPredicateInternal<_UNavigationSystemV1::GatherDebugLabels_::__l8::<lambda_1>,_UNavigationSystemV1::GatherDebugLabels_::__l8::<lambda_2>_>
                  (this,param_2,uVar13 + iVar1,(FOctreeNodeContext *)&local_c8._s_0,param_4,param_5)
        ;
        bVar16 = bVar16 + 1;
      } while ((char)bVar16 < '\b');
    }
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,1,1,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 146d6abd0

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

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_146d6acf3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_146d6acf3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_146d6ad8d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_146d6ad8d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_146d6ae90;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_146d6ae90:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      `AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,1,0,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 146d6b100

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
AActor::
ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UActorComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_146d6b206;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_146d6b206:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146d6b28d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_146d6b28d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146d6b391;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_146d6b391:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UActorComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UActorComponent *)0x0) {
      `AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::
      <lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,0,1,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 146d6b410

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

void __thiscall
AActor::
ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UActorComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_146d6b503;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_146d6b503:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_146d6b5b0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_146d6b5b0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_146d6b6c0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_146d6b6c0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UActorComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[3]._padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UActorComponent,0,0,`AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 146d6b950

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
AActor::
ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UActorComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_146d6ba2e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_146d6ba2e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_146d6babf;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_146d6babf:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_146d6bbd0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_146d6bbd0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UActorComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UActorComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::
        <lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetFullNameForCastLogError<AActor_const_> @ 146d6bff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<AActor_const_>(FString *__return_storage_ptr__,AActor *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<AAbstractNavData> @ 146d6c680

FString * __cdecl GetTypeName<AAbstractNavData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AAbstractNavData::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ANavMeshBoundsVolume> @ 146d6c6c0

FString * __cdecl GetTypeName<ANavMeshBoundsVolume>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ANavigationData> @ 146d6c700

FString * __cdecl GetTypeName<ANavigationData>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ANavigationData::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ARecastNavMesh> @ 146d6c740

FString * __cdecl GetTypeName<ARecastNavMesh>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<INavAgentInterface> @ 146d6c780

FString * __cdecl GetTypeName<INavAgentInterface>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNavAgentInterface_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNavigationSystemV1> @ 146d6c7c0

FString * __cdecl GetTypeName<UNavigationSystemV1>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNavigationSystemV1::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,`FNavRegenTimeSliceManager::LogTileStatistics'::__l18::<lambda_1>_>_> @ 146d6c800

void __cdecl
AlgoImpl::
HeapSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,_FNavRegenTimeSliceManager::LogTileStatistics_::__l18::<lambda_1>_>_>
          (FTileHistoryData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTileHistoryData,_public:_void___cdecl_FNavRegenTimeSliceManager::LogTileStatistics(TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_>_const_&)const_::_18_::<lambda_1>_>
          param_4)

{
  FTileHistoryData *pFVar1;
  FTileHistoryData *pFVar2;
  code *pcVar3;
  long64 lVar4;
  long64 lVar5;
  long64 lVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  FTileHistoryData *pFVar20;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar15 = iVar14 * 2 + 1;
  iVar18 = iVar15;
  iVar19 = iVar14;
  do {
    while (param_2 <= iVar15) {
LAB_146d6c90b:
      if (iVar19 == 0) {
        iVar15 = param_2 + -1;
        lVar17 = (longlong)iVar15;
        if (0 < iVar15) {
          pFVar20 = param_1 + lVar17;
          do {
            iVar18 = pFVar20->TileY;
            fVar7 = pFVar20->TileRegenTime;
            fVar8 = pFVar20->TileWaitTime;
            iVar14 = param_1->TileX;
            iVar19 = param_1->TileY;
            fVar11 = param_1->TileRegenTime;
            fVar12 = param_1->TileWaitTime;
            lVar4 = param_1->StartRegenFrame;
            lVar5 = param_1->EndRegenFrame;
            param_1->TileX = pFVar20->TileX;
            param_1->TileY = iVar18;
            param_1->TileRegenTime = fVar7;
            param_1->TileWaitTime = fVar8;
            lVar6 = pFVar20->EndRegenFrame;
            param_1->StartRegenFrame = pFVar20->StartRegenFrame;
            param_1->EndRegenFrame = lVar6;
            pFVar20->TileX = iVar14;
            pFVar20->TileY = iVar19;
            pFVar20->TileRegenTime = fVar11;
            pFVar20->TileWaitTime = fVar12;
            pFVar20->StartRegenFrame = lVar4;
            pFVar20->EndRegenFrame = lVar5;
            iVar18 = 0;
            if (1 < iVar15) {
              do {
                iVar19 = iVar18 * 2;
                iVar14 = iVar19 + 1;
                if (iVar19 + 2 < iVar15) {
                  if (param_1[(longlong)iVar19 + 2].TileRegenTime <= param_1[iVar14].TileRegenTime
                      && param_1[iVar14].TileRegenTime !=
                         param_1[(longlong)iVar19 + 2].TileRegenTime) {
                    iVar14 = iVar19;
                  }
                  iVar14 = iVar14 + 1;
                }
                if (param_1[iVar14].TileRegenTime < param_1[iVar18].TileRegenTime ||
                    param_1[iVar14].TileRegenTime == param_1[iVar18].TileRegenTime) break;
                pFVar1 = param_1 + iVar18;
                iVar16 = pFVar1->TileX;
                iVar9 = pFVar1->TileY;
                fVar11 = pFVar1->TileRegenTime;
                fVar12 = pFVar1->TileWaitTime;
                lVar4 = param_1[iVar18].StartRegenFrame;
                lVar5 = (&param_1[iVar18].StartRegenFrame)[1];
                pFVar1 = param_1 + iVar14;
                iVar19 = pFVar1->TileY;
                fVar7 = pFVar1->TileRegenTime;
                fVar8 = pFVar1->TileWaitTime;
                pFVar2 = param_1 + iVar18;
                pFVar2->TileX = pFVar1->TileX;
                pFVar2->TileY = iVar19;
                pFVar2->TileRegenTime = fVar7;
                pFVar2->TileWaitTime = fVar8;
                lVar6 = (&param_1[iVar14].StartRegenFrame)[1];
                param_1[iVar18].StartRegenFrame = param_1[iVar14].StartRegenFrame;
                (&param_1[iVar18].StartRegenFrame)[1] = lVar6;
                pFVar1 = param_1 + iVar14;
                pFVar1->TileX = iVar16;
                pFVar1->TileY = iVar9;
                pFVar1->TileRegenTime = fVar11;
                pFVar1->TileWaitTime = fVar12;
                param_1[iVar14].StartRegenFrame = lVar4;
                (&param_1[iVar14].StartRegenFrame)[1] = lVar5;
                iVar18 = iVar14;
              } while (iVar14 * 2 + 1 < iVar15);
            }
            iVar15 = iVar15 + -1;
            lVar17 = lVar17 + -1;
            pFVar20 = pFVar20 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar14 = iVar19 + -1;
      iVar15 = iVar18 + -2;
      iVar18 = iVar15;
      iVar19 = iVar14;
    }
    iVar15 = iVar14 * 2;
    iVar16 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      if (param_1[(longlong)iVar15 + 2].TileRegenTime <= param_1[iVar16].TileRegenTime &&
          param_1[iVar16].TileRegenTime != param_1[(longlong)iVar15 + 2].TileRegenTime) {
        iVar16 = iVar15;
      }
      iVar16 = iVar16 + 1;
    }
    if (param_1[iVar16].TileRegenTime < param_1[iVar14].TileRegenTime ||
        param_1[iVar16].TileRegenTime == param_1[iVar14].TileRegenTime) goto LAB_146d6c90b;
    pFVar20 = param_1 + iVar14;
    iVar9 = pFVar20->TileX;
    iVar10 = pFVar20->TileY;
    fVar11 = pFVar20->TileRegenTime;
    fVar12 = pFVar20->TileWaitTime;
    lVar4 = param_1[iVar14].StartRegenFrame;
    lVar5 = (&param_1[iVar14].StartRegenFrame)[1];
    pFVar20 = param_1 + iVar16;
    iVar15 = pFVar20->TileY;
    fVar7 = pFVar20->TileRegenTime;
    fVar8 = pFVar20->TileWaitTime;
    pFVar1 = param_1 + iVar14;
    pFVar1->TileX = pFVar20->TileX;
    pFVar1->TileY = iVar15;
    pFVar1->TileRegenTime = fVar7;
    pFVar1->TileWaitTime = fVar8;
    lVar6 = (&param_1[iVar16].StartRegenFrame)[1];
    param_1[iVar14].StartRegenFrame = param_1[iVar16].StartRegenFrame;
    (&param_1[iVar14].StartRegenFrame)[1] = lVar6;
    iVar15 = iVar16 * 2 + 1;
    pFVar20 = param_1 + iVar16;
    pFVar20->TileX = iVar9;
    pFVar20->TileY = iVar10;
    pFVar20->TileRegenTime = fVar11;
    pFVar20->TileWaitTime = fVar12;
    param_1[iVar16].StartRegenFrame = lVar4;
    (&param_1[iVar16].StartRegenFrame)[1] = lVar5;
    iVar14 = iVar16;
  } while( true );
}

// HeapSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,`FNavRegenTimeSliceManager::LogTileStatistics'::__l18::<lambda_2>_>_> @ 146d6ca20

void __cdecl
AlgoImpl::
HeapSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,_FNavRegenTimeSliceManager::LogTileStatistics_::__l18::<lambda_2>_>_>
          (FTileHistoryData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTileHistoryData,_public:_void___cdecl_FNavRegenTimeSliceManager::LogTileStatistics(TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_>_const_&)const_::_18_::<lambda_2>_>
          param_4)

{
  FTileHistoryData *pFVar1;
  FTileHistoryData *pFVar2;
  code *pcVar3;
  long64 lVar4;
  long64 lVar5;
  long64 lVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  FTileHistoryData *pFVar20;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar15 = iVar14 * 2 + 1;
  iVar18 = iVar15;
  iVar19 = iVar14;
  do {
    while (param_2 <= iVar15) {
LAB_146d6cb2b:
      if (iVar19 == 0) {
        iVar15 = param_2 + -1;
        lVar17 = (longlong)iVar15;
        if (0 < iVar15) {
          pFVar20 = param_1 + lVar17;
          do {
            iVar18 = pFVar20->TileY;
            fVar7 = pFVar20->TileRegenTime;
            fVar8 = pFVar20->TileWaitTime;
            iVar14 = param_1->TileX;
            iVar19 = param_1->TileY;
            fVar11 = param_1->TileRegenTime;
            fVar12 = param_1->TileWaitTime;
            lVar4 = param_1->StartRegenFrame;
            lVar5 = param_1->EndRegenFrame;
            param_1->TileX = pFVar20->TileX;
            param_1->TileY = iVar18;
            param_1->TileRegenTime = fVar7;
            param_1->TileWaitTime = fVar8;
            lVar6 = pFVar20->EndRegenFrame;
            param_1->StartRegenFrame = pFVar20->StartRegenFrame;
            param_1->EndRegenFrame = lVar6;
            pFVar20->TileX = iVar14;
            pFVar20->TileY = iVar19;
            pFVar20->TileRegenTime = fVar11;
            pFVar20->TileWaitTime = fVar12;
            pFVar20->StartRegenFrame = lVar4;
            pFVar20->EndRegenFrame = lVar5;
            iVar18 = 0;
            if (1 < iVar15) {
              do {
                iVar19 = iVar18 * 2;
                iVar14 = iVar19 + 1;
                if (iVar19 + 2 < iVar15) {
                  if (param_1[(longlong)iVar19 + 2].TileWaitTime <= param_1[iVar14].TileWaitTime &&
                      param_1[iVar14].TileWaitTime != param_1[(longlong)iVar19 + 2].TileWaitTime) {
                    iVar14 = iVar19;
                  }
                  iVar14 = iVar14 + 1;
                }
                if (param_1[iVar14].TileWaitTime < param_1[iVar18].TileWaitTime ||
                    param_1[iVar14].TileWaitTime == param_1[iVar18].TileWaitTime) break;
                pFVar1 = param_1 + iVar18;
                iVar16 = pFVar1->TileX;
                iVar9 = pFVar1->TileY;
                fVar11 = pFVar1->TileRegenTime;
                fVar12 = pFVar1->TileWaitTime;
                lVar4 = param_1[iVar18].StartRegenFrame;
                lVar5 = (&param_1[iVar18].StartRegenFrame)[1];
                pFVar1 = param_1 + iVar14;
                iVar19 = pFVar1->TileY;
                fVar7 = pFVar1->TileRegenTime;
                fVar8 = pFVar1->TileWaitTime;
                pFVar2 = param_1 + iVar18;
                pFVar2->TileX = pFVar1->TileX;
                pFVar2->TileY = iVar19;
                pFVar2->TileRegenTime = fVar7;
                pFVar2->TileWaitTime = fVar8;
                lVar6 = (&param_1[iVar14].StartRegenFrame)[1];
                param_1[iVar18].StartRegenFrame = param_1[iVar14].StartRegenFrame;
                (&param_1[iVar18].StartRegenFrame)[1] = lVar6;
                pFVar1 = param_1 + iVar14;
                pFVar1->TileX = iVar16;
                pFVar1->TileY = iVar9;
                pFVar1->TileRegenTime = fVar11;
                pFVar1->TileWaitTime = fVar12;
                param_1[iVar14].StartRegenFrame = lVar4;
                (&param_1[iVar14].StartRegenFrame)[1] = lVar5;
                iVar18 = iVar14;
              } while (iVar14 * 2 + 1 < iVar15);
            }
            iVar15 = iVar15 + -1;
            lVar17 = lVar17 + -1;
            pFVar20 = pFVar20 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar14 = iVar19 + -1;
      iVar15 = iVar18 + -2;
      iVar18 = iVar15;
      iVar19 = iVar14;
    }
    iVar15 = iVar14 * 2;
    iVar16 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      if (param_1[(longlong)iVar15 + 2].TileWaitTime <= param_1[iVar16].TileWaitTime &&
          param_1[iVar16].TileWaitTime != param_1[(longlong)iVar15 + 2].TileWaitTime) {
        iVar16 = iVar15;
      }
      iVar16 = iVar16 + 1;
    }
    if (param_1[iVar16].TileWaitTime < param_1[iVar14].TileWaitTime ||
        param_1[iVar16].TileWaitTime == param_1[iVar14].TileWaitTime) goto LAB_146d6cb2b;
    pFVar20 = param_1 + iVar14;
    iVar9 = pFVar20->TileX;
    iVar10 = pFVar20->TileY;
    fVar11 = pFVar20->TileRegenTime;
    fVar12 = pFVar20->TileWaitTime;
    lVar4 = param_1[iVar14].StartRegenFrame;
    lVar5 = (&param_1[iVar14].StartRegenFrame)[1];
    pFVar20 = param_1 + iVar16;
    iVar15 = pFVar20->TileY;
    fVar7 = pFVar20->TileRegenTime;
    fVar8 = pFVar20->TileWaitTime;
    pFVar1 = param_1 + iVar14;
    pFVar1->TileX = pFVar20->TileX;
    pFVar1->TileY = iVar15;
    pFVar1->TileRegenTime = fVar7;
    pFVar1->TileWaitTime = fVar8;
    lVar6 = (&param_1[iVar16].StartRegenFrame)[1];
    param_1[iVar14].StartRegenFrame = param_1[iVar16].StartRegenFrame;
    (&param_1[iVar14].StartRegenFrame)[1] = lVar6;
    iVar15 = iVar16 * 2 + 1;
    pFVar20 = param_1 + iVar16;
    pFVar20->TileX = iVar9;
    pFVar20->TileY = iVar10;
    pFVar20->TileRegenTime = fVar11;
    pFVar20->TileWaitTime = fVar12;
    param_1[iVar16].StartRegenFrame = lVar4;
    (&param_1[iVar16].StartRegenFrame)[1] = lVar5;
    iVar14 = iVar16;
  } while( true );
}

// InternalConstructor<AAbstractNavData> @ 146d6cc40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<AAbstractNavData>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  ANavigationData *this;
  FNavigationQueryFilter *pFVar2;
  code *pcVar3;
  bool bVar4;
  TRawPtrProxy<FAbstractQueryFilter> local_res8 [4];
  
  this = (ANavigationData *)param_1->Obj;
  if (this != (ANavigationData *)0x0) {
    ANavigationData::ANavigationData(this,param_1);
    this->bCanBeMainNavData = 0;
    this->bCanSpawnOnRebuild = 0;
    this->_padding_ = (longlong)&AAbstractNavData::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AAbstractNavData::_vftable__for__INavigationDataInterface__;
    if ((this->_padding_ & 0x10) == 0) {
      this->FindPathImplementation = AAbstractNavData::FindPathAbstract;
      this->FindHierarchicalPathImplementation = AAbstractNavData::FindPathAbstract;
      this->TestPathImplementation = AAbstractNavData::TestPathAbstract;
      this->TestHierarchicalPathImplementation = AAbstractNavData::TestPathAbstract;
      this->RaycastImplementationWithAdditionalResults = AAbstractNavData::RaycastAbstract;
      if ((this->DefaultQueryFilter).Object == (FNavigationQueryFilter *)0x0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->DefaultQueryFilter).Object;
      local_res8[0].Object = operator_new(8);
      if (local_res8[0].Object != (FAbstractQueryFilter *)0x0) {
        *local_res8[0].Object = (FAbstractQueryFilter)&___7FAbstractQueryFilter__6B_;
      }
      TSharedPtr<INavigationQueryFilterInterface,1>::operator=<FAbstractQueryFilter>
                (&pFVar2->QueryFilterImpl,local_res8);
    }
  }
  return;
}

// InternalConstructor<ANavigationData> @ 146d6cd30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<ANavigationData>(FObjectInitializer *param_1)

{
  if ((ANavigationData *)param_1->Obj != (ANavigationData *)0x0) {
    ANavigationData::ANavigationData((ANavigationData *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ANavigationGraph> @ 146d6cd50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<ANavigationGraph>(FObjectInitializer *param_1)

{
  ANavigationData *this;
  code *pcVar1;
  bool bVar2;
  FNavGraphGenerator *pFVar3;
  TRawPtrProxy<FNavGraphGenerator> local_res8;
  
  this = (ANavigationData *)param_1->Obj;
  if (this != (ANavigationData *)0x0) {
    ANavigationData::ANavigationData(this,param_1);
    this->_padding_ = (longlong)&ANavigationGraph::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ANavigationGraph::_vftable__for__INavigationDataInterface__;
    if ((this->_padding_ & 0x10) == 0) {
      pFVar3 = operator_new(0x50);
      if (pFVar3 != (FNavGraphGenerator *)0x0) {
        pFVar3->_padding_ = (longlong)&___7FNavGraphGenerator__6B_;
        pFVar3->_padding_ = 0;
        pFVar3->_padding_ = 0;
        (pFVar3->InclusionVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar3->InclusionVolumes).ArrayNum = 0;
        (pFVar3->InclusionVolumes).ArrayMax = 0;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar3->GraphChangingLock,4000);
        if ((((pFVar3->_padding_ != 0) && (pFVar3->_padding_ != 0)) &&
            (0 < *(int *)(pFVar3->_padding_ + 8))) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_res8.Object = pFVar3;
      TSharedPtr<FNavDataGenerator,1>::operator=<FNavGraphGenerator>
                (&this->NavDataGenerator,&local_res8);
    }
  }
  return;
}

// InternalConstructor<ANavigationGraphNode> @ 146d6ce40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ANavigationGraphNode>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANavigationGraphNode__6B_;
  }
  return;
}

// InternalConstructor<UBaseGeneratedNavLinksProxy> @ 146d6ce70

void __cdecl InternalConstructor<UBaseGeneratedNavLinksProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UBaseGeneratedNavLinksProxy::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UBaseGeneratedNavLinksProxy::_vftable__for__INavLinkCustomInterface__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UCrowdManagerBase> @ 146d6cec0

void __cdecl InternalConstructor<UCrowdManagerBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCrowdManagerBase__6B_;
  }
  return;
}

// InternalConstructor<UNavArea> @ 146d6cef0

void __cdecl InternalConstructor<UNavArea>(FObjectInitializer *param_1)

{
  UNavAreaBase *this;
  
  this = (UNavAreaBase *)param_1->Obj;
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this[1]._padding_ = 0x3f800000;
    *(FColor_u_0 *)&this[1]._padding_ = (FColor_u_0_s_0)FColor::Magenta.field0_0x0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UNavAreaMeta> @ 146d6cf50

void __cdecl InternalConstructor<UNavAreaMeta>(FObjectInitializer *param_1)

{
  UNavAreaBase *this;
  FColor FVar1;
  
  this = (UNavAreaBase *)param_1->Obj;
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this[1]._padding_ = 0x3f800000;
    FVar1 = FColor::Magenta;
    this->bIsMetaArea = '\x01';
    *(FColor_u_0 *)&this[1]._padding_ = (FColor_u_0_s_0)FVar1.field0_0x0;
    this->_padding_ = (longlong)&___7UNavAreaMeta__6B_;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UNavAreaMeta_SwitchByAgent> @ 146d6cfc0

void __cdecl InternalConstructor<UNavAreaMeta_SwitchByAgent>(FObjectInitializer *param_1)

{
  if ((UNavAreaMeta_SwitchByAgent *)param_1->Obj != (UNavAreaMeta_SwitchByAgent *)0x0) {
    UNavAreaMeta_SwitchByAgent::UNavAreaMeta_SwitchByAgent
              ((UNavAreaMeta_SwitchByAgent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNavArea_Default> @ 146d6cfe0

void __cdecl InternalConstructor<UNavArea_Default>(FObjectInitializer *param_1)

{
  UNavAreaBase *this;
  
  this = (UNavAreaBase *)param_1->Obj;
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this[1]._padding_ = 0x3f800000;
    *(FColor_u_0 *)&this[1]._padding_ = (FColor_u_0_s_0)FColor::Magenta.field0_0x0;
    this->_padding_ = (longlong)&___7UNavArea_Default__6B_;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UNavArea_LowHeight> @ 146d6d050

void __cdecl InternalConstructor<UNavArea_LowHeight>(FObjectInitializer *param_1)

{
  UNavAreaBase *this;
  
  this = (UNavAreaBase *)param_1->Obj;
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this->_padding_ = (longlong)&___7UNavArea_LowHeight__6B_;
    *(undefined4 *)&this[1]._padding_ = 0xff000080;
    this[1]._padding_ = 0x7f7fc99e;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UNavArea_Null> @ 146d6d0c0

void __cdecl InternalConstructor<UNavArea_Null>(FObjectInitializer *param_1)

{
  UNavAreaBase *this;
  
  this = (UNavAreaBase *)param_1->Obj;
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this[1]._padding_ = 0x3f800000;
    *(FColor_u_0 *)&this[1]._padding_ = (FColor_u_0_s_0)FColor::Magenta.field0_0x0;
    this->_padding_ = (longlong)&___7UNavArea_Null__6B_;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)&this[1]._padding_ = 0x7f7fffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UNavArea_Obstacle> @ 146d6d130

void __cdecl InternalConstructor<UNavArea_Obstacle>(FObjectInitializer *param_1)

{
  UNavAreaBase *this;
  
  this = (UNavAreaBase *)param_1->Obj;
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this->_padding_ = (longlong)&___7UNavArea_Obstacle__6B_;
    *(undefined4 *)&this[1]._padding_ = 0xff7f3300;
    this[1]._padding_ = 0x49742400;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UNavCollision> @ 146d6d1a0

void __cdecl InternalConstructor<UNavCollision>(FObjectInitializer *param_1)

{
  UNavCollisionBase *this;
  
  this = (UNavCollisionBase *)param_1->Obj;
  if (this != (UNavCollisionBase *)0x0) {
    UNavCollisionBase::UNavCollisionBase(this,param_1);
    this->bHasConvexGeometry = 0;
    this->_padding_ = (longlong)&___7UNavCollision__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].TriMeshCollision.IndexBuffer = 0;
    *(undefined8 *)&this[1].TriMeshCollision.IndexBuffer.field_0x8 = 0;
    *(undefined8 *)&this[1].TriMeshCollision.IndexBuffer.field_0x10 = 0;
    *(undefined8 *)&this[1].ConvexCollision.VertexBuffer = 0;
    *(undefined8 *)&this[1].ConvexCollision.VertexBuffer.field_0x8 = 0;
    *(undefined8 *)&this[1].ConvexCollision.VertexBuffer.field_0x10 = 0;
    *(undefined8 *)&this[1].ConvexCollision.IndexBuffer.field_0x4 = 0;
    *(undefined8 *)&this[1].ConvexCollision.IndexBuffer.field_0xc = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(uint *)&this[1].ConvexCollision.IndexBuffer =
         *(uint *)&this[1].ConvexCollision.IndexBuffer & 0xfffffffb | 3;
  }
  return;
}

// InternalConstructor<UNavLinkCustomInterface> @ 146d6d250

void __cdecl InternalConstructor<UNavLinkCustomInterface>(FObjectInitializer *param_1)

{
  if ((UNavLinkCustomInterface *)param_1->Obj != (UNavLinkCustomInterface *)0x0) {
    UNavLinkCustomInterface::UNavLinkCustomInterface
              ((UNavLinkCustomInterface *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNavLinkHostInterface> @ 146d6d270

void __cdecl InternalConstructor<UNavLinkHostInterface>(FObjectInitializer *param_1)

{
  if ((UNavLinkHostInterface *)param_1->Obj != (UNavLinkHostInterface *)0x0) {
    UNavLinkHostInterface::UNavLinkHostInterface((UNavLinkHostInterface *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNavLinkTrivial> @ 146d6d290

void __cdecl InternalConstructor<UNavLinkTrivial>(FObjectInitializer *param_1)

{
  if ((UNavLinkTrivial *)param_1->Obj != (UNavLinkTrivial *)0x0) {
    UNavLinkTrivial::UNavLinkTrivial((UNavLinkTrivial *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNavNodeInterface> @ 146d6d2b0

void __cdecl InternalConstructor<UNavNodeInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNavNodeInterface__6B_;
  }
  return;
}

// InternalConstructor<UNavigationGraphNodeComponent> @ 146d6d2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UNavigationGraphNodeComponent>(FObjectInitializer *param_1)

{
  int *piVar1;
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UNavigationGraphNodeComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNavigationGraphNodeComponent::_vftable__for__IInterface_AssetUserData__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UNavigationGraphNodeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    piVar1 = (int *)((longlong)&this[1]._padding_ + 4);
    *(undefined4 *)&this[1]._padding_ = 0;
    *piVar1 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,4,(ForAnyElementType *)&this[1]._padding_,0,piVar1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNavigationInvokerComponent> @ 146d6d380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UNavigationInvokerComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x453b8000;
    this->_padding_ = (longlong)&UNavigationInvokerComponent::_vftable__for__UObject__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x459c4000;
    this->_padding_ =
         (longlong)&UNavigationInvokerComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNavigationInvokerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this[1]._padding_,0x7fffffff);
    this->bAutoActivate = '\x01';
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 0x80000000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 3;
  }
  return;
}

// InternalConstructor<UNavigationObjectRepository> @ 146d6d410

void __cdecl InternalConstructor<UNavigationObjectRepository>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UNavigationObjectRepository__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    *(undefined8 *)&this[3].field_0x30 = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4].field_0x30 = 0;
    *(undefined4 *)&this[4].field_0x34 = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5].field_0x30 = 0;
  }
  return;
}

// InternalConstructor<UNavigationPath> @ 146d6d510

void __cdecl InternalConstructor<UNavigationPath>(FObjectInitializer *param_1)

{
  if ((UNavigationPath *)param_1->Obj != (UNavigationPath *)0x0) {
    UNavigationPath::UNavigationPath((UNavigationPath *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNavigationPathGenerator> @ 146d6d530

void __cdecl InternalConstructor<UNavigationPathGenerator>(FObjectInitializer *param_1)

{
  if ((UNavigationPathGenerator *)param_1->Obj != (UNavigationPathGenerator *)0x0) {
    UNavigationPathGenerator::UNavigationPathGenerator
              ((UNavigationPathGenerator *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNavigationQueryFilter> @ 146d6d550

void __cdecl InternalConstructor<UNavigationQueryFilter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(uint *)&this[1].field_0x18 = *(uint *)&this[1].field_0x18 & 0xfffffffc;
    *(undefined ***)this = &___7UNavigationQueryFilter__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined2 *)&this[1].field_0x10 = 0xffff;
    *(undefined2 *)&this[1].field_0x14 = 0;
  }
  return;
}

// InternalConstructor<UNavigationSystemModuleConfig> @ 146d6d5a0

void __cdecl InternalConstructor<UNavigationSystemModuleConfig>(FObjectInitializer *param_1)

{
  UNavigationSystemConfig *this;
  
  this = (UNavigationSystemConfig *)param_1->Obj;
  if (this != (UNavigationSystemConfig *)0x0) {
    UNavigationSystemConfig::UNavigationSystemConfig(this,param_1);
    this->_padding_ = (longlong)&___7UNavigationSystemModuleConfig__6B_;
  }
  return;
}

// InternalConstructor<UNavigationSystemV1> @ 146d6d5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UNavigationSystemV1>(FObjectInitializer *param_1)

{
  if ((UNavigationSystemV1 *)param_1->Obj != (UNavigationSystemV1 *)0x0) {
    UNavigationSystemV1::UNavigationSystemV1((UNavigationSystemV1 *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<URecastFilter_UseDefaultArea> @ 146d6d5f0

void __cdecl InternalConstructor<URecastFilter_UseDefaultArea>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)&this[1].field_0x10 = 0xffff;
    *(uint *)&this[1].field_0x18 = *(uint *)&this[1].field_0x18 & 0xfffffffc;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined2 *)&this[1].field_0x14 = 0;
    *(undefined ***)this = &___7URecastFilter_UseDefaultArea__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<AAbstractNavData> @ 146d6d640

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

UObject * __cdecl InternalVTableHelperCtorCaller<AAbstractNavData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ANavigationData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AAbstractNavData::GetPrivateStaticClass();
  this = (ANavigationData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ANavigationData *)0x0) {
    ANavigationData::ANavigationData(this,param_1);
    this->_padding_ = (longlong)&AAbstractNavData::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AAbstractNavData::_vftable__for__INavigationDataInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANavigationData> @ 146d6d700

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANavigationData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ANavigationData *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANavigationData::GetPrivateStaticClass();
  pAVar3 = (ANavigationData *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (ANavigationData *)0x0) {
    pAVar3 = ANavigationData::ANavigationData(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANavigationGraph> @ 146d6d7a0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANavigationGraph>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ANavigationData *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANavigationGraph::GetPrivateStaticClass();
  this = (ANavigationData *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ANavigationData *)0x0) {
    ANavigationData::ANavigationData(this,param_1);
    this->_padding_ = (longlong)&ANavigationGraph::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ANavigationGraph::_vftable__for__INavigationDataInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ANavigationGraphNode> @ 146d6d860

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANavigationGraphNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANavigationGraphNode::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANavigationGraphNode__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBaseGeneratedNavLinksProxy> @ 146d6d910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBaseGeneratedNavLinksProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBaseGeneratedNavLinksProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UBaseGeneratedNavLinksProxy::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UBaseGeneratedNavLinksProxy::_vftable__for__INavLinkCustomInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCrowdManagerBase> @ 146d6d9d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCrowdManagerBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCrowdManagerBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCrowdManagerBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavArea> @ 146d6da80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavArea>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavAreaBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavArea::GetPrivateStaticClass();
  this = (UNavAreaBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavAreaMeta> @ 146d6db40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavAreaMeta>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavAreaBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavAreaMeta::GetPrivateStaticClass();
  this = (UNavAreaBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this->_padding_ = (longlong)&___7UNavAreaMeta__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavAreaMeta_SwitchByAgent> @ 146d6dc10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavAreaMeta_SwitchByAgent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavAreaBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavAreaMeta_SwitchByAgent::GetPrivateStaticClass();
  this = (UNavAreaBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this->_padding_ = (longlong)&___7UNavAreaMeta_SwitchByAgent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavArea_Default> @ 146d6dd40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavArea_Default>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavAreaBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavArea_Default::GetPrivateStaticClass();
  this = (UNavAreaBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this->_padding_ = (longlong)&___7UNavArea_Default__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavArea_LowHeight> @ 146d6de10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavArea_LowHeight>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavAreaBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavArea_LowHeight::GetPrivateStaticClass();
  this = (UNavAreaBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this->_padding_ = (longlong)&___7UNavArea_LowHeight__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavArea_Null> @ 146d6dee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavArea_Null>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavAreaBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavArea_Null::GetPrivateStaticClass();
  this = (UNavAreaBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this->_padding_ = (longlong)&___7UNavArea_Null__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavArea_Obstacle> @ 146d6dfb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavArea_Obstacle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavAreaBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavArea_Obstacle::GetPrivateStaticClass();
  this = (UNavAreaBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavAreaBase *)0x0) {
    UNavAreaBase::UNavAreaBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavArea__6B_;
    FNavAgentSelector::FNavAgentSelector
              ((FNavAgentSelector *)((longlong)&this[1]._padding_ + 4),0x7fffffff);
    this->_padding_ = (longlong)&___7UNavArea_Obstacle__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavCollision> @ 146d6e080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavCollision>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavCollisionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavCollision::GetPrivateStaticClass();
  this = (UNavCollisionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavCollisionBase *)0x0) {
    UNavCollisionBase::UNavCollisionBase(this,param_1);
    this->_padding_ = (longlong)&___7UNavCollision__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].TriMeshCollision.IndexBuffer = 0;
    *(undefined8 *)&this[1].TriMeshCollision.IndexBuffer.field_0x8 = 0;
    *(undefined8 *)&this[1].TriMeshCollision.IndexBuffer.field_0x10 = 0;
    *(undefined8 *)&this[1].ConvexCollision.VertexBuffer = 0;
    *(undefined8 *)&this[1].ConvexCollision.VertexBuffer.field_0x8 = 0;
    *(undefined8 *)&this[1].ConvexCollision.VertexBuffer.field_0x10 = 0;
    *(undefined8 *)&this[1].ConvexCollision.IndexBuffer.field_0x4 = 0;
    *(undefined8 *)&this[1].ConvexCollision.IndexBuffer.field_0xc = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavLinkCustomInterface> @ 146d6e190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavLinkCustomInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavLinkCustomInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavLinkCustomInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavLinkHostInterface> @ 146d6e240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavLinkHostInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavLinkHostInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavLinkHostInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavLinkTrivial> @ 146d6e2f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavLinkTrivial>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavLinkDefinition *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavLinkTrivial::GetPrivateStaticClass();
  this = (UNavLinkDefinition *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavLinkDefinition *)0x0) {
    UNavLinkDefinition::UNavLinkDefinition(this,param_1);
    this->_padding_ = (longlong)&___7UNavLinkTrivial__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavNodeInterface> @ 146d6e3a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavNodeInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavNodeInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavNodeInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationGraphNodeComponent> @ 146d6e450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNavigationGraphNodeComponent>(FVTableHelper *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  USceneComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNavigationGraphNodeComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    piVar1 = (int *)((longlong)&this[1]._padding_ + 4);
    this->_padding_ = (longlong)&UNavigationGraphNodeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UNavigationGraphNodeComponent::_vftable__for__IInterface_AssetUserData__;
    *piVar1 = 0;
    this->_padding_ =
         (longlong)&UNavigationGraphNodeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,4,(ForAnyElementType *)&this[1]._padding_,0,piVar1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationInvokerComponent> @ 146d6e560

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

UObject * __cdecl
InternalVTableHelperCtorCaller<UNavigationInvokerComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationInvokerComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UNavigationInvokerComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UNavigationInvokerComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UNavigationInvokerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&this[1]._padding_,0x7fffffff);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationObjectRepository> @ 146d6e640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNavigationObjectRepository>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationObjectRepository::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UNavigationObjectRepository__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x30 = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    *(undefined8 *)&this[3].field_0x30 = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4].field_0x30 = 0;
    *(undefined4 *)&this[4].field_0x34 = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5].field_0x30 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationPath> @ 146d6e7c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavigationPath>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationPath::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 2) = 0;
    *(undefined ***)pUVar1 = &___7UNavigationPath__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationPathGenerator> @ 146d6e8b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavigationPathGenerator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationPathGenerator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavigationPathGenerator__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationQueryFilter> @ 146d6e960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavigationQueryFilter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationQueryFilter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNavigationQueryFilter__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined2 *)&pUVar1[1].field_0x10 = 0;
    *(undefined2 *)&pUVar1[1].field_0x14 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationSystemModuleConfig> @ 146d6ea20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNavigationSystemModuleConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavigationSystemConfig *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationSystemModuleConfig::GetPrivateStaticClass();
  this = (UNavigationSystemConfig *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNavigationSystemConfig *)0x0) {
    UNavigationSystemConfig::UNavigationSystemConfig(this,param_1);
    this->_padding_ = (longlong)&___7UNavigationSystemModuleConfig__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationSystemV1> @ 146d6ead0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UNavigationSystemV1>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNavigationSystemV1 *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationSystemV1::GetPrivateStaticClass();
  pUVar3 = (UNavigationSystemV1 *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNavigationSystemV1 *)0x0) {
    pUVar3 = UNavigationSystemV1::UNavigationSystemV1(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URecastFilter_UseDefaultArea> @ 146d6eb70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URecastFilter_UseDefaultArea>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URecastFilter_UseDefaultArea::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7URecastFilter_UseDefaultArea__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined2 *)&pUVar1[1].field_0x10 = 0;
    *(undefined2 *)&pUVar1[1].field_0x14 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,`FNavRegenTimeSliceManager::LogTileStatistics'::__l18::<lambda_1>_>_> @ 146d6ec30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,_FNavRegenTimeSliceManager::LogTileStatistics_::__l18::<lambda_1>_>_>
          (FTileHistoryData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTileHistoryData,_public:_void___cdecl_FNavRegenTimeSliceManager::LogTileStatistics(TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_>_const_&)const_::_18_::<lambda_1>_>
          param_4)

{
  FTileHistoryData *pFVar1;
  long64 lVar2;
  long64 lVar3;
  long64 lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  FTileHistoryData *pFVar15;
  FTileHistoryData *pFVar16;
  FTileHistoryData *pFVar17;
  FTileHistoryData **ppFVar18;
  FTileHistoryData *pFVar19;
  FTileHistoryData *pFVar20;
  FTileHistoryData *pFVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  FTileHistoryData *local_338;
  FTileHistoryData *local_328;
  FTileHistoryData *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar22;
    memset(local_310,0,0x2e8);
    ppFVar18 = &local_328;
    do {
      pFVar20 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      iVar14 = (int)((longlong)pFVar20 - (longlong)pFVar17 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar21 = pFVar17;
      if ((int)local_338 != 0) {
LAB_146d6ece0:
        if (8 < iVar14) {
          iVar9 = pFVar21->TileY;
          fVar22 = pFVar21->TileRegenTime;
          fVar10 = pFVar21->TileWaitTime;
          pFVar15 = pFVar20 + 1;
          pFVar17 = pFVar21 + iVar14 / 2;
          iVar14 = pFVar17->TileX;
          iVar11 = pFVar17->TileY;
          fVar12 = pFVar17->TileRegenTime;
          fVar13 = pFVar17->TileWaitTime;
          lVar2 = pFVar17->StartRegenFrame;
          lVar3 = pFVar17->EndRegenFrame;
          pFVar17->TileX = pFVar21->TileX;
          pFVar17->TileY = iVar9;
          pFVar17->TileRegenTime = fVar22;
          pFVar17->TileWaitTime = fVar10;
          lVar4 = pFVar21->EndRegenFrame;
          pFVar17->StartRegenFrame = pFVar21->StartRegenFrame;
          pFVar17->EndRegenFrame = lVar4;
          pFVar21->TileX = iVar14;
          pFVar21->TileY = iVar11;
          pFVar21->TileRegenTime = fVar12;
          pFVar21->TileWaitTime = fVar13;
          pFVar21->StartRegenFrame = lVar2;
          pFVar21->EndRegenFrame = lVar3;
          pFVar17 = pFVar21;
LAB_146d6ed20:
          pFVar16 = pFVar17;
          pFVar17 = pFVar16 + 1;
          if (pFVar17 <= pFVar20) goto code_r0x000146d6ed29;
          goto LAB_146d6ed35;
        }
        if (pFVar21 < pFVar20) {
          pFVar1 = pFVar21 + 1;
          do {
            pFVar17 = pFVar21;
            if (pFVar1 <= pFVar20) {
              pFVar15 = pFVar1;
              if (0x7f < ((longlong)pFVar20 + (0x20 - (longlong)pFVar1) & 0xffffffffffffffe0U)) {
                do {
                  if (pFVar17->TileRegenTime < pFVar15->TileRegenTime) {
                    pFVar17 = pFVar15;
                  }
                  if (pFVar17->TileRegenTime <= pFVar15[1].TileRegenTime &&
                      pFVar15[1].TileRegenTime != pFVar17->TileRegenTime) {
                    pFVar17 = pFVar15 + 1;
                  }
                  if (pFVar17->TileRegenTime <= pFVar15[2].TileRegenTime &&
                      pFVar15[2].TileRegenTime != pFVar17->TileRegenTime) {
                    pFVar17 = pFVar15 + 2;
                  }
                  if (pFVar17->TileRegenTime <= pFVar15[3].TileRegenTime &&
                      pFVar15[3].TileRegenTime != pFVar17->TileRegenTime) {
                    pFVar17 = pFVar15 + 3;
                  }
                  pFVar15 = pFVar15 + 4;
                } while (pFVar15 <= pFVar20 + -3);
              }
              for (; pFVar15 <= pFVar20; pFVar15 = pFVar15 + 1) {
                if (pFVar17->TileRegenTime < pFVar15->TileRegenTime) {
                  pFVar17 = pFVar15;
                }
              }
            }
            iVar9 = pFVar17->TileX;
            iVar11 = pFVar17->TileY;
            fVar12 = pFVar17->TileRegenTime;
            fVar13 = pFVar17->TileWaitTime;
            pFVar15 = pFVar20 + -1;
            lVar2 = pFVar17->StartRegenFrame;
            lVar3 = pFVar17->EndRegenFrame;
            iVar14 = pFVar20->TileY;
            fVar22 = pFVar20->TileRegenTime;
            fVar10 = pFVar20->TileWaitTime;
            pFVar17->TileX = pFVar20->TileX;
            pFVar17->TileY = iVar14;
            pFVar17->TileRegenTime = fVar22;
            pFVar17->TileWaitTime = fVar10;
            lVar4 = pFVar20->EndRegenFrame;
            pFVar17->StartRegenFrame = pFVar20->StartRegenFrame;
            pFVar17->EndRegenFrame = lVar4;
            pFVar20->TileX = iVar9;
            pFVar20->TileY = iVar11;
            pFVar20->TileRegenTime = fVar12;
            pFVar20->TileWaitTime = fVar13;
            pFVar20->StartRegenFrame = lVar2;
            pFVar20->EndRegenFrame = lVar3;
            pFVar20 = pFVar15;
          } while (pFVar21 < pFVar15);
        }
        goto LAB_146d6ee1f;
      }
LAB_146d6ee0e:
      local_338 = pFVar1;
      HeapSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,_FNavRegenTimeSliceManager::LogTileStatistics_::__l18::<lambda_1>_>_>
                (pFVar17,iVar14,param_3,param_4);
LAB_146d6ee1f:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_328 <= ppFVar18);
  }
  return;
code_r0x000146d6ed29:
  if (pFVar16[1].TileRegenTime < pFVar21->TileRegenTime ||
      pFVar16[1].TileRegenTime == pFVar21->TileRegenTime) goto LAB_146d6ed20;
LAB_146d6ed35:
  do {
    pFVar19 = pFVar15;
    pFVar15 = pFVar19 + -1;
    if (pFVar15 <= pFVar21) break;
  } while (pFVar21->TileRegenTime < pFVar19[-1].TileRegenTime ||
           pFVar21->TileRegenTime == pFVar19[-1].TileRegenTime);
  uVar5 = pFVar15->TileX;
  uVar6 = pFVar15->TileY;
  uVar7 = pFVar19[-1].TileRegenTime;
  uVar8 = pFVar19[-1].TileWaitTime;
  if (pFVar17 <= pFVar15) {
    iVar14 = pFVar17->TileX;
    iVar9 = pFVar17->TileY;
    fVar22 = pFVar16[1].TileRegenTime;
    fVar10 = pFVar16[1].TileWaitTime;
    lVar2 = pFVar16[1].StartRegenFrame;
    lVar3 = pFVar16[1].EndRegenFrame;
    pFVar17->TileX = uVar5;
    pFVar17->TileY = uVar6;
    pFVar16[1].TileRegenTime = (float)uVar7;
    pFVar16[1].TileWaitTime = (float)uVar8;
    lVar4 = pFVar19[-1].EndRegenFrame;
    pFVar16[1].StartRegenFrame = pFVar19[-1].StartRegenFrame;
    pFVar16[1].EndRegenFrame = lVar4;
    pFVar15->TileX = iVar14;
    pFVar15->TileY = iVar9;
    pFVar19[-1].TileRegenTime = fVar22;
    pFVar19[-1].TileWaitTime = fVar10;
    pFVar19[-1].StartRegenFrame = lVar2;
    pFVar19[-1].EndRegenFrame = lVar3;
    goto LAB_146d6ed20;
  }
  iVar14 = pFVar21->TileX;
  iVar9 = pFVar21->TileY;
  fVar22 = pFVar21->TileRegenTime;
  fVar10 = pFVar21->TileWaitTime;
  lVar2 = pFVar21->StartRegenFrame;
  lVar3 = pFVar21->EndRegenFrame;
  pFVar21->TileX = uVar5;
  pFVar21->TileY = uVar6;
  pFVar21->TileRegenTime = (float)uVar7;
  pFVar21->TileWaitTime = (float)uVar8;
  local_338._0_4_ = (int)local_338 + -1;
  lVar4 = pFVar19[-1].EndRegenFrame;
  pFVar21->StartRegenFrame = pFVar19[-1].StartRegenFrame;
  pFVar21->EndRegenFrame = lVar4;
  pFVar15->TileX = iVar14;
  pFVar15->TileY = iVar9;
  pFVar19[-1].TileRegenTime = fVar22;
  pFVar19[-1].TileWaitTime = fVar10;
  pFVar19[-1].StartRegenFrame = lVar2;
  pFVar19[-1].EndRegenFrame = lVar3;
  if ((longlong)((longlong)pFVar15 + (-0x20 - (longlong)pFVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar20 - (longlong)pFVar17 & 0xffffffffffffffe0U)) {
    if (pFVar17 < pFVar20) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar20;
      *(int *)(ppFVar18 + 2) = (int)local_338;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar15 <= pFVar21 + 1) goto LAB_146d6ee1f;
    pFVar20 = pFVar19 + -2;
    pFVar17 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar15) {
      *ppFVar18 = pFVar21;
      ppFVar18[1] = pFVar19 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_338;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar20 <= pFVar17) goto LAB_146d6ee1f;
  }
  iVar14 = (int)((longlong)pFVar20 - (longlong)pFVar17 >> 5) + 1;
  pFVar21 = pFVar17;
  if ((int)local_338 == 0) goto LAB_146d6ee0e;
  goto LAB_146d6ece0;
}

// IntroSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,`FNavRegenTimeSliceManager::LogTileStatistics'::__l18::<lambda_2>_>_> @ 146d6ef20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,_FNavRegenTimeSliceManager::LogTileStatistics_::__l18::<lambda_2>_>_>
          (FTileHistoryData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTileHistoryData,_public:_void___cdecl_FNavRegenTimeSliceManager::LogTileStatistics(TArray<TObjectPtr<ANavigationData>,TSizedDefaultAllocator<32>_>_const_&)const_::_18_::<lambda_2>_>
          param_4)

{
  FTileHistoryData *pFVar1;
  long64 lVar2;
  long64 lVar3;
  long64 lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  FTileHistoryData *pFVar15;
  FTileHistoryData *pFVar16;
  FTileHistoryData *pFVar17;
  FTileHistoryData **ppFVar18;
  FTileHistoryData *pFVar19;
  FTileHistoryData *pFVar20;
  FTileHistoryData *pFVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  FTileHistoryData *local_338;
  FTileHistoryData *local_328;
  FTileHistoryData *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar22;
    memset(local_310,0,0x2e8);
    ppFVar18 = &local_328;
    do {
      pFVar20 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      iVar14 = (int)((longlong)pFVar20 - (longlong)pFVar17 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar21 = pFVar17;
      if ((int)local_338 != 0) {
LAB_146d6efd0:
        if (8 < iVar14) {
          iVar9 = pFVar21->TileY;
          fVar22 = pFVar21->TileRegenTime;
          fVar10 = pFVar21->TileWaitTime;
          pFVar15 = pFVar20 + 1;
          pFVar17 = pFVar21 + iVar14 / 2;
          iVar14 = pFVar17->TileX;
          iVar11 = pFVar17->TileY;
          fVar12 = pFVar17->TileRegenTime;
          fVar13 = pFVar17->TileWaitTime;
          lVar2 = pFVar17->StartRegenFrame;
          lVar3 = pFVar17->EndRegenFrame;
          pFVar17->TileX = pFVar21->TileX;
          pFVar17->TileY = iVar9;
          pFVar17->TileRegenTime = fVar22;
          pFVar17->TileWaitTime = fVar10;
          lVar4 = pFVar21->EndRegenFrame;
          pFVar17->StartRegenFrame = pFVar21->StartRegenFrame;
          pFVar17->EndRegenFrame = lVar4;
          pFVar21->TileX = iVar14;
          pFVar21->TileY = iVar11;
          pFVar21->TileRegenTime = fVar12;
          pFVar21->TileWaitTime = fVar13;
          pFVar21->StartRegenFrame = lVar2;
          pFVar21->EndRegenFrame = lVar3;
          pFVar17 = pFVar21;
LAB_146d6f010:
          pFVar16 = pFVar17;
          pFVar17 = pFVar16 + 1;
          if (pFVar17 <= pFVar20) goto code_r0x000146d6f019;
          goto LAB_146d6f025;
        }
        if (pFVar21 < pFVar20) {
          pFVar1 = pFVar21 + 1;
          do {
            pFVar17 = pFVar21;
            if (pFVar1 <= pFVar20) {
              pFVar15 = pFVar1;
              if (0x7f < ((longlong)pFVar20 + (0x20 - (longlong)pFVar1) & 0xffffffffffffffe0U)) {
                do {
                  if (pFVar17->TileWaitTime < pFVar15->TileWaitTime) {
                    pFVar17 = pFVar15;
                  }
                  if (pFVar17->TileWaitTime <= pFVar15[1].TileWaitTime &&
                      pFVar15[1].TileWaitTime != pFVar17->TileWaitTime) {
                    pFVar17 = pFVar15 + 1;
                  }
                  if (pFVar17->TileWaitTime <= pFVar15[2].TileWaitTime &&
                      pFVar15[2].TileWaitTime != pFVar17->TileWaitTime) {
                    pFVar17 = pFVar15 + 2;
                  }
                  if (pFVar17->TileWaitTime <= pFVar15[3].TileWaitTime &&
                      pFVar15[3].TileWaitTime != pFVar17->TileWaitTime) {
                    pFVar17 = pFVar15 + 3;
                  }
                  pFVar15 = pFVar15 + 4;
                } while (pFVar15 <= pFVar20 + -3);
              }
              for (; pFVar15 <= pFVar20; pFVar15 = pFVar15 + 1) {
                if (pFVar17->TileWaitTime < pFVar15->TileWaitTime) {
                  pFVar17 = pFVar15;
                }
              }
            }
            iVar9 = pFVar17->TileX;
            iVar11 = pFVar17->TileY;
            fVar12 = pFVar17->TileRegenTime;
            fVar13 = pFVar17->TileWaitTime;
            pFVar15 = pFVar20 + -1;
            lVar2 = pFVar17->StartRegenFrame;
            lVar3 = pFVar17->EndRegenFrame;
            iVar14 = pFVar20->TileY;
            fVar22 = pFVar20->TileRegenTime;
            fVar10 = pFVar20->TileWaitTime;
            pFVar17->TileX = pFVar20->TileX;
            pFVar17->TileY = iVar14;
            pFVar17->TileRegenTime = fVar22;
            pFVar17->TileWaitTime = fVar10;
            lVar4 = pFVar20->EndRegenFrame;
            pFVar17->StartRegenFrame = pFVar20->StartRegenFrame;
            pFVar17->EndRegenFrame = lVar4;
            pFVar20->TileX = iVar9;
            pFVar20->TileY = iVar11;
            pFVar20->TileRegenTime = fVar12;
            pFVar20->TileWaitTime = fVar13;
            pFVar20->StartRegenFrame = lVar2;
            pFVar20->EndRegenFrame = lVar3;
            pFVar20 = pFVar15;
          } while (pFVar21 < pFVar15);
        }
        goto LAB_146d6f10f;
      }
LAB_146d6f0fe:
      local_338 = pFVar1;
      HeapSortInternal<FTileHistoryData,int,FIdentityFunctor,TDereferenceWrapper<FTileHistoryData,_FNavRegenTimeSliceManager::LogTileStatistics_::__l18::<lambda_2>_>_>
                (pFVar17,iVar14,param_3,param_4);
LAB_146d6f10f:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_328 <= ppFVar18);
  }
  return;
code_r0x000146d6f019:
  if (pFVar16[1].TileWaitTime < pFVar21->TileWaitTime ||
      pFVar16[1].TileWaitTime == pFVar21->TileWaitTime) goto LAB_146d6f010;
LAB_146d6f025:
  do {
    pFVar19 = pFVar15;
    pFVar15 = pFVar19 + -1;
    if (pFVar15 <= pFVar21) break;
  } while (pFVar21->TileWaitTime < pFVar19[-1].TileWaitTime ||
           pFVar21->TileWaitTime == pFVar19[-1].TileWaitTime);
  uVar5 = pFVar15->TileX;
  uVar6 = pFVar15->TileY;
  uVar7 = pFVar19[-1].TileRegenTime;
  uVar8 = pFVar19[-1].TileWaitTime;
  if (pFVar17 <= pFVar15) {
    iVar14 = pFVar17->TileX;
    iVar9 = pFVar17->TileY;
    fVar22 = pFVar16[1].TileRegenTime;
    fVar10 = pFVar16[1].TileWaitTime;
    lVar2 = pFVar16[1].StartRegenFrame;
    lVar3 = pFVar16[1].EndRegenFrame;
    pFVar17->TileX = uVar5;
    pFVar17->TileY = uVar6;
    pFVar16[1].TileRegenTime = (float)uVar7;
    pFVar16[1].TileWaitTime = (float)uVar8;
    lVar4 = pFVar19[-1].EndRegenFrame;
    pFVar16[1].StartRegenFrame = pFVar19[-1].StartRegenFrame;
    pFVar16[1].EndRegenFrame = lVar4;
    pFVar15->TileX = iVar14;
    pFVar15->TileY = iVar9;
    pFVar19[-1].TileRegenTime = fVar22;
    pFVar19[-1].TileWaitTime = fVar10;
    pFVar19[-1].StartRegenFrame = lVar2;
    pFVar19[-1].EndRegenFrame = lVar3;
    goto LAB_146d6f010;
  }
  iVar14 = pFVar21->TileX;
  iVar9 = pFVar21->TileY;
  fVar22 = pFVar21->TileRegenTime;
  fVar10 = pFVar21->TileWaitTime;
  lVar2 = pFVar21->StartRegenFrame;
  lVar3 = pFVar21->EndRegenFrame;
  pFVar21->TileX = uVar5;
  pFVar21->TileY = uVar6;
  pFVar21->TileRegenTime = (float)uVar7;
  pFVar21->TileWaitTime = (float)uVar8;
  local_338._0_4_ = (int)local_338 + -1;
  lVar4 = pFVar19[-1].EndRegenFrame;
  pFVar21->StartRegenFrame = pFVar19[-1].StartRegenFrame;
  pFVar21->EndRegenFrame = lVar4;
  pFVar15->TileX = iVar14;
  pFVar15->TileY = iVar9;
  pFVar19[-1].TileRegenTime = fVar22;
  pFVar19[-1].TileWaitTime = fVar10;
  pFVar19[-1].StartRegenFrame = lVar2;
  pFVar19[-1].EndRegenFrame = lVar3;
  if ((longlong)((longlong)pFVar15 + (-0x20 - (longlong)pFVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar20 - (longlong)pFVar17 & 0xffffffffffffffe0U)) {
    if (pFVar17 < pFVar20) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar20;
      *(int *)(ppFVar18 + 2) = (int)local_338;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar15 <= pFVar21 + 1) goto LAB_146d6f10f;
    pFVar20 = pFVar19 + -2;
    pFVar17 = pFVar21;
  }
  else {
    if (pFVar21 + 1 < pFVar15) {
      *ppFVar18 = pFVar21;
      ppFVar18[1] = pFVar19 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_338;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar20 <= pFVar17) goto LAB_146d6f10f;
  }
  iVar14 = (int)((longlong)pFVar20 - (longlong)pFVar17 >> 5) + 1;
  pFVar21 = pFVar17;
  if ((int)local_338 == 0) goto LAB_146d6f0fe;
  goto LAB_146d6efd0;
}

// IsObjectPtrEqual<UClass_const_,UClass_const_*,0> @ 146d6f260

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UClass_const_,UClass_const_*,0>
          (TObjectPtr<UClass_const_> *param_1,UClass **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UClass *)0x0) {
    return *param_2 == (UClass *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<ANavigationData,ANavigationData_*,0> @ 146d6f280

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
ObjectPtr_Private::IsObjectPtrEqual<ANavigationData,ANavigationData_*,0>
          (TObjectPtr<ANavigationData> *param_1,ANavigationData **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ANavigationData *)0x0) {
    return *param_2 == (ANavigationData *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeShared<FNavigationElement,1,FNavigationElement> @ 146d6f2a0

TSharedRef<FNavigationElement,1> * __cdecl
MakeShared<FNavigationElement,1,FNavigationElement>
          (TSharedRef<FNavigationElement,1> *__return_storage_ptr__,FNavigationElement *param_1)

{
  FWeakObjectPtr FVar1;
  double dVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = operator_new(0x130);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = 0;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFNavigationElement___00_SharedPointerInternals__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pTVar3 + 2),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->NavigationDataExportDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar3[3].SharedReferenceCount,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->CustomGeometryExportDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pTVar3 + 5),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->GeometrySliceExportDelegate);
    FVar1 = (param_1->OwnerUObject).WeakPtr;
    pTVar3[6].SharedReferenceCount = (atomic<int>)FVar1.ObjectIndex;
    pTVar3[6].WeakReferenceCount = (atomic<int>)FVar1.ObjectSerialNumber;
    pTVar3[7]._padding_ = param_1->SubElementId;
    FVar1 = (param_1->BodySetup).WeakPtr;
    pTVar3[7].SharedReferenceCount = (atomic<int>)FVar1.ObjectIndex;
    pTVar3[7].WeakReferenceCount = (atomic<int>)FVar1.ObjectSerialNumber;
    dVar2 = (param_1->GeometryTransform).Rotation.XY.m128d_f64[1];
    pTVar3[8]._padding_ = (longlong)(param_1->GeometryTransform).Rotation.XY.m128d_f64[0];
    *(double *)&pTVar3[8].SharedReferenceCount = dVar2;
    dVar2 = (param_1->GeometryTransform).Rotation.ZW.m128d_f64[1];
    pTVar3[9]._padding_ = (longlong)(param_1->GeometryTransform).Rotation.ZW.m128d_f64[0];
    *(double *)&pTVar3[9].SharedReferenceCount = dVar2;
    dVar2 = (param_1->GeometryTransform).Translation.XY.m128d_f64[1];
    pTVar3[10]._padding_ = (longlong)(param_1->GeometryTransform).Translation.XY.m128d_f64[0];
    *(double *)&pTVar3[10].SharedReferenceCount = dVar2;
    dVar2 = (param_1->GeometryTransform).Translation.ZW.m128d_f64[1];
    pTVar3[0xb]._padding_ = (longlong)(param_1->GeometryTransform).Translation.ZW.m128d_f64[0];
    *(double *)&pTVar3[0xb].SharedReferenceCount = dVar2;
    dVar2 = (param_1->GeometryTransform).Scale3D.XY.m128d_f64[1];
    pTVar3[0xc]._padding_ = (longlong)(param_1->GeometryTransform).Scale3D.XY.m128d_f64[0];
    *(double *)&pTVar3[0xc].SharedReferenceCount = dVar2;
    dVar2 = (param_1->GeometryTransform).Scale3D.ZW.m128d_f64[1];
    pTVar3[0xd]._padding_ = (longlong)(param_1->GeometryTransform).Scale3D.ZW.m128d_f64[0];
    *(double *)&pTVar3[0xd].SharedReferenceCount = dVar2;
    dVar2 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
    pTVar3[0xe]._padding_ = (longlong)(param_1->Bounds).Min.field0_0x0._s_0.X;
    *(double *)&pTVar3[0xe].SharedReferenceCount = dVar2;
    dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.X;
    pTVar3[0xf]._padding_ = (longlong)(param_1->Bounds).Min.field0_0x0._s_0.Z;
    *(double *)&pTVar3[0xf].SharedReferenceCount = dVar2;
    dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
    pTVar3[0x10]._padding_ = (longlong)(param_1->Bounds).Max.field0_0x0._s_0.Y;
    *(double *)&pTVar3[0x10].SharedReferenceCount = dVar2;
    pTVar3[0x11]._padding_ = *(longlong *)&(param_1->Bounds).IsValid;
    FVar1 = (param_1->NavigationParent).WeakPtr;
    pTVar3[0x11].SharedReferenceCount = (atomic<int>)FVar1.ObjectIndex;
    pTVar3[0x11].WeakReferenceCount = (atomic<int>)FVar1.ObjectSerialNumber;
    *(Type *)&pTVar3[0x12]._padding_ = param_1->GeometryExportType;
    *(ENavDataGatheringMode *)((longlong)&pTVar3[0x12]._padding_ + 4) =
         param_1->GeometryGatheringMode;
    *(bool *)((longlong)&pTVar3[0x12]._padding_ + 5) = param_1->bDirtyAreaOnRegistration;
    *(bool *)((longlong)&pTVar3[0x12]._padding_ + 6) = param_1->bIsInBaseNavigationData;
    *(bool *)((longlong)&pTVar3[0x12]._padding_ + 7) = param_1->bIsFromLevelVisibilityChange;
  }
  TSharedRef<FNavigationElement,1>::TSharedRef<FNavigationElement,1>
            (__return_storage_ptr__,(FNavigationElement *)(pTVar3 + 1),pTVar3);
  return __return_storage_ptr__;
}

// NewObject<UCrowdManagerBase> @ 146d6f6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCrowdManagerBase * __cdecl
NewObject<UCrowdManagerBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = UCrowdManagerBase::StaticClass();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UCrowdManagerBase *)pUVar2;
}

// NewObject<UNavCollision> @ 146d6f7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavCollision * __cdecl NewObject<UNavCollision>(UObject *param_1)

{
  UClass *pUVar1;
  UNavCollision *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNavCollision::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNavCollision *)
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

// NewObject<UNavigationPath> @ 146d6f840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavigationPath * __cdecl NewObject<UNavigationPath>(UObject *param_1)

{
  UClass *pUVar1;
  UNavigationPath *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNavigationPath::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNavigationPath *)
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

// NewObject<UNavigationSystemV1> @ 146d6f8e0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavigationSystemV1 * __cdecl
NewObject<UNavigationSystemV1>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UNavigationSystemV1 *pUVar2;
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
  pUVar1 = UNavigationSystemV1::StaticClass();
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
  pUVar2 = (UNavigationSystemV1 *)
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

// ObjectPtrDecay<TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>_>,TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>_> @ 146d6f9e0

TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator> * __cdecl
ObjectPtrDecay<TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>_>,TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator>_>
          (TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator> *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146d6fa7d;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_146d6fa7d:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator> *)
             (*pcVar4)();
    return pTVar8;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146d6fb80;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_146d6fb80:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return (TSet<UClass_const_*,DefaultKeyFuncs<UClass_const_*,0>,FDefaultSetAllocator> *)param_1;
}

// Reverse<TSharedRef<FNavigationElement_const_,1>_const_> @ 146d70b00

void __cdecl
AlgoImpl::Reverse<TSharedRef<FNavigationElement_const_,1>_const_>
          (TSharedRef<FNavigationElement_const_,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FNavigationElement_const_,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// StaticEnum<enum_ELinkGenerationDebugFlags> @ 146d70f80

UEnum * __cdecl StaticEnum<enum_ELinkGenerationDebugFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags,
                       (UObject *)pUVar1,L"ELinkGenerationDebugFlags");
  }
  return Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.OuterSingleton;
}

// StaticEnum<enum_ERuntimeGenerationType> @ 146d70fc0

UEnum * __cdecl StaticEnum<enum_ERuntimeGenerationType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType,(UObject *)pUVar1,
                       L"ERuntimeGenerationType");
  }
  return Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton;
}

// ~TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,0,0> @ 146d775a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNavigationDataHandler::RemoveFromNavOctree_::__l8::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::`8'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::__l11::<lambda_1>,0,0> @ 146d775c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::__l11::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FNavigationDataHandler::UpdateNavOctreeElementBounds_::__l11::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::__l14::<lambda_1>,0,0> @ 146d775e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::__l14::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNavigationDataHandler::AddLevelCollisionToOctree_::__l14::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l15::<lambda_1>,0,0> @ 146d77600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l15::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNavigationDataHandler::AddElementToNavOctree_::__l15::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::`15'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l126::<lambda_2>,0,0> @ 146d77620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l126::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FNavigationDataHandler::AddElementToNavOctree_::__l126::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::`126'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,0,0> @ 146d77640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FNavigationDataHandler::AddElementToNavOctree_[::C]::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this = &_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// operator() @ 146d7b400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Navigation::Private::<lambda_25>::operator()'::__l5::<lambda_1>::operator()
          (void *this,TSharedRef<FNavigationElement_const_,1> *param_1)

{
  FOutputDevice *this_00;
  FNavigationElement *pFVar1;
  UObject *pUVar2;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88 [4];
  undefined8 local_48;
  
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  this_00 = *(FOutputDevice **)this;
  pUVar2 = FWeakObjectPtr::Get(&(param_1->Object->NavigationParent).WeakPtr);
  if (pUVar2 == (UObject *)0x0) {
    ::FString::FString(&local_b8,L"None");
  }
  else {
    local_c8.Data.AllocatorInstance.Data._0_4_ = *(uint *)&pUVar2->field_0x18;
    local_c8.Data.AllocatorInstance.Data._4_4_ = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString((FName *)&local_c8,&local_b8);
  }
  pFVar1 = param_1->Object;
  local_48._0_1_ = (pFVar1->Bounds).IsValid;
  local_48._1_1_ = (pFVar1->Bounds).Pad[0];
  local_48._2_1_ = (pFVar1->Bounds).Pad[1];
  local_48._3_1_ = (pFVar1->Bounds).Pad[2];
  local_48._4_1_ = (pFVar1->Bounds).Pad[3];
  local_48._5_1_ = (pFVar1->Bounds).Pad[4];
  local_48._6_1_ = (pFVar1->Bounds).Pad[5];
  local_48._7_1_ = (pFVar1->Bounds).Pad[6];
  ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_98,L"IsValid=%s, Min=(%s), Max=(%s)");
  if ((FName)local_c8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FNavigationElement::GetPathName(param_1->Object,local_88);
  FOutputDevice::LogfImpl(this_00,Log,L"%s bounds: [%s] parent:\'%s\'");
  if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 146d7be80

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Navigation::Private::<lambda_27>::operator()'::__l8::<lambda_2>::operator()
          (void *this,uint param_1,uint param_2,FBoxCenterAndExtent *param_3)

{
  FNavigationOctreeElement *pFVar1;
  FNavigationOctreeElement *pFVar2;
  FOutputDevice *this_00;
  UObject *pUVar3;
  undefined1 *puVar4;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  TArrayView<FNavigationOctreeElement_const_,int> local_58;
  FString local_48 [2];
  
  TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementsForNode
            ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
             (**(longlong **)((longlong)this + 0x10) + 0x10),&local_58,param_2);
  pFVar2 = local_58.DataPtr + local_58.ArrayNum;
  if (local_58.DataPtr != pFVar2) {
    puVar4 = (undefined1 *)((longlong)&((local_58.DataPtr)->Bounds).BoxExtent.field0_0x0 + 0x10);
    do {
      **(int **)this = **(int **)this + 1;
      this_00 = *(FOutputDevice **)((longlong)this + 8);
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   (*(longlong *)(*(longlong *)(puVar4 + 0x10) + 0x100) + 0x108));
      if (pUVar3 == (UObject *)0x0) {
        ::FString::FString(&local_88,L"None");
      }
      else {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_res8.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_res8,&local_88);
      }
      ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl((FString *)&local_58,L"Origin=%s, BoxExtent=(%s), SphereRadius=(%f)");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FNavigationElement::GetPathName
                (*(FNavigationElement **)(*(longlong *)(puVar4 + 0x10) + 0x100),local_48);
      FOutputDevice::LogfImpl(this_00,Log,L"%s bounds: [%s] parent:\'%s\'");
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      if (local_58.DataPtr != (FNavigationOctreeElement *)0x0) {
        FMemory::Free(local_58.DataPtr);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar1 = (FNavigationOctreeElement *)(puVar4 + 0x20);
      puVar4 = puVar4 + 0x48;
    } while (pFVar1 != pFVar2);
  }
  return;
}

// `vcall'{1096,{flat}}'_}' @ 146d7c2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]: __cdecl UNavigationSystemV1::`vcall'{1096,{flat}}' }' */

void __thiscall UNavigationSystemV1::_vcall__1096__flat______(UNavigationSystemV1 *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d7c2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x448))();
  return;
}

// `vcall'{1120,{flat}}'_}' @ 146d7c2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]: __cdecl UNavigationSystemV1::`vcall'{1120,{flat}}' }' */

void __thiscall UNavigationSystemV1::_vcall__1120__flat______(UNavigationSystemV1 *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d7c2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x460))();
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146d7c2e0

/* [thunk]:public: virtual void * __ptr64 __cdecl AAbstractNavData::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AAbstractNavData::_vector_deleting_destructor__adjustor_704__(AAbstractNavData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((AAbstractNavData *)&this[-1].field_0x258,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146d7c2f4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl ANavigationData::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ANavigationData::_vector_deleting_destructor__adjustor_704__(ANavigationData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ANavigationData *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 146d7c308

/* [thunk]:public: virtual void * __ptr64 __cdecl ANavigationGraph::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ANavigationGraph::_vector_deleting_destructor__adjustor_704__(ANavigationGraph *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ANavigationGraph *)&this[-1].field_0x258,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146d7c31c

/* [thunk]:public: virtual void * __ptr64 __cdecl UBaseGeneratedNavLinksProxy::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBaseGeneratedNavLinksProxy::_vector_deleting_destructor__adjustor_40__
          (UBaseGeneratedNavLinksProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBaseGeneratedNavLinksProxy *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146d7c32c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavigationGraphNodeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNavigationGraphNodeComponent::_vector_deleting_destructor__adjustor_40__
          (UNavigationGraphNodeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNavigationGraphNodeComponent *)&this[-1].Node.Edges,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146d7c33c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavigationInvokerComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNavigationInvokerComponent::_vector_deleting_destructor__adjustor_40__
          (UNavigationInvokerComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNavigationInvokerComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146d7c350

void * __thiscall
IBaseDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c380

void * __thiscall
IBaseDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c3b0

void * __thiscall
IBaseDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c3e0

void * __thiscall
IBaseDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c410

void * __thiscall
IBaseDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c440

void * __thiscall
IBaseDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c470

void * __thiscall
IBaseDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c4a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c4d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c500

void * __thiscall
IBaseDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c530

void * __thiscall
IBaseDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c560

void * __thiscall
IBaseDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c590

void * __thiscall
IBaseDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c5c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c5f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c620

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c650

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c680

void * __thiscall
IBaseDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c6b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c6e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c710

void * __thiscall
IBaseDelegateInstance<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c740

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c770

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c7a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c7d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c800

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c830

void * __thiscall
IBaseDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c860

void * __thiscall
IBaseDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c890

void * __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c8c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c8f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c920

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c950

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c980

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c9b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7c9e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ca10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ca40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ca70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7caa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cad0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cb00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cb30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cb60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cb90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cbc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cbf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cc20

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ccb0

void * __thiscall
TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cce0

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
TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cd10

void * __thiscall
TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cd40

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cd70

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
TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cda0

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
TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cdd0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ce00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ce30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ce60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ce90

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cef0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cf20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cf50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cf80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cfb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7cfe0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d010

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d040

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d070

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d0a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d0d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  DestructItems<FAsyncPathFindingQuery,int>
            ((FAsyncPathFindingQuery *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d120

void * __thiscall
TCommonDelegateInstanceState<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d150

void * __thiscall
TCommonDelegateInstanceState<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d180

void * __thiscall
TCommonDelegateInstanceState<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d1b0

void * __thiscall
TCommonDelegateInstanceState<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d1e0

void * __thiscall
TCommonDelegateInstanceState<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d210

void * __thiscall
TCommonDelegateInstanceState<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d240

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AActor_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d270

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d2a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d2d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d300

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d330

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d360

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d390

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d3c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d3f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d420

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d450

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d480

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d4b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d4e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d510

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d540

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d570

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d5a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d5d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d600

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  DestructItems<FAsyncPathFindingQuery,int>
            (*(FAsyncPathFindingQuery **)&this->Payload,*(int *)&(this->Payload).field_0x8);
  if (*(void **)&this->Payload != (void *)0x0) {
    FMemory::Free(*(void **)&this->Payload);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d650

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d680

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::`8'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::__l11::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::__l14::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l15::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::`15'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l126::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::`126'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d870

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationElement_const_,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNavigationElement_const_,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d8b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationElement,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FNavigationElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d8f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationRelevantData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNavigationRelevantData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d930

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAbstractNavigationPath,SharedPointerInternals::DefaultDeleter<FAbstractNavigationPath>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAbstractNavigationPath,SharedPointerInternals::DefaultDeleter<FAbstractNavigationPath>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d970

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavigationQueryFilter,SharedPointerInternals::DefaultDeleter<FNavigationQueryFilter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNavigationQueryFilter,SharedPointerInternals::DefaultDeleter<FNavigationQueryFilter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d9b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAbstractQueryFilter,SharedPointerInternals::DefaultDeleter<FAbstractQueryFilter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAbstractQueryFilter,SharedPointerInternals::DefaultDeleter<FAbstractQueryFilter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7d9f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavGraphGenerator,SharedPointerInternals::DefaultDeleter<FNavGraphGenerator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNavGraphGenerator,SharedPointerInternals::DefaultDeleter<FNavGraphGenerator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7da30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavigationOctree,SharedPointerInternals::DefaultDeleter<FNavigationOctree>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNavigationOctree,SharedPointerInternals::DefaultDeleter<FNavigationOctree>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7da70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<INavigationQueryFilterInterface,SharedPointerInternals::DefaultDeleter<INavigationQueryFilterInterface>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<INavigationQueryFilterInterface,SharedPointerInternals::DefaultDeleter<INavigationQueryFilterInterface>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dab0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dae0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(INavLinkCustomInterface_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7db10

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7db40

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<FNavigationElement_const_,1>_const_&),FDefaultDelegateUserPolicy,`UNavigationSystemV1::RegisterToRepositoryDelegates'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7db70

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
AAbstractNavData::_scalar_deleting_destructor_(AAbstractNavData *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavigationDataInterface__;
  ANavigationData::~ANavigationData((ANavigationData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x518);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dbe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall ANavigationData::_scalar_deleting_destructor_(ANavigationData *this,uint param_1)

{
  ~ANavigationData(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x518);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dc40

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
ANavigationGraph::_scalar_deleting_destructor_(ANavigationGraph *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavigationDataInterface__;
  ANavigationData::~ANavigationData((ANavigationData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x518);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dcb0

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
ANavigationGraphNode::_scalar_deleting_destructor_(ANavigationGraphNode *this,uint param_1)

{
  *(undefined ***)this = &___7ANavigationGraphNode__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dd10

void * __thiscall
FAbstractNavigationPath::_scalar_deleting_destructor_(FAbstractNavigationPath *this,uint param_1)

{
  FNavigationPath::~FNavigationPath((FNavigationPath *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dd50

void * __thiscall
FAbstractQueryFilter::_scalar_deleting_destructor_(FAbstractQueryFilter *this,uint param_1)

{
  *this = (FAbstractQueryFilter)&___7INavigationQueryFilterInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dd90

void * __thiscall
FDerivedDataNavCollisionCooker::_scalar_deleting_destructor_
          (FDerivedDataNavCollisionCooker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MeshId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDerivedDataPluginInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dde0

void * __thiscall
FDerivedDataPluginInterface::_scalar_deleting_destructor_
          (FDerivedDataPluginInterface *this,uint param_1)

{
  *this = (FDerivedDataPluginInterface)&___7FDerivedDataPluginInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7de20

void * __thiscall
FNavDataGenerator::_scalar_deleting_destructor_(FNavDataGenerator *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FNavDataGenerator__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7de90

void * __thiscall
FNavGraphGenerator::_scalar_deleting_destructor_(FNavGraphGenerator *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FNavGraphGenerator__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GraphChangingLock);
  pFVar3 = (this->InclusionVolumes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FNavDataGenerator__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7df20

void * __thiscall
FNavigationOctree::_scalar_deleting_destructor_(FNavigationOctree *this,uint param_1)

{
  ~FNavigationOctree(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7df60

void * __thiscall FNavigationPath::_scalar_deleting_destructor_(FNavigationPath *this,uint param_1)

{
  ~FNavigationPath(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dfa0

void * __thiscall
INavLinkCustomInterface::_scalar_deleting_destructor_(INavLinkCustomInterface *this,uint param_1)

{
  *this = (INavLinkCustomInterface)&___7INavLinkCustomInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7dfe0

void * __thiscall
INavigationDataInterface::_scalar_deleting_destructor_(INavigationDataInterface *this,uint param_1)

{
  *this = (INavigationDataInterface)&___7INavigationDataInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e020

void * __thiscall
INavigationQueryFilterInterface::_scalar_deleting_destructor_
          (INavigationQueryFilterInterface *this,uint param_1)

{
  *this = (INavigationQueryFilterInterface)&___7INavigationQueryFilterInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e060

void * __thiscall
UBaseGeneratedNavLinksProxy::_scalar_deleting_destructor_
          (UBaseGeneratedNavLinksProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7INavLinkCustomInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e0d0

void * __thiscall
UCrowdManagerBase::_scalar_deleting_destructor_(UCrowdManagerBase *this,uint param_1)

{
  *(undefined ***)this = &___7UCrowdManagerBase__6B_;
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

// `scalar_deleting_destructor' @ 146d7e130

void * __thiscall UNavArea::_scalar_deleting_destructor_(UNavArea *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e190

void * __thiscall UNavAreaMeta::_scalar_deleting_destructor_(UNavAreaMeta *this,uint param_1)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e1f0

void * __thiscall
UNavAreaMeta_SwitchByAgent::_scalar_deleting_destructor_
          (UNavAreaMeta_SwitchByAgent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e250

void * __thiscall
UNavArea_Default::_scalar_deleting_destructor_(UNavArea_Default *this,uint param_1)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e2b0

void * __thiscall
UNavArea_LowHeight::_scalar_deleting_destructor_(UNavArea_LowHeight *this,uint param_1)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e310

void * __thiscall UNavArea_Null::_scalar_deleting_destructor_(UNavArea_Null *this,uint param_1)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e370

void * __thiscall
UNavArea_Obstacle::_scalar_deleting_destructor_(UNavArea_Obstacle *this,uint param_1)

{
  *(undefined ***)this = &___7UNavArea__6B_;
  UNavAreaBase::~UNavAreaBase((UNavAreaBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e3d0

void * __thiscall UNavCollision::_scalar_deleting_destructor_(UNavCollision *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNavCollision__6B_;
  FFormatContainer::~FFormatContainer(&this->CookedFormatData);
  pFVar1 = (this->BoxCollision).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CylinderCollision).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->ConvexShapeIndices);
  UNavCollisionBase::~UNavCollisionBase((UNavCollisionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e470

void * __thiscall
UNavLinkCustomInterface::_scalar_deleting_destructor_(UNavLinkCustomInterface *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 146d7e4d0

void * __thiscall
UNavLinkHostInterface::_scalar_deleting_destructor_(UNavLinkHostInterface *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 146d7e530

void * __thiscall UNavLinkTrivial::_scalar_deleting_destructor_(UNavLinkTrivial *this,uint param_1)

{
  *(undefined ***)this = &___7UNavLinkTrivial__6B_;
  UNavLinkDefinition::~UNavLinkDefinition((UNavLinkDefinition *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e590

void * __thiscall
UNavNodeInterface::_scalar_deleting_destructor_(UNavNodeInterface *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 146d7e5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UNavigationGraphNodeComponent::_scalar_deleting_destructor_
          (UNavigationGraphNodeComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->Node).Edges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e680

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
UNavigationInvokerComponent::_scalar_deleting_destructor_
          (UNavigationInvokerComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e700

void * __thiscall
UNavigationObjectRepository::_scalar_deleting_destructor_
          (UNavigationObjectRepository *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7UNavigationObjectRepository__6B_;
  if (this->NavElementAccessDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  pFVar1 = (this->CustomLinkObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NavRelevantElements).field_0x48 = 0;
  pvVar4 = *(void **)&(this->NavRelevantElements).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NavRelevantElements);
  *(undefined4 *)&(this->ObjectsToHandleMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ObjectsToHandleMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FNavigationElementHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectsToHandleMap);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCustomNavLinkObjectUnregistered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCustomNavLinkObjectRegistered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigationElementRemovedDelegate)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigationElementAddedDelegate);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e830

void * __thiscall UNavigationPath::_scalar_deleting_destructor_(UNavigationPath *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNavigationPath__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PathObserver);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedPath).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PathPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->PathUpdatedNotifier).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PathUpdatedNotifier);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e8e0

void * __thiscall
UNavigationPathGenerator::_scalar_deleting_destructor_(UNavigationPathGenerator *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 146d7e940

void * __thiscall
UNavigationQueryFilter::_scalar_deleting_destructor_(UNavigationQueryFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNavigationQueryFilter__6B_;
  pFVar1 = (this->Areas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7e9b0

void * __thiscall
UNavigationSystemBase::_scalar_deleting_destructor_(UNavigationSystemBase *this,uint param_1)

{
  *(undefined ***)this = &___7UNavigationSystemBase__6B_;
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

// `scalar_deleting_destructor' @ 146d7ea10

void * __thiscall
UNavigationSystemModuleConfig::_scalar_deleting_destructor_
          (UNavigationSystemModuleConfig *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNavigationSystemModuleConfig__6B_;
  UNavigationSystemConfig::~UNavigationSystemConfig((UNavigationSystemConfig *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ea70

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
UNavigationSystemV1::_scalar_deleting_destructor_(UNavigationSystemV1 *this,uint param_1)

{
  ~UNavigationSystemV1(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x16a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146d7ead0

void * __thiscall
URecastFilter_UseDefaultArea::_scalar_deleting_destructor_
          (URecastFilter_UseDefaultArea *this,uint param_1)

{
  *(undefined ***)this = &___7UNavigationQueryFilter__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// CreateNewNavCollisionInstance @ 146d8e490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNavCollisionBase * __cdecl `anonymous_namespace'::CreateNewNavCollisionInstance(UObject *param_1)

{
  UClass *pUVar1;
  UNavCollisionBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNavCollision::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNavCollisionBase *)
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

// DrawBoxHelper @ 146d91890

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

void __cdecl
DrawBoxHelper(FPrimitiveDrawInterface *param_1,TMatrix<double> *param_2,TVector<double> *param_3,
             FColor param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
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
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  double *pdVar19;
  double *pdVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  float fVar24;
  undefined1 auVar25 [16];
  byte bStackX_21;
  byte bStackX_22;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  longlong local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  double local_f8;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  double local_e0;
  
  uStack_104 = *(uint *)((longlong)&param_3->field0_0x0 + 4);
  uStack_100 = *(uint *)((longlong)&param_3->field0_0x0 + 8);
  uStack_fc = *(uint *)((longlong)&param_3->field0_0x0 + 0xc);
  pdVar19 = (double *)&uStack_100;
  bStackX_22 = param_4.field0_0x0._2_1_;
  uVar22 = (ulonglong)bStackX_22;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  local_f8 = (param_3->field0_0x0)._s_0.Z;
  local_108 = *(uint *)&param_3->field0_0x0;
  local_140 = 2;
  uVar18 = (ulonglong)(uint)param_4.field0_0x0 & 0xff;
  fVar24 = (float)((uint)param_4.field0_0x0 >> 0x18) * __real_3b808081;
  local_e0 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_f0 = *(uint *)&param_3->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  uStack_ec = uStack_104 ^ __xmm_80000000000000008000000000000000._4_4_;
  uStack_e8 = uStack_100 ^ _UNK_15066df78;
  uStack_e4 = uStack_fc ^ _UNK_15066df7c;
  do {
    bStackX_21 = param_4.field0_0x0._1_1_;
    uVar21 = (ulonglong)bStackX_21;
    pdVar20 = &local_f8;
    lVar23 = 2;
    do {
      local_138 = FLinearColor::sRGBToLinearTable[uVar22];
      dVar2 = pdVar20[-1];
      dVar4 = param_2->M[0][0];
      dVar5 = param_2->M[0][1];
      dVar6 = param_2->M[1][0];
      dVar7 = param_2->M[1][1];
      dVar8 = param_2->M[2][0];
      dVar9 = param_2->M[2][1];
      local_134 = FLinearColor::sRGBToLinearTable[uVar21];
      dVar10 = param_2->M[3][0];
      dVar11 = param_2->M[3][1];
      dVar12 = param_2->M[0][2];
      dVar3 = pdVar19[-1];
      dVar13 = param_2->M[2][2];
      dVar14 = param_2->M[3][2];
      local_130 = FLinearColor::sRGBToLinearTable[uVar18];
      local_170 = dVar6 * dVar2 + dVar4 * dVar3 + dVar8 * local_e0 +
                  dVar10 * __real_3ff0000000000000;
      local_168 = dVar7 * dVar2 + dVar5 * dVar3 + dVar9 * local_e0 +
                  dVar11 * __real_3ff0000000000000;
      local_160 = param_2->M[1][2] * dVar2 + dVar12 * dVar3 + dVar13 * local_e0 +
                  dVar14 * __real_3ff0000000000000;
      dVar3 = pdVar19[-1];
      local_158 = dVar6 * dVar2 + dVar4 * dVar3 + dVar8 * local_f8 +
                  dVar10 * __real_3ff0000000000000;
      local_150 = dVar7 * dVar2 + dVar5 * dVar3 + dVar9 * local_f8 +
                  dVar11 * __real_3ff0000000000000;
      local_148 = param_2->M[1][2] * dVar2 + dVar12 * dVar3 + dVar13 * local_f8 +
                  dVar14 * __real_3ff0000000000000;
      local_12c = fVar24;
      (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_158,&local_170,&local_138,0,0,0,0);
      dVar5 = param_2->M[0][0];
      dVar6 = param_2->M[0][1];
      local_128 = FLinearColor::sRGBToLinearTable[uVar22];
      dVar7 = param_2->M[1][0];
      dVar8 = param_2->M[1][1];
      local_124 = FLinearColor::sRGBToLinearTable[uVar21];
      dVar17 = (double)CONCAT44(uStack_ec,local_f0);
      dVar2 = *pdVar20;
      dVar9 = param_2->M[2][0];
      dVar10 = param_2->M[2][1];
      dVar11 = param_2->M[3][0];
      dVar12 = param_2->M[3][1];
      dVar13 = param_2->M[0][2];
      dVar14 = param_2->M[1][2];
      dVar15 = param_2->M[2][2];
      dVar16 = param_2->M[3][2];
      local_120 = FLinearColor::sRGBToLinearTable[uVar18];
      dVar3 = *pdVar19;
      local_158 = dVar5 * dVar17 + dVar3 * dVar7 + dVar2 * dVar9 + __real_3ff0000000000000 * dVar11;
      local_150 = dVar6 * dVar17 + dVar3 * dVar8 + dVar2 * dVar10 + __real_3ff0000000000000 * dVar12
      ;
      dVar4 = *pdVar20;
      local_148 = dVar13 * dVar17 + dVar3 * dVar14 + dVar2 * dVar15 +
                  __real_3ff0000000000000 * dVar16;
      dVar3 = (double)CONCAT44(uStack_104,local_108);
      dVar2 = *pdVar19;
      local_170 = dVar5 * dVar3 + dVar2 * dVar7 + dVar4 * dVar9 + __real_3ff0000000000000 * dVar11;
      local_168 = dVar6 * dVar3 + dVar2 * dVar8 + dVar4 * dVar10 + __real_3ff0000000000000 * dVar12;
      local_160 = dVar13 * dVar3 + dVar2 * dVar14 + dVar4 * dVar15 +
                  __real_3ff0000000000000 * dVar16;
      local_11c = fVar24;
      (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_170,&local_158,&local_128,0,0,0,0);
      local_118 = FLinearColor::sRGBToLinearTable[uVar22];
      local_114 = FLinearColor::sRGBToLinearTable[uVar21];
      dVar2 = pdVar20[-2];
      dVar4 = param_2->M[0][0];
      dVar5 = param_2->M[0][1];
      dVar3 = pdVar19[1];
      dVar6 = param_2->M[1][0];
      dVar7 = param_2->M[1][1];
      dVar8 = param_2->M[2][0];
      dVar9 = param_2->M[2][1];
      dVar10 = param_2->M[3][0];
      dVar11 = param_2->M[3][1];
      dVar12 = param_2->M[0][2];
      dVar13 = param_2->M[1][2];
      dVar14 = param_2->M[2][2];
      dVar15 = param_2->M[3][2];
      local_110 = FLinearColor::sRGBToLinearTable[uVar18];
      dVar16 = (double)CONCAT44(uStack_e4,uStack_e8);
      local_158 = dVar4 * dVar2 + dVar16 * dVar6 + dVar3 * dVar8 + __real_3ff0000000000000 * dVar10;
      local_150 = dVar5 * dVar2 + dVar16 * dVar7 + dVar3 * dVar9 + __real_3ff0000000000000 * dVar11;
      local_148 = dVar12 * dVar2 + dVar16 * dVar13 + dVar3 * dVar14 +
                  __real_3ff0000000000000 * dVar15;
      dVar16 = (double)CONCAT44(uStack_fc,uStack_100);
      dVar2 = pdVar19[1];
      dVar3 = pdVar20[-2];
      auVar25._8_4_ = uStack_100;
      auVar25._0_8_ = dVar16;
      auVar25._12_4_ = uStack_fc;
      local_170 = dVar16 * dVar6 + dVar4 * dVar3 + dVar2 * dVar8 + __real_3ff0000000000000 * dVar10;
      local_168 = auVar25._8_8_ * dVar7 + dVar5 * dVar3 + dVar2 * dVar9 +
                  __real_3ff0000000000000 * dVar11;
      local_160 = dVar16 * dVar13 + dVar12 * dVar3 + dVar2 * dVar14 +
                  __real_3ff0000000000000 * dVar15;
      local_10c = fVar24;
      (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_170,&local_158,&local_118,0,0,0,0);
      pdVar20 = pdVar20 + 3;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    pdVar19 = pdVar19 + 3;
    local_140 = local_140 + -1;
  } while (local_140 != 0);
  return;
}

// DrawCylinderHelper @ 146d91f70

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
DrawCylinderHelper(FPrimitiveDrawInterface *param_1,TMatrix<double> *param_2,double param_3,
                  double param_4,FColor param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar15;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  
  dVar1 = param_2->M[2][0];
  dVar2 = param_2->M[2][1];
  dVar3 = param_2->M[2][2];
  dVar4 = param_2->M[0][0];
  dVar5 = param_2->M[0][1];
  dVar6 = param_2->M[0][2];
  dVar7 = param_2->M[1][0];
  dVar8 = param_2->M[1][1];
  dVar9 = param_2->M[1][2];
  dVar15 = dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6;
  if (__real_3e45798ee0000000 < dVar15) {
    dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
    dVar4 = dVar4 * dVar15;
    dVar5 = dVar5 * dVar15;
    dVar6 = dVar6 * dVar15;
  }
  dVar15 = dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9;
  if (__real_3e45798ee0000000 < dVar15) {
    dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
    dVar7 = dVar7 * dVar15;
    dVar8 = dVar8 * dVar15;
    dVar9 = dVar9 * dVar15;
  }
  dVar15 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  if (__real_3e45798ee0000000 < dVar15) {
    dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
    dVar1 = dVar1 * dVar15;
    dVar2 = dVar2 * dVar15;
    dVar3 = dVar3 * dVar15;
  }
  uVar12 = (ulonglong)param_5.field0_0x0._s_0.R;
  uVar13 = (ulonglong)param_5.field0_0x0._s_0.G;
  uVar11 = (ulonglong)param_5.field0_0x0._s_0.B;
  iVar10 = 1;
  local_168 = dVar4 * param_3 + param_2->M[3][0];
  dStack_160 = dVar5 * param_3 + param_2->M[3][1];
  local_158 = dVar6 * param_3 + param_2->M[3][2];
  fVar14 = (float)((uint)param_5.field0_0x0 >> 0x18) * __real_3b808081;
  dVar1 = dVar1 * param_4;
  dVar2 = dVar2 * param_4;
  dVar3 = dVar3 * param_4;
  do {
    __libm_sse2_sincos_();
    local_150 = (dVar4 * extraout_XMM0_Qb + dVar7 * extraout_XMM0_Qa) * param_3 + param_2->M[3][0];
    dStack_148 = (dVar5 * extraout_XMM0_Qb + dVar8 * extraout_XMM0_Qa) * param_3 + param_2->M[3][1];
    local_120 = FLinearColor::sRGBToLinearTable[uVar12];
    local_118 = FLinearColor::sRGBToLinearTable[uVar11];
    local_11c = FLinearColor::sRGBToLinearTable[uVar13];
    local_140 = (dVar6 * extraout_XMM0_Qb + dVar9 * extraout_XMM0_Qa) * param_3 + param_2->M[3][2];
    local_114 = fVar14;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_168,&local_150,&local_120,0,0,0,0);
    local_110 = FLinearColor::sRGBToLinearTable[uVar12];
    local_10c = FLinearColor::sRGBToLinearTable[uVar13];
    local_108 = FLinearColor::sRGBToLinearTable[uVar11];
    local_e8 = dStack_148 + dVar2;
    local_f0 = local_150 + dVar1;
    local_138 = local_168 + dVar1;
    local_e0 = local_140 + dVar3;
    local_128 = local_158 + dVar3;
    local_130 = dStack_160 + dVar2;
    local_104 = fVar14;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_138,&local_f0,&local_110,0,0,0,0);
    local_100 = FLinearColor::sRGBToLinearTable[uVar12];
    local_fc = FLinearColor::sRGBToLinearTable[uVar13];
    local_f8 = FLinearColor::sRGBToLinearTable[uVar11];
    local_138 = local_168 + dVar1;
    local_130 = dStack_160 + dVar2;
    local_128 = local_158 + dVar3;
    local_f4 = fVar14;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_168,&local_138,&local_100,0,0,0,0);
    iVar10 = iVar10 + 1;
    local_158 = local_140;
    local_168 = local_150;
    dStack_160 = dStack_148;
  } while (iVar10 != 0x11);
  return;
}

// EmptyLinkFunctionForGeneratedCodeAbstractNavData @ 146d929a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAbstractNavData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBaseGeneratedNavLinksProxy @ 146d929b0

void __cdecl EmptyLinkFunctionForGeneratedCodeBaseGeneratedNavLinksProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCrowdManagerBase @ 146d929c0

void __cdecl EmptyLinkFunctionForGeneratedCodeCrowdManagerBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLinkGenerationDebugFlags @ 146d929d0

void __cdecl EmptyLinkFunctionForGeneratedCodeLinkGenerationDebugFlags(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavArea @ 146d929e0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavArea(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavAreaMeta @ 146d929f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavAreaMeta(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavAreaMeta_SwitchByAgent @ 146d92a00

void __cdecl EmptyLinkFunctionForGeneratedCodeNavAreaMeta_SwitchByAgent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavArea_Default @ 146d92a10

void __cdecl EmptyLinkFunctionForGeneratedCodeNavArea_Default(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavArea_LowHeight @ 146d92a20

void __cdecl EmptyLinkFunctionForGeneratedCodeNavArea_LowHeight(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavArea_Null @ 146d92a30

void __cdecl EmptyLinkFunctionForGeneratedCodeNavArea_Null(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavArea_Obstacle @ 146d92a40

void __cdecl EmptyLinkFunctionForGeneratedCodeNavArea_Obstacle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavCollision @ 146d92a50

void __cdecl EmptyLinkFunctionForGeneratedCodeNavCollision(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavLinkCustomInterface @ 146d92a60

void __cdecl EmptyLinkFunctionForGeneratedCodeNavLinkCustomInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavLinkHostInterface @ 146d92a70

void __cdecl EmptyLinkFunctionForGeneratedCodeNavLinkHostInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavLinkTrivial @ 146d92a80

void __cdecl EmptyLinkFunctionForGeneratedCodeNavLinkTrivial(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavNodeInterface @ 146d92a90

void __cdecl EmptyLinkFunctionForGeneratedCodeNavNodeInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationData @ 146d92aa0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationGraph @ 146d92ab0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationGraph(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationGraphNode @ 146d92ac0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationGraphNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationGraphNodeComponent @ 146d92ad0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationGraphNodeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationInvokerComponent @ 146d92ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationInvokerComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationObjectRepository @ 146d92af0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationObjectRepository(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationPath @ 146d92b00

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationPath(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationPathGenerator @ 146d92b10

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationPathGenerator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter @ 146d92b20

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationSystem @ 146d92b30

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationSystem_init @ 146d92b40

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationSystem_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRecastFilter_UseDefaultArea @ 146d92b50

void __cdecl EmptyLinkFunctionForGeneratedCodeRecastFilter_UseDefaultArea(void)

{
  return;
}

// FOnNavDataGenericEvent_DelegateWrapper @ 146d94d50

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
FOnNavDataGenericEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,ANavigationData *param_2)

{
  ANavigationData *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnNavigationPathUpdated_DelegateWrapper @ 146d94d70

void __cdecl
FOnNavigationPathUpdated_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UNavigationPath *param_2,
          Type param_3)

{
  UNavigationPath *local_18;
  undefined1 local_10;
  
  local_10 = (undefined1)param_3;
  local_18 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// LexToString @ 146da6270

FString * __cdecl LexToString(FString *__return_storage_ptr__,FOctreeElementId2 param_1)

{
  FString local_28;
  FString local_18;
  
  FString::PrintfImpl(&local_18,L"%d");
  FString::PrintfImpl(&local_28,L"%u");
  FString::PrintfImpl(__return_storage_ptr__,L"[%s:%s]");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// NavigationDataDump @ 146da7660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
`anonymous_namespace'::NavigationDataDump
          (UObject *param_1,FName *param_2,Type param_3,TBox<double> *param_4,UWorld *param_5,
          FVisualLogEntry *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  double *pdVar5;
  UObjectBaseUtility *this;
  double *pdVar6;
  double dVar7;
  undefined1 auStack_108 [32];
  Type local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  undefined1 local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((param_5 != (UWorld *)0x0) &&
     (this = (UObjectBaseUtility *)(param_5->NavigationSystem).field0_0x0.DebugPtr,
     this != (UObjectBaseUtility *)0x0)) {
    bVar4 = UObjectBaseUtility::IsA<UNavigationSystemV1>(this);
    if (bVar4) goto LAB_146da76ba;
  }
  this = (UObjectBaseUtility *)0x0;
LAB_146da76ba:
  plVar1 = *(longlong **)(this + 1);
  if ((plVar1 != (longlong *)0x0) && (plVar2 = (longlong *)plVar1[0x73], plVar2 != (longlong *)0x0))
  {
    pcVar3 = *(code **)(*plVar2 + 0x68);
    if ((param_4->IsValid == '\0') ||
       (dVar7 = ((param_4->Max).field0_0x0._s_0.Y - (param_4->Min).field0_0x0._s_0.Y) *
                ((param_4->Max).field0_0x0._s_0.X - (param_4->Min).field0_0x0._s_0.X) *
                ((param_4->Max).field0_0x0._s_0.Z - (param_4->Min).field0_0x0._s_0.Z),
       (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee2308c3a)) {
      pdVar5 = (double *)(**(code **)(*plVar1 + 0x838))(plVar1,local_68);
      pdVar6 = &local_d8;
      local_c0 = pdVar5[3] + ___xmm_40340000000000004034000000000000;
      local_d8 = *pdVar5 - ___xmm_40340000000000004034000000000000;
      dStack_d0 = pdVar5[1] - _UNK_151444f88;
      local_a8 = 1;
      local_c8 = pdVar5[2] - ___xmm_40340000000000004034000000000000;
      local_b8 = ___xmm_40340000000000004034000000000000 + pdVar5[4];
      dStack_b0 = _UNK_151444f88 + pdVar5[5];
    }
    else {
      local_a0 = (param_4->Min).field0_0x0._s_0.X;
      dStack_98 = (param_4->Min).field0_0x0._s_0.Y;
      pdVar6 = &local_a0;
      local_90 = (param_4->Min).field0_0x0._s_0.Z;
      dStack_88 = (param_4->Max).field0_0x0._s_0.X;
      local_80 = (param_4->Max).field0_0x0._s_0.Y;
      dStack_78 = (param_4->Max).field0_0x0._s_0.Z;
      local_70._0_1_ = param_4->IsValid;
      local_70._1_1_ = param_4->Pad[0];
      local_70._2_1_ = param_4->Pad[1];
      local_70._3_1_ = param_4->Pad[2];
      local_70._4_1_ = param_4->Pad[3];
      local_70._5_1_ = param_4->Pad[4];
      local_70._6_1_ = param_4->Pad[5];
      local_70._7_1_ = param_4->Pad[6];
    }
    local_e8 = param_3;
    (*pcVar3)(plVar2,param_6,pdVar6,param_2);
  }
  return;
}

// Z_Construct_UClass_AAbstractNavData_NoRegister @ 146dc4810

UClass * __cdecl Z_Construct_UClass_AAbstractNavData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"AbstractNavData",
               &Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton,
               AAbstractNavData::StaticRegisterNativesAAbstractNavData,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<AAbstractNavData>,
               InternalVTableHelperCtorCaller<AAbstractNavData>,local_res8,
               ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAbstractNavData.InnerSingleton;
}

// Z_Construct_UClass_ANavigationGraphNode_NoRegister @ 146dc48d0

UClass * __cdecl Z_Construct_UClass_ANavigationGraphNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraphNode",
               &Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton,
               ANavigationGraphNode::StaticRegisterNativesANavigationGraphNode,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavigationGraphNode>,
               InternalVTableHelperCtorCaller<ANavigationGraphNode>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationGraphNode.InnerSingleton;
}

// Z_Construct_UClass_ANavigationGraph_NoRegister @ 146dc4990

UClass * __cdecl Z_Construct_UClass_ANavigationGraph_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraph",
               &Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton,
               ANavigationGraph::StaticRegisterNativesANavigationGraph,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<ANavigationGraph>,
               InternalVTableHelperCtorCaller<ANavigationGraph>,local_res8,
               ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton;
}

// Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister @ 146dc4a50

UClass * __cdecl Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"BaseGeneratedNavLinksProxy",
               &Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton,
               UBaseGeneratedNavLinksProxy::StaticRegisterNativesUBaseGeneratedNavLinksProxy,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseGeneratedNavLinksProxy>,
               InternalVTableHelperCtorCaller<UBaseGeneratedNavLinksProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton;
}

// Z_Construct_UClass_UNavAreaMeta_NoRegister @ 146dc4b00

UClass * __cdecl Z_Construct_UClass_UNavAreaMeta_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavAreaMeta",
               &Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton,
               UNavAreaMeta::StaticRegisterNativesUNavAreaMeta,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavAreaMeta>,InternalVTableHelperCtorCaller<UNavAreaMeta>,
               local_res8,UNavArea::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAreaMeta.InnerSingleton;
}

// Z_Construct_UClass_UNavAreaMeta_SwitchByAgent_NoRegister @ 146dc4bc0

UClass * __cdecl Z_Construct_UClass_UNavAreaMeta_SwitchByAgent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavAreaMeta_SwitchByAgent",
               &Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton,
               UNavAreaMeta_SwitchByAgent::StaticRegisterNativesUNavAreaMeta_SwitchByAgent,200,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavAreaMeta_SwitchByAgent>,
               InternalVTableHelperCtorCaller<UNavAreaMeta_SwitchByAgent>,local_res8,
               UNavAreaMeta::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavAreaMeta_SwitchByAgent.InnerSingleton;
}

// Z_Construct_UClass_UNavArea_Default_NoRegister @ 146dc4c80

UClass * __cdecl Z_Construct_UClass_UNavArea_Default_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Default",
               &Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton,
               UNavArea_Default::StaticRegisterNativesUNavArea_Default,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavArea_Default>,
               InternalVTableHelperCtorCaller<UNavArea_Default>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Default.InnerSingleton;
}

// Z_Construct_UClass_UNavArea_LowHeight_NoRegister @ 146dc4d40

UClass * __cdecl Z_Construct_UClass_UNavArea_LowHeight_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_LowHeight",
               &Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton,
               UNavArea_LowHeight::StaticRegisterNativesUNavArea_LowHeight,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavArea_LowHeight>,
               InternalVTableHelperCtorCaller<UNavArea_LowHeight>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_LowHeight.InnerSingleton;
}

// Z_Construct_UClass_UNavArea_Null_NoRegister @ 146dc4e00

UClass * __cdecl Z_Construct_UClass_UNavArea_Null_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Null",
               &Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton,
               UNavArea_Null::StaticRegisterNativesUNavArea_Null,0x48,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNavArea_Null>,
               InternalVTableHelperCtorCaller<UNavArea_Null>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Null.InnerSingleton;
}

// Z_Construct_UClass_UNavArea_Obstacle_NoRegister @ 146dc4ec0

UClass * __cdecl Z_Construct_UClass_UNavArea_Obstacle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavArea_Obstacle",
               &Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton,
               UNavArea_Obstacle::StaticRegisterNativesUNavArea_Obstacle,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavArea_Obstacle>,
               InternalVTableHelperCtorCaller<UNavArea_Obstacle>,local_res8,UNavArea::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavArea_Obstacle.InnerSingleton;
}

// Z_Construct_UClass_UNavCollision_NoRegister @ 146dc4f80

UClass * __cdecl Z_Construct_UClass_UNavCollision_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavCollision.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavCollision",
               &Z_Registration_Info_UClass_UNavCollision.InnerSingleton,
               UNavCollision::StaticRegisterNativesUNavCollision,0x130,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavCollision>,InternalVTableHelperCtorCaller<UNavCollision>,
               local_res8,UNavCollisionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavCollision.InnerSingleton;
}

// Z_Construct_UClass_UNavLinkCustomInterface_NoRegister @ 146dc5040

UClass * __cdecl Z_Construct_UClass_UNavLinkCustomInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkCustomInterface",
               &Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton,
               UNavLinkCustomInterface::StaticRegisterNativesUNavLinkCustomInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkCustomInterface>,
               InternalVTableHelperCtorCaller<UNavLinkCustomInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkCustomInterface.InnerSingleton;
}

// Z_Construct_UClass_UNavLinkHostInterface_NoRegister @ 146dc5100

UClass * __cdecl Z_Construct_UClass_UNavLinkHostInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkHostInterface",
               &Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton,
               UNavLinkHostInterface::StaticRegisterNativesUNavLinkHostInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavLinkHostInterface>,
               InternalVTableHelperCtorCaller<UNavLinkHostInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkHostInterface.InnerSingleton;
}

// Z_Construct_UClass_UNavLinkTrivial_NoRegister @ 146dc51c0

UClass * __cdecl Z_Construct_UClass_UNavLinkTrivial_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkTrivial",
               &Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton,
               UNavLinkTrivial::StaticRegisterNativesUNavLinkTrivial,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavLinkTrivial>,
               InternalVTableHelperCtorCaller<UNavLinkTrivial>,local_res8,
               UNavLinkDefinition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkTrivial.InnerSingleton;
}

// Z_Construct_UClass_UNavNodeInterface_NoRegister @ 146dc5280

UClass * __cdecl Z_Construct_UClass_UNavNodeInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavNodeInterface",
               &Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton,
               UNavNodeInterface::StaticRegisterNativesUNavNodeInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavNodeInterface>,
               InternalVTableHelperCtorCaller<UNavNodeInterface>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavNodeInterface.InnerSingleton;
}

// Z_Construct_UClass_UNavigationInvokerComponent_NoRegister @ 146dc5340

UClass * __cdecl Z_Construct_UClass_UNavigationInvokerComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationInvokerComponent",
               &Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton,
               UNavigationInvokerComponent::StaticRegisterNativesUNavigationInvokerComponent,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationInvokerComponent>,
               InternalVTableHelperCtorCaller<UNavigationInvokerComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton;
}

// Z_Construct_UClass_UNavigationPathGenerator_NoRegister @ 146dc5400

UClass * __cdecl Z_Construct_UClass_UNavigationPathGenerator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationPathGenerator",
               &Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton,
               UNavigationPathGenerator::StaticRegisterNativesUNavigationPathGenerator,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationPathGenerator>,
               InternalVTableHelperCtorCaller<UNavigationPathGenerator>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationPathGenerator.InnerSingleton;
}

// Z_Construct_UClass_UNavigationSystemModuleConfig_NoRegister @ 146dc54c0

UClass * __cdecl Z_Construct_UClass_UNavigationSystemModuleConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationSystemModuleConfig",
               &Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton,
               UNavigationSystemModuleConfig::StaticRegisterNativesUNavigationSystemModuleConfig,
               0x60,8,CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationSystemModuleConfig>,
               InternalVTableHelperCtorCaller<UNavigationSystemModuleConfig>,local_res8,
               UNavigationSystemConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemModuleConfig.InnerSingleton;
}

// Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister @ 146dc5580

UClass * __cdecl Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"RecastFilter_UseDefaultArea",
               &Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton,
               URecastFilter_UseDefaultArea::StaticRegisterNativesURecastFilter_UseDefaultArea,0x48,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URecastFilter_UseDefaultArea>,
               InternalVTableHelperCtorCaller<URecastFilter_UseDefaultArea>,local_res8,
               UNavigationQueryFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.InnerSingleton;
}

// Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags @ 146dc5640

UEnum * __cdecl Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags(void)

{
  if (Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.InnerSingleton,
               &Z_Construct_UEnum_NavigationSystem_ELinkGenerationDebugFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELinkGenerationDebugFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNavGraphEdge @ 146dc5680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavGraphEdge(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavGraphEdge.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavGraphEdge.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavGraphEdge_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavGraphEdge.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavGraphEdge.InnerSingleton;
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

// ExecHandler'' @ 1503e0950

void __cdecl `dynamic_atexit_destructor_for_'UNavigationSystemV1::ExecHandler__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec
            ((FSelfRegisteringExec *)&UNavigationSystemV1::ExecHandler);
  return;
}

// NavigationDirtyEvent'' @ 1503e0970

void __cdecl `dynamic_atexit_destructor_for_'UNavigationSystemV1::NavigationDirtyEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UNavigationSystemV1::NavigationDirtyEvent._8_8_,
             UNavigationSystemV1::NavigationDirtyEvent._16_4_);
  if (UNavigationSystemV1::NavigationDirtyEvent._8_8_ != 0) {
    FMemory::Free((void *)UNavigationSystemV1::NavigationDirtyEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UNavigationSystemV1::NavigationDirtyEvent);
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_TriggerAsyncQueries'' @ 1503e09b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_TriggerAsyncQueries__(void)

{
  CPrio_TriggerAsyncQueries.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CPrio_TriggerAsyncQueries.Variable)
  ;
  if (CPrio_TriggerAsyncQueries.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_TriggerAsyncQueries.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_TriggerAsyncQueries.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_TriggerAsyncQueries.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDestroyNavDataInCleanUpAndMarkPendingKill'' @ 1503e0a00

void __cdecl
UE::Navigation::Private::
_dynamic_atexit_destructor_for__CVarDestroyNavDataInCleanUpAndMarkPendingKill__(void)

{
  CVarDestroyNavDataInCleanUpAndMarkPendingKill._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDestroyNavDataInCleanUpAndMarkPendingKill);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxDirtyAreasCountWhileSuspended'' @ 1503e0a20

void __cdecl
UE::Navigation::Private::_dynamic_atexit_destructor_for__CVarMaxDirtyAreasCountWhileSuspended__
          (void)

{
  CVarMaxDirtyAreasCountWhileSuspended._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxDirtyAreasCountWhileSuspended);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNavCollisionAvailable'' @ 1503e0a40

void __cdecl _dynamic_atexit_destructor_for__CVarNavCollisionAvailable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNavCollisionAvailable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRollbackNavigationComponentShouldWaitForActorToRegister'' @ 1503e0a60

void __cdecl
UE::Navigation::Private::
_dynamic_atexit_destructor_for__CVarRollbackNavigationComponentShouldWaitForActorToRegister__(void)

{
  CVarRollbackNavigationComponentShouldWaitForActorToRegister._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRollbackNavigationComponentShouldWaitForActorToRegister);
  return;
}

// `dynamic_atexit_destructor_for_'CmdDumpOctreeElements'' @ 1503e0a80

void __cdecl UE::Navigation::Private::_dynamic_atexit_destructor_for__CmdDumpOctreeElements__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdDumpOctreeElements);
  return;
}

// `dynamic_atexit_destructor_for_'CmdDumpRepositoryElements'' @ 1503e0aa0

void __cdecl
UE::Navigation::Private::_dynamic_atexit_destructor_for__CmdDumpRepositoryElements__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdDumpRepositoryElements);
  return;
}

// `dynamic_atexit_destructor_for_'CmdLogInvokers'' @ 1503e0ac0

void __cdecl UE::Navigation::Private::_dynamic_atexit_destructor_for__CmdLogInvokers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdLogInvokers);
  return;
}

// `dynamic_atexit_destructor_for_'CmdNavDirtyAreaAroundPlayer'' @ 1503e0ae0

void __cdecl
UE::Navigation::Private::_dynamic_atexit_destructor_for__CmdNavDirtyAreaAroundPlayer__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdNavDirtyAreaAroundPlayer);
  return;
}

// `dynamic_atexit_destructor_for_'ConsoleVariables'' @ 1503e0b00

void __cdecl UE::NavigationOctree::Private::_dynamic_atexit_destructor_for__ConsoleVariables__(void)

{
  ConsoleVariables[0]._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)ConsoleVariables);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultAgent'' @ 1503e0b20

void __cdecl
`UNavigationSystemV1::GetDefaultSupportedAgent'::__l2::
_dynamic_atexit_destructor_for__DefaultAgent__(void)

{
  if (DefaultAgent.NavDataClass.SoftObjectPtr._24_8_ != 0) {
    FMemory::Free((void *)DefaultAgent.NavDataClass.SoftObjectPtr._24_8_);
  }
  if (DefaultAgent._padding_ != 0) {
    FMemory::Free((void *)DefaultAgent._padding_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultAgent'' @ 1503e0b60

void __cdecl
`UNavigationSystemV1::GetDefaultSupportedAgentConfig'::__l2::
_dynamic_atexit_destructor_for__DefaultAgent__(void)

{
  if (DefaultAgent.NavDataClass.SoftObjectPtr._24_8_ != 0) {
    FMemory::Free((void *)DefaultAgent.NavDataClass.SoftObjectPtr._24_8_);
  }
  if (DefaultAgent._padding_ != 0) {
    FMemory::Free((void *)DefaultAgent._padding_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultAgent'' @ 1503e0ba0

void __cdecl
`UNavigationSystemV1::GetBiggestSupportedAgent'::__l18::
_dynamic_atexit_destructor_for__DefaultAgent__(void)

{
  if (DefaultAgent.NavDataClass.SoftObjectPtr._24_8_ != 0) {
    FMemory::Free((void *)DefaultAgent.NavDataClass.SoftObjectPtr._24_8_);
  }
  if (DefaultAgent._padding_ != 0) {
    FMemory::Free((void *)DefaultAgent._padding_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FallbackNavDataConfig'' @ 1503e0be0

void __cdecl
`UE::Navigation::Private::GetFallbackNavDataConfig'::__l2::
_dynamic_atexit_destructor_for__FallbackNavDataConfig__(void)

{
  if (FallbackNavDataConfig.NavDataClass.SoftObjectPtr._24_8_ != 0) {
    FMemory::Free((void *)FallbackNavDataConfig.NavDataClass.SoftObjectPtr._24_8_);
  }
  if (FallbackNavDataConfig._padding_ != 0) {
    FMemory::Free((void *)FallbackNavDataConfig._padding_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogNavOctree'' @ 1503e0c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavOctree__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavOctree);
  return;
}

// `dynamic_atexit_destructor_for_'LogNavigationDirtyArea'' @ 1503e0c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNavigationDirtyArea__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNavigationDirtyArea);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_NavInvokers'' @ 1503e0c60

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NavInvokers__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NavInvokers.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NavInvokers.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_NavInvokers.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_NavTasks'' @ 1503e0c80

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NavTasks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NavTasks.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NavTasks.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_NavTasks.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_NavTasksDelays'' @ 1503e0ca0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NavTasksDelays__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NavTasksDelays.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NavTasksDelays.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_NavTasksDelays.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_NavigationBuildDetailed'' @ 1503e0cc0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NavigationBuildDetailed__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NavigationBuildDetailed.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NavigationBuildDetailed.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_NavigationBuildDetailed.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_NavigationSystem'' @ 1503e0ce0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NavigationSystem__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NavigationSystem.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NavigationSystem.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_NavigationSystem.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

