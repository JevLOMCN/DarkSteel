// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 534

// DumpDataLayersCommand'' @ 14115cd80

void __cdecl `dynamic_initializer_for_'UDataLayerManager::DumpDataLayersCommand__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_25>_>
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"wp.Runtime.DumpDataLayers",
                      L"Dumps data layers to the log",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&UDataLayerManager::DumpDataLayersCommand,pIVar5);
  UDataLayerManager::DumpDataLayersCommand._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(`dynamic_atexit_destructor_for_'UDataLayerManager::DumpDataLayersCommand__);
  return;
}

// SetDataLayerRuntimeStateCommand'' @ 14115cf10

void __cdecl `dynamic_initializer_for_'UDataLayerManager::SetDataLayerRuntimeStateCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  wchar_t *pwVar3;
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pwVar3 = L"";
  if (GSetDataLayerRuntimeStateCommandCommandName.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)GSetDataLayerRuntimeStateCommandCommandName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UDataLayerManager::SetDataLayerRuntimeStateCommand,pwVar3,
             L"Sets Runtime DataLayers state. Args [State = Unloaded, Loaded, Activated] [DataLayerNames]"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(`dynamic_atexit_destructor_for_'UDataLayerManager::SetDataLayerRuntimeStateCommand__);
  return;
}

// ToggleDataLayerActivation'' @ 14115d050

void __cdecl `dynamic_initializer_for_'UDataLayerManager::ToggleDataLayerActivation__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  wchar_t *pwVar3;
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pwVar3 = L"";
  if (GToggleDataLayerActivationCommandName.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)GToggleDataLayerActivationCommandName.Data.AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UDataLayerManager::ToggleDataLayerActivation,pwVar3,
             L"Toggles DataLayers active state. Args [DataLayerNames]",
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
  atexit(`dynamic_atexit_destructor_for_'UDataLayerManager::ToggleDataLayerActivation__);
  return;
}

// `dynamic_initializer_for_'CVarWorldPartitionHLODForceDisableShadows'' @ 14115d190

void __cdecl _dynamic_initializer_for__CVarWorldPartitionHLODForceDisableShadows__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWorldPartitionHLODForceDisableShadows,L"wp.Runtime.HLOD.ForceDisableShadows",
             &GWorldPartitionHLODForceDisableShadows,
             L"Force disable CastShadow flag on World Partition HLOD actors",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarWorldPartitionHLODForceDisableShadows__);
  return;
}

// `dynamic_initializer_for_'GActorGuids'' @ 14115d1e0

void __cdecl _dynamic_initializer_for__GActorGuids__(void)

{
  atexit(_dynamic_atexit_destructor_for__GActorGuids__);
  return;
}

// `dynamic_initializer_for_'GLevelInstanceGuids'' @ 14115d200

void __cdecl _dynamic_initializer_for__GLevelInstanceGuids__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLevelInstanceGuids__);
  return;
}

// `dynamic_initializer_for_'GSetDataLayerRuntimeStateCommandCommandName'' @ 14115d220

void __cdecl _dynamic_initializer_for__GSetDataLayerRuntimeStateCommandCommandName__(void)

{
  FString::FString(&GSetDataLayerRuntimeStateCommandCommandName,
                   L"wp.Runtime.SetDataLayerRuntimeState");
  atexit(_dynamic_atexit_destructor_for__GSetDataLayerRuntimeStateCommandCommandName__);
  return;
}

// `dynamic_initializer_for_'GToggleDataLayerActivationCommandName'' @ 14115d250

void __cdecl _dynamic_initializer_for__GToggleDataLayerActivationCommandName__(void)

{
  FString::FString(&GToggleDataLayerActivationCommandName,L"wp.Runtime.ToggleDataLayerActivation");
  atexit(_dynamic_atexit_destructor_for__GToggleDataLayerActivationCommandName__);
  return;
}

// `dynamic_initializer_for_'LogContentBundle'' @ 14115d280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogContentBundle__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogContentBundle,L"LogContentBundle",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogContentBundle__);
  return;
}

// `dynamic_initializer_for_'LogHLODDestruction'' @ 14115d2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHLODDestruction__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogHLODDestruction,L"LogHLODDestruction",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHLODDestruction__);
  return;
}

// `dynamic_initializer_for_'LogHLODHash'' @ 14115d300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHLODHash__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHLODHash,L"LogHLODHash",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHLODHash__);
  return;
}

// `dynamic_initializer_for_'LogWorldComposition'' @ 14115d340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWorldComposition__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWorldComposition,L"LogWorldComposition",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWorldComposition__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14115d380

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged'' @ 14115d3a0

void __cdecl _dynamic_initializer_for__NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged__(void)

{
  FName::FName(&NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged,
               L"OnDataLayerRuntimeStateChanged");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h__Script_Engine_656685192'' @ 14115d3c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h__Script_Engine_656685192__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h__Script_Engine_2306090684'' @ 14115d400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h__Script_Engine_2306090684__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h__Script_Engine_2368281328'' @ 14115d440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h__Script_Engine_2368281328__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h__Script_Engine_3835162137'' @ 14115d480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h__Script_Engine_3835162137__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleClient_h__Script_Engine_2673473479'' @ 14115d4c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleClient_h__Script_Engine_2673473479__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleClient_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h__Script_Engine_217727516'' @ 14115d510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h__Script_Engine_217727516__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h__Script_Engine_1800328135'' @ 14115d550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h__Script_Engine_1800328135__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h__Script_Engine_3789145912'' @ 14115d590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h__Script_Engine_3789145912__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h__Script_Engine_3785662539'' @ 14115d5d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h__Script_Engine_3785662539__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleTypeFactory_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h__Script_Engine_1199321950'' @ 14115d610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h__Script_Engine_1199321950__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h__Script_Engine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h__Script_Engine_3295244867'' @ 14115d650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h__Script_Engine_3295244867__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Cook_WorldPartitionCookPackageInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h__Script_Engine_986426888'' @ 14115d690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h__Script_Engine_986426888__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h__Script_Engine_1070284572'' @ 14115d6e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h__Script_Engine_1070284572__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h__Script_Engine_2260845838'' @ 14115d720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h__Script_Engine_2260845838__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceProviderInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h__Script_Engine_129815305'' @ 14115d760

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h__Script_Engine_129815305__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h__Script_Engine_3152300066'' @ 14115d7a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h__Script_Engine_3152300066__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h__Script_Engine_501754228'' @ 14115d7f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h__Script_Engine_501754228__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h__Script_Engine_239178593'' @ 14115d830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h__Script_Engine_239178593__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h__Script_Engine_3659182789'' @ 14115d870

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h__Script_Engine_3659182789__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h__Script_Engine_2932063323'' @ 14115d8b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h__Script_Engine_2932063323__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h__Script_Engine_3611812272'' @ 14115d900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h__Script_Engine_3611812272__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h__Script_Engine_3431797836'' @ 14115d940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h__Script_Engine_3431797836__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h__Script_Engine_1104053445'' @ 14115d980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h__Script_Engine_1104053445__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h__Script_Engine_429742310'' @ 14115d9c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h__Script_Engine_429742310__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInstance_h__Script_Engine_3733509939'' @ 14115da00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInstance_h__Script_Engine_3733509939__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInstance_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h__Script_Engine_1246563734'' @ 14115da40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h__Script_Engine_1246563734__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerUID_h__Script_Engine_2074708146'' @ 14115da80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerUID_h__Script_Engine_2074708146__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerUID_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h__Script_Engine_24939521'' @ 14115dac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h__Script_Engine_24939521__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Filter_WorldPartitionActorFilter_h__Script_Engine_1772931373'' @ 14115db10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Filter_WorldPartitionActorFilter_h__Script_Engine_1772931373__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_Filter_WorldPartitionActorFilter_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h__Script_Engine_632417990'' @ 14115db50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h__Script_Engine_632417990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h__Script_Engine_3230267798'' @ 14115db90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h__Script_Engine_3230267798__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_CustomHLODPlaceholderActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h__Script_Engine_3560666699'' @ 14115dbd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h__Script_Engine_3560666699__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h__Script_Engine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h__Script_Engine_1355967049'' @ 14115dc20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h__Script_Engine_1355967049__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h__Script_Engine_161675686'' @ 14115dc70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h__Script_Engine_161675686__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState @ 148a26120

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister @ 148a261a0

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayer",
               &Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton,
               UDEPRECATED_DataLayer::StaticRegisterNativesUDEPRECATED_DataLayer,0x58,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_DataLayer>,
               InternalVTableHelperCtorCaller<UDEPRECATED_DataLayer>,local_res8,UObject::StaticClass
               ,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_DataLayer.InnerSingleton;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel @ 148a26260

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames @ 148a262e0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsRecursive_SetBit @ 148a263e0

void __cdecl
Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::
NewProp_bInIsRecursive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState @ 148a26430

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerInstanceRuntimeState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsRecursive_SetBit @ 148a264b0

void __cdecl
Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::
NewProp_bInIsRecursive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState @ 148a26560

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsRecursive_SetBit @ 148a265a0

void __cdecl
Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::
NewProp_bInIsRecursive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel @ 148a265b0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState @ 148a265f0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UExternalDataLayerInstance @ 148a266c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerInstance(void)

{
  if (Z_Registration_Info_UClass_UExternalDataLayerInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UExternalDataLayerInstance.OuterSingleton,
               &Z_Construct_UClass_UExternalDataLayerInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerInstance.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel @ 148a267a0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWorldPartitionCookPackageObject @ 148a26a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionCookPackageObject(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionCookPackageObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.OuterSingleton;
}

// Z_Construct_UClass_UDEPRECATED_DataLayer @ 148a26ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_DataLayer(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_DataLayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_DataLayer.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_DataLayer.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EDataLayerRuntimeState @ 148a26b00

UEnum * __cdecl Z_Construct_UEnum_Engine_EDataLayerRuntimeState(void)

{
  if (Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EDataLayerState @ 148a26b40

UEnum * __cdecl Z_Construct_UEnum_Engine_EDataLayerState(void)

{
  if (Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDataLayerState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton;
}

// EDataLayerState_StaticEnum @ 148a26b80

UEnum * __cdecl EDataLayerState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerState,(UObject *)pUVar1,L"EDataLayerState"
                      );
  }
  return Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton;
}

// Z_Construct_UClass_UExternalDataLayerManager @ 148a26bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerManager(void)

{
  if (Z_Registration_Info_UClass_UExternalDataLayerManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UExternalDataLayerManager.OuterSingleton,
               &Z_Construct_UClass_UExternalDataLayerManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerManager.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 148a26c00

void __cdecl
Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals @ 148a26c10

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel @ 148a26c60

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148a26eb0

void * __thiscall
FNetFastTArrayBaseState::_scalar_deleting_destructor_(FNetFastTArrayBaseState *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->IDToCLMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->IDToCLMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IDToCLMap);
  this->_padding_ = (longlong)&___7INetDeltaBaseState__6B_;
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
    ::operator_delete(this,0x78);
  }
  return this;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor @ 148a26f40

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState @ 148a26f80

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState @ 148a27080

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a270c0

void __cdecl
Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded @ 148a270d0

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a27110

void __cdecl
Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible @ 148a27130

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a27190

void __cdecl
Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UDeprecatedDataLayerInstance @ 148a271d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDeprecatedDataLayerInstance(void)

{
  if (Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.OuterSingleton,
               &Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.OuterSingleton;
}

// Z_Construct_UClass_UDataLayerAsset_NoRegister @ 148a27210

UClass * __cdecl Z_Construct_UClass_UDataLayerAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerAsset",
               &Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton,
               UDataLayerAsset::StaticRegisterNativesUDataLayerAsset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerAsset>,
               InternalVTableHelperCtorCaller<UDataLayerAsset>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerAsset.InnerSingleton;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive @ 148a272d0

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a27310

void __cdecl
Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible @ 148a273e0

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a27460

void __cdecl
Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 148a27470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(void_*,FFastArrayDeltaSerializeParams_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(void_*,FFastArrayDeltaSerializeParams_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEAXAEBUFFastArrayDeltaSerializeParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime @ 148a274b0

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148a27530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(void_*,FFastArrayDeltaSerializeParams_const_&,unsigned_int),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(void_*,FFastArrayDeltaSerializeParams_const_&,unsigned_int),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEAXAEBUFFastArrayDeltaSerializeParams__I_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 148a27570

void __cdecl
Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UExternalDataLayerAsset @ 148a27580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerAsset(void)

{
  if (Z_Registration_Info_UClass_UExternalDataLayerAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UExternalDataLayerAsset.OuterSingleton,
               &Z_Construct_UClass_UExternalDataLayerAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FExternalDataLayerUID @ 148a275c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FExternalDataLayerUID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FExternalDataLayerUID.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FExternalDataLayerUID.InnerSingleton,
               &Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FExternalDataLayerUID.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FExternalDataLayerUID.InnerSingleton;
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

// Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible @ 148a27680

UFunction * __cdecl Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UExternalDataLayerAsset_NoRegister @ 148a276c0

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerAsset",
               &Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton,
               UExternalDataLayerAsset::StaticRegisterNativesUExternalDataLayerAsset,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UExternalDataLayerAsset>
               ,InternalVTableHelperCtorCaller<UExternalDataLayerAsset>,local_res8,
               UDataLayerAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerAsset.InnerSingleton;
}

// NewProp_bIsRuntime_SetBit @ 148a27840

void __cdecl
Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsRuntime_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 1;
  return;
}

// Z_Construct_UClass_UDataLayerManager @ 148a27b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataLayerManager(void)

{
  if (Z_Registration_Info_UClass_UDataLayerManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataLayerManager.OuterSingleton,
               &Z_Construct_UClass_UDataLayerManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataLayerManager.OuterSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature @ 148a27b60

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnDataLayerInstanceRuntimeStateChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 148a27ba0

void * __cdecl Z_Construct_UScriptStruct_FExternalDataLayerUID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FExternalDataLayerUID,&UE::CoreUObject::Private::Construct<FExternalDataLayerUID>,&UE::CoreUObject::Private::ConstructForTests<FExternalDataLayerUID>,&UE::CoreUObject::Private::Destruct<FExternalDataLayerUID>,&UE::CoreUObject::Private::Copy<FExternalDataLayerUID>,&UE::CoreUObject::Private::GetStructTypeHash<FExternalDataLayerUID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState @ 148a27be0

UFunction * __cdecl
Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceEffectiveRuntimeState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset @ 148a27c20

UFunction * __cdecl Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName @ 148a27c60

UFunction * __cdecl Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceFromName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDataLayerAsset @ 148a27ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataLayerAsset(void)

{
  if (Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton,
               &Z_Construct_UClass_UDataLayerAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EDataLayerLoadFilter @ 148a27ce0

UEnum * __cdecl Z_Construct_UEnum_Engine_EDataLayerLoadFilter(void)

{
  if (Z_Registration_Info_UEnum_EDataLayerLoadFilter.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataLayerLoadFilter.InnerSingleton,
               &Z_Construct_UEnum_Engine_EDataLayerLoadFilter_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataLayerLoadFilter.InnerSingleton;
}

// EDataLayerLoadFilter_StaticEnum @ 148a27d80

UEnum * __cdecl EDataLayerLoadFilter_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerLoadFilter,(UObject *)pUVar1,
                       L"EDataLayerLoadFilter");
  }
  return Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState @ 148a27e50

UFunction * __cdecl Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstanceRuntimeState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerAsset_GetDebugColor @ 148a28170

UFunction * __cdecl Z_Construct_UFunction_UDataLayerAsset_GetDebugColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148a28270

void * __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FActorInstanceGuid,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// Z_Construct_UFunction_UDataLayerAsset_GetType @ 148a282f0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerAsset_GetType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a28330

void __cdecl
Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerAsset_IsClientOnly @ 148a283e0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerAsset_IsClientOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a28420

void __cdecl
Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerAsset_IsRuntime @ 148a28430

UFunction * __cdecl Z_Construct_UFunction_UDataLayerAsset_IsRuntime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a28470

void __cdecl
Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerAsset_IsServerOnly @ 148a28480

UFunction * __cdecl Z_Construct_UFunction_UDataLayerAsset_IsServerOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UExternalDataLayerInstance_NoRegister @ 148a284c0

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerInstance",
               &Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton,
               UExternalDataLayerInstance::StaticRegisterNativesUExternalDataLayerInstance,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UExternalDataLayerInstance>,
               InternalVTableHelperCtorCaller<UExternalDataLayerInstance>,local_res8,
               UDataLayerInstanceWithAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerInstance.InnerSingleton;
}

// NewProp_bSupportsActorFilters_SetBit @ 148a28580

void __cdecl
Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_bSupportsActorFilters_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UClass_UDataLayerManager_NoRegister @ 148a28650

UClass * __cdecl Z_Construct_UClass_UDataLayerManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerManager",
               &Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton,
               UDataLayerManager::StaticRegisterNativesUDataLayerManager,0x90,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerManager>,
               InternalVTableHelperCtorCaller<UDataLayerManager>,local_res8,UObject::StaticClass,
               UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerManager.InnerSingleton;
}

// Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances @ 148a28880

UFunction * __cdecl Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerManager_GetDataLayerInstances_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsRecursive_SetBit @ 148a288c0

void __cdecl
Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::
NewProp_bInIsRecursive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148a288d0

void __cdecl
Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState @ 148a288e0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerManager_SetDataLayerInstanceRuntimeState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsRecursive_SetBit @ 148a28920

void __cdecl
Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::
NewProp_bInIsRecursive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148a28930

void __cdecl
Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState @ 148a28940

UFunction * __cdecl Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerManager_SetDataLayerRuntimeState_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148a28c10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 148a28c40

void * __cdecl Z_Construct_UScriptStruct_FWorldPartitionActorFilter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionActorFilter,&UE::CoreUObject::Private::Construct<FWorldPartitionActorFilter>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionActorFilter>,&UE::CoreUObject::Private::Destruct<FWorldPartitionActorFilter>,&UE::CoreUObject::Private::Copy<FWorldPartitionActorFilter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDataLayerInstance @ 148a28d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataLayerInstance(void)

{
  if (Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton,
               &Z_Construct_UClass_UDataLayerInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton;
}

// EDataLayerRuntimeState_StaticEnum @ 148a28d70

UEnum * __cdecl EDataLayerRuntimeState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerRuntimeState,(UObject *)pUVar1,
                       L"EDataLayerRuntimeState");
  }
  return Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton;
}

// EOverrideBlockOnSlowStreaming_StaticEnum @ 148a28db0

UEnum * __cdecl EOverrideBlockOnSlowStreaming_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EOverrideBlockOnSlowStreaming,(UObject *)pUVar1,
                       L"EOverrideBlockOnSlowStreaming");
  }
  return Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.OuterSingleton;
}

// EContentBundleClientState_StaticEnum @ 148a28fc0

UEnum * __cdecl EContentBundleClientState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleClientState,(UObject *)pUVar1,
                       L"EContentBundleClientState");
  }
  return Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148a29020

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// EWorldContentState_StaticEnum @ 148a29110

UEnum * __cdecl EWorldContentState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldContentState,(UObject *)pUVar1,
                       L"EWorldContentState");
  }
  return Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerInstance_GetAsset @ 148a29150

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_GetAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148a29540

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UDataLayerManager::<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName @ 148a29570

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName @ 148a295b0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerInstance_GetDebugColor @ 148a295f0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_GetDebugColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState @ 148a296f0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWorldPartitionHLOD @ 148a29730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionHLOD(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionHLOD_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton;
}

// EExportHLODMeshOrigin_StaticEnum @ 148a29770

UEnum * __cdecl EExportHLODMeshOrigin_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EExportHLODMeshOrigin.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EExportHLODMeshOrigin.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EExportHLODMeshOrigin,(UObject *)pUVar1,
                       L"EExportHLODMeshOrigin");
  }
  return Z_Registration_Info_UEnum_EExportHLODMeshOrigin.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerInstance_GetType @ 148a297b0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_GetType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a297f0

void __cdecl
Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 148a29800

void * __cdecl Z_Construct_UScriptStruct_FExportHLODAssetsParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FExportHLODAssetsParams,&UE::CoreUObject::Private::Construct<FExportHLODAssetsParams>,&UE::CoreUObject::Private::ConstructForTests<FExportHLODAssetsParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UDataLayerInstance_IsClientOnly @ 148a29840

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_IsClientOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a29880

void __cdecl
Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible @ 148a29890

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a298f0

void __cdecl
Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 148a29900

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetFastTArrayBaseState,SharedPointerInternals::DefaultDeleter<FNetFastTArrayBaseState>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNetFastTArrayBaseState,SharedPointerInternals::DefaultDeleter<FNetFastTArrayBaseState>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewProp_bRequireWarmup_SetBit @ 148a29940

void __cdecl
Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible @ 148a29950

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a29990

void __cdecl
Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerInstance_IsRuntime @ 148a299a0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_IsRuntime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a299e0

void __cdecl
Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerInstance_IsServerOnly @ 148a299f0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_IsServerOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a29a30

void __cdecl
Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UDataLayerInstance_IsVisible @ 148a29af0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerInstance_IsVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 148a29be0

void * __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FLevelInstanceGuid,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// Z_Construct_UClass_UExternalDataLayerEngineSubsystem @ 148a29ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerEngineSubsystem(void)

{
  if (Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.OuterSingleton,
               &Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UDataLayerInstancePrivate @ 148a29f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataLayerInstancePrivate(void)

{
  if (Z_Registration_Info_UClass_UDataLayerInstancePrivate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataLayerInstancePrivate.OuterSingleton,
               &Z_Construct_UClass_UDataLayerInstancePrivate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataLayerInstancePrivate.OuterSingleton;
}

// Z_Construct_UClass_UDataLayerInstanceProvider @ 148a2a040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataLayerInstanceProvider(void)

{
  if (Z_Registration_Info_UClass_UDataLayerInstanceProvider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataLayerInstanceProvider.OuterSingleton,
               &Z_Construct_UClass_UDataLayerInstanceProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataLayerInstanceProvider.OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionBlueprintLibrary @ 148a2a080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FActorDesc @ 148a2a0c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorDesc.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorDesc.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorDesc.InnerSingleton;
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

// NewProp_bIsSpatiallyLoaded_SetBit @ 148a2a140

void __cdecl
Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bIsSpatiallyLoaded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewProp_bActorIsEditorOnly_SetBit @ 148a2a150

void __cdecl
Z_Construct_UScriptStruct_FActorDesc_Statics::NewProp_bActorIsEditorOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x89) = 1;
  return;
}

// NewStructOps @ 148a2a160

void * __cdecl Z_Construct_UScriptStruct_FActorDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorDesc,&UE::CoreUObject::Private::Construct<FActorDesc>,&UE::CoreUObject::Private::ConstructForTests<FActorDesc>,&UE::CoreUObject::Private::Destruct<FActorDesc>,&UE::CoreUObject::Private::Copy<FActorDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDataLayerInstanceWithAsset @ 148a2a1a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataLayerInstanceWithAsset(void)

{
  if (Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton,
               &Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton;
}

// Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent @ 148a2a1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
      OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
                OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent_Statics
                ::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
         OuterSingleton;
}

// Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent @ 148a2a220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent(void)

{
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton,
               &Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FActorInstanceMappingsRef @ 148a2a260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorInstanceMappingsRef(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorInstanceMappingsRef.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorInstanceMappingsRef.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorInstanceMappingsRef_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorInstanceMappingsRef.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorInstanceMappingsRef.InnerSingleton;
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

// Z_Construct_UScriptStruct_FComponentInstanceMapping @ 148a2a2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComponentInstanceMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComponentInstanceMapping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComponentInstanceMapping.InnerSingleton,
               &Z_Construct_UScriptStruct_FComponentInstanceMapping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComponentInstanceMapping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComponentInstanceMapping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FHLODInstancingPackedMappingData @ 148a2a360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHLODInstancingPackedMappingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHLODInstancingPackedMappingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHLODInstancingPackedMappingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FHLODInstancingPackedMappingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHLODInstancingPackedMappingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHLODInstancingPackedMappingData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState @ 148a2a3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState @ 148a2a460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODState.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODState.InnerSingleton;
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

// NewStructOps @ 148a2a4e0

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionDestructibleHLODDamagedActorState,&UE::CoreUObject::Private::Construct<FWorldPartitionDestructibleHLODDamagedActorState>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionDestructibleHLODDamagedActorState>,&UE::CoreUObject::Private::Destruct<FWorldPartitionDestructibleHLODDamagedActorState>,&UE::CoreUObject::Private::Copy<FWorldPartitionDestructibleHLODDamagedActorState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UContentBundleDescriptor @ 148a2a520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UContentBundleDescriptor(void)

{
  if (Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton,
               &Z_Construct_UClass_UContentBundleDescriptor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton;
}

// Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister @ 148a2a610

UClass * __cdecl Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerLoadingPolicy",
               &Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton,
               UDataLayerLoadingPolicy::StaticRegisterNativesUDataLayerLoadingPolicy,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerLoadingPolicy>
               ,InternalVTableHelperCtorCaller<UDataLayerLoadingPolicy>,local_res8,
               UObject::StaticClass,UDataLayerManager::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerLoadingPolicy.InnerSingleton;
}

// NewStructOps @ 148a2a7f0

void * __cdecl
Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWorldPartitionDestructibleHLODState,&UE::CoreUObject::Private::Construct<FWorldPartitionDestructibleHLODState>,&UE::CoreUObject::Private::ConstructForTests<FWorldPartitionDestructibleHLODState>,&UE::CoreUObject::Private::Destruct<FWorldPartitionDestructibleHLODState>,&UE::CoreUObject::Private::NetDeltaSerialize<FWorldPartitionDestructibleHLODState>,&UE::CoreUObject::Private::Copy<FWorldPartitionDestructibleHLODState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDataLayerLoadingPolicy @ 148a2a830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataLayerLoadingPolicy(void)

{
  if (Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton,
               &Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton;
}

// Z_Construct_UClass_UContentBundleUnsavedActorMonitor @ 148a2a880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UContentBundleUnsavedActorMonitor(void)

{
  if (Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton,
               &Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton;
}

// NewStructOps @ 148a2a8c0

void * __cdecl Z_Construct_UScriptStruct_FComponentInstanceMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComponentInstanceMapping,&UE::CoreUObject::Private::Construct<FComponentInstanceMapping>,&UE::CoreUObject::Private::ConstructForTests<FComponentInstanceMapping>,&UE::CoreUObject::Private::Destruct<FComponentInstanceMapping>,&UE::CoreUObject::Private::Copy<FComponentInstanceMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UContentBundleTypeFactory_NoRegister @ 148a2a900

UClass * __cdecl Z_Construct_UClass_UContentBundleTypeFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleTypeFactory",
               &Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton,
               UContentBundleTypeFactory::StaticRegisterNativesUContentBundleTypeFactory,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UContentBundleTypeFactory>,
               InternalVTableHelperCtorCaller<UContentBundleTypeFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleTypeFactory.InnerSingleton;
}

// NewStructOps @ 148a2aa60

void * __cdecl Z_Construct_UScriptStruct_FActorInstanceMappingsRef_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorInstanceMappingsRef,&UE::CoreUObject::Private::Construct<FActorInstanceMappingsRef>,&UE::CoreUObject::Private::ConstructForTests<FActorInstanceMappingsRef>,&UE::CoreUObject::Private::Destruct<FActorInstanceMappingsRef>,&UE::CoreUObject::Private::Copy<FActorInstanceMappingsRef>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UContentBundleEngineSubsystem @ 148a2ab60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UContentBundleEngineSubsystem(void)

{
  if (Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton,
               &Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton;
}

// NewStructOps @ 148a2aba0

void * __cdecl
Z_Construct_UScriptStruct_FHLODInstancingPackedMappingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHLODInstancingPackedMappingData,&UE::CoreUObject::Private::Construct<FHLODInstancingPackedMappingData>,&UE::CoreUObject::Private::ConstructForTests<FHLODInstancingPackedMappingData>,&UE::CoreUObject::Private::Destruct<FHLODInstancingPackedMappingData>,&UE::CoreUObject::Private::Copy<FHLODInstancingPackedMappingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 148a2aca0

void __cdecl
Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_AWorldPartitionCustomHLOD @ 148a2acb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionCustomHLOD(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionCustomHLOD_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.OuterSingleton;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs @ 148a2acf0

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 148a2ad30

void __cdecl
Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescsForActors_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescsForActors @ 148a2ad40

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescsForActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetActorDescsForActors_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UExternalDataLayerInjectionPolicy @ 148a2ad80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerInjectionPolicy(void)

{
  if (Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.OuterSingleton,
               &Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.OuterSingleton;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetDataLayerManager @ 148a2adc0

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetDataLayerManager(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetDataLayerManager_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWorldComposition @ 148a2ae00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWorldComposition(void)

{
  if (Z_Registration_Info_UClass_UWorldComposition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWorldComposition.OuterSingleton,
               &Z_Construct_UClass_UWorldComposition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWorldComposition.OuterSingleton;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds @ 148a2ae40

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetEditorWorldBounds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLoadAllTilesDuringCinematic_SetBit @ 148a2ae80

void __cdecl
Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bRebaseOriginIn3DSpace_SetBit @ 148a2ae90

void __cdecl
Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 148a2af60

void __cdecl
Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs @ 148a2b030

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetIntersectingActorDescs_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds @ 148a2b070

UFunction * __cdecl
Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_GetRuntimeWorldBounds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder @ 148a2b0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder(void)

{
  if (Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.OuterSingleton,
               &Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.OuterSingleton;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors @ 148a2b0f0

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_LoadActors_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors @ 148a2b130

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_PinActors_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors @ 148a2b170

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnloadActors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors @ 148a2b1b0

UFunction * __cdecl Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWorldPartitionBlueprintLibrary_UnpinActors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWorldDataLayers @ 148a2b1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWorldDataLayers(void)

{
  if (Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton,
               &Z_Construct_UClass_AWorldDataLayers_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWorldDataLayers.OuterSingleton;
}

// NewStructOps @ 148a2b230

void * __cdecl Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorPlacementDataLayers,&UE::CoreUObject::Private::Construct<FActorPlacementDataLayers>,&UE::CoreUObject::Private::ConstructForTests<FActorPlacementDataLayers>,&UE::CoreUObject::Private::Destruct<FActorPlacementDataLayers>,&UE::CoreUObject::Private::Copy<FActorPlacementDataLayers>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDataLayerInstance_NoRegister @ 148a2b270

UClass * __cdecl Z_Construct_UClass_UDataLayerInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstance",
               &Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton,
               UDataLayerInstance::StaticRegisterNativesUDataLayerInstance,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerInstance>,
               InternalVTableHelperCtorCaller<UDataLayerInstance>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton;
}

// Z_Construct_UClass_UDataLayerSubsystem @ 148a2b320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataLayerSubsystem(void)

{
  if (Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton,
               &Z_Construct_UClass_UDataLayerSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature @ 148a2b360

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged @ 148a2b3a0

UFunction * __cdecl Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWorldDataLayers_OnDataLayerRuntimeStateChanged_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames @ 148a2b490

UFunction * __cdecl Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWorldDataLayers_OnRep_ActiveDataLayerNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister @ 148a2b4d0

UClass * __cdecl Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleHLODComponent",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton,
               UWorldPartitionDestructibleHLODComponent::
               StaticRegisterNativesUWorldPartitionDestructibleHLODComponent,0x440,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleHLODComponent>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleHLODComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton;
}

// Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames @ 148a2b5d0

UFunction * __cdecl Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveActiveDataLayerNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames @ 148a2b650

UFunction * __cdecl Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWorldDataLayers_OnRep_EffectiveLoadedDataLayerNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames @ 148a2b690

UFunction * __cdecl Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWorldDataLayers_OnRep_LoadedDataLayerNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames @ 148a2b6d0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UContentBundleTypeFactory @ 148a2b710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UContentBundleTypeFactory(void)

{
  if (Z_Registration_Info_UClass_UContentBundleTypeFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UContentBundleTypeFactory.OuterSingleton,
               &Z_Construct_UClass_UContentBundleTypeFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UContentBundleTypeFactory.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer @ 148a2b750

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState @ 148a2b840

UFunction * __cdecl
Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UActorDescContainer @ 148a2b880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorDescContainer(void)

{
  if (Z_Registration_Info_UClass_UActorDescContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorDescContainer.OuterSingleton,
               &Z_Construct_UClass_UActorDescContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorDescContainer.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel @ 148a2b8c0

UFunction * __cdecl
Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel @ 148a2b900

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UActorDescContainerInstance @ 148a2b940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorDescContainerInstance(void)

{
  if (Z_Registration_Info_UClass_UActorDescContainerInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorDescContainerInstance.OuterSingleton,
               &Z_Construct_UClass_UActorDescContainerInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorDescContainerInstance.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName @ 148a2b980

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState @ 148a2b9c0

UFunction * __cdecl
Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceEffectiveRuntimeState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UContentBundleDuplicateForPIEHelper @ 148a2ba00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UContentBundleDuplicateForPIEHelper(void)

{
  if (Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton,
               &Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton;
}

// Z_Construct_UClass_UContentBundleManager @ 148a2ba40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UContentBundleManager(void)

{
  if (Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton,
               &Z_Construct_UClass_UContentBundleManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset @ 148a2bb40

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceFromAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState @ 148a2bba0

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerInstanceRuntimeState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UActorDescContainerSubsystem @ 148a2bc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorDescContainerSubsystem(void)

{
  if (Z_Registration_Info_UClass_UActorDescContainerSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorDescContainerSubsystem.OuterSingleton,
               &Z_Construct_UClass_UActorDescContainerSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorDescContainerSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState @ 148a2bf20

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel @ 148a2bf60

UFunction * __cdecl Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// operator<<<FWorldCompositionTile,TSizedDefaultAllocator<32>_> @ 148a2c160

FArchive * __cdecl
operator<<<FWorldCompositionTile,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FWorldCompositionTile,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 200);
  iVar11 = 0;
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
      DestructItems<FWorldCompositionTile,int>
                ((FWorldCompositionTile *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
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
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
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
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 200;
              pFVar7 = (FArchive *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar10);
              FWorldTileInfo::StreamArchive((FWorldTileInfo *)(pFVar10 + 0x18),pFVar7);
              TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
                        (pFVar7,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar10 + 8));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FWorldCompositionTile,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x8c8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 200;
              DefaultConstructItems<FWorldCompositionTile,int>(pFVar10,1);
              pFVar7 = (FArchive *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar10);
              FWorldTileInfo::StreamArchive((FWorldTileInfo *)(pFVar10 + 0x18),pFVar7);
              TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
                        (pFVar7,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar10 + 8));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
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

// CastChecked<UContentBundleManager,UObject> @ 148a2e550

UContentBundleManager * __cdecl CastChecked<UContentBundleManager,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UContentBundleManager>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UContentBundleManager::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UContentBundleManager *)param_1;
  }
  pFVar3 = GetTypeName<UContentBundleManager>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UExternalDataLayerAsset,UDataLayerAsset_const_> @ 148a2e610

UExternalDataLayerAsset * __cdecl
CastChecked<UExternalDataLayerAsset,UDataLayerAsset_const_>(UDataLayerAsset *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UDataLayerAsset *)0x0) {
    pFVar3 = GetTypeName<UExternalDataLayerAsset>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UExternalDataLayerAsset::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UExternalDataLayerAsset *)param_1;
  }
  pFVar3 = GetTypeName<UExternalDataLayerAsset>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UDataLayerAsset_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UExternalDataLayerInstance,UDataLayerInstance> @ 148a2e6d0

UExternalDataLayerInstance * __cdecl
CastChecked<UExternalDataLayerInstance,UDataLayerInstance>(UDataLayerInstance *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UDataLayerInstance *)0x0) {
    pFVar3 = GetTypeName<UExternalDataLayerInstance>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UExternalDataLayerInstance::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UExternalDataLayerInstance *)param_1;
  }
  pFVar3 = GetTypeName<UExternalDataLayerInstance>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UDataLayerInstance>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<FWorldTileLODInfo,int> @ 148a2e790

bool __cdecl
CompareItems<FWorldTileLODInfo,int>
          (FWorldTileLODInfo *param_1,FWorldTileLODInfo *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(int *)(lVar1 + (longlong)param_2) != param_2->RelativeStreamingDistance) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TObjectPtr<UHLODInstancedStaticMeshComponent>,TObjectPtr<UHLODInstancedStaticMeshComponent>,int> @ 148a2e890

void __cdecl
ConstructItems<TObjectPtr<UHLODInstancedStaticMeshComponent>,TObjectPtr<UHLODInstancedStaticMeshComponent>,int>
          (void *param_1,TObjectPtr<UHLODInstancedStaticMeshComponent> *param_2,int param_3)

{
  TObjectPtr<UHLODInstancedStaticMeshComponent> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UHLODInstancedStaticMeshComponent>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UHLODInstancedStaticMeshComponent>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UHLODInstancedStaticMeshComponent *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UHLODInstancedStaticMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWorldCompositionTile,FWorldCompositionTile,int> @ 148a2e8f0

void __cdecl
ConstructItems<FWorldCompositionTile,FWorldCompositionTile,int>
          (void *param_1,FWorldCompositionTile *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FWorldCompositionTile *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->LODPackageNames;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined8 *)((longlong)(pTVar5 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar5->ArrayNum;
      _Src = (pTVar5->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 3);
      }
      FWorldTileInfo::FWorldTileInfo((FWorldTileInfo *)(pFVar4 + 2),(FWorldTileInfo *)(pTVar5 + 1));
      pFVar3 = (FWorldCompositionTile *)(pTVar5 + 0xc);
      pFVar4[0x17].Data = *(FScriptContainerElement **)((longlong)(pTVar5 + 0xb) + 8);
      pFVar4 = pFVar4 + 0x19;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODDamagedActorState,int> @ 148a2e9f0

void __cdecl
ConstructItems<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODDamagedActorState,int>
          (void *param_1,FWorldPartitionDestructibleHLODDamagedActorState *param_2,int param_3)

{
  longlong lVar1;
  uchar *puVar2;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 8;
    puVar2 = &param_2->ActorHealth;
    do {
      *(undefined4 *)(puVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = 0xffffffff;
      *(undefined8 *)(lVar1 + -4) = 0xffffffffffffffff;
      *(int *)(lVar1 + 4) = *(int *)(puVar2 + -4);
      *(uchar *)(lVar1 + 8) = *puVar2;
      param_3 = param_3 + -1;
      lVar1 = lVar1 + 0x14;
      puVar2 = puVar2 + 0x14;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FWorldCompositionTile,int> @ 148a2ebd0

void __cdecl DefaultConstructItems<FWorldCompositionTile,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      FWorldTileInfo::FWorldTileInfo((FWorldTileInfo *)(puVar1 + 2));
      puVar1[0x17] = 0;
      puVar1 = puVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FWorldPartitionDestructibleHLODDamagedActorState,int> @ 148a2ec30

void __cdecl
DefaultConstructItems<FWorldPartitionDestructibleHLODDamagedActorState,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      *(undefined1 *)(puVar1 + 1) = 0xff;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FActorDesc,int> @ 148a2ecf0

void __cdecl DestructItems<FActorDesc,int>(FActorDesc *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->DataLayerAssets;
    do {
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((FName *)(pTVar2 + -8) + 1) != (void *)0x0) {
        FMemory::Free(*(void **)((FName *)(pTVar2 + -8) + 1));
      }
      pTVar2 = pTVar2 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPackageNameAndLODIndex,int> @ 148a2ed60

void __cdecl
DestructItems<FPackageNameAndLODIndex,int>(FPackageNameAndLODIndex *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PackageName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FWorldCompositionTile,int> @ 148a2eda0

void __cdecl DestructItems<FWorldCompositionTile,int>(FWorldCompositionTile *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->Info).ParentTilePackageName;
    do {
      pFVar1 = (((TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FWorldTileLayer *)(pFVar2 + -3))->Name).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pFVar2 + -9) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + -9));
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 0xc) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FContentBundleClient,1>,int> @ 148a2ee10

void __cdecl
DestructItems<TSharedPtr<FContentBundleClient,1>,int>
          (TSharedPtr<FContentBundleClient,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,int> @ 148a2ee50

void __cdecl
DestructItems<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,int>
          (TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_> *param_1,int param_2)

{
  FContentBundle *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FContentBundle *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int> @ 148a2ee90

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
DestructItems<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int>
          (TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *param_1,
          int param_2)

{
  FContentBundleContainer *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  do {
    if (param_2 == 0) {
      return;
    }
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FContentBundleContainer *)0x0) {
      if (((pFVar1->ContentBundles).ArrayNum != 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("GetGameContentBundles().IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleContainer.cpp"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      DestructItems<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,int>
                ((TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_> *)
                 (pFVar1->ContentBundles).AllocatorInstance.Data,(pFVar1->ContentBundles).ArrayNum);
      pFVar2 = (pFVar1->ContentBundles).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x18);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

// Enqueue<TRenderCommandTag<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::TSTR_FUpdateHLODVisibilityTexture285>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 148a30730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture_::__l11::TSTR_FUpdateHLODVisibilityTexture285>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::TSTR_FUpdateHLODVisibilityTexture285>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_148a30881;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_148a30a75;
  }
LAB_148a30881:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_148a3095f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148a3095f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
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
LAB_148a30a75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,1,1,`AWorldPartitionHLOD::PreRegisterAllComponents'::__l5::<lambda_1>_> @ 148a337c0

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
ForEachComponent_Internal<UPrimitiveComponent,1,1,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l5::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
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
  TObjectPtr<UClass>_u_0 local_190;
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
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_148a338e0;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a338e0:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar15 = *puVar19;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar15 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_148a3397f;
      uVar15 = puVar19[iStack_178];
    }
    uStack_174 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_198 = (int)lVar14;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_148a3397f:
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar18 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar18 = puVar7;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar20 = uVar20 + 0x20;
      uVar15 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_148a33a80;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_194 = (int)lVar14;
    uVar15 = local_194 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_148a33a80:
  do {
    pTVar10 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar9 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar10 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar9.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UPrimitiveComponent,1,1,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l5::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    this_00 = *(UPrimitiveComponent **)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (this_00 != (UPrimitiveComponent *)0x0) {
      UPrimitiveComponent::SetCastShadow(this_00,false);
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1a0 = *(longlong *)&this_00->field_0x258, local_1a0 != 0)
         ) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar14 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar14 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,1,0,`AWorldPartitionHLOD::PreRegisterAllComponents'::__l5::<lambda_1>_> @ 148a33cf0

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
ForEachComponent_Internal<UPrimitiveComponent,1,0,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l5::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UPrimitiveComponent *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  lVar10 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar10 == 0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar10 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar8->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  pUVar8 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar8 != pUVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar9 != (UClass *)0x0) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_148a33df2;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_148a33df2:
  iVar13 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148a33e7d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (int)lVar10 + -1 + iVar15;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148a33e7d:
  uVar12 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar13);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar15;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar12 != uVar6) {
    puVar14 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148a33f81;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_148a33f81:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar12) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(UPrimitiveComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (this_00 != (UPrimitiveComponent *)0x0) {
      UPrimitiveComponent::SetCastShadow(this_00,false);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ForEachComponent_Internal<UPrimitiveComponent,0,1,`AWorldPartitionHLOD::PreRegisterAllComponents'::__l5::<lambda_1>_> @ 148a34000

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
ForEachComponent_Internal<UPrimitiveComponent,0,1,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l5::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UPrimitiveComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
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
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_148a340f0;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a340f0:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_148a341a1;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_148a341a1:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_148a342b0;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar19 = local_1a4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_148a342b0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UPrimitiveComponent,0,1,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l5::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    this_00 = *(UPrimitiveComponent **)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (this_00 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        UPrimitiveComponent::SetCastShadow(this_00,false);
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1b0 = *(longlong *)&this_00->field_0x258, local_1b0 != 0)
         ) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UPrimitiveComponent,0,0,`AWorldPartitionHLOD::PreRegisterAllComponents'::__l5::<lambda_1>_> @ 148a34530

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
ForEachComponent_Internal<UPrimitiveComponent,0,0,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l5::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UPrimitiveComponent *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar11->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar11->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar3 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_148a3460a;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_148a3460a:
  iVar13 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar9 = 1;
  iVar15 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 0x20;
      iVar10 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_148a34692;
      uVar12 = puVar16[iVar13];
    }
    uVar9 = ~(uVar12 - 1) & uVar12;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar10 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_148a34692:
  uVar12 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar13);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar12 != uVar9) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar14 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar14 = puVar5;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      uVar17 = uVar17 + 0x20;
      uVar12 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar13) goto LAB_148a347a0;
      uVar12 = *(uint *)(puVar14 + (longlong)iVar13 * 4);
    }
    uVar1 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar12 = (int)lVar6 + -1 + uVar17;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_148a347a0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    this_00 = *(UPrimitiveComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (this_00 != (UPrimitiveComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        UPrimitiveComponent::SetCastShadow(this_00,false);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,1,1,`AWorldPartitionCustomHLOD::SetVisibility'::__l2::<lambda_1>_> @ 148a34840

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
ForEachComponent_Internal<USceneComponent,1,1,_AWorldPartitionCustomHLOD::SetVisibility_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USceneComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
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
  TObjectPtr<UClass>_u_0 local_190;
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
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_148a34960;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a34960:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar15 = *puVar19;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar15 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_148a349ff;
      uVar15 = puVar19[iStack_178];
    }
    uStack_174 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_198 = (int)lVar14;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_148a349ff:
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar18 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar18 = puVar7;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar20 = uVar20 + 0x20;
      uVar15 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_148a34b00;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_194 = (int)lVar14;
    uVar15 = local_194 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_148a34b00:
  do {
    pTVar10 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar9 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar10 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar9.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USceneComponent,1,1,_AWorldPartitionCustomHLOD::SetVisibility_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    this_00 = *(USceneComponent **)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (this_00 != (USceneComponent *)0x0) {
      if (this_00->bVisible != param_2.bInVisible) {
        USceneComponent::SetVisibility(this_00,param_2.bInVisible,DirtyOnly);
      }
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1a0 = this_00[1]._padding_, local_1a0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar14 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar14 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,1,1,`AWorldPartitionHLOD::SetVisibility'::__l2::<lambda_1>_> @ 148a34d80

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
ForEachComponent_Internal<USceneComponent,1,1,_AWorldPartitionHLOD::SetVisibility_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USceneComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
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
  TObjectPtr<UClass>_u_0 local_190;
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
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_148a34ea0;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a34ea0:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar15 = *puVar19;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar15 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_148a34f3f;
      uVar15 = puVar19[iStack_178];
    }
    uStack_174 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_198 = (int)lVar14;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_148a34f3f:
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar18 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar18 = puVar7;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar20 = uVar20 + 0x20;
      uVar15 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_148a35040;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_194 = (int)lVar14;
    uVar15 = local_194 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_148a35040:
  do {
    pTVar10 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar9 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar10 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar9.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USceneComponent,1,1,_AWorldPartitionHLOD::SetVisibility_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    this_00 = *(USceneComponent **)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (this_00 != (USceneComponent *)0x0) {
      if (this_00->bVisible != param_2.bInVisible) {
        USceneComponent::SetVisibility(this_00,param_2.bInVisible,DirtyOnly);
      }
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1a0 = this_00[1]._padding_, local_1a0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar14 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar14 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,1,1,`AWorldPartitionHLOD::PreRegisterAllComponents'::__l11::<lambda_2>_> @ 148a352c0

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
ForEachComponent_Internal<USceneComponent,1,1,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l11::<lambda_2>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_2> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  AActor *this_00;
  code *pcVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
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
  TObjectPtr<UClass>_u_0 local_190;
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
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar14 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar14 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar12->_padding_)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar12 != pUVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar5 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar13->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_148a353e0;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a353e0:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar19 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar4;
    }
    uVar15 = *puVar19;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar15 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_148a3547f;
      uVar15 = puVar19[iStack_178];
    }
    uStack_174 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_198 = (int)lVar14;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_148a3547f:
  uVar15 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar20 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar15 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar18 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar18 = puVar7;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      iVar16 = iVar16 + 1;
      uVar20 = uVar20 + 0x20;
      uVar15 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_148a35580;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_194 = (int)lVar14;
    uVar15 = local_194 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_148a35580:
  do {
    pTVar10 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar9 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar10 == pTVar1)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar2) break;
        local_188 = (UObject *)(TVar9.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USceneComponent,1,1,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l11::<lambda_2>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    lVar14 = *(longlong *)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (lVar14 != 0) {
      *(byte *)(lVar14 + 0x1aa) = *(byte *)(lVar14 + 0x1aa) & 0xfe;
      pUVar12 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar12->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar12->_padding_)) && (local_1a0 = *(longlong *)(lVar14 + 600), local_1a0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar14 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar14 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,1,0,`AWorldPartitionCustomHLOD::SetVisibility'::__l2::<lambda_1>_> @ 148a357e0

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
ForEachComponent_Internal<USceneComponent,1,0,_AWorldPartitionCustomHLOD::SetVisibility_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USceneComponent *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar10 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar10 == 0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar10 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar8->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  pUVar8 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar8 != pUVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar9 != (UClass *)0x0) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_148a358e7;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_148a358e7:
  iVar12 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148a3596e;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar7 = local_res20 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148a3596e:
  uVar11 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148a35a80;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_148a35a80:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(USceneComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    if ((this_00 != (USceneComponent *)0x0) && (this_00->bVisible != param_2.bInVisible)) {
      USceneComponent::SetVisibility(this_00,param_2.bInVisible,DirtyOnly);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,1,0,`AWorldPartitionHLOD::SetVisibility'::__l2::<lambda_1>_> @ 148a35b10

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
ForEachComponent_Internal<USceneComponent,1,0,_AWorldPartitionHLOD::SetVisibility_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USceneComponent *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar10 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar10 == 0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar10 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar8->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  pUVar8 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar8 != pUVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar9 != (UClass *)0x0) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_148a35c17;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_148a35c17:
  iVar12 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148a35c9e;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar7 = local_res20 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148a35c9e:
  uVar11 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148a35db0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_148a35db0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(USceneComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    if ((this_00 != (USceneComponent *)0x0) && (this_00->bVisible != param_2.bInVisible)) {
      USceneComponent::SetVisibility(this_00,param_2.bInVisible,DirtyOnly);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,1,0,`AWorldPartitionHLOD::PreRegisterAllComponents'::__l11::<lambda_2>_> @ 148a35e40

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
ForEachComponent_Internal<USceneComponent,1,0,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l11::<lambda_2>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_2> param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  int iVar4;
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
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar4 * 8) !=
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
  pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar4 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar4 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_148a35f42;
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
LAB_148a35f42:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a35fcd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_148a35fcd:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar14);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar16;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a360d1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_148a360d1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_50.CurrentBitIndex == uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = *(longlong *)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (lVar11 != 0) {
      pbVar2 = (byte *)(lVar11 + 0x1aa);
      *pbVar2 = *pbVar2 & 0xfe;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,0,1,`AWorldPartitionCustomHLOD::SetVisibility'::__l2::<lambda_1>_> @ 148a36150

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
ForEachComponent_Internal<USceneComponent,0,1,_AWorldPartitionCustomHLOD::SetVisibility_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USceneComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
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
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_148a36240;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a36240:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_148a362f1;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_148a362f1:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_148a36400;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar19 = local_1a4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_148a36400:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USceneComponent,0,1,_AWorldPartitionCustomHLOD::SetVisibility_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    this_00 = *(USceneComponent **)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (this_00 != (USceneComponent *)0x0) {
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) && (this_00->bVisible != param_2.bInVisible)) {
        USceneComponent::SetVisibility(this_00,param_2.bInVisible,DirtyOnly);
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1b0 = this_00[1]._padding_, local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,0,1,`AWorldPartitionHLOD::SetVisibility'::__l2::<lambda_1>_> @ 148a366a0

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
ForEachComponent_Internal<USceneComponent,0,1,_AWorldPartitionHLOD::SetVisibility_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USceneComponent *this_00;
  AActor *this_01;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
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
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_148a36790;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a36790:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_148a36841;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_148a36841:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_148a36950;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar19 = local_1a4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_148a36950:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USceneComponent,0,1,_AWorldPartitionHLOD::SetVisibility_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    this_00 = *(USceneComponent **)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (this_00 != (USceneComponent *)0x0) {
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) && (this_00->bVisible != param_2.bInVisible)) {
        USceneComponent::SetVisibility(this_00,param_2.bInVisible,DirtyOnly);
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1b0 = this_00[1]._padding_, local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,0,1,`AWorldPartitionHLOD::PreRegisterAllComponents'::__l11::<lambda_2>_> @ 148a36bf0

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
ForEachComponent_Internal<USceneComponent,0,1,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l11::<lambda_2>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_2> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  AActor *this_00;
  code *pcVar8;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<AActor_*> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
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
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_148a36ce0;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a36ce0:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar19 = *puVar18;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar19 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_148a36d91;
      uVar19 = puVar18[iStack_180];
    }
    uStack_17c = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a8 = (int)lVar14;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_148a36d91:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar20 = uVar19 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar17 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar20 = uVar20 + 0x20;
      uVar19 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_148a36ea0;
      uVar19 = *(uint *)(puVar17 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a4 = (int)lVar14;
    uVar19 = local_1a4 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_148a36ea0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar10 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar19) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar9)
       ) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar1) break;
        local_190 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USceneComponent,0,1,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l11::<lambda_2>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    lVar14 = *(longlong *)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (lVar14 != 0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        *(byte *)(lVar14 + 0x1aa) = *(byte *)(lVar14 + 0x1aa) & 0xfe;
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar13->_padding_)) && (local_1b0 = *(longlong *)(lVar14 + 600), local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar14 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar14 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,0,0,`AWorldPartitionCustomHLOD::SetVisibility'::__l2::<lambda_1>_> @ 148a37120

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
ForEachComponent_Internal<USceneComponent,0,0,_AWorldPartitionCustomHLOD::SetVisibility_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  USceneComponent *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar3 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  iVar12 = (int)pUVar10->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar12) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar12 * 8) !=
      &pUVar10->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) {
    return;
  }
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar3 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar12 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar12) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_148a371f7;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_148a371f7:
  iVar13 = 0;
  iVar12 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  uVar8 = 1;
  iVar9 = 0;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 0x20;
      iVar9 = iVar12;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iVar13) goto LAB_148a37281;
      uVar17 = puVar16[iVar13];
    }
    uVar8 = ~(uVar17 - 1) & uVar17;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_res20 = (int)lVar5;
    iVar9 = local_res20 + -1 + iVar15;
    if (iVar12 < iVar9) {
      iVar9 = iVar12;
    }
LAB_148a37281:
    iVar11 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  }
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar17 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar8,iVar13);
  TStack_88.CurrentBitIndex = iVar9;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar15;
  uStack_68 = CONCAT44(uStack_94,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar8) {
    puVar4 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar14 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar14 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      iVar12 = iVar12 + 1;
      uVar18 = uVar18 + 0x20;
      uVar17 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar12) goto LAB_148a37390;
      uVar17 = *(uint *)(puVar14 + (longlong)iVar12 * 4);
    }
    uVar2 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar17 = (int)lVar5 + -1 + uVar18;
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = uVar8;
    }
  }
LAB_148a37390:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_88.CurrentBitIndex == uVar17) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(USceneComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_88.CurrentBitIndex * 0x10);
    if (this_00 != (USceneComponent *)0x0) {
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && (this_00->bVisible != param_2.bInVisible)) {
        USceneComponent::SetVisibility(this_00,param_2.bInVisible,DirtyOnly);
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,0,0,`AWorldPartitionHLOD::SetVisibility'::__l2::<lambda_1>_> @ 148a37450

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
ForEachComponent_Internal<USceneComponent,0,0,_AWorldPartitionHLOD::SetVisibility_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  USceneComponent *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar3 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 == (UClass *)0x0) {
    return;
  }
  iVar12 = (int)pUVar10->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar12) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar12 * 8) !=
      &pUVar10->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) {
    return;
  }
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar3 == 0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar12 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar12) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_148a37527;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_148a37527:
  iVar13 = 0;
  iVar12 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  uVar8 = 1;
  iVar9 = 0;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 0x20;
      iVar9 = iVar12;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iVar13) goto LAB_148a375b1;
      uVar17 = puVar16[iVar13];
    }
    uVar8 = ~(uVar17 - 1) & uVar17;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_res20 = (int)lVar5;
    iVar9 = local_res20 + -1 + iVar15;
    if (iVar12 < iVar9) {
      iVar9 = iVar12;
    }
LAB_148a375b1:
    iVar11 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  }
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar17 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar8,iVar13);
  TStack_88.CurrentBitIndex = iVar9;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar15;
  uStack_68 = CONCAT44(uStack_94,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar8) {
    puVar4 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar14 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar14 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      iVar12 = iVar12 + 1;
      uVar18 = uVar18 + 0x20;
      uVar17 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar12) goto LAB_148a376c0;
      uVar17 = *(uint *)(puVar14 + (longlong)iVar12 * 4);
    }
    uVar2 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar17 = (int)lVar5 + -1 + uVar18;
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = uVar8;
    }
  }
LAB_148a376c0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_88.CurrentBitIndex == uVar17) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(USceneComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_88.CurrentBitIndex * 0x10);
    if (this_00 != (USceneComponent *)0x0) {
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && (this_00->bVisible != param_2.bInVisible)) {
        USceneComponent::SetVisibility(this_00,param_2.bInVisible,DirtyOnly);
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,0,0,`AWorldPartitionHLOD::PreRegisterAllComponents'::__l11::<lambda_2>_> @ 148a37780

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
ForEachComponent_Internal<USceneComponent,0,0,_AWorldPartitionHLOD::PreRegisterAllComponents_::__l11::<lambda_2>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_2> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar11->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar11->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar11 != (UClass *)0x0) {
    iVar3 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_148a3785a;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_148a3785a:
  iVar13 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar9 = 1;
  iVar15 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 0x20;
      iVar10 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_148a378e2;
      uVar12 = puVar16[iVar13];
    }
    uVar9 = ~(uVar12 - 1) & uVar12;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar10 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_148a378e2:
  uVar12 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar13);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar12 != uVar9) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar14 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar14 = puVar5;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      uVar17 = uVar17 + 0x20;
      uVar12 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar13) goto LAB_148a379f0;
      uVar12 = *(uint *)(puVar14 + (longlong)iVar13 * 4);
    }
    uVar1 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar12 = (int)lVar6 + -1 + uVar17;
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
  }
LAB_148a379f0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    lVar6 = *(longlong *)
             (*(longlong *)&(this->OwnedComponents).Elements +
             (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (lVar6 != 0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        *(byte *)(lVar6 + 0x1aa) = *(byte *)(lVar6 + 0x1aa) & 0xfe;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,1,1,`AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 148a37a90

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
ForEachComponent_Internal<UStaticMeshComponent,1,1,_AWorldPartitionCustomHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
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
  UStaticMeshComponent *pUVar8;
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
  local_res18.AssetsToWarmup = param_2.AssetsToWarmup;
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
  pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar12) goto LAB_148a37bb3;
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
LAB_148a37bb3:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_148a37c4d;
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
LAB_148a37c4d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_148a37d50;
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
LAB_148a37d50:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.AssetsToWarmup = local_res18.AssetsToWarmup;
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
        ForEachComponent_Internal<UStaticMeshComponent,1,1,_AWorldPartitionCustomHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UStaticMeshComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UStaticMeshComponent *)0x0) {
      `AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()
                (&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UStaticMeshComponent,1,1,`AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 148a37fc0

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
ForEachComponent_Internal<UStaticMeshComponent,1,1,_AWorldPartitionHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
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
  UStaticMeshComponent *pUVar8;
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
  local_res18.AssetsToWarmup = param_2.AssetsToWarmup;
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
  pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar12) goto LAB_148a380e3;
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
LAB_148a380e3:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_148a3817d;
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
LAB_148a3817d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_148a38280;
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
LAB_148a38280:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.AssetsToWarmup = local_res18.AssetsToWarmup;
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
        ForEachComponent_Internal<UStaticMeshComponent,1,1,_AWorldPartitionHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UStaticMeshComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UStaticMeshComponent *)0x0) {
      `AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UStaticMeshComponent,1,1,`UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture'::__l17::<lambda_1>_> @ 148a384f0

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
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UStaticMeshComponent,1,1,_UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture_::__l17::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UStaticMeshComponent *this_00;
  UMaterialInterface *pUVar8;
  AActor *this_01;
  code *pcVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  UMaterialInterface *pUVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
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
  TObjectPtr<UClass>_u_0 local_190;
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
  lVar16 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar16 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar16 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar5 * 8) !=
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
  pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar12) goto LAB_148a3860f;
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
LAB_148a3860f:
  local_34 = 0x18;
  pTVar1 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar4 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar4;
    }
    uVar17 = *puVar21;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar17 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_148a386af;
      uVar17 = puVar21[iStack_178];
    }
    uStack_174 = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_198 = (int)lVar16;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_148a386af:
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar22 = uVar17 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar1;
  local_170 = puVar4;
  local_150 = pTVar1;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar4;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar22 = uVar22 + 0x20;
      uVar17 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar18) goto LAB_148a387b0;
      uVar17 = *(uint *)(puVar20 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_194 = (int)lVar16;
    uVar17 = local_194 + -1 + uVar22;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_148a387b0:
  do {
    pTVar11 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar10 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar17) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar11 == pTVar1)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar2) break;
        local_188 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UStaticMeshComponent,1,1,_UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture_::__l17::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    this_00 = *(UStaticMeshComponent **)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (this_00 != (UStaticMeshComponent *)0x0) {
      pUVar15 = UStaticMeshComponent::GetMaterial(this_00,0);
      if (((pUVar15 != (UMaterialInterface *)0x0) &&
          (pUVar8 = ((param_2.__this)->DestructibleHLODMaterial).field0_0x0.DebugPtr,
          pUVar8 != (UMaterialInterface *)0x0)) && (pUVar8 == pUVar15)) {
        (**(code **)(this_00->_padding_ + 0x6b8))
                  (this_00,0,((param_2.__this)->VisibilityMaterial).field0_0x0.DebugPtr);
      }
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = this_00->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
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
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar16 = (longlong)local_38;
        FVar19 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar19 + lVar16 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,1,0,`AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 148a38a50

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
ForEachComponent_Internal<UStaticMeshComponent,1,0,_AWorldPartitionCustomHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UStaticMeshComponent *pUVar4;
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
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.AssetsToWarmup;
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
  pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar6) goto LAB_148a38b56;
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
LAB_148a38b56:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a38bdd;
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
LAB_148a38bdd:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a38ce1;
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
LAB_148a38ce1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UStaticMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UStaticMeshComponent *)0x0) {
      `AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()
                (&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,1,0,`AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 148a38d60

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
ForEachComponent_Internal<UStaticMeshComponent,1,0,_AWorldPartitionHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UStaticMeshComponent *pUVar4;
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
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.AssetsToWarmup;
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
  pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar6) goto LAB_148a38e66;
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
LAB_148a38e66:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a38eed;
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
LAB_148a38eed:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a38ff1;
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
LAB_148a38ff1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UStaticMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UStaticMeshComponent *)0x0) {
      `AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,1,0,`UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture'::__l17::<lambda_1>_> @ 148a39070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UStaticMeshComponent,1,0,_UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture_::__l17::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UStaticMeshComponent *this_00;
  UMaterialInterface *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UMaterialInterface *pUVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar12 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar12 == 0) {
    return;
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar12 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar3 * 8) !=
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
  pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar6) goto LAB_148a39176;
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
LAB_148a39176:
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
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a391fe;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar8 = iVar16 + -1 + local_res20;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_148a391fe:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
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
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a39310;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_148a39310:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(UStaticMeshComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (((this_00 != (UStaticMeshComponent *)0x0) &&
        (pUVar11 = UStaticMeshComponent::GetMaterial(this_00,0),
        pUVar11 != (UMaterialInterface *)0x0)) &&
       ((pUVar4 = ((param_2.__this)->DestructibleHLODMaterial).field0_0x0.DebugPtr,
        pUVar4 != (UMaterialInterface *)0x0 && (pUVar4 == pUVar11)))) {
      (**(code **)(this_00->_padding_ + 0x6b8))
                (this_00,0,((param_2.__this)->VisibilityMaterial).field0_0x0.DebugPtr);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,0,1,`AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 148a393d0

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
ForEachComponent_Internal<UStaticMeshComponent,0,1,_AWorldPartitionCustomHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UStaticMeshComponent *pUVar8;
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
  local_res18.AssetsToWarmup = param_2.AssetsToWarmup;
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
  pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar13) goto LAB_148a394c3;
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
LAB_148a394c3:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_148a39570;
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
LAB_148a39570:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_148a39680;
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
LAB_148a39680:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.AssetsToWarmup = local_res18.AssetsToWarmup;
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
        ForEachComponent_Internal<UStaticMeshComponent,0,1,_AWorldPartitionCustomHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UStaticMeshComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UStaticMeshComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()
                  (&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UStaticMeshComponent,0,1,`AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 148a39910

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
ForEachComponent_Internal<UStaticMeshComponent,0,1,_AWorldPartitionHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UStaticMeshComponent *pUVar8;
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
  local_res18.AssetsToWarmup = param_2.AssetsToWarmup;
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
  pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar13) goto LAB_148a39a03;
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
LAB_148a39a03:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_148a39ab0;
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
LAB_148a39ab0:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_148a39bc0;
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
LAB_148a39bc0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.AssetsToWarmup = local_res18.AssetsToWarmup;
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
        ForEachComponent_Internal<UStaticMeshComponent,0,1,_AWorldPartitionHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UStaticMeshComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UStaticMeshComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UStaticMeshComponent,0,1,`UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture'::__l17::<lambda_1>_> @ 148a39e50

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
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UStaticMeshComponent,0,1,_UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture_::__l17::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ForElementType<AActor_*> FVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UStaticMeshComponent *this_00;
  UMaterialInterface *pUVar8;
  AActor *this_01;
  code *pcVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  UMaterialInterface *pUVar15;
  longlong lVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
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
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
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
  pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar13) goto LAB_148a39f3f;
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
LAB_148a39f3f:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar3 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar3;
    }
    uVar21 = *puVar20;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar21 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_148a39ff1;
      uVar21 = puVar20[iStack_180];
    }
    uStack_17c = ~(uVar21 - 1) & uVar21;
    uVar2 = (ulonglong)uStack_17c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_1a8 = (int)lVar16;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_148a39ff1:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar21 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar22 = uVar21 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar3;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar21 < 0) || (iVar4 < (int)uVar21)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar21 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar3;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      iVar17 = iVar17 + 1;
      uVar22 = uVar22 + 0x20;
      uVar21 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_148a3a100;
      uVar21 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar2 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_1a4 = (int)lVar16;
    uVar21 = local_1a4 + -1 + uVar22;
    if ((int)uVar5 < (int)uVar21) {
      uVar21 = uVar5;
    }
  }
LAB_148a3a100:
  do {
    pTVar12 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar11 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar21) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
       (pTVar12 == pTVar10)) {
      FVar18 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_48;
      }
      FVar1 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar18 == FVar1) break;
        local_190 = (UObject *)(TVar11.DebugPtr)->_padding_;
        this_01 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UStaticMeshComponent,0,1,_UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture_::__l17::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    this_00 = *(UStaticMeshComponent **)
               (*(longlong *)&pTVar12->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (this_00 != (UStaticMeshComponent *)0x0) {
      if ((((*(int *)(lVar6 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) &&
          (pUVar15 = UStaticMeshComponent::GetMaterial(this_00,0),
          pUVar15 != (UMaterialInterface *)0x0)) &&
         ((pUVar8 = ((param_2.__this)->DestructibleHLODMaterial).field0_0x0.DebugPtr,
          pUVar8 != (UMaterialInterface *)0x0 && (pUVar8 == pUVar15)))) {
        (**(code **)(this_00->_padding_ + 0x6b8))
                  (this_00,0,((param_2.__this)->VisibilityMaterial).field0_0x0.DebugPtr);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1b0 = this_00->_padding_, local_1b0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_48;
        }
        if ((ulonglong)FVar18 <= &local_1b0) {
          FVar18 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar18 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
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
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar16 = (longlong)local_40;
        FVar18 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar18 + lVar16 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UStaticMeshComponent,0,0,`AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 148a3a3b0

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
ForEachComponent_Internal<UStaticMeshComponent,0,0,_AWorldPartitionCustomHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UStaticMeshComponent *pUVar6;
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
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.AssetsToWarmup;
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
  pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar9) goto LAB_148a3a48e;
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
LAB_148a3a48e:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_148a3a51f;
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
LAB_148a3a51f:
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
      goto LAB_148a3a630;
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
LAB_148a3a630:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UStaticMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UStaticMeshComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AWorldPartitionCustomHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()
                  (&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,0,0,`AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>_> @ 148a3a6d0

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
ForEachComponent_Internal<UStaticMeshComponent,0,0,_AWorldPartitionHLOD::GetAssetsToWarmup_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UStaticMeshComponent *pUVar6;
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
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.AssetsToWarmup;
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
  pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
    if (bVar9) goto LAB_148a3a7ae;
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
LAB_148a3a7ae:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_148a3a83f;
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
LAB_148a3a83f:
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
      goto LAB_148a3a950;
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
LAB_148a3a950:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UStaticMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UStaticMeshComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AWorldPartitionHLOD::GetAssetsToWarmup'::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UStaticMeshComponent,0,0,`UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture'::__l17::<lambda_1>_> @ 148a3a9f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UStaticMeshComponent,0,0,_UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture_::__l17::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  UStaticMeshComponent *this_00;
  UMaterialInterface *pUVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  UMaterialInterface *pUVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar13->_padding_)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    return;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return;
  }
  pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar3 = (int)pUVar13->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar13->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_148a3aac6;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar10) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_148a3aac6:
  iVar15 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  uVar11 = 1;
  iVar17 = 0;
  iVar12 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar19 = *puVar18;
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 0x20;
      iVar12 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar15) goto LAB_148a3ab52;
      uVar19 = puVar18[iVar15];
    }
    uVar11 = ~(uVar19 - 1) & uVar19;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar12 = local_res20 + -1 + iVar17;
    if (iVar3 < iVar12) {
      iVar12 = iVar3;
    }
  }
LAB_148a3ab52:
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  TStack_88._padding_ = CONCAT44(uVar11,iVar15);
  uVar11 = uVar19 & 0xffffffe0;
  TStack_88.CurrentBitIndex = iVar12;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar17;
  uStack_68 = CONCAT44(uStack_94,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar4 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar4) {
    puVar6 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar16 = puVar1;
    if (puVar6 != (undefined1 *)0x0) {
      puVar16 = puVar6;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      iVar15 = iVar15 + 1;
      uVar11 = uVar11 + 0x20;
      uVar19 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar15) goto LAB_148a3ac60;
      uVar19 = *(uint *)(puVar16 + (longlong)iVar15 * 4);
    }
    uVar2 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar19 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar19) {
      uVar19 = uVar4;
    }
  }
LAB_148a3ac60:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_88.CurrentBitIndex == uVar19) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(UStaticMeshComponent **)
               (*(longlong *)&(this->OwnedComponents).Elements +
               (longlong)TStack_88.CurrentBitIndex * 0x10);
    if (this_00 != (UStaticMeshComponent *)0x0) {
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(this_00->_padding_ + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)) &&
         ((pUVar14 = UStaticMeshComponent::GetMaterial(this_00,0),
          pUVar14 != (UMaterialInterface *)0x0 &&
          ((pUVar7 = ((param_2.__this)->DestructibleHLODMaterial).field0_0x0.DebugPtr,
           pUVar7 != (UMaterialInterface *)0x0 && (pUVar7 == pUVar14)))))) {
        (**(code **)(this_00->_padding_ + 0x6b8))
                  (this_00,0,((param_2.__this)->VisibilityMaterial).field0_0x0.DebugPtr);
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// GetFullNameForCastLogError<UDataLayerAsset_const_> @ 148a3b000

FString * __cdecl
GetFullNameForCastLogError<UDataLayerAsset_const_>
          (FString *__return_storage_ptr__,UDataLayerAsset *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UDataLayerInstance> @ 148a3b030

FString * __cdecl
GetFullNameForCastLogError<UDataLayerInstance>
          (FString *__return_storage_ptr__,UDataLayerInstance *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UContentBundleManager> @ 148a3b0f0

FString * __cdecl GetTypeName<UContentBundleManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UContentBundleManager::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UExternalDataLayerAsset> @ 148a3b130

FString * __cdecl GetTypeName<UExternalDataLayerAsset>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UExternalDataLayerAsset::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UExternalDataLayerInstance> @ 148a3b170

FString * __cdecl GetTypeName<UExternalDataLayerInstance>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UExternalDataLayerInstance::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<UDataLayerInstance_const_*,int,FIdentityFunctor,TDereferenceWrapper<UDataLayerInstance_const_*,``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>_> @ 148a3b3b0

void __cdecl
AlgoImpl::
HeapSortInternal<UDataLayerInstance_const_*,int,FIdentityFunctor,TDereferenceWrapper<UDataLayerInstance_const_*,__UDataLayerManager::DrawDataLayersStatus_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
          (UDataLayerInstance **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UDataLayerInstance_const_*,_public:___cdecl__private:_void___cdecl_UDataLayerManager::DrawDataLayersStatus(UCanvas_*,UE::Math::TVector2<double>_&)const_::_2_::<lambda_1>::operator()(FString_const_&,FColor,FColor,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&)const_::_5_::<lambda_1>_>
          param_4)

{
  UDataLayerInstance *pUVar1;
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
LAB_148a3b4ce:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pUVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pUVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = ``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'
                          ::__l5::<lambda_1>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = ``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::
                        __l5::<lambda_1>::operator()
                                  (param_4.Predicate,param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pUVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pUVar1;
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
      bVar3 = ``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::__l5::
              <lambda_1>::operator()(param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = ``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::__l5::
            <lambda_1>::operator()(param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_148a3b4ce;
    pUVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pUVar1;
    iVar4 = iVar6;
  } while( true );
}

// InternalConstructor<AWorldDataLayers> @ 148a3b5b0

void __cdecl InternalConstructor<AWorldDataLayers>(FObjectInitializer *param_1)

{
  if ((AWorldDataLayers *)param_1->Obj != (AWorldDataLayers *)0x0) {
    AWorldDataLayers::AWorldDataLayers((AWorldDataLayers *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AWorldPartitionCustomHLOD> @ 148a3b5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWorldPartitionCustomHLOD>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&AWorldPartitionCustomHLOD::_vftable__for__AActor__;
    this[1]._padding_ =
         (longlong)&AWorldPartitionCustomHLOD::_vftable__for__IWorldPartitionHLODObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"RootComponent");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    pUVar4[10].field_0x1b = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this[1]._padding_);
    }
    (this->RootComponent).field0_0x0 = (TObjectPtr<USceneComponent>_u_0)this[1]._padding_;
  }
  return;
}

// InternalConstructor<AWorldPartitionCustomHLODPlaceholder> @ 148a3b6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWorldPartitionCustomHLODPlaceholder>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWorldPartitionCustomHLODPlaceholder__6B_;
    pFVar2 = FName::FName(&local_res8,L"Root");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar4 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// InternalConstructor<AWorldPartitionHLOD> @ 148a3b750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWorldPartitionHLOD>(FObjectInitializer *param_1)

{
  AActor *this;
  float fVar1;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&AWorldPartitionHLOD::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&AWorldPartitionHLOD::_vftable__for__IWorldPartitionHLODObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    AActor::SetCanBeDamaged(this,false);
    AActor::SetActorEnableCollision(this,false);
    fVar1 = __real_3f800000;
    this->bReplicates = '\x01';
    (this->NetDormancy).Value = '\x04';
    AActor::SetNetUpdateFrequency(this,fVar1);
    return;
  }
  return;
}

// InternalConstructor<UActorDescContainer> @ 148a3b7f0

void __cdecl InternalConstructor<UActorDescContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UActorDescContainer__6B_;
  }
  return;
}

// InternalConstructor<UActorDescContainerInstance> @ 148a3b820

void __cdecl InternalConstructor<UActorDescContainerInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UActorDescContainerInstance__6B_;
  }
  return;
}

// InternalConstructor<UActorDescContainerSubsystem> @ 148a3b850

void __cdecl InternalConstructor<UActorDescContainerSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UActorDescContainerSubsystem__6B_;
  }
  return;
}

// InternalConstructor<UContentBundleDescriptor> @ 148a3b880

void __cdecl InternalConstructor<UContentBundleDescriptor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UContentBundleDescriptor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(FColor_u_0 *)&this[1].field_0x10 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
    *(undefined8 *)&this[1].field_0x14 = 0;
    *(undefined8 *)&this[1].field_0x1c = 0;
  }
  return;
}

// InternalConstructor<UContentBundleDuplicateForPIEHelper> @ 148a3b8d0

void __cdecl InternalConstructor<UContentBundleDuplicateForPIEHelper>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UContentBundleDuplicateForPIEHelper__6B_;
  }
  return;
}

// InternalConstructor<UContentBundleEngineSubsystem> @ 148a3b900

void __cdecl InternalConstructor<UContentBundleEngineSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UContentBundleEngineSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 2;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 2;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 2;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[4].field_0x18,0);
    *(undefined8 *)&this[4].field_0x28 = 0;
  }
  return;
}

// InternalConstructor<UContentBundleManager> @ 148a3b9e0

void __cdecl InternalConstructor<UContentBundleManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UContentBundleManager__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UContentBundleTypeFactory> @ 148a3ba20

void __cdecl InternalConstructor<UContentBundleTypeFactory>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UContentBundleTypeFactory__6B_;
  }
  return;
}

// InternalConstructor<UContentBundleUnsavedActorMonitor> @ 148a3ba50

void __cdecl InternalConstructor<UContentBundleUnsavedActorMonitor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UContentBundleUnsavedActorMonitor__6B_;
  }
  return;
}

// InternalConstructor<UDEPRECATED_DataLayer> @ 148a3ba80

void __cdecl InternalConstructor<UDEPRECATED_DataLayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_DataLayer__6B_;
    *(undefined8 *)(this + 1) = *(undefined8 *)&this->field_0x18;
    *(uint *)&this[1].field_0x8 = *(uint *)&this[1].field_0x8 & 0xfffffffe;
    this[1].field_0xc = 0;
    *(FColor_u_0 *)&this[1].field_0x10 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent> @ 148a3bae0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
InternalConstructor<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent>
          (FObjectInitializer *param_1)

{
  UWorldPartitionDestructibleHLODComponent *this;
  
  this = (UWorldPartitionDestructibleHLODComponent *)param_1->Obj;
  if (this != (UWorldPartitionDestructibleHLODComponent *)0x0) {
    UWorldPartitionDestructibleHLODComponent::UWorldPartitionDestructibleHLODComponent(this,param_1)
    ;
    *(undefined ***)this =
         &UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
          _vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
          _vftable__for__IAsyncPhysicsStateProcessor__;
  }
  return;
}

// InternalConstructor<UDataLayerAsset> @ 148a3bb30

void __cdecl InternalConstructor<UDataLayerAsset>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
    ((FColor_u_0 *)((longlong)&this[1]._padding_ + 4))->_s_0 =
         (FColor_u_0_s_0)FColor::Black.field0_0x0;
  }
  return;
}

// InternalConstructor<UDataLayerInstance> @ 148a3bb70

void __cdecl InternalConstructor<UDataLayerInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDataLayerInstance__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UDataLayerInstancePrivate> @ 148a3bbc0

void __cdecl InternalConstructor<UDataLayerInstancePrivate>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined ***)this = &___7UDataLayerInstancePrivate__6B_;
    pFVar2 = FName::FName(&local_res8,L"DataLayerAsset");
    FVar1 = *pFVar2;
    pUVar3 = UDataLayerAsset::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject(this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&this[2].field_0x8 = pUVar4;
  }
  return;
}

// InternalConstructor<UDataLayerInstanceProvider> @ 148a3bc70

void __cdecl InternalConstructor<UDataLayerInstanceProvider>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UDataLayerInstanceProvider__6B_;
  }
  return;
}

// InternalConstructor<UDataLayerInstanceWithAsset> @ 148a3bca0

void __cdecl InternalConstructor<UDataLayerInstanceWithAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UDataLayerInstanceWithAsset__6B_;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UDataLayerLoadingPolicy> @ 148a3bcf0

void __cdecl InternalConstructor<UDataLayerLoadingPolicy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDataLayerLoadingPolicy__6B_;
  }
  return;
}

// InternalConstructor<UDataLayerManager> @ 148a3bd20

void __cdecl InternalConstructor<UDataLayerManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UDataLayerManager__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UDataLayerSubsystem> @ 148a3bd90

void __cdecl InternalConstructor<UDataLayerSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UDataLayerSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[2]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x30,0);
    return;
  }
  return;
}

// InternalConstructor<UDeprecatedDataLayerInstance> @ 148a3bdf0

void __cdecl InternalConstructor<UDeprecatedDataLayerInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UDeprecatedDataLayerInstance__6B_;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    this[2].field_0x8 = 1;
  }
  return;
}

// InternalConstructor<UExternalDataLayerAsset> @ 148a3be40

void __cdecl InternalConstructor<UExternalDataLayerAsset>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
    ((FColor_u_0 *)((longlong)&this[1]._padding_ + 4))->_s_0 =
         (FColor_u_0_s_0)FColor::Black.field0_0x0;
    this->_padding_ = (longlong)&___7UExternalDataLayerAsset__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UExternalDataLayerEngineSubsystem> @ 148a3bea0

void __cdecl InternalConstructor<UExternalDataLayerEngineSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    *(undefined ***)this = &UExternalDataLayerEngineSubsystem::_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) =
         &UExternalDataLayerEngineSubsystem::_vftable__for__FTickableGameObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[2].field_0x10 = 2;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x80;
    *(undefined4 *)&this[3].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x1c = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<UExternalDataLayerInjectionPolicy> @ 148a3bf60

void __cdecl InternalConstructor<UExternalDataLayerInjectionPolicy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UExternalDataLayerInjectionPolicy__6B_;
  }
  return;
}

// InternalConstructor<UExternalDataLayerInstance> @ 148a3bf90

void __cdecl InternalConstructor<UExternalDataLayerInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &___7UExternalDataLayerInstance__6B_;
  }
  return;
}

// InternalConstructor<UExternalDataLayerManager> @ 148a3bfe0

void __cdecl InternalConstructor<UExternalDataLayerManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0;
    *(undefined ***)this = &___7UExternalDataLayerManager__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UWorldComposition> @ 148a3c040

void __cdecl InternalConstructor<UWorldComposition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)&this[2].field_0x10 = 0;
    *(undefined ***)this = &___7UWorldComposition__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0x3ff0000000000000;
    *(undefined4 *)&this[2].field_0x14 = 0x48fffff0;
  }
  return;
}

// InternalConstructor<UWorldPartitionBlueprintLibrary> @ 148a3c0b0

void __cdecl InternalConstructor<UWorldPartitionBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionCookPackageObject> @ 148a3c0e0

void __cdecl InternalConstructor<UWorldPartitionCookPackageObject>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UWorldPartitionCookPackageObject__6B_;
  }
  return;
}

// InternalConstructor<UWorldPartitionDestructibleHLODComponent> @ 148a3c110

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
InternalConstructor<UWorldPartitionDestructibleHLODComponent>(FObjectInitializer *param_1)

{
  if ((UWorldPartitionDestructibleHLODComponent *)param_1->Obj !=
      (UWorldPartitionDestructibleHLODComponent *)0x0) {
    UWorldPartitionDestructibleHLODComponent::UWorldPartitionDestructibleHLODComponent
              ((UWorldPartitionDestructibleHLODComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<AWorldDataLayers> @ 148a3c130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWorldDataLayers>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AWorldDataLayers *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldDataLayers::GetPrivateStaticClass();
  pAVar3 = (AWorldDataLayers *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (AWorldDataLayers *)0x0) {
    pAVar3 = AWorldDataLayers::AWorldDataLayers(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionCustomHLOD> @ 148a3c1d0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AWorldPartitionCustomHLOD>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionCustomHLOD::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AWorldPartitionCustomHLOD::_vftable__for__AActor__;
    this[1]._padding_ =
         (longlong)&AWorldPartitionCustomHLOD::_vftable__for__IWorldPartitionHLODObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionCustomHLODPlaceholder> @ 148a3c2a0

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
InternalVTableHelperCtorCaller<AWorldPartitionCustomHLODPlaceholder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionCustomHLODPlaceholder::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWorldPartitionCustomHLODPlaceholder__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWorldPartitionHLOD> @ 148a3c350

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

UObject * __cdecl InternalVTableHelperCtorCaller<AWorldPartitionHLOD>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWorldPartitionHLOD::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AWorldPartitionHLOD::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&AWorldPartitionHLOD::_vftable__for__IWorldPartitionHLODObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorDescContainer> @ 148a3c430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UActorDescContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorDescContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UActorDescContainer__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorDescContainerInstance> @ 148a3c4e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UActorDescContainerInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorDescContainerInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UActorDescContainerInstance__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorDescContainerSubsystem> @ 148a3c590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UActorDescContainerSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorDescContainerSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UActorDescContainerSubsystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UContentBundleDescriptor> @ 148a3c640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UContentBundleDescriptor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UContentBundleDescriptor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UContentBundleDescriptor__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x14 = 0;
    *(undefined8 *)&pUVar1[1].field_0x1c = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UContentBundleDuplicateForPIEHelper> @ 148a3c700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UContentBundleDuplicateForPIEHelper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UContentBundleDuplicateForPIEHelper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UContentBundleDuplicateForPIEHelper__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UContentBundleEngineSubsystem> @ 148a3c7b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UContentBundleEngineSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UContentBundleEngineSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UContentBundleEngineSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 2;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 2;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 2;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[4].field_0x18,0);
    *(undefined8 *)&this[4].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UContentBundleManager> @ 148a3c900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UContentBundleManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UContentBundleManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UContentBundleManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UContentBundleTypeFactory> @ 148a3c9c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UContentBundleTypeFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UContentBundleTypeFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UContentBundleTypeFactory__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UContentBundleUnsavedActorMonitor> @ 148a3ca70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UContentBundleUnsavedActorMonitor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UContentBundleUnsavedActorMonitor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UContentBundleUnsavedActorMonitor__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_DataLayer> @ 148a3cb20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDEPRECATED_DataLayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_DataLayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDEPRECATED_DataLayer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent> @ 148a3cbe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionDestructibleHLODComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::GetPrivateStaticClass();
  this = (UWorldPartitionDestructibleHLODComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldPartitionDestructibleHLODComponent *)0x0) {
    UWorldPartitionDestructibleHLODComponent::UWorldPartitionDestructibleHLODComponent(this,param_1)
    ;
    *(undefined ***)this =
         &UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
          _vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
          _vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataLayerAsset> @ 148a3cca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataLayerAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataLayerAsset::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataLayerInstance> @ 148a3cd50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataLayerInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataLayerInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDataLayerInstance__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataLayerInstancePrivate> @ 148a3ce10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataLayerInstancePrivate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataLayerInstancePrivate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UDataLayerInstancePrivate__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataLayerInstanceProvider> @ 148a3cee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataLayerInstanceProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataLayerInstanceProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDataLayerInstanceProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataLayerInstanceWithAsset> @ 148a3cf90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDataLayerInstanceWithAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataLayerInstanceWithAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UDataLayerInstanceWithAsset__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataLayerLoadingPolicy> @ 148a3d050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataLayerLoadingPolicy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataLayerLoadingPolicy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDataLayerLoadingPolicy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataLayerManager> @ 148a3d100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataLayerManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataLayerManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDataLayerManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataLayerSubsystem> @ 148a3d1f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataLayerSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataLayerSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UDataLayerSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    this[2]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x30,0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDeprecatedDataLayerInstance> @ 148a3d2d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDeprecatedDataLayerInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDeprecatedDataLayerInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UDeprecatedDataLayerInstance__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UExternalDataLayerAsset> @ 148a3d390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UExternalDataLayerAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UExternalDataLayerAsset::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UExternalDataLayerAsset__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UExternalDataLayerEngineSubsystem> @ 148a3d440

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UExternalDataLayerEngineSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  UEngineSubsystem *pUVar3;
  
  pUVar3 = (UEngineSubsystem *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UExternalDataLayerEngineSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    *(undefined ***)this = &UExternalDataLayerEngineSubsystem::_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) =
         &UExternalDataLayerEngineSubsystem::_vftable__for__FTickableGameObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 2;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x80;
    *(undefined4 *)&this[3].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x1c = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined4 *)(this + 4) = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UExternalDataLayerInjectionPolicy> @ 148a3d570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UExternalDataLayerInjectionPolicy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UExternalDataLayerInjectionPolicy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UExternalDataLayerInjectionPolicy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UExternalDataLayerInstance> @ 148a3d620

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UExternalDataLayerInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UExternalDataLayerInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UExternalDataLayerInstance__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UExternalDataLayerManager> @ 148a3d6e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UExternalDataLayerManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UExternalDataLayerManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UExternalDataLayerManager__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldComposition> @ 148a3d7c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWorldComposition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldComposition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldComposition__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionBlueprintLibrary> @ 148a3d890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionCookPackageObject> @ 148a3d940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionCookPackageObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionCookPackageObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWorldPartitionCookPackageObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWorldPartitionDestructibleHLODComponent> @ 148a3d9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWorldPartitionDestructibleHLODComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldPartitionDestructibleHLODComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWorldPartitionDestructibleHLODComponent::GetPrivateStaticClass();
  pUVar3 = (UWorldPartitionDestructibleHLODComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWorldPartitionDestructibleHLODComponent *)0x0) {
    pUVar3 = UWorldPartitionDestructibleHLODComponent::UWorldPartitionDestructibleHLODComponent
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<UDataLayerInstance_const_*,int,FIdentityFunctor,TDereferenceWrapper<UDataLayerInstance_const_*,``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>_> @ 148a3da90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UDataLayerInstance_const_*,int,FIdentityFunctor,TDereferenceWrapper<UDataLayerInstance_const_*,__UDataLayerManager::DrawDataLayersStatus_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
          (UDataLayerInstance **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UDataLayerInstance_const_*,_public:___cdecl__private:_void___cdecl_UDataLayerManager::DrawDataLayersStatus(UCanvas_*,UE::Math::TVector2<double>_&)const_::_2_::<lambda_1>::operator()(FString_const_&,FColor,FColor,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&)const_::_5_::<lambda_1>_>
          param_4)

{
  UDataLayerInstance *pUVar1;
  bool bVar2;
  int iVar3;
  UDataLayerInstance **ppUVar4;
  UDataLayerInstance **ppUVar5;
  int iVar6;
  UDataLayerInstance ***pppUVar7;
  UDataLayerInstance **ppUVar8;
  UDataLayerInstance **ppUVar9;
  UDataLayerInstance **ppUVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  UDataLayerInstance **local_358;
  UDataLayerInstance **local_348;
  UDataLayerInstance **local_340;
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
    pppUVar7 = &local_348;
    do {
      ppUVar4 = pppUVar7[1];
      ppUVar5 = *pppUVar7;
      local_358 = pppUVar7[2];
      iVar3 = (int)((longlong)ppUVar4 - (longlong)ppUVar5 >> 3) + 1;
      ppUVar10 = ppUVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148a3db50:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppUVar8 = ppUVar4 + 1;
          pUVar1 = ppUVar10[iVar3 >> 1];
          ppUVar10[iVar3 >> 1] = *ppUVar10;
          *ppUVar10 = pUVar1;
          ppUVar5 = ppUVar10;
LAB_148a3db80:
          ppUVar5 = ppUVar5 + 1;
          if (ppUVar5 <= ppUVar4) goto code_r0x000148a3db89;
          goto LAB_148a3dba0;
        }
        for (; ppUVar8 = ppUVar10, ppUVar5 = ppUVar10, ppUVar10 < ppUVar4; ppUVar4 = ppUVar4 + -1) {
          while (ppUVar9 = ppUVar8, ppUVar5 = ppUVar5 + 1, ppUVar5 <= ppUVar4) {
            bVar2 = ``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::__l5
                    ::<lambda_1>::operator()(param_4.Predicate,*ppUVar9,*ppUVar5);
            ppUVar8 = ppUVar5;
            if (!bVar2) {
              ppUVar8 = ppUVar9;
            }
          }
          pUVar1 = *ppUVar9;
          *ppUVar9 = *ppUVar4;
          *ppUVar4 = pUVar1;
        }
        goto LAB_148a3dc66;
      }
LAB_148a3dc55:
      HeapSortInternal<UDataLayerInstance_const_*,int,FIdentityFunctor,TDereferenceWrapper<UDataLayerInstance_const_*,__UDataLayerManager::DrawDataLayersStatus_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>_>
                (ppUVar5,iVar3,param_3,param_4);
LAB_148a3dc66:
      pppUVar7 = pppUVar7 + -3;
    } while (&local_348 <= pppUVar7);
  }
  return;
code_r0x000148a3db89:
  bVar2 = ``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::__l5::
          <lambda_1>::operator()(param_4.Predicate,*ppUVar10,*ppUVar5);
  if (!bVar2) goto LAB_148a3db80;
LAB_148a3dba0:
  do {
    ppUVar9 = ppUVar8;
    ppUVar8 = ppUVar9 + -1;
    if (ppUVar8 <= ppUVar10) break;
    bVar2 = ``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::__l5::
            <lambda_1>::operator()(param_4.Predicate,*ppUVar8,*ppUVar10);
  } while (!bVar2);
  if (ppUVar5 <= ppUVar8) {
    pUVar1 = *ppUVar5;
    *ppUVar5 = *ppUVar8;
    *ppUVar8 = pUVar1;
    goto LAB_148a3db80;
  }
  pUVar1 = *ppUVar10;
  iVar6 = iVar6 + -1;
  *ppUVar10 = *ppUVar8;
  *ppUVar8 = pUVar1;
  if ((longlong)((longlong)ppUVar8 + (-8 - (longlong)ppUVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppUVar4 - (longlong)ppUVar5 & 0xfffffffffffffff8U)) {
    if (ppUVar5 < ppUVar4) {
      *pppUVar7 = ppUVar5;
      pppUVar7[1] = ppUVar4;
      *(int *)(pppUVar7 + 2) = iVar6;
      pppUVar7 = pppUVar7 + 3;
    }
    if (ppUVar8 <= ppUVar10 + 1) goto LAB_148a3dc66;
    ppUVar4 = ppUVar9 + -2;
    ppUVar5 = ppUVar10;
  }
  else {
    if (ppUVar10 + 1 < ppUVar8) {
      *pppUVar7 = ppUVar10;
      pppUVar7[1] = ppUVar9 + -2;
      *(int *)(pppUVar7 + 2) = iVar6;
      pppUVar7 = pppUVar7 + 3;
    }
    if (ppUVar4 <= ppUVar5) goto LAB_148a3dc66;
  }
  iVar3 = (int)((longlong)ppUVar4 - (longlong)ppUVar5 >> 3) + 1;
  ppUVar10 = ppUVar5;
  if (iVar6 == 0) goto LAB_148a3dc55;
  goto LAB_148a3db50;
}

// IsObjectPtrEqual<UExternalDataLayerAsset_const_,UExternalDataLayerAsset_const_*,0> @ 148a3dd30

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<UExternalDataLayerAsset_const_,UExternalDataLayerAsset_const_*,0>
          (TObjectPtr<UExternalDataLayerAsset_const_> *param_1,UExternalDataLayerAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UExternalDataLayerAsset *)0x0) {
    return *param_2 == (UExternalDataLayerAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UDataLayerInstance,UExternalDataLayerInstance_*,0> @ 148a3dd50

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UDataLayerInstance,UExternalDataLayerInstance_*,0>
          (TObjectPtr<UDataLayerInstance> *param_1,UExternalDataLayerInstance **param_2)

{
  if ((UExternalDataLayerInstance *)(param_1->field0_0x0).DebugPtr ==
      (UExternalDataLayerInstance *)0x0) {
    return *param_2 == (UExternalDataLayerInstance *)0x0;
  }
  return (UExternalDataLayerInstance *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UDataLayerInstance,UDataLayerInstance_const_*,0> @ 148a3dd70

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UDataLayerInstance,UDataLayerInstance_const_*,0>
          (TObjectPtr<UDataLayerInstance> *param_1,UDataLayerInstance **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UDataLayerInstance *)0x0) {
    return *param_2 == (UDataLayerInstance *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeShareable<FNetFastTArrayBaseState> @ 148a3dd90

TRawPtrProxy<FNetFastTArrayBaseState> __cdecl
MakeShareable<FNetFastTArrayBaseState>(FNetFastTArrayBaseState *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRawPtrProxy<FNetFastTArrayBaseState> TVar3;
  longlong in_RDX;
  
  if ((((in_RDX != 0) && (*(longlong *)(in_RDX + 8) != 0)) && (*(longlong *)(in_RDX + 0x10) != 0))
     && (0 < *(int *)(*(longlong *)(in_RDX + 0x10) + 8))) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Object = (FNetFastTArrayBaseState *)(*pcVar1)();
      return (TRawPtrProxy<FNetFastTArrayBaseState>)TVar3.Object;
    }
  }
  param_1->_padding_ = in_RDX;
  return (TRawPtrProxy<FNetFastTArrayBaseState>)param_1;
}

// NewObject<UContentBundleManager> @ 148a3e040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UContentBundleManager * __cdecl NewObject<UContentBundleManager>(UObject *param_1)

{
  UClass *pUVar1;
  UContentBundleManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UContentBundleManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UContentBundleManager *)
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

// NewObject<UContentBundleTypeFactory> @ 148a3e0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UContentBundleTypeFactory * __cdecl
NewObject<UContentBundleTypeFactory>
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
  pUVar1 = UContentBundleTypeFactory::StaticClass();
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
  return (UContentBundleTypeFactory *)pUVar2;
}

// Reverse<FPackageNameAndLODIndex> @ 148a40400

void __cdecl
AlgoImpl::Reverse<FPackageNameAndLODIndex>(FPackageNameAndLODIndex *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  FPackageNameAndLODIndex *pFVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar9 = param_1 + (param_2 + -1);
    do {
      iVar7 = param_1->LODIndex;
      uVar8 = *(undefined4 *)&param_1->field_0x14;
      iVar2 = (pFVar9->PackageName).Data.ArrayNum;
      iVar3 = (pFVar9->PackageName).Data.ArrayMax;
      pFVar1 = (param_1->PackageName).Data.AllocatorInstance.Data;
      iVar5 = (param_1->PackageName).Data.ArrayNum;
      iVar6 = (param_1->PackageName).Data.ArrayMax;
      (param_1->PackageName).Data.AllocatorInstance.Data =
           (pFVar9->PackageName).Data.AllocatorInstance.Data;
      (param_1->PackageName).Data.ArrayNum = iVar2;
      (param_1->PackageName).Data.ArrayMax = iVar3;
      uVar4 = *(undefined4 *)&pFVar9->field_0x14;
      param_1->LODIndex = pFVar9->LODIndex;
      *(undefined4 *)&param_1->field_0x14 = uVar4;
      (pFVar9->PackageName).Data.AllocatorInstance.Data = pFVar1;
      (pFVar9->PackageName).Data.ArrayNum = iVar5;
      (pFVar9->PackageName).Data.ArrayMax = iVar6;
      pFVar9->LODIndex = iVar7;
      *(undefined4 *)&pFVar9->field_0x14 = uVar8;
      lVar10 = lVar10 + -1;
      param_1 = param_1 + 1;
      pFVar9 = pFVar9 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// StaticEnum<enum_EContentBundleClientState> @ 148a407b0

UEnum * __cdecl StaticEnum<enum_EContentBundleClientState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleClientState,(UObject *)pUVar1,
                       L"EContentBundleClientState");
  }
  return Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton;
}

// StaticEnum<enum_EDataLayerLoadFilter> @ 148a407f0

UEnum * __cdecl StaticEnum<enum_EDataLayerLoadFilter>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerLoadFilter,(UObject *)pUVar1,
                       L"EDataLayerLoadFilter");
  }
  return Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton;
}

// StaticEnum<enum_EDataLayerRuntimeState> @ 148a40830

UEnum * __cdecl StaticEnum<enum_EDataLayerRuntimeState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerRuntimeState,(UObject *)pUVar1,
                       L"EDataLayerRuntimeState");
  }
  return Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton;
}

// StaticEnum<enum_EDataLayerState> @ 148a40870

UEnum * __cdecl StaticEnum<enum_EDataLayerState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerState,(UObject *)pUVar1,L"EDataLayerState"
                      );
  }
  return Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton;
}

// StaticEnum<enum_EExportHLODMeshOrigin> @ 148a408b0

UEnum * __cdecl StaticEnum<enum_EExportHLODMeshOrigin>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EExportHLODMeshOrigin.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EExportHLODMeshOrigin.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EExportHLODMeshOrigin,(UObject *)pUVar1,
                       L"EExportHLODMeshOrigin");
  }
  return Z_Registration_Info_UEnum_EExportHLODMeshOrigin.OuterSingleton;
}

// StaticEnum<enum_EOverrideBlockOnSlowStreaming> @ 148a408f0

UEnum * __cdecl StaticEnum<enum_EOverrideBlockOnSlowStreaming>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EOverrideBlockOnSlowStreaming,(UObject *)pUVar1,
                       L"EOverrideBlockOnSlowStreaming");
  }
  return Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.OuterSingleton;
}

// StaticEnum<enum_EWorldContentState> @ 148a40930

UEnum * __cdecl StaticEnum<enum_EWorldContentState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EWorldContentState,(UObject *)pUVar1,
                       L"EWorldContentState");
  }
  return Z_Registration_Info_UEnum_EWorldContentState.OuterSingleton;
}

// get<1,TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_const_&> @ 148a40970

FRegisteredExternalDataLayers * __cdecl
get<1,TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_const_&>
          (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
           *param_1)

{
  return (FRegisteredExternalDataLayers *)&param_1->field_0x8;
}

// get<0,TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_const_&> @ 148a40980

TObjectPtr<UExternalDataLayerAsset_const_> * __cdecl
get<0,TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_const_&>
          (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
           *param_1)

{
  return (TObjectPtr<UExternalDataLayerAsset_const_> *)param_1;
}

// ~TFunction_OwnedObject<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::<lambda_1>,1,1> @ 148a43570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture_::__l11::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::`11'::<lambda_1>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x18);
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

// operator<< @ 148a44df0

FArchive * __cdecl operator<<(FArchive *param_1,FActorInstanceGuid *param_2)

{
  operator<<(param_1,&param_2->ActorGuid);
  operator<<(param_1,&param_2->ActorInstanceGuid);
  return param_1;
}

// operator() @ 148a45b70

bool __thiscall
``UDataLayerManager::DrawDataLayersStatus'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::
operator()(void *this,UDataLayerInstance *param_1,UDataLayerInstance *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  void *local_28 [2];
  void *local_18 [2];
  
  puVar2 = (undefined8 *)(**(code **)(param_2->_padding_ + 0x2e8))(param_2,local_18);
  puVar3 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x2e8))(param_1,local_28);
  pwVar4 = L"";
  if (*(int *)(puVar2 + 1) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)*puVar2;
  }
  if (*(int *)(puVar3 + 1) != 0) {
    pwVar4 = (wchar_t *)*puVar3;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// operator() @ 148a46050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UDataLayerManager::<lambda_27>::operator()'::__l36::<lambda_1>::operator()
          (void *this,UWorldPartition *param_1)

{
  FScriptContainerElement *pFVar1;
  EDataLayerRuntimeState EVar2;
  UDataLayerInstance *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  UDataLayerManager *this_00;
  longlong lVar8;
  UWorld *this_01;
  AWorldDataLayers *this_02;
  ForAnyElementType FVar9;
  undefined1 local_res18 [8];
  TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = UWorldPartition::GetDataLayerManager(param_1);
  if (this_00 != (UDataLayerManager *)0x0) {
    UDataLayerManager::ConvertArgsToDataLayers
              (this_00,&local_28,*(TArray<FString,TSizedDefaultAllocator<32>_> **)this);
    iVar5 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar9.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UDataLayerInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar9.Data == pFVar1) break;
      pUVar3 = *(UDataLayerInstance **)FVar9.Data;
      EVar2 = *(EDataLayerRuntimeState *)((longlong)this + 8);
      if (pUVar3 == (UDataLayerInstance *)0x0) {
        if (1 < (byte)LogWorldPartition._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        }
        FVar9.Data = FVar9.Data + 8;
      }
      else {
        lVar8 = (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3);
        if (lVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetOuterWorld()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                             ,0x3b,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        this_01 = (UWorld *)(**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3);
        this_02 = UWorld::GetWorldDataLayers(this_01);
        AWorldDataLayers::SetDataLayerRuntimeState(this_02,pUVar3,EVar2,false);
        FVar9.Data = FVar9.Data + 8;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 148a46410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UDataLayerManager::<lambda_26>::operator()'::__l12::<lambda_1>::operator()
          (void *this,UWorldPartition *param_1)

{
  FScriptContainerElement *pFVar1;
  UDataLayerInstance *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  EDataLayerRuntimeState EVar7;
  UDataLayerManager *this_00;
  longlong lVar8;
  UWorld *pUVar9;
  AWorldDataLayers *pAVar10;
  FName *pFVar11;
  ForAnyElementType FVar12;
  EDataLayerRuntimeState EVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UDataLayerInstance_*,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = UWorldPartition::GetDataLayerManager(param_1);
  if (this_00 != (UDataLayerManager *)0x0) {
    UDataLayerManager::ConvertArgsToDataLayers
              (this_00,&local_38,*(TArray<FString,TSizedDefaultAllocator<32>_> **)this);
    iVar4 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
    FVar12.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UDataLayerInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar12.Data == pFVar1) break;
      pUVar2 = *(UDataLayerInstance **)FVar12.Data;
      if (pUVar2 == (UDataLayerInstance *)0x0) {
        if (1 < (byte)LogWorldPartition._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
          if (1 < (byte)LogWorldPartition._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
          }
        }
        FVar12.Data = FVar12.Data + 8;
      }
      else {
        lVar8 = (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2);
        if (lVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetOuterWorld()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                             ,0x3b,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        pUVar9 = (UWorld *)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2);
        pAVar10 = UWorld::GetWorldDataLayers(pUVar9);
        pFVar11 = (FName *)(**(code **)(pUVar2->_padding_ + 800))(pUVar2,local_res20);
        EVar7 = AWorldDataLayers::GetDataLayerRuntimeStateByName(pAVar10,*pFVar11);
        lVar8 = (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2);
        if (lVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetOuterWorld()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                             ,0x3b,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        pUVar9 = (UWorld *)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2);
        pAVar10 = UWorld::GetWorldDataLayers(pUVar9);
        EVar13 = Activated;
        if (EVar7 == Activated) {
          EVar13 = Unloaded;
        }
        AWorldDataLayers::SetDataLayerRuntimeState(pAVar10,pUVar2,EVar13,false);
        FVar12.Data = FVar12.Data + 8;
      }
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return true;
}

// `vector_deleting_destructor'`adjustor{704}' @ 148a47958

/* [thunk]:public: virtual void * __ptr64 __cdecl AWorldDataLayers::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AWorldDataLayers::_vector_deleting_destructor__adjustor_704__(AWorldDataLayers *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AWorldDataLayers *)&this[-1].LoadedDataLayerNames.HashSize,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148a4796c

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent *)
                      &this[-1].field_0x418,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 148a4797c

/* [thunk]:public: virtual void * __ptr64 __cdecl UExternalDataLayerEngineSubsystem::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UExternalDataLayerEngineSubsystem::_vector_deleting_destructor__adjustor_48__
          (UExternalDataLayerEngineSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UExternalDataLayerEngineSubsystem *)
                      &this[-1].ExternalDataLayerAssets.field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148a4798c

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWorldPartitionDestructibleHLODComponent::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWorldPartitionDestructibleHLODComponent::_vector_deleting_destructor__adjustor_40__
          (UWorldPartitionDestructibleHLODComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWorldPartitionDestructibleHLODComponent *)&this[-1].VisibilityBuffer,param_1
                     );
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148a479a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a479d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47a00

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47a30

void * __thiscall
IBaseDelegateInstance<void___cdecl(UExternalDataLayerAsset_const_*,enum_EExternalDataLayerRegistrationState,enum_EExternalDataLayerRegistrationState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47a60

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
TBaseRawMethodDelegateInstance<0,FContentBundleContainer,void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FContentBundleContainer,void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47a90

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
TBaseRawMethodDelegateInstance<0,FContentBundleContainer,void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FContentBundleContainer,void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47ac0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UContentBundleEngineSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UContentBundleEngineSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47af0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UContentBundleEngineSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UContentBundleEngineSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47b20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UContentBundleManager,void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UContentBundleManager,void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47b50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UExternalDataLayerManager,void___cdecl(UExternalDataLayerAsset_const_*,enum_EExternalDataLayerRegistrationState,enum_EExternalDataLayerRegistrationState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47b80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47bb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47be0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47c10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UExternalDataLayerAsset_const_*,enum_EExternalDataLayerRegistrationState,enum_EExternalDataLayerRegistrationState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47c40

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void * __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::_scalar_deleting_destructor_
          (TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,uint param_1)

{
  FWorldPartitionDestructibleHLODState *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->AccumulatedReceivedState).Ptr;
  if (this_00 != (FWorldPartitionDestructibleHLODState *)0x0) {
    pFVar1 = (this_00->ActorsToDamagedActorsMapping).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this_00->DamagedActors).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FFastArraySerializer::~FFastArraySerializer((FFastArraySerializer *)this_00);
    ::operator_delete(this_00,0x138);
  }
  Net::Private::FFastArrayReplicationFragmentBase::~FFastArrayReplicationFragmentBase
            ((FFastArrayReplicationFragmentBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::`11'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47d20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FContentBundleClient,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FContentBundleClient,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47d60

void * __thiscall
AWorldDataLayers::_scalar_deleting_destructor_(AWorldDataLayers *this,uint param_1)

{
  ~AWorldDataLayers(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x848);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47dc0

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
AWorldPartitionCustomHLOD::_scalar_deleting_destructor_
          (AWorldPartitionCustomHLOD *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47e30

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
AWorldPartitionCustomHLODPlaceholder::_scalar_deleting_destructor_
          (AWorldPartitionCustomHLODPlaceholder *this,uint param_1)

{
  *(undefined ***)this = &___7AWorldPartitionCustomHLODPlaceholder__6B_;
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

// `scalar_deleting_destructor' @ 148a47e90

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
AWorldPartitionHLOD::_scalar_deleting_destructor_(AWorldPartitionHLOD *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionHLODObject__;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall FContentBundle::_scalar_deleting_destructor_(FContentBundle *this,uint param_1)

{
  FContentBundleBase::~FContentBundleBase((FContentBundleBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47f40

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
FContentBundleBase::_scalar_deleting_destructor_(FContentBundleBase *this,uint param_1)

{
  ~FContentBundleBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47f80

void * __thiscall
FContentBundleClient::_scalar_deleting_destructor_(FContentBundleClient *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->DisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WorldContentStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WorldContentStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,enum_EWorldContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->WorldContentStates);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a47ff0

void * __thiscall
FWorldTilesGatherer::_scalar_deleting_destructor_(FWorldTilesGatherer *this,uint param_1)

{
  ~FWorldTilesGatherer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48030

void * __thiscall
IDataLayerInstanceProvider::_scalar_deleting_destructor_
          (IDataLayerInstanceProvider *this,uint param_1)

{
  *this = (IDataLayerInstanceProvider)&___7IDataLayerInstanceProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48070

void * __thiscall
UActorDescContainer::_scalar_deleting_destructor_(UActorDescContainer *this,uint param_1)

{
  *(undefined ***)this = &___7UActorDescContainer__6B_;
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

// `scalar_deleting_destructor' @ 148a480d0

void * __thiscall
UActorDescContainerInstance::_scalar_deleting_destructor_
          (UActorDescContainerInstance *this,uint param_1)

{
  *(undefined ***)this = &___7UActorDescContainerInstance__6B_;
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

// `scalar_deleting_destructor' @ 148a48130

void * __thiscall
UActorDescContainerSubsystem::_scalar_deleting_destructor_
          (UActorDescContainerSubsystem *this,uint param_1)

{
  *(undefined ***)this = &___7UActorDescContainerSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48190

void * __thiscall
UContentBundleDescriptor::_scalar_deleting_destructor_(UContentBundleDescriptor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UContentBundleDescriptor__6B_;
  pFVar1 = (this->DisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48200

void * __thiscall
UContentBundleDuplicateForPIEHelper::_scalar_deleting_destructor_
          (UContentBundleDuplicateForPIEHelper *this,uint param_1)

{
  *(undefined ***)this = &___7UContentBundleDuplicateForPIEHelper__6B_;
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

// `scalar_deleting_destructor' @ 148a48260

void * __thiscall
UContentBundleEngineSubsystem::_scalar_deleting_destructor_
          (UContentBundleEngineSubsystem *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UContentBundleEngineSubsystem__6B_;
  pvVar1 = *(void **)&(this->ContentBundleTypeFactoryClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSharedPtr<FContentBundleClient,1>,int>
            ((TSharedPtr<FContentBundleClient,1> *)
             (this->ContentBundleClients).AllocatorInstance.Data,
             (this->ContentBundleClients).ArrayNum);
  pFVar2 = (this->ContentBundleClients).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentBundleClientRequestedContentRemoval).field_0x8,
             *(int *)&(this->OnContentBundleClientRequestedContentRemoval).field_0x10);
  pvVar1 = *(void **)&(this->OnContentBundleClientRequestedContentRemoval).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentBundleClientRequestedContentRemoval);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentBundleClientRequestedContentInjection).field_0x8,
             *(int *)&(this->OnContentBundleClientRequestedContentInjection).field_0x10);
  pvVar1 = *(void **)&(this->OnContentBundleClientRequestedContentInjection).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentBundleClientRequestedContentInjection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentBundleClientUnregistered).field_0x8,
             *(int *)&(this->OnContentBundleClientUnregistered).field_0x10);
  pvVar1 = *(void **)&(this->OnContentBundleClientUnregistered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentBundleClientUnregistered);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentBundleClientRegistered).field_0x8,
             *(int *)&(this->OnContentBundleClientRegistered).field_0x10);
  pvVar1 = *(void **)&(this->OnContentBundleClientRegistered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentBundleClientRegistered);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a483a0

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
UContentBundleManager::_scalar_deleting_destructor_(UContentBundleManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UContentBundleManager__6B_;
  DestructItems<TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_>,int>
            ((TUniquePtr<FContentBundleContainer,TDefaultDelete<FContentBundleContainer>_> *)
             (this->ContentBundleContainers).AllocatorInstance.Data,
             (this->ContentBundleContainers).ArrayNum);
  pFVar1 = (this->ContentBundleContainers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48420

void * __thiscall
UContentBundleTypeFactory::_scalar_deleting_destructor_
          (UContentBundleTypeFactory *this,uint param_1)

{
  *(undefined ***)this = &___7UContentBundleTypeFactory__6B_;
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

// `scalar_deleting_destructor' @ 148a48480

void * __thiscall
UContentBundleUnsavedActorMonitor::_scalar_deleting_destructor_
          (UContentBundleUnsavedActorMonitor *this,uint param_1)

{
  *(undefined ***)this = &___7UContentBundleUnsavedActorMonitor__6B_;
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

// `scalar_deleting_destructor' @ 148a484e0

void * __thiscall
UDEPRECATED_DataLayer::_scalar_deleting_destructor_(UDEPRECATED_DataLayer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_DataLayer__6B_;
  pFVar1 = (this->Children_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48550

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void * __thiscall
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::_scalar_deleting_destructor_
          (UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UWorldPartitionDestructibleHLODComponent::~UWorldPartitionDestructibleHLODComponent
            ((UWorldPartitionDestructibleHLODComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x440);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a485d0

void * __thiscall UDataLayerAsset::_scalar_deleting_destructor_(UDataLayerAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48630

void * __thiscall
UDataLayerInstance::_scalar_deleting_destructor_(UDataLayerInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  pFVar1 = (this->Children).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 148a486a0

void * __thiscall
UDataLayerInstancePrivate::_scalar_deleting_destructor_
          (UDataLayerInstancePrivate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataLayerInstancePrivate__6B_;
  pFVar1 = (this->ShortName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48730

void * __thiscall
UDataLayerInstanceProvider::_scalar_deleting_destructor_
          (UDataLayerInstanceProvider *this,uint param_1)

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

// `scalar_deleting_destructor' @ 148a48790

void * __thiscall
UDataLayerInstanceWithAsset::_scalar_deleting_destructor_
          (UDataLayerInstanceWithAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48800

void * __thiscall
UDataLayerLoadingPolicy::_scalar_deleting_destructor_(UDataLayerLoadingPolicy *this,uint param_1)

{
  *(undefined ***)this = &___7UDataLayerLoadingPolicy__6B_;
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

// `scalar_deleting_destructor' @ 148a48860

void * __thiscall
UDataLayerManager::_scalar_deleting_destructor_(UDataLayerManager *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDataLayerManager__6B_;
  *(undefined4 *)&(this->ActiveDataLayersLoadTime).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveDataLayersLoadTime).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UDataLayerInstance_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UDataLayerInstance_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UDataLayerInstance_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveDataLayersLoadTime);
  pvVar1 = *(void **)&(this->OnDataLayerInstanceRuntimeStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataLayerInstanceRuntimeStateChanged);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48910

void * __thiscall
UDataLayerSubsystem::_scalar_deleting_destructor_(UDataLayerSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDataLayerSubsystem__6B_;
  pvVar1 = *(void **)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->OnDataLayerRuntimeStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataLayerRuntimeStateChanged);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a489b0

void * __thiscall
UDeprecatedDataLayerInstance::_scalar_deleting_destructor_
          (UDeprecatedDataLayerInstance *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48a20

void * __thiscall
UExternalDataLayerAsset::_scalar_deleting_destructor_(UExternalDataLayerAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDataLayerAsset__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48a80

void * __thiscall
UExternalDataLayerEngineSubsystem::_scalar_deleting_destructor_
          (UExternalDataLayerEngineSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pvVar1 = *(void **)&(this->ExternalDataLayerAssets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalDataLayerAssets);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExternalDataLayerOverrideInjection).field_0x8,
             *(int *)&(this->OnExternalDataLayerOverrideInjection).field_0x10);
  pvVar1 = *(void **)&(this->OnExternalDataLayerOverrideInjection).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalDataLayerOverrideInjection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x8,
             *(int *)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalDataLayerAssetRegistrationStateChanged
            );
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,200);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48b70

void * __thiscall
UExternalDataLayerInjectionPolicy::_scalar_deleting_destructor_
          (UExternalDataLayerInjectionPolicy *this,uint param_1)

{
  *(undefined ***)this = &___7UExternalDataLayerInjectionPolicy__6B_;
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

// `scalar_deleting_destructor' @ 148a48bd0

void * __thiscall
UExternalDataLayerInstance::_scalar_deleting_destructor_
          (UExternalDataLayerInstance *this,uint param_1)

{
  *(undefined ***)this = &___7UDataLayerInstance__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48c40

void * __thiscall
UExternalDataLayerManager::_scalar_deleting_destructor_
          (UExternalDataLayerManager *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UExternalDataLayerManager__6B_;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExternalStreamingObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalStreamingObjects);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48cd0

void * __thiscall
UWorldComposition::_scalar_deleting_destructor_(UWorldComposition *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWorldComposition__6B_;
  pFVar1 = (this->TilesStreaming).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWorldCompositionTile,int>
            ((FWorldCompositionTile *)(this->Tiles).AllocatorInstance.Data,(this->Tiles).ArrayNum);
  pFVar1 = (this->Tiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldRoot).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48d70

void * __thiscall
UWorldPartitionBlueprintLibrary::_scalar_deleting_destructor_
          (UWorldPartitionBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UWorldPartitionBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148a48dd0

void * __thiscall
UWorldPartitionCookPackageObject::_scalar_deleting_destructor_
          (UWorldPartitionCookPackageObject *this,uint param_1)

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

// `scalar_deleting_destructor' @ 148a48e30

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void * __thiscall
UWorldPartitionDestructibleHLODComponent::_scalar_deleting_destructor_
          (UWorldPartitionDestructibleHLODComponent *this,uint param_1)

{
  ~UWorldPartitionDestructibleHLODComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x440);
  }
  return this;
}

// AddRegistryTags @ 148a49bb0

void __cdecl
ContentBundlePaths::AddRegistryTags
          (FAssetRegistryTagsContext param_1,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  ForAnyElementType _Src;
  FName *pFVar3;
  FGuid *this;
  longlong lVar4;
  FGuid *pFVar5;
  int iVar6;
  FName local_res10;
  FString local_58;
  FAssetRegistryTag local_48;
  
  iVar1 = param_2->ArrayNum;
  if (0 < iVar1) {
    this = (FGuid *)(param_2->AllocatorInstance).Data;
    bVar2 = true;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = this + iVar1;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (this == pFVar5) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L",",1);
      }
      local_48.Name.ComparisonIndex.Value = 0;
      local_48.Name.Number = 0;
      local_48.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FGuid::AppendString(this,(FString *)&local_48,Digits);
      iVar6 = (int)local_48.Value.Data.AllocatorInstance.Data + -1;
      if ((int)local_48.Value.Data.AllocatorInstance.Data == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48.Name,iVar6);
      if (local_48.Name != (FName)0x0) {
        FMemory::Free((void *)local_48.Name);
      }
      this = this + 1;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar3 = ::FName::FName(&local_res10,0x12,ContentBundleAssetRegistryTagString.DataPtr,
                                FNAME_Add);
        ContentBundleAssetRegistryTag = *pFVar3;
        _Init_thread_footer(&::_TSS0);
      }
    }
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    lVar4 = (longlong)local_58.Data.ArrayNum;
    local_48.Name = ContentBundleAssetRegistryTag;
    local_48.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
    if (local_58.Data.ArrayNum == 0) {
      local_48.Value.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_48.Value,
                 local_58.Data.ArrayNum,&local_48.Value.Data.ArrayMax);
      memcpy(local_48.Value.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
    }
    local_48.Type = TT_Hidden;
    local_48.DisplayFlags = 0;
    FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorDescContainer @ 148a51b40

void __cdecl EmptyLinkFunctionForGeneratedCodeActorDescContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorDescContainerInstance @ 148a51b50

void __cdecl EmptyLinkFunctionForGeneratedCodeActorDescContainerInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorDescContainerSubsystem @ 148a51b60

void __cdecl EmptyLinkFunctionForGeneratedCodeActorDescContainerSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeContentBundleClient @ 148a51b70

void __cdecl EmptyLinkFunctionForGeneratedCodeContentBundleClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeContentBundleDescriptor @ 148a51b80

void __cdecl EmptyLinkFunctionForGeneratedCodeContentBundleDescriptor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeContentBundleEditor @ 148a51b90

void __cdecl EmptyLinkFunctionForGeneratedCodeContentBundleEditor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeContentBundleEngineSubsystem @ 148a51ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeContentBundleEngineSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeContentBundleTypeFactory @ 148a51bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeContentBundleTypeFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeContentBundleWorldSubsystem @ 148a51bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeContentBundleWorldSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCustomHLODActor @ 148a51bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomHLODActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCustomHLODPlaceholderActor @ 148a51be0

void __cdecl EmptyLinkFunctionForGeneratedCodeCustomHLODPlaceholderActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayer @ 148a51bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayerAsset @ 148a51c00

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayerAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayerInstance @ 148a51c10

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayerInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayerInstancePrivate @ 148a51c20

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayerInstancePrivate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayerInstanceProviderInterface @ 148a51c30

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayerInstanceProviderInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayerInstanceWithAsset @ 148a51c40

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayerInstanceWithAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayerLoadingPolicy @ 148a51c50

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayerLoadingPolicy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayerManager @ 148a51c60

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayerManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataLayerSubsystem @ 148a51c70

void __cdecl EmptyLinkFunctionForGeneratedCodeDataLayerSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDeprecatedDataLayerInstance @ 148a51c80

void __cdecl EmptyLinkFunctionForGeneratedCodeDeprecatedDataLayerInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDestructibleHLODComponent @ 148a51c90

void __cdecl EmptyLinkFunctionForGeneratedCodeDestructibleHLODComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeExternalDataLayerAsset @ 148a51ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeExternalDataLayerAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeExternalDataLayerEngineSubsystem @ 148a51cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeExternalDataLayerEngineSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeExternalDataLayerInjectionPolicy @ 148a51cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeExternalDataLayerInjectionPolicy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeExternalDataLayerInstance @ 148a51cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeExternalDataLayerInstance(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeExternalDataLayerManager @ 148a51ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeExternalDataLayerManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeExternalDataLayerUID @ 148a51cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeExternalDataLayerUID(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHLODActor @ 148a51d00

void __cdecl EmptyLinkFunctionForGeneratedCodeHLODActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldComposition @ 148a51d10

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldComposition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldDataLayers @ 148a51d20

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldDataLayers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionActorFilter @ 148a51d30

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionActorFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionBlueprintLibrary @ 148a51d40

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWorldPartitionCookPackageInterface @ 148a51d50

void __cdecl EmptyLinkFunctionForGeneratedCodeWorldPartitionCookPackageInterface(void)

{
  return;
}

// FOnDataLayerInstanceRuntimeStateChanged_DelegateWrapper @ 148a52580

void __cdecl
FOnDataLayerInstanceRuntimeStateChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UDataLayerInstance *param_2
          ,EDataLayerRuntimeState param_3)

{
  UDataLayerInstance *local_18;
  EDataLayerRuntimeState local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnDataLayerRuntimeStateChanged_DelegateWrapper @ 148a525b0

void __cdecl
FOnDataLayerRuntimeStateChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UDataLayerInstance *param_2
          ,EDataLayerRuntimeState param_3)

{
  UDataLayerInstance *local_18;
  EDataLayerRuntimeState local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// GetContentBundleGuidsAssetRegistryTag @ 148a54ea0

FName __cdecl ContentBundlePaths::GetContentBundleGuidsAssetRegistryTag(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,0x12,ContentBundleAssetRegistryTagString.DataPtr,FNAME_Add)
      ;
      ContentBundleAssetRegistryTag = *pFVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ContentBundleAssetRegistryTag;
  return in_RCX;
}

// GetCookedContentBundleLevelFolder @ 148a54f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
ContentBundlePaths::GetCookedContentBundleLevelFolder
          (FString *__return_storage_ptr__,FContentBundleBase *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  void *pvVar4;
  UPackage *pUVar5;
  FName this;
  FString *pFVar6;
  int iVar7;
  ulong64 uVar8;
  undefined1 auStack_8a8 [32];
  FString local_888;
  FString local_878;
  FName local_868;
  undefined1 local_860 [8];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  pvVar4 = FGenericPlatformString::Memcpy(local_838,&u__,2);
  local_858.CurPos = (wchar_t *)((longlong)pvVar4 + 2);
  pUVar5 = UObjectBaseUtility::GetPackage
                     ((UObjectBaseUtility *)(param_1->Descriptor).field0_0x0.DebugPtr);
  local_868 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_868,&local_878);
  this = FPackageName::GetPackageMountPoint((FString *)local_860,SUB81(&local_878,0));
  ::FName::ToString((FName *)this,&local_888);
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  FVar3.Data = local_888.Data.AllocatorInstance.Data;
  iVar7 = local_888.Data.ArrayNum + -1;
  if (local_888.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar8 = (ulong64)iVar7;
  if (local_858.End < local_858.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,uVar8);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_858.CurPos,FVar3.Data,uVar8 * 2);
    local_858.CurPos = (wchar_t *)((longlong)pvVar4 + uVar8 * 2);
  }
  if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  if (local_858.End < local_858.CurPos + 4) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,4);
  }
  pvVar4 = FGenericPlatformString::Memcpy(local_858.CurPos,L"/CB/",8);
  local_858.CurPos = (wchar_t *)((longlong)pvVar4 + 8);
  pFVar6 = GetRelativeLevelFolder(&local_878,param_1);
  iVar1 = (pFVar6->Data).ArrayNum;
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  uVar8 = (ulong64)iVar7;
  if (local_858.End < local_858.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,uVar8);
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_858.CurPos,pFVar2,uVar8 * 2);
    local_858.CurPos = (wchar_t *)((longlong)pvVar4 + uVar8 * 2);
  }
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  pvVar4 = FGenericPlatformString::Memcpy(local_858.CurPos,&u__,2);
  local_858.CurPos = (wchar_t *)((longlong)pvVar4 + 2);
  if (local_858.End < (wchar_t *)((longlong)pvVar4 + 4U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_858.Base);
  FPaths::RemoveDuplicateSlashes(__return_storage_ptr__);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return __return_storage_ptr__;
}

// GetDataLayerInstancesFromProvider @ 148a567b0

TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
* __cdecl GetDataLayerInstancesFromProvider(UDataLayerInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar3;
  UClass *pUVar4;
  UObjectBaseUtility *this;
  longlong *plVar5;
  
  if (param_1 == (UDataLayerInstance *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("DataLayerInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                       ,0x1b8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  pUVar4 = Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister();
  this = UObjectBaseUtility::GetImplementingOuterObject((UObjectBaseUtility *)param_1,pUVar4);
  if (this != (UObjectBaseUtility *)0x0) {
    plVar5 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar4);
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a56824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pTVar3 = (TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
                *)(**(code **)(*plVar5 + 0x18))(plVar5,*(code **)(*plVar5 + 0x18));
      return pTVar3;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8201976303595815357>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                     ,0x1bd,"DataLayerInstanceProvider");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
              *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetDataLayerInstancesFromProvider'::__l2::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return &Empty;
}

// GetDataLayerRuntimeStateFromName @ 148a56fd0

bool __cdecl GetDataLayerRuntimeStateFromName(FString *param_1,EDataLayerRuntimeState *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  bool bVar3;
  FString local_18;
  
  pwVar2 = GetDataLayerRuntimeStateName(Unloaded);
  FString::FString(&local_18,pwVar2);
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar3 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    *param_2 = Unloaded;
    return true;
  }
  pwVar2 = GetDataLayerRuntimeStateName(Loaded);
  FString::FString(&local_18,pwVar2);
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar3 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    *param_2 = Loaded;
    return true;
  }
  pwVar2 = GetDataLayerRuntimeStateName(Activated);
  FString::FString(&local_18,pwVar2);
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar3 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    *param_2 = Activated;
    return true;
  }
  return false;
}

// GetDataLayerRuntimeStateName @ 148a57150

wchar_t * __cdecl GetDataLayerRuntimeStateName(EDataLayerRuntimeState param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Unloaded) {
    return L"Unloaded";
  }
  if (param_1 == Loaded) {
    return L"Loaded";
  }
  if (param_1 == Activated) {
    return L"Activated";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\DataLayerInstance.h"
                     ,0x37,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"Invalid";
}

// GetRelativeLevelFolder @ 148a5ae40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
ContentBundlePaths::GetRelativeLevelFolder
          (FString *__return_storage_ptr__,FContentBundleBase *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  UPackage *pUVar4;
  FString *pFVar5;
  void *pvVar6;
  ulong64 uVar7;
  int iVar8;
  undefined1 auStackY_8d8 [32];
  FString local_8a8;
  FString local_898;
  FString local_888;
  FName local_878;
  FString local_870;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1->InjectedWorld);
  local_878 = (FName)pUVar4->_padding_;
  ::FName::ToString(&local_878,&local_870);
  local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_888.Data.ArrayNum = 0;
  local_888.Data.ArrayMax = 0;
  local_898.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_898.Data.ArrayNum = 0;
  local_898.Data.ArrayMax = 0;
  local_8a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8a8.Data.ArrayNum = 0;
  local_8a8.Data.ArrayMax = 0;
  bVar3 = FPackageName::SplitLongPackageName(&local_870,&local_888,&local_898,&local_8a8,false);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3418457100446072917>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundlePaths.cpp"
                       ,0x55,
                       "FPackageName::SplitLongPackageName(WorldPackageName, PackageRoot, PackagePath, PackageName)"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  FVar2.Data = local_898.Data.AllocatorInstance.Data;
  local_858.Base = local_838;
  local_858.End = (wchar_t *)local_38;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  iVar8 = local_898.Data.ArrayNum + -1;
  if (local_898.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_38 < local_838 + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,uVar7);
  }
  if (iVar8 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_858.CurPos,FVar2.Data,uVar7 * 2);
    local_858.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
  }
  FVar2.Data = local_8a8.Data.AllocatorInstance.Data;
  iVar8 = local_8a8.Data.ArrayNum + -1;
  if (local_8a8.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_858.End < local_858.CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,uVar7);
  }
  if (iVar8 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_858.CurPos,FVar2.Data,uVar7 * 2);
    local_858.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
  }
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_858.CurPos,&u__,2);
  local_858.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  if (local_858.End < (wchar_t *)((longlong)pvVar6 + 4U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_858.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
  }
  if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Data.AllocatorInstance.Data);
  }
  if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// JoinDataLayerShortNamesFromInstanceNames @ 148a5ed80

FString * __cdecl
JoinDataLayerShortNamesFromInstanceNames
          (FString *__return_storage_ptr__,AWorldDataLayers *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  UDataLayerInstance **ppUVar8;
  FWeakObjectPtr *this;
  UDataLayerInstance *pUVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FName *pFVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  ForAnyElementType local_58;
  undefined8 local_50;
  void *local_48 [2];
  
  if ((param_1 == (AWorldDataLayers *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InWorldDataLayers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                         ,0x2b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar4)();
    return pFVar7;
  }
  uVar2 = param_2->ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&local_58,0,(int *)((longlong)&local_50 + 4));
  }
  pFVar13 = (FName *)(param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar1 = pFVar13 + iVar3;
  do {
    if (param_2->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar1) {
      iVar3 = (int)local_50;
      bVar5 = true;
      pFVar10 = local_58.Data + (longlong)(int)local_50 * 0x10;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      FVar12.Data = local_58.Data;
      while( true ) {
        if ((int)local_50 != iVar3) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar12.Data == pFVar10) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          FString::AppendChars(__return_storage_ptr__,L",",1);
        }
        iVar6 = *(int *)(FVar12.Data + 8) + -1;
        if (*(int *)(FVar12.Data + 8) == 0) {
          iVar6 = 0;
        }
        FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar12.Data,iVar6);
        FVar12.Data = FVar12.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      return __return_storage_ptr__;
    }
    if (*pFVar13 != (FName)0x0) {
      ppUVar8 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                        *)&param_1->InstanceNameToInstance,*pFVar13);
      if (ppUVar8 == (UDataLayerInstance **)0x0) {
        this = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                        *)&param_1->DeprecatedDataLayerNameToDataLayerInstance,*pFVar13)->WeakPtr;
        if (this == (FWeakObjectPtr *)0x0) goto LAB_148a5ef67;
        pUVar9 = (UDataLayerInstance *)FWeakObjectPtr::Get(this);
      }
      else {
        pUVar9 = *ppUVar8;
      }
      if (pUVar9 != (UDataLayerInstance *)0x0) {
        pFVar10 = (FScriptContainerElement *)
                  (**(code **)(pUVar9->_padding_ + 0x2e0))(pUVar9,local_48);
        if (((local_58.Data <= pFVar10) &&
            (pFVar10 < local_58.Data + (longlong)local_50._4_4_ * 0x10)) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar4)();
          return pFVar7;
        }
        iVar6 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = CONCAT44(local_50._4_4_,iVar6 + 1);
        pFVar11 = local_58.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar11 = 0;
        *(undefined8 *)pFVar11 = *(undefined8 *)pFVar10;
        *(undefined8 *)pFVar10 = 0;
        *(int *)(pFVar11 + 8) = *(int *)(pFVar10 + 8);
        *(int *)(pFVar11 + 0xc) = *(int *)(pFVar10 + 0xc);
        *(undefined8 *)(pFVar10 + 8) = 0;
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
      }
    }
LAB_148a5ef67:
    pFVar13 = pFVar13 + 1;
  } while( true );
}

// MakeDebugInfoString @ 148a5f050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
ContentBundle::Log::MakeDebugInfoString(FString *__return_storage_ptr__,FContentBundleBase *param_1)

{
  LogPrivate::MakeDebugInfoString
            (__return_storage_ptr__,(param_1->Descriptor).field0_0x0.DebugPtr,param_1->InjectedWorld
            );
  return __return_storage_ptr__;
}

// MakeDebugInfoString @ 148a5f080

FString * __cdecl
ContentBundle::Log::MakeDebugInfoString
          (FString *__return_storage_ptr__,FContentBundleClient *param_1)

{
  FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[CB: %s]");
  return __return_storage_ptr__;
}

// MakeDebugInfoString @ 148a5f0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
ContentBundle::Log::MakeDebugInfoString
          (FString *__return_storage_ptr__,FContentBundleClient *param_1,UWorld *param_2)

{
  UContentBundleDescriptor *pUVar1;
  
  pUVar1 = (UContentBundleDescriptor *)
           FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
  LogPrivate::MakeDebugInfoString(__return_storage_ptr__,pUVar1,param_2);
  return __return_storage_ptr__;
}

// MakeDebugInfoString @ 148a5f110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
ContentBundle::Log::MakeDebugInfoString
          (FString *__return_storage_ptr__,FContentBundleContainer *param_1)

{
  LogPrivate::MakeWorldDebugInfoString(__return_storage_ptr__,param_1->InjectedWorld);
  return __return_storage_ptr__;
}

// MakeDebugInfoString @ 148a5f140

FString * __cdecl
ContentBundle::LogPrivate::MakeDebugInfoString
          (FString *__return_storage_ptr__,UContentBundleDescriptor *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"[CB: %s]");
  return __return_storage_ptr__;
}

// MakeDebugInfoString @ 148a5f180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
ContentBundle::LogPrivate::MakeDebugInfoString
          (FString *__return_storage_ptr__,UContentBundleDescriptor *param_1,UWorld *param_2)

{
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  GetDebugStringForWorld(&local_28,param_2);
  local_res8 = (FName)param_2->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_38,L"[%s(%s)]");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_48,L"[CB: %s]");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeWorldDebugInfoString @ 148a5f2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
ContentBundle::LogPrivate::MakeWorldDebugInfoString(FString *__return_storage_ptr__,UWorld *param_1)

{
  FName local_res8;
  FString local_28;
  FString local_18;
  
  GetDebugStringForWorld(&local_18,param_1);
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[%s(%s)]");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ParseContentBundleGuids @ 148a60560

TArray<FGuid,TSizedDefaultAllocator<32>_> * __cdecl
ContentBundlePaths::ParseContentBundleGuids
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FAssetData *param_1)

{
  FScriptContainerElement *pFVar1;
  FAssetDataTagMap *pFVar2;
  FGuid *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FValueId *pFVar9;
  FString *pFVar10;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar11;
  FName *pFVar12;
  uint uVar13;
  FAssetTagValueRef_u_0 FVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  FKeyForward local_res10 [8];
  FAssetTagValueRef_u_0 local_res18;
  FName local_res20;
  FName local_88;
  FString local_80;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  FGuid local_60;
  FString local_50;
  
  FVar14.Loose = (FString *)0x0;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar12 = ::FName::FName(&local_88,0x12,ContentBundleAssetRegistryTagString.DataPtr,FNAME_Add);
    ContentBundleAssetRegistryTag = *pFVar12;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(byte *)&(param_1->TagsAndValues).field0_0x0 & 1) == 0) {
    pFVar2 = (param_1->TagsAndValues).field0_0x0.Loose;
    if (pFVar2 != (FAssetDataTagMap *)0x0) {
      local_res20 = ContentBundleAssetRegistryTag;
      uVar7 = Algo::
              BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                        ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)pFVar2,
                         &local_res20,local_res10[0],(FNameFastLess)local_res10[0]);
      if (uVar7 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar7 < (int)pFVar2->_padding_) {
          uVar13 = ~uVar7 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar11;
        }
        FVar14.Loose = (FString *)
                       (((ForAnyElementType *)&pFVar2->_padding_)->Data +
                       ((longlong)(int)uVar7 * 3 + 1) * 8);
      }
      goto LAB_148a60685;
    }
  }
  else {
    pFVar9 = FixedTagPrivate::FMapHandle::FindValue
                       ((FMapHandle *)&param_1->TagsAndValues,ContentBundleAssetRegistryTag);
    if (pFVar9 != (FValueId *)0x0) {
      FVar14.Bits = ((ulonglong)*(ushort *)&(param_1->TagsAndValues).field0_0x0 & 0xfffffffffffffffc
                    | 0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar9;
    }
LAB_148a60685:
    local_res18 = FVar14;
    if ((FScriptContainerElement *)FVar14.Loose != (FScriptContainerElement *)0x0) {
      pFVar10 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res18.Fixed,&local_50);
      if (&local_80 != pFVar10) {
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        local_80.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_80.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_80.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      ::FString::ParseIntoArray(&local_80,&local_70,L",",true);
      iVar5 = local_70.ArrayNum;
      pFVar16 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 0x10;
      FVar15.Data = local_70.AllocatorInstance.Data;
      while( true ) {
        if (local_70.ArrayNum != iVar5) {
          local_res10[0] = (FKeyForward)0x0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar15.Data == pFVar16) break;
        local_60.A = 0;
        local_60.B = 0;
        local_60.C = 0;
        local_60.D = 0;
        bVar6 = FGuid::Parse((FString *)FVar15.Data,&local_60);
        if (bVar6) {
          pFVar3 = (FGuid *)(__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= &local_60) && (&local_60 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar11 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar11;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          *(undefined8 *)pFVar1 = local_60._0_8_;
          *(undefined8 *)(pFVar1 + 8) = local_60._8_8_;
        }
        FVar15.Data = FVar15.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      goto LAB_148a60842;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
LAB_148a60842:
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ParseContentBundleGuids @ 148a608c0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __cdecl
ContentBundlePaths::ParseContentBundleGuids
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FGuid *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FGuid local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_38,L",",true);
  iVar4 = local_38.ArrayNum;
  pFVar8 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar9.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar9.Data == pFVar8) break;
    local_28.A = 0;
    local_28.B = 0;
    local_28.C = 0;
    local_28.D = 0;
    bVar5 = FGuid::Parse((FString *)FVar9.Data,&local_28);
    if (bVar5) {
      pFVar2 = (FGuid *)(__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= &local_28) && (&local_28 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar1 = local_28._0_8_;
      *(undefined8 *)(pFVar1 + 8) = local_28._8_8_;
    }
    FVar9.Data = FVar9.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_AWorldDataLayers_NoRegister @ 148a6d180

UClass * __cdecl Z_Construct_UClass_AWorldDataLayers_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldDataLayers",
               &Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton,
               AWorldDataLayers::StaticRegisterNativesAWorldDataLayers,0x848,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldDataLayers>,
               InternalVTableHelperCtorCaller<AWorldDataLayers>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder_NoRegister @ 148a6d240

UClass * __cdecl Z_Construct_UClass_AWorldPartitionCustomHLODPlaceholder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCustomHLODPlaceholder",
               &Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton,
               AWorldPartitionCustomHLODPlaceholder::
               StaticRegisterNativesAWorldPartitionCustomHLODPlaceholder,0x2c0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionCustomHLODPlaceholder>,
               InternalVTableHelperCtorCaller<AWorldPartitionCustomHLODPlaceholder>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionCustomHLODPlaceholder.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionCustomHLOD_NoRegister @ 148a6d300

UClass * __cdecl Z_Construct_UClass_AWorldPartitionCustomHLOD_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCustomHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton,
               AWorldPartitionCustomHLOD::StaticRegisterNativesAWorldPartitionCustomHLOD,0x2e0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionCustomHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionCustomHLOD>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionCustomHLOD.InnerSingleton;
}

// Z_Construct_UClass_AWorldPartitionHLOD_NoRegister @ 148a6d3c0

UClass * __cdecl Z_Construct_UClass_AWorldPartitionHLOD_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLOD",
               &Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton,
               AWorldPartitionHLOD::StaticRegisterNativesAWorldPartitionHLOD,0x2f0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionHLOD>,
               InternalVTableHelperCtorCaller<AWorldPartitionHLOD>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionHLOD.InnerSingleton;
}

// Z_Construct_UClass_UActorDescContainerInstance_NoRegister @ 148a6d480

UClass * __cdecl Z_Construct_UClass_UActorDescContainerInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainerInstance",
               &Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton,
               UActorDescContainerInstance::StaticRegisterNativesUActorDescContainerInstance,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorDescContainerInstance>,
               InternalVTableHelperCtorCaller<UActorDescContainerInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton;
}

// Z_Construct_UClass_UActorDescContainerSubsystem_NoRegister @ 148a6d530

UClass * __cdecl Z_Construct_UClass_UActorDescContainerSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainerSubsystem",
               &Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton,
               UActorDescContainerSubsystem::StaticRegisterNativesUActorDescContainerSubsystem,0x30,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorDescContainerSubsystem>,
               InternalVTableHelperCtorCaller<UActorDescContainerSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainerSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UActorDescContainer_NoRegister @ 148a6d5f0

UClass * __cdecl Z_Construct_UClass_UActorDescContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainer",
               &Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton,
               UActorDescContainer::StaticRegisterNativesUActorDescContainer,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorDescContainer>,
               InternalVTableHelperCtorCaller<UActorDescContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton;
}

// Z_Construct_UClass_UContentBundleDescriptor_NoRegister @ 148a6d6a0

UClass * __cdecl Z_Construct_UClass_UContentBundleDescriptor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleDescriptor",
               &Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton,
               UContentBundleDescriptor::StaticRegisterNativesUContentBundleDescriptor,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UContentBundleDescriptor>,
               InternalVTableHelperCtorCaller<UContentBundleDescriptor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton;
}

// Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_NoRegister @ 148a6d750

UClass * __cdecl Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleDuplicateForPIEHelper",
               &Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton,
               UContentBundleDuplicateForPIEHelper::
               StaticRegisterNativesUContentBundleDuplicateForPIEHelper,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UContentBundleDuplicateForPIEHelper>,
               InternalVTableHelperCtorCaller<UContentBundleDuplicateForPIEHelper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.InnerSingleton;
}

// Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister @ 148a6d800

UClass * __cdecl Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleEngineSubsystem",
               &Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton,
               UContentBundleEngineSubsystem::StaticRegisterNativesUContentBundleEngineSubsystem,
               0xf0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UContentBundleEngineSubsystem>,
               InternalVTableHelperCtorCaller<UContentBundleEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleEngineSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UContentBundleManager_NoRegister @ 148a6d8c0

UClass * __cdecl Z_Construct_UClass_UContentBundleManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UContentBundleManager::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleManager",
               &Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton,
               UContentBundleManager::StaticRegisterNativesUContentBundleManager,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UContentBundleManager>,
               InternalVTableHelperCtorCaller<UContentBundleManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleManager.InnerSingleton;
}

// Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister @ 148a6d970

UClass * __cdecl Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleUnsavedActorMonitor",
               &Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton,
               UContentBundleUnsavedActorMonitor::
               StaticRegisterNativesUContentBundleUnsavedActorMonitor,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UContentBundleUnsavedActorMonitor>,
               InternalVTableHelperCtorCaller<UContentBundleUnsavedActorMonitor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent_NoRegister @ 148a6da20

UClass * __cdecl
Z_Construct_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UWorldPartitionDestructibleHLODMeshComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
                InnerSingleton,
               UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
               StaticRegisterNativesUDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent,0x440,
               0x10,CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent>
               ,local_res8,UWorldPartitionDestructibleHLODComponent::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
         InnerSingleton;
}

// Z_Construct_UClass_UDataLayerInstancePrivate_NoRegister @ 148a6dae0

UClass * __cdecl Z_Construct_UClass_UDataLayerInstancePrivate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstancePrivate",
               &Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton,
               UDataLayerInstancePrivate::StaticRegisterNativesUDataLayerInstancePrivate,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerInstancePrivate>,
               InternalVTableHelperCtorCaller<UDataLayerInstancePrivate>,local_res8,
               UDataLayerInstance::StaticClass,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstancePrivate.InnerSingleton;
}

// Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister @ 148a6dba0

UClass * __cdecl Z_Construct_UClass_UDataLayerInstanceProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstanceProvider",
               &Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton,
               UDataLayerInstanceProvider::StaticRegisterNativesUDataLayerInstanceProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerInstanceProvider>,
               InternalVTableHelperCtorCaller<UDataLayerInstanceProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstanceProvider.InnerSingleton;
}

// Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister @ 148a6dc60

UClass * __cdecl Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstanceWithAsset",
               &Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton,
               UDataLayerInstanceWithAsset::StaticRegisterNativesUDataLayerInstanceWithAsset,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerInstanceWithAsset>,
               InternalVTableHelperCtorCaller<UDataLayerInstanceWithAsset>,local_res8,
               UDataLayerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.InnerSingleton;
}

// Z_Construct_UClass_UDataLayerSubsystem_NoRegister @ 148a6dd20

UClass * __cdecl Z_Construct_UClass_UDataLayerSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerSubsystem",
               &Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton,
               UDataLayerSubsystem::StaticRegisterNativesUDataLayerSubsystem,0x78,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataLayerSubsystem>,
               InternalVTableHelperCtorCaller<UDataLayerSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister @ 148a6dde0

UClass * __cdecl Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeprecatedDataLayerInstance",
               &Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton,
               UDeprecatedDataLayerInstance::StaticRegisterNativesUDeprecatedDataLayerInstance,0x60,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeprecatedDataLayerInstance>,
               InternalVTableHelperCtorCaller<UDeprecatedDataLayerInstance>,local_res8,
               UDataLayerInstance::StaticClass,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton;
}

// Z_Construct_UClass_UExternalDataLayerEngineSubsystem_NoRegister @ 148a6dea0

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerEngineSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerEngineSubsystem",
               &Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton,
               UExternalDataLayerEngineSubsystem::
               StaticRegisterNativesUExternalDataLayerEngineSubsystem,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UExternalDataLayerEngineSubsystem>,
               InternalVTableHelperCtorCaller<UExternalDataLayerEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister @ 148a6df60

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerInjectionPolicy",
               &Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton,
               UExternalDataLayerInjectionPolicy::
               StaticRegisterNativesUExternalDataLayerInjectionPolicy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UExternalDataLayerInjectionPolicy>,
               InternalVTableHelperCtorCaller<UExternalDataLayerInjectionPolicy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerInjectionPolicy.InnerSingleton;
}

// Z_Construct_UClass_UExternalDataLayerManager_NoRegister @ 148a6e010

UClass * __cdecl Z_Construct_UClass_UExternalDataLayerManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerManager",
               &Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton,
               UExternalDataLayerManager::StaticRegisterNativesUExternalDataLayerManager,0x80,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UExternalDataLayerManager>,
               InternalVTableHelperCtorCaller<UExternalDataLayerManager>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton;
}

// Z_Construct_UClass_UWorldComposition_NoRegister @ 148a6e0d0

UClass * __cdecl Z_Construct_UClass_UWorldComposition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldComposition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldComposition",
               &Z_Registration_Info_UClass_UWorldComposition.InnerSingleton,
               UWorldComposition::StaticRegisterNativesUWorldComposition,0x68,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldComposition>,
               InternalVTableHelperCtorCaller<UWorldComposition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldComposition.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionBlueprintLibrary_NoRegister @ 148a6e180

UClass * __cdecl Z_Construct_UClass_UWorldPartitionBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionBlueprintLibrary",
               &Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton,
               UWorldPartitionBlueprintLibrary::StaticRegisterNativesUWorldPartitionBlueprintLibrary
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UWorldPartitionBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister @ 148a6e240

UClass * __cdecl Z_Construct_UClass_UWorldPartitionCookPackageObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCookPackageObject",
               &Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton,
               UWorldPartitionCookPackageObject::
               StaticRegisterNativesUWorldPartitionCookPackageObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionCookPackageObject>,
               InternalVTableHelperCtorCaller<UWorldPartitionCookPackageObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionCookPackageObject.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EContentBundleClientState @ 148a6e300

UEnum * __cdecl Z_Construct_UEnum_Engine_EContentBundleClientState(void)

{
  if (Z_Registration_Info_UEnum_EContentBundleClientState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EContentBundleClientState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EContentBundleClientState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EContentBundleClientState.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EExportHLODMeshOrigin @ 148a6e340

UEnum * __cdecl Z_Construct_UEnum_Engine_EExportHLODMeshOrigin(void)

{
  if (Z_Registration_Info_UEnum_EExportHLODMeshOrigin.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EExportHLODMeshOrigin.InnerSingleton,
               &Z_Construct_UEnum_Engine_EExportHLODMeshOrigin_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EExportHLODMeshOrigin.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EOverrideBlockOnSlowStreaming @ 148a6e380

UEnum * __cdecl Z_Construct_UEnum_Engine_EOverrideBlockOnSlowStreaming(void)

{
  if (Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.InnerSingleton,
               &Z_Construct_UEnum_Engine_EOverrideBlockOnSlowStreaming_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOverrideBlockOnSlowStreaming.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EWorldContentState @ 148a6e3c0

UEnum * __cdecl Z_Construct_UEnum_Engine_EWorldContentState(void)

{
  if (Z_Registration_Info_UEnum_EWorldContentState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWorldContentState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EWorldContentState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWorldContentState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FActorPlacementDataLayers @ 148a6e400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorPlacementDataLayers(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorPlacementDataLayers.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorPlacementDataLayers.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorPlacementDataLayers.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorPlacementDataLayers.InnerSingleton;
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

// Z_Construct_UScriptStruct_FExportHLODAssetsParams @ 148a6e480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FExportHLODAssetsParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FExportHLODAssetsParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FExportHLODAssetsParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FExportHLODAssetsParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FExportHLODAssetsParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FExportHLODAssetsParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWorldPartitionActorFilter @ 148a6e500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWorldPartitionActorFilter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionActorFilter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWorldPartitionActorFilter.InnerSingleton,
               &Z_Construct_UScriptStruct_FWorldPartitionActorFilter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionActorFilter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWorldPartitionActorFilter.InnerSingleton;
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

// DumpDataLayersCommand'' @ 150408a90

void __cdecl `dynamic_atexit_destructor_for_'UDataLayerManager::DumpDataLayersCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UDataLayerManager::DumpDataLayersCommand);
  return;
}

// SetDataLayerRuntimeStateCommand'' @ 150408ab0

void __cdecl
`dynamic_atexit_destructor_for_'UDataLayerManager::SetDataLayerRuntimeStateCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UDataLayerManager::SetDataLayerRuntimeStateCommand);
  return;
}

// ToggleDataLayerActivation'' @ 150408ad0

void __cdecl `dynamic_atexit_destructor_for_'UDataLayerManager::ToggleDataLayerActivation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&UDataLayerManager::ToggleDataLayerActivation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWorldPartitionHLODForceDisableShadows'' @ 150408af0

void __cdecl _dynamic_atexit_destructor_for__CVarWorldPartitionHLODForceDisableShadows__(void)

{
  CVarWorldPartitionHLODForceDisableShadows._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarWorldPartitionHLODForceDisableShadows);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 150408b10

void __cdecl
`GetDataLayerInstancesFromProvider'::__l2::_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty.HashSize = 0;
  if (::Empty.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)::Empty.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Empty.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 150408b50

void __cdecl
`UDataLayerSubsystem::GetEffectiveActiveDataLayerNames'::__l2::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty.HashSize = 0;
  if (::Empty.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)::Empty.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Empty.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 150408b90

void __cdecl
`UDataLayerSubsystem::GetEffectiveLoadedDataLayerNames'::__l2::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty.HashSize = 0;
  if (::Empty.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)::Empty.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Empty.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 150408bd0

void __cdecl
`AWorldDataLayers::ResetDataLayerRuntimeStates'::__l5::_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptySet'' @ 150408bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UDataLayerSubsystem::GetActiveDataLayerNames'::__l2::_dynamic_atexit_destructor_for__EmptySet__
          (void)

{
  _DAT_154c6f118 = 0;
  if (DAT_154c6f110 != (void *)0x0) {
    FMemory::Free(DAT_154c6f110);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetActiveDataLayerNames(void)const___ptr64'
                 ::__l2::EmptySet);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 150408c30

void __cdecl
`UDataLayerManager::GetEffectiveActiveDataLayerNames'::__l2::
_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 150408c70

void __cdecl
`UDataLayerManager::GetEffectiveLoadedDataLayerNames'::__l2::
_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 150408cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UDataLayerSubsystem::GetLoadedDataLayerNames'::__l2::_dynamic_atexit_destructor_for__EmptySet__
          (void)

{
  _DAT_154c6f168 = 0;
  if (DAT_154c6f160 != (void *)0x0) {
    FMemory::Free(DAT_154c6f160);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetLoadedDataLayerNames(void)const___ptr64'
                 ::__l2::EmptySet);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyStates'' @ 150408cf0

void __cdecl
`UDataLayerManager::IsAllDataLayerInEffectiveRuntimeState'::__l2::
_dynamic_atexit_destructor_for__EmptyStates__(void)

{
  FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates(&EmptyStates);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyStates'' @ 150408d10

void __cdecl
`UDataLayerManager::IsAnyDataLayerInEffectiveRuntimeState'::__l2::
_dynamic_atexit_destructor_for__EmptyStates__(void)

{
  FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates(&EmptyStates);
  return;
}

// `dynamic_atexit_destructor_for_'GActorGuids'' @ 150408d30

void __cdecl _dynamic_atexit_destructor_for__GActorGuids__(void)

{
  FUObjectAnnotationSparse<FActorInstanceGuid,1>::~FUObjectAnnotationSparse<FActorInstanceGuid,1>
            (&GActorGuids);
  return;
}

// `dynamic_atexit_destructor_for_'GLevelInstanceGuids'' @ 150408d50

void __cdecl _dynamic_atexit_destructor_for__GLevelInstanceGuids__(void)

{
  FUObjectAnnotationSparse<FLevelInstanceGuid,1>::~FUObjectAnnotationSparse<FLevelInstanceGuid,1>
            (&GLevelInstanceGuids);
  return;
}

// `dynamic_atexit_destructor_for_'GSetDataLayerRuntimeStateCommandCommandName'' @ 150408d70

void __cdecl _dynamic_atexit_destructor_for__GSetDataLayerRuntimeStateCommandCommandName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GSetDataLayerRuntimeStateCommandCommandName.Data.AllocatorInstance.Data;
  if (GSetDataLayerRuntimeStateCommandCommandName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GSetDataLayerRuntimeStateCommandCommandName.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'GToggleDataLayerActivationCommandName'' @ 150408d90

void __cdecl _dynamic_atexit_destructor_for__GToggleDataLayerActivationCommandName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GToggleDataLayerActivationCommandName.Data.AllocatorInstance.Data;
  if (GToggleDataLayerActivationCommandName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GToggleDataLayerActivationCommandName.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'LogContentBundle'' @ 150408db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogContentBundle__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogContentBundle);
  return;
}

// `dynamic_atexit_destructor_for_'LogHLODDestruction'' @ 150408dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHLODDestruction__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHLODDestruction);
  return;
}

// `dynamic_atexit_destructor_for_'LogHLODHash'' @ 150408df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHLODHash__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHLODHash);
  return;
}

// `dynamic_atexit_destructor_for_'LogWorldComposition'' @ 150408e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWorldComposition__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWorldComposition);
  return;
}

