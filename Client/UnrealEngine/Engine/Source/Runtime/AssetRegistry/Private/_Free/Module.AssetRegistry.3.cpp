// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 183

// CachePruneAge'' @ 140f46e90

void __cdecl
`dynamic_initializer_for_'UE::AssetDataGather::Private::FGatherSettings::CachePruneAge__(void)

{
  FTimespan::Assign(&UE::AssetDataGather::Private::FGatherSettings::CachePruneAge,7,0,0,0,0);
  return;
}

// `dynamic_initializer_for_'CVarAssetRegistryDeferDependencySort'' @ 140f46ec0

void __cdecl
UE::AssetRegistry::Impl::_dynamic_initializer_for__CVarAssetRegistryDeferDependencySort__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAssetRegistryDeferDependencySort,L"AssetRegistry.DeferDependencySort",
             &bDeferDependencySort,
             L"If true, the dependency lists on dependency nodes will not be sorted until after the initial load is complete"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAssetRegistryDeferDependencySort__);
  return;
}

// `dynamic_initializer_for_'CVarAssetRegistryDeferReferencerSort'' @ 140f46f10

void __cdecl
UE::AssetRegistry::Impl::_dynamic_initializer_for__CVarAssetRegistryDeferReferencerSort__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAssetRegistryDeferReferencerSort,L"AssetRegistry.DeferReferencerSort",
             &bDeferReferencerSort,
             L"If true, the referencer list on dependency nodes will not be sorted until after the initial load is complete"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAssetRegistryDeferReferencerSort__);
  return;
}

// `dynamic_initializer_for_'CVarAssetRegistryDisableDirectoryWatcher'' @ 140f46f60

void __cdecl
UE::AssetRegistry::Impl::_dynamic_initializer_for__CVarAssetRegistryDisableDirectoryWatcher__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAssetRegistryDisableDirectoryWatcher,L"AssetRegistry.DisableDirectoryWatcher",
             &bDisableDirectoryWatcher,
             L"If true, do not listen to mounted directories for file changes",0);
  atexit(_dynamic_atexit_destructor_for__CVarAssetRegistryDisableDirectoryWatcher__);
  return;
}

// `dynamic_initializer_for_'CVarAssetRegistryMaxSecondsPerFrame'' @ 140f46fb0

void __cdecl
UE::AssetRegistry::Impl::_dynamic_initializer_for__CVarAssetRegistryMaxSecondsPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAssetRegistryMaxSecondsPerFrame,L"AssetRegistry.MaxSecondsPerFrame",
             &MaxSecondsPerFrame,
             L"Maximum amount of time allowed for Asset Registry processing, in seconds",0);
  atexit(_dynamic_atexit_destructor_for__CVarAssetRegistryMaxSecondsPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarAssetRegistryMaxSecondsPerTickBackgroundThread'' @ 140f47000

void __cdecl
UE::AssetRegistry::Impl::
_dynamic_initializer_for__CVarAssetRegistryMaxSecondsPerTickBackgroundThread__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAssetRegistryMaxSecondsPerTickBackgroundThread,
             L"AssetRegistry.MaxSecondsPerTickBackgroundThread",&MaxSecondsPerTickBackgroundThread,
             L"Maximum amount of time allowed for Asset Registry processing, in seconds, per iteration on the background thread. Very large values could result in main thread delays due to the background thread holding locks."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAssetRegistryMaxSecondsPerTickBackgroundThread__);
  return;
}

// `dynamic_initializer_for_'ConsoleCommands'' @ 140f47050

void __cdecl _dynamic_initializer_for__ConsoleCommands__(void)

{
  FAssetRegistryConsoleCommands::FAssetRegistryConsoleCommands(&ConsoleCommands);
  atexit(_dynamic_atexit_destructor_for__ConsoleCommands__);
  return;
}

// `dynamic_initializer_for_'DestinationObjectFName'' @ 140f47080

void __cdecl UE::AssetRegistry::Impl::_dynamic_initializer_for__DestinationObjectFName__(void)

{
  ::FName::FName(&DestinationObjectFName,L"DestinationObject");
  return;
}

// `dynamic_initializer_for_'GPreloader'' @ 140f470a0

void __cdecl UE::AssetRegistry::Premade::_dynamic_initializer_for__GPreloader__(void)

{
  code *local_38 [2];
  undefined **local_28;
  FPreloader *local_20;
  undefined8 local_10;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GPreloader.StateLock,4000);
  GPreloader.PreloadReady = (FEvent *)0x0;
  GPreloader.ARPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  GPreloader.ARPath.Data.ArrayNum = 0;
  GPreloader.ARPath.Data.ArrayMax = 0;
  FAssetRegistryState::FAssetRegistryState(&GPreloader.Payload);
  GPreloader.PakMountedDelegate.ID = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__4___0FPreloader_Premade_AssetRegistry_UE__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  GPreloader.ConsumeCallback._0_8_ = 0;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::AssetRegistry::Premade::FPreloader::FPreloader'::__l5::<lambda_1>,void>
                ::Call;
  GPreloader.ConsumeCallback._40_8_ = 0;
  GPreloader.LoadState = WillNeverPreload;
  GPreloader.LoadResult = UninitializedMemberLoadResult;
  local_10 = 0;
  local_20 = &GPreloader;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            ((FDelayedAutoRegisterHelper *)&GPreloader,StatSystemReady,
             (TFunction<void___cdecl(void)> *)local_38,false);
  GPreloader.OnTaskGraphReady.bIsSet = true;
  atexit(_dynamic_atexit_destructor_for__GPreloader__);
  return;
}

// `dynamic_initializer_for_'LogAssetRegistry'' @ 140f47150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAssetRegistry__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAssetRegistry,L"LogAssetRegistry",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAssetRegistry__);
  return;
}

// `dynamic_initializer_for_'Stage_ChunkCompressedSizeFName'' @ 140f47190

void __cdecl UE::AssetRegistry::_dynamic_initializer_for__Stage_ChunkCompressedSizeFName__(void)

{
  ::FName::FName(&Stage_ChunkCompressedSizeFName,L"Stage_ChunkCompressedSize");
  return;
}

// `dynamic_initializer_for_'Stage_ChunkCountFName'' @ 140f471b0

void __cdecl UE::AssetRegistry::_dynamic_initializer_for__Stage_ChunkCountFName__(void)

{
  ::FName::FName(&Stage_ChunkCountFName,L"Stage_ChunkCount");
  return;
}

// `dynamic_initializer_for_'Stage_ChunkInstalledSizeFName'' @ 140f471d0

void __cdecl UE::AssetRegistry::_dynamic_initializer_for__Stage_ChunkInstalledSizeFName__(void)

{
  ::FName::FName(&Stage_ChunkInstalledSizeFName,L"Stage_ChunkInstalledSize");
  return;
}

// `dynamic_initializer_for_'Stage_ChunkOptionalSizeFName'' @ 140f471f0

void __cdecl UE::AssetRegistry::_dynamic_initializer_for__Stage_ChunkOptionalSizeFName__(void)

{
  ::FName::FName(&Stage_ChunkOptionalSizeFName,L"Stage_ChunkOptionalSize");
  return;
}

// `dynamic_initializer_for_'Stage_ChunkSizeFName'' @ 140f47210

void __cdecl UE::AssetRegistry::_dynamic_initializer_for__Stage_ChunkSizeFName__(void)

{
  ::FName::FName(&Stage_ChunkSizeFName,L"Stage_ChunkSize");
  return;
}

// `dynamic_initializer_for_'Stage_ChunkStreamingSizeFName'' @ 140f47230

void __cdecl UE::AssetRegistry::_dynamic_initializer_for__Stage_ChunkStreamingSizeFName__(void)

{
  ::FName::FName(&Stage_ChunkStreamingSizeFName,L"Stage_ChunkStreamingSize");
  return;
}

// `dynamic_initializer_for_'WildcardFName'' @ 140f47250

void __cdecl UE::AssetRegistry::_dynamic_initializer_for__WildcardFName__(void)

{
  ::FName::FName(&WildcardFName,L"*");
  return;
}

// `dynamic_initializer_for_'WildcardPathName'' @ 140f47270

void __cdecl UE::AssetRegistry::_dynamic_initializer_for__WildcardPathName__(void)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(&local_res8,L"*");
  FVar1 = *pFVar2;
  pFVar2 = ::FName::FName(local_res10,L"/*");
  WildcardPathName.PackageName.ComparisonIndex.Value = 0;
  WildcardPathName.PackageName.Number = 0;
  WildcardPathName.AssetName.ComparisonIndex.Value = 0;
  WildcardPathName.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&WildcardPathName,*pFVar2,FVar1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h__Script_AssetRegistry_4185706934'' @ 140f472d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h__Script_AssetRegistry_4185706934__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AssetRegistry",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h__Script_AssetRegistry_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h__Script_AssetRegistry_1492531657'' @ 140f47310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h__Script_AssetRegistry_1492531657__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AssetRegistry",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h__Script_AssetRegistry_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h__Script_AssetRegistry_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// NewProp_bIncludeOnlyOnDiskAssets_SetBit @ 142b6d8a0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::
NewProp_bIncludeOnlyOnDiskAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bSkipARFilteredAssets_SetBit @ 142b6d8b0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::
NewProp_bSkipARFilteredAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142b6d8c0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName @ 142b6d8d0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPackageName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRecursive_SetBit @ 142b6d910

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_bRecursive_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIncludeOnlyOnDiskAssets_SetBit @ 142b6d920

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::
NewProp_bIncludeOnlyOnDiskAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142b6d930

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath @ 142b6d940

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRecursive_SetBit @ 142b6d980

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_bRecursive_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bIncludeOnlyOnDiskAssets_SetBit @ 142b6d990

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::
NewProp_bIncludeOnlyOnDiskAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142b6d9a0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths @ 142b6da60

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetAssetsByPaths_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames @ 142b6daa0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetDerivedClassNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSkipARFilteredAssets_SetBit @ 142b6dae0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_bSkipARFilteredAssets_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142b6daf0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x161) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets @ 142b6db00

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetInMemoryAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInRecurse_SetBit @ 142b6db40

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::NewProp_bInRecurse_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetSubPaths @ 142b6db50

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetSubPaths(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAssetRegistry_GetSubPaths_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bRecursive_SetBit @ 142b6db90

void __cdecl
Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_bRecursive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142b6dba0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_HasAssets @ 142b6dbb0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_HasAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAssetRegistry_HasAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142b6dbf0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets @ 142b6dc00

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_IsLoadingAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142b6dc40

void __cdecl
Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets @ 142b6dc50

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_IsSearchAllAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142b6dc90

void __cdecl
Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_IsSearchAsync @ 142b6dca0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_IsSearchAsync(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_IsSearchAsync_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeOnlyOnDiskAssets_SetBit @ 142b6dce0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::
NewProp_bIncludeOnlyOnDiskAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bSkipARFilteredAssets_SetBit @ 142b6dcf0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::
NewProp_bSkipARFilteredAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath @ 142b6dd00

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_K2_GetAssetByObjectPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142b6dd40

void __cdecl
Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies @ 142b6dd50

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_K2_GetDependencies_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142b6dd90

void __cdecl
Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers @ 142b6dda0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_K2_GetReferencers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath @ 142b6dde0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_PrioritizeSearchPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter @ 142b6de20

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_RunAssetsThroughFilter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForceRescan_SetBit @ 142b6de60

void __cdecl
Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::NewProp_bForceRescan_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous @ 142b6de70

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_ScanFilesSynchronous_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles @ 142b6deb0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_ScanModifiedAssetFiles_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForceRescan_SetBit @ 142b6def0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::NewProp_bForceRescan_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIgnoreDenyListScanFilters_SetBit @ 142b6df00

void __cdecl
Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::
NewProp_bIgnoreDenyListScanFilters_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous @ 142b6df10

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_ScanPathsSynchronous_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSynchronousSearch_SetBit @ 142b6df50

void __cdecl
Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::NewProp_bSynchronousSearch_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_SearchAllAssets @ 142b6df60

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_SearchAllAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_SearchAllAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets @ 142b6dfa0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_UseFilterToExcludeAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetRegistry_WaitForCompletion @ 142b6dfe0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_WaitForCompletion(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_WaitForCompletion_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetRegistry_WaitForPackage @ 142b6e020

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_WaitForPackage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_WaitForPackage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAssetRegistryImpl @ 142b6e060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAssetRegistryImpl(void)

{
  if (Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton,
               &Z_Construct_UClass_UAssetRegistryImpl_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton;
}

// `scalar_deleting_destructor' @ 142b6e560

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b6e5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::Premade::FPreloader::FPreloader'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___0FPreloader_Premade_AssetRegistry_UE__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b6e670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b6e730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b6ea10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAssetRegistryConsoleCommands,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAssetRegistryConsoleCommands,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_UAssetRegistry @ 142b6ea80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAssetRegistry(void)

{
  if (Z_Registration_Info_UClass_UAssetRegistry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAssetRegistry.OuterSingleton,
               &Z_Construct_UClass_UAssetRegistry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAssetRegistry.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions @ 142b6ead0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetRegistryDependencyOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetRegistryDependencyOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetRegistryDependencyOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAssetRegistryDependencyOptions.InnerSingleton;
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

// NewProp_bIncludeSoftPackageReferences_SetBit @ 142b6eb50

void __cdecl
Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::
NewProp_bIncludeSoftPackageReferences_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIncludeHardPackageReferences_SetBit @ 142b6eb60

void __cdecl
Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::
NewProp_bIncludeHardPackageReferences_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bIncludeGamePackageReferences_SetBit @ 142b6eb70

void __cdecl
Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::
NewProp_bIncludeGamePackageReferences_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bIncludeEditorOnlyPackageReferences_SetBit @ 142b6eb80

void __cdecl
Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::
NewProp_bIncludeEditorOnlyPackageReferences_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bIncludeSearchableNames_SetBit @ 142b6eb90

void __cdecl
Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::
NewProp_bIncludeSearchableNames_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bIncludeSoftManagementReferences_SetBit @ 142b6eba0

void __cdecl
Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::
NewProp_bIncludeSoftManagementReferences_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bIncludeHardManagementReferences_SetBit @ 142b6ebb0

void __cdecl
Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::
NewProp_bIncludeHardManagementReferences_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewStructOps @ 142b6ec00

void * __cdecl Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetRegistryDependencyOptions,&UE::CoreUObject::Private::Construct<FAssetRegistryDependencyOptions>,&UE::CoreUObject::Private::ConstructForTests<FAssetRegistryDependencyOptions>,&UE::CoreUObject::Private::Destruct<FAssetRegistryDependencyOptions>,&UE::CoreUObject::Private::Copy<FAssetRegistryDependencyOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIncludeOnlyOnDiskAssets_SetBit @ 142b6ec40

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142b6ec50

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetAllAssets @ 142b6ec60

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAllAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetAllAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths @ 142b6eca0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetAllCachedPaths_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 142b6ece0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames @ 142b6ecf0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetAncestorClassNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeOnlyOnDiskAssets_SetBit @ 142b6ed30

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::
NewProp_bIncludeOnlyOnDiskAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath @ 142b6ed40

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetAssetByObjectPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSkipARFilteredAssets_SetBit @ 142b6edc0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_bSkipARFilteredAssets_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142b6edd0

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x161) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetAssets @ 142b6ede0

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAssets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAssetRegistry_GetAssets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSearchSubClasses_SetBit @ 142b6ee30

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_bSearchSubClasses_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142b6ee40

void __cdecl
Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass @ 142b6ee50

UFunction * __cdecl Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetRegistry_GetAssetsByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// AddLambda<`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>_> @ 142b6f340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
AddLambda<_UE::AssetRegistry::Premade::FPreloader::DelayedInitialize_::__l10::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  uVar8 = 0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__9__DelayedInitialize_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ___V__6B_
    ;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_70);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_> @ 142b6f590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
::AddLambda<_UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous_::__l18::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FDelegateHandle FVar11;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *pTVar12;
  ForElementType<TAlignedBytes<16,16>_> *pFVar13;
  undefined4 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pTVar12 = (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar9 = UE::Core::Private::DelegateAllocate(0x38,&local_48);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFResults_AssetDataGather_UE___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::`18'::<lambda_2>_>
               ::_vftable_;
    uVar2 = in_R8[1];
    uVar3 = in_R8[2];
    uVar4 = in_R8[3];
    *(undefined4 *)(puVar9 + 3) = *in_R8;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar2;
    *(undefined4 *)(puVar9 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)(in_R8 + 6);
    puVar9[5] = *(undefined8 *)(in_R8 + 4);
    puVar9[6] = uVar5;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    FVar11.ID = (*pcVar1)();
    return (FDelegateHandle)FVar11.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->GatheredAssets =
       (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)0x0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar7 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar7 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      pTVar12 = (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
                *puVar9;
    }
    LeaveCriticalSection(&local_70);
    param_1->GatheredAssets = pTVar12;
    iVar8 = *(int *)&this->field_0x30;
    if (iVar8 == *(int *)&this->field_0x34) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar13 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x28 + (longlong)iVar8 * 0x10);
    *(int *)&this->field_0x30 = iVar8 + 1;
    *pFVar13 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar13 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar13 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar13);
    }
    *pFVar13 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar13 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_> @ 142b701c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<__UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade_::__l8::<lambda_2>::operator()_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  longlong lVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  bool bVar8;
  int iVar9;
  bool *pbVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  bool *pbVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  TFutureState<void> *pTVar22;
  undefined1 auStackY_1f8 [32];
  TPromise<void> local_1b8;
  undefined4 local_1a0;
  TFutureState<void> *local_198;
  FRunnableThread *local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  TPromise<FRunnableThread_*> local_178;
  TPromise<FRunnableThread_*> local_160;
  FConstructor local_148;
  FString local_140;
  FString local_130;
  TWeakPtr<FTSTicker::FElement,1> local_120;
  TPromise<void> local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  bool *local_e0;
  TFutureState<void> *local_d8;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  bool *local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  pbVar17 = &local_108.bFutureRetrieved;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_1a0 = 0;
  local_108.State.Object = (TFutureState<void> *)0x0;
  pbVar10 = FMemory::Malloc(0x2c0,0x10);
  *(undefined ***)pbVar10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  pbVar10[0x10] = (bool)param_2->LoadResult;
  local_e0 = pbVar10;
  FAssetRegistryState::FAssetRegistryState
            ((FAssetRegistryState *)(pbVar10 + 0x18),&param_2->ARState);
  *(longlong *)(pbVar10 + 0x290) = *(longlong *)&param_2->ConsumeFromAsyncThread;
  *(longlong *)(pbVar10 + 0x2b8) = *(longlong *)&(param_2->ConsumeFromAsyncThread).field_0x28;
  *(undefined8 *)&(param_2->ConsumeFromAsyncThread).field_0x28 = 0;
  lVar5 = *(longlong *)&(param_2->ConsumeFromAsyncThread).field_0x18;
  *(longlong *)(pbVar10 + 0x2a0) = *(longlong *)&(param_2->ConsumeFromAsyncThread).field_0x10;
  *(longlong *)(pbVar10 + 0x2a8) = lVar5;
  *(longlong *)(pbVar10 + 0x2b0) = *(longlong *)&(param_2->ConsumeFromAsyncThread).field_0x20;
  if (*(longlong *)(pbVar10 + 0x290) != 0) {
    *(undefined8 *)&param_2->ConsumeFromAsyncThread = 0;
  }
  if (pbVar10 + 0x10 != (bool *)0x0) {
    local_108.State.Object =
         (TFutureState<void> *)
         UE::Core::Private::Function::
         TFunctionRefCaller<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  TPromise<void>::TPromise<void>(&local_1b8,param_3);
  if ((local_1b8.bFutureRetrieved != false) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_1b8.bFutureRetrieved = true;
  if ((local_1b8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_1b8.State.SharedReferenceCount.ReferenceController;
  pTVar21 = local_1b8.State.Object;
  local_188 = local_1b8.State.Object;
  if (local_1b8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_148.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_1a0 = 1;
    if (param_1 == TaskGraph) {
      local_1a0 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_148,(TUniqueFunction<void___cdecl(void)> *)&local_198,&local_108,
               (Type *)&local_1b8);
    if (local_198 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_198->field_0x30;
      iVar9 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (*(code *)**(undefined8 **)local_198)(local_198,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (code *)CONCAT44(local_108._20_4_,local_108._16_4_);
    pcStack_c0 = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_d8 = local_108.State.Object;
    local_b0 = local_e0;
    local_a8 = local_1b8.State.Object;
    local_a0 = local_1b8.State.SharedReferenceCount.ReferenceController;
    local_98 = local_1b8.bFutureRetrieved;
    local_e0 = (bool *)0x0;
    local_b8 = local_e8;
    local_108.State.Object = (TFutureState<void> *)0x0;
    local_1b8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1b8.State.Object = (TFutureState<void> *)0x0;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>::operator()'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_60 + 2;
    *ppcVar16 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (bool *)0x0;
    local_60[4] = local_c8;
    local_60[5] = pcStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar16 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar16 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_120,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_120.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_120.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_120.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_120.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar16 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar16 = local_60;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar8 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      ppcVar16 = &local_c8;
      if ((code **)local_b0 != (code **)0x0) {
        ppcVar16 = (code **)local_b0;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    break;
  case Thread:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_178);
      pTVar12 = operator_new(0x70);
      pTVar22 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_178.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_178.State.Object;
        local_178.bFutureRetrieved = true;
        if ((local_178.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_178.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_178.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_178.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar12->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar12->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar12->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar12->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar12->field_0x30 = local_e8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108.State.Object = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1b8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1b8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_178.State.SharedReferenceCount.ReferenceController;
        local_1b8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1b8.State.Object = (TFutureState<void> *)0x0;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        pTVar12->field_0x50 = local_1b8.bFutureRetrieved;
        local_198 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = local_188;
        pTVar22 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_198);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_140,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_140.Data.ArrayNum != 0) {
        FVar19.Data = local_140.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar22,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_190 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar9 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_178,&local_190);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (((local_178.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_178.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar20 = local_108.State.Object;
      pbVar10 = pbVar17;
      if (local_e0 != (bool *)0x0) {
        pbVar10 = local_e0;
      }
      uVar15 = (**(code **)(*(longlong *)pbVar10 + 8))();
      (*(code *)pTVar20)(uVar15);
      if (local_1b8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1b8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1b8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar8) || (bVar8 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar8)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pTVar12 = operator_new(0x70);
      pTVar22 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar12->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar12->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar12->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar12->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar12->field_0x30 = local_e8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108.State.Object = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1b8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1b8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_1b8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1b8.State.Object = (TFutureState<void> *)0x0;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        pTVar12->field_0x50 = local_1b8.bFutureRetrieved;
        local_198 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = local_188;
        pTVar22 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_198);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar19.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar22,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_180 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar9 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_180);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar20 = local_108.State.Object;
      pbVar10 = pbVar17;
      if (local_e0 != (bool *)0x0) {
        pbVar10 = local_e0;
      }
      uVar15 = (**(code **)(*(longlong *)pbVar10 + 8))();
      (*(code *)pTVar20)(uVar15);
      if (local_1b8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1b8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1b8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_108.State.Object;
        puVar14[7] = local_e0;
        local_e0 = (bool *)0x0;
        *(undefined4 *)(puVar14 + 4) = local_108._16_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_108._20_4_;
        *(undefined4 *)(puVar14 + 5) = uStack_f0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_ec;
        puVar14[6] = local_e8;
        if (puVar14[2] != 0) {
          local_108.State.Object = pTVar20;
        }
        puVar14[8] = local_1b8.State.Object;
        puVar14[9] = local_1b8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_1b8.bFutureRetrieved;
        local_1b8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1b8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar20 = local_108.State.Object;
      pbVar10 = pbVar17;
      if (local_e0 != (bool *)0x0) {
        pbVar10 = local_e0;
      }
      uVar15 = (**(code **)(*(longlong *)pbVar10 + 8))();
      (*(code *)pTVar20)(uVar15);
      if (local_1b8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1b8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1b8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar21;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1b8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1b8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.State.SharedReferenceCount.ReferenceController);
  if (local_108.State.Object != (TFutureState<void> *)0x0) {
    if (local_e0 != (bool *)0x0) {
      pbVar17 = local_e0;
    }
    (**(code **)(*(longlong *)pbVar17 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_> @ 142b70e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_UE::AssetRegistry::Premade::FPreloader::KickPreload_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1d8 [32];
  TPromise<void> local_198;
  undefined4 local_180;
  TFutureState<void> *local_178;
  FRunnableThread *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FConstructor local_130;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  undefined1 local_f8 [16];
  undefined **local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined ***local_d0;
  TFutureState<void> *local_c8;
  undefined **local_b8;
  FPreloader *pFStack_b0;
  code *local_a8;
  undefined ***local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_180 = 0;
  local_e8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  uStack_e0 = param_2->__this;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>,void>
       ::Call;
  local_d0 = (undefined ***)0x0;
  TPromise<void>::TPromise<void>(&local_198,param_3);
  if ((local_198.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_198.bFutureRetrieved = true;
  if ((local_198.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_198.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_198.State.Object;
  if (local_198.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_130.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_180 = 1;
    if (param_1 == TaskGraph) {
      local_180 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_130,(TUniqueFunction<void___cdecl(void)> *)&local_178,
               (TPromise<void> *)local_f8,(Type *)&local_198);
    if (local_178 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_178->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_178)(local_178,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (TFutureState<void> *)local_f8._0_8_;
    local_a0 = local_d0;
    local_98 = local_198.State.Object;
    local_90 = local_198.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8;
    pFStack_b0 = uStack_e0;
    local_a8 = local_d8;
    local_f8._0_8_ = (TFutureState<void> *)0x0;
    local_198.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_198.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_198.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar16 = local_50 + 2;
    *ppcVar16 = (code *)local_c8;
    local_50[7] = (code *)local_a0;
    local_a0 = (undefined ***)0x0;
    local_50[4] = (code *)local_b8;
    local_50[5] = (code *)pFStack_b0;
    local_50[6] = local_a8;
    if (*ppcVar16 != (code *)0x0) {
      local_c8 = (TFutureState<void> *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar16 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar16 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar16 = local_50;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if (local_c8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar17 = local_a0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(FPreloader **)&pTVar12->field_0x28 = uStack_e0;
        *(code **)&pTVar12->field_0x30 = local_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_170 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_170);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_f8._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_d0;
        *(undefined ***)&pTVar12->field_0x20 = local_e8;
        *(FPreloader **)&pTVar12->field_0x28 = uStack_e0;
        *(code **)&pTVar12->field_0x30 = local_d8;
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_f8._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_198.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_198.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_198.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_178 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_178);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar19.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_f8._0_8_;
        puVar14[7] = local_d0;
        *(undefined4 *)(puVar14 + 4) = local_e8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_e0._4_4_;
        puVar14[6] = local_d8;
        if (puVar14[2] != 0) {
          local_f8._0_8_ = pTVar20;
        }
        puVar14[8] = local_198.State.Object;
        puVar14[9] = local_198.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_198.bFutureRetrieved;
        local_198.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_198.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_f8._0_8_);
      uVar8 = local_f8._0_8_;
      pppuVar17 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar17 = local_d0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_198.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_198.State.Object;
      if ((*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_198.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_198.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_f8._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar17 = local_d0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int> @ 142b71a80

void __cdecl
DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
          (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x48;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                ((FAssetDataTagMapSharedView *)(puVar1 + -2));
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int> @ 142b71ad0

void __cdecl
DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
          (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,int> @ 142b71b10

void __cdecl
DestructItems<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,int>
          (FAssetRegistryPackageRedirect *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->DestPackageName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->SourcePackageName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l2::FFilterData,int> @ 142b71b60

void __cdecl
DestructItems<_UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper_::__l2::FFilterData,int>
          (FFilterData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->PackageNameStr;
    do {
      pFVar1 = (((FUtf8String *)(pFVar2 + 2))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEach<`UE::AssetRegistry::Utils::AddNonOverlappingTags'::__l2::<lambda_1>_> @ 142b743e0

/* WARNING: Removing unreachable block (ram,0x000142b746d9) */

void __thiscall
FAssetDataTagMapSharedView::
ForEach<_UE::AssetRegistry::Utils::AddNonOverlappingTags_::__l2::<lambda_1>_>
          (FAssetDataTagMapSharedView *this,<lambda_1> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FAssetDataTagMap *pFVar3;
  TOptional<FAssetDataTagMap> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  TTuple<FName,FString> *pTVar8;
  FAssetDataTagMap *pFVar9;
  FNumberlessPair *pFVar10;
  FNumberedPair *pFVar11;
  FName *pFVar12;
  FAssetTagValueRef_u_0 FVar13;
  undefined1 local_res8 [8];
  FString local_e8;
  FName local_d8;
  FAssetTagValueRef_u_0 local_d0;
  FString local_c8;
  FNameEntryId local_b8;
  undefined4 uStack_b4;
  TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> local_a8;
  TTuple<FName,FAssetTagValueRef> local_98;
  TArrayView<FixedTagPrivate::FNumberedPair_const_,int> local_88;
  FName local_78;
  ulonglong local_70;
  FName local_68;
  FAssetDataTagMap local_58;
  
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    pFVar3 = (this->field0_0x0).Loose;
    if (pFVar3 != (FAssetDataTagMap *)0x0) {
      pFVar12 = (FName *)pFVar3->_padding_;
      iVar2 = (int)pFVar3->_padding_;
      FVar13.Loose = (FString *)(pFVar12 + 1);
      pFVar1 = pFVar12 + (longlong)iVar2 * 3;
      while( true ) {
        if ((int)pFVar3->_padding_ != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TTuple<FName,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar12 == pFVar1) break;
        local_d8 = *pFVar12;
        local_d0 = FVar13;
        if (param_1->ModifiedTags->bIsSet == false) {
          bVar6 = Contains(&param_1->ExistingAssetData->TagsAndValues,local_d8);
          if (!bVar6) {
            pTVar4 = param_1->ModifiedTags;
            pFVar9 = CopyMap(&param_1->ExistingAssetData->TagsAndValues,&local_58);
            TOptional<FAssetDataTagMap>::Emplace<FAssetDataTagMap>(pTVar4,pFVar9);
            DestructItems<TTuple<FName,FString>,int>
                      ((TTuple<FName,FString> *)local_58._padding_,(int)local_58._padding_);
            if ((TTuple<FName,FString> *)local_58._padding_ != (TTuple<FName,FString> *)0x0) {
              FMemory::Free((void *)local_58._padding_);
            }
            pTVar4 = param_1->ModifiedTags;
            if ((pTVar4->bIsSet == false) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&local_d0.Fixed,&local_c8);
            pTVar8 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
                     AllocateMemoryForEmplace<FName_const_&>
                               ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                 *)pTVar4,&local_d8);
            *(uint *)&pTVar8->field_0x0 = local_d8.ComparisonIndex.Value;
            *(uint *)&pTVar8->field_0x4 = local_d8.Number;
            *(undefined8 *)&pTVar8->field_0x8 = 0;
            *(FScriptContainerElement **)&pTVar8->field_0x8 = local_c8.Data.AllocatorInstance.Data;
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)&pTVar8->field_0x10 = local_c8.Data.ArrayNum;
            *(int *)&pTVar8->field_0x14 = local_c8.Data.ArrayMax;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
          }
        }
        else {
          pFVar7 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                             ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                              param_1->ModifiedTags,local_d8);
          if (pFVar7 == (FString *)0x0) {
            pTVar4 = param_1->ModifiedTags;
            if ((pTVar4->bIsSet == false) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&local_d0.Fixed,&local_e8);
            pTVar8 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
                     AllocateMemoryForEmplace<FName_const_&>
                               ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                 *)pTVar4,&local_d8);
            *(uint *)&pTVar8->field_0x0 = local_d8.ComparisonIndex.Value;
            *(uint *)&pTVar8->field_0x4 = local_d8.Number;
            *(undefined8 *)&pTVar8->field_0x8 = 0;
            *(FScriptContainerElement **)&pTVar8->field_0x8 = local_e8.Data.AllocatorInstance.Data;
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)&pTVar8->field_0x10 = local_e8.Data.ArrayNum;
            *(int *)&pTVar8->field_0x14 = local_e8.Data.ArrayMax;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
          }
        }
        pFVar12 = pFVar12 + 3;
        FVar13.Loose = (FString *)(FVar13.Bits + 0x18);
      }
    }
  }
  else if ((*(byte *)&this->field0_0x0 & 2) == 0) {
    FixedTagPrivate::FMapHandle::GetNumberedView((FMapHandle *)this,&local_88);
    pFVar11 = local_88.DataPtr;
    if (local_88.DataPtr != local_88.DataPtr + local_88.ArrayNum) {
      do {
        local_78 = pFVar11->Key;
        local_70 = ((ulonglong)*(ushort *)&this->field0_0x0 & 0xfffffffffffffffc |
                   0xfffffffe00000000) << 0x1e | (ulonglong)(uint)pFVar11->Value;
        local_68 = local_78;
        `UE::AssetRegistry::Utils::AddNonOverlappingTags'::__l2::<lambda_1>::operator()
                  (param_1,(TTuple<FName,FAssetTagValueRef> *)&local_78);
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != local_88.DataPtr + local_88.ArrayNum);
      return;
    }
  }
  else {
    FixedTagPrivate::FMapHandle::GetNumberlessView((FMapHandle *)this,&local_a8);
    if (local_a8.DataPtr != local_a8.DataPtr + local_a8.ArrayNum) {
      uStack_b4 = 0;
      pFVar10 = local_a8.DataPtr;
      do {
        local_b8.Value = (uint)(*pFVar10).Key;
        local_98._4_4_ = uStack_b4;
        local_98._0_4_ = local_b8.Value;
        local_98._8_8_ =
             ((ulonglong)*(ushort *)&this->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
             0x1e | (ulonglong)*pFVar10 >> 0x20;
        `UE::AssetRegistry::Utils::AddNonOverlappingTags'::__l2::<lambda_1>::operator()
                  (param_1,&local_98);
        pFVar10 = pFVar10 + 1;
      } while (pFVar10 != local_a8.DataPtr + local_a8.ArrayNum);
      return;
    }
  }
  return;
}

// ForEach<`UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData'::__l23::<lambda_3>_> @ 142b74720

/* WARNING: Removing unreachable block (ram,0x000142b74a19) */

void __thiscall
FAssetDataTagMapSharedView::
ForEach<_UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData_::__l23::<lambda_3>_>
          (FAssetDataTagMapSharedView *this,<lambda_3> *param_1)

{
  FName *pFVar1;
  int iVar2;
  FAssetDataTagMap *pFVar3;
  TOptional<FAssetDataTagMap> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  TTuple<FName,FString> *pTVar8;
  FAssetDataTagMap *pFVar9;
  FNumberlessPair *pFVar10;
  FNumberedPair *pFVar11;
  FName *pFVar12;
  FAssetTagValueRef_u_0 FVar13;
  undefined1 local_res8 [8];
  FString local_e8;
  FName local_d8;
  FAssetTagValueRef_u_0 local_d0;
  FString local_c8;
  FNameEntryId local_b8;
  undefined4 uStack_b4;
  TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> local_a8;
  TTuple<FName,FAssetTagValueRef> local_98;
  TArrayView<FixedTagPrivate::FNumberedPair_const_,int> local_88;
  FName local_78;
  ulonglong local_70;
  FName local_68;
  FAssetDataTagMap local_58;
  
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    pFVar3 = (this->field0_0x0).Loose;
    if (pFVar3 != (FAssetDataTagMap *)0x0) {
      pFVar12 = (FName *)pFVar3->_padding_;
      iVar2 = (int)pFVar3->_padding_;
      FVar13.Loose = (FString *)(pFVar12 + 1);
      pFVar1 = pFVar12 + (longlong)iVar2 * 3;
      while( true ) {
        if ((int)pFVar3->_padding_ != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TTuple<FName,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar12 == pFVar1) break;
        local_d8 = *pFVar12;
        local_d0 = FVar13;
        if (param_1->UpdatedTags->bIsSet == false) {
          bVar6 = Contains(&param_1->NewAssetData->TagsAndValues,local_d8);
          if (!bVar6) {
            pTVar4 = param_1->UpdatedTags;
            pFVar9 = CopyMap(&param_1->NewAssetData->TagsAndValues,&local_58);
            TOptional<FAssetDataTagMap>::Emplace<FAssetDataTagMap>(pTVar4,pFVar9);
            DestructItems<TTuple<FName,FString>,int>
                      ((TTuple<FName,FString> *)local_58._padding_,(int)local_58._padding_);
            if ((TTuple<FName,FString> *)local_58._padding_ != (TTuple<FName,FString> *)0x0) {
              FMemory::Free((void *)local_58._padding_);
            }
            pTVar4 = param_1->UpdatedTags;
            if ((pTVar4->bIsSet == false) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&local_d0.Fixed,&local_c8);
            pTVar8 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
                     AllocateMemoryForEmplace<FName_const_&>
                               ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                 *)pTVar4,&local_d8);
            *(uint *)&pTVar8->field_0x0 = local_d8.ComparisonIndex.Value;
            *(uint *)&pTVar8->field_0x4 = local_d8.Number;
            *(undefined8 *)&pTVar8->field_0x8 = 0;
            *(FScriptContainerElement **)&pTVar8->field_0x8 = local_c8.Data.AllocatorInstance.Data;
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)&pTVar8->field_0x10 = local_c8.Data.ArrayNum;
            *(int *)&pTVar8->field_0x14 = local_c8.Data.ArrayMax;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
          }
        }
        else {
          pFVar7 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                             ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                              param_1->UpdatedTags,local_d8);
          if (pFVar7 == (FString *)0x0) {
            pTVar4 = param_1->UpdatedTags;
            if ((pTVar4->bIsSet == false) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FAssetTagValueRef::ToLoose((FAssetTagValueRef *)&local_d0.Fixed,&local_e8);
            pTVar8 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
                     AllocateMemoryForEmplace<FName_const_&>
                               ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>
                                 *)pTVar4,&local_d8);
            *(uint *)&pTVar8->field_0x0 = local_d8.ComparisonIndex.Value;
            *(uint *)&pTVar8->field_0x4 = local_d8.Number;
            *(undefined8 *)&pTVar8->field_0x8 = 0;
            *(FScriptContainerElement **)&pTVar8->field_0x8 = local_e8.Data.AllocatorInstance.Data;
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)&pTVar8->field_0x10 = local_e8.Data.ArrayNum;
            *(int *)&pTVar8->field_0x14 = local_e8.Data.ArrayMax;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
          }
        }
        pFVar12 = pFVar12 + 3;
        FVar13.Loose = (FString *)(FVar13.Bits + 0x18);
      }
    }
  }
  else if ((*(byte *)&this->field0_0x0 & 2) == 0) {
    FixedTagPrivate::FMapHandle::GetNumberedView((FMapHandle *)this,&local_88);
    pFVar11 = local_88.DataPtr;
    if (local_88.DataPtr != local_88.DataPtr + local_88.ArrayNum) {
      do {
        local_78 = pFVar11->Key;
        local_70 = ((ulonglong)*(ushort *)&this->field0_0x0 & 0xfffffffffffffffc |
                   0xfffffffe00000000) << 0x1e | (ulonglong)(uint)pFVar11->Value;
        local_68 = local_78;
        `UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData'::__l23::<lambda_3>::operator()
                  (param_1,(TTuple<FName,FAssetTagValueRef> *)&local_78);
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != local_88.DataPtr + local_88.ArrayNum);
      return;
    }
  }
  else {
    FixedTagPrivate::FMapHandle::GetNumberlessView((FMapHandle *)this,&local_a8);
    if (local_a8.DataPtr != local_a8.DataPtr + local_a8.ArrayNum) {
      uStack_b4 = 0;
      pFVar10 = local_a8.DataPtr;
      do {
        local_b8.Value = (uint)(*pFVar10).Key;
        local_98._4_4_ = uStack_b4;
        local_98._0_4_ = local_b8.Value;
        local_98._8_8_ =
             ((ulonglong)*(ushort *)&this->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
             0x1e | (ulonglong)*pFVar10 >> 0x20;
        `UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData'::__l23::<lambda_3>::operator()
                  (param_1,&local_98);
        pFVar10 = pFVar10 + 1;
      } while (pFVar10 != local_a8.DataPtr + local_a8.ArrayNum);
      return;
    }
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<`UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics'::__l23::<lambda_1>_>_>_>_> @ 142b75ee0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics_::__l23::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_public:_void___cdecl_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics(double)_::_23_::<lambda_1>_>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  int iVar14;
  int iVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar15 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_142b75fe9:
      if (iVar15 == 0) {
        iVar9 = param_2 + -1;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar16 = param_1 + lVar11;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar16->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar2;
            pTVar16->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar6;
            iVar14 = 0;
            if (1 < iVar9) {
              do {
                iVar15 = iVar14 * 2;
                iVar8 = iVar15 + 1;
                if (iVar15 + 2 < iVar9) {
                  if (*(longlong *)((longlong)iVar8 * 0x20 + 0x10 + (longlong)param_1) <
                      *(longlong *)((longlong)iVar15 * 0x20 + 0x50 + (longlong)param_1)) {
                    iVar8 = iVar15;
                  }
                  iVar8 = iVar8 + 1;
                }
                pTVar12 = param_1 + iVar8;
                pTVar13 = param_1 + iVar14;
                if (*(longlong *)((longlong)(pTVar13->ElementData).Pad + 0x10) <=
                    *(longlong *)((pTVar12->ElementData).Pad + 0x10)) break;
                uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
                TVar3 = pTVar13->_s_1;
                uVar4 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8);
                uVar5 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10);
                uVar6 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18);
                pTVar13->_s_1 = pTVar12->_s_1;
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18) = uVar2;
                pTVar12->_s_1 = TVar3;
                *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar5;
                *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar6;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + -1;
            pTVar16 = pTVar16 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar8 = iVar15 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar15 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(longlong *)((longlong)iVar10 * 0x20 + 0x10 + (longlong)param_1) <
          *(longlong *)((longlong)iVar9 * 0x20 + 0x50 + (longlong)param_1)) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar16 = param_1 + iVar10;
    pTVar12 = param_1 + iVar8;
    if (*(longlong *)((longlong)(pTVar12->ElementData).Pad + 0x10) <=
        *(longlong *)((pTVar16->ElementData).Pad + 0x10)) goto LAB_142b75fe9;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
    iVar9 = iVar10 * 2 + 1;
    TVar3 = pTVar12->_s_1;
    uVar4 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18);
    pTVar12->_s_1 = pTVar16->_s_1;
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18) = uVar2;
    pTVar16->_s_1 = TVar3;
    *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar6;
    iVar8 = iVar10;
  } while( true );
}

// HeapSortInternal<FAssetData,int,UE::Core::Private::TProjectionMemberData<FName_FAssetData::*>,FNameFastLess> @ 142b760f0

void __cdecl
AlgoImpl::
HeapSortInternal<FAssetData,int,UE::Core::Private::TProjectionMemberData<FName_FAssetData::*>,FNameFastLess>
          (FAssetData *param_1,int param_2,TProjectionMemberData<FName_FAssetData::*> param_3,
          FNameFastLess param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FAssetDataTagMapSharedView_u_0 FVar11;
  FAssetBundleData *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 uVar14;
  ForElementType<int> FVar15;
  FAssetDataTagMapSharedView_u_0 FVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForElementType<int> FVar18;
  FAssetData *pFVar19;
  FAssetData *pFVar20;
  uint uVar21;
  FSetElementId FVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  int iVar32;
  int iVar33;
  FAssetData *pFVar34;
  longlong lVar35;
  
  lVar31 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar26) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar26) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar27 = (param_2 + -2) / 2;
  iVar29 = iVar27 * 2 + 1;
  iVar33 = iVar29;
  iVar30 = iVar27;
  do {
    while (param_2 <= iVar29) {
LAB_142b762c8:
      if (iVar30 == 0) {
        iVar29 = param_2 + -1;
        lVar35 = (longlong)iVar29;
        if (0 < iVar29) {
          pFVar34 = param_1 + lVar35;
          do {
            FVar4 = pFVar34->PackagePath;
            iVar32 = 0;
            iVar27 = (param_1->ChunkIDs).ArrayNum;
            iVar30 = (param_1->ChunkIDs).ArrayMax;
            FVar5 = param_1->PackageName;
            FVar6 = param_1->PackagePath;
            FVar7 = param_1->AssetName;
            FVar8 = param_1->AssetClass;
            FVar9 = (param_1->AssetClassPath).PackageName;
            FVar10 = (param_1->AssetClassPath).AssetName;
            FVar22.Index = (param_1->ChunkArrayRegistryHandle).Index;
            uVar23 = param_1->PackageFlags;
            FVar11 = (param_1->TagsAndValues).field0_0x0;
            pFVar12 = (param_1->TaggedAssetBundles).Object;
            pTVar13 = (param_1->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
            uVar14 = *(undefined8 *)(param_1->ChunkIDs).AllocatorInstance.InlineData;
            FVar15 = (param_1->ChunkIDs).AllocatorInstance.SecondaryData;
            param_1->PackageName = pFVar34->PackageName;
            param_1->PackagePath = FVar4;
            FVar4 = pFVar34->AssetClass;
            param_1->AssetName = pFVar34->AssetName;
            param_1->AssetClass = FVar4;
            FVar4 = (pFVar34->AssetClassPath).AssetName;
            (param_1->AssetClassPath).PackageName = (pFVar34->AssetClassPath).PackageName;
            (param_1->AssetClassPath).AssetName = FVar4;
            uVar21 = pFVar34->PackageFlags;
            FVar16 = (pFVar34->TagsAndValues).field0_0x0;
            param_1->ChunkArrayRegistryHandle =
                 (FSetElementId)(pFVar34->ChunkArrayRegistryHandle).Index;
            param_1->PackageFlags = uVar21;
            (param_1->TagsAndValues).field0_0x0 = FVar16;
            pTVar17 = (pFVar34->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
            (param_1->TaggedAssetBundles).Object = (pFVar34->TaggedAssetBundles).Object;
            (param_1->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar17;
            FVar18 = (pFVar34->ChunkIDs).AllocatorInstance.SecondaryData;
            *(undefined8 *)(param_1->ChunkIDs).AllocatorInstance.InlineData =
                 *(undefined8 *)(pFVar34->ChunkIDs).AllocatorInstance.InlineData;
            (param_1->ChunkIDs).AllocatorInstance.SecondaryData = FVar18;
            iVar33 = (pFVar34->ChunkIDs).ArrayMax;
            (param_1->ChunkIDs).ArrayNum = (pFVar34->ChunkIDs).ArrayNum;
            (param_1->ChunkIDs).ArrayMax = iVar33;
            pFVar34->PackageName = FVar5;
            pFVar34->PackagePath = FVar6;
            pFVar34->AssetName = FVar7;
            pFVar34->AssetClass = FVar8;
            (pFVar34->AssetClassPath).PackageName = FVar9;
            (pFVar34->AssetClassPath).AssetName = FVar10;
            pFVar34->ChunkArrayRegistryHandle = (FSetElementId)FVar22.Index;
            pFVar34->PackageFlags = uVar23;
            (pFVar34->TagsAndValues).field0_0x0 = FVar11;
            (pFVar34->TaggedAssetBundles).Object = pFVar12;
            (pFVar34->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar13;
            *(undefined8 *)(pFVar34->ChunkIDs).AllocatorInstance.InlineData = uVar14;
            (pFVar34->ChunkIDs).AllocatorInstance.SecondaryData = FVar15;
            (pFVar34->ChunkIDs).ArrayNum = iVar27;
            (pFVar34->ChunkIDs).ArrayMax = iVar30;
            if (1 < iVar29) {
              do {
                iVar27 = iVar32 * 2;
                iVar33 = iVar27 + 1;
                if (iVar27 + 2 < iVar29) {
                  lVar1 = (longlong)iVar27 + 2;
                  lVar2 = (longlong)iVar27 + 1;
                  iVar30 = *(int *)((longlong)(&param_1[lVar1].ChunkIDs.AllocatorInstance + -5) +
                                   lVar31) -
                           *(int *)((longlong)(&param_1[lVar2].ChunkIDs.AllocatorInstance + -5) +
                                   lVar31);
                  if (iVar30 == 0) {
                    iVar30 = *(int *)(param_1[lVar1].ChunkIDs.AllocatorInstance.InlineData +
                                     lVar31 + -0x4c) -
                             *(int *)(param_1[lVar2].ChunkIDs.AllocatorInstance.InlineData +
                                     lVar31 + -0x4c);
                  }
                  if (iVar30 < 0) {
                    iVar33 = iVar27;
                  }
                  iVar33 = iVar33 + 1;
                }
                iVar27 = *(int *)((longlong)(&param_1[iVar32].ChunkIDs.AllocatorInstance + -5) +
                                 lVar31) -
                         *(int *)((longlong)(&param_1[iVar33].ChunkIDs.AllocatorInstance + -5) +
                                 lVar31);
                if (iVar27 == 0) {
                  iVar27 = *(int *)(param_1[iVar32].ChunkIDs.AllocatorInstance.InlineData +
                                   lVar31 + -0x4c) -
                           *(int *)(param_1[iVar33].ChunkIDs.AllocatorInstance.InlineData +
                                   lVar31 + -0x4c);
                }
                if (-1 < iVar27) break;
                FVar4 = param_1[iVar33].PackagePath;
                iVar30 = param_1[iVar32].ChunkIDs.ArrayNum;
                iVar28 = param_1[iVar32].ChunkIDs.ArrayMax;
                FVar5 = param_1[iVar32].PackageName;
                FVar6 = param_1[iVar32].PackagePath;
                FVar7 = param_1[iVar32].AssetName;
                FVar8 = (&param_1[iVar32].AssetName)[1];
                FVar9 = param_1[iVar32].AssetClassPath.PackageName;
                FVar10 = param_1[iVar32].AssetClassPath.AssetName;
                pFVar19 = param_1 + iVar32;
                FVar22.Index = (pFVar19->ChunkArrayRegistryHandle).Index;
                uVar23 = pFVar19->PackageFlags;
                FVar11 = *(FAssetDataTagMapSharedView_u_0 *)(&pFVar19->ChunkArrayRegistryHandle + 2)
                ;
                pFVar12 = param_1[iVar32].TaggedAssetBundles.Object;
                pTVar13 = param_1[iVar32].TaggedAssetBundles.SharedReferenceCount.
                          ReferenceController;
                uVar14 = *(undefined8 *)param_1[iVar32].ChunkIDs.AllocatorInstance.InlineData;
                FVar15 = param_1[iVar32].ChunkIDs.AllocatorInstance.SecondaryData;
                param_1[iVar32].PackageName = param_1[iVar33].PackageName;
                param_1[iVar32].PackagePath = FVar4;
                FVar4 = (&param_1[iVar33].AssetName)[1];
                param_1[iVar32].AssetName = param_1[iVar33].AssetName;
                (&param_1[iVar32].AssetName)[1] = FVar4;
                FVar4 = param_1[iVar33].AssetClassPath.AssetName;
                param_1[iVar32].AssetClassPath.PackageName =
                     param_1[iVar33].AssetClassPath.PackageName;
                param_1[iVar32].AssetClassPath.AssetName = FVar4;
                pFVar19 = param_1 + iVar33;
                uVar21 = pFVar19->PackageFlags;
                FVar16 = *(FAssetDataTagMapSharedView_u_0 *)(&pFVar19->ChunkArrayRegistryHandle + 2)
                ;
                pFVar20 = param_1 + iVar32;
                pFVar20->ChunkArrayRegistryHandle =
                     (FSetElementId)(pFVar19->ChunkArrayRegistryHandle).Index;
                pFVar20->PackageFlags = uVar21;
                *(FAssetDataTagMapSharedView_u_0 *)(&pFVar20->ChunkArrayRegistryHandle + 2) = FVar16
                ;
                pTVar17 = param_1[iVar33].TaggedAssetBundles.SharedReferenceCount.
                          ReferenceController;
                param_1[iVar32].TaggedAssetBundles.Object =
                     param_1[iVar33].TaggedAssetBundles.Object;
                param_1[iVar32].TaggedAssetBundles.SharedReferenceCount.ReferenceController =
                     pTVar17;
                FVar18 = param_1[iVar33].ChunkIDs.AllocatorInstance.SecondaryData;
                *(undefined8 *)param_1[iVar32].ChunkIDs.AllocatorInstance.InlineData =
                     *(undefined8 *)param_1[iVar33].ChunkIDs.AllocatorInstance.InlineData;
                param_1[iVar32].ChunkIDs.AllocatorInstance.SecondaryData = FVar18;
                iVar27 = param_1[iVar33].ChunkIDs.ArrayMax;
                param_1[iVar32].ChunkIDs.ArrayNum = param_1[iVar33].ChunkIDs.ArrayNum;
                param_1[iVar32].ChunkIDs.ArrayMax = iVar27;
                param_1[iVar33].PackageName = FVar5;
                param_1[iVar33].PackagePath = FVar6;
                param_1[iVar33].AssetName = FVar7;
                (&param_1[iVar33].AssetName)[1] = FVar8;
                param_1[iVar33].AssetClassPath.PackageName = FVar9;
                param_1[iVar33].AssetClassPath.AssetName = FVar10;
                pFVar19 = param_1 + iVar33;
                pFVar19->ChunkArrayRegistryHandle = (FSetElementId)FVar22.Index;
                pFVar19->PackageFlags = uVar23;
                *(FAssetDataTagMapSharedView_u_0 *)(&pFVar19->ChunkArrayRegistryHandle + 2) = FVar11
                ;
                param_1[iVar33].TaggedAssetBundles.Object = pFVar12;
                param_1[iVar33].TaggedAssetBundles.SharedReferenceCount.ReferenceController =
                     pTVar13;
                *(undefined8 *)param_1[iVar33].ChunkIDs.AllocatorInstance.InlineData = uVar14;
                param_1[iVar33].ChunkIDs.AllocatorInstance.SecondaryData = FVar15;
                param_1[iVar33].ChunkIDs.ArrayNum = iVar30;
                param_1[iVar33].ChunkIDs.ArrayMax = iVar28;
                iVar32 = iVar33;
              } while (iVar33 * 2 + 1 < iVar29);
            }
            iVar29 = iVar29 + -1;
            lVar35 = lVar35 + -1;
            pFVar34 = pFVar34 + -1;
          } while (0 < lVar35);
        }
        return;
      }
      iVar27 = iVar30 + -1;
      iVar29 = iVar33 + -2;
      iVar33 = iVar29;
      iVar30 = iVar27;
    }
    iVar29 = iVar27 * 2;
    iVar32 = iVar29 + 1;
    if (iVar29 + 2 < param_2) {
      lVar35 = (longlong)iVar29 + 2;
      lVar1 = (longlong)iVar29 + 1;
      iVar28 = *(int *)((longlong)(&param_1[lVar35].ChunkIDs.AllocatorInstance + -5) + lVar31) -
               *(int *)((longlong)(&param_1[lVar1].ChunkIDs.AllocatorInstance + -5) + lVar31);
      if (iVar28 == 0) {
        iVar28 = *(int *)(param_1[lVar35].ChunkIDs.AllocatorInstance.InlineData + lVar31 + -0x4c) -
                 *(int *)(param_1[lVar1].ChunkIDs.AllocatorInstance.InlineData + lVar31 + -0x4c);
      }
      if (iVar28 < 0) {
        iVar32 = iVar29;
      }
      iVar32 = iVar32 + 1;
    }
    iVar29 = *(int *)((longlong)(&param_1[iVar27].ChunkIDs.AllocatorInstance + -5) + lVar31) -
             *(int *)((longlong)(&param_1[iVar32].ChunkIDs.AllocatorInstance + -5) + lVar31);
    if (iVar29 == 0) {
      iVar29 = *(int *)(param_1[iVar27].ChunkIDs.AllocatorInstance.InlineData + lVar31 + -0x4c) -
               *(int *)(param_1[iVar32].ChunkIDs.AllocatorInstance.InlineData + lVar31 + -0x4c);
    }
    if (-1 < iVar29) goto LAB_142b762c8;
    FVar4 = param_1[iVar32].PackagePath;
    iVar29 = iVar32 * 2 + 1;
    iVar24 = param_1[iVar27].ChunkIDs.ArrayNum;
    iVar25 = param_1[iVar27].ChunkIDs.ArrayMax;
    FVar5 = param_1[iVar27].PackageName;
    FVar6 = param_1[iVar27].PackagePath;
    FVar7 = param_1[iVar27].AssetName;
    FVar8 = (&param_1[iVar27].AssetName)[1];
    FVar9 = param_1[iVar27].AssetClassPath.PackageName;
    FVar10 = param_1[iVar27].AssetClassPath.AssetName;
    pFVar34 = param_1 + iVar27;
    FVar22.Index = (pFVar34->ChunkArrayRegistryHandle).Index;
    uVar23 = pFVar34->PackageFlags;
    FVar11 = *(FAssetDataTagMapSharedView_u_0 *)(&pFVar34->ChunkArrayRegistryHandle + 2);
    pFVar12 = param_1[iVar27].TaggedAssetBundles.Object;
    pTVar13 = param_1[iVar27].TaggedAssetBundles.SharedReferenceCount.ReferenceController;
    uVar14 = *(undefined8 *)param_1[iVar27].ChunkIDs.AllocatorInstance.InlineData;
    FVar15 = param_1[iVar27].ChunkIDs.AllocatorInstance.SecondaryData;
    param_1[iVar27].PackageName = param_1[iVar32].PackageName;
    param_1[iVar27].PackagePath = FVar4;
    FVar4 = (&param_1[iVar32].AssetName)[1];
    param_1[iVar27].AssetName = param_1[iVar32].AssetName;
    (&param_1[iVar27].AssetName)[1] = FVar4;
    FVar4 = param_1[iVar32].AssetClassPath.AssetName;
    param_1[iVar27].AssetClassPath.PackageName = param_1[iVar32].AssetClassPath.PackageName;
    param_1[iVar27].AssetClassPath.AssetName = FVar4;
    pFVar34 = param_1 + iVar32;
    uVar21 = pFVar34->PackageFlags;
    FVar16 = *(FAssetDataTagMapSharedView_u_0 *)(&pFVar34->ChunkArrayRegistryHandle + 2);
    pFVar19 = param_1 + iVar27;
    pFVar19->ChunkArrayRegistryHandle = (FSetElementId)(pFVar34->ChunkArrayRegistryHandle).Index;
    pFVar19->PackageFlags = uVar21;
    *(FAssetDataTagMapSharedView_u_0 *)(&pFVar19->ChunkArrayRegistryHandle + 2) = FVar16;
    pTVar17 = param_1[iVar32].TaggedAssetBundles.SharedReferenceCount.ReferenceController;
    param_1[iVar27].TaggedAssetBundles.Object = param_1[iVar32].TaggedAssetBundles.Object;
    param_1[iVar27].TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar17;
    FVar18 = param_1[iVar32].ChunkIDs.AllocatorInstance.SecondaryData;
    *(undefined8 *)param_1[iVar27].ChunkIDs.AllocatorInstance.InlineData =
         *(undefined8 *)param_1[iVar32].ChunkIDs.AllocatorInstance.InlineData;
    param_1[iVar27].ChunkIDs.AllocatorInstance.SecondaryData = FVar18;
    iVar28 = param_1[iVar32].ChunkIDs.ArrayMax;
    param_1[iVar27].ChunkIDs.ArrayNum = param_1[iVar32].ChunkIDs.ArrayNum;
    param_1[iVar27].ChunkIDs.ArrayMax = iVar28;
    param_1[iVar32].PackageName = FVar5;
    param_1[iVar32].PackagePath = FVar6;
    param_1[iVar32].AssetName = FVar7;
    (&param_1[iVar32].AssetName)[1] = FVar8;
    param_1[iVar32].AssetClassPath.PackageName = FVar9;
    param_1[iVar32].AssetClassPath.AssetName = FVar10;
    pFVar34 = param_1 + iVar32;
    pFVar34->ChunkArrayRegistryHandle = (FSetElementId)FVar22.Index;
    pFVar34->PackageFlags = uVar23;
    *(FAssetDataTagMapSharedView_u_0 *)(&pFVar34->ChunkArrayRegistryHandle + 2) = FVar11;
    param_1[iVar32].TaggedAssetBundles.Object = pFVar12;
    param_1[iVar32].TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar13;
    *(undefined8 *)param_1[iVar32].ChunkIDs.AllocatorInstance.InlineData = uVar14;
    param_1[iVar32].ChunkIDs.AllocatorInstance.SecondaryData = FVar15;
    param_1[iVar32].ChunkIDs.ArrayNum = iVar24;
    param_1[iVar32].ChunkIDs.ArrayMax = iVar25;
    iVar27 = iVar32;
  } while( true );
}

// HeapSortInternal<UE::AssetRegistry::Impl::FParsedFilterTagRules::FFilterTagsRule,int,`UE::AssetRegistry::Utils::ResolveRules'::__l2::<lambda_1>,TLess<int>_> @ 142b764f0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::AssetRegistry::Impl::FParsedFilterTagRules::FFilterTagsRule,int,_UE::AssetRegistry::Utils::ResolveRules_::__l2::<lambda_1>,TLess<int>_>
          (FFilterTagsRule *param_1,int param_2,<lambda_1> param_3,TLess<int> param_4)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  UClass *pUVar5;
  undefined3 uVar6;
  int iVar7;
  bool bVar8;
  undefined3 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FFilterTagsRule *pFVar16;
  FFilterTagsRule *pFVar17;
  int iVar18;
  FFilterTagsRule *pFVar19;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar13 = iVar12;
  iVar18 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_142b765f6:
      if (iVar18 == 0) {
        iVar12 = param_2 + -1;
        lVar15 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar19 = param_1 + lVar15;
          do {
            FVar2 = (pFVar19->ClassPath).AssetName;
            iVar18 = 0;
            FVar3 = (param_1->ClassPath).PackageName;
            FVar4 = (param_1->ClassPath).AssetName;
            pUVar5 = param_1->ClassPtr;
            iVar11 = param_1->InheritanceDepth;
            bVar8 = param_1->bInclude;
            uVar9 = *(undefined3 *)&param_1->field_0x1d;
            (param_1->ClassPath).PackageName = (pFVar19->ClassPath).PackageName;
            (param_1->ClassPath).AssetName = FVar2;
            iVar13 = pFVar19->InheritanceDepth;
            bVar10 = pFVar19->bInclude;
            uVar6 = *(undefined3 *)&pFVar19->field_0x1d;
            param_1->ClassPtr = pFVar19->ClassPtr;
            param_1->InheritanceDepth = iVar13;
            param_1->bInclude = bVar10;
            *(undefined3 *)&param_1->field_0x1d = uVar6;
            (pFVar19->ClassPath).PackageName = FVar3;
            (pFVar19->ClassPath).AssetName = FVar4;
            pFVar19->ClassPtr = pUVar5;
            pFVar19->InheritanceDepth = iVar11;
            pFVar19->bInclude = bVar8;
            *(undefined3 *)&pFVar19->field_0x1d = uVar9;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (param_1[(longlong)iVar11 + 2].InheritanceDepth <
                      param_1[iVar13].InheritanceDepth) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar16 = param_1 + iVar13;
                pFVar17 = param_1 + iVar18;
                if (pFVar16->InheritanceDepth <= pFVar17->InheritanceDepth) break;
                FVar2 = (pFVar16->ClassPath).AssetName;
                FVar3 = (pFVar17->ClassPath).PackageName;
                FVar4 = (pFVar17->ClassPath).AssetName;
                pUVar5 = pFVar17->ClassPtr;
                iVar18 = pFVar17->InheritanceDepth;
                bVar8 = pFVar17->bInclude;
                uVar9 = *(undefined3 *)&pFVar17->field_0x1d;
                (pFVar17->ClassPath).PackageName = (pFVar16->ClassPath).PackageName;
                (pFVar17->ClassPath).AssetName = FVar2;
                iVar11 = pFVar16->InheritanceDepth;
                bVar10 = pFVar16->bInclude;
                uVar6 = *(undefined3 *)&pFVar16->field_0x1d;
                pFVar17->ClassPtr = pFVar16->ClassPtr;
                pFVar17->InheritanceDepth = iVar11;
                pFVar17->bInclude = bVar10;
                *(undefined3 *)&pFVar17->field_0x1d = uVar6;
                (pFVar16->ClassPath).PackageName = FVar3;
                (pFVar16->ClassPath).AssetName = FVar4;
                pFVar16->ClassPtr = pUVar5;
                pFVar16->InheritanceDepth = iVar18;
                pFVar16->bInclude = bVar8;
                *(undefined3 *)&pFVar16->field_0x1d = uVar9;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar15 = lVar15 + -1;
            pFVar19 = pFVar19 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar11 = iVar18 + -1;
      iVar12 = iVar13 + -2;
      iVar13 = iVar12;
      iVar18 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (param_1[(longlong)iVar12 + 2].InheritanceDepth < param_1[iVar14].InheritanceDepth) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar19 = param_1 + iVar14;
    pFVar16 = param_1 + iVar11;
    if (pFVar19->InheritanceDepth <= pFVar16->InheritanceDepth) goto LAB_142b765f6;
    FVar2 = (pFVar19->ClassPath).AssetName;
    iVar12 = iVar14 * 2 + 1;
    FVar3 = (pFVar16->ClassPath).PackageName;
    FVar4 = (pFVar16->ClassPath).AssetName;
    pUVar5 = pFVar16->ClassPtr;
    iVar7 = pFVar16->InheritanceDepth;
    bVar8 = pFVar16->bInclude;
    uVar9 = *(undefined3 *)&pFVar16->field_0x1d;
    (pFVar16->ClassPath).PackageName = (pFVar19->ClassPath).PackageName;
    (pFVar16->ClassPath).AssetName = FVar2;
    iVar11 = pFVar19->InheritanceDepth;
    bVar10 = pFVar19->bInclude;
    uVar6 = *(undefined3 *)&pFVar19->field_0x1d;
    pFVar16->ClassPtr = pFVar19->ClassPtr;
    pFVar16->InheritanceDepth = iVar11;
    pFVar16->bInclude = bVar10;
    *(undefined3 *)&pFVar16->field_0x1d = uVar6;
    (pFVar19->ClassPath).PackageName = FVar3;
    (pFVar19->ClassPath).AssetName = FVar4;
    pFVar19->ClassPtr = pUVar5;
    pFVar19->InheritanceDepth = iVar7;
    pFVar19->bInclude = bVar8;
    *(undefined3 *)&pFVar19->field_0x1d = uVar9;
    iVar11 = iVar14;
  } while( true );
}

// HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameFastLess>_> @ 142b766f0

void __cdecl
AlgoImpl::HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameFastLess>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,FNameFastLess> param_4)

{
  FName *pFVar1;
  FName *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar9 = iVar8;
  iVar12 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_142b767f1:
      if (iVar12 == 0) {
        iVar8 = param_2 + -1;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar8) {
              do {
                iVar12 = iVar9 * 2;
                iVar6 = iVar12 + 1;
                if (iVar12 + 2 < iVar8) {
                  iVar10 = param_1[(longlong)iVar12 + 2].ComparisonIndex.Value -
                           param_1[(longlong)iVar12 + 1].ComparisonIndex.Value;
                  if (iVar10 == 0) {
                    iVar10 = param_1[(longlong)iVar12 + 2].Number -
                             param_1[(longlong)iVar12 + 1].Number;
                  }
                  if (iVar10 < 0) {
                    iVar6 = iVar12;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                iVar9 = param_1[iVar9].ComparisonIndex.Value - (pFVar1->ComparisonIndex).Value;
                if (iVar9 == 0) {
                  iVar9 = pFVar2->Number - pFVar1->Number;
                }
                if (-1 < iVar9) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar12 + -1;
      iVar8 = iVar9 + -2;
      iVar9 = iVar8;
      iVar12 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar7 = param_1[(longlong)iVar8 + 2].ComparisonIndex.Value -
              param_1[(longlong)iVar8 + 1].ComparisonIndex.Value;
      if (iVar7 == 0) {
        iVar7 = param_1[(longlong)iVar8 + 2].Number - param_1[(longlong)iVar8 + 1].Number;
      }
      if (iVar7 < 0) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar1 = param_1 + iVar10;
    pFVar2 = param_1 + iVar6;
    iVar8 = param_1[iVar6].ComparisonIndex.Value - (pFVar1->ComparisonIndex).Value;
    if (iVar8 == 0) {
      iVar8 = pFVar2->Number - pFVar1->Number;
    }
    if (-1 < iVar8) goto LAB_142b767f1;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar8 = iVar10 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar10;
  } while( true );
}

// InternalConstructor<UAssetRegistry> @ 142b768e0

void __cdecl InternalConstructor<UAssetRegistry>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAssetRegistry__6B_;
  }
  return;
}

// InternalConstructor<UAssetRegistryImpl> @ 142b76910

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAssetRegistryImpl>(FObjectInitializer *param_1)

{
  if ((UAssetRegistryImpl *)param_1->Obj != (UAssetRegistryImpl *)0x0) {
    UAssetRegistryImpl::UAssetRegistryImpl((UAssetRegistryImpl *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAssetRegistry> @ 142b76930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAssetRegistry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAssetRegistry::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAssetRegistry__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAssetRegistryImpl> @ 142b769e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAssetRegistryImpl>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAssetRegistryImpl *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAssetRegistryImpl::GetPrivateStaticClass();
  pUVar3 = (UAssetRegistryImpl *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UAssetRegistryImpl *)0x0) {
    pUVar3 = UAssetRegistryImpl::UAssetRegistryImpl(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<`UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics'::__l23::<lambda_1>_>_>_>_> @ 142b76a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics_::__l23::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_public:_void___cdecl_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics(double)_::_23_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar9 = &local_328;
    do {
      pTVar12 = ppTVar9[1];
      pTVar14 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_142b76b30:
        if (8 < iVar7) {
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          pTVar10 = pTVar12 + 1;
          pTVar14 = pTVar13 + iVar7 / 2;
          TVar3 = pTVar14->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18);
          pTVar14->_s_1 = pTVar13->_s_1;
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar2;
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar6;
          pTVar14 = pTVar13;
LAB_142b76b70:
          pTVar8 = pTVar14;
          pTVar14 = pTVar8 + 1;
          if (pTVar14 <= pTVar12) goto code_r0x000142b76b79;
          goto LAB_142b76b83;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if (*(longlong *)((pTVar1->ElementData).Pad + 0x10) <
                *(longlong *)((pTVar14->ElementData).Pad + 0x10)) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar6;
          pTVar12->_s_1 = TVar3;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar5;
        }
        goto LAB_142b76c6a;
      }
LAB_142b76c59:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics_::__l23::<lambda_1>_>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_142b76c6a:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x000142b76b79:
  if (*(longlong *)((pTVar13->ElementData).Pad + 0x10) <= *(longlong *)((longlong)pTVar8 + 0x30))
  goto LAB_142b76b70;
LAB_142b76b83:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar13) break;
  } while (*(longlong *)((longlong)pTVar11 + -0x10) <=
           *(longlong *)((pTVar13->ElementData).Pad + 0x10));
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x18);
  if (pTVar14 <= pTVar10) {
    TVar3 = pTVar14->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar8 + 0x28);
    uVar5 = *(undefined8 *)((longlong)pTVar8 + 0x30);
    uVar6 = *(undefined8 *)((longlong)pTVar8 + 0x38);
    pTVar14->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar8 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar11 + -8);
    *(undefined8 *)((longlong)pTVar8 + 0x30) = *(undefined8 *)((longlong)pTVar11 + -0x10);
    *(undefined8 *)((longlong)pTVar8 + 0x38) = uVar2;
    pTVar10->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar11 + -0x18) = uVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar6;
    goto LAB_142b76b70;
  }
  TVar3 = pTVar13->_s_1;
  uVar4 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
  uVar5 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
  uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
  pTVar13->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -8);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -0x10);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar2;
  pTVar10->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar11 + -0x18) = uVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar6;
  if ((longlong)((longlong)pTVar10 + (-0x20 - (longlong)pTVar13) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xffffffffffffffe0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar9 = pTVar14;
      ppTVar9[1] = pTVar12;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar10 <= pTVar13 + 1) goto LAB_142b76c6a;
    pTVar12 = pTVar11 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar10) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar11 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_142b76c6a;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_142b76c59;
  goto LAB_142b76b30;
}

// IntroSortInternal<FAssetData,int,UE::Core::Private::TProjectionMemberData<FName_FAssetData::*>,FNameFastLess> @ 142b76d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FAssetData,int,UE::Core::Private::TProjectionMemberData<FName_FAssetData::*>,FNameFastLess>
          (FAssetData *param_1,int param_2,TProjectionMemberData<FName_FAssetData::*> param_3,
          FNameFastLess param_4)

{
  FAssetData *pFVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FAssetDataTagMapSharedView_u_0 FVar9;
  FAssetBundleData *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 uVar12;
  ForElementType<int> FVar13;
  FAssetDataTagMapSharedView_u_0 FVar14;
  TReferenceControllerBase<1> *pTVar15;
  ForElementType<int> FVar16;
  uint uVar17;
  FSetElementId FVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  FAssetData *pFVar24;
  FAssetData *pFVar25;
  FAssetData *pFVar26;
  FAssetData *pFVar27;
  FAssetData *pFVar28;
  FAssetData *pFVar29;
  FAssetData **ppFVar30;
  float fVar31;
  undefined1 auStack_3b8 [48];
  FAssetData *local_388;
  FAssetData *local_378;
  FAssetData *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  if (1 < param_2) {
    local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    lVar23 = (longlong)(int)param_3.DataMemberPtr;
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar31 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar31;
    memset(local_360,0,0x2e8);
    ppFVar30 = &local_378;
    do {
      pFVar24 = ppFVar30[1];
      pFVar29 = *ppFVar30;
      pFVar1 = ppFVar30[2];
      local_388._0_4_ = (int)pFVar1;
      iVar22 = (int)(((longlong)pFVar24 - (longlong)pFVar29) / 0x68) + 1;
      pFVar28 = pFVar29;
      if ((int)local_388 != 0) {
LAB_142b76e00:
        if (8 < iVar22) {
          FVar2 = pFVar28->PackagePath;
          pFVar26 = pFVar24 + 1;
          pFVar29 = pFVar28 + iVar22 / 2;
          FVar3 = pFVar29->PackageName;
          FVar4 = pFVar29->PackagePath;
          FVar5 = pFVar29->AssetName;
          FVar6 = pFVar29->AssetClass;
          FVar7 = (pFVar29->AssetClassPath).PackageName;
          FVar8 = (pFVar29->AssetClassPath).AssetName;
          FVar18.Index = (pFVar29->ChunkArrayRegistryHandle).Index;
          uVar19 = pFVar29->PackageFlags;
          FVar9 = (pFVar29->TagsAndValues).field0_0x0;
          pFVar10 = (pFVar29->TaggedAssetBundles).Object;
          pTVar11 = (pFVar29->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
          uVar12 = *(undefined8 *)(pFVar29->ChunkIDs).AllocatorInstance.InlineData;
          FVar13 = (pFVar29->ChunkIDs).AllocatorInstance.SecondaryData;
          iVar20 = (pFVar29->ChunkIDs).ArrayNum;
          iVar21 = (pFVar29->ChunkIDs).ArrayMax;
          pFVar29->PackageName = pFVar28->PackageName;
          pFVar29->PackagePath = FVar2;
          FVar2 = pFVar28->AssetClass;
          pFVar29->AssetName = pFVar28->AssetName;
          pFVar29->AssetClass = FVar2;
          FVar2 = (pFVar28->AssetClassPath).AssetName;
          (pFVar29->AssetClassPath).PackageName = (pFVar28->AssetClassPath).PackageName;
          (pFVar29->AssetClassPath).AssetName = FVar2;
          uVar17 = pFVar28->PackageFlags;
          FVar14 = (pFVar28->TagsAndValues).field0_0x0;
          pFVar29->ChunkArrayRegistryHandle =
               (FSetElementId)(pFVar28->ChunkArrayRegistryHandle).Index;
          pFVar29->PackageFlags = uVar17;
          (pFVar29->TagsAndValues).field0_0x0 = FVar14;
          pTVar15 = (pFVar28->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
          (pFVar29->TaggedAssetBundles).Object = (pFVar28->TaggedAssetBundles).Object;
          (pFVar29->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar15;
          FVar16 = (pFVar28->ChunkIDs).AllocatorInstance.SecondaryData;
          *(undefined8 *)(pFVar29->ChunkIDs).AllocatorInstance.InlineData =
               *(undefined8 *)(pFVar28->ChunkIDs).AllocatorInstance.InlineData;
          (pFVar29->ChunkIDs).AllocatorInstance.SecondaryData = FVar16;
          iVar22 = (pFVar28->ChunkIDs).ArrayMax;
          (pFVar29->ChunkIDs).ArrayNum = (pFVar28->ChunkIDs).ArrayNum;
          (pFVar29->ChunkIDs).ArrayMax = iVar22;
          pFVar28->PackageName = FVar3;
          pFVar28->PackagePath = FVar4;
          pFVar28->AssetName = FVar5;
          pFVar28->AssetClass = FVar6;
          (pFVar28->AssetClassPath).PackageName = FVar7;
          (pFVar28->AssetClassPath).AssetName = FVar8;
          pFVar28->ChunkArrayRegistryHandle = (FSetElementId)FVar18.Index;
          pFVar28->PackageFlags = uVar19;
          (pFVar28->TagsAndValues).field0_0x0 = FVar9;
          (pFVar28->TaggedAssetBundles).Object = pFVar10;
          (pFVar28->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar11;
          *(undefined8 *)(pFVar28->ChunkIDs).AllocatorInstance.InlineData = uVar12;
          (pFVar28->ChunkIDs).AllocatorInstance.SecondaryData = FVar13;
          (pFVar28->ChunkIDs).ArrayNum = iVar20;
          (pFVar28->ChunkIDs).ArrayMax = iVar21;
          pFVar29 = pFVar28;
LAB_142b76ea0:
          pFVar25 = pFVar29;
          pFVar29 = pFVar25 + 1;
          if (pFVar29 <= pFVar24) goto code_r0x000142b76ea9;
          goto LAB_142b76ec4;
        }
        for (; pFVar29 = pFVar28, pFVar1 = pFVar28, pFVar28 < pFVar24; pFVar24 = pFVar24 + -1) {
          while (pFVar26 = pFVar29, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar24) {
            iVar22 = *(int *)((longlong)(&(pFVar26->ChunkIDs).AllocatorInstance + -5) + lVar23) -
                     *(int *)((longlong)(&(pFVar1->ChunkIDs).AllocatorInstance + -5) + lVar23);
            if (iVar22 == 0) {
              iVar22 = *(int *)((pFVar26->ChunkIDs).AllocatorInstance.InlineData + lVar23 + -0x4c) -
                       *(int *)((pFVar1->ChunkIDs).AllocatorInstance.InlineData + lVar23 + -0x4c);
            }
            pFVar29 = pFVar1;
            if (-1 < iVar22) {
              pFVar29 = pFVar26;
            }
          }
          FVar2 = pFVar26->PackageName;
          FVar3 = pFVar26->PackagePath;
          iVar20 = (pFVar26->ChunkIDs).ArrayNum;
          iVar21 = (pFVar26->ChunkIDs).ArrayMax;
          FVar4 = pFVar26->AssetName;
          FVar5 = pFVar26->AssetClass;
          FVar6 = pFVar24->PackagePath;
          FVar7 = (pFVar26->AssetClassPath).PackageName;
          FVar8 = (pFVar26->AssetClassPath).AssetName;
          FVar18.Index = (pFVar26->ChunkArrayRegistryHandle).Index;
          uVar19 = pFVar26->PackageFlags;
          FVar9 = (pFVar26->TagsAndValues).field0_0x0;
          pFVar10 = (pFVar26->TaggedAssetBundles).Object;
          pTVar11 = (pFVar26->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
          uVar12 = *(undefined8 *)(pFVar26->ChunkIDs).AllocatorInstance.InlineData;
          FVar13 = (pFVar26->ChunkIDs).AllocatorInstance.SecondaryData;
          pFVar26->PackageName = pFVar24->PackageName;
          pFVar26->PackagePath = FVar6;
          FVar6 = pFVar24->AssetClass;
          pFVar26->AssetName = pFVar24->AssetName;
          pFVar26->AssetClass = FVar6;
          FVar6 = (pFVar24->AssetClassPath).AssetName;
          (pFVar26->AssetClassPath).PackageName = (pFVar24->AssetClassPath).PackageName;
          (pFVar26->AssetClassPath).AssetName = FVar6;
          uVar17 = pFVar24->PackageFlags;
          FVar14 = (pFVar24->TagsAndValues).field0_0x0;
          pFVar26->ChunkArrayRegistryHandle =
               (FSetElementId)(pFVar24->ChunkArrayRegistryHandle).Index;
          pFVar26->PackageFlags = uVar17;
          (pFVar26->TagsAndValues).field0_0x0 = FVar14;
          pTVar15 = (pFVar24->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
          (pFVar26->TaggedAssetBundles).Object = (pFVar24->TaggedAssetBundles).Object;
          (pFVar26->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar15;
          FVar16 = (pFVar24->ChunkIDs).AllocatorInstance.SecondaryData;
          *(undefined8 *)(pFVar26->ChunkIDs).AllocatorInstance.InlineData =
               *(undefined8 *)(pFVar24->ChunkIDs).AllocatorInstance.InlineData;
          (pFVar26->ChunkIDs).AllocatorInstance.SecondaryData = FVar16;
          iVar22 = (pFVar24->ChunkIDs).ArrayMax;
          (pFVar26->ChunkIDs).ArrayNum = (pFVar24->ChunkIDs).ArrayNum;
          (pFVar26->ChunkIDs).ArrayMax = iVar22;
          pFVar24->PackageName = FVar2;
          pFVar24->PackagePath = FVar3;
          pFVar24->AssetName = FVar4;
          pFVar24->AssetClass = FVar5;
          (pFVar24->AssetClassPath).PackageName = FVar7;
          (pFVar24->AssetClassPath).AssetName = FVar8;
          pFVar24->ChunkArrayRegistryHandle = (FSetElementId)FVar18.Index;
          pFVar24->PackageFlags = uVar19;
          (pFVar24->TagsAndValues).field0_0x0 = FVar9;
          (pFVar24->TaggedAssetBundles).Object = pFVar10;
          (pFVar24->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar11;
          *(undefined8 *)(pFVar24->ChunkIDs).AllocatorInstance.InlineData = uVar12;
          (pFVar24->ChunkIDs).AllocatorInstance.SecondaryData = FVar13;
          (pFVar24->ChunkIDs).ArrayNum = iVar20;
          (pFVar24->ChunkIDs).ArrayMax = iVar21;
        }
        goto LAB_142b770c8;
      }
LAB_142b770b9:
      local_388 = pFVar1;
      HeapSortInternal<FAssetData,int,UE::Core::Private::TProjectionMemberData<FName_FAssetData::*>,FNameFastLess>
                (pFVar29,iVar22,param_3,param_4);
LAB_142b770c8:
      ppFVar30 = ppFVar30 + -3;
    } while (&local_378 <= ppFVar30);
  }
  return;
code_r0x000142b76ea9:
  iVar22 = *(int *)((longlong)(&(pFVar28->ChunkIDs).AllocatorInstance + -5) + lVar23) -
           *(int *)((longlong)(&(pFVar29->ChunkIDs).AllocatorInstance + -5) + lVar23);
  if (iVar22 == 0) {
    iVar22 = *(int *)((pFVar28->ChunkIDs).AllocatorInstance.InlineData + lVar23 + -0x4c) -
             *(int *)((pFVar29->ChunkIDs).AllocatorInstance.InlineData + lVar23 + -0x4c);
  }
  if (-1 < iVar22) goto LAB_142b76ea0;
LAB_142b76ec4:
  do {
    pFVar27 = pFVar26;
    pFVar26 = pFVar27 + -1;
    if (pFVar26 <= pFVar28) break;
    iVar22 = *(int *)((longlong)(&(pFVar26->ChunkIDs).AllocatorInstance + -5) + lVar23) -
             *(int *)((longlong)(&(pFVar28->ChunkIDs).AllocatorInstance + -5) + lVar23);
    if (iVar22 == 0) {
      iVar22 = *(int *)((pFVar26->ChunkIDs).AllocatorInstance.InlineData + lVar23 + -0x4c) -
               *(int *)((pFVar28->ChunkIDs).AllocatorInstance.InlineData + lVar23 + -0x4c);
    }
  } while (-1 < iVar22);
  FVar2 = pFVar27[-1].PackagePath;
  if (pFVar29 <= pFVar26) {
    FVar3 = pFVar29->PackageName;
    FVar4 = pFVar25[1].PackagePath;
    FVar5 = pFVar25[1].AssetName;
    FVar6 = pFVar25[1].AssetClass;
    FVar7 = pFVar25[1].AssetClassPath.PackageName;
    FVar8 = pFVar25[1].AssetClassPath.AssetName;
    FVar18.Index = pFVar25[1].ChunkArrayRegistryHandle.Index;
    uVar19 = pFVar25[1].PackageFlags;
    FVar9 = pFVar25[1].TagsAndValues.field0_0x0;
    pFVar10 = pFVar25[1].TaggedAssetBundles.Object;
    pTVar11 = pFVar25[1].TaggedAssetBundles.SharedReferenceCount.ReferenceController;
    uVar12 = *(undefined8 *)pFVar25[1].ChunkIDs.AllocatorInstance.InlineData;
    FVar13 = pFVar25[1].ChunkIDs.AllocatorInstance.SecondaryData;
    iVar20 = pFVar25[1].ChunkIDs.ArrayNum;
    iVar21 = pFVar25[1].ChunkIDs.ArrayMax;
    pFVar29->PackageName = pFVar26->PackageName;
    pFVar25[1].PackagePath = FVar2;
    FVar2 = pFVar27[-1].AssetClass;
    pFVar25[1].AssetName = pFVar27[-1].AssetName;
    pFVar25[1].AssetClass = FVar2;
    FVar2 = pFVar27[-1].AssetClassPath.AssetName;
    pFVar25[1].AssetClassPath.PackageName = pFVar27[-1].AssetClassPath.PackageName;
    pFVar25[1].AssetClassPath.AssetName = FVar2;
    uVar17 = pFVar27[-1].PackageFlags;
    FVar14 = pFVar27[-1].TagsAndValues.field0_0x0;
    pFVar25[1].ChunkArrayRegistryHandle = (FSetElementId)pFVar27[-1].ChunkArrayRegistryHandle.Index;
    pFVar25[1].PackageFlags = uVar17;
    pFVar25[1].TagsAndValues.field0_0x0 = FVar14;
    pTVar15 = pFVar27[-1].TaggedAssetBundles.SharedReferenceCount.ReferenceController;
    pFVar25[1].TaggedAssetBundles.Object = pFVar27[-1].TaggedAssetBundles.Object;
    pFVar25[1].TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar15;
    FVar16 = pFVar27[-1].ChunkIDs.AllocatorInstance.SecondaryData;
    *(undefined8 *)pFVar25[1].ChunkIDs.AllocatorInstance.InlineData =
         *(undefined8 *)pFVar27[-1].ChunkIDs.AllocatorInstance.InlineData;
    pFVar25[1].ChunkIDs.AllocatorInstance.SecondaryData = FVar16;
    iVar22 = pFVar27[-1].ChunkIDs.ArrayMax;
    pFVar25[1].ChunkIDs.ArrayNum = pFVar27[-1].ChunkIDs.ArrayNum;
    pFVar25[1].ChunkIDs.ArrayMax = iVar22;
    pFVar26->PackageName = FVar3;
    pFVar27[-1].PackagePath = FVar4;
    pFVar27[-1].AssetName = FVar5;
    pFVar27[-1].AssetClass = FVar6;
    pFVar27[-1].AssetClassPath.PackageName = FVar7;
    pFVar27[-1].AssetClassPath.AssetName = FVar8;
    pFVar27[-1].ChunkArrayRegistryHandle = (FSetElementId)FVar18.Index;
    pFVar27[-1].PackageFlags = uVar19;
    pFVar27[-1].TagsAndValues.field0_0x0 = FVar9;
    pFVar27[-1].TaggedAssetBundles.Object = pFVar10;
    pFVar27[-1].TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar11;
    *(undefined8 *)pFVar27[-1].ChunkIDs.AllocatorInstance.InlineData = uVar12;
    pFVar27[-1].ChunkIDs.AllocatorInstance.SecondaryData = FVar13;
    pFVar27[-1].ChunkIDs.ArrayNum = iVar20;
    pFVar27[-1].ChunkIDs.ArrayMax = iVar21;
    goto LAB_142b76ea0;
  }
  FVar3 = pFVar28->PackageName;
  FVar4 = pFVar28->PackagePath;
  FVar5 = pFVar28->AssetName;
  FVar6 = pFVar28->AssetClass;
  local_388._0_4_ = (int)local_388 + -1;
  FVar7 = (pFVar28->AssetClassPath).PackageName;
  FVar8 = (pFVar28->AssetClassPath).AssetName;
  FVar18.Index = (pFVar28->ChunkArrayRegistryHandle).Index;
  uVar19 = pFVar28->PackageFlags;
  FVar9 = (pFVar28->TagsAndValues).field0_0x0;
  pFVar10 = (pFVar28->TaggedAssetBundles).Object;
  pTVar11 = (pFVar28->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
  uVar12 = *(undefined8 *)(pFVar28->ChunkIDs).AllocatorInstance.InlineData;
  FVar13 = (pFVar28->ChunkIDs).AllocatorInstance.SecondaryData;
  iVar20 = (pFVar28->ChunkIDs).ArrayNum;
  iVar21 = (pFVar28->ChunkIDs).ArrayMax;
  pFVar28->PackageName = pFVar26->PackageName;
  pFVar28->PackagePath = FVar2;
  FVar2 = pFVar27[-1].AssetClass;
  pFVar28->AssetName = pFVar27[-1].AssetName;
  pFVar28->AssetClass = FVar2;
  FVar2 = pFVar27[-1].AssetClassPath.AssetName;
  (pFVar28->AssetClassPath).PackageName = pFVar27[-1].AssetClassPath.PackageName;
  (pFVar28->AssetClassPath).AssetName = FVar2;
  uVar17 = pFVar27[-1].PackageFlags;
  FVar14 = pFVar27[-1].TagsAndValues.field0_0x0;
  pFVar28->ChunkArrayRegistryHandle = (FSetElementId)pFVar27[-1].ChunkArrayRegistryHandle.Index;
  pFVar28->PackageFlags = uVar17;
  (pFVar28->TagsAndValues).field0_0x0 = FVar14;
  pTVar15 = pFVar27[-1].TaggedAssetBundles.SharedReferenceCount.ReferenceController;
  (pFVar28->TaggedAssetBundles).Object = pFVar27[-1].TaggedAssetBundles.Object;
  (pFVar28->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar15;
  FVar16 = pFVar27[-1].ChunkIDs.AllocatorInstance.SecondaryData;
  *(undefined8 *)(pFVar28->ChunkIDs).AllocatorInstance.InlineData =
       *(undefined8 *)pFVar27[-1].ChunkIDs.AllocatorInstance.InlineData;
  (pFVar28->ChunkIDs).AllocatorInstance.SecondaryData = FVar16;
  iVar22 = pFVar27[-1].ChunkIDs.ArrayMax;
  (pFVar28->ChunkIDs).ArrayNum = pFVar27[-1].ChunkIDs.ArrayNum;
  (pFVar28->ChunkIDs).ArrayMax = iVar22;
  pFVar26->PackageName = FVar3;
  pFVar27[-1].PackagePath = FVar4;
  pFVar27[-1].AssetName = FVar5;
  pFVar27[-1].AssetClass = FVar6;
  pFVar27[-1].AssetClassPath.PackageName = FVar7;
  pFVar27[-1].AssetClassPath.AssetName = FVar8;
  pFVar27[-1].ChunkArrayRegistryHandle = (FSetElementId)FVar18.Index;
  pFVar27[-1].PackageFlags = uVar19;
  pFVar27[-1].TagsAndValues.field0_0x0 = FVar9;
  pFVar27[-1].TaggedAssetBundles.Object = pFVar10;
  pFVar27[-1].TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar11;
  *(undefined8 *)pFVar27[-1].ChunkIDs.AllocatorInstance.InlineData = uVar12;
  pFVar27[-1].ChunkIDs.AllocatorInstance.SecondaryData = FVar13;
  pFVar27[-1].ChunkIDs.ArrayNum = iVar20;
  pFVar27[-1].ChunkIDs.ArrayMax = iVar21;
  if (((longlong)pFVar26 + (-0x68 - (longlong)pFVar28)) / 0x68 <
      ((longlong)pFVar24 - (longlong)pFVar29) / 0x68) {
    if (pFVar29 < pFVar24) {
      *ppFVar30 = pFVar29;
      ppFVar30[1] = pFVar24;
      *(int *)(ppFVar30 + 2) = (int)local_388;
      ppFVar30 = ppFVar30 + 3;
    }
    if (pFVar26 <= pFVar28 + 1) goto LAB_142b770c8;
    pFVar24 = pFVar27 + -2;
    pFVar29 = pFVar28;
  }
  else {
    if (pFVar28 + 1 < pFVar26) {
      *ppFVar30 = pFVar28;
      ppFVar30[1] = pFVar27 + -2;
      *(int *)(ppFVar30 + 2) = (int)local_388;
      ppFVar30 = ppFVar30 + 3;
    }
    if (pFVar24 <= pFVar29) goto LAB_142b770c8;
  }
  iVar22 = (int)(((longlong)pFVar24 - (longlong)pFVar29) / 0x68) + 1;
  pFVar28 = pFVar29;
  if ((int)local_388 == 0) goto LAB_142b770b9;
  goto LAB_142b76e00;
}

// IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameFastLess>_> @ 142b77220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameFastLess>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,FNameFastLess> param_4)

{
  FName *pFVar1;
  FName FVar2;
  int iVar3;
  FName *pFVar4;
  FName **ppFVar5;
  FName *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  FName *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FName *local_338;
  FName *local_328;
  FName *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar7 = ppFVar5[1];
      pFVar9 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar7 - (longlong)pFVar9 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar8 = pFVar9;
      if ((int)local_338 != 0) {
LAB_142b772d0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar7 + 1;
          FVar2 = pFVar8[iVar3 >> 1];
          pFVar8[iVar3 >> 1] = *pFVar8;
          *pFVar8 = FVar2;
          pFVar4 = pFVar8;
LAB_142b77300:
          pFVar9 = pFVar4 + 1;
          if (pFVar9 <= pFVar7) goto code_r0x000142b77309;
          goto LAB_142b77320;
        }
        for (; pFVar9 = pFVar8, pFVar1 = pFVar8, pFVar8 < pFVar7; pFVar7 = pFVar7 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar7) {
            iVar3 = (pFVar9->ComparisonIndex).Value - (pFVar1->ComparisonIndex).Value;
            if (iVar3 == 0) {
              iVar3 = pFVar9->Number - pFVar1->Number;
            }
            if (iVar3 < 0) {
              pFVar9 = pFVar1;
            }
          }
          FVar2 = *pFVar9;
          *pFVar9 = *pFVar7;
          *pFVar7 = FVar2;
        }
        goto LAB_142b773e9;
      }
LAB_142b773d8:
      local_338 = pFVar1;
      HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameFastLess>_>
                (pFVar9,iVar3,param_3,param_4);
LAB_142b773e9:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000142b77309:
  iVar3 = (pFVar8->ComparisonIndex).Value - (pFVar9->ComparisonIndex).Value;
  if (iVar3 == 0) {
    iVar3 = pFVar8->Number - pFVar4[1].Number;
  }
  pFVar4 = pFVar9;
  if (-1 < iVar3) goto LAB_142b77300;
LAB_142b77320:
  do {
    pFVar4 = pFVar6;
    pFVar6 = pFVar4 + -1;
    if (pFVar6 <= pFVar8) break;
    iVar3 = (pFVar6->ComparisonIndex).Value - (pFVar8->ComparisonIndex).Value;
    if (iVar3 == 0) {
      iVar3 = pFVar4[-1].Number - pFVar8->Number;
    }
  } while (-1 < iVar3);
  if (pFVar9 <= pFVar6) {
    FVar2 = *pFVar9;
    *pFVar9 = *pFVar6;
    *pFVar6 = FVar2;
    pFVar4 = pFVar9;
    goto LAB_142b77300;
  }
  FVar2 = *pFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar8 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar7 - (longlong)pFVar9 & 0xfffffffffffffff8U)) {
    if (pFVar9 < pFVar7) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar8 + 1) goto LAB_142b773e9;
    pFVar7 = pFVar4 + -2;
    pFVar9 = pFVar8;
  }
  else {
    if (pFVar8 + 1 < pFVar6) {
      *ppFVar5 = pFVar8;
      ppFVar5[1] = pFVar4 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar7 <= pFVar9) goto LAB_142b773e9;
  }
  iVar3 = (int)((longlong)pFVar7 - (longlong)pFVar9 >> 3) + 1;
  pFVar8 = pFVar9;
  if ((int)local_338 == 0) goto LAB_142b773d8;
  goto LAB_142b772d0;
}

// Reverse<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_*> @ 142b78810

void __cdecl
AlgoImpl::Reverse<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_*>
          (TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> **param_1,int param_2)

{
  TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *pTVar1;
  TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> **ppTVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppTVar2 = param_1 + (param_2 + -1);
    do {
      pTVar1 = param_1[lVar3];
      param_1[lVar3] = *ppTVar2;
      lVar3 = lVar3 + 1;
      *ppTVar2 = pTVar1;
      ppTVar2 = ppTVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// Reverse<FPackageDependencyData> @ 142b78870

void __cdecl AlgoImpl::Reverse<FPackageDependencyData>(FPackageDependencyData *param_1,int param_2)

{
  FName FVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FScriptContainerElement *pFVar14;
  long64 lVar15;
  FPackageFileVersion FVar16;
  FPackageCustomVersion *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined8 uVar20;
  FPackageFileVersion FVar21;
  FPackageCustomVersion *pFVar22;
  FScriptContainerElement *pFVar23;
  bool bVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  int iVar32;
  int iVar33;
  undefined4 uVar34;
  int iVar35;
  bool bVar36;
  undefined6 uVar37;
  bool bVar38;
  uchar uVar39;
  uchar uVar40;
  uchar uVar41;
  uchar uVar42;
  uchar uVar43;
  uchar uVar44;
  uchar uVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  undefined4 uVar49;
  int iVar50;
  undefined4 uVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  bool bVar60;
  bool bVar61;
  undefined6 uVar62;
  FPackageDependencyData *pFVar63;
  longlong lVar64;
  
  lVar64 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar63 = param_1 + (param_2 + -1);
    do {
      FVar1 = param_1->PackageName;
      bVar38 = (param_1->PackageData).CookedHash.bIsValid;
      uVar39 = (param_1->PackageData).CookedHash.Bytes[0];
      uVar40 = (param_1->PackageData).CookedHash.Bytes[1];
      uVar41 = (param_1->PackageData).CookedHash.Bytes[2];
      uVar42 = (param_1->PackageData).CookedHash.Bytes[3];
      uVar43 = (param_1->PackageData).CookedHash.Bytes[4];
      uVar44 = (param_1->PackageData).CookedHash.Bytes[5];
      uVar45 = (param_1->PackageData).CookedHash.Bytes[6];
      uVar2 = *(undefined8 *)((param_1->PackageData).CookedHash.Bytes + 7);
      uVar3 = *(undefined8 *)((param_1->PackageData).CookedHash.Bytes + 0xf);
      uVar4 = *(undefined8 *)&(param_1->PackageData).ChunkHashes;
      uVar5 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x8;
      uVar6 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x10;
      uVar7 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x18;
      uVar8 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x20;
      uVar9 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x28;
      uVar10 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x30;
      uVar11 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x38;
      uVar12 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x40;
      uVar13 = *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x48;
      pFVar14 = (param_1->PackageData).ImportedClasses.AllocatorInstance.Data;
      iVar46 = (param_1->PackageData).ImportedClasses.ArrayNum;
      iVar47 = (param_1->PackageData).ImportedClasses.ArrayMax;
      lVar15 = (param_1->PackageData).DiskSize;
      FVar16 = (param_1->PackageData).FileVersionUE;
      iVar48 = (param_1->PackageData).FileVersionLicenseeUE;
      uVar49 = *(undefined4 *)&(param_1->PackageData).field_0x8c;
      pFVar17 = (param_1->PackageData).CustomVersions.Ptr.DataPtr;
      iVar50 = (param_1->PackageData).CustomVersions.Ptr.ArrayNum;
      uVar51 = *(undefined4 *)&(param_1->PackageData).CustomVersions.Ptr.field_0xc;
      pFVar18 = (param_1->PackageDependencies).AllocatorInstance.Data;
      iVar52 = (param_1->PackageDependencies).ArrayNum;
      iVar53 = (param_1->PackageDependencies).ArrayMax;
      pFVar19 = (param_1->SearchableNameDependencies).AllocatorInstance.Data;
      iVar54 = (param_1->SearchableNameDependencies).ArrayNum;
      iVar55 = (param_1->SearchableNameDependencies).ArrayMax;
      iVar56 = (param_1->DependsNodeReservations).PackageDependenciesSize;
      iVar57 = (param_1->DependsNodeReservations).NameDependenciesSize;
      iVar58 = (param_1->DependsNodeReservations).ManageDependenciesSize;
      iVar59 = (param_1->DependsNodeReservations).ReferencersSize;
      bVar60 = param_1->bHasPackageData;
      bVar61 = param_1->bHasDependencyData;
      uVar62 = *(undefined6 *)&param_1->field_0xda;
      bVar24 = (pFVar63->PackageData).CookedHash.bIsValid;
      uVar25 = (pFVar63->PackageData).CookedHash.Bytes[0];
      uVar26 = (pFVar63->PackageData).CookedHash.Bytes[1];
      uVar27 = (pFVar63->PackageData).CookedHash.Bytes[2];
      uVar28 = (pFVar63->PackageData).CookedHash.Bytes[3];
      uVar29 = (pFVar63->PackageData).CookedHash.Bytes[4];
      uVar30 = (pFVar63->PackageData).CookedHash.Bytes[5];
      uVar31 = (pFVar63->PackageData).CookedHash.Bytes[6];
      param_1->PackageName = pFVar63->PackageName;
      (param_1->PackageData).CookedHash.bIsValid = bVar24;
      (param_1->PackageData).CookedHash.Bytes[0] = uVar25;
      (param_1->PackageData).CookedHash.Bytes[1] = uVar26;
      (param_1->PackageData).CookedHash.Bytes[2] = uVar27;
      (param_1->PackageData).CookedHash.Bytes[3] = uVar28;
      (param_1->PackageData).CookedHash.Bytes[4] = uVar29;
      (param_1->PackageData).CookedHash.Bytes[5] = uVar30;
      (param_1->PackageData).CookedHash.Bytes[6] = uVar31;
      uVar20 = *(undefined8 *)((pFVar63->PackageData).CookedHash.Bytes + 0xf);
      *(undefined8 *)((param_1->PackageData).CookedHash.Bytes + 7) =
           *(undefined8 *)((pFVar63->PackageData).CookedHash.Bytes + 7);
      *(undefined8 *)((param_1->PackageData).CookedHash.Bytes + 0xf) = uVar20;
      uVar20 = *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x8;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes =
           *(undefined8 *)&(pFVar63->PackageData).ChunkHashes;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x8 = uVar20;
      uVar20 = *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x18;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x10 =
           *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x10;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x18 = uVar20;
      uVar20 = *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x28;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x20 =
           *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x20;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x28 = uVar20;
      uVar20 = *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x38;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x30 =
           *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x30;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x38 = uVar20;
      uVar20 = *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x48;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x40 =
           *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x40;
      *(undefined8 *)&(param_1->PackageData).ChunkHashes.field_0x48 = uVar20;
      iVar32 = (pFVar63->PackageData).ImportedClasses.ArrayNum;
      iVar33 = (pFVar63->PackageData).ImportedClasses.ArrayMax;
      (param_1->PackageData).ImportedClasses.AllocatorInstance.Data =
           (pFVar63->PackageData).ImportedClasses.AllocatorInstance.Data;
      (param_1->PackageData).ImportedClasses.ArrayNum = iVar32;
      (param_1->PackageData).ImportedClasses.ArrayMax = iVar33;
      FVar21 = (pFVar63->PackageData).FileVersionUE;
      (param_1->PackageData).DiskSize = (pFVar63->PackageData).DiskSize;
      (param_1->PackageData).FileVersionUE = FVar21;
      uVar34 = *(undefined4 *)&(pFVar63->PackageData).field_0x8c;
      pFVar22 = (pFVar63->PackageData).CustomVersions.Ptr.DataPtr;
      (param_1->PackageData).FileVersionLicenseeUE = (pFVar63->PackageData).FileVersionLicenseeUE;
      *(undefined4 *)&(param_1->PackageData).field_0x8c = uVar34;
      (param_1->PackageData).CustomVersions.Ptr.DataPtr = pFVar22;
      uVar34 = *(undefined4 *)&(pFVar63->PackageData).CustomVersions.Ptr.field_0xc;
      pFVar23 = (pFVar63->PackageDependencies).AllocatorInstance.Data;
      (param_1->PackageData).CustomVersions.Ptr.ArrayNum =
           (pFVar63->PackageData).CustomVersions.Ptr.ArrayNum;
      *(undefined4 *)&(param_1->PackageData).CustomVersions.Ptr.field_0xc = uVar34;
      (param_1->PackageDependencies).AllocatorInstance.Data = pFVar23;
      iVar32 = (pFVar63->PackageDependencies).ArrayMax;
      pFVar23 = (pFVar63->SearchableNameDependencies).AllocatorInstance.Data;
      (param_1->PackageDependencies).ArrayNum = (pFVar63->PackageDependencies).ArrayNum;
      (param_1->PackageDependencies).ArrayMax = iVar32;
      (param_1->SearchableNameDependencies).AllocatorInstance.Data = pFVar23;
      iVar32 = (pFVar63->SearchableNameDependencies).ArrayMax;
      iVar33 = (pFVar63->DependsNodeReservations).PackageDependenciesSize;
      iVar35 = (pFVar63->DependsNodeReservations).NameDependenciesSize;
      (param_1->SearchableNameDependencies).ArrayNum =
           (pFVar63->SearchableNameDependencies).ArrayNum;
      (param_1->SearchableNameDependencies).ArrayMax = iVar32;
      (param_1->DependsNodeReservations).PackageDependenciesSize = iVar33;
      (param_1->DependsNodeReservations).NameDependenciesSize = iVar35;
      iVar32 = (pFVar63->DependsNodeReservations).ReferencersSize;
      bVar24 = pFVar63->bHasPackageData;
      bVar36 = pFVar63->bHasDependencyData;
      uVar37 = *(undefined6 *)&pFVar63->field_0xda;
      (param_1->DependsNodeReservations).ManageDependenciesSize =
           (pFVar63->DependsNodeReservations).ManageDependenciesSize;
      (param_1->DependsNodeReservations).ReferencersSize = iVar32;
      param_1->bHasPackageData = bVar24;
      param_1->bHasDependencyData = bVar36;
      *(undefined6 *)&param_1->field_0xda = uVar37;
      pFVar63->PackageName = FVar1;
      (pFVar63->PackageData).CookedHash.bIsValid = bVar38;
      (pFVar63->PackageData).CookedHash.Bytes[0] = uVar39;
      (pFVar63->PackageData).CookedHash.Bytes[1] = uVar40;
      (pFVar63->PackageData).CookedHash.Bytes[2] = uVar41;
      (pFVar63->PackageData).CookedHash.Bytes[3] = uVar42;
      (pFVar63->PackageData).CookedHash.Bytes[4] = uVar43;
      (pFVar63->PackageData).CookedHash.Bytes[5] = uVar44;
      (pFVar63->PackageData).CookedHash.Bytes[6] = uVar45;
      *(undefined8 *)((pFVar63->PackageData).CookedHash.Bytes + 7) = uVar2;
      *(undefined8 *)((pFVar63->PackageData).CookedHash.Bytes + 0xf) = uVar3;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes = uVar4;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x8 = uVar5;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x10 = uVar6;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x18 = uVar7;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x20 = uVar8;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x28 = uVar9;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x30 = uVar10;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x38 = uVar11;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x40 = uVar12;
      *(undefined8 *)&(pFVar63->PackageData).ChunkHashes.field_0x48 = uVar13;
      (pFVar63->PackageData).ImportedClasses.AllocatorInstance.Data = pFVar14;
      (pFVar63->PackageData).ImportedClasses.ArrayNum = iVar46;
      (pFVar63->PackageData).ImportedClasses.ArrayMax = iVar47;
      param_1 = param_1 + 1;
      (pFVar63->PackageData).DiskSize = lVar15;
      (pFVar63->PackageData).FileVersionUE = FVar16;
      (pFVar63->PackageData).FileVersionLicenseeUE = iVar48;
      *(undefined4 *)&(pFVar63->PackageData).field_0x8c = uVar49;
      (pFVar63->PackageData).CustomVersions.Ptr.DataPtr = pFVar17;
      (pFVar63->PackageData).CustomVersions.Ptr.ArrayNum = iVar50;
      *(undefined4 *)&(pFVar63->PackageData).CustomVersions.Ptr.field_0xc = uVar51;
      (pFVar63->PackageDependencies).AllocatorInstance.Data = pFVar18;
      (pFVar63->PackageDependencies).ArrayNum = iVar52;
      (pFVar63->PackageDependencies).ArrayMax = iVar53;
      (pFVar63->SearchableNameDependencies).AllocatorInstance.Data = pFVar19;
      (pFVar63->SearchableNameDependencies).ArrayNum = iVar54;
      (pFVar63->SearchableNameDependencies).ArrayMax = iVar55;
      (pFVar63->DependsNodeReservations).PackageDependenciesSize = iVar56;
      (pFVar63->DependsNodeReservations).NameDependenciesSize = iVar57;
      (pFVar63->DependsNodeReservations).ManageDependenciesSize = iVar58;
      (pFVar63->DependsNodeReservations).ReferencersSize = iVar59;
      pFVar63->bHasPackageData = bVar60;
      pFVar63->bHasDependencyData = bVar61;
      *(undefined6 *)&pFVar63->field_0xda = uVar62;
      lVar64 = lVar64 + -1;
      pFVar63 = pFVar63 + -1;
    } while (lVar64 != 0);
  }
  return;
}

// Sort<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<`UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics'::__l23::<lambda_1>_>_> @ 142b78a60

void __thiscall
TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics_::__l23::<lambda_1>_>_>
          (TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_void___cdecl_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics(double)_::_23_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_void___cdecl_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics(double)_::_23_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTopLevelAssetPath,__int64>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics_::__l23::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FTopLevelAssetPath,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,__int64,0>_>::FValueComparisonClass<_public:_void___cdecl_UE::AssetRegistry::FAssetRegistryImpl::LogSearchDiagnostics(double)_::_23_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// Unique<TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>_&> @ 142b78af0

int __cdecl
Algo::Unique<TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>_&>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 2) {
    return iVar1;
  }
  pFVar4 = pFVar2;
  pFVar3 = pFVar2;
  while (pFVar3 = pFVar3 + 8, pFVar3 != pFVar2 + (longlong)iVar1 * 8) {
    if ((*(longlong *)pFVar4 != *(longlong *)pFVar3) && (pFVar4 = pFVar4 + 8, pFVar4 != pFVar3)) {
      *(longlong *)pFVar4 = *(longlong *)pFVar3;
    }
  }
  return (int)((longlong)(pFVar4 + (8 - (longlong)pFVar2)) >> 3);
}

// Unique<TArray<FName,TSizedDefaultAllocator<32>_>_&> @ 142b78b40

int __cdecl
Algo::Unique<TArray<FName,TSizedDefaultAllocator<32>_>_&>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (iVar1 < 2) {
    return iVar1;
  }
  pFVar4 = pFVar2;
  pFVar3 = pFVar2;
  while (pFVar3 = pFVar3 + 8, pFVar3 != pFVar2 + (longlong)iVar1 * 8) {
    if ((*(longlong *)pFVar4 != *(longlong *)pFVar3) && (pFVar4 = pFVar4 + 8, pFVar4 != pFVar3)) {
      *(longlong *)pFVar4 = *(longlong *)pFVar3;
    }
  }
  return (int)((longlong)(pFVar4 + (8 - (longlong)pFVar2)) >> 3);
}

// Unique<FDependsNode_*,int,FIdentityFunctor,TEqualTo<void>_> @ 142b78b90

int __cdecl
AlgoImpl::Unique<FDependsNode_*,int,FIdentityFunctor,TEqualTo<void>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,TEqualTo<void> param_4)

{
  FDependsNode **ppFVar1;
  FDependsNode **ppFVar2;
  
  if (param_2 < 2) {
    return param_2;
  }
  ppFVar2 = param_1;
  ppFVar1 = param_1;
  while (ppFVar1 = ppFVar1 + 1, ppFVar1 != param_1 + param_2) {
    if ((*ppFVar2 != *ppFVar1) && (ppFVar2 = ppFVar2 + 1, ppFVar2 != ppFVar1)) {
      *ppFVar2 = *ppFVar1;
    }
  }
  return (int)((longlong)ppFVar2 + (8 - (longlong)param_1) >> 3);
}

// Unique<FName,int,FIdentityFunctor,TEqualTo<void>_> @ 142b78be0

int __cdecl
AlgoImpl::Unique<FName,int,FIdentityFunctor,TEqualTo<void>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,TEqualTo<void> param_4)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_2 < 2) {
    return param_2;
  }
  pFVar2 = param_1;
  pFVar1 = param_1;
  while (pFVar1 = pFVar1 + 1, pFVar1 != param_1 + param_2) {
    if ((*pFVar2 != *pFVar1) && (pFVar2 = pFVar2 + 1, pFVar2 != pFVar1)) {
      *pFVar2 = *pFVar1;
    }
  }
  return (int)((longlong)pFVar2 + (8 - (longlong)param_1) >> 3);
}

// WriteToString<256,char_const_(&)[11]> @ 142b78c30

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,char_const_(&)[11]>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,char (*param_1) [11])

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = __return_storage_ptr__->StringBuffer;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  if (param_1 != (char (*) [11])0x0) {
    sVar1 = strlen(*param_1);
    iVar3 = (int)sVar1;
  }
  if (__return_storage_ptr__ + 1 < (TStringBuilderWithBuffer<wchar_t,256> *)(pwVar2 + iVar3)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar3,*param_1,iVar3);
    __return_storage_ptr__->_padding_ = (longlong)pwVar2;
  }
  return __return_storage_ptr__;
}

// WriteToString<256,FString_const_&,wchar_t_const_*_&> @ 142b78cd0

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,FString_const_&,wchar_t_const_*_&>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,FString *param_1,
          wchar_t **param_2)

{
  int iVar1;
  wchar_t *_Str;
  TStringBuilderBase<wchar_t> *this;
  size_t sVar2;
  int iVar3;
  int iVar4;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
                    (wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar4);
  _Str = *param_2;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    iVar3 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,_Str,iVar3);
  return __return_storage_ptr__;
}

// ~<lambda_1> @ 142b7c890

void __thiscall
`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000142b7c8f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 142b7c910

void __thiscall
`Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_>'::__l4::<lambda_1>
::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000142b7c977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,1,1> @ 142b7c9f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade_::__l8::<lambda_2>::operator()_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x290) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x2a0);
    if (*(longlong **)((longlong)this + 0x2b8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x2b8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FAssetRegistryState::~FAssetRegistryState((FAssetRegistryState *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>,1,0> @ 142b7ca40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::AssetRegistry::Premade::FPreloader::KickPreload_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 142b7ca60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<__UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade_::__l8::<lambda_2>::operator()_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>::operator()'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 142b7ca80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UE::AssetRegistry::Premade::FPreloader::KickPreload_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__KickPreload_FPreloader_Premade_AssetRegistry_UE__AEAAXXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::AssetRegistry::Premade::FPreloader::FPreloader'::__l5::<lambda_1>,0,0> @ 142b7caa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::Premade::FPreloader::FPreloader'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::AssetRegistry::Premade::FPreloader::FPreloader_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4___0FPreloader_Premade_AssetRegistry_UE__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>,0,0> @ 142b7cac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade_::__l8::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAssetRegistryImpl::TickOnBackgroundThread'::__l7::<lambda_2>,0,0> @ 142b7cae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAssetRegistryImpl::TickOnBackgroundThread'::__l7::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UAssetRegistryImpl::TickOnBackgroundThread_::__l7::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAssetRegistryImpl::TickOnBackgroundThread'::`7'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>,0,1> @ 142b7cb00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>,0,1>
::
~TFunction_OwnedObject<_UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade_::__l8::<lambda_2>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000142b7cb23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l58::<lambda_2>,1,0> @ 142b7cb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l58::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences_::__l58::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::`58'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l10::<lambda_3>,0,0> @ 142b7cb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l10::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade_::__l10::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`10'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l109::<lambda_3>,1,0> @ 142b7cb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l109::<lambda_3>,1,0>
::
~TFunction_OwnedObject<_UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered_::__l109::<lambda_3>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::`109'::<lambda_3>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l114::<lambda_4>,1,1> @ 142b7cb90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l114::<lambda_4>,1,1>
::
~TFunction_OwnedObject<_UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences_::__l114::<lambda_4>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::`114'::<lambda_4>,1,1>
        ::_vftable_;
  return;
}

// operator() @ 142b7eb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>::operator()'::__l2
::<lambda_1>::operator()
          (void *this,
          TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *param_1,
          TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
          *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ForAnyElementType *pFVar7;
  code *pcVar8;
  FName FVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FSoftObjectPath *pFVar15;
  FSoftObjectPath *pFVar16;
  longlong lVar17;
  FName *pFVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint *puVar22;
  undefined1 auStack_2d8 [32];
  FSoftObjectPath *local_2b8;
  FSoftObjectPath *local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined1 local_288;
  undefined1 local_287 [7];
  FAssetData *local_280;
  undefined8 *local_278;
  int local_270;
  undefined1 local_26c [36];
  undefined4 uStack_248;
  int iStack_244;
  int local_240;
  int iStack_23c;
  TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
  *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  wchar_t *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  FString local_1c8;
  FSoftObjectPath local_1b8;
  FSoftObjectPath local_198;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_2d8;
  iVar14 = *(int *)&param_2->field_0x28;
  local_26c._28_8_ = &param_2->field_0x10;
  local_26c._20_4_ = 0;
  local_26c._24_4_ = 1;
  local_240 = local_26c._20_4_;
  iStack_244 = 0;
  if (iVar14 != 0) {
    puVar22 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar22 = (uint *)local_26c._28_8_;
    }
    uVar3 = *puVar22;
    local_240 = 0;
    local_26c._20_4_ = 0;
    while (uVar3 == 0) {
      lVar17 = (longlong)(int)local_26c._20_4_;
      local_240 = local_240 + 0x20;
      local_26c._20_4_ = local_26c._20_4_ + 1;
      iStack_244 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_26c._20_4_)
      goto LAB_142b7ec03;
      uVar3 = puVar22[lVar17 + 1];
    }
    local_26c._24_4_ = -uVar3 & uVar3;
    uVar2 = (ulonglong)(uint)local_26c._24_4_ * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_270 = (int)lVar17;
    iStack_244 = local_240 + -1 + local_270;
    if (iVar14 < iStack_244) {
      iStack_244 = iVar14;
    }
  }
LAB_142b7ec03:
  uStack_248 = 0xffffffff;
  TStack_228._padding_ = CONCAT44(local_26c._24_4_,local_26c._20_4_);
  TStack_228.UnvisitedBitMask = 0xffffffff;
  TStack_228._28_4_ = iStack_244;
  TStack_228.BaseBitIndex = local_240;
  local_278 = this;
  local_26c._4_8_ = param_1;
  local_26c._12_8_ = param_2;
  iStack_23c = iStack_244;
  local_230 = param_2;
  TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_26c._28_8_;
  TStack_228.CurrentBitIndex = iStack_244;
  if (iStack_244 < iVar14) {
    do {
      local_280 = *(FAssetData **)
                   (*(longlong *)local_230 + 8 + (longlong)TStack_228.CurrentBitIndex * 0x18);
      if (local_278[1] != 0) {
        local_178.Base = local_158;
        plVar5 = (longlong *)*local_278;
        local_178.CurPos = local_158;
        local_178.End = (wchar_t *)local_58;
        local_178.bIsDynamic = false;
        local_178.bIsExternal = false;
        ::FName::ToString(&local_280->PackageName,&local_178);
        lVar17 = (longlong)local_178.CurPos - (longlong)local_178.Base;
        if (local_178.End < local_178.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_178,1);
        }
        pwVar11 = local_178.Base;
        *local_178.CurPos = L'\0';
        plVar6 = (longlong *)*plVar5;
        local_208 = local_178.Base;
        iVar14 = (int)(lVar17 >> 1);
        lVar17 = plVar6[1];
        puVar20 = (undefined8 *)*plVar6;
        uVar10._4_4_ = uStack_1fc;
        uVar10._0_4_ = iVar14;
        puVar21 = puVar20 + (longlong)(int)lVar17 * 2;
        iStack_200 = iVar14;
        while( true ) {
          if ((int)plVar6[1] != (int)lVar17) {
            local_288 = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_288);
          }
          if (puVar20 == puVar21) {
            lVar17 = *plVar5;
            iVar4 = *(int *)(lVar17 + 0x28);
            puVar20 = *(undefined8 **)(lVar17 + 0x20);
            puVar21 = puVar20 + (longlong)iVar4 * 2;
            goto LAB_142b7ed90;
          }
          local_1f8 = (wchar_t *)*puVar20;
          local_1e8.DataPtr = pwVar11;
          iStack_1f0 = *(int *)(puVar20 + 1) + -1;
          if (*(int *)(puVar20 + 1) == 0) {
            iStack_1f0 = 0;
          }
          local_1d8._12_4_ = uStack_1ec;
          local_1d8.Size = iStack_1f0;
          local_1e8._8_8_ = uVar10;
          local_1d8.DataPtr = local_1f8;
          bVar12 = FPathViews::IsParentPathOf(&local_1d8,&local_1e8);
          if (bVar12) break;
          puVar20 = puVar20 + 2;
        }
LAB_142b7edea:
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
        if (6 < (byte)LogAssetRegistry._0_1_) {
          FAssetData::GetObjectPathString(local_280,&local_1c8);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
        pFVar7 = (ForAnyElementType *)local_278[1];
        pFVar15 = FAssetData::GetSoftObjectPath(local_280,&local_1b8);
        pFVar16 = (FSoftObjectPath *)pFVar7->Data;
        if ((pFVar16 <= pFVar15) &&
           (lVar17 = (longlong)*(int *)((longlong)&pFVar7[1].Data + 4), pFVar15 < pFVar16 + lVar17))
        {
          local_2a0 = (longlong)*(int *)&pFVar7[1].Data;
          local_298 = 0x20;
          local_2b8 = pFVar15;
          local_2b0 = pFVar16;
          local_2a8 = lVar17;
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
        iVar14 = *(int *)&pFVar7[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,pFVar7,piVar1);
        }
        *(int *)&pFVar7[1].Data = iVar14 + 1;
        FVar9 = (pFVar15->AssetPath).AssetName;
        pFVar18 = (FName *)(pFVar7->Data + (longlong)iVar14 * 0x20);
        *pFVar18 = (pFVar15->AssetPath).PackageName;
        pFVar18[1] = FVar9;
        pFVar18[2].ComparisonIndex = 0;
        pFVar18[2].Number = 0;
        pFVar18[2] = (FName)(pFVar15->SubPathString).Data.AllocatorInstance.Data;
        (pFVar15->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar18[3].ComparisonIndex.Value = (pFVar15->SubPathString).Data.ArrayNum;
        pFVar18[3].Number = (pFVar15->SubPathString).Data.ArrayMax;
        (pFVar15->SubPathString).Data.ArrayNum = 0;
        (pFVar15->SubPathString).Data.ArrayMax = 0;
        if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
        }
      }
LAB_142b7ef27:
      pFVar16 = FAssetData::GetSoftObjectPath(local_280,&local_198);
      TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
      Emplace<FSoftObjectPath>
                ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
                 local_26c._4_8_,(FSoftObjectPath *)local_26c,(bool *)pFVar16);
      if (local_198.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.SubPathString.Data.AllocatorInstance.Data);
      }
      TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
    } while (TStack_228.CurrentBitIndex < (TStack_228.Array)->NumBits);
  }
  return;
LAB_142b7ed90:
  if (*(int *)(lVar17 + 0x28) != iVar4) {
    local_287[0] = 0;
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_287);
  }
  if (puVar20 == puVar21) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    goto LAB_142b7ef27;
  }
  iVar19 = *(int *)(puVar20 + 1) + -1;
  if (*(int *)(puVar20 + 1) == 0) {
    iVar19 = 0;
  }
  if (((iVar14 == iVar19) &&
      (((iVar14 == 0 || (iVar19 == 0)) ||
       (iVar13 = FGenericPlatformStricmp::Strnicmp(pwVar11,(wchar_t *)*puVar20,(longlong)iVar19),
       iVar13 == 0)))) && (iVar14 == iVar19)) goto LAB_142b7edea;
  puVar20 = puVar20 + 2;
  goto LAB_142b7ed90;
}

// `vector_deleting_destructor'`adjustor{40}' @ 142b8274c

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAssetRegistryImpl::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAssetRegistryImpl::_vector_deleting_destructor__adjustor_40__
          (UAssetRegistryImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142b82760

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82790

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b827c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy,`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l18::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b827f0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82820

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAssetRegistryImpl,void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAssetRegistryImpl,void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82850

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAssetRegistryImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAssetRegistryImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82880

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAssetRegistryImpl,bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAssetRegistryImpl,bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b828b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b828e0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<enum_EAssetSetManagerResult::Type_(__cdecl*)(FAssetIdentifier_const_&,FAssetIdentifier_const_&,FAssetIdentifier_const_&,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,enum_EAssetSetManagerFlags::Type),0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_AW4Type_EAssetSetManagerResult__AEBUFAssetIdentifier__00W4EDependencyCategory_AssetRegistry_UE__W4EDependencyProperty_56_W41EAssetSetManagerFlags___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>::operator()'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x290) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x2a0);
    if (*(longlong **)((longlong)this + 0x2b8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x2b8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FAssetRegistryState::~FAssetRegistryState((FAssetRegistryState *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b829c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>::operator()'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAssetRegistryImpl::TickOnBackgroundThread'::__l7::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAssetRegistryImpl::TickOnBackgroundThread'::`7'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`8'::<lambda_2>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l58::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::`58'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l10::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::`10'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l109::<lambda_3>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::`109'::<lambda_3>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l114::<lambda_4>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::`114'::<lambda_4>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82bf0

void * __thiscall FArrayReader::_scalar_deleting_destructor_(FArrayReader *this,uint param_1)

{
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82c40

void * __thiscall IAssetRegistry::_scalar_deleting_destructor_(IAssetRegistry *this,uint param_1)

{
  *this = (IAssetRegistry)&___7IAssetRegistry__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b82c80

void * __thiscall UAssetRegistry::_scalar_deleting_destructor_(UAssetRegistry *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142b82ce0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
UAssetRegistryImpl::_scalar_deleting_destructor_(UAssetRegistryImpl *this,uint param_1)

{
  ~UAssetRegistryImpl(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x13d0);
  }
  return this;
}

// ConvertAssetIdentifiersToPackageNames @ 142b8a670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
ConvertAssetIdentifiersToPackageNames
          (TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar9 = param_1->ArrayNum + param_2->ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_2->ArrayMax;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar9,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  iVar6 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar6 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar6) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FAssetIdentifier_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (*(longlong *)pFVar7 != 0) {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar5 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *(longlong *)pFVar7;
    }
    pFVar7 = pFVar7 + 0x20;
  }
  AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameFastLess>_>
            ((FName *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_res8[0],
             (FNameFastLess *)local_res10);
  iVar6 = param_2->ArrayNum;
  pFVar7 = (param_2->AllocatorInstance).Data;
  if (1 < iVar6) {
    pFVar8 = pFVar7;
    pFVar2 = pFVar7;
    while (pFVar2 = pFVar2 + 8, pFVar2 != pFVar7 + (longlong)iVar6 * 8) {
      if ((*(longlong *)pFVar8 != *(longlong *)pFVar2) && (pFVar8 = pFVar8 + 8, pFVar8 != pFVar2)) {
        *(longlong *)pFVar8 = *(longlong *)pFVar2;
      }
    }
    iVar6 = (int)((longlong)(pFVar8 + (8 - (longlong)pFVar7)) >> 3);
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar6,No);
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetRegistry @ 142b8e930

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetRegistry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAssetRegistry @ 142b8e940

void __cdecl EmptyLinkFunctionForGeneratedCodeIAssetRegistry(void)

{
  return;
}

// GetChunkAvailabilityProgressType @ 142b96c60

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl GetChunkAvailabilityProgressType(Type param_1)

{
  if (param_1 != ETA) {
    if ((param_1 != PercentageComplete) && (1 < (byte)LogAssetRegistry._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    return PercentageComplete;
  }
  return ETA;
}

// GetDevelopmentAssetRegistryFilename @ 142b974b0

wchar_t * __cdecl GetDevelopmentAssetRegistryFilename(void)

{
  return L"DevelopmentAssetRegistry.bin";
}

// LoadFromCompactBinary @ 142b9d390

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __cdecl LoadFromCompactBinary(FCbFieldView *param_1,FAssetDependency *param_2)

{
  bool bVar1;
  ulong64 uVar2;
  TCbFieldIterator<FCbFieldView> local_88 [2];
  FCbFieldView local_58;
  void *local_48;
  longlong local_38;
  void *pvStack_30;
  FCbFieldView local_20;
  
  FCbFieldView::AsArrayView(param_1,(FCbArrayView *)&local_20);
  uVar2 = FCbArrayView::Num((FCbArrayView *)&local_20);
  if (2 < uVar2) {
    FCbFieldView::CreateViewIterator(&local_20,(FCbFieldViewIterator *)local_88);
    local_58.TypeWithFlags = (undefined1)local_88[0]._padding_;
    local_58.Error = local_88[0]._padding_._1_1_;
    local_58._2_2_ = local_88[0]._padding_._2_2_;
    local_58.NameLen = local_88[0]._padding_._4_4_;
    local_58.Value = (void *)local_88[0]._padding_;
    TCbFieldIterator<FCbFieldView>::operator++(local_88);
    bVar1 = LoadFromCompactBinary(&local_58,&param_2->AssetId);
    if (bVar1) {
      local_38 = local_88[0]._padding_;
      pvStack_30 = (void *)local_88[0]._padding_;
      local_48 = local_88[0].FieldsEnd;
      TCbFieldIterator<FCbFieldView>::operator++(local_88);
      local_58.TypeWithFlags = (undefined1)local_38;
      local_58.Error = local_38._1_1_;
      local_58._2_2_ = local_38._2_2_;
      local_58.NameLen = local_38._4_4_;
      local_58.Value = pvStack_30;
      uVar2 = FCbFieldView::AsInteger(&local_58,0,(FIntegerParams)0x10);
      if (local_58.Error == None) {
        param_2->Category = (EDependencyCategory)uVar2;
        local_38 = local_88[0]._padding_;
        pvStack_30 = (void *)local_88[0]._padding_;
        local_48 = local_88[0].FieldsEnd;
        TCbFieldIterator<FCbFieldView>::operator++(local_88);
        local_58.TypeWithFlags = (undefined1)local_38;
        local_58.Error = local_38._1_1_;
        local_58._2_2_ = local_38._2_2_;
        local_58.NameLen = local_38._4_4_;
        local_58.Value = pvStack_30;
        uVar2 = FCbFieldView::AsInteger(&local_58,0,(FIntegerParams)0x10);
        if (local_58.Error == None) {
          param_2->Properties = (EDependencyProperty)uVar2;
          return true;
        }
      }
    }
  }
  (param_2->AssetId).PackageName.ComparisonIndex = 0;
  (param_2->AssetId).PackageName.Number = 0;
  (param_2->AssetId).PrimaryAssetType.Name = (FName)0x0;
  (param_2->AssetId).ObjectName.ComparisonIndex = 0;
  (param_2->AssetId).ObjectName.Number = 0;
  (param_2->AssetId).ValueName.ComparisonIndex = 0;
  (param_2->AssetId).ValueName.Number = 0;
  param_2->Category = None;
  param_2->Properties = None;
  *(undefined2 *)&param_2->field_0x22 = 0;
  return false;
}

// Z_Construct_UClass_UAssetRegistryImpl_NoRegister @ 142bb82e0

UClass * __cdecl Z_Construct_UClass_UAssetRegistryImpl_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetRegistry",L"AssetRegistryImpl",
               &Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton,
               UAssetRegistryImpl::StaticRegisterNativesUAssetRegistryImpl,0x13d0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetRegistryImpl>,
               InternalVTableHelperCtorCaller<UAssetRegistryImpl>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton;
}

// Z_Construct_UClass_UAssetRegistry_NoRegister @ 142bb8390

UClass * __cdecl Z_Construct_UClass_UAssetRegistry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetRegistry",L"AssetRegistry",
               &Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton,
               UAssetRegistry::StaticRegisterNativesUAssetRegistry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetRegistry>,InternalVTableHelperCtorCaller<UAssetRegistry>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'CVarAssetRegistryDeferDependencySort'' @ 15035e570

void __cdecl
UE::AssetRegistry::Impl::_dynamic_atexit_destructor_for__CVarAssetRegistryDeferDependencySort__
          (void)

{
  CVarAssetRegistryDeferDependencySort._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAssetRegistryDeferDependencySort);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAssetRegistryDeferReferencerSort'' @ 15035e590

void __cdecl
UE::AssetRegistry::Impl::_dynamic_atexit_destructor_for__CVarAssetRegistryDeferReferencerSort__
          (void)

{
  CVarAssetRegistryDeferReferencerSort._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAssetRegistryDeferReferencerSort);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAssetRegistryDisableDirectoryWatcher'' @ 15035e5b0

void __cdecl
UE::AssetRegistry::Impl::_dynamic_atexit_destructor_for__CVarAssetRegistryDisableDirectoryWatcher__
          (void)

{
  CVarAssetRegistryDisableDirectoryWatcher._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAssetRegistryDisableDirectoryWatcher);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAssetRegistryMaxSecondsPerFrame'' @ 15035e5d0

void __cdecl
UE::AssetRegistry::Impl::_dynamic_atexit_destructor_for__CVarAssetRegistryMaxSecondsPerFrame__(void)

{
  CVarAssetRegistryMaxSecondsPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAssetRegistryMaxSecondsPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAssetRegistryMaxSecondsPerTickBackgroundThread'' @ 15035e5f0

void __cdecl
UE::AssetRegistry::Impl::
_dynamic_atexit_destructor_for__CVarAssetRegistryMaxSecondsPerTickBackgroundThread__(void)

{
  CVarAssetRegistryMaxSecondsPerTickBackgroundThread._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAssetRegistryMaxSecondsPerTickBackgroundThread);
  return;
}

// `dynamic_atexit_destructor_for_'ConsoleCommands'' @ 15035e610

void __cdecl _dynamic_atexit_destructor_for__ConsoleCommands__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ConsoleCommands.DumpStateCommand);
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ConsoleCommands.DumpAllocatedSizeCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ConsoleCommands.ScanPathCommand);
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ConsoleCommands.FindInvalidUAssetsCommand);
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ConsoleCommands.GetReferencersCommand);
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&ConsoleCommands.GetDependenciesCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ConsoleCommands.GetByTagCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ConsoleCommands.GetByClassCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ConsoleCommands.GetByPathCommand);
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ConsoleCommands);
  return;
}

// `dynamic_atexit_destructor_for_'GPreloader'' @ 15035e6a0

void __cdecl UE::AssetRegistry::Premade::_dynamic_atexit_destructor_for__GPreloader__(void)

{
  longlong *plVar1;
  
  if (GPreloader.OnTaskGraphReady.bIsSet) {
    GPreloader.OnTaskGraphReady.bIsSet = false;
  }
  if (GPreloader.PreloadReady != (FEvent *)0x0) {
    GPreloader.PreloadReady = (FEvent *)0x0;
  }
  ::FString::Reset(&GPreloader.ARPath,0);
  FAssetRegistryState::Reset(&GPreloader.Payload);
  if (GPreloader.ConsumeCallback._0_8_ != 0) {
    plVar1 = (longlong *)&GPreloader.ConsumeCallback.field_0x10;
    if (GPreloader.ConsumeCallback._40_8_ != 0) {
      plVar1 = (longlong *)GPreloader.ConsumeCallback._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FAssetRegistryState::~FAssetRegistryState(&GPreloader.Payload);
  if (GPreloader.ARPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GPreloader.ARPath.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00015035e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GPreloader.StateLock);
  return;
}

// `dynamic_atexit_destructor_for_'LogAssetRegistry'' @ 15035e740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAssetRegistry__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAssetRegistry);
  return;
}

// `dynamic_atexit_destructor_for_'ScriptPackagesToSkip'' @ 15035e760

void __cdecl
`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::
_dynamic_atexit_destructor_for__ScriptPackagesToSkip__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ScriptPackagesToSkip.AllocatorInstance.Data;
  if (ScriptPackagesToSkip.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ScriptPackagesToSkip.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

