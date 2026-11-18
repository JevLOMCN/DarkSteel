// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 376

// `dynamic_initializer_for_'CCvarInterchangeImportEnable'' @ 14141b3f0

void __cdecl _dynamic_initializer_for__CCvarInterchangeImportEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeImportEnable,L"Interchange.FeatureFlags.Import.Enable",
             &GInterchangeImportEnable,L"Whether Interchange import is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeImportEnable__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeResetEnabled'' @ 14141b440

void __cdecl
UE::Interchange::InterchangeReset::_dynamic_initializer_for__CCvarInterchangeResetEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeResetEnabled,L"Interchange.FeatureFlags.InterchangeReset",
             &GInterchangeResetEnabled,L"Whether Interchange Reset is available",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeResetEnabled__);
  return;
}

// `dynamic_initializer_for_'CCvarInterchangeResetFilteredNodes'' @ 14141b490

void __cdecl
UE::Interchange::InterchangeReset::_dynamic_initializer_for__CCvarInterchangeResetFilteredNodes__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CCvarInterchangeResetFilteredNodes,L"Interchange.FeatureFlags.Reset.UseFilteredNodes",
             &GInterchangeResetFilteredNodes,
             L"Whether Reset should be limited to the filtered nodes if any.",0);
  atexit(_dynamic_atexit_destructor_for__CCvarInterchangeResetFilteredNodes__);
  return;
}

// `dynamic_initializer_for_'FactoryNodeUidPathKey'' @ 14141b4e0

void __cdecl
UE::Interchange::InterchangeReset::Constants::_dynamic_initializer_for__FactoryNodeUidPathKey__
          (void)

{
  ::FString::FString(&FactoryNodeUidPathKey,"InterchangeFactoryNodeUid");
  atexit(_dynamic_atexit_destructor_for__FactoryNodeUidPathKey__);
  return;
}

// `dynamic_initializer_for_'LogInterchangeEngine'' @ 14141b510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInterchangeEngine__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInterchangeEngine,L"LogInterchangeEngine",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInterchangeEngine__);
  return;
}

// `dynamic_initializer_for_'LogInterchangeReset'' @ 14141b550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInterchangeReset__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInterchangeReset,L"LogInterchangeReset",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogInterchangeReset__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14141b590

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantInterchangeEngine'' @ 14141b5b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantInterchangeEngine__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "InterchangeEngine";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"InterchangeEngine",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FInterchangeEngineModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType'' @ 14141b600

void __cdecl
_dynamic_initializer_for__NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType__
          (void)

{
  FName::FName(&NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType,
               L"ScriptedFilePickerForTranslatorAssetType");
  return;
}

// `dynamic_initializer_for_'NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType'' @ 14141b620

void __cdecl
_dynamic_initializer_for__NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType__
          (void)

{
  FName::FName(&NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType,
               L"ScriptedFilePickerForTranslatorType");
  return;
}

// `dynamic_initializer_for_'NAME_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog'' @ 14141b640

void __cdecl
_dynamic_initializer_for__NAME_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog__
          (void)

{
  FName::FName(&NAME_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog,
               L"ScriptedShowPipelineConfigurationDialog");
  return;
}

// `dynamic_initializer_for_'NAME_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog'' @ 14141b660

void __cdecl
_dynamic_initializer_for__NAME_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog__
          (void)

{
  FName::FName(&
               NAME_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog
               ,L"ScriptedShowReimportPipelineConfigurationDialog");
  return;
}

// `dynamic_initializer_for_'NAME_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog'' @ 14141b680

void __cdecl
_dynamic_initializer_for__NAME_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog__
          (void)

{
  FName::FName(&
               NAME_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog
               ,L"ScriptedShowScenePipelineConfigurationDialog");
  return;
}

// `dynamic_initializer_for_'NAME_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog'' @ 14141b6a0

void __cdecl
_dynamic_initializer_for__NAME_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog__
          (void)

{
  FName::FName(&NAME_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog,
               L"ScriptedShowTestPlanConfigurationDialog");
  return;
}

// `dynamic_initializer_for_'SceneImportAssetPathKey'' @ 14141b6c0

void __cdecl
UE::Interchange::InterchangeReset::Constants::_dynamic_initializer_for__SceneImportAssetPathKey__
          (void)

{
  ::FString::FString(&SceneImportAssetPathKey,"InterchangeSceneImportAssetPath");
  atexit(_dynamic_atexit_destructor_for__SceneImportAssetPathKey__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h__Script_InterchangeEngine_3767250703'' @ 14141b6f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h__Script_InterchangeEngine_3767250703__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h__Script_InterchangeEngine_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeBlueprintPipelineBase_h__Script_InterchangeEngine_3301428038'' @ 14141b730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeBlueprintPipelineBase_h__Script_InterchangeEngine_3301428038__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeBlueprintPipelineBase_h__Script_InterchangeEngine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h__Script_InterchangeEngine_3536112460'' @ 14141b770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h__Script_InterchangeEngine_3536112460__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h__Script_InterchangeEngine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h__Script_InterchangeEngine_1489783251'' @ 14141b7b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h__Script_InterchangeEngine_1489783251__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h__Script_InterchangeEngine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h__Script_InterchangeEngine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h__Script_InterchangeEngine_4255160998'' @ 14141b800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h__Script_InterchangeEngine_4255160998__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h__Script_InterchangeEngine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h__Script_InterchangeEngine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h__Script_InterchangeEngine_4053749012'' @ 14141b850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h__Script_InterchangeEngine_4053749012__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h__Script_InterchangeEngine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h__Script_InterchangeEngine_1558081470'' @ 14141b890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h__Script_InterchangeEngine_1558081470__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h__Script_InterchangeEngine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h__Script_InterchangeEngine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h__Script_InterchangeEngine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h__Script_InterchangeEngine_2963595647'' @ 14141b8e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h__Script_InterchangeEngine_2963595647__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h__Script_InterchangeEngine_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h__Script_InterchangeEngine_Statics
             ::ScriptStructInfo,8,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h__Script_InterchangeEngine_2126931190'' @ 14141b930

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h__Script_InterchangeEngine_2126931190__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h__Script_InterchangeEngine_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h__Script_InterchangeEngine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h__Script_InterchangeEngine_1448310980'' @ 14141b980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h__Script_InterchangeEngine_1448310980__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeEngine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h__Script_InterchangeEngine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_InterchangeEngine'' @ 14141b9c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_InterchangeEngine__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x204dd9ab;
  local_res8[0].DeclarationsHash = 0x91f4617b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_InterchangeEngine,L"/Script/InterchangeEngine",
             &Z_Registration_Info_UPackage__Script_InterchangeEngine,local_res8);
  return;
}

// Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineArrayFromTranslatorPipelines @ 14e4ca530

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineArrayFromTranslatorPipelines
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineArrayFromTranslatorPipelines_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted @ 14e4ca570

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsSceneImport_SetBit @ 14e4ca5b0

void __cdecl
Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineStackFromSourceData_Statics::
NewProp_bIsSceneImport_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass @ 14e4ca5c0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineStackFromSourceData @ 14e4ca600

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineStackFromSourceData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineStackFromSourceData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStrictMatchTranslatorType_SetBit @ 14e4ca640

void __cdecl
Z_Construct_UFunction_UInterchangeManager_GetSupportedAssetTypeFormats_Statics::
NewProp_bStrictMatchTranslatorType_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_GetSupportedAssetTypeFormats @ 14e4ca650

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_GetSupportedAssetTypeFormats(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_GetSupportedAssetTypeFormats_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeManager_NoRegister @ 14e4ca690

UClass * __cdecl Z_Construct_UClass_UInterchangeManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeManager",
               &Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton,
               UInterchangeManager::StaticRegisterNativesUInterchangeManager,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeManager>,
               InternalVTableHelperCtorCaller<UInterchangeManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton;
}

// Z_Construct_UFunction_UInterchangeManager_GetSupportedFormats @ 14e4ca740

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_GetSupportedFormats(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_GetSupportedFormats_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeEditorSettings_GetSelectableItems @ 14e4ca780

UFunction * __cdecl Z_Construct_UFunction_UInterchangeEditorSettings_GetSelectableItems(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeEditorSettings_GetSelectableItems_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeEditorSettings_GetUsedGroupName @ 14e4ca940

UFunction * __cdecl Z_Construct_UFunction_UInterchangeEditorSettings_GetUsedGroupName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeEditorSettings_GetUsedGroupName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeManager_GetSupportedFormatsForObject @ 14e4ca980

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_GetSupportedFormatsForObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_GetSupportedFormatsForObject_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeEditorSettings_SetUsedGroupName @ 14e4ca9c0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeEditorSettings_SetUsedGroupName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeEditorSettings_SetUsedGroupName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeManager_GetTranslatorForSourceData @ 14e4caa00

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_GetTranslatorForSourceData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_GetTranslatorForSourceData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowImportDialogAtReimport_SetBit @ 14e4caa40

void __cdecl
Z_Construct_UClass_UInterchangeEditorSettings_Statics::NewProp_bShowImportDialogAtReimport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14e4caa50

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_ImportAsset @ 14e4caa60

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_ImportAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e4caaa0

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_ImportScene @ 14e4caab0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_ImportScene(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e4cab40

void __cdecl
Z_Construct_UFunction_UInterchangeManager_IsInterchangeActive_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_IsInterchangeActive @ 14e4cace0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_IsInterchangeActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_IsInterchangeActive_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e4cadb0

void __cdecl
Z_Construct_UFunction_UInterchangeManager_IsObjectBeingImported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_IsObjectBeingImported @ 14e4caea0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_IsObjectBeingImported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_IsObjectBeingImported_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e4caee0

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ReimportAsset_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_ReimportAsset @ 14e4caef0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_ReimportAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_ReimportAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e4caf30

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ScriptedImportAssetAsync_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_ScriptedImportAssetAsync @ 14e4caf40

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_ScriptedImportAssetAsync(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_ScriptedImportAssetAsync_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e4caf80

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ScriptedImportSceneAsync_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_ScriptedImportSceneAsync @ 14e4caf90

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_ScriptedImportSceneAsync(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_ScriptedImportSceneAsync_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeBlueprintPipelineBase_NoRegister @ 14e4cafd0

UClass * __cdecl Z_Construct_UClass_UInterchangeBlueprintPipelineBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeBlueprintPipelineBase",
               &Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton,
               UInterchangeBlueprintPipelineBase::
               StaticRegisterNativesUInterchangeBlueprintPipelineBase,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeBlueprintPipelineBase>,
               InternalVTableHelperCtorCaller<UInterchangeBlueprintPipelineBase>,local_res8,
               UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14e4cb150

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ScriptedReimportAssetAsync_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x110) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_ScriptedReimportAssetAsync @ 14e4cb160

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_ScriptedReimportAssetAsync(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_ScriptedReimportAssetAsync_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCancel_SetBit @ 14e4cb1a0

void __cdecl
Z_Construct_UFunction_UInterchangeManager_WaitUntilAllTasksDone_Statics::NewProp_bCancel_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UInterchangeBlueprintPipelineBase @ 14e4cb1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeBlueprintPipelineBase(void)

{
  if (Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.OuterSingleton,
               &Z_Construct_UClass_UInterchangeBlueprintPipelineBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.OuterSingleton;
}

// Z_Construct_UFunction_UInterchangeManager_WaitUntilAllTasksDone @ 14e4cb1f0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_WaitUntilAllTasksDone(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_WaitUntilAllTasksDone_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_InterchangeEngine @ 14e4cb230

UPackage * __cdecl Z_Construct_UPackage__Script_InterchangeEngine(void)

{
  if (Z_Registration_Info_UPackage__Script_InterchangeEngine.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_InterchangeEngine.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_InterchangeEngine.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14e4cb270

void __cdecl
Z_Construct_UFunction_UInterchangeManager_WarnIfInterchangeIsActive_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_WarnIfInterchangeIsActive @ 14e4cb280

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_WarnIfInterchangeIsActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_WarnIfInterchangeIsActive_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeEditorUtilitiesBase @ 14e4cb470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeEditorUtilitiesBase(void)

{
  if (Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.OuterSingleton,
               &Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.OuterSingleton;
}

// Z_Construct_UClass_UInterchangePythonPipelineAsset @ 14e4cb4b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangePythonPipelineAsset(void)

{
  if (Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton,
               &Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAssetImportData @ 14e4cb4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAssetImportData(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAssetImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton;
}

// Z_Construct_UClass_UInterchangePythonPipelineBase @ 14e4cb530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangePythonPipelineBase(void)

{
  if (Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton,
               &Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeAssetImportDataConverterBase @ 14e4cb570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeAssetImportDataConverterBase(void)

{
  if (Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.OuterSingleton,
               &Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.OuterSingleton;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer @ 14e4cb5b0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14e4cb5f0

void * __cdecl Z_Construct_UScriptStruct_FPropertyData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPropertyData,&UE::CoreUObject::Private::Construct<FPropertyData>,&UE::CoreUObject::Private::ConstructForTests<FPropertyData>,&UE::CoreUObject::Private::Destruct<FPropertyData>,&UE::CoreUObject::Private::Copy<FPropertyData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature @ 14e4cb630

UFunction * __cdecl
Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature @ 14e4cb670

UFunction * __cdecl
Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines @ 14e4cb6b0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister @ 14e4cb6f0

UClass * __cdecl Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePythonPipelineBase",
               &Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton,
               UInterchangePythonPipelineBase::StaticRegisterNativesUInterchangePythonPipelineBase,
               0x128,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangePythonPipelineBase>,
               InternalVTableHelperCtorCaller<UInterchangePythonPipelineBase>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines @ 14e4cb870

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode @ 14e4cb8b0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode @ 14e4cb9e0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings @ 14e4cba20

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels @ 14e4cbaa0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames @ 14e4cbc80

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename @ 14e4cbcc0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer @ 14e4cbd40

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines @ 14e4cbe70

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings @ 14e4cbeb0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeFilePickerBase_NoRegister @ 14e4cbfb0

UClass * __cdecl Z_Construct_UClass_UInterchangeFilePickerBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeFilePickerBase",
               &Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton,
               UInterchangeFilePickerBase::StaticRegisterNativesUInterchangeFilePickerBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeFilePickerBase>,
               InternalVTableHelperCtorCaller<UInterchangeFilePickerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFilePickerBase.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeFilePickerBase @ 14e4cc200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeFilePickerBase(void)

{
  if (Z_Registration_Info_UClass_UInterchangeFilePickerBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeFilePickerBase.OuterSingleton,
               &Z_Construct_UClass_UInterchangeFilePickerBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeFilePickerBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FInterchangeFilePickerParameters @ 14e4cc240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeFilePickerParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeFilePickerParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeFilePickerParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeFilePickerParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeFilePickerParameters.InnerSingleton;
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

// NewProp_bAllowMultipleFiles_SetBit @ 14e4cc2c0

void __cdecl
Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::
NewProp_bAllowMultipleFiles_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bShowAllFactoriesExtension_SetBit @ 14e4cc2d0

void __cdecl
Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::
NewProp_bShowAllFactoriesExtension_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14e4cc2e0

void * __cdecl
Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeFilePickerParameters,&UE::CoreUObject::Private::Construct<FInterchangeFilePickerParameters>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeFilePickerParameters>,&UE::CoreUObject::Private::Destruct<FInterchangeFilePickerParameters>,&UE::CoreUObject::Private::Copy<FInterchangeFilePickerParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UInterchangeSceneImportAsset @ 14e4cc410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeSceneImportAsset(void)

{
  if (Z_Registration_Info_UClass_UInterchangeSceneImportAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeSceneImportAsset.OuterSingleton,
               &Z_Construct_UClass_UInterchangeSceneImportAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneImportAsset.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14e4cc4d0

void __cdecl
Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType @ 14e4cc4e0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e4cc520

void __cdecl
Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType @ 14e4cc530

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeAssetImportData_NoRegister @ 14e4cc5b0

UClass * __cdecl Z_Construct_UClass_UInterchangeAssetImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeAssetImportData",
               &Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton,
               UInterchangeAssetImportData::StaticRegisterNativesUInterchangeAssetImportData,0xe8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAssetImportData>,
               InternalVTableHelperCtorCaller<UInterchangeAssetImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetImportData.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister @ 14e4cc670

UClass * __cdecl Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeAssetImportDataConverterBase",
               &Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton,
               UInterchangeAssetImportDataConverterBase::
               StaticRegisterNativesUInterchangeAssetImportDataConverterBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAssetImportDataConverterBase>,
               InternalVTableHelperCtorCaller<UInterchangeAssetImportDataConverterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.InnerSingleton;
}

// Z_Construct_UClass_UInterchangePipelineConfigurationBase_NoRegister @ 14e4cc7e0

UClass * __cdecl Z_Construct_UClass_UInterchangePipelineConfigurationBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePipelineConfigurationBase",
               &Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton,
               UInterchangePipelineConfigurationBase::
               StaticRegisterNativesUInterchangePipelineConfigurationBase,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePipelineConfigurationBase>,
               InternalVTableHelperCtorCaller<UInterchangePipelineConfigurationBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton;
}

// Z_Construct_UClass_UInterchangePipelineConfigurationBase @ 14e4cca90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangePipelineConfigurationBase(void)

{
  if (Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.OuterSingleton,
               &Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.OuterSingleton;
}

// Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult @ 14e4ccad0

UEnum * __cdecl
Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult(void)

{
  if (Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.
                InnerSingleton,
               &Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.InnerSingleton;
}

// Z_Construct_UScriptStruct_FInterchangeStackInfo @ 14e4ccb10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeStackInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeStackInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeStackInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeStackInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FInterchangeStackInfo.InnerSingleton;
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

// EInterchangePipelineConfigurationDialogResult_StaticEnum @ 14e4ccc10

UEnum * __cdecl EInterchangePipelineConfigurationDialogResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult
                       ,(UObject *)pUVar1,L"EInterchangePipelineConfigurationDialogResult");
  }
  return Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton;
}

// NewStructOps @ 14e4ccc50

void * __cdecl Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeStackInfo,&UE::CoreUObject::Private::Construct<FInterchangeStackInfo>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeStackInfo>,&UE::CoreUObject::Private::Destruct<FInterchangeStackInfo>,&UE::CoreUObject::Private::Copy<FInterchangeStackInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UInterchangeMeshUtilities @ 14e4cce60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeMeshUtilities(void)

{
  if (Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton,
               &Z_Construct_UClass_UInterchangeMeshUtilities_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshUtilities.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14e4ccf80

void __cdecl
Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget @ 14e4ccf90

UFunction * __cdecl Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeMeshUtilities_ScriptedImportMorphTarget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog @ 14e4cd0f0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14e4cd150

void * __thiscall
FInterchangeEngineModule::_scalar_deleting_destructor_(FInterchangeEngineModule *this,uint param_1)

{
  *this = (FInterchangeEngineModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bSceneImport_SetBit @ 14e4cd190

void __cdecl
Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics
::NewProp_bSceneImport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UClass_UInterchangeEditorSettings @ 14e4cd250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeEditorSettings(void)

{
  if (Z_Registration_Info_UClass_UInterchangeEditorSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeEditorSettings.OuterSingleton,
               &Z_Construct_UClass_UInterchangeEditorSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeEditorSettings.OuterSingleton;
}

// Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog @ 14e4cd290

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeProjectSettings @ 14e4cd2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeProjectSettings(void)

{
  if (Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton,
               &Z_Construct_UClass_UInterchangeProjectSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton;
}

// Z_Construct_UClass_UInterchangeProjectSettingsScript @ 14e4cd310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeProjectSettingsScript(void)

{
  if (Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.OuterSingleton,
               &Z_Construct_UClass_UInterchangeProjectSettingsScript_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.OuterSingleton;
}

// Z_Construct_UScriptStruct_FInterchangeContentImportSettings @ 14e4cd350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeContentImportSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeContentImportSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeContentImportSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeContentImportSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeContentImportSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangeDialogOverride @ 14e4cd3d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeDialogOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeDialogOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeDialogOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeDialogOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeDialogOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangeGroup @ 14e4cd450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeGroup.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeGroup.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeGroup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangeImportSettings @ 14e4cd4d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeImportSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeImportSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeImportSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeImportSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeImportSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride @ 14e4cd550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangePerTranslatorDialogOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangePerTranslatorDialogOverride.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangePerTranslatorDialogOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangePerTranslatorDialogOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangePipelineStack @ 14e4cd5d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangePipelineStack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangePipelineStack.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangePipelineStack.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangePipelineStack.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangePipelineStack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangeSceneImportSettings @ 14e4cd650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeSceneImportSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeSceneImportSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeSceneImportSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeSceneImportSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeSceneImportSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeSceneImportSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines @ 14e4cd6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeTranslatorPipelines.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeTranslatorPipelines.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeTranslatorPipelines.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeTranslatorPipelines.InnerSingleton;
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

// NewStructOps @ 14e4cd750

void * __cdecl Z_Construct_UScriptStruct_FInterchangeTranslatorPipelines_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeTranslatorPipelines,&UE::CoreUObject::Private::Construct<FInterchangeTranslatorPipelines>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeTranslatorPipelines>,&UE::CoreUObject::Private::Destruct<FInterchangeTranslatorPipelines>,&UE::CoreUObject::Private::Copy<FInterchangeTranslatorPipelines>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e4cd920

void * __cdecl Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangePipelineStack,&UE::CoreUObject::Private::Construct<FInterchangePipelineStack>,&UE::CoreUObject::Private::ConstructForTests<FInterchangePipelineStack>,&UE::CoreUObject::Private::Destruct<FInterchangePipelineStack>,&UE::CoreUObject::Private::Copy<FInterchangePipelineStack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog @ 14e4cd960

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInterchangeManager @ 14e4cd9a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangeManager(void)

{
  if (Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton,
               &Z_Construct_UClass_UInterchangeManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton;
}

// Z_Construct_UClass_UInterchangePipelineStackOverride @ 14e4cd9e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterchangePipelineStackOverride(void)

{
  if (Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton,
               &Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton;
}

// Z_Construct_UScriptStruct_FImportAssetParameters @ 14e4cda20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FImportAssetParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FImportAssetParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FImportAssetParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FImportAssetParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FImportAssetParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FImportAssetParameters.InnerSingleton;
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

// NewProp_bSceneImport_SetBit @ 14e4cdaa0

void __cdecl
Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog_Statics
::NewProp_bSceneImport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bReimport_SetBit @ 14e4cdab0

void __cdecl
Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog_Statics
::NewProp_bReimport_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bShowImportDialog_SetBit @ 14e4cdac0

void __cdecl
Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::
NewProp_bShowImportDialog_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bShowReimportDialog_SetBit @ 14e4cdad0

void __cdecl
Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::
NewProp_bShowReimportDialog_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 14e4cdae0

void * __cdecl
Z_Construct_UScriptStruct_FInterchangePerTranslatorDialogOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangePerTranslatorDialogOverride,&UE::CoreUObject::Private::Construct<FInterchangePerTranslatorDialogOverride>,&UE::CoreUObject::Private::ConstructForTests<FInterchangePerTranslatorDialogOverride>,&UE::CoreUObject::Private::Destruct<FInterchangePerTranslatorDialogOverride>,&UE::CoreUObject::Private::Copy<FInterchangePerTranslatorDialogOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog @ 14e4cdb20

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowImportDialog_SetBit @ 14e4cdb60

void __cdecl
Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_bShowImportDialog_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bShowReimportDialog_SetBit @ 14e4cdb70

void __cdecl
Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewProp_bShowReimportDialog_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14e4cdb80

void * __cdecl Z_Construct_UScriptStruct_FInterchangeDialogOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeDialogOverride,&UE::CoreUObject::Private::Construct<FInterchangeDialogOverride>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeDialogOverride>,&UE::CoreUObject::Private::Destruct<FInterchangeDialogOverride>,&UE::CoreUObject::Private::Copy<FInterchangeDialogOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline @ 14e4cdbc0

UFunction * __cdecl
Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline @ 14e4cdc00

UFunction * __cdecl Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline @ 14e4cdc40

UFunction * __cdecl Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowImportDialog_SetBit @ 14e4cdcd0

void __cdecl
Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowImportDialog_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bShowReimportDialog_SetBit @ 14e4cdd20

void __cdecl
Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowReimportDialog_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewStructOps @ 14e4cdd30

void * __cdecl Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeImportSettings,&UE::CoreUObject::Private::Construct<FInterchangeImportSettings>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeImportSettings>,&UE::CoreUObject::Private::Destruct<FInterchangeImportSettings>,&UE::CoreUObject::Private::Copy<FInterchangeImportSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e4cde40

void * __cdecl Z_Construct_UScriptStruct_FInterchangeSceneImportSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeSceneImportSettings,&UE::CoreUObject::Private::Construct<FInterchangeSceneImportSettings>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeSceneImportSettings>,&UE::CoreUObject::Private::Destruct<FInterchangeSceneImportSettings>,&UE::CoreUObject::Private::Copy<FInterchangeSceneImportSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsAutomated_SetBit @ 14e4cde80

void __cdecl
Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bFollowRedirectors_SetBit @ 14e4cde90

void __cdecl
Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bFollowRedirectors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bReplaceExisting_SetBit @ 14e4cdea0

void __cdecl
Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bReplaceExisting_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bForceShowDialog_SetBit @ 14e4cdeb0

void __cdecl
Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bForceShowDialog_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewStructOps @ 14e4cdec0

void * __cdecl
Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeContentImportSettings,&UE::CoreUObject::Private::Construct<FInterchangeContentImportSettings>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeContentImportSettings>,&UE::CoreUObject::Private::Destruct<FInterchangeContentImportSettings>,&UE::CoreUObject::Private::Copy<FInterchangeContentImportSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e4cdf00

void * __cdecl Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FImportAssetParameters,&UE::CoreUObject::Private::Construct<FImportAssetParameters>,&UE::CoreUObject::Private::ConstructForTests<FImportAssetParameters>,&UE::CoreUObject::Private::Destruct<FImportAssetParameters>,&UE::CoreUObject::Private::Copy<FImportAssetParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShowImportDialog_SetBit @ 14e4ce030

void __cdecl
Z_Construct_UScriptStruct_FInterchangeGroup_Statics::NewProp_bShowImportDialog_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bShowReimportDialog_SetBit @ 14e4ce040

void __cdecl
Z_Construct_UScriptStruct_FInterchangeGroup_Statics::NewProp_bShowReimportDialog_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewStructOps @ 14e4ce050

void * __cdecl Z_Construct_UScriptStruct_FInterchangeGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeGroup,&UE::CoreUObject::Private::Construct<FInterchangeGroup>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeGroup>,&UE::CoreUObject::Private::Destruct<FInterchangeGroup>,&UE::CoreUObject::Private::Copy<FInterchangeGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UInterchangeManager_CancelAllTasks @ 14e4ce090

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_CancelAllTasks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_CancelAllTasks_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e4ce0d0

void __cdecl
Z_Construct_UFunction_UInterchangeManager_CanReimport_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_CanReimport @ 14e4ce0e0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_CanReimport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_CanReimport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSceneImportOnly_SetBit @ 14e4ce120

void __cdecl
Z_Construct_UFunction_UInterchangeManager_CanTranslateSourceData_Statics::
NewProp_bSceneImportOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14e4ce130

void __cdecl
Z_Construct_UFunction_UInterchangeManager_CanTranslateSourceData_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_CanTranslateSourceData @ 14e4ce140

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_CanTranslateSourceData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_CanTranslateSourceData_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_SetBit @ 14e4ce180

void __cdecl
Z_Construct_UClass_UInterchangeProjectSettings_Statics::
NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x220) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_CreateSourceData @ 14e4ce2d0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_CreateSourceData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsAutomated_SetBit @ 14e4ce310

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14e4ce320

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_ExportAsset @ 14e4ce3d0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_ExportAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsAutomated_SetBit @ 14e4ce4a0

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14e4ce4b0

void __cdecl
Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UInterchangeManager_ExportScene @ 14e4ce4c0

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_ExportScene(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineArrayFromPipelineStack @ 14e4ce500

UFunction * __cdecl
Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineArrayFromPipelineStack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeProjectSettingsScript_GetPipelineArrayFromPipelineStack_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInterchangeManager_GetAssetImportData @ 14e4ce540

UFunction * __cdecl Z_Construct_UFunction_UInterchangeManager_GetAssetImportData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInterchangeManager_GetAssetImportData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// operator<<<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> @ 14e4cea50

FArchive * __cdecl
operator<<<TTuple<FString,FString>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *param_2)

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
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
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
      DestructItems<TTuple<FString,FString>,int>
                ((TTuple<FString,FString> *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
              operator<<(param_1,(FString *)pFVar9);
              operator<<(param_1,(FString *)(pFVar9 + 0x10));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
              DefaultConstructItems<TTuple<FString,FString>,int>(pFVar9,1);
              operator<<(param_1,(FString *)pFVar9);
              operator<<(param_1,(FString *)(pFVar9 + 0x10));
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

// AddLambda<`UInterchangeManager::GetInterchangeManager'::__l5::<lambda_1>_> @ 14e4ceb30

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UInterchangeManager::GetInterchangeManager_::__l5::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInterchangeManager::GetInterchangeManager'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UInterchangeManager::GetInterchangeManager'::__l5::<lambda_2>_> @ 14e4ced60

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UInterchangeManager::GetInterchangeManager_::__l5::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  ulong64 uVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar6 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInterchangeManager::GetInterchangeManager'::`5'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  (param_1->OnTaskSystemTickDelegateHandle).ID = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (ulong64 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar6 = *puVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    (param_1->OnTaskSystemTickDelegateHandle).ID = uVar6;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_> @ 14e4cf6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_UE::Interchange::FImportResult::AddImportedObject_::__l8::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  TFutureState<FRunnableThread_*> *pTVar6;
  bool bVar7;
  int iVar8;
  bool *pbVar9;
  TFuture<void> *pTVar10;
  FTSTicker *this;
  TFutureState<void> *pTVar11;
  FRunnableThread *pFVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code **ppcVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  TFutureState<void> *pTVar18;
  TFutureState<void> *pTVar19;
  TFutureState<void> *pTVar20;
  undefined1 auStackY_208 [32];
  TPromise<void> local_1c8;
  undefined4 local_1b0;
  TFutureState<void> *local_1a8;
  FRunnableThread *local_1a0;
  TFutureState<void> *local_198;
  FRunnableThread *local_190;
  TPromise<FRunnableThread_*> local_188;
  TPromise<FRunnableThread_*> local_170;
  FConstructor local_158;
  FString local_150;
  FString local_140;
  TWeakPtr<FTSTicker::FElement,1> local_130;
  FReadAccessScope local_120;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar18 = (TFutureState<void> *)0x0;
  local_1b0 = 0;
  local_108.State.Object = (TFutureState<void> *)0x0;
  pbVar9 = FMemory::Malloc(0x40,8);
  *(undefined ***)pbVar9 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  *(FWeakObjectPtr *)(pbVar9 + 8) = (param_2->WeakImportedObject).WeakPtr;
  local_e0 = pbVar9;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pbVar9 + 0x10),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->ObjectDoneNative);
  *(longlong *)(pbVar9 + 0x28) = 0;
  *(longlong *)(pbVar9 + 0x30) = 0;
  *(longlong *)(pbVar9 + 0x38) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->ObjectDone,
             &local_120);
  *(longlong *)(pbVar9 + 0x30) = *(longlong *)&(param_2->ObjectDone).field_0x8;
  *(longlong *)(pbVar9 + 0x38) = *(longlong *)&(param_2->ObjectDone).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_120);
  if ((FWeakObjectPtr *)(pbVar9 + 8) != (FWeakObjectPtr *)0x0) {
    local_108.State.Object =
         (TFutureState<void> *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>,void>
         ::Call;
  }
  TPromise<void>::TPromise<void>(&local_1c8,param_3);
  if ((local_1c8.bFutureRetrieved != false) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  local_1c8.bFutureRetrieved = true;
  if ((local_1c8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  FVar5.ReferenceController = local_1c8.State.SharedReferenceCount.ReferenceController;
  pTVar20 = local_1c8.State.Object;
  local_198 = local_1c8.State.Object;
  if (local_1c8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_158.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_1b0 = 1;
    if (param_1 == TaskGraph) {
      local_1b0 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_158,(TUniqueFunction<void___cdecl(void)> *)&local_1a8,&local_108,
               (Type *)&local_1c8);
    if (local_1a8 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_1a8->field_0x30;
      iVar8 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (*(code *)**(undefined8 **)local_1a8)(local_1a8,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (code *)CONCAT44(local_108._20_4_,local_108._16_4_);
    pcStack_c0 = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_d8 = local_108.State.Object;
    local_b0 = local_e0;
    local_a8 = local_1c8.State.Object;
    local_a0 = local_1c8.State.SharedReferenceCount.ReferenceController;
    local_98 = local_1c8.bFutureRetrieved;
    local_e0 = (bool *)0x0;
    local_b8 = local_e8;
    local_108.State.Object = (TFutureState<void> *)0x0;
    local_1c8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1c8.State.Object = (TFutureState<void> *)0x0;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::`8'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar15 = local_60 + 2;
    *ppcVar15 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (bool *)0x0;
    local_60[4] = local_c8;
    local_60[5] = pcStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar15 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar15 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_130,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_130.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_130.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_130.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_130.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar15 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar15 = local_60;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar7 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      ppcVar15 = &local_c8;
      if ((code **)local_b0 != (code **)0x0) {
        ppcVar15 = (code **)local_b0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    break;
  case Thread:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_188);
      pTVar11 = operator_new(0x70);
      pTVar19 = pTVar18;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_188.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar6 = local_188.State.Object;
        local_188.bFutureRetrieved = true;
        if ((local_188.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_188.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_188.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_188.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar18;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1c8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1c8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_188.State.SharedReferenceCount.ReferenceController;
        local_1c8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1c8.State.Object = (TFutureState<void> *)0x0;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar6;
        pTVar11->field_0x50 = local_1c8.bFutureRetrieved;
        local_1a8 = pTVar18;
        pTVar18 = pTVar11;
        pTVar19 = (TFutureState<void> *)&DAT_00000001;
        pTVar20 = local_198;
      }
      if (pTVar19 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_1a8);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_150,L"TAsync %d");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_150.Data.ArrayNum != 0) {
        FVar17.Data = local_150.Data.AllocatorInstance.Data;
      }
      pFVar12 = FRunnableThread::Create
                          ((FRunnable *)pTVar18,(wchar_t *)FVar17.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_1a0 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_188,&local_1a0);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (((local_188.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_188.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar18 = local_108.State.Object;
      pbVar9 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar9 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar9 + 8))();
      (*(code *)pTVar18)(uVar14);
      if (local_1c8.State.Object == (TFutureState<void> *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar18 = local_1c8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1c8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar18);
    }
    break;
  case ThreadIfForkSafe:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar7) || (bVar7 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar7)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar11 = operator_new(0x70);
      pTVar19 = pTVar18;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar6 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar18;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1c8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1c8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1c8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1c8.State.Object = (TFutureState<void> *)0x0;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar6;
        pTVar11->field_0x50 = local_1c8.bFutureRetrieved;
        local_1a8 = pTVar18;
        pTVar18 = pTVar11;
        pTVar19 = (TFutureState<void> *)&DAT_00000002;
        pTVar20 = local_198;
      }
      if (pTVar19 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_1a8);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_140,L"TAsync %d");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_140.Data.ArrayNum != 0) {
        FVar17.Data = local_140.Data.AllocatorInstance.Data;
      }
      pFVar12 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar18,(wchar_t *)FVar17.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_190 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_190);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar18 = local_108.State.Object;
      pbVar9 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar9 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar9 + 8))();
      (*(code *)pTVar18)(uVar14);
      if (local_1c8.State.Object == (TFutureState<void> *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar18 = local_1c8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1c8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar18);
    }
    break;
  case ThreadPool:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar13 = operator_new(0x60);
      if (puVar13 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar13[1] = 0;
        *puVar13 = &___7__TAsyncQueuedWork_X__6B_;
        puVar13[2] = local_108.State.Object;
        puVar13[7] = local_e0;
        local_e0 = (bool *)0x0;
        *(undefined4 *)(puVar13 + 4) = local_108._16_4_;
        *(undefined4 *)((longlong)puVar13 + 0x24) = local_108._20_4_;
        *(undefined4 *)(puVar13 + 5) = uStack_f0;
        *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_ec;
        puVar13[6] = local_e8;
        if (puVar13[2] != 0) {
          local_108.State.Object = pTVar18;
        }
        puVar13[8] = local_1c8.State.Object;
        puVar13[9] = local_1c8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar13 + 10) = local_1c8.bFutureRetrieved;
        local_1c8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1c8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar13,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar18 = local_108.State.Object;
      pbVar9 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar9 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar9 + 8))();
      (*(code *)pTVar18)(uVar14);
      if (local_1c8.State.Object == (TFutureState<void> *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar18 = local_1c8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1c8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar18);
    }
    break;
  default:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar20;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1c8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1c8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.State.SharedReferenceCount.ReferenceController);
  if (local_108.State.Object != (TFutureState<void> *)0x0) {
    pbVar9 = &local_108.bFutureRetrieved;
    if (local_e0 != (bool *)0x0) {
      pbVar9 = local_e0;
    }
    (**(code **)(*(longlong *)pbVar9 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar16 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  return __return_storage_ptr__;
}

// CastChecked<UInterchangeBaseNode,UObject> @ 14e4d0310

UInterchangeBaseNode * __cdecl CastChecked<UInterchangeBaseNode,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UInterchangeBaseNode>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UInterchangeBaseNode *)param_1;
  }
  pFVar3 = GetTypeName<UInterchangeBaseNode>(&local_28);
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

// ConstructItems<TObjectPtr<UInterchangePipelineBase>,UInterchangePipelineBase_*,int> @ 14e4d03d0

void __cdecl
ConstructItems<TObjectPtr<UInterchangePipelineBase>,UInterchangePipelineBase_*,int>
          (void *param_1,UInterchangePipelineBase **param_2,int param_3)

{
  UInterchangePipelineBase *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UInterchangePipelineBase **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UInterchangePipelineBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UInterchangePipelineBase>,TObjectPtr<UInterchangePipelineBase>,int> @ 14e4d0430

void __cdecl
ConstructItems<TObjectPtr<UInterchangePipelineBase>,TObjectPtr<UInterchangePipelineBase>,int>
          (void *param_1,TObjectPtr<UInterchangePipelineBase> *param_2,int param_3)

{
  TObjectPtr<UInterchangePipelineBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UInterchangePipelineBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UInterchangePipelineBase>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UInterchangePipelineBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UInterchangePipelineBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInterchangePerTranslatorDialogOverride,FInterchangePerTranslatorDialogOverride,int> @ 14e4d0490

void __cdecl
ConstructItems<FInterchangePerTranslatorDialogOverride,FInterchangePerTranslatorDialogOverride,int>
          (void *param_1,FInterchangePerTranslatorDialogOverride *param_2,int param_3)

{
  undefined1 *puVar1;
  bool *pbVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x28);
    pbVar2 = &param_2->bShowImportDialog;
    do {
      *(undefined8 *)(puVar1 + -0x28) =
           *(undefined8 *)(puVar1 + (longlong)param_2 + (-0x28 - (longlong)param_1));
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(puVar1 + -0x20),(FSoftObjectPath *)(pbVar2 + -0x20));
      *puVar1 = *pbVar2;
      puVar1[1] = pbVar2[1];
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x30;
      pbVar2 = pbVar2 + 0x30;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int> @ 14e4d0510

void __cdecl
ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
          (void *param_1,FInterchangeStackInfo *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FInterchangeStackInfo *pFVar4;
  ForAnyElementType *pFVar5;
  TArray<TObjectPtr<UInterchangePipelineBase>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar4 = param_2;
    do {
      pTVar6 = &pFVar4->Pipelines;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar6) =
           *(undefined8 *)((longlong)(pTVar6 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar6->ArrayNum;
      pFVar3 = (pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,pFVar5,iVar2,piVar1);
        ConstructItems<TObjectPtr<UInterchangePipelineBase>,TObjectPtr<UInterchangePipelineBase>,int>
                  (pFVar5->Data,(TObjectPtr<UInterchangePipelineBase> *)pFVar3,iVar2);
      }
      pFVar4 = (FInterchangeStackInfo *)(pTVar6 + 1);
      pFVar5 = pFVar5 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInterchangeTranslatorPipelines,FInterchangeTranslatorPipelines,int> @ 14e4d05e0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
ConstructItems<FInterchangeTranslatorPipelines,FInterchangeTranslatorPipelines,int>
          (void *param_1,FInterchangeTranslatorPipelines *param_2,int param_3)

{
  int iVar1;
  FSoftObjectPath *pFVar2;
  TSoftClassPtr<UInterchangeTranslatorBase> *pTVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x34);
    pTVar3 = &param_2->Translator;
    do {
      puVar5 = &(pTVar3->SoftObjectPtr).field_0x8;
      *(undefined8 *)(puVar5 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           *(undefined8 *)(puVar5 + -8);
      FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(piVar4 + -0xb),(FSoftObjectPath *)puVar5)
      ;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      iVar1 = *(int *)((longlong)puVar5 + 0x28);
      pFVar2 = *(FSoftObjectPath **)(puVar5 + 0x20);
      piVar4[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar1,0,(ForAnyElementType *)(piVar4 + -3),iVar1,piVar4);
        ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                  (((ForAnyElementType *)(piVar4 + -3))->Data,pFVar2,iVar1);
      }
      pTVar3 = (TSoftClassPtr<UInterchangeTranslatorBase> *)((longlong)puVar5 + 0x30);
      piVar4 = piVar4 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,int> @ 14e4d07d0

void __cdecl
DefaultConstructItems<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FInterchangeStackInfo,int> @ 14e4d0810

void __cdecl DefaultConstructItems<FInterchangeStackInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::InterchangeTaskParsing::Private::FTaskData,int> @ 14e4d0840

void __cdecl
DefaultConstructItems<UE::InterchangeTaskParsing::Private::FTaskData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0xffffffff;
      *(undefined1 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined4 *)(lVar1 + 0x4c) = 0;
      *(undefined4 *)(lVar1 + 0x50) = 1;
      lVar1 = lVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,int> @ 14e4d0890

void __cdecl
DestructItems<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,int>
          (FImportedObjectInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->ImportedObject).SubPathString;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FUtf8String *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInterchangeGroup,int> @ 14e4d08d0

void __cdecl DestructItems<FInterchangeGroup,int>(FInterchangeGroup *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->ShowImportDialogOverride).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (puVar1 + -8);
      *(undefined4 *)(puVar1 + -10) = 0;
      if ((void *)puVar1[-0xb] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xb]);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (puVar1 + -0x13);
      puVar1 = puVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInterchangePerTranslatorDialogOverride,int> @ 14e4d0950

void __cdecl
DestructItems<FInterchangePerTranslatorDialogOverride,int>
          (FInterchangePerTranslatorDialogOverride *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Translator).SoftObjectPtr.field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInterchangeStackInfo,int> @ 14e4d0990

void __cdecl DestructItems<FInterchangeStackInfo,int>(FInterchangeStackInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Pipelines).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FInterchangeStackInfo *)(&param_1->Pipelines + 1);
  }
  return;
}

// DestructItems<FInterchangeTranslatorPipelines,int> @ 14e4d09d0

void __cdecl
DestructItems<FInterchangeTranslatorPipelines,int>
          (FInterchangeTranslatorPipelines *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Pipelines;
    do {
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pTVar2 + -1) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -1));
      }
      pTVar2 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UInterchangeManager::FQueuedTaskData,int> @ 14e4d0a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
DestructItems<UInterchangeManager::FQueuedTaskData,int>(FQueuedTaskData *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AsyncHelper).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::InterchangeTaskParsing::Private::FTaskData,int> @ 14e4d0a70

void __cdecl
DestructItems<UE::InterchangeTaskParsing::Private::FTaskData,int>(FTaskData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Prerequisites;
    do {
      if (*(ForElementType<UInterchangeFactoryBaseNode_*> *)(pTVar2 + 2) !=
          (ForElementType<UInterchangeFactoryBaseNode_*>)0x0) {
        FMemory::Free((void *)*(ForElementType<UInterchangeFactoryBaseNode_*> *)(pTVar2 + 2));
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>
                ((FString *)
                 (((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + -2) + 8))->
                 AllocatorInstance).Data,*(int *)(pTVar2 + -1));
      pFVar1 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + -2) + 8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FTaskData *)(pTVar2 + -3))->UniqueID).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,int> @ 14e4d0af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,int>
          (TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,int> @ 14e4d0b30

void __cdecl
DestructItems<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,int>
          (TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *param_1,int param_2)

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

// DestructItems<TStrongObjectPtr<UInterchangeBaseNodeContainer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int> @ 14e4d0b70

void __cdecl
DestructItems<TStrongObjectPtr<UInterchangeBaseNodeContainer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
          (TStrongObjectPtr<UInterchangeBaseNodeContainer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(param_1->Object);
      param_1->Object = (UObject *)0x0;
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DuplicateObject<UInterchangePipelineBase> @ 14e4d0bc0

UInterchangePipelineBase * __cdecl
DuplicateObject<UInterchangePipelineBase>
          (UInterchangePipelineBase *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UInterchangePipelineBase *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
  pUVar2 = (UInterchangePipelineBase *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// GetDefault<UInterchangeProjectSettings> @ 14e4d2d60

UInterchangeProjectSettings * __cdecl GetDefault<UInterchangeProjectSettings>(void)

{
  UClass *this;
  
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UInterchangeProjectSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UInterchangeProjectSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetMutableDefault<UInterchangeProjectSettings> @ 14e4d3390

UInterchangeProjectSettings * __cdecl GetMutableDefault<UInterchangeProjectSettings>(void)

{
  UClass *this;
  
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UInterchangeProjectSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UInterchangeProjectSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetTypeName<UInterchangeBaseNode> @ 14e4d33d0

FString * __cdecl GetTypeName<UInterchangeBaseNode>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<UE::InterchangeTaskParsing::Private::FTaskData,int,FIdentityFunctor,TDereferenceWrapper<UE::InterchangeTaskParsing::Private::FTaskData,`UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>_>_> @ 14e4d3410

void __cdecl
AlgoImpl::
HeapSortInternal<UE::InterchangeTaskParsing::Private::FTaskData,int,FIdentityFunctor,TDereferenceWrapper<UE::InterchangeTaskParsing::Private::FTaskData,_UE::Interchange::FTaskParsing::Execute_::__l24::<lambda_2>_>_>
          (FTaskData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::InterchangeTaskParsing::Private::FTaskData,_public:_virtual_void___cdecl_UE::Interchange::FTaskParsing::Execute(void)_::_24_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  ForElementType<UInterchangeFactoryBaseNode_*> FVar8;
  FScriptContainerElement *pFVar9;
  ulong64 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined3 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined3 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  FTaskData *pFVar31;
  int iVar32;
  FTaskData *pFVar33;
  FTaskData *pFVar34;
  
  if (param_2 < 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar24) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar24) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar25 = (param_2 + -2) / 2;
  iVar26 = iVar25 * 2 + 1;
  iVar28 = iVar26;
  iVar29 = iVar25;
  do {
    while (param_2 <= iVar26) {
LAB_14e4d35b5:
      if (iVar29 == 0) {
        iVar26 = param_2 + -1;
        lVar30 = (longlong)iVar26;
        if (0 < iVar26) {
          pFVar31 = param_1 + lVar30;
          do {
            iVar28 = (pFVar31->UniqueID).Data.ArrayNum;
            iVar25 = (pFVar31->UniqueID).Data.ArrayMax;
            iVar32 = 0;
            pFVar2 = (param_1->UniqueID).Data.AllocatorInstance.Data;
            iVar29 = (param_1->UniqueID).Data.ArrayNum;
            iVar27 = (param_1->UniqueID).Data.ArrayMax;
            iVar12 = param_1->SourceIndex;
            bVar17 = param_1->bIsSceneNode;
            uVar18 = *(undefined3 *)&param_1->field_0x15;
            pFVar3 = (param_1->Dependencies).AllocatorInstance.Data;
            iVar14 = (param_1->Dependencies).ArrayNum;
            iVar15 = (param_1->Dependencies).ArrayMax;
            uVar4 = param_1->GraphEventRef;
            pFVar5 = (param_1->Prerequisites).AllocatorInstance.Data;
            iVar16 = (param_1->Prerequisites).ArrayNum;
            iVar19 = (param_1->Prerequisites).ArrayMax;
            pUVar6 = param_1->FactoryClass;
            uVar7 = *(undefined8 *)(param_1->Nodes).AllocatorInstance.InlineData;
            FVar8 = (param_1->Nodes).AllocatorInstance.SecondaryData;
            iVar20 = (param_1->Nodes).ArrayNum;
            iVar21 = (param_1->Nodes).ArrayMax;
            (param_1->UniqueID).Data.AllocatorInstance.Data =
                 (pFVar31->UniqueID).Data.AllocatorInstance.Data;
            (param_1->UniqueID).Data.ArrayNum = iVar28;
            (param_1->UniqueID).Data.ArrayMax = iVar25;
            bVar24 = pFVar31->bIsSceneNode;
            uVar13 = *(undefined3 *)&pFVar31->field_0x15;
            pFVar9 = (pFVar31->Dependencies).AllocatorInstance.Data;
            param_1->SourceIndex = pFVar31->SourceIndex;
            param_1->bIsSceneNode = bVar24;
            *(undefined3 *)&param_1->field_0x15 = uVar13;
            (param_1->Dependencies).AllocatorInstance.Data = pFVar9;
            iVar28 = (pFVar31->Dependencies).ArrayMax;
            uVar10 = pFVar31->GraphEventRef;
            (param_1->Dependencies).ArrayNum = (pFVar31->Dependencies).ArrayNum;
            (param_1->Dependencies).ArrayMax = iVar28;
            param_1->GraphEventRef = uVar10;
            iVar28 = (pFVar31->Prerequisites).ArrayNum;
            iVar25 = (pFVar31->Prerequisites).ArrayMax;
            (param_1->Prerequisites).AllocatorInstance.Data =
                 (pFVar31->Prerequisites).AllocatorInstance.Data;
            (param_1->Prerequisites).ArrayNum = iVar28;
            (param_1->Prerequisites).ArrayMax = iVar25;
            uVar11 = *(undefined8 *)(pFVar31->Nodes).AllocatorInstance.InlineData;
            param_1->FactoryClass = pFVar31->FactoryClass;
            *(undefined8 *)(param_1->Nodes).AllocatorInstance.InlineData = uVar11;
            iVar28 = (pFVar31->Nodes).ArrayNum;
            iVar25 = (pFVar31->Nodes).ArrayMax;
            (param_1->Nodes).AllocatorInstance.SecondaryData =
                 (pFVar31->Nodes).AllocatorInstance.SecondaryData;
            (param_1->Nodes).ArrayNum = iVar28;
            (param_1->Nodes).ArrayMax = iVar25;
            (pFVar31->UniqueID).Data.AllocatorInstance.Data = pFVar2;
            (pFVar31->UniqueID).Data.ArrayNum = iVar29;
            (pFVar31->UniqueID).Data.ArrayMax = iVar27;
            pFVar31->SourceIndex = iVar12;
            pFVar31->bIsSceneNode = bVar17;
            *(undefined3 *)&pFVar31->field_0x15 = uVar18;
            (pFVar31->Dependencies).AllocatorInstance.Data = pFVar3;
            (pFVar31->Dependencies).ArrayNum = iVar14;
            (pFVar31->Dependencies).ArrayMax = iVar15;
            pFVar31->GraphEventRef = uVar4;
            (pFVar31->Prerequisites).AllocatorInstance.Data = pFVar5;
            (pFVar31->Prerequisites).ArrayNum = iVar16;
            (pFVar31->Prerequisites).ArrayMax = iVar19;
            pFVar31->FactoryClass = pUVar6;
            *(undefined8 *)(pFVar31->Nodes).AllocatorInstance.InlineData = uVar7;
            (pFVar31->Nodes).AllocatorInstance.SecondaryData = FVar8;
            (pFVar31->Nodes).ArrayNum = iVar20;
            (pFVar31->Nodes).ArrayMax = iVar21;
            if (1 < iVar26) {
              do {
                iVar25 = iVar32 * 2;
                iVar28 = iVar25 + 1;
                if (iVar25 + 2 < iVar26) {
                  bVar24 = `UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>::operator()
                                     (param_4.Predicate,param_1 + (iVar25 + 2),param_1 + iVar28);
                  if (bVar24) {
                    iVar28 = iVar25;
                  }
                  iVar28 = iVar28 + 1;
                }
                pFVar33 = param_1 + iVar28;
                pFVar34 = param_1 + iVar32;
                bVar24 = `UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>::operator()
                                   (param_4.Predicate,pFVar34,pFVar33);
                if (!bVar24) break;
                iVar25 = (pFVar33->UniqueID).Data.ArrayNum;
                iVar29 = (pFVar33->UniqueID).Data.ArrayMax;
                pFVar2 = (pFVar34->UniqueID).Data.AllocatorInstance.Data;
                iVar27 = (pFVar34->UniqueID).Data.ArrayNum;
                iVar12 = (pFVar34->UniqueID).Data.ArrayMax;
                iVar14 = pFVar34->SourceIndex;
                bVar17 = pFVar34->bIsSceneNode;
                uVar18 = *(undefined3 *)&pFVar34->field_0x15;
                pFVar3 = (pFVar34->Dependencies).AllocatorInstance.Data;
                iVar15 = (pFVar34->Dependencies).ArrayNum;
                iVar16 = (pFVar34->Dependencies).ArrayMax;
                uVar4 = pFVar34->GraphEventRef;
                pFVar5 = (pFVar34->Prerequisites).AllocatorInstance.Data;
                iVar19 = (pFVar34->Prerequisites).ArrayNum;
                iVar20 = (pFVar34->Prerequisites).ArrayMax;
                pUVar6 = pFVar34->FactoryClass;
                uVar7 = *(undefined8 *)(pFVar34->Nodes).AllocatorInstance.InlineData;
                FVar8 = (pFVar34->Nodes).AllocatorInstance.SecondaryData;
                iVar21 = (pFVar34->Nodes).ArrayNum;
                iVar32 = (pFVar34->Nodes).ArrayMax;
                (pFVar34->UniqueID).Data.AllocatorInstance.Data =
                     (pFVar33->UniqueID).Data.AllocatorInstance.Data;
                (pFVar34->UniqueID).Data.ArrayNum = iVar25;
                (pFVar34->UniqueID).Data.ArrayMax = iVar29;
                bVar24 = pFVar33->bIsSceneNode;
                uVar13 = *(undefined3 *)&pFVar33->field_0x15;
                pFVar9 = (pFVar33->Dependencies).AllocatorInstance.Data;
                pFVar34->SourceIndex = pFVar33->SourceIndex;
                pFVar34->bIsSceneNode = bVar24;
                *(undefined3 *)&pFVar34->field_0x15 = uVar13;
                (pFVar34->Dependencies).AllocatorInstance.Data = pFVar9;
                iVar25 = (pFVar33->Dependencies).ArrayMax;
                uVar10 = pFVar33->GraphEventRef;
                (pFVar34->Dependencies).ArrayNum = (pFVar33->Dependencies).ArrayNum;
                (pFVar34->Dependencies).ArrayMax = iVar25;
                pFVar34->GraphEventRef = uVar10;
                iVar25 = (pFVar33->Prerequisites).ArrayNum;
                iVar29 = (pFVar33->Prerequisites).ArrayMax;
                (pFVar34->Prerequisites).AllocatorInstance.Data =
                     (pFVar33->Prerequisites).AllocatorInstance.Data;
                (pFVar34->Prerequisites).ArrayNum = iVar25;
                (pFVar34->Prerequisites).ArrayMax = iVar29;
                uVar11 = *(undefined8 *)(pFVar33->Nodes).AllocatorInstance.InlineData;
                pFVar34->FactoryClass = pFVar33->FactoryClass;
                *(undefined8 *)(pFVar34->Nodes).AllocatorInstance.InlineData = uVar11;
                iVar25 = (pFVar33->Nodes).ArrayNum;
                iVar29 = (pFVar33->Nodes).ArrayMax;
                (pFVar34->Nodes).AllocatorInstance.SecondaryData =
                     (pFVar33->Nodes).AllocatorInstance.SecondaryData;
                (pFVar34->Nodes).ArrayNum = iVar25;
                (pFVar34->Nodes).ArrayMax = iVar29;
                (pFVar33->UniqueID).Data.AllocatorInstance.Data = pFVar2;
                (pFVar33->UniqueID).Data.ArrayNum = iVar27;
                (pFVar33->UniqueID).Data.ArrayMax = iVar12;
                pFVar33->SourceIndex = iVar14;
                pFVar33->bIsSceneNode = bVar17;
                *(undefined3 *)&pFVar33->field_0x15 = uVar18;
                (pFVar33->Dependencies).AllocatorInstance.Data = pFVar3;
                (pFVar33->Dependencies).ArrayNum = iVar15;
                (pFVar33->Dependencies).ArrayMax = iVar16;
                pFVar33->GraphEventRef = uVar4;
                (pFVar33->Prerequisites).AllocatorInstance.Data = pFVar5;
                (pFVar33->Prerequisites).ArrayNum = iVar19;
                (pFVar33->Prerequisites).ArrayMax = iVar20;
                pFVar33->FactoryClass = pUVar6;
                *(undefined8 *)(pFVar33->Nodes).AllocatorInstance.InlineData = uVar7;
                (pFVar33->Nodes).AllocatorInstance.SecondaryData = FVar8;
                (pFVar33->Nodes).ArrayNum = iVar21;
                (pFVar33->Nodes).ArrayMax = iVar32;
                iVar32 = iVar28;
              } while (iVar28 * 2 + 1 < iVar26);
            }
            iVar26 = iVar26 + -1;
            lVar30 = lVar30 + -1;
            pFVar31 = pFVar31 + -1;
          } while (0 < lVar30);
        }
        return;
      }
      iVar25 = iVar29 + -1;
      iVar26 = iVar28 + -2;
      iVar28 = iVar26;
      iVar29 = iVar25;
    }
    iVar26 = iVar25 * 2;
    iVar27 = iVar26 + 1;
    if (iVar26 + 2 < param_2) {
      bVar24 = `UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>::operator()
                         (param_4.Predicate,param_1 + (iVar26 + 2),param_1 + iVar27);
      if (bVar24) {
        iVar27 = iVar26;
      }
      iVar27 = iVar27 + 1;
    }
    pFVar31 = param_1 + iVar27;
    pFVar33 = param_1 + iVar25;
    bVar24 = `UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>::operator()
                       (param_4.Predicate,pFVar33,pFVar31);
    if (!bVar24) goto LAB_14e4d35b5;
    iVar25 = (pFVar31->UniqueID).Data.ArrayNum;
    iVar12 = (pFVar31->UniqueID).Data.ArrayMax;
    iVar26 = iVar27 * 2 + 1;
    pFVar2 = (pFVar33->UniqueID).Data.AllocatorInstance.Data;
    iVar14 = (pFVar33->UniqueID).Data.ArrayNum;
    iVar15 = (pFVar33->UniqueID).Data.ArrayMax;
    iVar16 = pFVar33->SourceIndex;
    bVar17 = pFVar33->bIsSceneNode;
    uVar18 = *(undefined3 *)&pFVar33->field_0x15;
    pFVar3 = (pFVar33->Dependencies).AllocatorInstance.Data;
    iVar19 = (pFVar33->Dependencies).ArrayNum;
    iVar20 = (pFVar33->Dependencies).ArrayMax;
    uVar4 = pFVar33->GraphEventRef;
    pFVar5 = (pFVar33->Prerequisites).AllocatorInstance.Data;
    iVar21 = (pFVar33->Prerequisites).ArrayNum;
    iVar32 = (pFVar33->Prerequisites).ArrayMax;
    pUVar6 = pFVar33->FactoryClass;
    uVar7 = *(undefined8 *)(pFVar33->Nodes).AllocatorInstance.InlineData;
    FVar8 = (pFVar33->Nodes).AllocatorInstance.SecondaryData;
    iVar22 = (pFVar33->Nodes).ArrayNum;
    iVar23 = (pFVar33->Nodes).ArrayMax;
    (pFVar33->UniqueID).Data.AllocatorInstance.Data =
         (pFVar31->UniqueID).Data.AllocatorInstance.Data;
    (pFVar33->UniqueID).Data.ArrayNum = iVar25;
    (pFVar33->UniqueID).Data.ArrayMax = iVar12;
    bVar24 = pFVar31->bIsSceneNode;
    uVar13 = *(undefined3 *)&pFVar31->field_0x15;
    pFVar9 = (pFVar31->Dependencies).AllocatorInstance.Data;
    pFVar33->SourceIndex = pFVar31->SourceIndex;
    pFVar33->bIsSceneNode = bVar24;
    *(undefined3 *)&pFVar33->field_0x15 = uVar13;
    (pFVar33->Dependencies).AllocatorInstance.Data = pFVar9;
    iVar25 = (pFVar31->Dependencies).ArrayMax;
    uVar10 = pFVar31->GraphEventRef;
    (pFVar33->Dependencies).ArrayNum = (pFVar31->Dependencies).ArrayNum;
    (pFVar33->Dependencies).ArrayMax = iVar25;
    pFVar33->GraphEventRef = uVar10;
    iVar25 = (pFVar31->Prerequisites).ArrayNum;
    iVar12 = (pFVar31->Prerequisites).ArrayMax;
    (pFVar33->Prerequisites).AllocatorInstance.Data =
         (pFVar31->Prerequisites).AllocatorInstance.Data;
    (pFVar33->Prerequisites).ArrayNum = iVar25;
    (pFVar33->Prerequisites).ArrayMax = iVar12;
    uVar11 = *(undefined8 *)(pFVar31->Nodes).AllocatorInstance.InlineData;
    pFVar33->FactoryClass = pFVar31->FactoryClass;
    *(undefined8 *)(pFVar33->Nodes).AllocatorInstance.InlineData = uVar11;
    iVar25 = (pFVar31->Nodes).ArrayNum;
    iVar12 = (pFVar31->Nodes).ArrayMax;
    (pFVar33->Nodes).AllocatorInstance.SecondaryData =
         (pFVar31->Nodes).AllocatorInstance.SecondaryData;
    (pFVar33->Nodes).ArrayNum = iVar25;
    (pFVar33->Nodes).ArrayMax = iVar12;
    (pFVar31->UniqueID).Data.AllocatorInstance.Data = pFVar2;
    (pFVar31->UniqueID).Data.ArrayNum = iVar14;
    (pFVar31->UniqueID).Data.ArrayMax = iVar15;
    pFVar31->SourceIndex = iVar16;
    pFVar31->bIsSceneNode = bVar17;
    *(undefined3 *)&pFVar31->field_0x15 = uVar18;
    (pFVar31->Dependencies).AllocatorInstance.Data = pFVar3;
    (pFVar31->Dependencies).ArrayNum = iVar19;
    (pFVar31->Dependencies).ArrayMax = iVar20;
    pFVar31->GraphEventRef = uVar4;
    (pFVar31->Prerequisites).AllocatorInstance.Data = pFVar5;
    (pFVar31->Prerequisites).ArrayNum = iVar21;
    (pFVar31->Prerequisites).ArrayMax = iVar32;
    pFVar31->FactoryClass = pUVar6;
    *(undefined8 *)(pFVar31->Nodes).AllocatorInstance.InlineData = uVar7;
    (pFVar31->Nodes).AllocatorInstance.SecondaryData = FVar8;
    (pFVar31->Nodes).ArrayNum = iVar22;
    (pFVar31->Nodes).ArrayMax = iVar23;
    iVar25 = iVar27;
  } while( true );
}

// InternalConstructor<UInterchangeAssetImportData> @ 14e4d3790

void __cdecl InternalConstructor<UInterchangeAssetImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UInterchangeAssetImportData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
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
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UInterchangeAssetImportDataConverterBase> @ 14e4d3850

void __cdecl
InternalConstructor<UInterchangeAssetImportDataConverterBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangeAssetImportDataConverterBase__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeBlueprintPipelineBase> @ 14e4d3880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UInterchangeBlueprintPipelineBase>(FObjectInitializer *param_1)

{
  UBlueprint *this;
  FObjectInitializer *pFVar1;
  UClass *pUVar2;
  
  this = (UBlueprint *)param_1->Obj;
  if (this != (UBlueprint *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UBlueprint::UBlueprint(this,pFVar1);
    this->_padding_ = (longlong)&UInterchangeBlueprintPipelineBase::_vftable__for__UBlueprintCore__;
    this->_padding_ =
         (longlong)
         &UInterchangeBlueprintPipelineBase::_vftable__for__IBlueprintPropertyGuidProvider__;
    pUVar2 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ParentClass).Class.field0_0x0.DebugPtr = pUVar2;
    this->bRecompileOnLoad = '\x01';
  }
  return;
}

// InternalConstructor<UInterchangeEditorSettings> @ 14e4d38f0

void __cdecl InternalConstructor<UInterchangeEditorSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInterchangeEditorSettings__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UInterchangeEditorUtilitiesBase> @ 14e4d3940

void __cdecl InternalConstructor<UInterchangeEditorUtilitiesBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangeEditorUtilitiesBase__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeFilePickerBase> @ 14e4d3970

void __cdecl InternalConstructor<UInterchangeFilePickerBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangeFilePickerBase__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeManager> @ 14e4d39a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UInterchangeManager>(FObjectInitializer *param_1)

{
  if ((UInterchangeManager *)param_1->Obj != (UInterchangeManager *)0x0) {
    UInterchangeManager::UInterchangeManager((UInterchangeManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UInterchangeMeshUtilities> @ 14e4d39c0

void __cdecl InternalConstructor<UInterchangeMeshUtilities>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangeMeshUtilities__6B_;
  }
  return;
}

// InternalConstructor<UInterchangePipelineConfigurationBase> @ 14e4d39f0

void __cdecl InternalConstructor<UInterchangePipelineConfigurationBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangePipelineConfigurationBase__6B_;
  }
  return;
}

// InternalConstructor<UInterchangePipelineStackOverride> @ 14e4d3a20

void __cdecl InternalConstructor<UInterchangePipelineStackOverride>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangePipelineStackOverride__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UInterchangeProjectSettings> @ 14e4d3a60

void __cdecl InternalConstructor<UInterchangeProjectSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangeProjectSettings__6B_;
    FInterchangeContentImportSettings::FInterchangeContentImportSettings
              ((FInterchangeContentImportSettings *)(this + 1));
    FInterchangeImportSettings::FInterchangeImportSettings
              ((FInterchangeImportSettings *)&this[6]._padding_);
    this[8].CategoryName.ComparisonIndex = 0;
    this[8].CategoryName.Number = 0;
    this[8].SectionName.ComparisonIndex = 0;
    this[8].SectionName.Number = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[9]._padding_,0);
    *(undefined1 *)&this[9].CategoryName.ComparisonIndex.Value = 1;
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    this[9].SectionName.ComparisonIndex = 0;
    this[9].SectionName.Number = 0;
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[10]._padding_,0);
    this[10]._padding_ = 0;
    this[10].CategoryName.ComparisonIndex = 0;
    this[10].CategoryName.Number = 0;
    this[10].SectionName.ComparisonIndex = 0;
    this[10].SectionName.Number = 0;
    this[0xb]._padding_ = 0;
    this[0xb]._padding_ = 0;
    this[0xb]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UInterchangeProjectSettingsScript> @ 14e4d3b60

void __cdecl InternalConstructor<UInterchangeProjectSettingsScript>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangeProjectSettingsScript__6B_;
  }
  return;
}

// InternalConstructor<UInterchangePythonPipelineAsset> @ 14e4d3b90

void __cdecl InternalConstructor<UInterchangePythonPipelineAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterchangePythonPipelineAsset__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x18,0);
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UInterchangePythonPipelineBase> @ 14e4d3c00

void __cdecl InternalConstructor<UInterchangePythonPipelineBase>(FObjectInitializer *param_1)

{
  UInterchangePipelineBase *this;
  
  this = (UInterchangePipelineBase *)param_1->Obj;
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangePythonPipelineBase__6B_;
  }
  return;
}

// InternalConstructor<UInterchangeSceneImportAsset> @ 14e4d3c30

void __cdecl InternalConstructor<UInterchangeSceneImportAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UInterchangeSceneImportAsset::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UInterchangeSceneImportAsset::_vftable__for__IInterface_AssetUserData__;
  }
  return;
}

// InternalVTableHelperCtorCaller<UInterchangeAssetImportData> @ 14e4d3c70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAssetImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAssetImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeAssetImportData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
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
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeAssetImportDataConverterBase> @ 14e4d3db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeAssetImportDataConverterBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeAssetImportDataConverterBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeAssetImportDataConverterBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeBlueprintPipelineBase> @ 14e4d3e60

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
InternalVTableHelperCtorCaller<UInterchangeBlueprintPipelineBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprint *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeBlueprintPipelineBase::GetPrivateStaticClass();
  this = (UBlueprint *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    this->_padding_ = (longlong)&UInterchangeBlueprintPipelineBase::_vftable__for__UBlueprintCore__;
    this->_padding_ =
         (longlong)
         &UInterchangeBlueprintPipelineBase::_vftable__for__IBlueprintPropertyGuidProvider__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeEditorSettings> @ 14e4d3f20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterchangeEditorSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeEditorSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInterchangeEditorSettings__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeEditorUtilitiesBase> @ 14e4d3fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeEditorUtilitiesBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeEditorUtilitiesBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeEditorUtilitiesBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeFilePickerBase> @ 14e4d4090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterchangeFilePickerBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeFilePickerBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeFilePickerBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeManager> @ 14e4d4140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterchangeManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangeManager *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeManager::GetPrivateStaticClass();
  pUVar3 = (UInterchangeManager *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UInterchangeManager *)0x0) {
    pUVar3 = UInterchangeManager::UInterchangeManager(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeMeshUtilities> @ 14e4d41e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterchangeMeshUtilities>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeMeshUtilities::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeMeshUtilities__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangePipelineConfigurationBase> @ 14e4d4290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangePipelineConfigurationBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangePipelineConfigurationBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangePipelineConfigurationBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangePipelineStackOverride> @ 14e4d4340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangePipelineStackOverride>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangePipelineStackOverride::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangePipelineStackOverride__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeProjectSettings> @ 14e4d4400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeProjectSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  UDeveloperSettings *pUVar3;
  
  pUVar3 = (UDeveloperSettings *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeProjectSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangeProjectSettings__6B_;
    FInterchangeContentImportSettings::FInterchangeContentImportSettings
              ((FInterchangeContentImportSettings *)(this + 1));
    FInterchangeImportSettings::FInterchangeImportSettings
              ((FInterchangeImportSettings *)&this[6]._padding_);
    this[8].CategoryName.ComparisonIndex = 0;
    this[8].CategoryName.Number = 0;
    this[8].SectionName.ComparisonIndex = 0;
    this[8].SectionName.Number = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    this[9]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[9]._padding_,0);
    *(undefined1 *)&this[9].CategoryName.ComparisonIndex.Value = 1;
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    this[9].SectionName.ComparisonIndex = 0;
    this[9].SectionName.Number = 0;
    this[10]._padding_ = 0;
    this[10]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[10]._padding_,0);
    this[10]._padding_ = 0;
    this[10].CategoryName.ComparisonIndex = 0;
    this[10].CategoryName.Number = 0;
    this[10].SectionName.ComparisonIndex = 0;
    this[10].SectionName.Number = 0;
    this[0xb]._padding_ = 0;
    this[0xb]._padding_ = 0;
    this[0xb]._padding_ = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UInterchangeProjectSettingsScript> @ 14e4d4550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeProjectSettingsScript>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeProjectSettingsScript::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangeProjectSettingsScript__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangePythonPipelineAsset> @ 14e4d4600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangePythonPipelineAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangePythonPipelineAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterchangePythonPipelineAsset__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x18,0);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangePythonPipelineBase> @ 14e4d46e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangePythonPipelineBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangePythonPipelineBase::GetPrivateStaticClass();
  this = (UInterchangePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInterchangePipelineBase *)0x0) {
    UInterchangePipelineBase::UInterchangePipelineBase(this,param_1);
    this->_padding_ = (longlong)&___7UInterchangePythonPipelineBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterchangeSceneImportAsset> @ 14e4d4790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInterchangeSceneImportAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterchangeSceneImportAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UInterchangeSceneImportAsset::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UInterchangeSceneImportAsset::_vftable__for__IInterface_AssetUserData__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<UE::InterchangeTaskParsing::Private::FTaskData,int,FIdentityFunctor,TDereferenceWrapper<UE::InterchangeTaskParsing::Private::FTaskData,`UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>_>_> @ 14e4d4850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::InterchangeTaskParsing::Private::FTaskData,int,FIdentityFunctor,TDereferenceWrapper<UE::InterchangeTaskParsing::Private::FTaskData,_UE::Interchange::FTaskParsing::Execute_::__l24::<lambda_2>_>_>
          (FTaskData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::InterchangeTaskParsing::Private::FTaskData,_public:_virtual_void___cdecl_UE::Interchange::FTaskParsing::Execute(void)_::_24_::<lambda_2>_>
          param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  UClass *pUVar5;
  undefined8 uVar6;
  ForElementType<UInterchangeFactoryBaseNode_*> FVar7;
  FScriptContainerElement *pFVar8;
  ulong64 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined3 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined3 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  longlong lVar28;
  int iVar29;
  FTaskData *pFVar30;
  FTaskData *pFVar31;
  FTaskData *pFVar32;
  FTaskData **ppFVar33;
  int iVar34;
  FTaskData *pFVar35;
  FTaskData *pFVar36;
  FTaskData *pFVar37;
  float fVar38;
  undefined1 auStack_3a8 [48];
  FTaskData *local_378;
  FTaskData *local_368;
  FTaskData *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  if (1 < param_2) {
    local_360 = param_1 + (longlong)param_2 + -1;
    local_368 = param_1;
    fVar38 = logf((float)param_2 * (float)param_2);
    local_358 = (undefined4)(longlong)fVar38;
    memset(local_350,0,0x2e8);
    ppFVar33 = &local_368;
    do {
      pFVar37 = ppFVar33[1];
      pFVar36 = *ppFVar33;
      local_378 = ppFVar33[2];
      iVar29 = (int)(((longlong)pFVar37 - (longlong)pFVar36) / 0x60) + 1;
      pFVar35 = pFVar36;
      iVar34 = (int)local_378;
      if ((int)local_378 != 0) {
LAB_14e4d4940:
        if (8 < iVar29) {
          iVar13 = (pFVar35->UniqueID).Data.ArrayNum;
          iVar14 = (pFVar35->UniqueID).Data.ArrayMax;
          pFVar30 = pFVar37 + 1;
          pFVar36 = pFVar35 + iVar29 / 2;
          pFVar1 = (pFVar36->UniqueID).Data.AllocatorInstance.Data;
          iVar16 = (pFVar36->UniqueID).Data.ArrayNum;
          iVar17 = (pFVar36->UniqueID).Data.ArrayMax;
          iVar18 = pFVar36->SourceIndex;
          bVar19 = pFVar36->bIsSceneNode;
          uVar20 = *(undefined3 *)&pFVar36->field_0x15;
          pFVar2 = (pFVar36->Dependencies).AllocatorInstance.Data;
          iVar21 = (pFVar36->Dependencies).ArrayNum;
          iVar22 = (pFVar36->Dependencies).ArrayMax;
          uVar3 = pFVar36->GraphEventRef;
          pFVar4 = (pFVar36->Prerequisites).AllocatorInstance.Data;
          iVar23 = (pFVar36->Prerequisites).ArrayNum;
          iVar24 = (pFVar36->Prerequisites).ArrayMax;
          pUVar5 = pFVar36->FactoryClass;
          uVar6 = *(undefined8 *)(pFVar36->Nodes).AllocatorInstance.InlineData;
          FVar7 = (pFVar36->Nodes).AllocatorInstance.SecondaryData;
          iVar25 = (pFVar36->Nodes).ArrayNum;
          iVar26 = (pFVar36->Nodes).ArrayMax;
          (pFVar36->UniqueID).Data.AllocatorInstance.Data =
               (pFVar35->UniqueID).Data.AllocatorInstance.Data;
          (pFVar36->UniqueID).Data.ArrayNum = iVar13;
          (pFVar36->UniqueID).Data.ArrayMax = iVar14;
          bVar27 = pFVar35->bIsSceneNode;
          uVar15 = *(undefined3 *)&pFVar35->field_0x15;
          pFVar8 = (pFVar35->Dependencies).AllocatorInstance.Data;
          pFVar36->SourceIndex = pFVar35->SourceIndex;
          pFVar36->bIsSceneNode = bVar27;
          *(undefined3 *)&pFVar36->field_0x15 = uVar15;
          (pFVar36->Dependencies).AllocatorInstance.Data = pFVar8;
          iVar29 = (pFVar35->Dependencies).ArrayMax;
          uVar9 = pFVar35->GraphEventRef;
          (pFVar36->Dependencies).ArrayNum = (pFVar35->Dependencies).ArrayNum;
          (pFVar36->Dependencies).ArrayMax = iVar29;
          pFVar36->GraphEventRef = uVar9;
          iVar29 = (pFVar35->Prerequisites).ArrayNum;
          iVar13 = (pFVar35->Prerequisites).ArrayMax;
          (pFVar36->Prerequisites).AllocatorInstance.Data =
               (pFVar35->Prerequisites).AllocatorInstance.Data;
          (pFVar36->Prerequisites).ArrayNum = iVar29;
          (pFVar36->Prerequisites).ArrayMax = iVar13;
          uVar10 = *(undefined8 *)(pFVar35->Nodes).AllocatorInstance.InlineData;
          pFVar36->FactoryClass = pFVar35->FactoryClass;
          *(undefined8 *)(pFVar36->Nodes).AllocatorInstance.InlineData = uVar10;
          iVar29 = (pFVar35->Nodes).ArrayNum;
          iVar13 = (pFVar35->Nodes).ArrayMax;
          (pFVar36->Nodes).AllocatorInstance.SecondaryData =
               (pFVar35->Nodes).AllocatorInstance.SecondaryData;
          (pFVar36->Nodes).ArrayNum = iVar29;
          (pFVar36->Nodes).ArrayMax = iVar13;
          (pFVar35->UniqueID).Data.AllocatorInstance.Data = pFVar1;
          (pFVar35->UniqueID).Data.ArrayNum = iVar16;
          (pFVar35->UniqueID).Data.ArrayMax = iVar17;
          pFVar35->SourceIndex = iVar18;
          pFVar35->bIsSceneNode = bVar19;
          *(undefined3 *)&pFVar35->field_0x15 = uVar20;
          (pFVar35->Dependencies).AllocatorInstance.Data = pFVar2;
          (pFVar35->Dependencies).ArrayNum = iVar21;
          (pFVar35->Dependencies).ArrayMax = iVar22;
          pFVar35->GraphEventRef = uVar3;
          (pFVar35->Prerequisites).AllocatorInstance.Data = pFVar4;
          (pFVar35->Prerequisites).ArrayNum = iVar23;
          (pFVar35->Prerequisites).ArrayMax = iVar24;
          pFVar35->FactoryClass = pUVar5;
          *(undefined8 *)(pFVar35->Nodes).AllocatorInstance.InlineData = uVar6;
          (pFVar35->Nodes).AllocatorInstance.SecondaryData = FVar7;
          (pFVar35->Nodes).ArrayNum = iVar25;
          (pFVar35->Nodes).ArrayMax = iVar26;
          pFVar36 = pFVar35;
LAB_14e4d49d0:
          pFVar32 = pFVar36;
          pFVar36 = pFVar32 + 1;
          if (pFVar36 <= pFVar37) goto code_r0x00014e4d49d9;
          goto LAB_14e4d49f0;
        }
        for (; pFVar30 = pFVar35, pFVar36 = pFVar35, pFVar35 < pFVar37; pFVar37 = pFVar37 + -1) {
          while (pFVar32 = pFVar30, pFVar36 = pFVar36 + 1, pFVar36 <= pFVar37) {
            bVar27 = `UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>::operator()
                               (param_4.Predicate,pFVar32,pFVar36);
            pFVar30 = pFVar36;
            if (!bVar27) {
              pFVar30 = pFVar32;
            }
          }
          pFVar1 = (pFVar32->UniqueID).Data.AllocatorInstance.Data;
          iVar13 = (pFVar32->UniqueID).Data.ArrayNum;
          iVar14 = (pFVar32->UniqueID).Data.ArrayMax;
          iVar16 = pFVar32->SourceIndex;
          bVar19 = pFVar32->bIsSceneNode;
          uVar20 = *(undefined3 *)&pFVar32->field_0x15;
          pFVar2 = (pFVar32->Dependencies).AllocatorInstance.Data;
          iVar17 = (pFVar32->Dependencies).ArrayNum;
          iVar18 = (pFVar32->Dependencies).ArrayMax;
          uVar3 = pFVar32->GraphEventRef;
          iVar34 = (pFVar37->UniqueID).Data.ArrayNum;
          iVar29 = (pFVar37->UniqueID).Data.ArrayMax;
          pFVar4 = (pFVar32->Prerequisites).AllocatorInstance.Data;
          iVar21 = (pFVar32->Prerequisites).ArrayNum;
          iVar22 = (pFVar32->Prerequisites).ArrayMax;
          pUVar5 = pFVar32->FactoryClass;
          uVar6 = *(undefined8 *)(pFVar32->Nodes).AllocatorInstance.InlineData;
          FVar7 = (pFVar32->Nodes).AllocatorInstance.SecondaryData;
          iVar23 = (pFVar32->Nodes).ArrayNum;
          iVar24 = (pFVar32->Nodes).ArrayMax;
          (pFVar32->UniqueID).Data.AllocatorInstance.Data =
               (pFVar37->UniqueID).Data.AllocatorInstance.Data;
          (pFVar32->UniqueID).Data.ArrayNum = iVar34;
          (pFVar32->UniqueID).Data.ArrayMax = iVar29;
          bVar27 = pFVar37->bIsSceneNode;
          uVar15 = *(undefined3 *)&pFVar37->field_0x15;
          pFVar8 = (pFVar37->Dependencies).AllocatorInstance.Data;
          pFVar32->SourceIndex = pFVar37->SourceIndex;
          pFVar32->bIsSceneNode = bVar27;
          *(undefined3 *)&pFVar32->field_0x15 = uVar15;
          (pFVar32->Dependencies).AllocatorInstance.Data = pFVar8;
          iVar34 = (pFVar37->Dependencies).ArrayMax;
          uVar9 = pFVar37->GraphEventRef;
          (pFVar32->Dependencies).ArrayNum = (pFVar37->Dependencies).ArrayNum;
          (pFVar32->Dependencies).ArrayMax = iVar34;
          pFVar32->GraphEventRef = uVar9;
          iVar34 = (pFVar37->Prerequisites).ArrayNum;
          iVar29 = (pFVar37->Prerequisites).ArrayMax;
          (pFVar32->Prerequisites).AllocatorInstance.Data =
               (pFVar37->Prerequisites).AllocatorInstance.Data;
          (pFVar32->Prerequisites).ArrayNum = iVar34;
          (pFVar32->Prerequisites).ArrayMax = iVar29;
          uVar10 = *(undefined8 *)(pFVar37->Nodes).AllocatorInstance.InlineData;
          pFVar32->FactoryClass = pFVar37->FactoryClass;
          *(undefined8 *)(pFVar32->Nodes).AllocatorInstance.InlineData = uVar10;
          iVar34 = (pFVar37->Nodes).ArrayNum;
          iVar29 = (pFVar37->Nodes).ArrayMax;
          (pFVar32->Nodes).AllocatorInstance.SecondaryData =
               (pFVar37->Nodes).AllocatorInstance.SecondaryData;
          (pFVar32->Nodes).ArrayNum = iVar34;
          (pFVar32->Nodes).ArrayMax = iVar29;
          (pFVar37->UniqueID).Data.AllocatorInstance.Data = pFVar1;
          (pFVar37->UniqueID).Data.ArrayNum = iVar13;
          (pFVar37->UniqueID).Data.ArrayMax = iVar14;
          pFVar37->SourceIndex = iVar16;
          pFVar37->bIsSceneNode = bVar19;
          *(undefined3 *)&pFVar37->field_0x15 = uVar20;
          (pFVar37->Dependencies).AllocatorInstance.Data = pFVar2;
          (pFVar37->Dependencies).ArrayNum = iVar17;
          (pFVar37->Dependencies).ArrayMax = iVar18;
          pFVar37->GraphEventRef = uVar3;
          (pFVar37->Prerequisites).AllocatorInstance.Data = pFVar4;
          (pFVar37->Prerequisites).ArrayNum = iVar21;
          (pFVar37->Prerequisites).ArrayMax = iVar22;
          pFVar37->FactoryClass = pUVar5;
          *(undefined8 *)(pFVar37->Nodes).AllocatorInstance.InlineData = uVar6;
          (pFVar37->Nodes).AllocatorInstance.SecondaryData = FVar7;
          (pFVar37->Nodes).ArrayNum = iVar23;
          (pFVar37->Nodes).ArrayMax = iVar24;
        }
        goto LAB_14e4d4bb1;
      }
LAB_14e4d4b98:
      HeapSortInternal<UE::InterchangeTaskParsing::Private::FTaskData,int,FIdentityFunctor,TDereferenceWrapper<UE::InterchangeTaskParsing::Private::FTaskData,_UE::Interchange::FTaskParsing::Execute_::__l24::<lambda_2>_>_>
                (pFVar36,iVar29,param_3,param_4);
LAB_14e4d4bb1:
      ppFVar33 = ppFVar33 + -3;
    } while (&local_368 <= ppFVar33);
  }
  return;
code_r0x00014e4d49d9:
  bVar27 = `UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>::operator()
                     (param_4.Predicate,pFVar35,pFVar36);
  if (!bVar27) goto LAB_14e4d49d0;
LAB_14e4d49f0:
  do {
    pFVar31 = pFVar30;
    pFVar30 = pFVar31 + -1;
    if (pFVar30 <= pFVar35) break;
    bVar27 = `UE::Interchange::FTaskParsing::Execute'::__l24::<lambda_2>::operator()
                       (param_4.Predicate,pFVar30,pFVar35);
  } while (!bVar27);
  pFVar1 = (pFVar30->UniqueID).Data.AllocatorInstance.Data;
  uVar11 = pFVar31[-1].UniqueID.Data.ArrayNum;
  uVar12 = pFVar31[-1].UniqueID.Data.ArrayMax;
  if (pFVar36 <= pFVar30) {
    pFVar2 = (pFVar36->UniqueID).Data.AllocatorInstance.Data;
    iVar14 = pFVar32[1].UniqueID.Data.ArrayNum;
    iVar16 = pFVar32[1].UniqueID.Data.ArrayMax;
    iVar17 = pFVar32[1].SourceIndex;
    bVar19 = pFVar32[1].bIsSceneNode;
    uVar20 = *(undefined3 *)&pFVar32[1].field_0x15;
    pFVar4 = pFVar32[1].Dependencies.AllocatorInstance.Data;
    iVar18 = pFVar32[1].Dependencies.ArrayNum;
    iVar21 = pFVar32[1].Dependencies.ArrayMax;
    uVar3 = pFVar32[1].GraphEventRef;
    pFVar8 = pFVar32[1].Prerequisites.AllocatorInstance.Data;
    iVar22 = pFVar32[1].Prerequisites.ArrayNum;
    iVar23 = pFVar32[1].Prerequisites.ArrayMax;
    pUVar5 = pFVar32[1].FactoryClass;
    uVar6 = *(undefined8 *)pFVar32[1].Nodes.AllocatorInstance.InlineData;
    FVar7 = pFVar32[1].Nodes.AllocatorInstance.SecondaryData;
    iVar24 = pFVar32[1].Nodes.ArrayNum;
    iVar25 = pFVar32[1].Nodes.ArrayMax;
    (pFVar36->UniqueID).Data.AllocatorInstance.Data = pFVar1;
    pFVar32[1].UniqueID.Data.ArrayNum = uVar11;
    pFVar32[1].UniqueID.Data.ArrayMax = uVar12;
    bVar27 = pFVar31[-1].bIsSceneNode;
    uVar15 = *(undefined3 *)&pFVar31[-1].field_0x15;
    pFVar1 = pFVar31[-1].Dependencies.AllocatorInstance.Data;
    pFVar32[1].SourceIndex = pFVar31[-1].SourceIndex;
    pFVar32[1].bIsSceneNode = bVar27;
    *(undefined3 *)&pFVar32[1].field_0x15 = uVar15;
    pFVar32[1].Dependencies.AllocatorInstance.Data = pFVar1;
    iVar29 = pFVar31[-1].Dependencies.ArrayMax;
    uVar9 = pFVar31[-1].GraphEventRef;
    pFVar32[1].Dependencies.ArrayNum = pFVar31[-1].Dependencies.ArrayNum;
    pFVar32[1].Dependencies.ArrayMax = iVar29;
    pFVar32[1].GraphEventRef = uVar9;
    iVar29 = pFVar31[-1].Prerequisites.ArrayNum;
    iVar13 = pFVar31[-1].Prerequisites.ArrayMax;
    pFVar32[1].Prerequisites.AllocatorInstance.Data =
         pFVar31[-1].Prerequisites.AllocatorInstance.Data;
    pFVar32[1].Prerequisites.ArrayNum = iVar29;
    pFVar32[1].Prerequisites.ArrayMax = iVar13;
    uVar10 = *(undefined8 *)pFVar31[-1].Nodes.AllocatorInstance.InlineData;
    pFVar32[1].FactoryClass = pFVar31[-1].FactoryClass;
    *(undefined8 *)pFVar32[1].Nodes.AllocatorInstance.InlineData = uVar10;
    iVar29 = pFVar31[-1].Nodes.ArrayNum;
    iVar13 = pFVar31[-1].Nodes.ArrayMax;
    pFVar32[1].Nodes.AllocatorInstance.SecondaryData =
         pFVar31[-1].Nodes.AllocatorInstance.SecondaryData;
    pFVar32[1].Nodes.ArrayNum = iVar29;
    pFVar32[1].Nodes.ArrayMax = iVar13;
    (pFVar30->UniqueID).Data.AllocatorInstance.Data = pFVar2;
    pFVar31[-1].UniqueID.Data.ArrayNum = iVar14;
    pFVar31[-1].UniqueID.Data.ArrayMax = iVar16;
    pFVar31[-1].SourceIndex = iVar17;
    pFVar31[-1].bIsSceneNode = bVar19;
    *(undefined3 *)&pFVar31[-1].field_0x15 = uVar20;
    pFVar31[-1].Dependencies.AllocatorInstance.Data = pFVar4;
    pFVar31[-1].Dependencies.ArrayNum = iVar18;
    pFVar31[-1].Dependencies.ArrayMax = iVar21;
    pFVar31[-1].GraphEventRef = uVar3;
    pFVar31[-1].Prerequisites.AllocatorInstance.Data = pFVar8;
    pFVar31[-1].Prerequisites.ArrayNum = iVar22;
    pFVar31[-1].Prerequisites.ArrayMax = iVar23;
    pFVar31[-1].FactoryClass = pUVar5;
    *(undefined8 *)pFVar31[-1].Nodes.AllocatorInstance.InlineData = uVar6;
    pFVar31[-1].Nodes.AllocatorInstance.SecondaryData = FVar7;
    pFVar31[-1].Nodes.ArrayNum = iVar24;
    pFVar31[-1].Nodes.ArrayMax = iVar25;
    goto LAB_14e4d49d0;
  }
  pFVar2 = (pFVar35->UniqueID).Data.AllocatorInstance.Data;
  iVar14 = (pFVar35->UniqueID).Data.ArrayNum;
  iVar16 = (pFVar35->UniqueID).Data.ArrayMax;
  iVar17 = pFVar35->SourceIndex;
  bVar19 = pFVar35->bIsSceneNode;
  uVar20 = *(undefined3 *)&pFVar35->field_0x15;
  pFVar4 = (pFVar35->Dependencies).AllocatorInstance.Data;
  iVar18 = (pFVar35->Dependencies).ArrayNum;
  iVar21 = (pFVar35->Dependencies).ArrayMax;
  uVar3 = pFVar35->GraphEventRef;
  lVar28 = (longlong)pFVar30 + (-0x60 - (longlong)pFVar35);
  iVar34 = iVar34 + -1;
  pFVar8 = (pFVar35->Prerequisites).AllocatorInstance.Data;
  iVar22 = (pFVar35->Prerequisites).ArrayNum;
  iVar23 = (pFVar35->Prerequisites).ArrayMax;
  pUVar5 = pFVar35->FactoryClass;
  uVar6 = *(undefined8 *)(pFVar35->Nodes).AllocatorInstance.InlineData;
  FVar7 = (pFVar35->Nodes).AllocatorInstance.SecondaryData;
  iVar24 = (pFVar35->Nodes).ArrayNum;
  iVar25 = (pFVar35->Nodes).ArrayMax;
  (pFVar35->UniqueID).Data.AllocatorInstance.Data = pFVar1;
  (pFVar35->UniqueID).Data.ArrayNum = uVar11;
  (pFVar35->UniqueID).Data.ArrayMax = uVar12;
  bVar27 = pFVar31[-1].bIsSceneNode;
  uVar15 = *(undefined3 *)&pFVar31[-1].field_0x15;
  pFVar1 = pFVar31[-1].Dependencies.AllocatorInstance.Data;
  lVar28 = lVar28 / 6 + (lVar28 >> 0x3f);
  pFVar35->SourceIndex = pFVar31[-1].SourceIndex;
  pFVar35->bIsSceneNode = bVar27;
  *(undefined3 *)&pFVar35->field_0x15 = uVar15;
  (pFVar35->Dependencies).AllocatorInstance.Data = pFVar1;
  iVar29 = pFVar31[-1].Dependencies.ArrayMax;
  uVar9 = pFVar31[-1].GraphEventRef;
  (pFVar35->Dependencies).ArrayNum = pFVar31[-1].Dependencies.ArrayNum;
  (pFVar35->Dependencies).ArrayMax = iVar29;
  pFVar35->GraphEventRef = uVar9;
  iVar29 = pFVar31[-1].Prerequisites.ArrayNum;
  iVar13 = pFVar31[-1].Prerequisites.ArrayMax;
  (pFVar35->Prerequisites).AllocatorInstance.Data = pFVar31[-1].Prerequisites.AllocatorInstance.Data
  ;
  (pFVar35->Prerequisites).ArrayNum = iVar29;
  (pFVar35->Prerequisites).ArrayMax = iVar13;
  uVar10 = *(undefined8 *)pFVar31[-1].Nodes.AllocatorInstance.InlineData;
  pFVar35->FactoryClass = pFVar31[-1].FactoryClass;
  *(undefined8 *)(pFVar35->Nodes).AllocatorInstance.InlineData = uVar10;
  iVar29 = pFVar31[-1].Nodes.ArrayNum;
  iVar13 = pFVar31[-1].Nodes.ArrayMax;
  (pFVar35->Nodes).AllocatorInstance.SecondaryData =
       pFVar31[-1].Nodes.AllocatorInstance.SecondaryData;
  (pFVar35->Nodes).ArrayNum = iVar29;
  (pFVar35->Nodes).ArrayMax = iVar13;
  (pFVar30->UniqueID).Data.AllocatorInstance.Data = pFVar2;
  pFVar31[-1].UniqueID.Data.ArrayNum = iVar14;
  pFVar31[-1].UniqueID.Data.ArrayMax = iVar16;
  pFVar31[-1].SourceIndex = iVar17;
  pFVar31[-1].bIsSceneNode = bVar19;
  *(undefined3 *)&pFVar31[-1].field_0x15 = uVar20;
  pFVar31[-1].Dependencies.AllocatorInstance.Data = pFVar4;
  pFVar31[-1].Dependencies.ArrayNum = iVar18;
  pFVar31[-1].Dependencies.ArrayMax = iVar21;
  pFVar31[-1].GraphEventRef = uVar3;
  pFVar31[-1].Prerequisites.AllocatorInstance.Data = pFVar8;
  pFVar31[-1].Prerequisites.ArrayNum = iVar22;
  pFVar31[-1].Prerequisites.ArrayMax = iVar23;
  pFVar31[-1].FactoryClass = pUVar5;
  *(undefined8 *)pFVar31[-1].Nodes.AllocatorInstance.InlineData = uVar6;
  pFVar31[-1].Nodes.AllocatorInstance.SecondaryData = FVar7;
  pFVar31[-1].Nodes.ArrayNum = iVar24;
  pFVar31[-1].Nodes.ArrayMax = iVar25;
  if ((lVar28 >> 4) - (lVar28 >> 0x3f) < ((longlong)pFVar37 - (longlong)pFVar36) / 0x60) {
    if (pFVar36 < pFVar37) {
      *ppFVar33 = pFVar36;
      ppFVar33[1] = pFVar37;
      *(int *)(ppFVar33 + 2) = iVar34;
      ppFVar33 = ppFVar33 + 3;
    }
    if (pFVar30 <= pFVar35 + 1) goto LAB_14e4d4bb1;
    pFVar37 = pFVar31 + -2;
    pFVar36 = pFVar35;
  }
  else {
    if (pFVar35 + 1 < pFVar30) {
      *ppFVar33 = pFVar35;
      ppFVar33[1] = pFVar31 + -2;
      *(int *)(ppFVar33 + 2) = iVar34;
      ppFVar33 = ppFVar33 + 3;
    }
    if (pFVar37 <= pFVar36) goto LAB_14e4d4bb1;
  }
  iVar29 = (int)(((longlong)pFVar37 - (longlong)pFVar36) / 0x60) + 1;
  pFVar35 = pFVar36;
  if (iVar34 == 0) goto LAB_14e4d4b98;
  goto LAB_14e4d4940;
}

// MakeShared<TPromise<bool>,1> @ 14e4d4fd0

TSharedRef<TPromise<bool>,1> * __cdecl
MakeShared<TPromise<bool>,1>(TSharedRef<TPromise<bool>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FEvent *pFVar5;
  TSharedRef<TPromise<bool>,1> *pTVar6;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (TPromise<bool> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TPromise__N___00_SharedPointerInternals__6B_;
    pTVar4 = operator_new(0x90);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      pTVar3[1]._padding_ = 0x10;
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_;
      pTVar4[1]._padding_ = 0;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[2]._padding_ = 0;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[3]._padding_ = 0;
      pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[4]._padding_ = 0;
      pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[5]._padding_ = 0;
      pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[6]._padding_ = 0;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar4 + 1),4000);
      pTVar4[4]._padding_ = 0;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(true);
      pTVar4[7]._padding_ = (longlong)pFVar5;
      *(undefined1 *)&pTVar4[7].SharedReferenceCount = 0;
      if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TSharedRef<TPromise<bool>,1> *)(*pcVar1)();
          return pTVar6;
        }
      }
      pTVar3[1]._padding_ = (longlong)(pTVar4 + 1);
      *(TReferenceControllerBase<1> **)&pTVar3[1].SharedReferenceCount = pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    *(undefined1 *)&pTVar3[2]._padding_ = 0;
    __return_storage_ptr__->Object = (TPromise<bool> *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TPromise<bool> *)(pTVar3 + 1) == (TPromise<bool> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<TPromise<bool>,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Interchange::FImportResult,1> @ 14e4d5170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<UE::Interchange::FImportResult,1> * __cdecl
MakeShared<UE::Interchange::FImportResult,1>
          (TSharedRef<UE::Interchange::FImportResult,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  UPackage *pUVar4;
  UInterchangeResultsContainer *pUVar5;
  TSharedRef<UE::Interchange::FImportResult,1> *pTVar6;
  
  pTVar3 = operator_new(0xf0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FImportResult *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImportResult_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FGCObject__6B_;
    *(undefined2 *)&pTVar3[1].SharedReferenceCount = 0;
    FGCObject::RegisterGCObject((FGCObject *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&___7FImportResult_Interchange_UE__6B_;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[9]._padding_ = 0;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb]._padding_ = 0;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pUVar4 = GetTransientPackage();
    pUVar5 = NewObject<UInterchangeResultsContainer>((UObject *)pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UInterchangeResultsContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pTVar3[10]._padding_ = (longlong)pUVar5;
    __return_storage_ptr__->Object = (FImportResult *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FImportResult *)(pTVar3 + 1) == (FImportResult *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<UE::Interchange::FImportResult,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Interchange::FTaskImportObjectFinalize_GameThread,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&> @ 14e4d52f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<UE::Interchange::FTaskImportObjectFinalize_GameThread,1> * __cdecl
MakeShared<UE::Interchange::FTaskImportObjectFinalize_GameThread,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&>
          (TSharedRef<UE::Interchange::FTaskImportObjectFinalize_GameThread,1>
           *__return_storage_ptr__,FString *param_1,int *param_2,
          TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_3,
          UInterchangeFactoryBaseNode **param_4)

{
  atomic<int> aVar1;
  int iVar2;
  UInterchangeFactoryBaseNode *pUVar3;
  FImportAsyncHelper *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<UE::Interchange::FTaskImportObjectFinalize_GameThread,1> *pTVar9;
  atomic<int> *paVar10;
  
  pTVar8 = operator_new(0xa8);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTaskImportObjectFinalize_GameThread *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTaskImportObjectFinalize_GameThread_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    pUVar3 = *param_4;
    pFVar4 = param_3->Object;
    pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      paVar10 = &pTVar5->WeakReferenceCount;
    }
    iVar2 = *param_2;
    pTVar8[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar8[1].SharedReferenceCount,4000);
    *(undefined1 *)&pTVar8[4].SharedReferenceCount = 0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[1]._padding_ = (longlong)&___7FTaskImportObjectFinalize_GameThread_Interchange_UE__6B_;
    pTVar8[4]._padding_ = -1;
    FString::FString((FString *)(pTVar8 + 7),param_1);
    *(FImportAsyncHelper **)&pTVar8[8].SharedReferenceCount = pFVar4;
    *(int *)&pTVar8[8]._padding_ = iVar2;
    pTVar8[9]._padding_ = (longlong)pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    *(UInterchangeFactoryBaseNode **)&pTVar8[9].SharedReferenceCount = pUVar3;
    if (pUVar3 == (UInterchangeFactoryBaseNode *)0x0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("FactoryNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.h"
                         ,0x62,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TSharedRef<UE::Interchange::FTaskImportObjectFinalize_GameThread,1> *)(*pcVar6)();
        return pTVar9;
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar5->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    __return_storage_ptr__->Object = (FTaskImportObjectFinalize_GameThread *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    if ((FTaskImportObjectFinalize_GameThread *)(pTVar8 + 1) ==
        (FTaskImportObjectFinalize_GameThread *)0x0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TSharedRef<UE::Interchange::FTaskImportObjectFinalize_GameThread,1> *)(*pcVar6)();
        return pTVar9;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Interchange::FTaskImportObject_Async,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&> @ 14e4d54c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<UE::Interchange::FTaskImportObject_Async,1> * __cdecl
MakeShared<UE::Interchange::FTaskImportObject_Async,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&>
          (TSharedRef<UE::Interchange::FTaskImportObject_Async,1> *__return_storage_ptr__,
          FString *param_1,int *param_2,TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_3,
          UInterchangeFactoryBaseNode **param_4)

{
  atomic<int> aVar1;
  int iVar2;
  UInterchangeFactoryBaseNode *pUVar3;
  FImportAsyncHelper *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<UE::Interchange::FTaskImportObject_Async,1> *pTVar9;
  atomic<int> *paVar10;
  
  pTVar8 = operator_new(0xa0);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTaskImportObject_Async *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTaskImportObject_Async_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    pUVar3 = *param_4;
    pFVar4 = param_3->Object;
    pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      paVar10 = &pTVar5->WeakReferenceCount;
    }
    iVar2 = *param_2;
    pTVar8[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar8[1].SharedReferenceCount,4000);
    *(undefined1 *)&pTVar8[4].SharedReferenceCount = 0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[1]._padding_ = (longlong)&___7FTaskImportObject_Async_Interchange_UE__6B_;
    pTVar8[4]._padding_ = -1;
    FString::FString((FString *)(pTVar8 + 7),param_1);
    *(FImportAsyncHelper **)&pTVar8[8].SharedReferenceCount = pFVar4;
    *(int *)&pTVar8[8]._padding_ = iVar2;
    pTVar8[9]._padding_ = (longlong)pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    *(UInterchangeFactoryBaseNode **)&pTVar8[9].SharedReferenceCount = pUVar3;
    if (pUVar3 == (UInterchangeFactoryBaseNode *)0x0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("FactoryNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.h"
                         ,0x3e,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TSharedRef<UE::Interchange::FTaskImportObject_Async,1> *)(*pcVar6)();
        return pTVar9;
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar5->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    __return_storage_ptr__->Object = (FTaskImportObject_Async *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    if ((FTaskImportObject_Async *)(pTVar8 + 1) == (FTaskImportObject_Async *)0x0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TSharedRef<UE::Interchange::FTaskImportObject_Async,1> *)(*pcVar6)();
        return pTVar9;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Interchange::FTaskImportObject_GameThread,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&,UClass_const_*_const_&> @ 14e4d5690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<UE::Interchange::FTaskImportObject_GameThread,1> * __cdecl
MakeShared<UE::Interchange::FTaskImportObject_GameThread,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&,UClass_const_*_const_&>
          (TSharedRef<UE::Interchange::FTaskImportObject_GameThread,1> *__return_storage_ptr__,
          FString *param_1,int *param_2,TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_3,
          UInterchangeFactoryBaseNode **param_4,UClass **param_5)

{
  atomic<int> aVar1;
  int iVar2;
  UClass *pUVar3;
  UInterchangeFactoryBaseNode *pUVar4;
  FImportAsyncHelper *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<UE::Interchange::FTaskImportObject_GameThread,1> *pTVar10;
  atomic<int> *paVar11;
  
  pTVar9 = operator_new(0xa8);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTaskImportObject_GameThread *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTaskImportObject_GameThread_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    pUVar3 = *param_5;
    pUVar4 = *param_4;
    pFVar5 = param_3->Object;
    pTVar6 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar11 = &pTVar6->WeakReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    iVar2 = *param_2;
    pTVar9[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar9[1].SharedReferenceCount,4000);
    *(undefined1 *)&pTVar9[4].SharedReferenceCount = 0;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[1]._padding_ = (longlong)&___7FTaskImportObject_GameThread_Interchange_UE__6B_;
    pTVar9[4]._padding_ = -1;
    FString::FString((FString *)(pTVar9 + 7),param_1);
    *(FImportAsyncHelper **)&pTVar9[8].SharedReferenceCount = pFVar5;
    *(int *)&pTVar9[8]._padding_ = iVar2;
    pTVar9[9]._padding_ = (longlong)pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    *(UInterchangeFactoryBaseNode **)&pTVar9[9].SharedReferenceCount = pUVar4;
    pTVar9[10]._padding_ = (longlong)pUVar3;
    if (pUVar4 == (UInterchangeFactoryBaseNode *)0x0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("FactoryNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.h"
                         ,0x23,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedRef<UE::Interchange::FTaskImportObject_GameThread,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
    if (pTVar9[10]._padding_ == 0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("FactoryClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.h"
                         ,0x24,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedRef<UE::Interchange::FTaskImportObject_GameThread,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar11 = &pTVar6->WeakReferenceCount;
      aVar1 = *paVar11;
      *paVar11 = (atomic<int>)((int)*paVar11 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    __return_storage_ptr__->Object = (FTaskImportObject_GameThread *)(pTVar9 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if ((FTaskImportObject_GameThread *)(pTVar9 + 1) == (FTaskImportObject_GameThread *)0x0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedRef<UE::Interchange::FTaskImportObject_GameThread,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UInterchangeAssetImportData> @ 14e4d58a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAssetImportData * __cdecl
NewObject<UInterchangeAssetImportData>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeAssetImportData *pUVar2;
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
  pUVar1 = UInterchangeAssetImportData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeAssetImportData *)
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

// NewObject<UInterchangeBaseNodeContainer> @ 14e4d5990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeBaseNodeContainer * __cdecl
NewObject<UInterchangeBaseNodeContainer>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeBaseNodeContainer *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeBaseNodeContainer *)
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

// NewObject<UInterchangeEditorUtilitiesBase> @ 14e4d5a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeEditorUtilitiesBase * __cdecl
NewObject<UInterchangeEditorUtilitiesBase>
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
  pUVar1 = UInterchangeEditorUtilitiesBase::StaticClass();
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
  return (UInterchangeEditorUtilitiesBase *)pUVar2;
}

// NewObject<UInterchangeFactoryBase> @ 14e4d5b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeFactoryBase * __cdecl
NewObject<UInterchangeFactoryBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangeFactoryBase *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeFactoryBase_NoRegister();
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
  pUVar2 = (UInterchangeFactoryBase *)
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

// NewObject<UInterchangeManager> @ 14e4d5c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeManager * __cdecl
NewObject<UInterchangeManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeManager *pUVar2;
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
  pUVar1 = UInterchangeManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeManager *)
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

// NewObject<UInterchangePipelineBase> @ 14e4d5d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangePipelineBase * __cdecl
NewObject<UInterchangePipelineBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangePipelineBase *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
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
  pUVar2 = (UInterchangePipelineBase *)
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

// NewObject<UInterchangePythonPipelineAsset> @ 14e4d5e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangePythonPipelineAsset * __cdecl
NewObject<UInterchangePythonPipelineAsset>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangePythonPipelineAsset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UInterchangePythonPipelineAsset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangePythonPipelineAsset *)
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

// NewObject<UInterchangePythonPipelineBase> @ 14e4d5f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangePythonPipelineBase * __cdecl
NewObject<UInterchangePythonPipelineBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangePythonPipelineBase *pUVar2;
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
  pUVar1 = UInterchangePythonPipelineBase::StaticClass();
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
  pUVar2 = (UInterchangePythonPipelineBase *)
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

// NewObject<UInterchangeResultDisplay_Generic> @ 14e4d6010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultDisplay_Generic * __cdecl
NewObject<UInterchangeResultDisplay_Generic>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangeResultDisplay_Generic *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeResultDisplay_Generic_NoRegister();
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
  pUVar2 = (UInterchangeResultDisplay_Generic *)
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

// NewObject<UInterchangeResultError_Generic> @ 14e4d6110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultError_Generic * __cdecl
NewObject<UInterchangeResultError_Generic>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeResultError_Generic *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeResultError_Generic *)
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

// NewObject<UInterchangeResultError_Generic> @ 14e4d61b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultError_Generic * __cdecl
NewObject<UInterchangeResultError_Generic>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangeResultError_Generic *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister();
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
  pUVar2 = (UInterchangeResultError_Generic *)
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

// NewObject<UInterchangeResultSuccess> @ 14e4d62b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultSuccess * __cdecl NewObject<UInterchangeResultSuccess>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeResultSuccess *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeResultSuccess_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeResultSuccess *)
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

// NewObject<UInterchangeResultWarning_Generic> @ 14e4d6350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultWarning_Generic * __cdecl
NewObject<UInterchangeResultWarning_Generic>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeResultWarning_Generic *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeResultWarning_Generic *)
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

// NewObject<UInterchangeResultWarning_Generic> @ 14e4d63f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultWarning_Generic * __cdecl
NewObject<UInterchangeResultWarning_Generic>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangeResultWarning_Generic *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister();
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
  pUVar2 = (UInterchangeResultWarning_Generic *)
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

// NewObject<UInterchangeResultsContainer> @ 14e4d64f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeResultsContainer * __cdecl NewObject<UInterchangeResultsContainer>(UObject *param_1)

{
  UClass *pUVar1;
  UInterchangeResultsContainer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInterchangeResultsContainer *)
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

// NewObject<UInterchangeSourceData> @ 14e4d6590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSourceData * __cdecl
NewObject<UInterchangeSourceData>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UInterchangeSourceData *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeSourceData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UInterchangeSourceData *)
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

// NewObject<UInterchangeTranslatorBase> @ 14e4d6680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeTranslatorBase * __cdecl
NewObject<UInterchangeTranslatorBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInterchangeTranslatorBase *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
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
  pUVar2 = (UInterchangeTranslatorBase *)
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

// NewObject<UInterchangeTranslatorSettings> @ 14e4d6780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeTranslatorSettings * __cdecl
NewObject<UInterchangeTranslatorSettings>
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
  pUVar1 = Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister();
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
  return (UInterchangeTranslatorSettings *)pUVar2;
}

// ObjectPtrDecay<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>,TArray<UObject_*,TSizedDefaultAllocator<32>_>_> @ 14e4d6880

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrDecay<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// StaticEnum<enum_EInterchangePipelineConfigurationDialogResult> @ 14e4d6dc0

UEnum * __cdecl StaticEnum<enum_EInterchangePipelineConfigurationDialogResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult
                       ,(UObject *)pUVar1,L"EInterchangePipelineConfigurationDialogResult");
  }
  return Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_UE::Interchange::FImportResult::EStatus>_> @ 14e4d6ea0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_UE::Interchange::FImportResult::EStatus>_>
          (_Atomic_padded<UE::Interchange::FImportResult::EStatus> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<enum_UE::Interchange::FImportResult::EStatus>_> @ 14e4d6eb0

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<enum_UE::Interchange::FImportResult::EStatus>_>
          (_Atomic_padded<UE::Interchange::FImportResult::EStatus> *param_1)

{
  return (long *)param_1;
}

// _Atomic_reinterpret_as<long,enum_UE::Interchange::FImportResult::EStatus> @ 14e4d6ec0

long __cdecl
std::_Atomic_reinterpret_as<long,enum_UE::Interchange::FImportResult::EStatus>(EStatus *param_1)

{
  return *param_1;
}

// ~<lambda_1> @ 14e4d9200

void __thiscall
`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014e4d9267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>,0,0> @ 14e4d9280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>,0,0> @ 14e4d92a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>,0,0> @ 14e4d92c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Interchange::FTaskImportObject_Async::Execute_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,0,1> @ 14e4d92e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskPostImport_GameThread::Execute_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,0,1> @ 14e4d9300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskPreCompletion_GameThread::Execute_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,0,0> @ 14e4d9320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FImportAsyncHelper::IsImportingObject_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 14e4d9340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UE::Interchange::FImportResult::AddImportedObject_::__l8::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::`8'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>,1,1> @ 14e4d9360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UE::Interchange::FImportResult::AddImportedObject_::__l8::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x28));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::__l8::<lambda_1>,1,0> @ 14e4d93b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UInterchangeManager::SetActiveMode_::__l8::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::`8'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>,0,0> @ 14e4d93d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskCompletion_GameThread::Execute_::__l19::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`19'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>,0,0> @ 14e4d93f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskCompletion_GameThread::Execute_::__l19::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`19'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l28::<lambda_2>,0,0> @ 14e4d9410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l28::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute_::__l28::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::`28'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l50::<lambda_2>,0,0> @ 14e4d9430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l50::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute_::__l50::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::`50'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>,0,0> @ 14e4d9450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskCompletion_GameThread::Execute_::__l21::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`21'::<lambda_3>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>,0,0> @ 14e4d9470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_UE::Interchange::FTaskCompletion_GameThread::Execute_::__l21::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`21'::<lambda_4>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// `vector_deleting_destructor'`adjustor{80}' @ 14e4e005c

/* [thunk]:public: virtual void * __ptr64 __cdecl UInterchangeBlueprintPipelineBase::`vector
   deleting destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeBlueprintPipelineBase::_vector_deleting_destructor__adjustor_80__
          (UInterchangeBlueprintPipelineBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInterchangeBlueprintPipelineBase *)&this[-1].field_0x58,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14e4e006c

/* [thunk]:private: virtual void * __ptr64 __cdecl UInterchangeSceneImportAsset::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UInterchangeSceneImportAsset::_vector_deleting_destructor__adjustor_40__
          (UInterchangeSceneImportAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UInterchangeSceneImportAsset *)&this[-1].field_0x8,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14e4e0080

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInterchangeManager::GetInterchangeManager'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e00b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInterchangeManager::GetInterchangeManager'::__l5::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e00e0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UInterchangeManager::EnqueuePostImportTask'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e01d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UE::Interchange::FImportResult::AddImportedObject'::`8'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e02e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FImportResult::AddImportedObject'::`8'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x28));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::`8'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e03a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`19'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e03f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l19::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`19'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::__l28::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskImportObjectFinalize_GameThread::Execute'::`28'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::__l50::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCreateSceneObjects_GameThread::Execute'::`50'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e04c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`21'::<lambda_3>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::__l21::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FTaskCompletion_GameThread::Execute'::`21'::<lambda_4>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0560

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FAnalyticsHelper,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FAnalyticsHelper,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e05a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TPromise<bool>,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<TPromise<bool>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e05e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAsyncTaskNotification,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAsyncTaskNotification,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0620

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FImportAsyncHelper,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FImportAsyncHelper,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0660

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FImportResult,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FImportResult,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e06a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskCompletion_GameThread,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskCompletion_GameThread,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e06e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0720

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskImportObjectFinalize_GameThread,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskImportObjectFinalize_GameThread,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0760

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskImportObject_Async,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskImportObject_Async,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e07a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskImportObject_GameThread,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskImportObject_GameThread,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e07e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskParsing,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskParsing,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0820

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskPipeline,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskPipeline,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0860

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskPostImport_GameThread,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskPostImport_GameThread,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e08a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskPreCompletion_GameThread,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskPreCompletion_GameThread,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e08e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTaskTranslator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskTranslator,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0920

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FTaskWaitAssetCompilation_GameThread,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTaskWaitAssetCompilation_GameThread,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0960

void * __thiscall
UE::Interchange::Private::FAnalyticsJsonWriter::_scalar_deleting_destructor_
          (FAnalyticsJsonWriter *this,uint param_1)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
  ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>
            ((TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e09a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FImportAsyncHelper::_scalar_deleting_destructor_
          (FImportAsyncHelper *this,uint param_1)

{
  ~FImportAsyncHelper(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x428);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e09e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FImportResult::_scalar_deleting_destructor_(FImportResult *this,uint param_1)

{
  ~FImportResult(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0a20

void * __thiscall
FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask::_scalar_deleting_destructor_
          (FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask__6B_;
  pFVar1 = (this->ReImportAlternateSkinWeightsLods).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReimportAlternateSkinWeightDelegate
            );
  pvVar2 = *(void **)&(this->ReimportAlternateSkinWeightDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReimportAlternateSkinWeightDelegate);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0aa0

void * __thiscall
UE::Interchange::FInterchangeTaskBase::_scalar_deleting_destructor_
          (FInterchangeTaskBase *this,uint param_1)

{
  ~FInterchangeTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskCompletion_GameThread::_scalar_deleting_destructor_
          (FTaskCompletion_GameThread *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskCreateSceneObjects_GameThread::_scalar_deleting_destructor_
          (FTaskCreateSceneObjects_GameThread *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pFVar3 = (this->FactoryNodes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pFVar3 = (this->PackageBasePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskImportObjectFinalize_GameThread::_scalar_deleting_destructor_
          (FTaskImportObjectFinalize_GameThread *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  pFVar4 = (this->PackageBasePath).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskImportObject_Async::_scalar_deleting_destructor_
          (FTaskImportObject_Async *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  pFVar4 = (this->PackageBasePath).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskImportObject_GameThread::_scalar_deleting_destructor_
          (FTaskImportObject_GameThread *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  pFVar4 = (this->PackageBasePath).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskParsing::_scalar_deleting_destructor_(FTaskParsing *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskPipeline::_scalar_deleting_destructor_(FTaskPipeline *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskPostImport_GameThread::_scalar_deleting_destructor_
          (FTaskPostImport_GameThread *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskPreCompletion_GameThread::_scalar_deleting_destructor_
          (FTaskPreCompletion_GameThread *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskTranslator::_scalar_deleting_destructor_(FTaskTranslator *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e0f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Interchange::FTaskWaitAssetCompilation_GameThread::_scalar_deleting_destructor_
          (FTaskWaitAssetCompilation_GameThread *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
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
  FInterchangeTaskBase::~FInterchangeTaskBase((FInterchangeTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e1000

void * __thiscall
UInterchangeAssetImportData::_scalar_deleting_destructor_
          (UInterchangeAssetImportData *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeAssetImportData__6B_;
  pvVar1 = *(void **)&(this->CachedTranslatorSettings).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->CachedTranslatorSettings != (void *)0x0) {
    FMemory::Free(*(void **)&this->CachedTranslatorSettings);
  }
  pFVar2 = (this->CachedCustomVersions).Versions.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)(this->CachedPipelines).AllocatorInstance.Data,
             (this->CachedPipelines).ArrayNum);
  pFVar2 = (this->CachedPipelines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CachedNodeContainer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TransientPipelines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Pipelines_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NodeUniqueID).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SceneImportAsset).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e1100

void * __thiscall
UInterchangeAssetImportDataConverterBase::_scalar_deleting_destructor_
          (UInterchangeAssetImportDataConverterBase *this,uint param_1)

{
  *(undefined ***)this = &___7UInterchangeAssetImportDataConverterBase__6B_;
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

// `scalar_deleting_destructor' @ 14e4e1160

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
UInterchangeBlueprintPipelineBase::_scalar_deleting_destructor_
          (UInterchangeBlueprintPipelineBase *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UBlueprintCore__;
  *(undefined ***)&this->field_0x50 = &_vftable__for__IBlueprintPropertyGuidProvider__;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e11d0

void * __thiscall
UInterchangeEditorSettings::_scalar_deleting_destructor_
          (UInterchangeEditorSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UInterchangeEditorSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e1230

void * __thiscall
UInterchangeEditorUtilitiesBase::_scalar_deleting_destructor_
          (UInterchangeEditorUtilitiesBase *this,uint param_1)

{
  *(undefined ***)this = &___7UInterchangeEditorUtilitiesBase__6B_;
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

// `scalar_deleting_destructor' @ 14e4e1290

void * __thiscall
UInterchangeFilePickerBase::_scalar_deleting_destructor_
          (UInterchangeFilePickerBase *this,uint param_1)

{
  *(undefined ***)this = &___7UInterchangeFilePickerBase__6B_;
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

// `scalar_deleting_destructor' @ 14e4e12f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UInterchangeManager::_scalar_deleting_destructor_(UInterchangeManager *this,uint param_1)

{
  ~UInterchangeManager(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e1350

void * __thiscall
UInterchangeMeshUtilities::_scalar_deleting_destructor_
          (UInterchangeMeshUtilities *this,uint param_1)

{
  *(undefined ***)this = &___7UInterchangeMeshUtilities__6B_;
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

// `scalar_deleting_destructor' @ 14e4e13b0

void * __thiscall
UInterchangePipelineConfigurationBase::_scalar_deleting_destructor_
          (UInterchangePipelineConfigurationBase *this,uint param_1)

{
  *(undefined ***)this = &___7UInterchangePipelineConfigurationBase__6B_;
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

// `scalar_deleting_destructor' @ 14e4e1410

void * __thiscall
UInterchangePipelineStackOverride::_scalar_deleting_destructor_
          (UInterchangePipelineStackOverride *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangePipelineStackOverride__6B_;
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->OverridePipelines).AllocatorInstance.Data,
             (this->OverridePipelines).ArrayNum);
  pFVar1 = (this->OverridePipelines).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14e4e1490

void * __thiscall
UInterchangeProjectSettings::_scalar_deleting_destructor_
          (UInterchangeProjectSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeProjectSettings__6B_;
  DestructItems<FInterchangeGroup,int>
            ((FInterchangeGroup *)(this->InterchangeGroups).AllocatorInstance.Data,
             (this->InterchangeGroups).ArrayNum);
  pFVar1 = (this->InterchangeGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConverterDefaultPipeline).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GenericPipelineClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->FilePickerClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FInterchangePerTranslatorDialogOverride,int>
            ((FInterchangePerTranslatorDialogOverride *)
             (this->SceneImportSettings).PerTranslatorDialogOverride.AllocatorInstance.Data,
             (this->SceneImportSettings).PerTranslatorDialogOverride.ArrayNum);
  pFVar1 = (this->SceneImportSettings).PerTranslatorDialogOverride.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->SceneImportSettings)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->SceneImportSettings)._padding_ = 0;
  pvVar2 = (void *)(this->SceneImportSettings)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SceneImportSettings);
  FInterchangeContentImportSettings::~FInterchangeContentImportSettings
            (&this->ContentImportSettings);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e15c0

void * __thiscall
UInterchangeProjectSettingsScript::_scalar_deleting_destructor_
          (UInterchangeProjectSettingsScript *this,uint param_1)

{
  *(undefined ***)this = &___7UInterchangeProjectSettingsScript__6B_;
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

// `scalar_deleting_destructor' @ 14e4e1620

void * __thiscall
UInterchangePythonPipelineAsset::_scalar_deleting_destructor_
          (UInterchangePythonPipelineAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangePythonPipelineAsset__6B_;
  pFVar1 = (this->JsonDefaultProperties).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->PythonClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
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

// `scalar_deleting_destructor' @ 14e4e16a0

void * __thiscall
UInterchangePythonPipelineBase::_scalar_deleting_destructor_
          (UInterchangePythonPipelineBase *this,uint param_1)

{
  *(undefined ***)this = &___7UInterchangePythonPipelineBase__6B_;
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e4e1700

void * __thiscall
UInterchangeSceneImportAsset::_scalar_deleting_destructor_
          (UInterchangeSceneImportAsset *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IInterface_AssetUserData__6B_;
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

// DeSerializePipeline @ 14e4e9230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl DeSerializePipeline(FString *param_1,UClass *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  UInterchangePipelineBase *this;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  UObject *pUVar10;
  TSharedPtr<FJsonObject,1> *pTVar11;
  longlong *plVar12;
  undefined1 auStackY_198 [32];
  StackState local_148;
  TSharedRef<FJsonObject,1> local_110;
  TSharedPtr<FJsonObject,1> local_100;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_d8;
  TStringView<wchar_t> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar7 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UObject_NoRegister();
  CheckIsClassChildOf_Internal(pUVar8,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,param_2);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar7;
  this = (UInterchangePipelineBase *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  local_100.Object = (FJsonObject *)0x0;
  local_100.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = TJsonStringReader<wchar_t>::Create(&local_d8,param_1);
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  pTVar3 = pTVar9->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  local_148.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Identifier.Data.ArrayNum = 0;
  local_148.Identifier.Data.ArrayMax = 0;
  local_148.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Array.ArrayNum = 0;
  local_148.Array.ArrayMax = 0;
  local_148.Object.Object = (FJsonObject *)0x0;
  local_148.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar3,&local_148,None);
  if (bVar6) {
    bVar6 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_148,&local_100);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_148.Array.AllocatorInstance.Data,
               local_148.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_148.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_148.Array.AllocatorInstance.Data);
    }
    if (local_148.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      if ((local_100.Object == (FJsonObject *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar10 = (UObject *)(*pcVar5)();
        return pUVar10;
      }
      local_e8 = L"GeneratedPipeline";
      uStack_e0 = 0x11;
      local_c8._12_4_ = uStack_dc;
      local_c8.Size = 0x11;
      local_c8.DataPtr = L"GeneratedPipeline";
      pTVar11 = FJsonObject::GetObjectField(local_100.Object,&local_c8);
      pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
      local_110.Object = pTVar11->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_110.Object == (FJsonObject *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar10 = (UObject *)(*pcVar5)();
        return pUVar10;
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_110.SharedReferenceCount.ReferenceController = pTVar4;
      if ((local_110.Object == (FJsonObject *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar10 = (UObject *)(*pcVar5)();
        return pUVar10;
      }
      FJsonObjectConverter::JsonObjectToUStruct
                (&local_110,(UStruct *)param_2,this,0,0,false,(FText *)0x0,
                 (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                  *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_148.Array.AllocatorInstance.Data,
               local_148.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_148.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_148.Array.AllocatorInstance.Data);
    }
    if (local_148.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Identifier.Data.AllocatorInstance.Data);
    }
  }
  if (this != (UInterchangePipelineBase *)0x0) {
    pUVar8 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      pUVar8 = UInterchangePythonPipelineAsset::StaticClass();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
          == &pUVar8->_padding_)) {
        UInterchangePythonPipelineAsset::GeneratePipeline((UInterchangePythonPipelineAsset *)this);
      }
    }
    else {
      UInterchangePipelineBase::UpdateWeakObjectPtrs(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  return (UObject *)this;
}

// DeSerializeTranslatorSettings @ 14e4e9580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl DeSerializeTranslatorSettings(FString *param_1,UClass *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FUObjectItem *this;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  TSharedPtr<FJsonObject,1> *pTVar10;
  longlong *plVar11;
  undefined1 auStackY_188 [32];
  StackState local_140;
  TSharedRef<FJsonObject,1> local_108;
  TSharedPtr<FJsonObject,1> local_f8;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_d8;
  TStringView<wchar_t> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar6 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister();
  CheckIsClassChildOf_Internal(pUVar7,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,param_2);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar6;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar11 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar8->field_0xc);
  FUObjectItem::ClearRootFlags(this,Async);
  local_f8.Object = (FJsonObject *)0x0;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = TJsonStringReader<wchar_t>::Create(&local_d8,param_1);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar9->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  local_140.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Identifier.Data.ArrayNum = 0;
  local_140.Identifier.Data.ArrayMax = 0;
  local_140.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Array.ArrayNum = 0;
  local_140.Array.ArrayMax = 0;
  local_140.Object.Object = (FJsonObject *)0x0;
  local_140.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_140,None);
  if (bVar5) {
    bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_140,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_140.Array.AllocatorInstance.Data,
               local_140.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_140.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_140.Array.AllocatorInstance.Data);
    }
    if (local_140.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      if ((local_f8.Object == (FJsonObject *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar4)();
        return pUVar8;
      }
      local_e8 = L"GeneratedTranslatorSettings";
      uStack_e0 = 0x1b;
      local_c8._12_4_ = uStack_dc;
      local_c8.Size = 0x1b;
      local_c8.DataPtr = L"GeneratedTranslatorSettings";
      pTVar10 = FJsonObject::GetObjectField(local_f8.Object,&local_c8);
      pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
      local_108.Object = pTVar10->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_108.Object == (FJsonObject *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar4)();
        return pUVar8;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108.SharedReferenceCount.ReferenceController = pTVar3;
      if ((local_108.Object == (FJsonObject *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar4)();
        return pUVar8;
      }
      FJsonObjectConverter::JsonObjectToUStruct
                (&local_108,(UStruct *)param_2,pUVar8,0,0,false,(FText *)0x0,
                 (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                  *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_140.Array.AllocatorInstance.Data,
               local_140.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_140.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_140.Array.AllocatorInstance.Data);
    }
    if (local_140.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Identifier.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  return pUVar8;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeAssetImportData @ 14e4eaf00

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeAssetImportData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeBlueprintPipelineBase @ 14e4eaf10

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeBlueprintPipelineBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeEditorUtilitiesBase @ 14e4eaf20

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeEditorUtilitiesBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeEngine_init @ 14e4eaf30

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeEngine_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeFilePickerBase @ 14e4eaf40

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeFilePickerBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeManager @ 14e4eaf50

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeMeshUtilities @ 14e4eaf60

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeMeshUtilities(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangePipelineConfigurationBase @ 14e4eaf70

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangePipelineConfigurationBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeProjectSettings @ 14e4eaf80

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeProjectSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangePythonPipelineBase @ 14e4eaf90

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangePythonPipelineBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeSceneImportAsset @ 14e4eafa0

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeSceneImportAsset(void)

{
  return;
}

// FOnImportDoneDynamic_DelegateWrapper @ 14e4f2740

void __cdecl
FOnImportDoneDynamic_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnObjectImportDoneDynamic_DelegateWrapper @ 14e4f27f0

void __cdecl
FOnObjectImportDoneDynamic_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2)

{
  UObject *local_res10 [3];
  
  local_res10[0] = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return;
}

// SerializePipeline @ 14e506c00

FString * __cdecl SerializePipeline(FString *__return_storage_ptr__,UObject *param_1)

{
  UStruct *pUVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FJsonValueObject *pFVar4;
  FJsonValueObject *pFVar5;
  atomic<int> *paVar6;
  TRawPtrProxy<FJsonValueObject> local_res10;
  FString local_88;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_78;
  TSharedPtr<FJsonValue,1> local_68;
  TSharedRef<FJsonObject,1> local_58;
  TSharedPtr<FJsonObject,1> local_48 [2];
  
  pUVar1 = *(UStruct **)&param_1->field_0x10;
  if (pUVar1 != (UStruct *)0x0) {
    pFVar4 = operator_new(0x50);
    pFVar5 = (FJsonValueObject *)0x0;
    local_res10.Object = pFVar5;
    if (pFVar4 != (FJsonValueObject *)0x0) {
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4[1]._padding_ = 0;
      *(undefined4 *)&pFVar4[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar4[1].Value.Object = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar4[1].Value.Object + 4) = 0;
      pFVar4[2]._padding_ = 0;
      *(undefined4 *)&pFVar4[2]._padding_ = 0;
      local_res10.Object = pFVar4;
    }
    TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
              (&local_58,(TRawPtrProxy<FJsonObject> *)&local_res10);
    pFVar4 = operator_new(0x50);
    local_res10.Object = pFVar5;
    if (pFVar4 != (FJsonValueObject *)0x0) {
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4[1]._padding_ = 0;
      *(undefined4 *)&pFVar4[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar4[1].Value.Object = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar4[1].Value.Object + 4) = 0;
      pFVar4[2]._padding_ = 0;
      *(undefined4 *)&pFVar4[2]._padding_ = 0;
      local_res10.Object = pFVar4;
    }
    TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
              ((TSharedRef<FJsonObject,1> *)&local_68,(TRawPtrProxy<FJsonObject> *)&local_res10);
    FVar2.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar6 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar6 = &(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    bVar3 = FJsonObjectConverter::UStructToJsonObject
                      (pUVar1,param_1,(TSharedRef<FJsonObject,1> *)&local_68,0,0,
                       (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                        *)0x0,None);
    if (bVar3) {
      pFVar4 = operator_new(0x20);
      if (pFVar4 != (FJsonValueObject *)0x0) {
        local_48[0].Object = (FJsonObject *)local_68.Object;
        local_48[0].SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
        if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar6 = (atomic<int>)((int)*paVar6 + 1);
          UNLOCK();
        }
        pFVar5 = FJsonValueObject::FJsonValueObject(pFVar4,local_48);
      }
      local_res10.Object = pFVar5;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_68,&local_res10);
      FString::FString((FString *)&local_78,L"GeneratedPipeline");
      FJsonObject::SetField(local_58.Object,(FString *)&local_78,&local_68);
      if (local_78.Object != (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
        FMemory::Free(local_78.Object);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_78,&local_88,0);
    local_48[0].Object = local_58.Object;
    local_48[0].SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
            Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(local_48,&local_78,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (bVar3) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_88.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// SerializeTranslatorSettings @ 14e506ea0

FString * __cdecl SerializeTranslatorSettings(FString *__return_storage_ptr__,UObject *param_1)

{
  UStruct *pUVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FJsonValueObject *pFVar4;
  FJsonValueObject *pFVar5;
  atomic<int> *paVar6;
  TRawPtrProxy<FJsonValueObject> local_res10;
  FString local_88;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_78;
  TSharedPtr<FJsonValue,1> local_68;
  TSharedRef<FJsonObject,1> local_58;
  TSharedPtr<FJsonObject,1> local_48 [2];
  
  pUVar1 = *(UStruct **)&param_1->field_0x10;
  if (pUVar1 != (UStruct *)0x0) {
    pFVar4 = operator_new(0x50);
    pFVar5 = (FJsonValueObject *)0x0;
    local_res10.Object = pFVar5;
    if (pFVar4 != (FJsonValueObject *)0x0) {
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4[1]._padding_ = 0;
      *(undefined4 *)&pFVar4[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar4[1].Value.Object = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar4[1].Value.Object + 4) = 0;
      pFVar4[2]._padding_ = 0;
      *(undefined4 *)&pFVar4[2]._padding_ = 0;
      local_res10.Object = pFVar4;
    }
    TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
              (&local_58,(TRawPtrProxy<FJsonObject> *)&local_res10);
    pFVar4 = operator_new(0x50);
    local_res10.Object = pFVar5;
    if (pFVar4 != (FJsonValueObject *)0x0) {
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4[1]._padding_ = 0;
      *(undefined4 *)&pFVar4[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar4[1].Value.Object = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar4[1].Value.Object + 4) = 0;
      pFVar4[2]._padding_ = 0;
      *(undefined4 *)&pFVar4[2]._padding_ = 0;
      local_res10.Object = pFVar4;
    }
    TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
              ((TSharedRef<FJsonObject,1> *)&local_68,(TRawPtrProxy<FJsonObject> *)&local_res10);
    FVar2.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar6 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar6 = &(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    bVar3 = FJsonObjectConverter::UStructToJsonObject
                      (pUVar1,param_1,(TSharedRef<FJsonObject,1> *)&local_68,0,0,
                       (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                        *)0x0,None);
    if (bVar3) {
      pFVar4 = operator_new(0x20);
      if (pFVar4 != (FJsonValueObject *)0x0) {
        local_48[0].Object = (FJsonObject *)local_68.Object;
        local_48[0].SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
        if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar6 = (atomic<int>)((int)*paVar6 + 1);
          UNLOCK();
        }
        pFVar5 = FJsonValueObject::FJsonValueObject(pFVar4,local_48);
      }
      local_res10.Object = pFVar5;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_68,&local_res10);
      FString::FString((FString *)&local_78,L"GeneratedTranslatorSettings");
      FJsonObject::SetField(local_58.Object,(FString *)&local_78,&local_68);
      if (local_78.Object != (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
        FMemory::Free(local_78.Object);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_78,&local_88,0);
    local_48[0].Object = local_58.Object;
    local_48[0].SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
            Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(local_48,&local_78,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (bVar3) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_88.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UInterchangeEditorSettings_NoRegister @ 14e50c090

UClass * __cdecl Z_Construct_UClass_UInterchangeEditorSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeEditorSettings",
               &Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton,
               UInterchangeEditorSettings::StaticRegisterNativesUInterchangeEditorSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UInterchangeEditorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeEditorUtilitiesBase_NoRegister @ 14e50c150

UClass * __cdecl Z_Construct_UClass_UInterchangeEditorUtilitiesBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeEditorUtilitiesBase",
               &Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton,
               UInterchangeEditorUtilitiesBase::StaticRegisterNativesUInterchangeEditorUtilitiesBase
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeEditorUtilitiesBase>,
               InternalVTableHelperCtorCaller<UInterchangeEditorUtilitiesBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeEditorUtilitiesBase.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister @ 14e50c200

UClass * __cdecl Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeMeshUtilities",
               &Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton,
               UInterchangeMeshUtilities::StaticRegisterNativesUInterchangeMeshUtilities,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMeshUtilities>,
               InternalVTableHelperCtorCaller<UInterchangeMeshUtilities>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton;
}

// Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister @ 14e50c2b0

UClass * __cdecl Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePipelineStackOverride",
               &Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton,
               UInterchangePipelineStackOverride::
               StaticRegisterNativesUInterchangePipelineStackOverride,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangePipelineStackOverride>,
               InternalVTableHelperCtorCaller<UInterchangePipelineStackOverride>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineStackOverride.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeProjectSettingsScript_NoRegister @ 14e50c360

UClass * __cdecl Z_Construct_UClass_UInterchangeProjectSettingsScript_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeProjectSettingsScript",
               &Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton,
               UInterchangeProjectSettingsScript::
               StaticRegisterNativesUInterchangeProjectSettingsScript,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeProjectSettingsScript>,
               InternalVTableHelperCtorCaller<UInterchangeProjectSettingsScript>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeProjectSettingsScript.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeProjectSettings_NoRegister @ 14e50c410

UClass * __cdecl Z_Construct_UClass_UInterchangeProjectSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeProjectSettings",
               &Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton,
               UInterchangeProjectSettings::StaticRegisterNativesUInterchangeProjectSettings,0x280,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeProjectSettings>,
               InternalVTableHelperCtorCaller<UInterchangeProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton;
}

// Z_Construct_UClass_UInterchangePythonPipelineAsset_NoRegister @ 14e50c4d0

UClass * __cdecl Z_Construct_UClass_UInterchangePythonPipelineAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePythonPipelineAsset",
               &Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton,
               UInterchangePythonPipelineAsset::StaticRegisterNativesUInterchangePythonPipelineAsset
               ,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangePythonPipelineAsset>,
               InternalVTableHelperCtorCaller<UInterchangePythonPipelineAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton;
}

// Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister @ 14e50c580

UClass * __cdecl Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeSceneImportAsset",
               &Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton,
               UInterchangeSceneImportAsset::StaticRegisterNativesUInterchangeSceneImportAsset,0x30,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeSceneImportAsset>,
               InternalVTableHelperCtorCaller<UInterchangeSceneImportAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneImportAsset.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPropertyData @ 14e50c630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPropertyData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPropertyData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPropertyData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPropertyData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPropertyData.InnerSingleton;
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

// IMPLEMENT_MODULE_InterchangeEngine @ 14e511980

void __cdecl IMPLEMENT_MODULE_InterchangeEngine(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeImportEnable'' @ 150465300

void __cdecl _dynamic_atexit_destructor_for__CCvarInterchangeImportEnable__(void)

{
  CCvarInterchangeImportEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeImportEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeResetEnabled'' @ 150465320

void __cdecl
UE::Interchange::InterchangeReset::_dynamic_atexit_destructor_for__CCvarInterchangeResetEnabled__
          (void)

{
  CCvarInterchangeResetEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeResetEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CCvarInterchangeResetFilteredNodes'' @ 150465340

void __cdecl
UE::Interchange::InterchangeReset::
_dynamic_atexit_destructor_for__CCvarInterchangeResetFilteredNodes__(void)

{
  CCvarInterchangeResetFilteredNodes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCvarInterchangeResetFilteredNodes)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'DebugContext'' @ 150465360

void __cdecl
`UInterchangeAssetImportData::Serialize'::__l11::_dynamic_atexit_destructor_for__DebugContext__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DebugContext.Data.AllocatorInstance.Data;
  if (DebugContext.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DebugContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FactoryNodeUidPathKey'' @ 150465380

void __cdecl
UE::Interchange::InterchangeReset::Constants::
_dynamic_atexit_destructor_for__FactoryNodeUidPathKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FactoryNodeUidPathKey.Data.AllocatorInstance.Data;
  if (FactoryNodeUidPathKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FactoryNodeUidPathKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InterchangeGroupNone'' @ 1504653a0

void __cdecl
`FInterchangeProjectSettingsUtils::GetUsedGroup'::__l2::
_dynamic_atexit_destructor_for__InterchangeGroupNone__(void)

{
  InterchangeGroupNone.ShowImportDialogOverride._72_4_ = 0;
  if (InterchangeGroupNone.ShowImportDialogOverride._64_8_ != 0) {
    FMemory::Free((void *)InterchangeGroupNone.ShowImportDialogOverride._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&InterchangeGroupNone.ShowImportDialogOverride);
  InterchangeGroupNone.DefaultPipelineStackOverride._72_4_ = 0;
  if (InterchangeGroupNone.DefaultPipelineStackOverride._64_8_ != 0) {
    FMemory::Free((void *)InterchangeGroupNone.DefaultPipelineStackOverride._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&InterchangeGroupNone.DefaultPipelineStackOverride);
  return;
}

// `dynamic_atexit_destructor_for_'InterchangeManager'' @ 150465400

void __cdecl
`UInterchangeManager::GetInterchangeManager'::__l2::
_dynamic_atexit_destructor_for__InterchangeManager__(void)

{
  if (InterchangeManager.Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(InterchangeManager.Object);
    InterchangeManager.Object = (UObject *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogInterchangeEngine'' @ 150465430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInterchangeEngine__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInterchangeEngine);
  return;
}

// `dynamic_atexit_destructor_for_'LogInterchangeReset'' @ 150465450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInterchangeReset__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInterchangeReset);
  return;
}

// `dynamic_atexit_destructor_for_'SceneImportAssetPathKey'' @ 150465470

void __cdecl
UE::Interchange::InterchangeReset::Constants::
_dynamic_atexit_destructor_for__SceneImportAssetPathKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SceneImportAssetPathKey.Data.AllocatorInstance.Data;
  if (SceneImportAssetPathKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SceneImportAssetPathKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

