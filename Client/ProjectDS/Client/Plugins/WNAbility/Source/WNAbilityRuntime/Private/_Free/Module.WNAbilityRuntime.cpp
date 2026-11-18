// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 97

// Invalid'' @ 14116b250

void __cdecl `dynamic_initializer_for_'FWN_AbilityInstanceHandle::Invalid__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWN_AbilityInstanceHandle::Invalid__);
  return;
}

// `dynamic_initializer_for_'CVar_WN_AbilityTaskDebugPrintTopNResults'' @ 14116b270

void __cdecl
WN_AbilityTaskCVars::_dynamic_initializer_for__CVar_WN_AbilityTaskDebugPrintTopNResults__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_WN_AbilityTaskDebugPrintTopNResults,
             L"AbilitySystem.AbilityTask.Debug.AbilityTaskDebugPrintTopNResults",
             &WN_AbilityTaskDebugPrintTopNResults,
             L"Set N to only print the top N results when printing ability task counts (N = 5 by default, if N = 0 prints all).  Use \'AbilitySystem.AbilityTask.Debug.PrintCounts\' to print out the current counts."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_WN_AbilityTaskDebugPrintTopNResults__);
  return;
}

// `dynamic_initializer_for_'CVar_WN_AbilityTaskWarnIfBroadcastSuppress'' @ 14116b2c0

void __cdecl _dynamic_initializer_for__CVar_WN_AbilityTaskWarnIfBroadcastSuppress__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_WN_AbilityTaskWarnIfBroadcastSuppress,
             L"AbilitySystem.WN_AbilityTaskWarnIfBroadcastSuppress",
             &WN_AbilityTaskWarnIfBroadcastSuppress,
             L"Print warning if an ability task broadcast is suppressed because the ability has ended"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_WN_AbilityTaskWarnIfBroadcastSuppress__);
  return;
}

// `dynamic_initializer_for_'CVar_WN_MaxAbilityTaskCount'' @ 14116b310

void __cdecl WN_AbilityTaskCVars::_dynamic_initializer_for__CVar_WN_MaxAbilityTaskCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_WN_MaxAbilityTaskCount,L"AbilitySystem.AbilityTask.MaxCount",
             &WN_AbilityTaskMaxCount,
             L"Global limit on the number of extant AbilityTasks. Use \'AbilitySystem.Debug.RecordingEnabled\' and \'AbilitySystem.AbilityTask.Debug.PrintCounts\' to debug why you are hitting this before raising the cap."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_WN_MaxAbilityTaskCount__);
  return;
}

// `dynamic_initializer_for_'CVar_WN_RecordAbilityTaskCounts'' @ 14116b360

void __cdecl WN_AbilityTaskCVars::_dynamic_initializer_for__CVar_WN_RecordAbilityTaskCounts__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_WN_RecordAbilityTaskCounts,L"AbilitySystem.AbilityTask.Debug.RecordingEnabled",
             &WN_AbilityTaskRecordingType,
             L"Set to 0 to disable, 1 to enable in non-shipping builds, and 2 to enable in all builds (including shipping). If this is enabled, all new AbilityTasks will be counted by type. Use \'AbilitySystem.AbilityTask.Debug.PrintCounts\' to print out the current counts."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_WN_RecordAbilityTaskCounts__);
  return;
}

// `dynamic_initializer_for_'CVar_WN_RecordAbilityTaskSourceAbilityCounts'' @ 14116b3b0

void __cdecl
WN_AbilityTaskCVars::_dynamic_initializer_for__CVar_WN_RecordAbilityTaskSourceAbilityCounts__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_WN_RecordAbilityTaskSourceAbilityCounts,
             L"AbilitySystem.AbilityTask.Debug.SourceRecordingEnabled",
             &WN_RecordAbilityTaskSourceAbilityCounts,
             L"Requires bRecordAbilityTaskCounts to be set to enabled (1 for non-shipping builds, 2 for all builds) for this value to do anything.  If both are enabled, all new AbilityTasks (after InitTask is called in NewAbilityTask) will be counted by the class of the ability that created them.  Use \'AbilitySystem.AbilityTask.Debug.PrintCounts\' to print out the current counts."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_WN_RecordAbilityTaskSourceAbilityCounts__);
  return;
}

// `dynamic_initializer_for_'LogWNAbility'' @ 14116b400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWNAbility__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogWNAbility,L"LogWNAbility",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWNAbility__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWNAbilityRuntime'' @ 14116b440

void __cdecl _dynamic_initializer_for__ModuleRegistrantWNAbilityRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WNAbilityRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WNAbilityRuntime",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWN_AbilityRuntimeModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WNASC_Tick'' @ 14116b490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WNASC_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WNASC_Tick == (FThreadSafeStaticStat<FStat_STAT_WNASC_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WNASC_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WNASC_Tick,*pFVar1,L"WNASC Tick",
               "STATGROUP_WNASC","STATCAT_Advanced",L"WNASC",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StaticAbilityTasksByAbilityClass'' @ 14116b520

void __cdecl _dynamic_initializer_for__StaticAbilityTasksByAbilityClass__(void)

{
  atexit(_dynamic_atexit_destructor_for__StaticAbilityTasksByAbilityClass__);
  return;
}

// `dynamic_initializer_for_'StaticAbilityTasksByClass'' @ 14116b540

void __cdecl _dynamic_initializer_for__StaticAbilityTasksByClass__(void)

{
  atexit(_dynamic_atexit_destructor_for__StaticAbilityTasksByClass__);
  return;
}

// `dynamic_initializer_for_'WN_AbilityTaskPrintAbilityTaskCountsCmd'' @ 14116b560

void __cdecl
WN_AbilityTaskCVars::_dynamic_initializer_for__WN_AbilityTaskPrintAbilityTaskCountsCmd__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = DebugPrintAbilityTasksByClass;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&WN_AbilityTaskPrintAbilityTaskCountsCmd,L"AbilitySystem.AbilityTask.Debug.PrintCounts"
             ,
             L"Print out the current AbilityTask counts by class. \'AbilitySystem.AbilityTask.Debug.RecordingEnabled\' must be turned on for this to function."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__WN_AbilityTaskPrintAbilityTaskCountsCmd__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbilitySystemComponent_h__Script_WNAbilityRuntime_223109179'' @ 14116b6a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbilitySystemComponent_h__Script_WNAbilityRuntime_223109179__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WNAbilityRuntime",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbilitySystemComponent_h__Script_WNAbilityRuntime_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbilitySystemComponent_h__Script_WNAbilityRuntime_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbilityTask_h__Script_WNAbilityRuntime_2845053582'' @ 14116b6f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbilityTask_h__Script_WNAbilityRuntime_2845053582__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WNAbilityRuntime",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbilityTask_h__Script_WNAbilityRuntime_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbilityTask_h__Script_WNAbilityRuntime_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbility_h__Script_WNAbilityRuntime_805886458'' @ 14116b740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbility_h__Script_WNAbilityRuntime_805886458__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WNAbilityRuntime",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbility_h__Script_WNAbilityRuntime_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WNAbility_Source_WNAbilityRuntime_Public_WNAbility_h__Script_WNAbilityRuntime_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WNAbilityRuntime'' @ 14116b790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WNAbilityRuntime__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xae30454c;
  local_res8[0].DeclarationsHash = 0x219067b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WNAbilityRuntime,L"/Script/WNAbilityRuntime",
             &Z_Registration_Info_UPackage__Script_WNAbilityRuntime,local_res8);
  return;
}

// `dynamic_initializer_for_'sAbilityInstanceUniqueIDGenerator'' @ 14116b7d0

void __cdecl _dynamic_initializer_for__sAbilityInstanceUniqueIDGenerator__(void)

{
  atexit(_dynamic_atexit_destructor_for__sAbilityInstanceUniqueIDGenerator__);
  return;
}

// `dynamic_initializer_for_'sAbilitySystemComponentUniqueIDGenerator'' @ 14116b7f0

void __cdecl _dynamic_initializer_for__sAbilitySystemComponentUniqueIDGenerator__(void)

{
  atexit(_dynamic_atexit_destructor_for__sAbilitySystemComponentUniqueIDGenerator__);
  return;
}

// NewProp_bBreakRemove_SetBit @ 148db3280

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakRemove_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bBreakActivate_SetBit @ 148db3290

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakActivate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bBreakDeactivate_SetBit @ 148db32a0

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakDeactivate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bBreakCancel_SetBit @ 148db32b0

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakCancel_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bBreakTick_SetBit @ 148db32c0

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakTick_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bBreakTaskAdd_SetBit @ 148db32d0

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakTaskAdd_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bBreakTaskRemove_SetBit @ 148db32e0

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakTaskRemove_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewProp_bBreakTaskActivate_SetBit @ 148db32f0

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakTaskActivate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 7) = 1;
  return;
}

// NewProp_bBreakTaskDeactivate_SetBit @ 148db3300

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakTaskDeactivate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bBreakTaskCancel_SetBit @ 148db3310

void __cdecl
Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewProp_bBreakTaskCancel_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 148db3320

void * __cdecl Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_AbilityBreakOptions,&UE::CoreUObject::Private::Construct<FWN_AbilityBreakOptions>,&UE::CoreUObject::Private::ConstructForTests<FWN_AbilityBreakOptions>,&UE::CoreUObject::Private::Destruct<FWN_AbilityBreakOptions>,&UE::CoreUObject::Private::Copy<FWN_AbilityBreakOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148db3360

void * __cdecl Z_Construct_UScriptStruct_FWN_AbilityInstanceHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_AbilityInstanceHandle,&UE::CoreUObject::Private::Construct<FWN_AbilityInstanceHandle>,&UE::CoreUObject::Private::ConstructForTests<FWN_AbilityInstanceHandle>,&UE::CoreUObject::Private::Destruct<FWN_AbilityInstanceHandle>,&UE::CoreUObject::Private::Copy<FWN_AbilityInstanceHandle>,&UE::CoreUObject::Private::GetStructTypeHash<FWN_AbilityInstanceHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_AbilitySystemComponent @ 148db33a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_AbilitySystemComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_AbilitySystemComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_AbilitySystemComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_AbilitySystemComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_AbilitySystemComponent.OuterSingleton;
}

// NewProp_bLogAddAbility_SetBit @ 148db33e0

void __cdecl
Z_Construct_UScriptStruct_FWN_ASCLogOptions_Statics::NewProp_bLogAddAbility_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bLogRemoveAbility_SetBit @ 148db33f0

void __cdecl
Z_Construct_UScriptStruct_FWN_ASCLogOptions_Statics::NewProp_bLogRemoveAbility_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bLogTryActivateAbility_SetBit @ 148db3400

void __cdecl
Z_Construct_UScriptStruct_FWN_ASCLogOptions_Statics::NewProp_bLogTryActivateAbility_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bLogDeactivateAbility_SetBit @ 148db3410

void __cdecl
Z_Construct_UScriptStruct_FWN_ASCLogOptions_Statics::NewProp_bLogDeactivateAbility_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bLogCancelAbility_SetBit @ 148db3420

void __cdecl
Z_Construct_UScriptStruct_FWN_ASCLogOptions_Statics::NewProp_bLogCancelAbility_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 148db3430

void * __cdecl Z_Construct_UScriptStruct_FWN_ASCLogOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_ASCLogOptions,&UE::CoreUObject::Private::Construct<FWN_ASCLogOptions>,&UE::CoreUObject::Private::ConstructForTests<FWN_ASCLogOptions>,&UE::CoreUObject::Private::Destruct<FWN_ASCLogOptions>,&UE::CoreUObject::Private::Copy<FWN_ASCLogOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_AbilityTask @ 148db3600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_AbilityTask(void)

{
  if (Z_Registration_Info_UClass_UWN_AbilityTask.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_AbilityTask.OuterSingleton,
               &Z_Construct_UClass_UWN_AbilityTask_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_AbilityTask.OuterSingleton;
}

// NewStructOps @ 148db3640

void * __cdecl Z_Construct_UScriptStruct_FWN_AbilityTaskDebugMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_AbilityTaskDebugMessage,&UE::CoreUObject::Private::Construct<FWN_AbilityTaskDebugMessage>,&UE::CoreUObject::Private::ConstructForTests<FWN_AbilityTaskDebugMessage>,&UE::CoreUObject::Private::Destruct<FWN_AbilityTaskDebugMessage>,&UE::CoreUObject::Private::Copy<FWN_AbilityTaskDebugMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148db36a0

void * __thiscall
FWN_AbilityRuntimeModule::_scalar_deleting_destructor_(FWN_AbilityRuntimeModule *this,uint param_1)

{
  *this = (FWN_AbilityRuntimeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UWN_AbilitySystemComponent_NoRegister @ 148db36e0

UClass * __cdecl Z_Construct_UClass_UWN_AbilitySystemComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilitySystemComponent",
               &Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton,
               UWN_AbilitySystemComponent::StaticRegisterNativesUWN_AbilitySystemComponent,0x250,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_AbilitySystemComponent>,
               InternalVTableHelperCtorCaller<UWN_AbilitySystemComponent>,local_res8,
               UGameplayTasksComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_AbilityContext_NoRegister @ 148db38a0

UClass * __cdecl Z_Construct_UClass_UWN_AbilityContext_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilityContext",
               &Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton,
               UWN_AbilityContext::StaticRegisterNativesUWN_AbilityContext,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_AbilityContext>,
               InternalVTableHelperCtorCaller<UWN_AbilityContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilityContext.InnerSingleton;
}

// Z_Construct_UClass_UWN_Ability_NoRegister @ 148db3950

UClass * __cdecl Z_Construct_UClass_UWN_Ability_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Ability.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_Ability",
               &Z_Registration_Info_UClass_UWN_Ability.InnerSingleton,
               UWN_Ability::StaticRegisterNativesUWN_Ability,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_Ability>,
               InternalVTableHelperCtorCaller<UWN_Ability>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Ability.InnerSingleton;
}

// Z_Construct_UPackage__Script_WNAbilityRuntime @ 148db3ef0

UPackage * __cdecl Z_Construct_UPackage__Script_WNAbilityRuntime(void)

{
  if (Z_Registration_Info_UPackage__Script_WNAbilityRuntime.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WNAbilityRuntime.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_WNAbilityRuntime.OuterSingleton;
}

// Z_Construct_UClass_UWN_Ability @ 148db3f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Ability(void)

{
  if (Z_Registration_Info_UClass_UWN_Ability.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Ability.OuterSingleton,
               &Z_Construct_UClass_UWN_Ability_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Ability.OuterSingleton;
}

// Z_Construct_UClass_UWN_AbilityContext @ 148db3f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_AbilityContext(void)

{
  if (Z_Registration_Info_UClass_UWN_AbilityContext.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_AbilityContext.OuterSingleton,
               &Z_Construct_UClass_UWN_AbilityContext_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_AbilityContext.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWN_AbilityInstanceHandle @ 148db3fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_AbilityInstanceHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_AbilityInstanceHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_AbilityInstanceHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_AbilityInstanceHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_AbilityInstanceHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_AbilityInstanceHandle.InnerSingleton;
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

// DefaultConstructItems<FWN_AbilityTaskDebugMessage,int> @ 148db4030

void __cdecl DefaultConstructItems<FWN_AbilityTaskDebugMessage,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_AbilityTaskDebugMessage,int> @ 148db4080

void __cdecl
DestructItems<FWN_AbilityTaskDebugMessage,int>(FWN_AbilityTaskDebugMessage *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Message;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeHash<FWN_AbilityInstanceHandleImpl,1> @ 148db47e0

uint __cdecl
GetTypeHash<FWN_AbilityInstanceHandleImpl,1>(TSharedPtr<FWN_AbilityInstanceHandleImpl,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 148db4810

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar11 = iVar8 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar8;
  do {
    while (param_2 <= iVar11) {
LAB_148db491b:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar9 = (longlong)iVar11;
        if (0 < iVar11) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10);
            pTVar12->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) = uVar2;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar8 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 8) <
                      *(int *)((longlong)param_1 + (longlong)iVar15 * 0x18 + 0x38)) {
                    iVar8 = iVar15;
                  }
                  iVar8 = iVar8 + 1;
                }
                lVar10 = (longlong)iVar8;
                pTVar1 = param_1 + iVar14;
                if (*(int *)((pTVar1->ElementData).Pad + 8) <=
                    *(int *)((longlong)param_1 + lVar10 * 0x18 + 8)) break;
                uVar4 = *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8);
                uVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                TVar5 = pTVar1->_s_1;
                uVar6 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                pTVar1->_s_1 = param_1[lVar10]._s_1;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) =
                     *(undefined8 *)((longlong)param_1 + lVar10 * 0x18 + 0x10);
                param_1[lVar10]._s_1 = TVar5;
                *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8) = uVar6;
                *(undefined8 *)((longlong)param_1 + lVar10 * 0x18 + 0x10) = uVar2;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar8 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar8;
    }
    iVar11 = iVar8 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 8) <
          *(int *)((longlong)param_1 + (longlong)iVar11 * 0x18 + 0x38)) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    lVar9 = (longlong)iVar13;
    pTVar12 = param_1 + iVar8;
    if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)param_1 + lVar9 * 0x18 + 8))
    goto LAB_148db491b;
    uVar4 = *(undefined8 *)((longlong)param_1[lVar9].ElementData.Pad + 8);
    iVar11 = iVar13 * 2 + 1;
    uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
    TVar5 = pTVar12->_s_1;
    uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
    pTVar12->_s_1 = param_1[lVar9]._s_1;
    *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) =
         *(undefined8 *)((longlong)param_1 + lVar9 * 0x18 + 0x10);
    param_1[lVar9]._s_1 = TVar5;
    *(undefined8 *)((longlong)param_1[lVar9].ElementData.Pad + 8) = uVar6;
    *(undefined8 *)((longlong)param_1 + lVar9 * 0x18 + 0x10) = uVar2;
    iVar8 = iVar13;
  } while( true );
}

// InternalConstructor<UWN_Ability> @ 148db4a30

void __cdecl InternalConstructor<UWN_Ability>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UWN_Ability::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UWN_Ability::_vftable__for__IGameplayTaskOwnerInterface__;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UWN_AbilityContext> @ 148db4ad0

void __cdecl InternalConstructor<UWN_AbilityContext>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWN_AbilityContext__6B_;
  }
  return;
}

// InternalConstructor<UWN_AbilitySystemComponent> @ 148db4b00

void __cdecl InternalConstructor<UWN_AbilitySystemComponent>(FObjectInitializer *param_1)

{
  if ((UWN_AbilitySystemComponent *)param_1->Obj != (UWN_AbilitySystemComponent *)0x0) {
    UWN_AbilitySystemComponent::UWN_AbilitySystemComponent
              ((UWN_AbilitySystemComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWN_AbilityTask> @ 148db4b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_AbilityTask>(FObjectInitializer *param_1)

{
  UWN_AbilityTask *this;
  FOutputDeviceRedirector *pFVar1;
  FName local_res8 [4];
  FString local_18;
  
  this = (UWN_AbilityTask *)param_1->Obj;
  if (this != (UWN_AbilityTask *)0x0) {
    UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
    this->_padding_ = (longlong)&UWN_AbilityTask::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_AbilityTask::_vftable__for__IGameplayTaskOwnerInterface__;
    (this->Ability).field0_0x0.DebugPtr = (UWN_Ability *)0x0;
    (this->AbilitySystemComponent).WeakPtr = (FWeakObjectPtr)0x0;
    if (0 < WN_AbilityTaskCVars::WN_AbilityTaskRecordingType) {
      DebugRecordAbilityTaskCreated(this);
    }
    WN_GlobalAbilityTaskCount = WN_GlobalAbilityTaskCount + 1;
    if (WN_AbilityTaskCVars::WN_AbilityTaskMaxCount <= WN_GlobalAbilityTaskCount) {
      if (2 < (byte)LogWNAbility._0_1_) {
        local_res8[0] = *(FName *)(this->_padding_ + 0x18);
        FName::ToString(local_res8,&local_18);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogWNAbility);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      if ((0 < WN_AbilityTaskCVars::WN_AbilityTaskRecordingType) &&
         (bHasDumpedAbilityTasks == false)) {
        DebugPrintAbilityTasksByClass();
        bHasDumpedAbilityTasks = true;
        pFVar1 = GetGlobalLogSingleton();
        FOutputDeviceRedirector::FlushThreadedLogs(pFVar1,None);
        pFVar1 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
        FOutputDeviceRedirector::Flush(pFVar1);
      }
      `UWN_AbilityTask::UWN_AbilityTask'::__l2::<lambda_1>::operator()(local_res8);
      return;
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<UWN_Ability> @ 148db4c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_Ability>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Ability::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UWN_Ability::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UWN_Ability::_vftable__for__IGameplayTaskOwnerInterface__;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_AbilityContext> @ 148db4d60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_AbilityContext>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_AbilityContext::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWN_AbilityContext__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_AbilitySystemComponent> @ 148db4e10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_AbilitySystemComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTasksComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_AbilitySystemComponent::GetPrivateStaticClass();
  this = (UGameplayTasksComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameplayTasksComponent *)0x0) {
    UGameplayTasksComponent::UGameplayTasksComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_AbilitySystemComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_AbilitySystemComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_AbilitySystemComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UWN_AbilitySystemComponent::_vftable__for__IGameplayTaskOwnerInterface__;
    this->_padding_ =
         (longlong)&UWN_AbilitySystemComponent::_vftable__for__IVisualLoggerDebugSnapshotInterface__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].TaskPriorityQueue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TaskPriorityQueue.ArrayNum = 0;
    this[1].TaskEvents.AllocatorInstance.Data =
         (FScriptContainerElement *)&___7FWN_AbilitySystemContext__6B_;
    this[1].TaskEvents.ArrayNum = 0;
    this[1].TaskEvents.ArrayMax = 0;
    this[1].TickingTasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_AbilityTask> @ 148db4fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_AbilityTask>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTask *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_AbilityTask::GetPrivateStaticClass();
  this = (UGameplayTask *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this->_padding_ = (longlong)&UWN_AbilityTask::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_AbilityTask::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 148db50a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_148db5170:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_148db51c0:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000148db51c9;
          goto LAB_148db51d3;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)((pTVar1->ElementData).Pad + 8) < *(int *)((pTVar13->ElementData).Pad + 8))
            {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_148db52f5;
      }
LAB_148db52e6:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_148db52f5:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000148db51c9:
  if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)pTVar9 + 0x20))
  goto LAB_148db51c0;
LAB_148db51d3:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(int *)((longlong)pTVar11 + -0x10) <= *(int *)((pTVar12->ElementData).Pad + 8));
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x10);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x20);
    uVar3 = *(undefined8 *)((longlong)pTVar9 + 0x28);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x20) = uVar2;
    *(undefined8 *)((longlong)pTVar9 + 0x28) = *(undefined8 *)((longlong)pTVar11 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
    goto LAB_148db51c0;
  }
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_148db52f5;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_148db52f5;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_148db52e6;
  goto LAB_148db5170;
}

// NewObject<UWN_Ability> @ 148db53b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_Ability * __cdecl
NewObject<UWN_Ability>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UWN_Ability *pUVar2;
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
  pUVar1 = UWN_Ability::StaticClass();
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
  pUVar2 = (UWN_Ability *)
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

// `vector_deleting_destructor'`adjustor{40}' @ 148db6b10

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Ability::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Ability::_vector_deleting_destructor__adjustor_40__(UWN_Ability *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Ability *)&this[-1].TaskDebugMessages,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148db6b20

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AbilitySystemComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AbilitySystemComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_AbilitySystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_AbilitySystemComponent *)&this[-1].Abilities.field_0x40,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 148db6b30

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AbilitySystemComponent::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AbilitySystemComponent::_vector_deleting_destructor__adjustor_192__
          (UWN_AbilitySystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_AbilitySystemComponent *)&this[-1].TagCountMap.field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 148db6b44

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AbilitySystemComponent::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AbilitySystemComponent::_vector_deleting_destructor__adjustor_200__
          (UWN_AbilitySystemComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_AbilitySystemComponent *)&this[-1].TagCountMap.field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 148db6b58

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AbilityTask::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AbilityTask::_vector_deleting_destructor__adjustor_40__(UWN_AbilityTask *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_AbilityTask *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148db6b70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWN_Ability,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWN_Ability,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148db6ba0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_AbilityInstanceHandleImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWN_AbilityInstanceHandleImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148db6be0

void * __thiscall
FWN_AbilitySystemContext::_scalar_deleting_destructor_(FWN_AbilitySystemContext *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FWN_AbilitySystemContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148db6c20

void * __thiscall UWN_Ability::_scalar_deleting_destructor_(UWN_Ability *this,uint param_1)

{
  FSharedReferencer<1> *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->LogicalChildren).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_AbilityTaskDebugMessage,int>
            ((FWN_AbilityTaskDebugMessage *)(this->TaskDebugMessages).AllocatorInstance.Data,
             (this->TaskDebugMessages).ArrayNum);
  pFVar1 = (this->TaskDebugMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CancelTaskInstanceNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EndTaskInstanceNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = &(this->InstanceHandle).HandleImpl.SharedReferenceCount;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->InstanceHandle != (FWN_AbilityInstanceHandle *)&local_18) {
    (this->InstanceHandle).HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this_00->ReferenceController);
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148db6d50

void * __thiscall
UWN_AbilityContext::_scalar_deleting_destructor_(UWN_AbilityContext *this,uint param_1)

{
  *(undefined ***)this = &___7UWN_AbilityContext__6B_;
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

// `scalar_deleting_destructor' @ 148db6db0

void * __thiscall
UWN_AbilitySystemComponent::_scalar_deleting_destructor_
          (UWN_AbilitySystemComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  int local_18 [4];
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  local_18[0] = this->UniqueID;
  if ((sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data <=
       (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
      (longlong)sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if (sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum ==
      sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayMax) {
    sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance,
                    &sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayMax);
  }
  lVar5 = (longlong)sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum;
  sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum =
       sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum + 1;
  *(int *)(sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data + lVar5 * 4) =
       local_18[0];
  TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
           *)&this->Abilities);
  *(undefined4 *)&(this->Abilities).field_0x48 = 0;
  (this->Context)._padding_ = (longlong)&___7FWN_AbilitySystemContext__6B_;
  pvVar4 = *(void **)&(this->Abilities).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Abilities);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedTagEvent).field_0x8,*(int *)&(this->OnChangedTagEvent).field_0x10);
  pvVar4 = *(void **)&(this->OnChangedTagEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedTagEvent);
  *(undefined4 *)&(this->TagCountMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->TagCountMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagCountMap);
  pFVar1 = (this->Tags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UGameplayTasksComponent::~UGameplayTasksComponent((UGameplayTasksComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148db6fd0

void * __thiscall UWN_AbilityTask::_scalar_deleting_destructor_(UWN_AbilityTask *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// DebugPrintAbilityTasksByClass @ 148db7db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DebugPrintAbilityTasksByClass(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  byte bVar5;
  undefined8 uVar6;
  TMap<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_154;
  uint local_150;
  FString local_148;
  FString local_138;
  int local_128;
  int local_124;
  int local_120;
  undefined1 *local_118;
  undefined1 **local_110;
  FName local_108;
  undefined1 *local_100;
  undefined1 **local_f8;
  FName local_f0;
  TMap<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  if (WN_AbilityTaskCVars::WN_AbilityTaskRecordingType < 1) {
    if (3 < (byte)LogWNAbility._0_1_) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Recording_of_UW_151cef468,
                 (FLogCategoryBase *)&LogWNAbility);
    }
  }
  else {
    iVar4 = StaticAbilityTasksByClass._8_4_ - StaticAbilityTasksByClass._52_4_;
    if (0 < WN_AbilityTaskCVars::WN_AbilityTaskDebugPrintTopNResults) {
      iVar4 = WN_AbilityTaskCVars::WN_AbilityTaskDebugPrintTopNResults;
    }
    iVar18 = 0;
    if (3 < (byte)LogWNAbility._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogWNAbility);
    }
    local_118 = local_res10;
    local_110 = &local_118;
    if (0 < (int)(StaticAbilityTasksByClass._8_4_ - StaticAbilityTasksByClass._52_4_)) {
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&StaticAbilityTasksByClass);
      uVar6 = StaticAbilityTasksByClass._0_8_;
      iVar13 = StaticAbilityTasksByClass._8_4_ - StaticAbilityTasksByClass._52_4_;
      if ((iVar13 < 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
                ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar6,iVar13,
                 local_res8[0],
                 (FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
                  *)&local_110);
    }
    TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
              *)&StaticAbilityTasksByClass);
    local_150 = 1;
    iVar13 = 0;
    iVar15 = 0;
    uVar17 = StaticAbilityTasksByClass._40_4_;
    uVar9 = 1;
    uVar10 = 0;
    if (uVar17 != 0) {
      puVar16 = (uint *)&StaticAbilityTasksByClass.field_0x10;
      if (StaticAbilityTasksByClass._32_8_ != 0) {
        puVar16 = (uint *)StaticAbilityTasksByClass._32_8_;
      }
      uVar9 = *puVar16;
      iVar15 = 0;
      while (uVar9 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar9 = 1;
        uVar10 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_148db7f52;
        uVar9 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar9 & uVar9;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_128 = (int)lVar11;
      uVar10 = iVar15 + -1 + local_128;
      if ((int)uVar17 < (int)uVar10) {
        uVar10 = uVar17;
      }
    }
LAB_148db7f52:
    bVar5 = StaticAbilityTasksByClass._40_1_;
    uVar14 = uVar17 & 0xffffffe0;
    TStack_e0._padding_ = CONCAT44(uVar9,iVar13);
    TStack_e0.CurrentBitIndex = uVar10;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    local_e8 = &StaticAbilityTasksByClass;
    iVar13 = (int)uVar17 >> 5;
    TStack_e0._28_4_ = local_6c;
    TStack_e0.BaseBitIndex = iVar15;
    uStack_c0 = CONCAT44(uStack_154,
                         StaticAbilityTasksByClass._8_4_ - StaticAbilityTasksByClass._52_4_);
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&StaticAbilityTasksByClass.field_0x10;
    uVar9 = uVar17;
    if ((int)uVar17 < 0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = StaticAbilityTasksByClass._40_4_;
    }
    if (uVar17 != uVar9) {
      lVar11 = 0x154c76440;
      if (StaticAbilityTasksByClass._32_8_ != 0) {
        lVar11 = StaticAbilityTasksByClass._32_8_;
      }
      uVar10 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar11 + (longlong)iVar13 * 4);
      while (uVar10 == 0) {
        lVar12 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar17 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_148db8064;
        uVar10 = *(uint *)(lVar11 + 4 + lVar12 * 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_124 = (int)lVar11;
      uVar17 = local_124 + -1 + uVar14;
      if ((int)uVar9 < (int)uVar17) {
        uVar17 = uVar9;
      }
    }
LAB_148db8064:
    iVar15 = 0;
    iVar13 = 0;
    while( true ) {
      pTVar7 = local_e8;
      if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_e0.CurrentBitIndex == uVar17) &&
          (TStack_e0.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&StaticAbilityTasksByClass.field_0x10)) &&
         (pTVar7 == &StaticAbilityTasksByClass)) break;
      plVar1 = (longlong *)(*(longlong *)pTVar7 + (longlong)TStack_e0.CurrentBitIndex * 0x18);
      if (iVar15 < iVar4) {
        lVar11 = *plVar1;
        if (lVar11 == 0) {
          FString::FString(&local_148,L"None");
        }
        else {
          local_108 = *(FName *)(lVar11 + 0x18);
          FName::ToString(&local_108,&local_148);
        }
        if (3 < (byte)LogWNAbility._0_1_) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogWNAbility);
        }
        iVar15 = iVar15 + 1;
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      iVar13 = iVar13 + (int)plVar1[1];
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
    if ((0 < WN_GlobalAbilityTaskCount - iVar13) && (3 < (byte)LogWNAbility._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogWNAbility);
    }
    if (WN_AbilityTaskCVars::WN_RecordAbilityTaskSourceAbilityCounts != false) {
      if (3 < (byte)LogWNAbility._0_1_) {
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogWNAbility);
      }
      local_100 = local_res18;
      local_f8 = &local_100;
      if (0 < (int)(StaticAbilityTasksByAbilityClass._8_4_ - StaticAbilityTasksByAbilityClass._52_4_
                   )) {
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&StaticAbilityTasksByAbilityClass);
        uVar6 = StaticAbilityTasksByAbilityClass._0_8_;
        iVar13 = StaticAbilityTasksByAbilityClass._8_4_ - StaticAbilityTasksByAbilityClass._52_4_;
        if ((iVar13 < 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        AlgoImpl::
        IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
                  ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar6,iVar13,
                   local_res8[0],
                   (FElementCompareClass<TSortableMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
                    *)&local_f8);
      }
      TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                *)&StaticAbilityTasksByAbilityClass);
      iVar13 = 0;
      iVar15 = 0;
      uVar10 = StaticAbilityTasksByAbilityClass._40_4_;
      uVar9 = 0;
      if (uVar10 != 0) {
        puVar16 = (uint *)&StaticAbilityTasksByAbilityClass.field_0x10;
        if (StaticAbilityTasksByAbilityClass._32_8_ != 0) {
          puVar16 = (uint *)StaticAbilityTasksByAbilityClass._32_8_;
        }
        uVar9 = *puVar16;
        while (uVar9 == 0) {
          lVar11 = (longlong)iVar13;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar13 + 1;
          uVar9 = uVar10;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_148db82e3;
          uVar9 = puVar16[lVar11 + 1];
        }
        local_150 = -uVar9 & uVar9;
        uVar2 = (ulonglong)local_150 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_120 = (int)lVar11;
        uVar9 = iVar15 + -1 + local_120;
        if ((int)uVar10 < (int)uVar9) {
          uVar9 = uVar10;
        }
      }
LAB_148db82e3:
      uVar17 = uVar10 & 0xffffffe0;
      bVar5 = StaticAbilityTasksByAbilityClass._40_1_;
      TStack_b0._padding_ = CONCAT44(local_150,iVar13);
      TStack_b0.CurrentBitIndex = uVar9;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      local_b8 = &StaticAbilityTasksByAbilityClass;
      iVar13 = (int)uVar10 >> 5;
      TStack_b0._28_4_ = local_4c;
      TStack_b0.BaseBitIndex = iVar15;
      uStack_90 = CONCAT44(uStack_154,
                           StaticAbilityTasksByAbilityClass._8_4_ -
                           StaticAbilityTasksByAbilityClass._52_4_);
      TStack_b0.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)&StaticAbilityTasksByAbilityClass.field_0x10;
      uVar9 = uVar10;
      if ((int)uVar10 < 0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = StaticAbilityTasksByAbilityClass._40_4_;
      }
      if (uVar10 != uVar9) {
        lVar11 = 0x154c76490;
        if (StaticAbilityTasksByAbilityClass._32_8_ != 0) {
          lVar11 = StaticAbilityTasksByAbilityClass._32_8_;
        }
        uVar10 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar11 + (longlong)iVar13 * 4);
        while (uVar10 == 0) {
          lVar12 = (longlong)iVar13;
          uVar17 = uVar17 + 0x20;
          iVar13 = iVar13 + 1;
          uVar10 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_148db8400;
          uVar10 = *(uint *)(lVar11 + 4 + lVar12 * 4);
        }
        uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar10 = (int)lVar11 + -1 + uVar17;
        if ((int)uVar9 < (int)uVar10) {
          uVar10 = uVar9;
        }
      }
LAB_148db8400:
      while( true ) {
        pTVar7 = local_b8;
        if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
          `TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if ((((TStack_b0.CurrentBitIndex == uVar10) &&
             (TStack_b0.Array ==
              (TBitArray<FDefaultBitArrayAllocator> *)&StaticAbilityTasksByAbilityClass.field_0x10))
            && (pTVar7 == &StaticAbilityTasksByAbilityClass)) || (iVar4 <= iVar18)) break;
        lVar11 = *(longlong *)(*(longlong *)pTVar7 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
        if (lVar11 == 0) {
          FString::FString(&local_138,L"None");
        }
        else {
          local_f0 = *(FName *)(lVar11 + 0x18);
          FName::ToString(&local_f0,&local_138);
        }
        if (3 < (byte)LogWNAbility._0_1_) {
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogWNAbility);
        }
        iVar18 = iVar18 + 1;
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      }
    }
    if (3 < (byte)LogWNAbility._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogWNAbility);
      return;
    }
  }
  return;
}

// DebugRecordAbilityTaskCreated @ 148db8580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DebugRecordAbilityTaskCreated(UWN_AbilityTask *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_void___cdecl_DebugRecordAbilityTaskCreated(UWN_AbilityTask_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
  FVar6;
  int *piVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar8;
  longlong lVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  TPairInitializer<UClass_const_*_const_&,int_&&> local_res10;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_AbilityTaskDebugRecording ==
        (FThreadSafeStaticStat<_void___cdecl_DebugRecordAbilityTaskCreated(UWN_AbilityTask_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
         )0x0) {
      pFVar5 = FName::FName((FName *)&local_res8.s,"STAT_AbilityTaskDebugRecording");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AbilityTaskDebugRecording,*pFVar5,
                 L"STAT_AbilityTaskDebugRecording","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar6 = StatPtr_STAT_AbilityTaskDebugRecording;
  if (StatPtr_STAT_AbilityTaskDebugRecording ==
      (FThreadSafeStaticStat<_void___cdecl_DebugRecordAbilityTaskCreated(UWN_AbilityTask_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
       )0x0) {
    pFVar5 = FName::FName((FName *)&local_res10,"STAT_AbilityTaskDebugRecording");
    FVar6 = (FThreadSafeStaticStat<_void___cdecl_DebugRecordAbilityTaskCreated(UWN_AbilityTask_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AbilityTaskDebugRecording,
                         *pFVar5,L"STAT_AbilityTaskDebugRecording","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbilityTask.cpp"
                   ,0xc1);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_148db8709;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_148db8709:
  if (param_1 == (UWN_AbilityTask *)0x0) {
    local_res10.Value = (int *)0x0;
  }
  else {
    local_res10.Value = (int *)param_1->_padding_;
    if ((UClass *)local_res10.Value != (UClass *)0x0) {
      uVar8 = ((uint)((ulonglong)local_res10.Value >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res10.Value >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      if (StaticAbilityTasksByClass._8_4_ != StaticAbilityTasksByClass._52_4_) {
        lVar9 = 0x154c76468;
        if (StaticAbilityTasksByClass._64_8_ != 0) {
          lVar9 = StaticAbilityTasksByClass._64_8_;
        }
        for (iVar1 = *(int *)(lVar9 + (ulonglong)
                                      (StaticAbilityTasksByClass._72_4_ - 1 &
                                      (uVar8 >> 0x10 ^ uVar8)) * 4); iVar1 != -1;
            iVar1 = *(int *)(StaticAbilityTasksByClass._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
          if (*(UClass **)(StaticAbilityTasksByClass._0_8_ + (longlong)iVar1 * 0x18) ==
              (UClass *)local_res10.Value) {
            piVar7 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                     ::FindChecked((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                                    *)&StaticAbilityTasksByClass,(UClass *)local_res10.Value);
            *piVar7 = *piVar7 + 1;
            goto LAB_148db8805;
          }
        }
      }
      local_38.StatData.Pad = (uchar  [8])&local_res10.Value;
      local_res8.s.LowPart = 1;
      local_38.NameAndInfo = (FStatNameAndInfo)&local_res8;
      TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UClass_const_*_const_&,int_&&>_>
                ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                  *)&StaticAbilityTasksByClass,&local_res10,(bool *)&local_38);
    }
  }
LAB_148db8805:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_38.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar11.Number,FVar12.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_38);
      piVar7 = &this->ScopeCount;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// DebugRecordAbilityTaskDestroyed @ 148db8dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DebugRecordAbilityTaskDestroyed(UWN_AbilityTask *param_1)

{
  int iVar1;
  LARGE_INTEGER LVar2;
  UWN_Ability *pUVar3;
  LARGE_INTEGER LVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_void___cdecl_DebugRecordAbilityTaskDestroyed(UWN_AbilityTask_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
  FVar9;
  int *piVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar11;
  longlong lVar12;
  LARGE_INTEGER LVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar14.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_AbilityTaskDebugRecording ==
        (FThreadSafeStaticStat<_void___cdecl_DebugRecordAbilityTaskDestroyed(UWN_AbilityTask_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
         )0x0) {
      pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_AbilityTaskDebugRecording");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AbilityTaskDebugRecording,*pFVar8,
                 L"STAT_AbilityTaskDebugRecording","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar9 = StatPtr_STAT_AbilityTaskDebugRecording;
  if (StatPtr_STAT_AbilityTaskDebugRecording ==
      (FThreadSafeStaticStat<_void___cdecl_DebugRecordAbilityTaskDestroyed(UWN_AbilityTask_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
       )0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_AbilityTaskDebugRecording");
    FVar9 = (FThreadSafeStaticStat<_void___cdecl_DebugRecordAbilityTaskDestroyed(UWN_AbilityTask_const_*)_::_2_::FStat_STAT_AbilityTaskDebugRecording>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AbilityTaskDebugRecording,
                         *pFVar8,L"STAT_AbilityTaskDebugRecording","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar13 = *(LARGE_INTEGER *)FVar9;
  bVar5 = false;
  bVar7 = false;
  if ((LVar13.s.LowPart != 0) || (LVar13.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbilityTask.cpp"
                   ,0xea);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar13;
      FThreadStats::AddMessage((FName)LVar13.s,CycleScopeStart);
      bVar6 = true;
      FVar14.Value = LVar13.s.LowPart;
      goto LAB_148db8f4b;
    }
  }
  bVar6 = false;
  LVar13._0_4_ = 0;
  LVar13._4_4_ = 0;
LAB_148db8f4b:
  if ((param_1 != (UWN_AbilityTask *)0x0) &&
     (LVar2 = (LARGE_INTEGER)param_1->_padding_, (FName)LVar2.QuadPart != (FName)0x0)) {
    if ((WN_AbilityTaskCVars::WN_RecordAbilityTaskSourceAbilityCounts != false) &&
       (((pUVar3 = (param_1->Ability).field0_0x0.DebugPtr, pUVar3 != (UWN_Ability *)0x0 &&
         (LVar4 = (LARGE_INTEGER)pUVar3->_padding_, (FName)LVar4.QuadPart != (FName)0x0)) &&
        (uVar11 = ((uint)((ulonglong)LVar4.QuadPart >> 0x14) & 0xffff ^
                  (uint)((ulonglong)LVar4.QuadPart >> 4)) * -0x7a143595,
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb, uVar11 = uVar11 >> 0x10 ^ uVar11,
        StaticAbilityTasksByAbilityClass._8_4_ != StaticAbilityTasksByAbilityClass._52_4_)))) {
      lVar12 = 0x154c764b8;
      if (StaticAbilityTasksByAbilityClass._64_8_ != 0) {
        lVar12 = StaticAbilityTasksByAbilityClass._64_8_;
      }
      for (iVar1 = *(int *)(lVar12 + (ulonglong)
                                     (StaticAbilityTasksByAbilityClass._72_4_ - 1 & uVar11) * 4);
          iVar1 != -1;
          iVar1 = *(int *)(StaticAbilityTasksByAbilityClass._0_8_ + 0x10 + (longlong)iVar1 * 0x18))
      {
        if (*(FName *)(StaticAbilityTasksByAbilityClass._0_8_ + (longlong)iVar1 * 0x18) ==
            (FName)LVar4.QuadPart) {
          piVar10 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                    ::FindChecked((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                                   *)&StaticAbilityTasksByAbilityClass,(UClass *)LVar4);
          *piVar10 = *piVar10 + -1;
          piVar10 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                    ::FindChecked((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                                   *)&StaticAbilityTasksByAbilityClass,(UClass *)LVar4);
          if ((*piVar10 < 1) &&
             (local_res8 = LVar4,
             StaticAbilityTasksByAbilityClass._8_4_ != StaticAbilityTasksByAbilityClass._52_4_)) {
            TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<UClass_const_*>
                      ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                        *)&StaticAbilityTasksByAbilityClass,uVar11,(UClass **)&local_res8);
          }
          break;
        }
      }
    }
    uVar11 = ((uint)((ulonglong)LVar2.QuadPart >> 0x14) & 0xffff ^
             (uint)((ulonglong)LVar2.QuadPart >> 4)) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    uVar11 = uVar11 >> 0x10 ^ uVar11;
    if (StaticAbilityTasksByClass._8_4_ != StaticAbilityTasksByClass._52_4_) {
      lVar12 = 0x154c76468;
      if (StaticAbilityTasksByClass._64_8_ != 0) {
        lVar12 = StaticAbilityTasksByClass._64_8_;
      }
      for (iVar1 = *(int *)(lVar12 + (ulonglong)(StaticAbilityTasksByClass._72_4_ - 1 & uVar11) * 4)
          ; iVar1 != -1;
          iVar1 = *(int *)(StaticAbilityTasksByClass._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
        if (*(FName *)(StaticAbilityTasksByClass._0_8_ + (longlong)iVar1 * 0x18) ==
            (FName)LVar2.QuadPart) {
          piVar10 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                    ::FindChecked((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                                   *)&StaticAbilityTasksByClass,(UClass *)LVar2);
          *piVar10 = *piVar10 + -1;
          piVar10 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                    ::FindChecked((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                                   *)&StaticAbilityTasksByClass,(UClass *)LVar2);
          if ((*piVar10 < 1) &&
             (local_res8 = LVar2,
             StaticAbilityTasksByClass._8_4_ != StaticAbilityTasksByClass._52_4_)) {
            TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<UClass_const_*>
                      ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                        *)&StaticAbilityTasksByClass,uVar11,(UClass **)&local_res8);
          }
          break;
        }
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar13.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_38.NameAndInfo.Number = LVar13.s.HighPart & 0xffff6fffU | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_38);
      piVar10 = &this->ScopeCount;
      *piVar10 = *piVar10 + -1;
      if (*piVar10 == 0) {
        FThreadStats::Flush(this,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeWNAbility @ 148db9420

void __cdecl EmptyLinkFunctionForGeneratedCodeWNAbility(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWNAbilityRuntime_init @ 148db9430

void __cdecl EmptyLinkFunctionForGeneratedCodeWNAbilityRuntime_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWNAbilitySystemComponent @ 148db9440

void __cdecl EmptyLinkFunctionForGeneratedCodeWNAbilitySystemComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWNAbilityTask @ 148db9450

void __cdecl EmptyLinkFunctionForGeneratedCodeWNAbilityTask(void)

{
  return;
}

// Z_Construct_UClass_UWN_AbilityTask_NoRegister @ 148dbc130

UClass * __cdecl Z_Construct_UClass_UWN_AbilityTask_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilityTask",
               &Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton,
               UWN_AbilityTask::StaticRegisterNativesUWN_AbilityTask,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UWN_AbilityTask>,InternalVTableHelperCtorCaller<UWN_AbilityTask>,
               local_res8,UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilityTask.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWN_ASCLogOptions @ 148dbc1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_ASCLogOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_ASCLogOptions.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_ASCLogOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_ASCLogOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_ASCLogOptions.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_ASCLogOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_AbilityBreakOptions @ 148dbc270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_AbilityBreakOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_AbilityBreakOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_AbilityBreakOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_AbilityBreakOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_AbilityBreakOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_AbilityBreakOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_AbilityTaskDebugMessage @ 148dbc2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_AbilityTaskDebugMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_AbilityTaskDebugMessage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_AbilityTaskDebugMessage.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_AbilityTaskDebugMessage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_AbilityTaskDebugMessage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_AbilityTaskDebugMessage.InnerSingleton;
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

// IMPLEMENT_MODULE_WNAbilityRuntime @ 148dbc380

void __cdecl IMPLEMENT_MODULE_WNAbilityRuntime(void)

{
  return;
}

// Invalid'' @ 15040cc30

void __cdecl `dynamic_atexit_destructor_for_'FWN_AbilityInstanceHandle::Invalid__(void)

{
  FSharedReferencer<1> local_10 [2];
  
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FWN_AbilityInstanceHandle::Invalid.HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FWN_AbilityInstanceHandle::Invalid.HandleImpl.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FWN_AbilityInstanceHandle::Invalid.HandleImpl.SharedReferenceCount.ReferenceController)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVar_WN_AbilityTaskDebugPrintTopNResults'' @ 15040cc80

void __cdecl
WN_AbilityTaskCVars::_dynamic_atexit_destructor_for__CVar_WN_AbilityTaskDebugPrintTopNResults__
          (void)

{
  CVar_WN_AbilityTaskDebugPrintTopNResults._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_WN_AbilityTaskDebugPrintTopNResults);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_WN_AbilityTaskWarnIfBroadcastSuppress'' @ 15040cca0

void __cdecl _dynamic_atexit_destructor_for__CVar_WN_AbilityTaskWarnIfBroadcastSuppress__(void)

{
  CVar_WN_AbilityTaskWarnIfBroadcastSuppress._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_WN_AbilityTaskWarnIfBroadcastSuppress);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_WN_MaxAbilityTaskCount'' @ 15040ccc0

void __cdecl
WN_AbilityTaskCVars::_dynamic_atexit_destructor_for__CVar_WN_MaxAbilityTaskCount__(void)

{
  CVar_WN_MaxAbilityTaskCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_WN_MaxAbilityTaskCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_WN_RecordAbilityTaskCounts'' @ 15040cce0

void __cdecl
WN_AbilityTaskCVars::_dynamic_atexit_destructor_for__CVar_WN_RecordAbilityTaskCounts__(void)

{
  CVar_WN_RecordAbilityTaskCounts._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_WN_RecordAbilityTaskCounts);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_WN_RecordAbilityTaskSourceAbilityCounts'' @ 15040cd00

void __cdecl
WN_AbilityTaskCVars::_dynamic_atexit_destructor_for__CVar_WN_RecordAbilityTaskSourceAbilityCounts__
          (void)

{
  CVar_WN_RecordAbilityTaskSourceAbilityCounts._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_WN_RecordAbilityTaskSourceAbilityCounts);
  return;
}

// `dynamic_atexit_destructor_for_'LogWNAbility'' @ 15040cd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWNAbility__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWNAbility);
  return;
}

// `dynamic_atexit_destructor_for_'StaticAbilityTasksByAbilityClass'' @ 15040cd40

void __cdecl _dynamic_atexit_destructor_for__StaticAbilityTasksByAbilityClass__(void)

{
  StaticAbilityTasksByAbilityClass._72_4_ = 0;
  if (StaticAbilityTasksByAbilityClass._64_8_ != 0) {
    FMemory::Free((void *)StaticAbilityTasksByAbilityClass._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&StaticAbilityTasksByAbilityClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticAbilityTasksByClass'' @ 15040cd80

void __cdecl _dynamic_atexit_destructor_for__StaticAbilityTasksByClass__(void)

{
  StaticAbilityTasksByClass._72_4_ = 0;
  if (StaticAbilityTasksByClass._64_8_ != 0) {
    FMemory::Free((void *)StaticAbilityTasksByClass._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&StaticAbilityTasksByClass);
  return;
}

// `dynamic_atexit_destructor_for_'WN_AbilityTaskPrintAbilityTaskCountsCmd'' @ 15040cdc0

void __cdecl
WN_AbilityTaskCVars::_dynamic_atexit_destructor_for__WN_AbilityTaskPrintAbilityTaskCountsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&WN_AbilityTaskPrintAbilityTaskCountsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'sAbilityInstanceUniqueIDGenerator'' @ 15040cde0

void __cdecl _dynamic_atexit_destructor_for__sAbilityInstanceUniqueIDGenerator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data;
  if (sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (sAbilityInstanceUniqueIDGenerator.FreedIDs.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'sAbilitySystemComponentUniqueIDGenerator'' @ 15040ce00

void __cdecl _dynamic_atexit_destructor_for__sAbilitySystemComponentUniqueIDGenerator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data;
  if (sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data !=
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

