// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 191

// Invalid'' @ 1413cd130

void __cdecl `dynamic_initializer_for_'FStateTreeExternalDataHandle::Invalid__(void)

{
  FStateTreeExternalDataHandle::Invalid.DataHandle._0_4_ = FStateTreeDataHandle::Invalid._0_4_;
  FStateTreeExternalDataHandle::Invalid.DataHandle.StateHandle =
       FStateTreeDataHandle::Invalid.StateHandle;
  return;
}

// `dynamic_initializer_for_'CVarCopyBoundPropertiesOnNonTickedTask'' @ 1413cd160

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_initializer_for__CVarCopyBoundPropertiesOnNonTickedTask__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCopyBoundPropertiesOnNonTickedTask,L"StateTree.CopyBoundPropertiesOnNonTickedTask"
             ,&bCopyBoundPropertiesOnNonTickedTask,
             L"When ticking the tasks, copy the bindings when the tasks are not ticked because it disabled ticking or completed. The bindings are not updated on failure."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCopyBoundPropertiesOnNonTickedTask__);
  return;
}

// `dynamic_initializer_for_'CVarGlobalTasksCompleteFrame'' @ 1413cd1b0

void __cdecl
UE::StateTree::ExecutionContext::Private::_dynamic_initializer_for__CVarGlobalTasksCompleteFrame__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGlobalTasksCompleteFrame,L"StateTree.GlobalTasksCompleteOwningFrame",
             &bGlobalTasksCompleteOwningFrame,
             L"If true, the global tasks complete the tree they are part of. The root or the linked state. 5.6 behavior.\nIf false, the global tasks complete the root tree execution (even for linked assets). 5.5 behavior.You should upgrade your asset. This option is to help migrate to the new behavior."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGlobalTasksCompleteFrame__);
  return;
}

// `dynamic_initializer_for_'CVarSetDeprecatedTransitionResultProperties'' @ 1413cd200

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_initializer_for__CVarSetDeprecatedTransitionResultProperties__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSetDeprecatedTransitionResultProperties,
             L"StateTree.SetDeprecatedTransitionResultProperties",
             &bSetDeprecatedTransitionResultProperties,
             L"If true, set the FStateTreeTransitionResult deprecated properties when a transition occurs.\nThe information is not relevant and not valid but can be needed for backward compatibility."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSetDeprecatedTransitionResultProperties__);
  return;
}

// `dynamic_initializer_for_'CVarTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition'' @ 1413cd250

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_initializer_for__CVarTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition,
             L"StateTree.TargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition",
             &bTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition,
             L"If true, when a transition is triggered by an event that occurs and the target state requires an event, \nthen the state required event must match the transition required event."
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition__
        );
  return;
}

// `dynamic_initializer_for_'CVarTickGlobalNodesFollowingTreeHierarchy'' @ 1413cd2a0

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_initializer_for__CVarTickGlobalNodesFollowingTreeHierarchy__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTickGlobalNodesFollowingTreeHierarchy,
             L"StateTree.TickGlobalNodesFollowingTreeHierarchy",
             &bTickGlobalNodesFollowingTreeHierarchy,
             L"If true, then the global evaluators and global tasks are ticked following the asset hierarchy.\nThe order is (1)root evaluators, (2)root global tasks, (3)state tasks, (4)linked asset evaluators, (5)linked asset global tasks, (6)linked asset state tasks.\nIf false (5.5 behavior), then all the global nodes, from all linked assets, are evaluated, then the state tasks are ticked.\nYou should upgrade your asset. This option is to help migrate to the new behavior."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTickGlobalNodesFollowingTreeHierarchy__);
  return;
}

// `dynamic_initializer_for_'GRegisterStateTreeInstanceStorageCustomVersion'' @ 1413cd2f0

void __cdecl _dynamic_initializer_for__GRegisterStateTreeInstanceStorageCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FStateTreeInstanceStorageCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,1,L"StateTreeInstanceStorage",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterStateTreeInstanceStorageCustomVersion__);
  return;
}

// `dynamic_initializer_for_'OnTraceAnalysisStateChanged'' @ 1413cd330

void __cdecl UE::StateTree::Delegates::_dynamic_initializer_for__OnTraceAnalysisStateChanged__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnTraceAnalysisStateChanged__);
  return;
}

// `dynamic_initializer_for_'OnTracingStateChanged'' @ 1413cd350

void __cdecl UE::StateTree::Delegates::_dynamic_initializer_for__OnTracingStateChanged__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnTracingStateChanged__);
  return;
}

// `dynamic_initializer_for_'OnTracingTimelineScrubbed'' @ 1413cd370

void __cdecl UE::StateTree::Delegates::_dynamic_initializer_for__OnTracingTimelineScrubbed__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnTracingTimelineScrubbed__);
  return;
}

// `dynamic_initializer_for_'SchemaCanBeOverridenTag'' @ 1413cd390

void __cdecl UE::StateTree::_dynamic_initializer_for__SchemaCanBeOverridenTag__(void)

{
  ::FName::FName(&SchemaCanBeOverridenTag,L"SchemaCanBeOverriden");
  return;
}

// `dynamic_initializer_for_'SchemaTag'' @ 1413cd3b0

void __cdecl UE::StateTree::_dynamic_initializer_for__SchemaTag__(void)

{
  ::FName::FName(&SchemaTag,L"Schema");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h__Script_StateTreeModule_1497094595'' @ 1413cd3d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h__Script_StateTreeModule_1497094595__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h__Script_StateTreeModule_2372613714'' @ 1413cd410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h__Script_StateTreeModule_2372613714__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h__Script_StateTreeModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionExtension_h__Script_StateTreeModule_1528512613'' @ 1413cd460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionExtension_h__Script_StateTreeModule_1528512613__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionExtension_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h__Script_StateTreeModule_3110317306'' @ 1413cd4a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h__Script_StateTreeModule_3110317306__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,0xe,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExecutionTypes_h__Script_StateTreeModule_Statics
             ::EnumInfo,8);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h__Script_StateTreeModule_1395822555'' @ 1413cd4f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h__Script_StateTreeModule_1395822555__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeExtension_h__Script_StateTreeModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h__Script_StateTreeModule_4010191187'' @ 1413cd530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h__Script_StateTreeModule_4010191187__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeFunctionLibrary_h__Script_StateTreeModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceContainer_h__Script_StateTreeModule_870905820'' @ 1413cd570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceContainer_h__Script_StateTreeModule_870905820__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceContainer_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h__Script_StateTreeModule_1614754699'' @ 1413cd5b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h__Script_StateTreeModule_1614754699__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateTreeModule",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h__Script_StateTreeModule_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// NewStructOps @ 14d4d8850

void * __cdecl Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeExternalDataDesc,&UE::CoreUObject::Private::Construct<FStateTreeExternalDataDesc>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeExternalDataDesc>,&UE::CoreUObject::Private::Destruct<FStateTreeExternalDataDesc>,&UE::CoreUObject::Private::Copy<FStateTreeExternalDataDesc>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d88c0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTransitionRequest,&UE::CoreUObject::Private::Construct<FStateTreeTransitionRequest>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionRequest>,&UE::CoreUObject::Private::Destruct<FStateTreeTransitionRequest>,&UE::CoreUObject::Private::Copy<FStateTreeTransitionRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d8990

void * __cdecl Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeActiveStates,&UE::CoreUObject::Private::Construct<FStateTreeActiveStates>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeActiveStates>,&UE::CoreUObject::Private::Destruct<FStateTreeActiveStates>,&UE::CoreUObject::Private::Copy<FStateTreeActiveStates>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData @ 14d4d89d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTemporaryInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTemporaryInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTemporaryInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTemporaryInstanceData.InnerSingleton;
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

// NewStructOps @ 14d4d8a50

void * __cdecl Z_Construct_UScriptStruct_FStateTreeTemporaryInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTemporaryInstanceData,&UE::CoreUObject::Private::Construct<FStateTreeTemporaryInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTemporaryInstanceData>,&UE::CoreUObject::Private::Destruct<FStateTreeTemporaryInstanceData>,&UE::CoreUObject::Private::Copy<FStateTreeTemporaryInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EStateTreeTransitionSourceType_StaticEnum @ 14d4d8a90

UEnum * __cdecl EStateTreeTransitionSourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType,
                       (UObject *)pUVar1,L"EStateTreeTransitionSourceType");
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton;
}

// NewStructOps @ 14d4d8ad0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTransitionSource,&UE::CoreUObject::Private::Construct<FStateTreeTransitionSource>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionSource>,&UE::CoreUObject::Private::Destruct<FStateTreeTransitionSource>,&UE::CoreUObject::Private::Copy<FStateTreeTransitionSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d8b10

void * __cdecl Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeInstanceStorage,&UE::CoreUObject::Private::Construct<FStateTreeInstanceStorage>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeInstanceStorage>,&UE::CoreUObject::Private::Destruct<FStateTreeInstanceStorage>,&UE::CoreUObject::Private::Copy<FStateTreeInstanceStorage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d8b50

void * __cdecl
Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTransitionDelayedState,&UE::CoreUObject::Private::Construct<FStateTreeTransitionDelayedState>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionDelayedState>,&UE::CoreUObject::Private::Destruct<FStateTreeTransitionDelayedState>,&UE::CoreUObject::Private::Copy<FStateTreeTransitionDelayedState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d8d90

void * __cdecl Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeInstanceData,&UE::CoreUObject::Private::Construct<FStateTreeInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeInstanceData>,&UE::CoreUObject::Private::Destruct<FStateTreeInstanceData>,&UE::CoreUObject::Private::SerializeArchive<FStateTreeInstanceData>,&UE::CoreUObject::Private::GetPreloadDependencies<FStateTreeInstanceData>,&UE::CoreUObject::Private::Copy<FStateTreeInstanceData>,&UE::CoreUObject::Private::Identical<FStateTreeInstanceData>,&UE::CoreUObject::Private::AddStructReferencedObjects<FStateTreeInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ETickReason_StaticEnum @ 14d4d8e10

UEnum * __cdecl ETickReason_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETickReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_ETickReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_ETickReason,(UObject *)pUVar1,
                       L"ETickReason");
  }
  return Z_Registration_Info_UEnum_ETickReason.OuterSingleton;
}

// NewStructOps @ 14d4d8e50

void * __cdecl Z_Construct_UScriptStruct_FStateTreeScheduledTick_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeScheduledTick,&UE::CoreUObject::Private::Construct<FStateTreeScheduledTick>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeScheduledTick>,&UE::CoreUObject::Private::Destruct<FStateTreeScheduledTick>,&UE::CoreUObject::Private::Copy<FStateTreeScheduledTick>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FStateTreeEvent @ 14d4d8e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeSharedEvent @ 14d4d8f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeSharedEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.InnerSingleton;
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

// EStateTreeLoopEvents_StaticEnum @ 14d4d8f90

UEnum * __cdecl EStateTreeLoopEvents_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents,(UObject *)pUVar1,
                       L"EStateTreeLoopEvents");
  }
  return Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton;
}

// NewStructOps @ 14d4d8fd0

void * __cdecl Z_Construct_UScriptStruct_FExecutionFrameHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<UE::StateTree::FExecutionFrameHandle,&UE::CoreUObject::Private::Construct<UE::StateTree::FExecutionFrameHandle>,&UE::CoreUObject::Private::ConstructForTests<UE::StateTree::FExecutionFrameHandle>,&UE::CoreUObject::Private::Destruct<UE::StateTree::FExecutionFrameHandle>,&UE::CoreUObject::Private::Copy<UE::StateTree::FExecutionFrameHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d9010

void * __cdecl Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeEvent,&UE::CoreUObject::Private::Construct<FStateTreeEvent>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeEvent>,&UE::CoreUObject::Private::Destruct<FStateTreeEvent>,&UE::CoreUObject::Private::Copy<FStateTreeEvent>,&UE::CoreUObject::Private::GetStructTypeHash<FStateTreeEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsGlobalFrame_SetBit @ 14d4d9050

void __cdecl
Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x6a) = *(byte *)((longlong)param_1 + 0x6a) | 1;
  return;
}

// NewProp_bHaveEntered_SetBit @ 14d4d9060

void __cdecl
Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewProp_bHaveEntered_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x6a) = *(byte *)((longlong)param_1 + 0x6a) | 2;
  return;
}

// NewStructOps @ 14d4d9070

void * __cdecl Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeExecutionFrame,&UE::CoreUObject::Private::Construct<FStateTreeExecutionFrame>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeExecutionFrame>,&UE::CoreUObject::Private::Destruct<FStateTreeExecutionFrame>,&UE::CoreUObject::Private::Copy<FStateTreeExecutionFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d9100

void * __cdecl Z_Construct_UScriptStruct_FStateTreeSharedEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeSharedEvent,&UE::CoreUObject::Private::Construct<FStateTreeSharedEvent>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeSharedEvent>,&UE::CoreUObject::Private::Destruct<FStateTreeSharedEvent>,&UE::CoreUObject::Private::Copy<FStateTreeSharedEvent>,&UE::CoreUObject::Private::AddStructReferencedObjects<FStateTreeSharedEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d91d0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeEventQueue,&UE::CoreUObject::Private::Construct<FStateTreeEventQueue>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeEventQueue>,&UE::CoreUObject::Private::Destruct<FStateTreeEventQueue>,&UE::CoreUObject::Private::Copy<FStateTreeEventQueue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasPendingCompletedState_SetBit @ 14d4d9210

void __cdecl
Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewProp_bHasPendingCompletedState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x76) = 1;
  return;
}

// NewStructOps @ 14d4d9220

void * __cdecl Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeExecutionState,&UE::CoreUObject::Private::Construct<FStateTreeExecutionState>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeExecutionState>,&UE::CoreUObject::Private::Destruct<FStateTreeExecutionState>,&UE::CoreUObject::Private::Copy<FStateTreeExecutionState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d9320

void * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeTransitionResult,&UE::CoreUObject::Private::Construct<FStateTreeTransitionResult>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeTransitionResult>,&UE::CoreUObject::Private::Destruct<FStateTreeTransitionResult>,&UE::CoreUObject::Private::Copy<FStateTreeTransitionResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EStateTreeRecordTransitions_StaticEnum @ 14d4d94e0

UEnum * __cdecl EStateTreeRecordTransitions_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions,
                       (UObject *)pUVar1,L"EStateTreeRecordTransitions");
  }
  return Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton;
}

// NewProp_bIsGlobalFrame_SetBit @ 14d4d9520

void __cdecl
Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewProp_bIsGlobalFrame_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 1;
  return;
}

// NewStructOps @ 14d4d9530

void * __cdecl
Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRecordedStateTreeExecutionFrame,&UE::CoreUObject::Private::Construct<FRecordedStateTreeExecutionFrame>,&UE::CoreUObject::Private::ConstructForTests<FRecordedStateTreeExecutionFrame>,&UE::CoreUObject::Private::Destruct<FRecordedStateTreeExecutionFrame>,&UE::CoreUObject::Private::Copy<FRecordedStateTreeExecutionFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d9570

void * __cdecl Z_Construct_UScriptStruct_FRecordedActiveState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRecordedActiveState,&UE::CoreUObject::Private::Construct<FRecordedActiveState>,&UE::CoreUObject::Private::ConstructForTests<FRecordedActiveState>,&UE::CoreUObject::Private::Destruct<FRecordedActiveState>,&UE::CoreUObject::Private::Copy<FRecordedActiveState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4d95b0

void * __cdecl
Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRecordedStateTreeTransitionResult,&UE::CoreUObject::Private::Construct<FRecordedStateTreeTransitionResult>,&UE::CoreUObject::Private::ConstructForTests<FRecordedStateTreeTransitionResult>,&UE::CoreUObject::Private::Destruct<FRecordedStateTreeTransitionResult>,&UE::CoreUObject::Private::Copy<FRecordedStateTreeTransitionResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d4d9920

void * __thiscall
FStateTreeExecutionExtension::_scalar_deleting_destructor_
          (FStateTreeExecutionExtension *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UStateTreeExtension @ 14d4d9f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStateTreeExtension(void)

{
  if (Z_Registration_Info_UClass_UStateTreeExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStateTreeExtension.OuterSingleton,
               &Z_Construct_UClass_UStateTreeExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStateTreeExtension.OuterSingleton;
}

// Z_Construct_UClass_UStateTreeFunctionLibrary @ 14d4da120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStateTreeFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UStateTreeFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStateTreeFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UStateTreeFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStateTreeFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_GetParametersProperty @ 14d4da1d0

UFunction * __cdecl Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_GetParametersProperty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_GetParametersProperty_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_SetParametersProperty @ 14d4da210

UFunction * __cdecl Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_SetParametersProperty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStateTreeFunctionLibrary_K2_SetParametersProperty_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStateTreeFunctionLibrary_MakeStateTreeReference @ 14d4da250

UFunction * __cdecl Z_Construct_UFunction_UStateTreeFunctionLibrary_MakeStateTreeReference(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStateTreeFunctionLibrary_MakeStateTreeReference_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UStateTreeFunctionLibrary_SetStateTree @ 14d4da290

UFunction * __cdecl Z_Construct_UFunction_UStateTreeFunctionLibrary_SetStateTree(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UStateTreeFunctionLibrary_SetStateTree_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FInstanceContainer @ 14d4da6a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInstanceContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInstanceContainer.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInstanceContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FInstanceContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInstanceContainer.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInstanceContainer.InnerSingleton;
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

// NewStructOps @ 14d4da750

void * __cdecl Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeInstanceObjectWrapper,&UE::CoreUObject::Private::Construct<FStateTreeInstanceObjectWrapper>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeInstanceObjectWrapper>,&UE::CoreUObject::Private::Destruct<FStateTreeInstanceObjectWrapper>,&UE::CoreUObject::Private::Copy<FStateTreeInstanceObjectWrapper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4daa80

void * __cdecl Z_Construct_UScriptStruct_FInstanceContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<UE::StateTree::InstanceData::FInstanceContainer,&UE::CoreUObject::Private::Construct<UE::StateTree::InstanceData::FInstanceContainer>,&UE::CoreUObject::Private::ConstructForTests<UE::StateTree::InstanceData::FInstanceContainer>,&UE::CoreUObject::Private::Destruct<UE::StateTree::InstanceData::FInstanceContainer>,&UE::CoreUObject::Private::Copy<UE::StateTree::InstanceData::FInstanceContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d4db640

void * __thiscall
FStateTreeEvaluatorCommonBase::_scalar_deleting_destructor_
          (FStateTreeEvaluatorCommonBase *this,uint param_1)

{
  *(undefined ***)this = &___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UScriptStruct_FStateTreeEvaluatorBase @ 14d4db680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeEvaluatorBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorBase.InnerSingleton;
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

// NewStructOps @ 14d4db700

void * __cdecl Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeEvaluatorBase,&UE::CoreUObject::Private::Construct<FStateTreeEvaluatorBase>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeEvaluatorBase>,&UE::CoreUObject::Private::Destruct<FStateTreeEvaluatorBase>,&UE::CoreUObject::Private::Copy<FStateTreeEvaluatorBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4db8a0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeEvaluatorCommonBase,&UE::CoreUObject::Private::Construct<FStateTreeEvaluatorCommonBase>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeEvaluatorCommonBase>,&UE::CoreUObject::Private::Destruct<FStateTreeEvaluatorCommonBase>,&UE::CoreUObject::Private::Copy<FStateTreeEvaluatorCommonBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d4dbd10

void * __cdecl Z_Construct_UScriptStruct_FStateTreeExecutionExtension_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeExecutionExtension,&UE::CoreUObject::Private::Construct<FStateTreeExecutionExtension>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeExecutionExtension>,&UE::CoreUObject::Private::Destruct<FStateTreeExecutionExtension>,&UE::CoreUObject::Private::Copy<FStateTreeExecutionExtension>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus @ 14d4dbd50

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeRunStatus.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType @ 14d4dbd90

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeStateChangeType.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase @ 14d4dbdd0

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeUpdatePhase.InnerSingleton;
}

// Z_Construct_UScriptStruct_FRecordedActiveState @ 14d4dbe10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRecordedActiveState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRecordedActiveState.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRecordedActiveState.InnerSingleton,
               &Z_Construct_UScriptStruct_FRecordedActiveState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRecordedActiveState.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRecordedActiveState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeActiveStates @ 14d4dbe90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeActiveStates(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeActiveStates.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeActiveStates.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeActiveStates.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeActiveStates.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeExecutionFrame @ 14d4dbf10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeExecutionFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeExecutionFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeExecutionFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeExecutionFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeExecutionState @ 14d4dbf90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeExecutionState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeExecutionState.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeExecutionState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeExternalDataHandle @ 14d4dc010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeExternalDataHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExternalDataHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeExternalDataHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExternalDataHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeExternalDataHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState @ 14d4dc090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionDelayedState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTransitionDelayedState.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionDelayedState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTransitionDelayedState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeTransitionRequest @ 14d4dc110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionRequest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTransitionRequest.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionRequest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTransitionRequest.InnerSingleton;
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

// EStateTreeUpdatePhase_StaticEnum @ 14d4dc190

UEnum * __cdecl EStateTreeUpdatePhase_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase,(UObject *)pUVar1,
                       L"EStateTreeUpdatePhase");
  }
  return Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton;
}

// EStateTreeRunStatus_StaticEnum @ 14d4dc210

UEnum * __cdecl EStateTreeRunStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus,(UObject *)pUVar1,
                       L"EStateTreeRunStatus");
  }
  return Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton;
}

// EStateTreeFinishTaskType_StaticEnum @ 14d4dc2e0

UEnum * __cdecl EStateTreeFinishTaskType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeFinishTaskType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeFinishTaskType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeFinishTaskType,(UObject *)pUVar1,
                       L"EStateTreeFinishTaskType");
  }
  return Z_Registration_Info_UEnum_EStateTreeFinishTaskType.OuterSingleton;
}

// EStateTreeStateChangeType_StaticEnum @ 14d4dc320

UEnum * __cdecl EStateTreeStateChangeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType,(UObject *)pUVar1
                       ,L"EStateTreeStateChangeType");
  }
  return Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton;
}

// EStateTreeConditionEvaluationMode_StaticEnum @ 14d4dc360

UEnum * __cdecl EStateTreeConditionEvaluationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode,
                       (UObject *)pUVar1,L"EStateTreeConditionEvaluationMode");
  }
  return Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton;
}

// NewStructOps @ 14d4dc3a0

void * __cdecl Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 6;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateTreeExternalDataHandle,&UE::CoreUObject::Private::Construct<FStateTreeExternalDataHandle>,&UE::CoreUObject::Private::ConstructForTests<FStateTreeExternalDataHandle>,&UE::CoreUObject::Private::Destruct<FStateTreeExternalDataHandle>,&UE::CoreUObject::Private::Copy<FStateTreeExternalDataHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// AddStructReferencedObjectsOrNot<FStateTreeInstanceData> @ 14d4dc630

void __cdecl
AddStructReferencedObjectsOrNot<FStateTreeInstanceData>(void *param_1,FReferenceCollector *param_2)

{
  void *pvVar1;
  UPackage *pUVar2;
  
  pvVar1 = *(void **)param_1;
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage,(UObject *)pUVar2,
                         L"StateTreeInstanceStorage");
  }
  FReferenceCollector::AddPropertyReferencesWithStructARO
            (param_2,Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton,
             pvVar1,(UObject *)0x0);
  pvVar1 = *(void **)((longlong)pvVar1 + 200);
  if (Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEventQueue,(UObject *)pUVar2,
                         L"StateTreeEventQueue");
  }
  FReferenceCollector::AddPropertyReferencesWithStructARO
            (param_2,Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton,pvVar1,
             (UObject *)0x0);
  return;
}

// AddStructReferencedObjectsOrNot<FStateTreeSharedEvent> @ 14d4dc6e0

void __cdecl
AddStructReferencedObjectsOrNot<FStateTreeSharedEvent>(void *param_1,FReferenceCollector *param_2)

{
  void *pvVar1;
  UPackage *pUVar2;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 != (void *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvent,(UObject *)pUVar2,
                           L"StateTreeEvent");
    }
    FReferenceCollector::AddPropertyReferencesWithStructARO
              (param_2,Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton,pvVar1,
               (UObject *)0x0);
  }
  return;
}

// ConstructItems<FStateTreeDelegateActiveListeners::FActiveListener,FStateTreeDelegateActiveListeners::FActiveListener,int> @ 14d4dc990

void __cdecl
ConstructItems<FStateTreeDelegateActiveListeners::FActiveListener,FStateTreeDelegateActiveListeners::FActiveListener,int>
          (void *param_1,FActiveListener *param_2,int param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FActiveFrameID *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  ForAnyElementType *this_00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType local_50;
  int local_48;
  FReadAccessScope local_40;
  
  if (param_3 != 0) {
    this_00 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    this_01 = &param_2->Delegate;
    do {
      uVar3 = *(undefined8 *)&(((FActiveListener *)(this_01 + -1))->Listener).Dispatcher.ID.C;
      this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(this_00 + -1);
      puVar1 = (undefined8 *)((longlong)this_01 + (longlong)param_1 + (-0x18 - (longlong)param_2));
      *puVar1 = *(undefined8 *)&(((FActiveListener *)(this_01 + -1))->Listener).Dispatcher.ID;
      puVar1[1] = uVar3;
      *(int *)((longlong)this_01 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           (((FActiveListener *)(this_01 + -1))->Listener).ID;
      (this->AccessDetector).State = (atomic<unsigned___int64>)0x0;
      this_00->Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&this_00[1].Data = 0;
      if (this_01 != (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)this) {
        local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_50.Data = (FScriptContainerElement *)0x0;
        local_48 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_40);
        if ((*(int *)&this_01->field_0x10 != 0) &&
           (plVar2 = *(longlong **)&this_01->field_0x8, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x50))(plVar2,&local_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_58,(FWriteAccessScope *)&local_40);
        iVar6 = local_48;
        FVar5.Data = local_50.Data;
        local_50.Data = (FScriptContainerElement *)0x0;
        local_48 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::
        ~FWriteAccessScope((FWriteAccessScope *)&local_40);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (this,(FWriteAccessScope *)&local_40);
        if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)this_00->Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
          *(undefined4 *)&this_00[1].Data = 0;
        }
        if (this_00->Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(this_00->Data);
        }
        this_00->Data = FVar5.Data;
        *(int *)&this_00[1].Data = iVar6;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::
        ~FWriteAccessScope((FWriteAccessScope *)&local_40);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_58,(FWriteAccessScope *)&local_40);
        if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_50.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
          local_48 = 0;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::
        ~FWriteAccessScope((FWriteAccessScope *)&local_40);
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
      }
      *(uint *)&this_00[2].Data = ((FActiveFrameID *)(this_01 + 1))->Value;
      *(uint *)((longlong)&this_00[2].Data + 4) =
           ((FActiveStateID *)((FActiveFrameID *)(this_01 + 1) + 1))->Value;
      pFVar4 = (FActiveFrameID *)(this_01 + 1);
      this_01 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                ((longlong)(this_01 + 2) + 0x10);
      *(ushort *)&this_00[3].Data = ((FStateTreeIndex16 *)(pFVar4 + 2))->Value;
      this_00 = this_00 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRecordedActiveState,FRecordedActiveState,int> @ 14d4dcb70

void __cdecl
ConstructItems<FRecordedActiveState,FRecordedActiveState,int>
          (void *param_1,FRecordedActiveState *param_2,int param_3)

{
  int iVar1;
  UObject *pUVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    piVar4 = &param_2->EventIndex;
    do {
      pUVar2 = *(UObject **)((longlong)piVar3 + (longlong)param_2 + (-0xc - (longlong)param_1));
      *(UObject **)(piVar3 + -3) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(ushort *)(piVar3 + -1) = ((FStateTreeStateHandle *)(piVar4 + -1))->Index;
      iVar1 = *piVar4;
      piVar4 = piVar4 + 4;
      *piVar3 = iVar1;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreeExecutionContext::FSelectionEventWithID,FStateTreeExecutionContext::FSelectionEventWithID,int> @ 14d4dcbf0

void __cdecl
ConstructItems<FStateTreeExecutionContext::FSelectionEventWithID,FStateTreeExecutionContext::FSelectionEventWithID,int>
          (void *param_1,FSelectionEventWithID *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  FSharedReferencer<1> *pFVar3;
  
  if (param_3 != 0) {
    pFVar3 = &(param_2->Event).Event.SharedReferenceCount;
    plVar2 = (longlong *)((longlong)param_1 + 0x18);
    do {
      plVar2[-3] = *(longlong *)((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)plVar2)
      ;
      *(undefined4 *)(plVar2 + -2) =
           *(undefined4 *)((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)plVar2);
      plVar2[-1] = (longlong)((TSharedPtr<FStateTreeEvent,1> *)(pFVar3 + -1))->Object;
      pTVar1 = pFVar3->ReferenceController;
      *plVar2 = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = pFVar3 + 4;
      plVar2 = plVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreeEvent,FStateTreeEvent,int> @ 14d4dcc40

void __cdecl
ConstructItems<FStateTreeEvent,FStateTreeEvent,int>
          (void *param_1,FStateTreeEvent *param_2,int param_3)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  FInstancedStruct *pFVar2;
  FInstancedStruct *this;
  
  if (param_3 != 0) {
    pFVar2 = &param_2->Payload;
    this = (FInstancedStruct *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)((longlong)pFVar2 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           *(undefined8 *)((longlong)(pFVar2 + -1) + 8);
      (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      this->StructMemory = (uchar *)0x0;
      FInstancedStruct::InitializeAs
                (this,(pFVar2->ScriptStruct).field0_0x0.DebugPtr,pFVar2->StructMemory);
      pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar2 + 1);
      pFVar2 = pFVar2 + 2;
      this[1].ScriptStruct.field0_0x0 = *pTVar1;
      this = this + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreeReferenceOverrideItem,FStateTreeReferenceOverrideItem,int> @ 14d4dcce0

void __cdecl
ConstructItems<FStateTreeReferenceOverrideItem,FStateTreeReferenceOverrideItem,int>
          (void *param_1,FStateTreeReferenceOverrideItem *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FName *)(lVar1 + (longlong)param_2) = (param_2->StateTag).TagName;
      FStateTreeReference::FStateTreeReference
                ((FStateTreeReference *)(lVar1 + 8 + (longlong)param_2),&param_2->StateTreeReference
                );
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreeSharedEvent,FStateTreeSharedEvent,int> @ 14d4dcd40

void __cdecl
ConstructItems<FStateTreeSharedEvent,FStateTreeSharedEvent,int>
          (void *param_1,FStateTreeSharedEvent *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FStateTreeEvent **)(lVar2 + (longlong)param_2) = (param_2->Event).Object;
      pTVar1 = (param_2->Event).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreeTemporaryInstanceData,FStateTreeTemporaryInstanceData,int> @ 14d4dcd80

void __cdecl
ConstructItems<FStateTreeTemporaryInstanceData,FStateTreeTemporaryInstanceData,int>
          (void *param_1,FStateTreeTemporaryInstanceData *param_2,int param_3)

{
  FStateTreeDataHandle *pFVar1;
  ushort *puVar2;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->DataHandle;
    puVar2 = (ushort *)((longlong)param_1 + 10);
    do {
      *(undefined4 *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)pFVar1) =
           *(undefined4 *)((longlong)(pFVar1 + -1) + 2);
      *(undefined4 *)(puVar2 + -3) = *(undefined4 *)pFVar1;
      puVar2[-1] = (pFVar1->StateHandle).Index;
      *puVar2 = ((FStateTreeIndex16 *)(pFVar1 + 1))->Value;
      (((FInstancedStruct *)(puVar2 + 3))->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)(puVar2 + 3),
                 (((FInstancedStruct *)(pFVar1 + 2))->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)(pFVar1 + 3) + 2));
      puVar2 = puVar2 + 0x10;
      pFVar1 = (FStateTreeDataHandle *)((longlong)(pFVar1 + 5) + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStateTreeTransitionDelayedState,FStateTreeTransitionDelayedState,int> @ 14d4dce20

void __cdecl
ConstructItems<FStateTreeTransitionDelayedState,FStateTreeTransitionDelayedState,int>
          (void *param_1,FStateTreeTransitionDelayedState *param_2,int param_3)

{
  UStateTree *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  float *pfVar3;
  undefined8 *puVar4;
  FStateTreeSharedEvent *pFVar5;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)((longlong)param_1 + 0x10);
    pFVar5 = &param_2->CapturedEvent;
    do {
      *(undefined4 *)(puVar4 + -2) =
           *(undefined4 *)((longlong)puVar4 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pUVar1 = (((FStateTreeTransitionDelayedState *)(pFVar5 + -1))->StateTree).field0_0x0.DebugPtr;
      puVar4[-1] = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStateTree *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *puVar4 = (pFVar5->Event).Object;
      pTVar2 = (pFVar5->Event).SharedReferenceCount.ReferenceController;
      puVar4[1] = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(float *)(puVar4 + 2) = *(float *)(pFVar5 + 1);
      *(uint *)((longlong)puVar4 + 0x14) = *(uint *)((longlong)(pFVar5 + 1) + 4);
      *(ushort *)(puVar4 + 3) = ((FStateTreeStateHandle *)((longlong)(pFVar5 + 1) + 8))->Index;
      pfVar3 = (float *)(pFVar5 + 1);
      pFVar5 = pFVar5 + 3;
      *(ushort *)((longlong)puVar4 + 0x1a) = ((FStateTreeIndex16 *)((longlong)pfVar3 + 10))->Value;
      puVar4 = puVar4 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FStateTreeInstanceStorage::FExecutionRuntimeInfo,int> @ 14d4ddaf0

void __cdecl
DefaultConstructItems<FStateTreeInstanceStorage::FExecutionRuntimeInfo,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRecordedActiveState,int> @ 14d4ddb20

void __cdecl DefaultConstructItems<FRecordedActiveState,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0xc);
    do {
      *(undefined8 *)(puVar1 + -3) = 0;
      *(undefined2 *)(puVar1 + -1) = 0xffff;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStateTreeDataView,int> @ 14d4ddb50

void __cdecl DefaultConstructItems<FStateTreeDataView,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FStateTreeExecutionFrame,int> @ 14d4ddb80

void __cdecl DefaultConstructItems<FStateTreeExecutionFrame,int>(void *param_1,int param_2)

{
  FStateTreeStateHandle FVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 + 0x30;
    do {
      *(undefined8 *)(lVar2 + -0x30) = 0;
      *(ushort *)(lVar2 + -0x28) = FStateTreeStateHandle::Root.Index;
      *(undefined8 *)(lVar2 + -0x24) = 0;
      *(undefined8 *)(lVar2 + -0x1c) = 0;
      *(undefined8 *)(lVar2 + -0x14) = 0;
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + 4) = 0xffffffffffffffff;
      *(undefined1 *)(lVar2 + 0xc) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined1 *)(lVar2 + 0x18) = 0;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(ushort *)(lVar2 + 0x24) = FStateTreeIndex16::Invalid.Value;
      *(ushort *)(lVar2 + 0x26) = FStateTreeIndex16::Invalid.Value;
      *(ushort *)(lVar2 + 0x28) = FStateTreeIndex16::Invalid.Value;
      *(ushort *)(lVar2 + 0x2a) = FStateTreeIndex16::Invalid.Value;
      *(ushort *)(lVar2 + 0x2c) = FStateTreeIndex16::Invalid.Value;
      *(undefined4 *)(lVar2 + 0x2e) = FStateTreeDataHandle::Invalid._0_4_;
      *(ushort *)(lVar2 + 0x32) = FStateTreeDataHandle::Invalid.StateHandle.Index;
      *(undefined4 *)(lVar2 + 0x34) = FStateTreeDataHandle::Invalid._0_4_;
      FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
      *(byte *)(lVar2 + 0x3a) = *(byte *)(lVar2 + 0x3a) & 0xfc;
      *(ushort *)(lVar2 + 0x38) = FVar1.Index;
      param_2 = param_2 + -1;
      lVar2 = lVar2 + 0x70;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStateTreeFrameStateSelectionEvents,int> @ 14d4ddc60

void __cdecl
DefaultConstructItems<FStateTreeFrameStateSelectionEvents,int>(void *param_1,int param_2)

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
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStateTreeTemporaryInstanceData,int> @ 14d4ddcd0

void __cdecl DefaultConstructItems<FStateTreeTemporaryInstanceData,int>(void *param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)((longlong)param_1 + 10);
    do {
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      *(undefined4 *)(puVar1 + -3) = FStateTreeDataHandle::Invalid._0_4_;
      puVar1[-1] = FStateTreeDataHandle::Invalid.StateHandle.Index;
      *puVar1 = FStateTreeIndex16::Invalid.Value;
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)(puVar1 + 3));
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStateTreeTransitionDelayedState,int> @ 14d4ddd40

void __cdecl DefaultConstructItems<FStateTreeTransitionDelayedState,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined2 *)(puVar1 + 3) = 0xffff;
      puVar1[2] = 0;
      *(ushort *)((longlong)puVar1 + 0x1a) = FStateTreeIndex16::Invalid.Value;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 6;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStateTreeDelegateActiveListeners::FActiveListener,int> @ 14d4dddc0

void __cdecl
DestructItems<FStateTreeDelegateActiveListeners::FActiveListener,int>
          (FActiveListener *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[2].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCompactStateTreeParameters,int> @ 14d4dde00

void __cdecl
DestructItems<FCompactStateTreeParameters,int>(FCompactStateTreeParameters *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FInstancedStruct::Reset((FInstancedStruct *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRecordedStateTreeTransitionResult,int> @ 14d4dde40

void __cdecl
DestructItems<FRecordedStateTreeTransitionResult,int>
          (FRecordedStateTreeTransitionResult *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FStateTreeEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Events;
    do {
      DestructItems<FStateTreeEvent,int>
                ((FStateTreeEvent *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FRecordedStateTreeTransitionResult *)(pTVar2 + -1))->States).AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FStateTreeEvent,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStateTreeExecutionContext::FSelectionEventWithID,int> @ 14d4ddea0

void __cdecl
DestructItems<FStateTreeExecutionContext::FSelectionEventWithID,int>
          (FSelectionEventWithID *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Event).Event.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStateTreeEvent,int> @ 14d4ddee0

void __cdecl DestructItems<FStateTreeEvent,int>(FStateTreeEvent *param_1,int param_2)

{
  FInstancedStruct *this;
  
  if (param_2 != 0) {
    this = &param_1->Payload;
    do {
      FInstancedStruct::Reset(this);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStateTreeReferenceOverrideItem,int> @ 14d4ddf20

void __cdecl
DestructItems<FStateTreeReferenceOverrideItem,int>
          (FStateTreeReferenceOverrideItem *param_1,int param_2)

{
  UScriptStruct *pUVar1;
  FInstancedStruct *this;
  
  if (param_2 != 0) {
    this = &(param_1->StateTreeReference).Parameters.Value;
    do {
      pUVar1 = this[1].ScriptStruct.field0_0x0.DebugPtr;
      if (pUVar1 != (UScriptStruct *)0x0) {
        FMemory::Free(pUVar1);
      }
      FInstancedStruct::Reset(this);
      this = this + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStateTreeSharedEvent,int> @ 14d4ddf70

void __cdecl DestructItems<FStateTreeSharedEvent,int>(FStateTreeSharedEvent *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Event).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStateTreeTemporaryInstanceData,int> @ 14d4ddfb0

void __cdecl
DestructItems<FStateTreeTemporaryInstanceData,int>
          (FStateTreeTemporaryInstanceData *param_1,int param_2)

{
  FInstancedStruct *this;
  
  if (param_2 != 0) {
    this = &param_1->Instance;
    do {
      FInstancedStruct::Reset(this);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStateTreeTransitionDelayedState,int> @ 14d4ddff0

void __cdecl
DestructItems<FStateTreeTransitionDelayedState,int>
          (FStateTreeTransitionDelayedState *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->CapturedEvent).Event.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DuplicateObject<UObject> @ 14d4de030

UObject * __cdecl
DuplicateObject<UObject>(TObjectPtr<UObject> *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  pUVar2 = DuplicateObject_Internal(pUVar1,pUVar2,param_2,param_3);
  return pUVar2;
}

// InternalConstructor<UStateTreeExtension> @ 14d4e0020

void __cdecl InternalConstructor<UStateTreeExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UStateTreeExtension__6B_;
  }
  return;
}

// InternalConstructor<UStateTreeFunctionLibrary> @ 14d4e0050

void __cdecl InternalConstructor<UStateTreeFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UStateTreeFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UStateTreeExtension> @ 14d4e0080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStateTreeExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStateTreeExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStateTreeExtension__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStateTreeFunctionLibrary> @ 14d4e0130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStateTreeFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStateTreeFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStateTreeFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UStateTree_const_,UStateTree_const_*,0> @ 14d4e01e0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UStateTree_const_,UStateTree_const_*,0>
          (TObjectPtr<UStateTree_const_> *param_1,UStateTree **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UStateTree *)0x0) {
    return *param_2 == (UStateTree *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UStateTree_const_,TNotNull<UStateTree_const_*>,0> @ 14d4e0200

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UStateTree_const_,TNotNull<UStateTree_const_*>,0>
          (TObjectPtr<UStateTree_const_> *param_1,TNotNull<UStateTree_const_*> *param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UStateTree *)0x0) {
    return param_2->Val == (UStateTree *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == param_2->Val;
}

// MakeArrayView<TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_> @ 14d4e0220

TArrayView<FStateTreeExecutionFrame,int> * __cdecl
MakeArrayView<TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FStateTreeExecutionFrame,int> *__return_storage_ptr__,
          TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FStateTreeExecutionFrame,int> *pTVar4;
  
  iVar1 = param_1->ArrayNum;
  __return_storage_ptr__->DataPtr = (FStateTreeExecutionFrame *)(param_1->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FStateTreeExecutionFrame,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// MakeConstArrayView<TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_> @ 14d4e0290

TArrayView<FStateTreeExecutionFrame_const_,int> * __cdecl
MakeConstArrayView<TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FStateTreeExecutionFrame_const_,int> *__return_storage_ptr__,
          TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FStateTreeExecutionFrame_const_,int> *pTVar4;
  
  iVar1 = param_1->ArrayNum;
  __return_storage_ptr__->DataPtr = (FStateTreeExecutionFrame *)(param_1->AllocatorInstance).Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FStateTreeExecutionFrame_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// MakeConstArrayView<TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 14d4e0300

TArrayView<FStateTreeExecutionFrame_const_,int> * __cdecl
MakeConstArrayView<TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (TArrayView<FStateTreeExecutionFrame_const_,int> *__return_storage_ptr__,
          TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<FStateTreeExecutionFrame> FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FStateTreeExecutionFrame_const_,int> *pTVar5;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  iVar1 = param_1->ArrayNum;
  if (FVar2 != (ForElementType<FStateTreeExecutionFrame>)0x0) {
    param_1 = (TArray<FStateTreeExecutionFrame,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
               *)FVar2;
  }
  __return_storage_ptr__->DataPtr = (FStateTreeExecutionFrame *)param_1;
  if (iVar1 < 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FStateTreeExecutionFrame_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> @ 14d4e0380

TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> __cdecl
MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0>(void)

{
  undefined8 *puVar1;
  FRuntimeValidationInstanceData *in_RCX;
  
  puVar1 = operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = UE::Core::Private::PimplPtr::
              DeleterFunc<UE::StateTree::Debug::FRuntimeValidationInstanceData>;
    *(undefined4 *)((longlong)puVar1 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x35) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x37) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    (in_RCX->NodeStates).AllocatorInstance.Data = (FScriptContainerElement *)(puVar1 + 2);
    return (TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0>)in_RCX;
  }
  (in_RCX->NodeStates).AllocatorInstance.Data = (FScriptContainerElement *)0x10;
  return (TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0>)in_RCX;
}

// MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0,UE::StateTree::Debug::FRuntimeValidationInstanceData_&> @ 14d4e03f0

TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> __cdecl
MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0,UE::StateTree::Debug::FRuntimeValidationInstanceData_&>
          (FRuntimeValidationInstanceData *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *in_RDX;
  
  puVar2 = operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = UE::Core::Private::PimplPtr::
              DeleterFunc<UE::StateTree::Debug::FRuntimeValidationInstanceData>;
    puVar2[1] = 0;
    puVar2[2] = 0;
    iVar1 = *(int *)(in_RDX + 1);
    _Src = (void *)*in_RDX;
    *(int *)(puVar2 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar2 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar1,0,(ForAnyElementType *)(puVar2 + 2),iVar1,
                 (int *)((longlong)puVar2 + 0x1c));
      memcpy(((ForAnyElementType *)(puVar2 + 2))->Data,_Src,(longlong)iVar1 * 0x18);
    }
    puVar2[4] = in_RDX[2];
    puVar2[5] = in_RDX[3];
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(in_RDX + 4);
  }
  (param_1->NodeStates).AllocatorInstance.Data = (FScriptContainerElement *)(puVar2 + 2);
  return (TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0>)param_1;
}

// MakeShared<FStateTreeExecutionContext::FSelectStateResult,1> @ 14d4e04e0

TSharedRef<FStateTreeExecutionContext::FSelectStateResult,1> * __cdecl
MakeShared<FStateTreeExecutionContext::FSelectStateResult,1>
          (TSharedRef<FStateTreeExecutionContext::FSelectStateResult,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeExecutionContext::FSelectStateResult,1> *pTVar4;
  
  pTVar3 = operator_new(0x198);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSelectStateResult *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSelectStateResult_FStateTreeExecutionContext___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x188);
    pTVar3[1]._padding_ = (longlong)&___7FSelectStateResult_FStateTreeExecutionContext__6B_;
    *(undefined4 *)((longlong)&pTVar3[4]._padding_ + 4) = 4;
    *(undefined4 *)((longlong)&pTVar3[0x13]._padding_ + 4) = 2;
    *(undefined4 *)((longlong)&pTVar3[0x18]._padding_ + 4) = 2;
    *(undefined2 *)&pTVar3[0x19]._padding_ = 0xffff;
    __return_storage_ptr__->Object = (FSelectStateResult *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FSelectStateResult *)(pTVar3 + 1) == (FSelectStateResult *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FStateTreeExecutionContext::FSelectStateResult,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FStateTreeEventQueue,1> @ 14d4e05d0

TSharedRef<FStateTreeEventQueue,1> * __cdecl
MakeShared<FStateTreeEventQueue,1>(TSharedRef<FStateTreeEventQueue,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeEventQueue,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FStateTreeEventQueue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFStateTreeEventQueue___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FStateTreeEventQueue *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FStateTreeEventQueue,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FStateTreeEventQueue,1,FStateTreeEventQueue_&> @ 14d4e0670

TSharedRef<FStateTreeEventQueue,1> * __cdecl
MakeShared<FStateTreeEventQueue,1,FStateTreeEventQueue_&>
          (TSharedRef<FStateTreeEventQueue,1> *__return_storage_ptr__,FStateTreeEventQueue *param_1)

{
  atomic<int> aVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FStateTreeEventQueue,1> *pTVar6;
  
  pTVar5 = operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FStateTreeEventQueue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFStateTreeEventQueue___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    aVar1 = (atomic<int>)(param_1->SharedEvents).ArrayNum;
    pFVar2 = (param_1->SharedEvents).AllocatorInstance.Data;
    pTVar5[1].SharedReferenceCount = aVar1;
    if (aVar1 == (atomic<int>)0x0) {
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)aVar1,0,(ForAnyElementType *)(pTVar5 + 1),(int)aVar1,
                 (int *)&pTVar5[1].WeakReferenceCount);
      ConstructItems<FStateTreeSharedEvent,FStateTreeSharedEvent,int>
                ((FScriptContainerElement *)pTVar5[1]._padding_,(FStateTreeSharedEvent *)pFVar2,
                 (int)aVar1);
    }
    __return_storage_ptr__->Object = (FStateTreeEventQueue *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FStateTreeEventQueue,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FStateTreeInstanceStorage,1> @ 14d4e0790

TSharedRef<FStateTreeInstanceStorage,1> * __cdecl
MakeShared<FStateTreeInstanceStorage,1>
          (TSharedRef<FStateTreeInstanceStorage,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar4;
  
  pTVar3 = operator_new(0x138);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FStateTreeInstanceStorage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFStateTreeInstanceStorage___00_SharedPointerInternals__6B_
    ;
    FStateTreeInstanceStorage::FStateTreeInstanceStorage((FStateTreeInstanceStorage *)(pTVar3 + 1));
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FStateTreeInstanceStorage *)(pTVar3 + 1);
    if ((FStateTreeInstanceStorage *)(pTVar3 + 1) == (FStateTreeInstanceStorage *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FStateTreeInstanceStorage,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FStateTreeInstanceStorage,1,FStateTreeInstanceStorage_&> @ 14d4e0840

TSharedRef<FStateTreeInstanceStorage,1> * __cdecl
MakeShared<FStateTreeInstanceStorage,1,FStateTreeInstanceStorage_&>
          (TSharedRef<FStateTreeInstanceStorage,1> *__return_storage_ptr__,
          FStateTreeInstanceStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar4;
  
  pTVar3 = operator_new(0x138);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FStateTreeInstanceStorage *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFStateTreeInstanceStorage___00_SharedPointerInternals__6B_
    ;
    FStateTreeInstanceStorage::FStateTreeInstanceStorage
              ((FStateTreeInstanceStorage *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FStateTreeInstanceStorage *)(pTVar3 + 1);
    if ((FStateTreeInstanceStorage *)(pTVar3 + 1) == (FStateTreeInstanceStorage *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FStateTreeInstanceStorage,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// Merge<`FStateTreeExecutionContext::TriggerTransitions'::__l2::FTransitionHandler,FIdentityFunctor,TDereferenceWrapper<`FStateTreeExecutionContext::TriggerTransitions'::__l2::FTransitionHandler,TLess<void>_>_> @ 14d4e0900

void __cdecl
AlgoImpl::
Merge<_FStateTreeExecutionContext::TriggerTransitions_::__l2::FTransitionHandler,FIdentityFunctor,TDereferenceWrapper<_FStateTreeExecutionContext::TriggerTransitions_::__l2::FTransitionHandler,TLess<void>_>_>
          (FTransitionHandler *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<_protected:_bool___cdecl_FStateTreeExecutionContext::TriggerTransitions(void)_::_2_::FTransitionHandler,TLess<void>_>
          param_5)

{
  FTransitionHandler *pFVar1;
  undefined2 uVar2;
  FActiveStateID FVar3;
  FStateTreeIndex16 FVar4;
  undefined2 uVar5;
  undefined3 uVar6;
  FStateTreeStateHandle FVar7;
  undefined2 uVar8;
  FActiveStateID FVar9;
  FStateTreeIndex16 FVar10;
  undefined2 uVar11;
  int iVar12;
  EStateTreeTransitionPriority EVar13;
  undefined3 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FTransitionHandler *pFVar21;
  FTransitionHandler *pFVar23;
  FTransitionHandler *pFVar24;
  FTransitionHandler *pFVar25;
  FTransitionHandler *pFVar22;
  
  if (0 < param_2) {
    iVar17 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar19 = 0;
      if (0 < param_2 - iVar17) {
        uVar18 = param_2 - iVar17;
        do {
          iVar15 = (uVar18 >> 1) + iVar19;
          if (param_1[param_2].Priority <= param_1[(longlong)iVar15 + (longlong)iVar17].Priority) {
            iVar19 = iVar15 + (uVar18 & 1);
          }
          uVar20 = uVar18 >> 1;
          uVar18 = uVar18 >> 1;
        } while (uVar20 != 0);
      }
      iVar17 = iVar17 + iVar19;
      if (param_2 <= iVar17) {
        return;
      }
      iVar19 = 0;
      pFVar1 = param_1 + iVar17;
      if (0 < param_3 - param_2) {
        uVar18 = param_3 - param_2;
        iVar19 = 0;
        do {
          uVar20 = uVar18 >> 1;
          if (pFVar1->Priority <
              param_1[(longlong)(int)(uVar20 + iVar19) + (longlong)param_2].Priority) {
            iVar19 = uVar20 + iVar19 + (uVar18 & 1);
          }
          uVar18 = uVar20;
        } while (uVar20 != 0);
      }
      iVar16 = (iVar19 - iVar17) + param_2;
      iVar15 = param_2 - iVar17;
      if ((iVar15 != 0) && (iVar15 < iVar16)) {
        pFVar21 = pFVar1 + iVar15;
        pFVar24 = pFVar1;
        pFVar22 = pFVar1 + iVar15;
        do {
          while( true ) {
            pFVar23 = pFVar21 + 1;
            pFVar25 = pFVar24 + 1;
            EVar13 = pFVar24->Priority;
            uVar14 = *(undefined3 *)&pFVar24->field_0x11;
            uVar2 = *(undefined2 *)&pFVar21->field_0x2;
            FVar3.Value = (pFVar21->StateID).Value;
            FVar4.Value = (pFVar21->TaskIndex).Value;
            uVar5 = *(undefined2 *)&pFVar21->field_0xa;
            iVar15 = pFVar21->FrameIndex;
            FVar7.Index = (pFVar24->StateHandle).Index;
            uVar8 = *(undefined2 *)&pFVar24->field_0x2;
            FVar9.Value = (pFVar24->StateID).Value;
            FVar10.Value = (pFVar24->TaskIndex).Value;
            uVar11 = *(undefined2 *)&pFVar24->field_0xa;
            iVar12 = pFVar24->FrameIndex;
            pFVar24->StateHandle = (FStateTreeStateHandle)(pFVar21->StateHandle).Index;
            *(undefined2 *)&pFVar24->field_0x2 = uVar2;
            pFVar24->StateID = (FActiveStateID)FVar3.Value;
            pFVar24->TaskIndex = (FStateTreeIndex16)FVar4.Value;
            *(undefined2 *)&pFVar24->field_0xa = uVar5;
            pFVar24->FrameIndex = iVar15;
            uVar6 = *(undefined3 *)&pFVar21->field_0x11;
            pFVar24->Priority = pFVar21->Priority;
            *(undefined3 *)&pFVar24->field_0x11 = uVar6;
            pFVar21->StateHandle = (FStateTreeStateHandle)FVar7.Index;
            *(undefined2 *)&pFVar21->field_0x2 = uVar8;
            pFVar21->StateID = (FActiveStateID)FVar9.Value;
            pFVar21->TaskIndex = (FStateTreeIndex16)FVar10.Value;
            *(undefined2 *)&pFVar21->field_0xa = uVar11;
            pFVar21->FrameIndex = iVar12;
            pFVar21->Priority = EVar13;
            *(undefined3 *)&pFVar21->field_0x11 = uVar14;
            pFVar24 = pFVar25;
            if (pFVar23 == pFVar1 + iVar16) break;
            pFVar21 = pFVar23;
            if (pFVar25 == pFVar22) {
              pFVar22 = pFVar23;
            }
          }
          pFVar21 = pFVar22;
        } while (pFVar25 != pFVar22);
      }
      param_2 = param_2 + iVar19;
      iVar17 = iVar17 + 1 + iVar19;
    } while (iVar17 < param_2);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`FStateTreeExecutionContext::TriggerTransitions'::__l2::FTransitionHandler>_> @ 14d4e17b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FStateTreeExecutionContext::TriggerTransitions_::__l2::FTransitionHandler>_>
          (ushort param_1,
          ForElementType<_protected:_bool___cdecl_FStateTreeExecutionContext::TriggerTransitions(void)_::_2_::FTransitionHandler>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FStateTreeExecutionContext::TriggerTransitions'::__l2::FTransitionHandler>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// RemoveAllSwap<`FStateTreeDelegateActiveListeners::RemoveUnbounds'::__l2::<lambda_1>_> @ 14d4e2110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_FStateTreeDelegateActiveListeners::RemoveUnbounds_::__l2::<lambda_1>_>
          (TArray<FStateTreeDelegateActiveListeners::FActiveListener,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FReadAccessScope local_48;
  
  iVar6 = this->ArrayNum;
  bVar2 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar10 = 0;
    iVar9 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          iVar6 = (*pcVar1)();
          return iVar6;
        }
      }
      pFVar7 = (this->AllocatorInstance).Data + lVar10;
      if ((((*(int *)(pFVar7 + 0xc) == 0 && *(int *)(pFVar7 + 8) == 0) && *(int *)(pFVar7 + 4) == 0)
           && *(int *)pFVar7 == 0) || (*(int *)(pFVar7 + 0x10) == 0)) {
LAB_14d4e21fb:
        bVar2 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            iVar6 = (*pcVar1)();
            return iVar6;
          }
        }
        RemoveAtSwapImpl(this,uVar8);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 0x18),
                   &local_48);
        if ((*(int *)(pFVar7 + 0x28) == 0) || (*(longlong **)(pFVar7 + 0x20) == (longlong *)0x0)) {
LAB_14d4e21f1:
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_48);
          goto LAB_14d4e21fb;
        }
        cVar4 = (**(code **)(**(longlong **)(pFVar7 + 0x20) + 0x38))();
        if (cVar4 == '\0') goto LAB_14d4e21f1;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x40;
      }
      iVar9 = this->ArrayNum;
    } while ((int)uVar8 < iVar9);
    if ((bVar2) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// Reverse<UE::StateTree::ExecutionContext::FStateHandleContext> @ 14d4e22c0

void __cdecl
AlgoImpl::Reverse<UE::StateTree::ExecutionContext::FStateHandleContext>
          (FStateHandleContext *param_1,int param_2)

{
  UStateTree *pUVar1;
  FStateTreeStateHandle FVar2;
  undefined6 uVar3;
  FStateTreeStateHandle FVar4;
  undefined6 uVar5;
  FStateHandleContext *pFVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar6 = param_1 + (param_2 + -1);
    do {
      FVar2.Index = (pFVar6->StateHandle).Index;
      uVar3 = *(undefined6 *)&pFVar6->field_0xa;
      pUVar1 = param_1->StateTree;
      FVar4.Index = (param_1->StateHandle).Index;
      uVar5 = *(undefined6 *)&param_1->field_0xa;
      param_1->StateTree = pFVar6->StateTree;
      param_1->StateHandle = (FStateTreeStateHandle)FVar2.Index;
      *(undefined6 *)&param_1->field_0xa = uVar3;
      param_1 = param_1 + 1;
      pFVar6->StateTree = pUVar1;
      pFVar6->StateHandle = (FStateTreeStateHandle)FVar4.Index;
      *(undefined6 *)&pFVar6->field_0xa = uVar5;
      lVar7 = lVar7 + -1;
      pFVar6 = pFVar6 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// StableSortInternal<`FStateTreeExecutionContext::TriggerTransitions'::__l2::FTransitionHandler,FIdentityFunctor,TDereferenceWrapper<`FStateTreeExecutionContext::TriggerTransitions'::__l2::FTransitionHandler,TLess<void>_>_> @ 14d4e2310

void __cdecl
AlgoImpl::
StableSortInternal<_FStateTreeExecutionContext::TriggerTransitions_::__l2::FTransitionHandler,FIdentityFunctor,TDereferenceWrapper<_FStateTreeExecutionContext::TriggerTransitions_::__l2::FTransitionHandler,TLess<void>_>_>
          (FTransitionHandler *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_protected:_bool___cdecl_FStateTreeExecutionContext::TriggerTransitions(void)_::_2_::FTransitionHandler,TLess<void>_>
          param_4)

{
  int iVar1;
  undefined2 uVar2;
  FActiveStateID FVar3;
  FStateTreeIndex16 FVar4;
  undefined2 uVar5;
  undefined3 uVar6;
  FStateTreeStateHandle FVar7;
  undefined2 uVar8;
  FActiveStateID FVar9;
  FStateTreeIndex16 FVar10;
  undefined2 uVar11;
  EStateTreeTransitionPriority EVar12;
  undefined3 uVar13;
  FTransitionHandler *pFVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  
  if (0 < param_2) {
    pFVar14 = param_1 + 1;
    iVar17 = 1;
    lVar19 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if ((iVar17 < param_2) && (pFVar14[-1].Priority < pFVar14->Priority)) {
        uVar2 = *(undefined2 *)&pFVar14->field_0x2;
        FVar3.Value = (pFVar14->StateID).Value;
        FVar4.Value = (pFVar14->TaskIndex).Value;
        uVar5 = *(undefined2 *)&pFVar14->field_0xa;
        iVar1 = pFVar14->FrameIndex;
        EVar12 = pFVar14[-1].Priority;
        uVar13 = *(undefined3 *)&pFVar14[-1].field_0x11;
        FVar7.Index = pFVar14[-1].StateHandle.Index;
        uVar8 = *(undefined2 *)&pFVar14[-1].field_0x2;
        FVar9.Value = pFVar14[-1].StateID.Value;
        FVar10.Value = pFVar14[-1].TaskIndex.Value;
        uVar11 = *(undefined2 *)&pFVar14[-1].field_0xa;
        iVar15 = pFVar14[-1].FrameIndex;
        pFVar14[-1].StateHandle = (FStateTreeStateHandle)(pFVar14->StateHandle).Index;
        *(undefined2 *)&pFVar14[-1].field_0x2 = uVar2;
        pFVar14[-1].StateID = (FActiveStateID)FVar3.Value;
        pFVar14[-1].TaskIndex = (FStateTreeIndex16)FVar4.Value;
        *(undefined2 *)&pFVar14[-1].field_0xa = uVar5;
        pFVar14[-1].FrameIndex = iVar1;
        uVar6 = *(undefined3 *)&pFVar14->field_0x11;
        pFVar14[-1].Priority = pFVar14->Priority;
        *(undefined3 *)&pFVar14[-1].field_0x11 = uVar6;
        pFVar14->StateHandle = (FStateTreeStateHandle)FVar7.Index;
        *(undefined2 *)&pFVar14->field_0x2 = uVar8;
        pFVar14->StateID = (FActiveStateID)FVar9.Value;
        pFVar14->TaskIndex = (FStateTreeIndex16)FVar10.Value;
        *(undefined2 *)&pFVar14->field_0xa = uVar11;
        pFVar14->FrameIndex = iVar15;
        pFVar14->Priority = EVar12;
        *(undefined3 *)&pFVar14->field_0x11 = uVar13;
      }
      iVar17 = iVar17 + 2;
      pFVar14 = pFVar14 + 2;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  iVar17 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar17 * 2;
      iVar16 = 0;
      iVar15 = param_2;
      do {
        iVar18 = iVar15;
        if (iVar1 <= iVar15) {
          iVar18 = iVar1;
        }
        Merge<_FStateTreeExecutionContext::TriggerTransitions_::__l2::FTransitionHandler,FIdentityFunctor,TDereferenceWrapper<_FStateTreeExecutionContext::TriggerTransitions_::__l2::FTransitionHandler,TLess<void>_>_>
                  (param_1 + iVar16,iVar17,iVar18,param_3,param_4);
        iVar16 = iVar16 + iVar1;
        iVar15 = iVar15 + iVar17 * -2;
      } while (iVar16 < param_2);
      iVar17 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EStateTreeConditionEvaluationMode> @ 14d4e4e30

UEnum * __cdecl StaticEnum<enum_EStateTreeConditionEvaluationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode,
                       (UObject *)pUVar1,L"EStateTreeConditionEvaluationMode");
  }
  return Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.OuterSingleton;
}

// StaticEnum<enum_EStateTreeFinishTaskType> @ 14d4e4e70

UEnum * __cdecl StaticEnum<enum_EStateTreeFinishTaskType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeFinishTaskType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeFinishTaskType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeFinishTaskType,(UObject *)pUVar1,
                       L"EStateTreeFinishTaskType");
  }
  return Z_Registration_Info_UEnum_EStateTreeFinishTaskType.OuterSingleton;
}

// StaticEnum<enum_EStateTreeLoopEvents> @ 14d4e4eb0

UEnum * __cdecl StaticEnum<enum_EStateTreeLoopEvents>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents,(UObject *)pUVar1,
                       L"EStateTreeLoopEvents");
  }
  return Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton;
}

// StaticEnum<enum_EStateTreeRecordTransitions> @ 14d4e4ef0

UEnum * __cdecl StaticEnum<enum_EStateTreeRecordTransitions>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions,
                       (UObject *)pUVar1,L"EStateTreeRecordTransitions");
  }
  return Z_Registration_Info_UEnum_EStateTreeRecordTransitions.OuterSingleton;
}

// StaticEnum<enum_EStateTreeRunStatus> @ 14d4e4f30

UEnum * __cdecl StaticEnum<enum_EStateTreeRunStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus,(UObject *)pUVar1,
                       L"EStateTreeRunStatus");
  }
  return Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton;
}

// StaticEnum<enum_EStateTreeStateChangeType> @ 14d4e4f70

UEnum * __cdecl StaticEnum<enum_EStateTreeStateChangeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeStateChangeType,(UObject *)pUVar1
                       ,L"EStateTreeStateChangeType");
  }
  return Z_Registration_Info_UEnum_EStateTreeStateChangeType.OuterSingleton;
}

// StaticEnum<enum_EStateTreeTransitionSourceType> @ 14d4e4fb0

UEnum * __cdecl StaticEnum<enum_EStateTreeTransitionSourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType,
                       (UObject *)pUVar1,L"EStateTreeTransitionSourceType");
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.OuterSingleton;
}

// StaticEnum<enum_EStateTreeUpdatePhase> @ 14d4e4ff0

UEnum * __cdecl StaticEnum<enum_EStateTreeUpdatePhase>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase,(UObject *)pUVar1,
                       L"EStateTreeUpdatePhase");
  }
  return Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton;
}

// StaticEnum<enum_UE::StateTree::ETickReason> @ 14d4e5030

UEnum * __cdecl StaticEnum<enum_UE::StateTree::ETickReason>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETickReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_ETickReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_ETickReason,(UObject *)pUVar1,
                       L"ETickReason");
  }
  return Z_Registration_Info_UEnum_ETickReason.OuterSingleton;
}

// ~TScopeGuard<`FStateTreeExecutionContext::SelectStateFromSourceInternal'::__l36::<lambda_1>_> @ 14d4ec360

void __thiscall
ScopeExitSupport::
TScopeGuard<`FStateTreeExecutionContext::SelectStateFromSourceInternal'::__l36::<lambda_1>_>::
~TScopeGuard<_FStateTreeExecutionContext::SelectStateFromSourceInternal_::__l36::<lambda_1>_>
          (void *this)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  
  if (**(char **)this == '\0') {
    lVar3 = **(longlong **)((longlong)this + 8);
    if (*(int *)(lVar3 + 0x10) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *(int *)(lVar3 + 0x10) - 1;
    _Dst = (void *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar1 * 0xc);
    iVar2 = ~uVar1 + *(int *)(lVar3 + 0x10);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0xc),(longlong)iVar2 * 0xc);
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(ForAnyElementType *)(lVar3 + 8),*(int *)(lVar3 + 0x10),(int *)(lVar3 + 0x14));
  }
  return;
}

// `scalar_deleting_destructor' @ 14d4ee5e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FStateTreeExecutionContext::FSelectStateResult,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStateTreeExecutionContext::FSelectStateResult,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee620

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStateTreeEvent,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FStateTreeEvent,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee660

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStateTreeEventQueue,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStateTreeEventQueue,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee6a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStateTreeInstanceStorage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStateTreeInstanceStorage,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee6e0

void * __thiscall
FStateTreeExecutionContext::FSelectStateResult::_scalar_deleting_destructor_
          (FSelectStateResult *this,uint param_1)

{
  ~FSelectStateResult(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee720

void * __thiscall
FStateTreeExecutionContext::_scalar_deleting_destructor_
          (FStateTreeExecutionContext *this,uint param_1)

{
  ~FStateTreeExecutionContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee760

void * __thiscall
FStateTreeMinimalExecutionContext::_scalar_deleting_destructor_
          (FStateTreeMinimalExecutionContext *this,uint param_1)

{
  ~FStateTreeMinimalExecutionContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee7a0

void * __thiscall
FStateTreeReadOnlyExecutionContext::_scalar_deleting_destructor_
          (FStateTreeReadOnlyExecutionContext *this,uint param_1)

{
  FMRSWRecursiveAccessDetector *pFVar1;
  FStateTreeInstanceStorage *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = this->Storage;
  this->_padding_ = (longlong)&___7FStateTreeReadOnlyExecutionContext__6B_;
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&pFVar2->AccessDetector);
  LOCK();
  pFVar1 = &pFVar2->AccessDetector;
  pFVar1->State = (atomic<unsigned___int64>)((longlong)pFVar1->State + -1);
  UNLOCK();
  pFVar3 = (this->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee810

void * __thiscall
UE::StateTree::ExecutionContext::ITemporaryStorage::_scalar_deleting_destructor_
          (ITemporaryStorage *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d4ee840

void * __thiscall
UStateTreeExtension::_scalar_deleting_destructor_(UStateTreeExtension *this,uint param_1)

{
  *(undefined ***)this = &___7UStateTreeExtension__6B_;
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

// `scalar_deleting_destructor' @ 14d4ee8a0

void * __thiscall
UStateTreeFunctionLibrary::_scalar_deleting_destructor_
          (UStateTreeFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UStateTreeFunctionLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeStateTreeEvaluatorBase @ 14d4f42d0

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeEvaluatorBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeEvents @ 14d4f42e0

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeEvents(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeExecutionExtension @ 14d4f42f0

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeExecutionExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeExecutionTypes @ 14d4f4300

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeExecutionTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeExtension @ 14d4f4310

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeFunctionLibrary @ 14d4f4320

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeInstanceContainer @ 14d4f4330

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeInstanceContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeInstanceData @ 14d4f4340

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeInstanceData(void)

{
  return;
}

// GetTypeHash @ 14d500a50

uint __cdecl GetTypeHash(FStateTreeEvent *param_1)

{
  FName FVar1;
  UScriptStruct *pUVar2;
  uint uVar3;
  int iVar4;
  
  FVar1 = (param_1->Tag).TagName;
  uVar3 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar3 = FVar1.Number + uVar3;
  if (((param_1->Payload).StructMemory != (uchar *)0x0) &&
     (pUVar2 = (param_1->Payload).ScriptStruct.field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0))
  {
    iVar4 = (**(code **)(pUVar2->_padding_ + 0x370))();
    return iVar4 + -0x61c88647 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  }
  return uVar3;
}

// Z_Construct_UClass_UStateTreeExtension_NoRegister @ 14d523ee0

UClass * __cdecl Z_Construct_UClass_UStateTreeExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeExtension",
               &Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton,
               UStateTreeExtension::StaticRegisterNativesUStateTreeExtension,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeExtension>,
               InternalVTableHelperCtorCaller<UStateTreeExtension>,local_res8,UObject::StaticClass,
               UStateTree::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton;
}

// Z_Construct_UClass_UStateTreeFunctionLibrary_NoRegister @ 14d523fa0

UClass * __cdecl Z_Construct_UClass_UStateTreeFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeFunctionLibrary",
               &Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton,
               UStateTreeFunctionLibrary::StaticRegisterNativesUStateTreeFunctionLibrary,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeFunctionLibrary>,
               InternalVTableHelperCtorCaller<UStateTreeFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode @ 14d524060

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeConditionEvaluationMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeConditionEvaluationMode.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeFinishTaskType @ 14d5240a0

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeFinishTaskType(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeFinishTaskType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeFinishTaskType.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeFinishTaskType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeFinishTaskType.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents @ 14d5240e0

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions @ 14d524120

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeRecordTransitions.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeRecordTransitions.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeRecordTransitions_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStateTreeRecordTransitions.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType @ 14d524160

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType(void)

{
  if (Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionSourceType_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EStateTreeTransitionSourceType.InnerSingleton;
}

// Z_Construct_UEnum_StateTreeModule_ETickReason @ 14d5241a0

UEnum * __cdecl Z_Construct_UEnum_StateTreeModule_ETickReason(void)

{
  if (Z_Registration_Info_UEnum_ETickReason.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETickReason.InnerSingleton,
               &Z_Construct_UEnum_StateTreeModule_ETickReason_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETickReason.InnerSingleton;
}

// Z_Construct_UScriptStruct_FExecutionFrameHandle @ 14d5241e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FExecutionFrameHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FExecutionFrameHandle.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FExecutionFrameHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FExecutionFrameHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FExecutionFrameHandle.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FExecutionFrameHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame @ 14d524260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRecordedStateTreeExecutionFrame.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRecordedStateTreeExecutionFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRecordedStateTreeExecutionFrame.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRecordedStateTreeExecutionFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult @ 14d5242e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRecordedStateTreeTransitionResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRecordedStateTreeTransitionResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRecordedStateTreeTransitionResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRecordedStateTreeTransitionResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase @ 14d524360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorCommonBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorCommonBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorCommonBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorCommonBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeEventQueue @ 14d5243e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeEventQueue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeExecutionExtension @ 14d524460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeExecutionExtension(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeExecutionExtension_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeExternalDataDesc @ 14d5244e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeExternalDataDesc(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExternalDataDesc.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeExternalDataDesc.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExternalDataDesc.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeExternalDataDesc.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeInstanceData @ 14d524560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeInstanceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper @ 14d5245e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeInstanceStorage @ 14d524660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeInstanceStorage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeScheduledTick @ 14d5246e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeScheduledTick(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeScheduledTick.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeScheduledTick.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeScheduledTick_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeScheduledTick.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeScheduledTick.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeTransitionResult @ 14d524760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTransitionResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTransitionResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStateTreeTransitionSource @ 14d5247e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateTreeTransitionSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionSource.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateTreeTransitionSource.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateTreeTransitionSource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionSource.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateTreeTransitionSource.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CVarCopyBoundPropertiesOnNonTickedTask'' @ 1504567d0

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_atexit_destructor_for__CVarCopyBoundPropertiesOnNonTickedTask__(void)

{
  CVarCopyBoundPropertiesOnNonTickedTask._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCopyBoundPropertiesOnNonTickedTask);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGlobalTasksCompleteFrame'' @ 1504567f0

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_atexit_destructor_for__CVarGlobalTasksCompleteFrame__(void)

{
  CVarGlobalTasksCompleteFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGlobalTasksCompleteFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetDeprecatedTransitionResultProperties'' @ 150456810

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_atexit_destructor_for__CVarSetDeprecatedTransitionResultProperties__(void)

{
  CVarSetDeprecatedTransitionResultProperties._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSetDeprecatedTransitionResultProperties);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition'' @ 150456830

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_atexit_destructor_for__CVarTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition__
          (void)

{
  CVarTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarTargetStateRequiresTheSameEventForStateSelectionAsTheRequestedTransition);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTickGlobalNodesFollowingTreeHierarchy'' @ 150456850

void __cdecl
UE::StateTree::ExecutionContext::Private::
_dynamic_atexit_destructor_for__CVarTickGlobalNodesFollowingTreeHierarchy__(void)

{
  CVarTickGlobalNodesFollowingTreeHierarchy._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTickGlobalNodesFollowingTreeHierarchy);
  return;
}

// `dynamic_atexit_destructor_for_'Cleanup'' @ 150456870

void __cdecl
`TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::AllocateBlock'::__l5::
_dynamic_atexit_destructor_for__Cleanup__(void)

{
  uint uVar1;
  ulong64 uVar2;
  uint *puVar3;
  void *pvVar4;
  FPageAllocator *this;
  ulong64 *puVar5;
  
  puVar5 = (ulong64 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9be8)
  ;
  uVar2 = *puVar5;
  if (uVar2 != 0) {
    *(ulong64 *)(uVar2 + 0x40) = uVar2 + 0x10000;
    puVar3 = (uint *)*puVar5;
    uVar1 = *puVar3;
    *puVar3 = uVar1 - ~puVar3[0x12];
    if (uVar1 == ~puVar3[0x12]) {
      MemoryTrace_UnmarkAllocAsHeap(*puVar5,0,0);
      pvVar4 = (void *)*puVar5;
      this = FPageAllocator::Get();
      FPageAllocator::Free(this,pvVar4);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterStateTreeInstanceStorageCustomVersion'' @ 1504568f0

void __cdecl _dynamic_atexit_destructor_for__GRegisterStateTreeInstanceStorageCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterStateTreeInstanceStorageCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'OnTraceAnalysisStateChanged'' @ 150456910

void __cdecl
UE::StateTree::Delegates::_dynamic_atexit_destructor_for__OnTraceAnalysisStateChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             OnTraceAnalysisStateChanged._8_8_,OnTraceAnalysisStateChanged._16_4_);
  if (OnTraceAnalysisStateChanged._8_8_ != 0) {
    FMemory::Free((void *)OnTraceAnalysisStateChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTraceAnalysisStateChanged);
  return;
}

// `dynamic_atexit_destructor_for_'OnTracingStateChanged'' @ 150456950

void __cdecl UE::StateTree::Delegates::_dynamic_atexit_destructor_for__OnTracingStateChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnTracingStateChanged._8_8_,
             OnTracingStateChanged._16_4_);
  if (OnTracingStateChanged._8_8_ != 0) {
    FMemory::Free((void *)OnTracingStateChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTracingStateChanged);
  return;
}

// `dynamic_atexit_destructor_for_'OnTracingTimelineScrubbed'' @ 150456990

void __cdecl
UE::StateTree::Delegates::_dynamic_atexit_destructor_for__OnTracingTimelineScrubbed__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnTracingTimelineScrubbed._8_8_,
             OnTracingTimelineScrubbed._16_4_);
  if (OnTracingTimelineScrubbed._8_8_ != 0) {
    FMemory::Free((void *)OnTracingTimelineScrubbed._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTracingTimelineScrubbed);
  return;
}

// operator() @ 15057f0a0

bool __thiscall
``FStateTreeExecutionContext::SelectStateInternal'::__l296::<lambda_5>::operator()'::__l5::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_244450361459336425>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_244450361459336425>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

