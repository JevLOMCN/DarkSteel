// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 420

// ActiveEncodeJobs'' @ 1413f7f50

void __cdecl `dynamic_initializer_for_'UMovieGraphCommandLineEncoderNode::ActiveEncodeJobs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphCommandLineEncoderNode::ActiveEncodeJobs__);
  return;
}

// CategoryMetaDataKey'' @ 1413f7f70

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::CategoryMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::CategoryMetaDataKey,L"Category");
  return;
}

// CustomEntryName'' @ 1413f7f90

void __cdecl `dynamic_initializer_for_'FMovieGraphNamedResolution::CustomEntryName__(void)

{
  ::FName::FName(&FMovieGraphNamedResolution::CustomEntryName,L"Custom");
  return;
}

// DefaultResolutionName'' @ 1413f7fb0

void __cdecl `dynamic_initializer_for_'FMovieGraphNamedResolution::DefaultResolutionName__(void)

{
  ::FName::FName(&FMovieGraphNamedResolution::DefaultResolutionName,L"1080p (FHD)");
  return;
}

// DisplayNameMetaDataKey'' @ 1413f7fd0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::DisplayNameMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::DisplayNameMetaDataKey,L"DisplayName");
  return;
}

// EnableCategoriesMetaDataKey'' @ 1413f7ff0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::EnableCategoriesMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::EnableCategoriesMetaDataKey,
                 L"EnableCategories");
  return;
}

// QuickRenderSettingsPackagePath'' @ 1413f8010

void __cdecl
`dynamic_initializer_for_'UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath__(void)

{
  ::FString::FString(&UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath,
                     L"/Temp/MovieRenderPipeline/QuickRenderSettings");
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphQuickRenderSettings::
         QuickRenderSettingsPackagePath__);
  return;
}

// ToolTipMetaDataKey'' @ 1413f8040

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::ToolTipMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::ToolTipMetaDataKey,L"ToolTip");
  return;
}

// VariableGuidMetaDataKey'' @ 1413f8060

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::VariableGuidMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::VariableGuidMetaDataKey,L"VariableGUID");
  return;
}

// `dynamic_initializer_for_'NAME_UMovieGraphBurnInWidget_UpdateForGraph'' @ 1413f8080

void __cdecl _dynamic_initializer_for__NAME_UMovieGraphBurnInWidget_UpdateForGraph__(void)

{
  FName::FName(&NAME_UMovieGraphBurnInWidget_UpdateForGraph,L"UpdateForGraph");
  return;
}

// `dynamic_initializer_for_'NAME_UMovieGraphRenderPreviewWidget_OnInitializedForPipeline'' @ 1413f80a0

void __cdecl
_dynamic_initializer_for__NAME_UMovieGraphRenderPreviewWidget_OnInitializedForPipeline__(void)

{
  FName::FName(&NAME_UMovieGraphRenderPreviewWidget_OnInitializedForPipeline,
               L"OnInitializedForPipeline");
  return;
}

// `dynamic_initializer_for_'NAME_UMovieRenderDebugWidget_OnInitializedForPipeline'' @ 1413f80c0

void __cdecl _dynamic_initializer_for__NAME_UMovieRenderDebugWidget_OnInitializedForPipeline__(void)

{
  FName::FName(&NAME_UMovieRenderDebugWidget_OnInitializedForPipeline,L"OnInitializedForPipeline");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1413f80e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h__Script_MovieRenderPipelineCore_1936139202'' @ 1413f8170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h__Script_MovieRenderPipelineCore_1936139202__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h__Script_MovieRenderPipelineCore_1658975800'' @ 1413f81b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h__Script_MovieRenderPipelineCore_1658975800__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h__Script_MovieRenderPipelineCore_2556865073'' @ 1413f81f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h__Script_MovieRenderPipelineCore_2556865073__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h__Script_MovieRenderPipelineCore_1602938590'' @ 1413f8240

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h__Script_MovieRenderPipelineCore_1602938590__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,0xd,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h__Script_MovieRenderPipelineCore_3763121328'' @ 1413f8290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h__Script_MovieRenderPipelineCore_3763121328__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCoreTimeStep_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNamedResolution_h__Script_MovieRenderPipelineCore_3131295406'' @ 1413f82d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNamedResolution_h__Script_MovieRenderPipelineCore_3131295406__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNamedResolution_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderDataIdentifier_h__Script_MovieRenderPipelineCore_1245230953'' @ 1413f8310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderDataIdentifier_h__Script_MovieRenderPipelineCore_1245230953__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderDataIdentifier_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTimeStepData_h__Script_MovieRenderPipelineCore_4203085966'' @ 1413f8350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTimeStepData_h__Script_MovieRenderPipelineCore_4203085966__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTimeStepData_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTraversalContext_h__Script_MovieRenderPipelineCore_3753928740'' @ 1413f8390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTraversalContext_h__Script_MovieRenderPipelineCore_3753928740__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphTraversalContext_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h__Script_MovieRenderPipelineCore_2335086178'' @ 1413f83d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h__Script_MovieRenderPipelineCore_2335086178__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphRenderPassNode_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h__Script_MovieRenderPipelineCore_726014104'' @ 1413f8410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h__Script_MovieRenderPipelineCore_726014104__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h__Script_MovieRenderPipelineCore_2846166446'' @ 1413f8450

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h__Script_MovieRenderPipelineCore_2846166446__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineHighResSetting_h__Script_MovieRenderPipelineCore_3243323106'' @ 1413f8490

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineHighResSetting_h__Script_MovieRenderPipelineCore_3243323106__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineHighResSetting_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h__Script_MovieRenderPipelineCore_1144279098'' @ 1413f84d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h__Script_MovieRenderPipelineCore_1144279098__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutorSettings_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputBase_h__Script_MovieRenderPipelineCore_3010242747'' @ 1413f8510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputBase_h__Script_MovieRenderPipelineCore_3010242747__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputBase_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h__Script_MovieRenderPipelineCore_2349421993'' @ 1413f8550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h__Script_MovieRenderPipelineCore_2349421993__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineRenderPass_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h__Script_MovieRenderPipelineCore_2014697027'' @ 1413f8590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h__Script_MovieRenderPipelineCore_2014697027__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderDebugWidget_h__Script_MovieRenderPipelineCore_256226769'' @ 1413f85d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderDebugWidget_h__Script_MovieRenderPipelineCore_256226769__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderDebugWidget_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MovieRenderPipelineCore'' @ 1413f8610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MovieRenderPipelineCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xc7b56da9;
  local_res8[0].DeclarationsHash = 0x8833cbde;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MovieRenderPipelineCore,L"/Script/MovieRenderPipelineCore"
             ,&Z_Registration_Info_UPackage__Script_MovieRenderPipelineCore,local_res8);
  return;
}

// Z_Construct_UClass_UMovieGraphBurnInWidget @ 14dc65330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphBurnInWidget(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphBurnInWidget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphBurnInWidget.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphBurnInWidget.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister @ 14dc65370

UClass * __cdecl Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEvaluatedConfig",
               &Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton,
               UMovieGraphEvaluatedConfig::StaticRegisterNativesUMovieGraphEvaluatedConfig,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphEvaluatedConfig>,
               InternalVTableHelperCtorCaller<UMovieGraphEvaluatedConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.InnerSingleton;
}

// Z_Construct_UPackage__Script_MovieRenderPipelineCore @ 14dc65420

UPackage * __cdecl Z_Construct_UPackage__Script_MovieRenderPipelineCore(void)

{
  if (Z_Registration_Info_UPackage__Script_MovieRenderPipelineCore.OuterSingleton == (UPackage *)0x0
     ) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MovieRenderPipelineCore.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MovieRenderPipelineCore.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobAuthor @ 14dc65500

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobAuthor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobAuthor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobInitializationTime @ 14dc655a0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobInitializationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobInitializationTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph @ 14dc655e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetBranchNames @ 14dc65620

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetBranchNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetBranchNames_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobName @ 14dc65660

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetJobName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetEvaluatedGraphs @ 14dc656a0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetEvaluatedGraphs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetEvaluatedGraphs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverallOutputFrames @ 14dc656e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverallOutputFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverallOutputFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeCDOs_SetBit @ 14dc65720

void __cdecl
Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingForBranch_Statics::
NewProp_bIncludeCDOs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverallSegmentCounts @ 14dc65730

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverallSegmentCounts(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverallSegmentCounts_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 14dc65770

void __cdecl
Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingForBranch_Statics::
NewProp_bExactMatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingForBranch @ 14dc65780

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingForBranch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingForBranch_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverscanCropRectangle @ 14dc657c0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverscanCropRectangle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverscanCropRectangle_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeCDOs_SetBit @ 14dc65800

void __cdecl
Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingsForBranch_Statics::
NewProp_bIncludeCDOs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bExactMatch_SetBit @ 14dc65810

void __cdecl
Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingsForBranch_Statics::
NewProp_bExactMatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverscannedResolution @ 14dc65860

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverscannedResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetOverscannedResolution_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingsForBranch @ 14dc658a0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingsForBranch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetSettingsForBranch_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetPipelineState @ 14dc65960

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetPipelineState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetPipelineState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc659a0

void __cdecl
Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetVariableStringValueByName_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetVariableStringValueByName @ 14dc65af0

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetVariableStringValueByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetVariableStringValueByName_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetRootFrameNumber @ 14dc65b30

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetRootFrameNumber(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetRootFrameNumber_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc65b70

void __cdecl
Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetVariableValueByName_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetRootTimecode @ 14dc65b80

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetRootTimecode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetRootTimecode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetVariableValueByName @ 14dc65bc0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetVariableValueByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphEvaluatedConfig_GetVariableValueByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc65c00

void __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_IsNamedResolutionValid_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_IsNamedResolutionValid @ 14dc65c10

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_IsNamedResolutionValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_IsNamedResolutionValid_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_NamedResolutionFromProfile @ 14dc65d80

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_NamedResolutionFromProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_NamedResolutionFromProfile_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_NamedResolutionFromSize @ 14dc65e30

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_NamedResolutionFromSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_NamedResolutionFromSize_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments @ 14dc65e70

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFormatArguments @ 14dc65f10

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFormatArguments(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFormatArguments_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_AddInput @ 14dc65f50

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_AddInput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMovieGraphConfig_AddInput_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bGetNextVersion_SetBit @ 14dc65f90

void __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveVersionNumber_Statics::
NewProp_bGetNextVersion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x158) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dc65fa0

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_AddLabeledEdge_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UClass_UMovieGraphMember_NoRegister @ 14dc65fb0

UClass * __cdecl Z_Construct_UClass_UMovieGraphMember_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMember",
               &Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton,
               UMovieGraphMember::StaticRegisterNativesUMovieGraphMember,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphMember>,
               InternalVTableHelperCtorCaller<UMovieGraphMember>,local_res8,
               UMovieGraphValueContainer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMember.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphVariable_NoRegister @ 14dc66070

UClass * __cdecl Z_Construct_UClass_UMovieGraphVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphVariable",
               &Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton,
               UMovieGraphVariable::StaticRegisterNativesUMovieGraphVariable,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphVariable>,
               InternalVTableHelperCtorCaller<UMovieGraphVariable>,local_res8,
               UMovieGraphMember::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphVariable.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_NoRegister @ 14dc66130

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton,
               UMovieGraphGlobalVariable::StaticRegisterNativesUMovieGraphGlobalVariable,0x88,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphGlobalVariable>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable>,local_res8,
               UMovieGraphVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable.InnerSingleton;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveVersionNumber @ 14dc661f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveVersionNumber(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveVersionNumber_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphInput_NoRegister @ 14dc66230

UClass * __cdecl Z_Construct_UClass_UMovieGraphInput_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphInput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphInput",
               &Z_Registration_Info_UClass_UMovieGraphInput.InnerSingleton,
               UMovieGraphInput::StaticRegisterNativesUMovieGraphInput,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphInput>,
               InternalVTableHelperCtorCaller<UMovieGraphInput>,local_res8,
               UMovieGraphInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphInput.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphOutput_NoRegister @ 14dc662f0

UClass * __cdecl Z_Construct_UClass_UMovieGraphOutput_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphOutput",
               &Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton,
               UMovieGraphOutput::StaticRegisterNativesUMovieGraphOutput,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphOutput>,
               InternalVTableHelperCtorCaller<UMovieGraphOutput>,local_res8,
               UMovieGraphInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutput.InnerSingleton;
}

// Z_Construct_UFunction_UMovieGraphConfig_AddLabeledEdge @ 14dc663b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_AddLabeledEdge(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_AddLabeledEdge_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_AddOutput @ 14dc664b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_AddOutput(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_AddOutput_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_AddVariable @ 14dc664f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_AddVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_AddVariable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph @ 14dc665f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_CreateFlattenedGraph_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_CreateNodeByClass @ 14dc66630

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_CreateNodeByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_CreateNodeByClass_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc667e0

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_DeleteMember_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_DeleteMember @ 14dc66930

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_DeleteMember(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_DeleteMember_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_DuplicateVariable @ 14dc66970

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_DuplicateVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_DuplicateVariable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetAllContainedSubgraphs @ 14dc66fe0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetAllContainedSubgraphs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetAllContainedSubgraphs_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetBranchNames @ 14dc67020

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetBranchNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetBranchNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStopAtSubgraph_SetBit @ 14dc67060

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_GetDownstreamBranchNames_Statics::
NewProp_bStopAtSubgraph_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier @ 14dc67070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderDataIdentifier.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphRenderDataIdentifier.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderDataIdentifier.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphRenderDataIdentifier.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphRenderLayerOutputData @ 14dc670f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphRenderLayerOutputData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderLayerOutputData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphRenderLayerOutputData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphRenderLayerOutputData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderLayerOutputData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphRenderLayerOutputData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphStringArray @ 14dc67170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphStringArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphStringArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphStringArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphStringArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphStringArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphStringArray.InnerSingleton;
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

// Z_Construct_UFunction_UMovieGraphConfig_GetDownstreamBranchNames @ 14dc671f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetDownstreamBranchNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetDownstreamBranchNames_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 14dc67270

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphRenderDataIdentifier_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphRenderDataIdentifier,&UE::CoreUObject::Private::Construct<FMovieGraphRenderDataIdentifier>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphRenderDataIdentifier>,&UE::CoreUObject::Private::Destruct<FMovieGraphRenderDataIdentifier>,&UE::CoreUObject::Private::Copy<FMovieGraphRenderDataIdentifier>,&UE::CoreUObject::Private::GetStructTypeHash<FMovieGraphRenderDataIdentifier>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetInputNode @ 14dc672b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetInputNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetInputNode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dc67550

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphStringArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphStringArray,&UE::CoreUObject::Private::Construct<FMovieGraphStringArray>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphStringArray>,&UE::CoreUObject::Private::Destruct<FMovieGraphStringArray>,&UE::CoreUObject::Private::Copy<FMovieGraphStringArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14dc67590

void * __cdecl
Z_Construct_UScriptStruct_FMovieGraphRenderLayerOutputData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphRenderLayerOutputData,&UE::CoreUObject::Private::Construct<FMovieGraphRenderLayerOutputData>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphRenderLayerOutputData>,&UE::CoreUObject::Private::Destruct<FMovieGraphRenderLayerOutputData>,&UE::CoreUObject::Private::Copy<FMovieGraphRenderLayerOutputData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14dc675d0

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphRenderOutputData,&UE::CoreUObject::Private::Construct<FMovieGraphRenderOutputData>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphRenderOutputData>,&UE::CoreUObject::Private::Destruct<FMovieGraphRenderOutputData>,&UE::CoreUObject::Private::Copy<FMovieGraphRenderOutputData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetInputs @ 14dc67610

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetInputs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetInputs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 14dc67710

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_GetNodeForBranch_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetNodeForBranch @ 14dc67720

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetNodeForBranch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetNodeForBranch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 14dc67760

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_GetNodeForTag_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetNodeForTag @ 14dc67770

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetNodeForTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetNodeForTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineHighResSetting @ 14dc677b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineHighResSetting(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineHighResSetting.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineHighResSetting.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineHighResSetting.OuterSingleton;
}

// NewProp_bOverrideSubSurfaceScattering_SetBit @ 14dc677f0

void __cdecl
Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::
NewProp_bOverrideSubSurfaceScattering_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// NewProp_bAllocateHistoryPerTile_SetBit @ 14dc67840

void __cdecl
Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bAllocateHistoryPerTile_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  return;
}

// NewProp_bPageToSystemMemory_SetBit @ 14dc67880

void __cdecl
Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bPageToSystemMemory_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5d) = 1;
  return;
}

// Z_Construct_UClass_AMoviePipelineGameMode @ 14dc67b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AMoviePipelineGameMode(void)

{
  if (Z_Registration_Info_UClass_AMoviePipelineGameMode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AMoviePipelineGameMode.OuterSingleton,
               &Z_Construct_UClass_AMoviePipelineGameMode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AMoviePipelineGameMode.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings @ 14dc67c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.OuterSingleton;
}

// NewProp_bCloseEditor_SetBit @ 14dc67c90

void __cdecl
Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_bCloseEditor_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bExactMatch_SetBit @ 14dc67d30

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_GetNodesForBranch_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetNodesForBranch @ 14dc67d40

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetNodesForBranch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetNodesForBranch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphRenderPassNode @ 14dc67d80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderPassNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphRenderPassNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphRenderPassNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPassNode.OuterSingleton;
}

// NewProp_bOverride_RendererName_SetBit @ 14dc67dc0

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::NewProp_bOverride_RendererName_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 1;
  return;
}

// NewProp_bOverride_RendererSubName_SetBit @ 14dc67dd0

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPassNode_Statics::NewProp_bOverride_RendererSubName_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 2;
  return;
}

// NewProp_bExactMatch_SetBit @ 14dc67ea0

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_GetNodesForTag_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetNodesForTag @ 14dc67eb0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetNodesForTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetNodesForTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FMovieGraphTimeStepData @ 14dc67ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphTimeStepData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphTimeStepData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphTimeStepData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphTimeStepData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphTimeStepData.InnerSingleton;
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

// NewProp_bHasRelativeTimeBeenUsed_SetBit @ 14dc67f70

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bHasRelativeTimeBeenUsed_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelineOutputBase @ 14dc67f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineOutputBase(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineOutputBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineOutputBase.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineOutputBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineOutputBase.OuterSingleton;
}

// NewProp_bIsFirstTemporalSampleForFrame_SetBit @ 14dc67fc0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::
NewProp_bIsFirstTemporalSampleForFrame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bIsLastTemporalSampleForFrame_SetBit @ 14dc67fd0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::
NewProp_bIsLastTemporalSampleForFrame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bDiscardOutput_SetBit @ 14dc67fe0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bDiscardOutput_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// NewProp_bRequiresAccumulator_SetBit @ 14dc67ff0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewProp_bRequiresAccumulator_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3b) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetOutputDirectory @ 14dc68000

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetOutputDirectory(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetOutputDirectory_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dc68040

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphTimeStepData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphTimeStepData,&UE::CoreUObject::Private::Construct<FMovieGraphTimeStepData>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphTimeStepData>,&UE::CoreUObject::Private::Destruct<FMovieGraphTimeStepData>,&UE::CoreUObject::Private::Copy<FMovieGraphTimeStepData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetOutputNode @ 14dc680c0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetOutputNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetOutputNode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphConfig_NoRegister @ 14dc681d0

UClass * __cdecl Z_Construct_UClass_UMovieGraphConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConfig",
               &Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton,
               UMovieGraphConfig::StaticRegisterNativesUMovieGraphConfig,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphConfig>,
               InternalVTableHelperCtorCaller<UMovieGraphConfig>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConfig.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphTraversalContext @ 14dc68280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphTraversalContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphTraversalContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphTraversalContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphTraversalContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphTraversalContext.InnerSingleton;
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

// NewStructOps @ 14dc68300

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphBranch,&UE::CoreUObject::Private::Construct<FMovieGraphBranch>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphBranch>,&UE::CoreUObject::Private::Destruct<FMovieGraphBranch>,&UE::CoreUObject::Private::Copy<FMovieGraphBranch>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14dc68340

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphTraversalContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphTraversalContext,&UE::CoreUObject::Private::Construct<FMovieGraphTraversalContext>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphTraversalContext>,&UE::CoreUObject::Private::Destruct<FMovieGraphTraversalContext>,&UE::CoreUObject::Private::Copy<FMovieGraphTraversalContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetOutputs @ 14dc68380

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetOutputs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetOutputs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStopAtSubgraph_SetBit @ 14dc683c0

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_GetUpstreamBranchNames_Statics::
NewProp_bStopAtSubgraph_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetUpstreamBranchNames @ 14dc683d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetUpstreamBranchNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetUpstreamBranchNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetVariableByGuid @ 14dc68500

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetVariableByGuid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetVariableByGuid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetVariableByName @ 14dc68540

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetVariableByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetVariableByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphValueType_StaticEnum @ 14dc68580

UEnum * __cdecl EMovieGraphValueType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType,
                       (UObject *)pUVar1,L"EMovieGraphValueType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton;
}

// EMovieGraphContainerType_StaticEnum @ 14dc685c0

UEnum * __cdecl EMovieGraphContainerType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType,
                       (UObject *)pUVar1,L"EMovieGraphContainerType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConfig @ 14dc68600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConfig(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConfig.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConfig.OuterSingleton;
}

// Z_Construct_UClass_UMoviePipelineBase @ 14dc68640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineBase(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineBase.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBase.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphEvaluatedConfig @ 14dc68680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphEvaluatedConfig(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphEvaluatedConfig.OuterSingleton;
}

// Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature @ 14dc686c0

UFunction * __cdecl
Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable @ 14dc68700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphGlobalVariable.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphGlobalVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName @ 14dc68740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_CameraName.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphGlobalVariable_CameraName.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_CameraName.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber @ 14dc68780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName @ 14dc687c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName @ 14dc68800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphInput @ 14dc68840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphInput(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphInput.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphInput.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphInput_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphInput.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphInterfaceBase @ 14dc68880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphInterfaceBase(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphInterfaceBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphInterfaceBase.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphInterfaceBase.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphMember @ 14dc688c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphMember(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphMember.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphMember.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphMember_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphMember.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphOutput @ 14dc68900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphOutput(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphOutput.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphOutput.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphOutput_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutput.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphTraversableObject @ 14dc68940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphTraversableObject(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphTraversableObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphTraversableObject.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphTraversableObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphTraversableObject.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphVariable @ 14dc68980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphVariable(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphVariable.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphVariable.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig @ 14dc689c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedBranchConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedBranchConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedBranchConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedBranchConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack @ 14dc68a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedSettingsStack.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedSettingsStack.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedSettingsStack.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedSettingsStack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo @ 14dc68ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo.
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

// NewProp_ReturnValue_SetBit @ 14dc68b80

void __cdecl
Z_Construct_UFunction_UMovieGraphMember_CanRename_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphMember_CanRename @ 14dc68c50

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphMember_CanRename(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphMember_CanRename_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphMember_GetGuid @ 14dc68d50

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphMember_GetGuid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMovieGraphMember_GetGuid_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FMovieGraphNamedResolution @ 14dc68d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphNamedResolution(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphNamedResolution.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphNamedResolution.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphNamedResolution_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphNamedResolution.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphNamedResolution.InnerSingleton;
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

// NewStructOps @ 14dc68e10

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphNamedResolution_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphNamedResolution,&UE::CoreUObject::Private::Construct<FMovieGraphNamedResolution>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphNamedResolution>,&UE::CoreUObject::Private::Destruct<FMovieGraphNamedResolution>,&UE::CoreUObject::Private::Copy<FMovieGraphNamedResolution>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphMember_GetMemberName @ 14dc68f10

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphMember_GetMemberName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphMember_GetMemberName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState @ 14dc68f50

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc68f90

void __cdecl
Z_Construct_UFunction_UMovieGraphMember_IsDeletable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dc68fa0

void __cdecl
Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphMember_IsDeletable @ 14dc68fb0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphMember_IsDeletable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphMember_IsDeletable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested @ 14dc68ff0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc69030

void __cdecl
Z_Construct_UFunction_UMovieGraphMember_IsEditable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UMoviePipelineRenderPass @ 14dc69040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineRenderPass(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineRenderPass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineRenderPass.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineRenderPass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineRenderPass.OuterSingleton;
}

// NewProp_bIsError_SetBit @ 14dc69080

void __cdecl
Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::NewProp_bIsError_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphMember_IsEditable @ 14dc69090

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphMember_IsEditable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphMember_IsEditable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown @ 14dc690d0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc69110

void __cdecl
Z_Construct_UFunction_UMovieGraphMember_SetMemberName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIncludeGlobal_SetBit @ 14dc69120

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::NewProp_bIncludeGlobal_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsError_SetBit @ 14dc69130

void __cdecl
Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::NewProp_bIsError_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphMember_SetMemberName @ 14dc69140

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphMember_SetMemberName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphMember_SetMemberName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMoviePipelineBase_Shutdown @ 14dc691c0

UFunction * __cdecl Z_Construct_UFunction_UMoviePipelineBase_Shutdown(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_GetVariables @ 14dc69200

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_GetVariables(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_GetVariables_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEditable_SetBit @ 14dc69240

void __cdecl Z_Construct_UClass_UMovieGraphMember_Statics::NewProp_bIsEditable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_MoveCategoryBefore @ 14dc69310

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_MoveCategoryBefore(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_MoveCategoryBefore_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMoviePipelineViewFamilySetting @ 14dc693d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePipelineViewFamilySetting(void)

{
  if (Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.OuterSingleton,
               &Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphConfig_MoveVariableBefore @ 14dc69410

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_MoveVariableBefore(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_MoveVariableBefore_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_MoveVariableToIndex @ 14dc69450

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_MoveVariableToIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_MoveVariableToIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc69490

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_RemoveAllInboundEdges_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UMovieGraphRenderPreviewWidget @ 14dc694a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderPreviewWidget(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphRenderPreviewWidget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.OuterSingleton;
}

// Z_Construct_UClass_UMovieRenderDebugWidget @ 14dc694e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieRenderDebugWidget(void)

{
  if (Z_Registration_Info_UClass_UMovieRenderDebugWidget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieRenderDebugWidget.OuterSingleton,
               &Z_Construct_UClass_UMovieRenderDebugWidget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieRenderDebugWidget.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphConfig_RemoveAllInboundEdges @ 14dc69520

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_RemoveAllInboundEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_RemoveAllInboundEdges_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline @ 14dc69560

UFunction * __cdecl Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc695a0

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_RemoveAllOutboundEdges_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_RemoveAllOutboundEdges @ 14dc695b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_RemoveAllOutboundEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_RemoveAllOutboundEdges_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphVariable_GetCategory @ 14dc695f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphVariable_GetCategory(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphVariable_GetCategory_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc69670

void __cdecl
Z_Construct_UFunction_UMovieGraphVariable_IsGlobal_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dc69680

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_RemoveInboundEdges_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphVariable_IsGlobal @ 14dc69690

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphVariable_IsGlobal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphVariable_IsGlobal_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_RemoveInboundEdges @ 14dc696d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_RemoveInboundEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_RemoveInboundEdges_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderPreviewWidget_OnInitializedForPipeline @ 14dc69710

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphRenderPreviewWidget_OnInitializedForPipeline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderPreviewWidget_OnInitializedForPipeline_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc69750

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_RemoveLabeledEdge_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphVariable_SetCategory @ 14dc69760

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphVariable_SetCategory(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphVariable_SetCategory_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConfig_RemoveLabeledEdge @ 14dc697a0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_RemoveLabeledEdge(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_RemoveLabeledEdge_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc697e0

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_RemoveNode_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_RemoveNode @ 14dc697f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_RemoveNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_RemoveNode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc69830

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_RemoveNodes_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_RemoveNodes @ 14dc69840

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_RemoveNodes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_RemoveNodes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc69880

void __cdecl
Z_Construct_UFunction_UMovieGraphConfig_RemoveOutboundEdges_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConfig_RemoveOutboundEdges @ 14dc69950

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_RemoveOutboundEdges(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_RemoveOutboundEdges_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphBlueprintLibrary @ 14dc69990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphConfig_UpdateGlobalVariableValues @ 14dc69a30

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConfig_UpdateGlobalVariableValues(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConfig_UpdateGlobalVariableValues_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetBackbufferResolution @ 14dc69b30

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetBackbufferResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetBackbufferResolution_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCompletionPercentage @ 14dc69b70

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCompletionPercentage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCompletionPercentage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentAperture @ 14dc69bb0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentAperture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentAperture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentCineCamera @ 14dc69bf0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentCineCamera(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentCineCamera_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentExecutorShot @ 14dc69c30

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentExecutorShot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentExecutorShot_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentFocalLength @ 14dc69c70

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentFocalLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentFocalLength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentFocusDistance @ 14dc69d60

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentFocusDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentFocusDistance_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsBranch_SetBit @ 14dc69da0

void __cdecl
Z_Construct_UClass_UMovieGraphInterfaceBase_Statics::NewProp_bIsBranch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentName @ 14dc69e70

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentState @ 14dc69eb0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphCoreTimeStep @ 14dc69ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphCoreTimeStep(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphCoreTimeStep_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentWorkMetrics @ 14dc69f30

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentWorkMetrics(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dc69f70

void * __cdecl
Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphEvaluatedSettingsStack,&UE::CoreUObject::Private::Construct<FMovieGraphEvaluatedSettingsStack>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluatedSettingsStack>,&UE::CoreUObject::Private::Destruct<FMovieGraphEvaluatedSettingsStack>,&UE::CoreUObject::Private::Copy<FMovieGraphEvaluatedSettingsStack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentShotFrameNumber @ 14dc69fb0

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentShotFrameNumber(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentShotFrameNumber_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentShotTimecode @ 14dc6a010

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentShotTimecode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentShotTimecode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dc6a0e0

void * __cdecl
Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphEvaluatedBranchConfig,&UE::CoreUObject::Private::Construct<FMovieGraphEvaluatedBranchConfig>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluatedBranchConfig>,&UE::CoreUObject::Private::Destruct<FMovieGraphEvaluatedBranchConfig>,&UE::CoreUObject::Private::Copy<FMovieGraphEvaluatedBranchConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentVersionNumber @ 14dc6a120

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentVersionNumber(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetCurrentVersionNumber_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetDesiredOutputResolution @ 14dc6a220

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetDesiredOutputResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetDesiredOutputResolution_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dc6a320

void * __cdecl
Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphEvaluationContext_VisitedNodeInfo,&UE::CoreUObject::Private::Construct<FMovieGraphEvaluationContext_VisitedNodeInfo>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluationContext_VisitedNodeInfo>,&UE::CoreUObject::Private::Destruct<FMovieGraphEvaluationContext_VisitedNodeInfo>,&UE::CoreUObject::Private::Copy<FMovieGraphEvaluationContext_VisitedNodeInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate @ 14dc6a360

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution @ 14dc6a460

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc6a4a0

void __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEstimatedTimeRemaining_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bCircularGraphReferenceFound_SetBit @ 14dc6a4b0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::
NewProp_bCircularGraphReferenceFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x150) = 1;
  return;
}

// NewStructOps @ 14dc6a4c0

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x178;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphEvaluationContext,&UE::CoreUObject::Private::Construct<FMovieGraphEvaluationContext>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluationContext>,&UE::CoreUObject::Private::Destruct<FMovieGraphEvaluationContext>,&UE::CoreUObject::Private::Copy<FMovieGraphEvaluationContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEstimatedTimeRemaining @ 14dc6a5c0

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEstimatedTimeRemaining(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEstimatedTimeRemaining_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// CastChecked<UMovieGraphSettingNode,UMovieGraphNode> @ 14dc6c1a0

UMovieGraphSettingNode * __cdecl
CastChecked<UMovieGraphSettingNode,UMovieGraphNode>(UMovieGraphNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieGraphNode *)0x0) {
    pFVar3 = GetTypeName<UMovieGraphSettingNode>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieGraphSettingNode *)param_1;
  }
  pFVar3 = GetTypeName<UMovieGraphSettingNode>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieGraphNode>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<UMovieGraphVariable_*,TObjectPtr<UMovieGraphGlobalVariable>,int> @ 14dc6c260

void __cdecl
ConstructItems<UMovieGraphVariable_*,TObjectPtr<UMovieGraphGlobalVariable>,int>
          (void *param_1,TObjectPtr<UMovieGraphGlobalVariable> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UMovieGraphSubgraphNode_const_>,TObjectPtr<UMovieGraphSubgraphNode_const_>,int> @ 14dc6c290

void __cdecl
ConstructItems<TObjectPtr<UMovieGraphSubgraphNode_const_>,TObjectPtr<UMovieGraphSubgraphNode_const_>,int>
          (void *param_1,TObjectPtr<UMovieGraphSubgraphNode_const_> *param_2,int param_3)

{
  TObjectPtr<UMovieGraphSubgraphNode_const_> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UMovieGraphSubgraphNode_const_>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UMovieGraphSubgraphNode_const_>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UMovieGraphSubgraphNode *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UMovieGraphSubgraphNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UMovieGraphNode>,TObjectPtr<UMovieGraphNode>,int> @ 14dc6c2f0

void __cdecl
ConstructItems<TObjectPtr<UMovieGraphNode>,TObjectPtr<UMovieGraphNode>,int>
          (void *param_1,TObjectPtr<UMovieGraphNode> *param_2,int param_3)

{
  TObjectPtr<UMovieGraphNode> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UMovieGraphNode>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UMovieGraphNode>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UMovieGraphNode *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UMovieGraphNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieGraphPropertyInfo,FMovieGraphPropertyInfo,int> @ 14dc6c350

void __cdecl
ConstructItems<FMovieGraphPropertyInfo,FMovieGraphPropertyInfo,int>
          (void *param_1,FMovieGraphPropertyInfo *param_2,int param_3)

{
  undefined4 *puVar1;
  ITextData *pIVar2;
  UObject *pUVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    puVar4 = &(param_2->ContextMenuName).Flags;
    plVar5 = (longlong *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)((longlong)puVar4 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           *(undefined8 *)(puVar4 + -4);
      *plVar5 = 0;
      pIVar2 = (((FText *)(puVar4 + -2))->TextData).Reference;
      *plVar5 = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      *(uint *)(plVar5 + 1) = *puVar4;
      plVar5[2] = *(longlong *)(puVar4 + 2);
      *(undefined1 *)(plVar5 + 3) = *(undefined1 *)(puVar4 + 4);
      *(undefined1 *)((longlong)plVar5 + 0x19) = *(undefined1 *)((longlong)puVar4 + 0x11);
      pUVar3 = *(UObject **)(puVar4 + 6);
      plVar5[4] = (longlong)pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      puVar1 = puVar4 + 8;
      puVar4 = puVar4 + 0xe;
      *(undefined1 *)(plVar5 + 5) = *(undefined1 *)puVar1;
      plVar5 = plVar5 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int> @ 14dc6c420

void __cdecl
ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
          (void *param_1,FMovieGraphRenderOutputData *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 + 0x14;
    do {
      *(FWeakObjectPtr *)(lVar1 + -0x14) = (param_2->Shot).WeakPtr;
      *(undefined8 *)
       &((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
          *)(lVar1 + -0xc))->Elements = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                   *)(lVar1 + -0xc),
                  (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                   *)&param_2->RenderLayerData);
      lVar1 = lVar1 + 0x58;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int> @ 14dc6c4c0

void __cdecl
ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
          (void *param_1,FMoviePipelineShotOutputData *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  undefined8 *puVar1;
  TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    pTVar2 = (TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_2->RenderPassData;
    do {
      this = (TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(puVar1 + -1);
      *(undefined8 *)((longlong)pTVar2 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           *(undefined8 *)&pTVar2[-1].field_0x30;
      *(undefined8 *)this = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80;
      *(undefined4 *)(puVar1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
      puVar1[7] = 0;
      *(int *)(puVar1 + 8) = 0;
      if (this != pTVar2) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar1 + 6),(int *)(puVar1 + 8),
                   (ForElementType<FSetElementId> *)(pTVar2 + 1),*(int *)&pTVar2[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar2);
      }
      pTVar2 = (TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pTVar2[1].field_0x20;
      puVar1 = puVar1 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSubclassOf<UMovieGraphSettingNode>,TSubclassOf<UMovieGraphSettingNode>,int> @ 14dc6c590

void __cdecl
ConstructItems<TSubclassOf<UMovieGraphSettingNode>,TSubclassOf<UMovieGraphSettingNode>,int>
          (void *param_1,TSubclassOf<UMovieGraphSettingNode> *param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<UMovieGraphCommandLineEncoderNode::FActiveJob,int> @ 14dc6c690

void __cdecl
DestructItems<UMovieGraphCommandLineEncoderNode::FActiveJob,int>(FActiveJob *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->FilesToDelete;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieGraph::FMinimalCameraInfo,int> @ 14dc6c6e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(FMinimalCameraInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FWeightedBlendables *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->ViewInfo).PostProcessSettings.WeightedBlendables;
    do {
      pFVar1 = (pFVar2->Array).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 0x8e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieGraphPropertyInfo,int> @ 14dc6c730

void __cdecl
DestructItems<FMovieGraphPropertyInfo,int>(FMovieGraphPropertyInfo *param_1,int param_2)

{
  ITextData *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->ContextMenuName).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = (FMovieGraphPropertyInfo *)(&param_1->ContextMenuName + 3);
  }
  return;
}

// DestructItems<FMovieGraphRenderOutputData,int> @ 14dc6c770

void __cdecl
DestructItems<FMovieGraphRenderOutputData,int>(FMovieGraphRenderOutputData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->RenderLayerData).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMoviePipelineShotOutputData,int> @ 14dc6c7d0

void __cdecl
DestructItems<FMoviePipelineShotOutputData,int>(FMoviePipelineShotOutputData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->RenderPassData).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_CameraName>'::__l2::<lambda_1>_> @ 14dc6d900

TObjectPtr<UMovieGraphGlobalVariable> * __thiscall
TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_CameraName>_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  TObjectPtr<UMovieGraphGlobalVariable>_u_0 *pTVar1;
  TObjectPtr<UMovieGraphGlobalVariable> TVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UMovieGraphGlobalVariable>_u_0 *pTVar5;
  
  pTVar5 = (TObjectPtr<UMovieGraphGlobalVariable>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar5 + this->ArrayNum;
  do {
    if (pTVar5 == pTVar1) {
      return (TObjectPtr<UMovieGraphGlobalVariable> *)0x0;
    }
    TVar2.field0_0x0 = (TObjectPtr<UMovieGraphGlobalVariable>_u_0)pTVar5->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (TVar2.field0_0x0 != (UMovieGraphGlobalVariable *)0x0) goto LAB_14dc6d940;
    }
    else if (TVar2.field0_0x0 != (UMovieGraphGlobalVariable *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
LAB_14dc6d940:
      pUVar3 = *(UClass **)((longlong)TVar2.field0_0x0 + 0x10);
      pUVar4 = UMovieGraphGlobalVariable_CameraName::StaticClass();
      if (pUVar3 == pUVar4) {
        return (TObjectPtr<UMovieGraphGlobalVariable> *)pTVar5;
      }
    }
    pTVar5 = pTVar5 + 1;
  } while( true );
}

// FindByPredicate<`UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_FrameNumber>'::__l2::<lambda_1>_> @ 14dc6d990

TObjectPtr<UMovieGraphGlobalVariable> * __thiscall
TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_FrameNumber>_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  TObjectPtr<UMovieGraphGlobalVariable>_u_0 *pTVar1;
  TObjectPtr<UMovieGraphGlobalVariable> TVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UMovieGraphGlobalVariable>_u_0 *pTVar5;
  
  pTVar5 = (TObjectPtr<UMovieGraphGlobalVariable>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar5 + this->ArrayNum;
  do {
    if (pTVar5 == pTVar1) {
      return (TObjectPtr<UMovieGraphGlobalVariable> *)0x0;
    }
    TVar2.field0_0x0 = (TObjectPtr<UMovieGraphGlobalVariable>_u_0)pTVar5->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (TVar2.field0_0x0 != (UMovieGraphGlobalVariable *)0x0) goto LAB_14dc6d9d0;
    }
    else if (TVar2.field0_0x0 != (UMovieGraphGlobalVariable *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
LAB_14dc6d9d0:
      pUVar3 = *(UClass **)((longlong)TVar2.field0_0x0 + 0x10);
      pUVar4 = UMovieGraphGlobalVariable_FrameNumber::StaticClass();
      if (pUVar3 == pUVar4) {
        return (TObjectPtr<UMovieGraphGlobalVariable> *)pTVar5;
      }
    }
    pTVar5 = pTVar5 + 1;
  } while( true );
}

// FindByPredicate<`UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_SequenceName>'::__l2::<lambda_1>_> @ 14dc6da20

TObjectPtr<UMovieGraphGlobalVariable> * __thiscall
TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_SequenceName>_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  TObjectPtr<UMovieGraphGlobalVariable>_u_0 *pTVar1;
  TObjectPtr<UMovieGraphGlobalVariable> TVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UMovieGraphGlobalVariable>_u_0 *pTVar5;
  
  pTVar5 = (TObjectPtr<UMovieGraphGlobalVariable>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar5 + this->ArrayNum;
  do {
    if (pTVar5 == pTVar1) {
      return (TObjectPtr<UMovieGraphGlobalVariable> *)0x0;
    }
    TVar2.field0_0x0 = (TObjectPtr<UMovieGraphGlobalVariable>_u_0)pTVar5->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (TVar2.field0_0x0 != (UMovieGraphGlobalVariable *)0x0) goto LAB_14dc6da60;
    }
    else if (TVar2.field0_0x0 != (UMovieGraphGlobalVariable *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
LAB_14dc6da60:
      pUVar3 = *(UClass **)((longlong)TVar2.field0_0x0 + 0x10);
      pUVar4 = UMovieGraphGlobalVariable_SequenceName::StaticClass();
      if (pUVar3 == pUVar4) {
        return (TObjectPtr<UMovieGraphGlobalVariable> *)pTVar5;
      }
    }
    pTVar5 = pTVar5 + 1;
  } while( true );
}

// FindByPredicate<`UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_ShotName>'::__l2::<lambda_1>_> @ 14dc6dab0

TObjectPtr<UMovieGraphGlobalVariable> * __thiscall
TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UMovieGraphConfig::AddGlobalVariable<UMovieGraphGlobalVariable_ShotName>_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  TObjectPtr<UMovieGraphGlobalVariable>_u_0 *pTVar1;
  TObjectPtr<UMovieGraphGlobalVariable> TVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UMovieGraphGlobalVariable>_u_0 *pTVar5;
  
  pTVar5 = (TObjectPtr<UMovieGraphGlobalVariable>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar5 + this->ArrayNum;
  do {
    if (pTVar5 == pTVar1) {
      return (TObjectPtr<UMovieGraphGlobalVariable> *)0x0;
    }
    TVar2.field0_0x0 = (TObjectPtr<UMovieGraphGlobalVariable>_u_0)pTVar5->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (TVar2.field0_0x0 != (UMovieGraphGlobalVariable *)0x0) goto LAB_14dc6daf0;
    }
    else if (TVar2.field0_0x0 != (UMovieGraphGlobalVariable *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
LAB_14dc6daf0:
      pUVar3 = *(UClass **)((longlong)TVar2.field0_0x0 + 0x10);
      pUVar4 = UMovieGraphGlobalVariable_ShotName::StaticClass();
      if (pUVar3 == pUVar4) {
        return (TObjectPtr<UMovieGraphGlobalVariable> *)pTVar5;
      }
    }
    pTVar5 = pTVar5 + 1;
  } while( true );
}

// FindLastByPredicate<`UMovieGraphVariable::SetCategory'::__l8::<lambda_3>_> @ 14dc6de80

int __thiscall
TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UMovieGraphVariable::SetCategory_::__l8::<lambda_3>_>
          (TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> *this,<lambda_3> param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar7 = pFVar3 + (longlong)param_2 * 8;
  do {
    if (pFVar7 == pFVar3) {
      return -1;
    }
    pFVar1 = pFVar7 + -8;
    pFVar7 = pFVar7 + -8;
    iVar6 = ((param_1.InNewCategory)->Data).ArrayNum;
    iVar2 = *(int *)(*(longlong *)pFVar1 + 0x80);
    if (iVar2 == iVar6) {
      if (iVar2 < 2) break;
      iVar6 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(*(longlong *)pFVar1 + 0x78),
                         (wchar_t *)((param_1.InNewCategory)->Data).AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
    }
    else {
      bVar5 = iVar2 + iVar6 == 1;
    }
  } while (!bVar5);
  return (int)((longlong)pFVar7 - (longlong)pFVar3 >> 3);
}

// GetFullNameForCastLogError<UMovieGraphNode> @ 14dc6e320

FString * __cdecl
GetFullNameForCastLogError<UMovieGraphNode>
          (FString *__return_storage_ptr__,UMovieGraphNode *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieGraphSettingNode> @ 14dc6e4b0

FString * __cdecl GetTypeName<UMovieGraphSettingNode>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<AMoviePipelineGameMode> @ 14dc6e4f0

void __cdecl InternalConstructor<AMoviePipelineGameMode>(FObjectInitializer *param_1)

{
  AGameModeBase *this;
  
  this = (AGameModeBase *)param_1->Obj;
  if (this != (AGameModeBase *)0x0) {
    AGameModeBase::AGameModeBase(this,param_1);
    this->_padding_ = (longlong)&___7AMoviePipelineGameMode__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphBlueprintLibrary> @ 14dc6e520

void __cdecl InternalConstructor<UMovieGraphBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieGraphBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphBurnInWidget> @ 14dc6e550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieGraphBurnInWidget>(FObjectInitializer *param_1)

{
  UUserWidget *this;
  
  this = (UUserWidget *)param_1->Obj;
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&UMovieGraphBurnInWidget::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UMovieGraphBurnInWidget::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UMovieGraphBurnInWidget__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphConfig> @ 14dc6e5a0

void __cdecl InternalConstructor<UMovieGraphConfig>(FObjectInitializer *param_1)

{
  UMovieGraphConfig *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieGraphNode *pUVar4;
  FName local_res8;
  
  this = (UMovieGraphConfig *)param_1->Obj;
  if (this != (UMovieGraphConfig *)0x0) {
    UObject::UObject((UObject *)this);
    this->_padding_ = (longlong)&___7UMovieGraphConfig__6B_;
    (this->AllNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AllNodes).ArrayNum = 0;
    (this->AllNodes).ArrayMax = 0;
    (this->InputNode).field0_0x0.DebugPtr = (UMovieGraphNode *)0x0;
    (this->OutputNode).field0_0x0.DebugPtr = (UMovieGraphNode *)0x0;
    (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Variables).ArrayNum = 0;
    (this->Variables).ArrayMax = 0;
    (this->GlobalVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GlobalVariables).ArrayNum = 0;
    (this->GlobalVariables).ArrayMax = 0;
    (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Inputs).ArrayNum = 0;
    (this->Inputs).ArrayMax = 0;
    (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Outputs).ArrayNum = 0;
    (this->Outputs).ArrayMax = 0;
    pFVar2 = FName::FName(&local_res8,L"DefaultInputNode");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UMovieGraphInputNode_NoRegister();
    pUVar4 = (UMovieGraphNode *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMovieGraphNode *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->InputNode).field0_0x0.DebugPtr = pUVar4;
    pFVar2 = FName::FName(&local_res8,L"DefaultOutputNode");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UMovieGraphOutputNode_NoRegister();
    pUVar4 = (UMovieGraphNode *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMovieGraphNode *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->OutputNode).field0_0x0.DebugPtr = pUVar4;
    if ((this->_padding_ & 0x1410) == 0) {
      UMovieGraphConfig::AddDefaultMembers(this);
      UMovieGraphNode::UpdatePins((this->InputNode).field0_0x0.DebugPtr);
      UMovieGraphNode::UpdatePins((this->OutputNode).field0_0x0.DebugPtr);
      return;
    }
  }
  return;
}

// InternalConstructor<UMovieGraphCoreTimeStep> @ 14dc6e6e0

void __cdecl InternalConstructor<UMovieGraphCoreTimeStep>(FObjectInitializer *param_1)

{
  UMovieGraphTimeStepBase *this;
  FObjectInitializer *pFVar1;
  
  this = (UMovieGraphTimeStepBase *)param_1->Obj;
  if (this == (UMovieGraphTimeStepBase *)0x0) {
    return;
  }
  pFVar1 = FObjectInitializer::Get();
  UMovieGraphTimeStepBase::UMovieGraphTimeStepBase(this,pFVar1);
  this[9].field_0x20 = 1;
  *(undefined ***)this = &___7UMovieGraphCoreTimeStep__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined4 *)&this[1].field_0x10 = 0;
  this[1].field_0x14 = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined4 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined8 *)&this[2].field_0x20 = 0;
  *(undefined8 *)(this + 3) = 0;
  *(undefined4 *)&this[3].field_0x8 = 0;
  this[3].field_0xc = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined1 *)(this + 4) = 0;
  *(undefined4 *)&this[4].field_0x4 = 0;
  *(undefined8 *)&this[4].field_0x1c = 0;
  *(undefined8 *)&this[5].field_0x4 = 0;
  *(undefined8 *)&this[5].field_0xc = 0;
  *(undefined8 *)&this[5].field_0x14 = 0;
  *(undefined8 *)&this[5].field_0x1c = 0;
  *(undefined8 *)&this[5].field_0x24 = 0;
  *(undefined4 *)&this[6].field_0x4 = 0;
  *(undefined8 *)&this[6].field_0xc = 0;
  *(undefined8 *)&this[6].field_0x18 = 0;
  *(undefined8 *)&this[6].field_0x24 = 0;
  *(undefined8 *)&this[7].field_0x8 = 0;
  *(undefined8 *)&this[7].field_0x14 = 0;
  *(undefined8 *)&this[7].field_0x20 = 0;
  *(undefined8 *)&this[8].field_0x4 = 0;
  *(undefined8 *)&this[8].field_0x10 = 0;
  *(undefined8 *)&this[8].field_0x1c = 0;
  *(undefined8 *)(this + 9) = 0;
  *(undefined8 *)&this[9].field_0x8 = 0;
  *(undefined8 *)&this[9].field_0x10 = 0;
  *(undefined8 *)&this[9].field_0x18 = 0;
  *(undefined4 *)&this[4].field_0x8 = 60000;
  *(undefined4 *)&this[4].field_0xc = 1;
  *(undefined4 *)&this[4].field_0x10 = 60000;
  *(undefined8 *)&this[4].field_0x14 = 1;
  *(undefined8 *)&this[4].field_0x24 = 0x3f800000;
  this[6].field_0x8 = 2;
  this[6].field_0x14 = 2;
  this[6].field_0x20 = 2;
  this[7].field_0x4 = 2;
  this[7].field_0x10 = 2;
  this[7].field_0x1c = 2;
  *(undefined1 *)(this + 8) = 2;
  this[8].field_0xc = 2;
  this[8].field_0x18 = 2;
  this[8].field_0x24 = 2;
  return;
}

// InternalConstructor<UMovieGraphEvaluatedConfig> @ 14dc6e700

void __cdecl InternalConstructor<UMovieGraphEvaluatedConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphEvaluatedConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x4 = 0x80;
    *(undefined4 *)&this[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[4].field_0xc = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphGlobalVariable> @ 14dc6e7b0

void __cdecl InternalConstructor<UMovieGraphGlobalVariable>(FObjectInitializer *param_1)

{
  UMovieGraphValueContainer *this;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphGlobalVariable_CameraName> @ 14dc6e810

void __cdecl InternalConstructor<UMovieGraphGlobalVariable_CameraName>(FObjectInitializer *param_1)

{
  longlong *plVar1;
  UMovieGraphValueContainer *this;
  FString *pFVar2;
  FString local_18;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    plVar1 = &this[1]._padding_;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable_CameraName__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *plVar1 = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 0;
    pFVar2 = FString::FString(&local_18,L"camera_name");
    if ((FString *)plVar1 != pFVar2) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)(pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&this[1]._padding_ = (pFVar2->Data).ArrayNum;
      *(int *)((longlong)&this[1]._padding_ + 4) = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    UMovieGraphValueContainer::SetValueType(this,String,(UObject *)0x0);
    return;
  }
  return;
}

// InternalConstructor<UMovieGraphGlobalVariable_FrameNumber> @ 14dc6e8f0

void __cdecl InternalConstructor<UMovieGraphGlobalVariable_FrameNumber>(FObjectInitializer *param_1)

{
  longlong *plVar1;
  UMovieGraphValueContainer *this;
  FString *pFVar2;
  FString local_18;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    plVar1 = &this[1]._padding_;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable_FrameNumber__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *plVar1 = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 0;
    pFVar2 = FString::FString(&local_18,L"frame_num");
    if ((FString *)plVar1 != pFVar2) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)(pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&this[1]._padding_ = (pFVar2->Data).ArrayNum;
      *(int *)((longlong)&this[1]._padding_ + 4) = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    UMovieGraphValueContainer::SetValueType(this,Int32,(UObject *)0x0);
    return;
  }
  return;
}

// InternalConstructor<UMovieGraphGlobalVariable_SequenceName> @ 14dc6e9d0

void __cdecl
InternalConstructor<UMovieGraphGlobalVariable_SequenceName>(FObjectInitializer *param_1)

{
  longlong *plVar1;
  UMovieGraphValueContainer *this;
  FString *pFVar2;
  FString local_18;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    plVar1 = &this[1]._padding_;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable_SequenceName__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *plVar1 = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 0;
    pFVar2 = FString::FString(&local_18,L"seq_name");
    if ((FString *)plVar1 != pFVar2) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)(pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&this[1]._padding_ = (pFVar2->Data).ArrayNum;
      *(int *)((longlong)&this[1]._padding_ + 4) = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    UMovieGraphValueContainer::SetValueType(this,String,(UObject *)0x0);
    return;
  }
  return;
}

// InternalConstructor<UMovieGraphGlobalVariable_ShotName> @ 14dc6eab0

void __cdecl InternalConstructor<UMovieGraphGlobalVariable_ShotName>(FObjectInitializer *param_1)

{
  longlong *plVar1;
  UMovieGraphValueContainer *this;
  FString *pFVar2;
  FString local_18;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    plVar1 = &this[1]._padding_;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable_ShotName__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *plVar1 = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 0;
    pFVar2 = FString::FString(&local_18,L"shot_name");
    if ((FString *)plVar1 != pFVar2) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)(pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&this[1]._padding_ = (pFVar2->Data).ArrayNum;
      *(int *)((longlong)&this[1]._padding_ + 4) = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    UMovieGraphValueContainer::SetValueType(this,String,(UObject *)0x0);
    return;
  }
  return;
}

// InternalConstructor<UMovieGraphInput> @ 14dc6eb90

void __cdecl InternalConstructor<UMovieGraphInput>(FObjectInitializer *param_1)

{
  UMovieGraphValueContainer *this;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this->_padding_ = (longlong)&___7UMovieGraphInput__6B_;
    *(undefined1 *)&this[1].Value.Value.StructMemory = 1;
  }
  return;
}

// InternalConstructor<UMovieGraphInterfaceBase> @ 14dc6ebe0

void __cdecl InternalConstructor<UMovieGraphInterfaceBase>(FObjectInitializer *param_1)

{
  UMovieGraphValueContainer *this;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this->_padding_ = (longlong)&___7UMovieGraphInterfaceBase__6B_;
    *(undefined1 *)&this[1].Value.Value.StructMemory = 1;
  }
  return;
}

// InternalConstructor<UMovieGraphMember> @ 14dc6ec30

void __cdecl InternalConstructor<UMovieGraphMember>(FObjectInitializer *param_1)

{
  UMovieGraphValueContainer *this;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphOutput> @ 14dc6ec80

void __cdecl InternalConstructor<UMovieGraphOutput>(FObjectInitializer *param_1)

{
  UMovieGraphValueContainer *this;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this->_padding_ = (longlong)&___7UMovieGraphOutput__6B_;
    *(undefined1 *)&this[1].Value.Value.StructMemory = 1;
  }
  return;
}

// InternalConstructor<UMovieGraphRenderPassNode> @ 14dc6ecd0

void __cdecl InternalConstructor<UMovieGraphRenderPassNode>(FObjectInitializer *param_1)

{
  UMovieGraphSettingNode *this;
  
  this = (UMovieGraphSettingNode *)param_1->Obj;
  if (this != (UMovieGraphSettingNode *)0x0) {
    UMovieGraphSettingNode::UMovieGraphSettingNode(this);
    *(undefined ***)this = &___7UMovieGraphRenderPassNode__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    FString::operator=((FString *)&this[1].field_0x8,L"UnnamedRenderPass");
    FString::operator=((FString *)&this[1].field_0x18,L"beauty");
    return;
  }
  return;
}

// InternalConstructor<UMovieGraphRenderPreviewWidget> @ 14dc6ed40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieGraphRenderPreviewWidget>(FObjectInitializer *param_1)

{
  UUserWidget *this;
  
  this = (UUserWidget *)param_1->Obj;
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&UMovieGraphRenderPreviewWidget::_vftable__for__UVisual__;
    this->_padding_ =
         (longlong)&UMovieGraphRenderPreviewWidget::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UMovieGraphRenderPreviewWidget__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphTraversableObject> @ 14dc6ed90

void __cdecl InternalConstructor<UMovieGraphTraversableObject>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieGraphTraversableObject__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphVariable> @ 14dc6edc0

void __cdecl InternalConstructor<UMovieGraphVariable>(FObjectInitializer *param_1)

{
  UMovieGraphValueContainer *this;
  
  this = (UMovieGraphValueContainer *)param_1->Obj;
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this);
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    this->_padding_ = (longlong)&___7UMovieGraphVariable__6B_;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMoviePipelineBase> @ 14dc6ee20

void __cdecl InternalConstructor<UMoviePipelineBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMoviePipelineBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 2;
    *(undefined8 *)&this[3].field_0x18 = 2;
  }
  return;
}

// InternalConstructor<UMoviePipelineHighResSetting> @ 14dc6eea0

void __cdecl InternalConstructor<UMoviePipelineHighResSetting>(FObjectInitializer *param_1)

{
  UMoviePipelineSetting *this;
  
  this = (UMoviePipelineSetting *)param_1->Obj;
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this);
    this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UMoviePipelineHighResSetting__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x40;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UMoviePipelineInProcessExecutorSettings> @ 14dc6eef0

void __cdecl
InternalConstructor<UMoviePipelineInProcessExecutorSettings>(FObjectInitializer *param_1)

{
  longlong *this;
  UDeveloperSettings *this_00;
  int iVar1;
  FObjectInitializer *pFVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = (UDeveloperSettings *)param_1->Obj;
  if (this_00 != (UDeveloperSettings *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UDeveloperSettings::UDeveloperSettings(this_00,pFVar2);
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutorSettings__6B_;
    this = &this_00[1]._padding_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *this = 0;
    this_00[1]._padding_ = 0;
    FString::operator=((FString *)&this_00[1]._padding_,
                       L"-NoLoadingScreen -FixedSeed -log -Unattended -MRQInstance -deterministicaudio -audiomixer"
                      );
    this_00[1].CategoryName.ComparisonIndex.Value = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    pwVar3 = FCommandLine::Get();
    FCommandLine::Parse(pwVar3,&local_28,&local_38);
    iVar1 = local_38.ArrayNum;
    pFVar5 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
    FVar4.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar4.Data == pFVar5) break;
      FString::AppendChar((FString *)this,L'-');
      iVar6 = *(int *)(FVar4.Data + 8) + -1;
      if (*(int *)(FVar4.Data + 8) == 0) {
        iVar6 = 0;
      }
      FString::AppendChars((FString *)this,*(wchar_t **)FVar4.Data,iVar6);
      FString::AppendChar((FString *)this,L' ');
      FVar4.Data = FVar4.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// InternalConstructor<UMoviePipelineOutputBase> @ 14dc6f050

void __cdecl InternalConstructor<UMoviePipelineOutputBase>(FObjectInitializer *param_1)

{
  UMoviePipelineSetting *this;
  
  this = (UMoviePipelineSetting *)param_1->Obj;
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this);
    this->_padding_ = (longlong)&___7UMoviePipelineOutputBase__6B_;
  }
  return;
}

// InternalConstructor<UMoviePipelineRenderPass> @ 14dc6f080

void __cdecl InternalConstructor<UMoviePipelineRenderPass>(FObjectInitializer *param_1)

{
  UMoviePipelineSetting *this;
  
  this = (UMoviePipelineSetting *)param_1->Obj;
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this);
    this->_padding_ = (longlong)&___7UMoviePipelineRenderPass__6B_;
  }
  return;
}

// InternalConstructor<UMoviePipelineViewFamilySetting> @ 14dc6f0b0

void __cdecl InternalConstructor<UMoviePipelineViewFamilySetting>(FObjectInitializer *param_1)

{
  UMoviePipelineSetting *this;
  
  this = (UMoviePipelineSetting *)param_1->Obj;
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this);
    this->_padding_ = (longlong)&___7UMoviePipelineViewFamilySetting__6B_;
  }
  return;
}

// InternalConstructor<UMovieRenderDebugWidget> @ 14dc6f0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieRenderDebugWidget>(FObjectInitializer *param_1)

{
  UUserWidget *this;
  
  this = (UUserWidget *)param_1->Obj;
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&UMovieRenderDebugWidget::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UMovieRenderDebugWidget::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UMovieRenderDebugWidget__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<AMoviePipelineGameMode> @ 14dc6f130

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AMoviePipelineGameMode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AGameModeBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AMoviePipelineGameMode::GetPrivateStaticClass();
  this = (AGameModeBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AGameModeBase *)0x0) {
    AGameModeBase::AGameModeBase(this,param_1);
    this->_padding_ = (longlong)&___7AMoviePipelineGameMode__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphBlueprintLibrary> @ 14dc6f1e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphBurnInWidget> @ 14dc6f290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphBurnInWidget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphBurnInWidget::GetPrivateStaticClass();
  this = (UUserWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&UMovieGraphBurnInWidget::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UMovieGraphBurnInWidget::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UMovieGraphBurnInWidget__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConfig> @ 14dc6f360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConfig__6B_;
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
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphCoreTimeStep> @ 14dc6f440

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphCoreTimeStep>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphCoreTimeStep *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphCoreTimeStep::GetPrivateStaticClass();
  pUVar3 = (UMovieGraphCoreTimeStep *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieGraphCoreTimeStep *)0x0) {
    pUVar3 = UMovieGraphCoreTimeStep::UMovieGraphCoreTimeStep(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphEvaluatedConfig> @ 14dc6f4e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphEvaluatedConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphEvaluatedConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphEvaluatedConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable> @ 14dc6f610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphGlobalVariable::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_CameraName> @ 14dc6f6f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_CameraName>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphGlobalVariable_CameraName::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable_CameraName__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_FrameNumber> @ 14dc6f7d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_FrameNumber>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphGlobalVariable_FrameNumber::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable_FrameNumber__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_SequenceName> @ 14dc6f8b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_SequenceName>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphGlobalVariable_SequenceName::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable_SequenceName__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_ShotName> @ 14dc6f990

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_ShotName>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphGlobalVariable_ShotName::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphGlobalVariable_ShotName__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphInput> @ 14dc6fa70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphInput>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphInput::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphInput__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    *(undefined1 *)&this[1].Value.Value.StructMemory = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphInterfaceBase> @ 14dc6fb40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphInterfaceBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphInterfaceBase::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphInterfaceBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    *(undefined1 *)&this[1].Value.Value.StructMemory = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphMember> @ 14dc6fc10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphMember>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphMember::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphOutput> @ 14dc6fce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphOutput>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphOutput::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphOutput__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    *(undefined1 *)&this[1].Value.Value.StructMemory = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphRenderPassNode> @ 14dc6fdb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphRenderPassNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphSettingNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphRenderPassNode::GetPrivateStaticClass();
  this = (UMovieGraphSettingNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphSettingNode *)0x0) {
    UMovieGraphSettingNode::UMovieGraphSettingNode(this,param_1);
    *(undefined ***)this = &___7UMovieGraphRenderPassNode__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphRenderPreviewWidget> @ 14dc6fe80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphRenderPreviewWidget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphRenderPreviewWidget::GetPrivateStaticClass();
  this = (UUserWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&UMovieGraphRenderPreviewWidget::_vftable__for__UVisual__;
    this->_padding_ =
         (longlong)&UMovieGraphRenderPreviewWidget::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UMovieGraphRenderPreviewWidget__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphTraversableObject> @ 14dc6ff50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphTraversableObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphTraversableObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphTraversableObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphVariable> @ 14dc70000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphValueContainer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphVariable::GetPrivateStaticClass();
  this = (UMovieGraphValueContainer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphValueContainer *)0x0) {
    UMovieGraphValueContainer::UMovieGraphValueContainer(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMovieGraphVariable__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PropertyName.ComparisonIndex = 0;
    this[1].PropertyName.Number = 0;
    *(undefined1 *)&this[1].Value.Value.ScriptStruct.field0_0x0 = 1;
    this[1].Value.Value.StructMemory = (uchar *)0x0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineBase> @ 14dc700e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMoviePipelineBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineHighResSetting> @ 14dc701e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineHighResSetting>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineSetting *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineHighResSetting::GetPrivateStaticClass();
  this = (UMoviePipelineSetting *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelineHighResSetting__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutorSettings> @ 14dc70290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutorSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineInProcessExecutorSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutorSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineOutputBase> @ 14dc70350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineOutputBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineSetting *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineOutputBase::GetPrivateStaticClass();
  this = (UMoviePipelineSetting *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelineOutputBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineRenderPass> @ 14dc70400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePipelineRenderPass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineSetting *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineRenderPass::GetPrivateStaticClass();
  this = (UMoviePipelineSetting *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelineRenderPass__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMoviePipelineViewFamilySetting> @ 14dc704b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMoviePipelineViewFamilySetting>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineSetting *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePipelineViewFamilySetting::GetPrivateStaticClass();
  this = (UMoviePipelineSetting *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineSetting *)0x0) {
    UMoviePipelineSetting::UMoviePipelineSetting(this,param_1);
    this->_padding_ = (longlong)&___7UMoviePipelineViewFamilySetting__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieRenderDebugWidget> @ 14dc70560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieRenderDebugWidget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieRenderDebugWidget::GetPrivateStaticClass();
  this = (UUserWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget(this,param_1);
    this->_padding_ = (longlong)&UMovieRenderDebugWidget::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UMovieRenderDebugWidget::_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UMovieRenderDebugWidget__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MutableView<TObjectPtr<UMovieGraphValueContainer>_> @ 14dc706d0

TMutableView<TObjectPtr<UMovieGraphValueContainer>_> __cdecl
MutableView<TObjectPtr<UMovieGraphValueContainer>_>(TObjectPtr<UMovieGraphValueContainer> *param_1)

{
  TObjectPtr<UMovieGraphValueContainer>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UMovieGraphValueContainer>_>)(UMovieGraphValueContainer **)param_1
  ;
}

// NewObject<UMovieGraphEvaluatedConfig> @ 14dc706e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphEvaluatedConfig * __cdecl
NewObject<UMovieGraphEvaluatedConfig>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphEvaluatedConfig *pUVar2;
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
  pUVar1 = UMovieGraphEvaluatedConfig::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphEvaluatedConfig *)
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

// NewObject<UMovieGraphGlobalVariable_CameraName> @ 14dc707d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphGlobalVariable_CameraName * __cdecl
NewObject<UMovieGraphGlobalVariable_CameraName>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphGlobalVariable_CameraName *pUVar2;
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
  pUVar1 = UMovieGraphGlobalVariable_CameraName::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphGlobalVariable_CameraName *)
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

// NewObject<UMovieGraphGlobalVariable_FrameNumber> @ 14dc708c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphGlobalVariable_FrameNumber * __cdecl
NewObject<UMovieGraphGlobalVariable_FrameNumber>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphGlobalVariable_FrameNumber *pUVar2;
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
  pUVar1 = UMovieGraphGlobalVariable_FrameNumber::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphGlobalVariable_FrameNumber *)
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

// NewObject<UMovieGraphGlobalVariable_SequenceName> @ 14dc709b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphGlobalVariable_SequenceName * __cdecl
NewObject<UMovieGraphGlobalVariable_SequenceName>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphGlobalVariable_SequenceName *pUVar2;
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
  pUVar1 = UMovieGraphGlobalVariable_SequenceName::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphGlobalVariable_SequenceName *)
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

// NewObject<UMovieGraphGlobalVariable_ShotName> @ 14dc70aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphGlobalVariable_ShotName * __cdecl
NewObject<UMovieGraphGlobalVariable_ShotName>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphGlobalVariable_ShotName *pUVar2;
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
  pUVar1 = UMovieGraphGlobalVariable_ShotName::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphGlobalVariable_ShotName *)
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

// NewObject<UMovieGraphInput> @ 14dc70b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphInput * __cdecl
NewObject<UMovieGraphInput>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphInput *pUVar2;
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
  pUVar1 = UMovieGraphInput::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphInput *)
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

// NewObject<UMovieGraphNode> @ 14dc70c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphNode * __cdecl
NewObject<UMovieGraphNode>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieGraphNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieGraphNode_NoRegister();
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
  pUVar2 = (UMovieGraphNode *)
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

// NewObject<UMovieGraphOutput> @ 14dc70d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphOutput * __cdecl
NewObject<UMovieGraphOutput>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphOutput *pUVar2;
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
  pUVar1 = UMovieGraphOutput::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphOutput *)
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

// NewObject<UMovieGraphSettingNode> @ 14dc70e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphSettingNode * __cdecl
NewObject<UMovieGraphSettingNode>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieGraphSettingNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
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
  pUVar2 = (UMovieGraphSettingNode *)
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

// NewObject<UMovieGraphValueContainer> @ 14dc70f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphValueContainer * __cdecl NewObject<UMovieGraphValueContainer>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieGraphValueContainer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieGraphValueContainer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieGraphValueContainer *)
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

// NewObject<UMovieGraphVariable> @ 14dc71010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphVariable * __cdecl
NewObject<UMovieGraphVariable>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphVariable *pUVar2;
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
  pUVar1 = UMovieGraphVariable::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphVariable *)
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

// ObjectPtrWrap<UMovieGraphValueContainer_*,TObjectPtr<UMovieGraphValueContainer>_> @ 14dc71100

TObjectPtr<UMovieGraphValueContainer> * __cdecl
ObjectPtrWrap<UMovieGraphValueContainer_*,TObjectPtr<UMovieGraphValueContainer>_>
          (UMovieGraphValueContainer **param_1)

{
  return (TObjectPtr<UMovieGraphValueContainer> *)param_1;
}

// StaticEnum<enum_EMovieGraphContainerType> @ 14dc71110

UEnum * __cdecl StaticEnum<enum_EMovieGraphContainerType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType,
                       (UObject *)pUVar1,L"EMovieGraphContainerType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphValueType> @ 14dc71150

UEnum * __cdecl StaticEnum<enum_EMovieGraphValueType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType,
                       (UObject *)pUVar1,L"EMovieGraphValueType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton;
}

// Transform<TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`UMovieGraphVariable::SetCategory'::__l2::<lambda_2>_> @ 14dc71190

/* WARNING: Removing unreachable block (ram,0x00014dc7130a) */

void __cdecl
Algo::
Transform<TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphVariable::SetCategory_::__l2::<lambda_2>_>
          (TArray<UMovieGraphVariable_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_2> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMovieGraphVariable_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(*(longlong *)pFVar7 + 0x80);
    _Src = *(void **)(*(longlong *)pFVar7 + 0x78);
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5 * 2);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0xc) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_CameraName,UMovieGraphGlobalVariable>'::__l8::<lambda_1>_> @ 14dc71350

/* WARNING: Removing unreachable block (ram,0x00014dc714c7) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_CameraName,UMovieGraphGlobalVariable>_::__l8::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphGlobalVariable>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(*(longlong *)pFVar7 + 0x58);
    _Src = *(void **)(*(longlong *)pFVar7 + 0x50);
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5 * 2);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0xc) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_FrameNumber,UMovieGraphGlobalVariable>'::__l8::<lambda_1>_> @ 14dc71510

/* WARNING: Removing unreachable block (ram,0x00014dc71687) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_FrameNumber,UMovieGraphGlobalVariable>_::__l8::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphGlobalVariable>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(*(longlong *)pFVar7 + 0x58);
    _Src = *(void **)(*(longlong *)pFVar7 + 0x50);
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5 * 2);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0xc) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_SequenceName,UMovieGraphGlobalVariable>'::__l8::<lambda_1>_> @ 14dc716d0

/* WARNING: Removing unreachable block (ram,0x00014dc71847) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_SequenceName,UMovieGraphGlobalVariable>_::__l8::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphGlobalVariable>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(*(longlong *)pFVar7 + 0x58);
    _Src = *(void **)(*(longlong *)pFVar7 + 0x50);
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5 * 2);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0xc) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_ShotName,UMovieGraphGlobalVariable>'::__l8::<lambda_1>_> @ 14dc71890

/* WARNING: Removing unreachable block (ram,0x00014dc71a07) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphGlobalVariable_ShotName,UMovieGraphGlobalVariable>_::__l8::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphGlobalVariable>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphGlobalVariable>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(*(longlong *)pFVar7 + 0x58);
    _Src = *(void **)(*(longlong *)pFVar7 + 0x50);
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5 * 2);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0xc) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<TObjectPtr<UMovieGraphInput>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`UMovieGraphConfig::AddMember<UMovieGraphInput,UMovieGraphInput>'::__l8::<lambda_1>_> @ 14dc71a50

/* WARNING: Removing unreachable block (ram,0x00014dc71bc7) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMovieGraphInput>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphInput,UMovieGraphInput>_::__l8::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphInput>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphInput>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(*(longlong *)pFVar7 + 0x58);
    _Src = *(void **)(*(longlong *)pFVar7 + 0x50);
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5 * 2);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0xc) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<TObjectPtr<UMovieGraphOutput>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`UMovieGraphConfig::AddMember<UMovieGraphOutput,UMovieGraphOutput>'::__l8::<lambda_1>_> @ 14dc71c10

/* WARNING: Removing unreachable block (ram,0x00014dc71d87) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMovieGraphOutput>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphOutput,UMovieGraphOutput>_::__l8::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphOutput>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphOutput>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(*(longlong *)pFVar7 + 0x58);
    _Src = *(void **)(*(longlong *)pFVar7 + 0x50);
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5 * 2);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0xc) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`UMovieGraphConfig::AddMember<UMovieGraphVariable,UMovieGraphVariable>'::__l8::<lambda_1>_> @ 14dc71dd0

/* WARNING: Removing unreachable block (ram,0x00014dc71f47) */

void __cdecl
Algo::
Transform<TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_UMovieGraphConfig::AddMember<UMovieGraphVariable,UMovieGraphVariable>_::__l8::<lambda_1>_>
          (TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphVariable>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar5 = *(int *)(*(longlong *)pFVar7 + 0x58);
    _Src = *(void **)(*(longlong *)pFVar7 + 0x50);
    local_30 = CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar5 * 2);
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_30;
    *(undefined4 *)(pFVar6 + 0xc) = local_30._4_4_;
    local_30 = 0;
    pFVar7 = pFVar7 + 8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ~TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::__l147::<lambda_1>,0,1> @ 14dc73c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::__l147::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UMovieGraphConfig::CreateFlattenedGraph_::__l147::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::`147'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{432}' @ 14dc76964

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieGraphBurnInWidget::`vector deleting
   destructor'`adjustor{432}' (unsigned int) __ptr64 */

void * __thiscall
UMovieGraphBurnInWidget::_vector_deleting_destructor__adjustor_432__
          (UMovieGraphBurnInWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieGraphBurnInWidget *)&this[-1].field_0x1f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14dc76978

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieGraphBurnInWidget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieGraphBurnInWidget::_vector_deleting_destructor__adjustor_40__
          (UMovieGraphBurnInWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieGraphBurnInWidget *)&this[-1].field_0x380,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{432}' @ 14dc76988

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieGraphRenderPreviewWidget::`vector deleting
   destructor'`adjustor{432}' (unsigned int) __ptr64 */

void * __thiscall
UMovieGraphRenderPreviewWidget::_vector_deleting_destructor__adjustor_432__
          (UMovieGraphRenderPreviewWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieGraphRenderPreviewWidget *)&this[-1].field_0x1f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14dc7699c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieGraphRenderPreviewWidget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieGraphRenderPreviewWidget::_vector_deleting_destructor__adjustor_40__
          (UMovieGraphRenderPreviewWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieGraphRenderPreviewWidget *)&this[-1].field_0x380,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{432}' @ 14dc769ac

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieRenderDebugWidget::`vector deleting
   destructor'`adjustor{432}' (unsigned int) __ptr64 */

void * __thiscall
UMovieRenderDebugWidget::_vector_deleting_destructor__adjustor_432__
          (UMovieRenderDebugWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieRenderDebugWidget *)&this[-1].field_0x1f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14dc769c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieRenderDebugWidget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMovieRenderDebugWidget::_vector_deleting_destructor__adjustor_40__
          (UMovieRenderDebugWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieRenderDebugWidget *)&this[-1].field_0x380,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14dc769d0

void * __thiscall
IBaseDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76a00

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetDownstreamBranchNames'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76a30

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetNodesForBranch'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76a60

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphConfig::GetUpstreamBranchNames'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76a90

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::__l147::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::`147'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76b00

void * __thiscall
AMoviePipelineGameMode::_scalar_deleting_destructor_(AMoviePipelineGameMode *this,uint param_1)

{
  *(undefined ***)this = &___7AMoviePipelineGameMode__6B_;
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76b60

void * __thiscall
UMovieGraphBlueprintLibrary::_scalar_deleting_destructor_
          (UMovieGraphBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphBlueprintLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14dc76bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UMovieGraphBurnInWidget::_scalar_deleting_destructor_(UMovieGraphBurnInWidget *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieGraphBurnInWidget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76c40

void * __thiscall
UMovieGraphConfig::_scalar_deleting_destructor_(UMovieGraphConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConfig__6B_;
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GlobalVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Variables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76cf0

void * __thiscall
UMovieGraphCoreTimeStep::_scalar_deleting_destructor_(UMovieGraphCoreTimeStep *this,uint param_1)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphCoreTimeStep__6B_;
  pUVar1 = (this->CurrentFrameData).EvaluatedConfig.Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->CurrentFrameData).EvaluatedConfig.Object = (UObject *)0x0;
  }
  pFVar2 = (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMovieGraphTimeStepBase::~UMovieGraphTimeStepBase((UMovieGraphTimeStepBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76d80

void * __thiscall
UMovieGraphEngineTimeStep::_scalar_deleting_destructor_
          (UMovieGraphEngineTimeStep *this,uint param_1)

{
  ~UMovieGraphEngineTimeStep(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76de0

void * __thiscall
UMovieGraphEvaluatedConfig::_scalar_deleting_destructor_
          (UMovieGraphEvaluatedConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphEvaluatedConfig__6B_;
  pFVar1 = (this->EvaluatedGraphs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->VariablesByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->VariablesByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VariablesByName);
  *(undefined4 *)&(this->BranchConfigMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BranchConfigMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMovieGraphEvaluatedBranchConfig>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMovieGraphEvaluatedBranchConfig>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMovieGraphEvaluatedBranchConfig>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BranchConfigMapping);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76eb0

void * __thiscall
UMovieGraphGlobalVariable::_scalar_deleting_destructor_
          (UMovieGraphGlobalVariable *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphVariable__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76f50

void * __thiscall
UMovieGraphGlobalVariable_CameraName::_scalar_deleting_destructor_
          (UMovieGraphGlobalVariable_CameraName *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphVariable__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc76ff0

void * __thiscall
UMovieGraphGlobalVariable_FrameNumber::_scalar_deleting_destructor_
          (UMovieGraphGlobalVariable_FrameNumber *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphVariable__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc77090

void * __thiscall
UMovieGraphGlobalVariable_SequenceName::_scalar_deleting_destructor_
          (UMovieGraphGlobalVariable_SequenceName *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphVariable__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc77130

void * __thiscall
UMovieGraphGlobalVariable_ShotName::_scalar_deleting_destructor_
          (UMovieGraphGlobalVariable_ShotName *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphVariable__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc771d0

void * __thiscall
UMovieGraphInput::_scalar_deleting_destructor_(UMovieGraphInput *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc77250

void * __thiscall
UMovieGraphInterfaceBase::_scalar_deleting_destructor_(UMovieGraphInterfaceBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc772d0

void * __thiscall
UMovieGraphMember::_scalar_deleting_destructor_(UMovieGraphMember *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc77350

void * __thiscall
UMovieGraphOutput::_scalar_deleting_destructor_(UMovieGraphOutput *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc773d0

void * __thiscall
UMovieGraphRenderPassNode::_scalar_deleting_destructor_
          (UMovieGraphRenderPassNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderPassNode__6B_;
  pFVar1 = (this->RendererSubName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc77460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UMovieGraphRenderPreviewWidget::_scalar_deleting_destructor_
          (UMovieGraphRenderPreviewWidget *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieGraphRenderPreviewWidget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc774e0

void * __thiscall
UMovieGraphTraversableObject::_scalar_deleting_destructor_
          (UMovieGraphTraversableObject *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14dc77540

void * __thiscall
UMovieGraphVariable::_scalar_deleting_destructor_(UMovieGraphVariable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphVariable__6B_;
  pFVar1 = (this->Category).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphMember__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc775e0

void * __thiscall
UMoviePipelineBase::_scalar_deleting_destructor_(UMoviePipelineBase *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineBase__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x8,
             *(int *)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x10);
  pvVar1 = *(void **)&(this->OnMoviePipelineShotWorkFinishedDelegateNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePipelineShotWorkFinishedDelegateNative);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x8,
             *(int *)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x10);
  pvVar1 = *(void **)&(this->OnMoviePipelineWorkFinishedDelegateNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePipelineWorkFinishedDelegateNative);
  pvVar1 = *(void **)&(this->OnMoviePipelineShotWorkFinishedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePipelineShotWorkFinishedDelegate);
  pvVar1 = *(void **)&(this->OnMoviePipelineWorkFinishedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePipelineWorkFinishedDelegate);
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

// `scalar_deleting_destructor' @ 14dc776d0

void * __thiscall
UMoviePipelineHighResSetting::_scalar_deleting_destructor_
          (UMoviePipelineHighResSetting *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMoviePipelineHighResSetting__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc77730

void * __thiscall
UMoviePipelineInProcessExecutorSettings::_scalar_deleting_destructor_
          (UMoviePipelineInProcessExecutorSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineInProcessExecutorSettings__6B_;
  pFVar1 = (this->InheritedCommandLineArguments).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalCommandLineArguments).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc777b0

void * __thiscall
UMoviePipelineOutputBase::_scalar_deleting_destructor_(UMoviePipelineOutputBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMoviePipelineOutputBase__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc77810

void * __thiscall
UMoviePipelineRenderPass::_scalar_deleting_destructor_(UMoviePipelineRenderPass *this,uint param_1)

{
  *(undefined ***)this = &___7UMoviePipelineRenderPass__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc77870

void * __thiscall
UMoviePipelineViewFamilySetting::_scalar_deleting_destructor_
          (UMoviePipelineViewFamilySetting *this,uint param_1)

{
  *(undefined ***)this = &___7UMoviePipelineViewFamilySetting__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dc778d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UMovieRenderDebugWidget::_scalar_deleting_destructor_(UMovieRenderDebugWidget *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UMovieRenderDebugWidget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3a8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphBlueprintLibrary @ 14dc7e3a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphBurnInWidget @ 14dc7e3b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphBurnInWidget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphCommon @ 14dc7e3c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphConfig @ 14dc7e3d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphCoreTimeStep @ 14dc7e3e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphCoreTimeStep(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphNamedResolution @ 14dc7e3f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphNamedResolution(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphRenderDataIdentifier @ 14dc7e400

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphRenderDataIdentifier(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphRenderPassNode @ 14dc7e410

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphRenderPassNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphTimeStepData @ 14dc7e420

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphTimeStepData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphTraversalContext @ 14dc7e430

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphTraversalContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineBase @ 14dc7e440

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineGameMode @ 14dc7e450

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineGameMode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineHighResSetting @ 14dc7e460

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineHighResSetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineInProcessExecutorSettings @ 14dc7e470

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineInProcessExecutorSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineOutputBase @ 14dc7e480

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineOutputBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineRenderPass @ 14dc7e490

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineRenderPass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePipelineViewFamilySetting @ 14dc7e4a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePipelineViewFamilySetting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieRenderDebugWidget @ 14dc7e4b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieRenderDebugWidget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineCore_init @ 14dc7e4c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineCore_init(void)

{
  return;
}

// FMoviePipelineWorkFinished_DelegateWrapper @ 14dc7e560

void __cdecl
FMoviePipelineWorkFinished_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          FMoviePipelineOutputData *param_2)

{
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UMoviePipelineBase *pUVar3;
  UMoviePipelineExecutorJob *pUVar4;
  FMoviePipelineShotOutputData *pFVar5;
  FMovieGraphRenderOutputData *pFVar6;
  FScriptContainerElement *pFVar7;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UMoviePipelineBase>_u_0 local_58;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_50;
  undefined1 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar3 = (param_2->Pipeline).field0_0x0.DebugPtr, pUVar3 != (UMoviePipelineBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_58 = (param_2->Pipeline).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_2->Job).field0_0x0.DebugPtr, pUVar4 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_50 = (param_2->Job).field0_0x0;
  pTVar1 = &param_2->ShotData;
  local_48 = param_2->bSuccess;
  if ((TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *)&local_40 != pTVar1) {
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)local_40.Data,(int)local_38);
    iVar2 = (param_2->ShotData).ArrayNum;
    pFVar5 = (FMoviePipelineShotOutputData *)(pTVar1->AllocatorInstance).Data;
    local_38 = CONCAT44(local_38._4_4_,iVar2);
    if ((iVar2 == 0) && (local_38._4_4_ == 0)) {
      local_38 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar2,local_38._4_4_,&local_40,iVar2,(int *)((longlong)&local_38 + 4));
      ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
                (local_40.Data,pFVar5,iVar2);
    }
  }
  pTVar8 = &param_2->GraphData;
  if ((TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *)&local_30 != pTVar8) {
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)local_30.Data,(int)local_28);
    iVar2 = (param_2->GraphData).ArrayNum;
    pFVar6 = (FMovieGraphRenderOutputData *)(pTVar8->AllocatorInstance).Data;
    local_28 = CONCAT44(local_28._4_4_,iVar2);
    if ((iVar2 == 0) && (local_28._4_4_ == 0)) {
      local_28 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar2,local_28._4_4_,&local_30,iVar2,(int *)((longlong)&local_28 + 4));
      ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
                (local_30.Data,pFVar6,iVar2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_58);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)local_30.Data,(int)local_28);
  if ((FMovieGraphRenderOutputData *)local_30.Data != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_30.Data);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)local_40.Data,(int)local_38);
  if ((FMoviePipelineShotOutputData *)local_40.Data != (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_40.Data);
  }
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(pTVar8->AllocatorInstance).Data,
             (param_2->GraphData).ArrayNum);
  pFVar7 = (pTVar8->AllocatorInstance).Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(pTVar1->AllocatorInstance).Data,
             (param_2->ShotData).ArrayNum);
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// FindCurrentWorld @ 14dc7e950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl MoviePipeline::FindCurrentWorld(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UWorld *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pUVar4 = (UWorld *)0x0;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  pFVar5 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar3 = *piVar1;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar2) break;
    if (**(char **)pFVar5 == '\x01') {
      pUVar4 = *(UWorld **)(*(char **)pFVar5 + 0x2c0);
    }
    pFVar5 = pFVar5 + 8;
  }
  return pUVar4;
}

// GetTokensFromString @ 14dc830a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
`anonymous_namespace'::GetTokensFromString
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  undefined1 local_a8 [16];
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `GetTokensFromString'::`2'::_TSS0) &&
     (_Init_thread_header(&`GetTokensFromString'::`2'::_TSS0),
     `GetTokensFromString'::`2'::_TSS0 == -1)) {
    UE::NamingTokens::Utils::GetNamespaceDelimiter(&local_b8);
    ::FString::PrintfImpl
              (&`GetTokensFromString'::`2'::PatternString,
               L"\\{\\s*((?:[a-zA-Z0-9_ ]+%s)*[a-zA-Z0-9_ ]+)\\s*\\}");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    atexit(``anonymous_namespace'::GetTokensFromString'::__l2::
           _dynamic_atexit_destructor_for__PatternString__);
    _Init_thread_footer(&`GetTokensFromString'::`2'::_TSS0);
  }
  if ((*piVar3 < `GetTokensFromString'::`2'::_TSS1) &&
     (_Init_thread_header(&`GetTokensFromString'::`2'::_TSS1),
     `GetTokensFromString'::`2'::_TSS1 == -1)) {
    FRegexPattern::FRegexPattern
              (&`GetTokensFromString'::`2'::Pattern,&`GetTokensFromString'::`2'::PatternString,None)
    ;
    atexit(``anonymous_namespace'::GetTokensFromString'::__l2::
           _dynamic_atexit_destructor_for__Pattern__);
    _Init_thread_footer(&`GetTokensFromString'::`2'::_TSS1);
  }
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  FRegexMatcher::FRegexMatcher
            ((FRegexMatcher *)(local_a8 + 8),&`GetTokensFromString'::`2'::Pattern,param_1);
  bVar2 = FRegexMatcher::FindNext((FRegexMatcher *)(local_a8 + 8));
  if (bVar2) {
    do {
      FRegexMatcher::GetCaptureGroup((FRegexMatcher *)(local_a8 + 8),&local_b8,1);
      TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator> *)local_78,(FString *)local_a8,
                 (bool *)&local_b8);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      bVar2 = FRegexMatcher::FindNext((FRegexMatcher *)(local_a8 + 8));
    } while (bVar2);
  }
  TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::Array
            ((TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator> *)local_78,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 14dc83330

uint __cdecl GetTypeHash(FMovieGraphRenderDataIdentifier *param_1)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  
  iVar1 = (param_1->CameraName).Data.ArrayNum;
  pwVar11 = L"";
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar10 = L"";
    iVar9 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(param_1->CameraName).Data.AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  iVar1 = (param_1->SubResourceName).Data.ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar10 = L"";
    iVar9 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(param_1->SubResourceName).Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  iVar1 = (param_1->RendererName).Data.ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar10 = L"";
    iVar9 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(param_1->RendererName).Data.AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  iVar1 = (param_1->LayerName).Data.ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(param_1->LayerName).Data.AllocatorInstance.Data;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
  FVar2 = param_1->RootBranchName;
  uVar8 = GetTypeHash(FVar2.ComparisonIndex.Value);
  pFVar3 = (param_1->CameraName).Data.AllocatorInstance.Data;
  uVar8 = uVar8 + FVar2.Number;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->SubResourceName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->RendererName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->LayerName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return (uVar8 >> 2) + 0x9e3779b9 +
         (uVar7 * 0x40 + -0x61c88647 +
          (uVar6 * 0x40 + -0x61c88647 + (uVar4 + uVar5 * 0x40 + -0x61c88647 + (uVar5 >> 2) ^ uVar5)
           + (uVar6 >> 2) ^ uVar6) + (uVar7 >> 2) ^ uVar7) + uVar8 * 0x40 ^ uVar8;
}

// ResolveFormatArgumentsHelper @ 14dc86a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
`anonymous_namespace'::ResolveFormatArgumentsHelper
          (FString *__return_storage_ptr__,FString *param_1,
          FMovieGraphFilenameResolveParams *param_2,bool param_3,FMovieGraphResolveArgs *param_4)

{
  FScriptContainerElement *pFVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  undefined1 *puVar3;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar4
  ;
  UMoviePipelineExecutorShot *pUVar5;
  UMovieGraphEvaluatedConfig *pUVar6;
  UMoviePipelineExecutorJob *pUVar7;
  UObject *pUVar8;
  code *pcVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  undefined8 uVar11;
  void *pvVar12;
  FMovieGraphResolveArgs *this;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar13;
  bool bVar14;
  int iVar15;
  FString *pFVar16;
  FString *pFVar17;
  FString *pFVar18;
  FString *pFVar19;
  FString *pFVar20;
  FString *pFVar21;
  UMovieGraphGlobalOutputSettingNode *pUVar22;
  UClass *pUVar23;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *pTVar24;
  UClass *pUVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  size_t sVar27;
  byte bVar28;
  ulonglong uVar29;
  FFrameRate FVar30;
  ForAnyElementType FVar31;
  longlong lVar32;
  longlong lVar33;
  wchar_t *_Str;
  int *piVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  uint *puVar38;
  uint uVar39;
  ForAnyElementType FVar40;
  double dVar41;
  undefined1 auStackY_948 [32];
  bool local_8f8;
  undefined1 local_8f7;
  undefined1 local_8f6;
  undefined1 local_8f5;
  char local_8f4;
  FString local_8f0;
  uint local_8e0;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_8d8;
  FString local_8c8;
  undefined1 local_8b8 [8];
  FString local_8b0;
  FString local_8a0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_890;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_888;
  undefined8 local_868;
  FString local_860;
  FString local_850;
  FString local_840;
  FString *local_830;
  TObjectPtr<UObject>_u_0 local_828;
  ForAnyElementType local_820;
  int local_818 [2];
  FString local_810;
  FString local_800;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_7f0;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  void *local_790;
  undefined8 local_788;
  void *local_780;
  int local_778 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_770;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_750;
  FString *local_730;
  TPairInitializer<FString_&&,FString_const_&> local_728;
  undefined1 local_718 [8];
  undefined1 local_710 [8];
  undefined1 local_708 [8];
  FMovieGraphResolveArgs *local_700;
  undefined1 local_6f8 [8];
  undefined1 local_6f0 [8];
  undefined1 local_6e8 [8];
  undefined1 local_6e0 [8];
  undefined1 local_6d8 [8];
  undefined1 local_6d0 [8];
  FString local_6c8;
  FString local_6b8;
  undefined1 local_6a8 [16];
  int local_698;
  int local_694;
  FString local_690;
  int local_680;
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_67c;
  uint uStack_66c;
  TBitArray<FDefaultBitArrayAllocator> *local_668;
  undefined4 uStack_660;
  uint uStack_65c;
  uint local_658;
  undefined4 uStack_654;
  int iStack_650;
  undefined4 uStack_64c;
  FString local_648;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_638;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_630;
  undefined8 uStack_610;
  undefined1 local_608 [12];
  uint uStack_5fc;
  TBitArray<FDefaultBitArrayAllocator> *local_5f8;
  undefined8 uStack_5f0;
  longlong local_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  FString *local_5d8;
  FString *local_5d0;
  FString local_5c8;
  FString *local_5b8;
  FString *local_5b0;
  FString local_5a8;
  FString *local_598;
  FString *local_590;
  FString local_588;
  FString *local_578;
  FString *local_570;
  FString local_568;
  FString *local_558;
  FString *local_550;
  FString local_548;
  FString *local_538;
  FString *local_530;
  FString local_528;
  FString *local_518;
  FString *local_510;
  FString local_508;
  FString *local_4f8;
  FString *local_4f0;
  FString local_4e8;
  FString *local_4d8;
  FString *local_4d0;
  FString local_4c8;
  FString *local_4b8;
  FString *local_4b0;
  FString local_4a8;
  FString *local_498;
  FString *local_490;
  FString local_488;
  FString *local_478;
  FString *local_470;
  FString local_468;
  FString *local_458;
  FString *local_450;
  FString local_448;
  longlong local_438;
  longlong local_430;
  FString *local_428;
  void **local_420;
  FString local_418;
  FString *local_408;
  FString *local_400;
  FString local_3f8;
  FString local_3e8;
  longlong local_3d8;
  longlong local_3d0;
  FString *local_3c8;
  FStringFormatArg *local_3c0;
  FString local_3b8;
  FString local_3a8;
  FString *local_398;
  FString *local_390;
  FString local_388;
  FString *local_378;
  FString *local_370;
  FString local_368;
  FString *local_358;
  FString *local_350;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  TRangedForConstIterator local_278;
  FStringFormatArg local_248;
  FStringFormatArg local_228;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  undefined4 local_14c;
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_948;
  iVar15 = param_2->FrameNumberOffset;
  FVar40.Data = (FScriptContainerElement *)0x0;
  local_700 = param_4;
  iVar37 = 0;
  local_8e0 = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_8f8 = true;
  local_8f4 = param_3;
  local_830 = __return_storage_ptr__;
  local_730 = param_1;
  local_728.Value = (FString *)param_2;
  UE::MoviePipeline::GetPaddingFormatString
            (&local_648,param_2->ZeroPadFrameNumberCount,param_2->RootFrameNumber + iVar15);
  UE::MoviePipeline::GetPaddingFormatString
            (&local_6b8,param_2->ZeroPadFrameNumberCount,param_2->ShotFrameNumber + iVar15);
  UE::MoviePipeline::GetPaddingFormatString
            (&local_7a0,param_2->ZeroPadFrameNumberCount,param_2->RootFrameNumberRel + iVar15);
  UE::MoviePipeline::GetPaddingFormatString
            (&local_7b0,param_2->ZeroPadFrameNumberCount,param_2->ShotFrameNumberRel + iVar15);
  iVar15 = ::FString::Find(param_1,L"{frame",6,IgnoreCase,FromStart,-1);
  if (iVar15 == -1) {
LAB_14dc86c0a:
    if (param_2->bForceRelativeFrameNumbers != false) {
      iVar15 = local_7a0.Data.ArrayNum + -1;
      if (local_7a0.Data.ArrayNum == 0) {
        iVar15 = iVar37;
      }
      ::FString::AssignRange(&local_648,(wchar_t *)local_7a0.Data.AllocatorInstance.Data,iVar15);
      if (local_7b0.Data.ArrayNum != 0) {
        iVar37 = local_7b0.Data.ArrayNum + -1;
      }
      ::FString::AssignRange(&local_6b8,(wchar_t *)local_7b0.Data.AllocatorInstance.Data,iVar37);
    }
  }
  else if (param_2->bForceRelativeFrameNumbers != false) {
    iVar15 = ::FString::Find(param_1,L"_rel}",5,IgnoreCase,FromStart,-1);
    if ((iVar15 == -1) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`ResolveFormatArgumentsHelper'::`7'::LOG_Static,
                 (FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    goto LAB_14dc86c0a;
  }
  pUVar5 = (param_2->Shot).field0_0x0.DebugPtr;
  if (pUVar5 == (UMoviePipelineExecutorShot *)0x0) {
    uVar39 = 2;
    local_6c8.Data.ArrayNum = 0;
    local_6c8.Data.ArrayMax = 0;
    pFVar16 = &local_6c8;
  }
  else {
    uVar39 = 1;
    pFVar16 = ::FString::FString(&local_2d8,&pUVar5->OuterName);
    FVar40.Data = (pFVar16->Data).AllocatorInstance.Data;
  }
  (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar15 = (pFVar16->Data).ArrayNum;
  local_850.Data.ArrayMax = (pFVar16->Data).ArrayMax;
  (pFVar16->Data).ArrayNum = 0;
  (pFVar16->Data).ArrayMax = 0;
  local_850.Data.AllocatorInstance.Data = FVar40.Data;
  local_850.Data.ArrayNum = iVar15;
  if (((uVar39 & 2) != 0) &&
     (uVar39 = uVar39 & 0xfffffffd,
     local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
  }
  if (((uVar39 & 1) != 0) &&
     (uVar39 = uVar39 & 0xfffffffe,
     local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if ((iVar15 == 0) || (iVar15 + -1 < 1)) {
    uVar39 = uVar39 | 8;
    local_8e0 = uVar39;
    pFVar16 = ::FString::FString(&local_2c8,L"NoShot");
  }
  else {
    uVar39 = uVar39 | 4;
    local_8e0 = uVar39;
    pFVar16 = ::FString::FString(&local_2b8,&local_850);
    FVar40.Data = local_850.Data.AllocatorInstance.Data;
  }
  if (&local_850 != pFVar16) {
    if (FVar40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar40.Data);
    }
    local_850.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
    (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_850.Data.ArrayNum = (pFVar16->Data).ArrayNum;
    local_850.Data.ArrayMax = (pFVar16->Data).ArrayMax;
    (pFVar16->Data).ArrayNum = 0;
    (pFVar16->Data).ArrayMax = 0;
  }
  if (((uVar39 & 8) != 0) &&
     (uVar39 = uVar39 & 0xfffffff7, local_8e0 = uVar39,
     local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (((uVar39 & 4) != 0) &&
     (local_8e0 = uVar39 & 0xfffffffb,
     local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  pFVar16 = ::FString::FString(&local_208,&local_850);
  pFVar17 = ::FString::FString(&local_1f8,L"DummyCameraToken");
  pFVar18 = ::FString::FString(&local_1e8,&local_7b0);
  pFVar19 = ::FString::FString(&local_1d8,&local_7a0);
  pFVar20 = ::FString::FString(&local_1c8,&local_6b8);
  pFVar21 = ::FString::FString(&local_1b8,&local_648);
  MoviePipeline::GetOutputStateFormatArgs
            ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_f8,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_a8,pFVar21,pFVar20,pFVar19,pFVar18,pFVar17,pFVar16);
  ::FString::FString(&local_388,L"camera_name");
  local_398 = &local_388;
  pFVar16 = &(param_2->RenderDataIdentifier).CameraName;
  local_390 = pFVar16;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_const_&> *)local_718,
             (bool *)&local_398);
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_368,L"renderer_name");
  local_378 = &local_368;
  pFVar17 = &(param_2->RenderDataIdentifier).RendererName;
  local_370 = pFVar17;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,&local_728,(bool *)&local_378);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_348,L"renderer_sub_name");
  local_358 = &local_348;
  pFVar18 = &(param_2->RenderDataIdentifier).SubResourceName;
  local_350 = pFVar18;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_const_&> *)(local_718 + 4),
             (bool *)&local_358);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_5c8,L"layer_name");
  local_5d8 = &local_5c8;
  pFVar19 = &(param_2->RenderDataIdentifier).LayerName;
  local_5d0 = pFVar19;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_const_&> *)local_710,
             (bool *)&local_5d8);
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  pFVar20 = ::FName::ToString((FName *)param_2,&local_2a8);
  ::FString::FString(&local_5a8,L"branch_name");
  local_5b8 = &local_5a8;
  local_5b0 = pFVar20;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_&&> *)(local_710 + 4),
             (bool *)&local_5b8);
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  UE::MoviePipeline::GetMetadataPrefixPath(&local_8a0,&param_2->RenderDataIdentifier);
  ::FString::PrintfImpl(&local_588,L"%s/cameraName");
  local_598 = &local_588;
  local_590 = pFVar16;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            (&local_a8,(TPairInitializer<FString_&&,FString_const_&> *)local_708,(bool *)&local_598)
  ;
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_568,L"%s/rendererName");
  local_578 = &local_568;
  local_570 = pFVar17;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            (&local_a8,(TPairInitializer<FString_&&,FString_const_&> *)(local_708 + 4),
             (bool *)&local_578);
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_548,L"%s/subResourceName");
  local_558 = &local_548;
  local_550 = pFVar18;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            (&local_a8,(TPairInitializer<FString_&&,FString_const_&> *)local_6f8,(bool *)&local_558)
  ;
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_528,L"%s/layerName");
  local_538 = &local_528;
  local_530 = pFVar19;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            (&local_a8,(TPairInitializer<FString_&&,FString_const_&> *)(local_6f8 + 4),
             (bool *)&local_538);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  pFVar16 = ::FName::ToString((FName *)param_2,&local_298);
  ::FString::PrintfImpl(&local_508,L"%s/branchName");
  local_518 = &local_508;
  local_510 = pFVar16;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            (&local_a8,(TPairInitializer<FString_&&,FString_&&> *)local_6f0,(bool *)&local_518);
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_850.Data.AllocatorInstance.Data);
  }
  if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
  }
  if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
  }
  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  pUVar6 = (param_2->EvaluatedConfig).field0_0x0.DebugPtr;
  dVar41 = (double)(param_2->DefaultFrameRate).Numerator /
           (double)(param_2->DefaultFrameRate).Denominator;
  if ((pUVar6 != (UMovieGraphEvaluatedConfig *)0x0) &&
     (pUVar22 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                          (pUVar6,UMovieGraphNode::GlobalsPinName,false,false),
     pUVar22 != (UMovieGraphGlobalOutputSettingNode *)0x0)) {
    if (pUVar22->bOverride_OutputFrameRate == '\0') {
      FVar30 = param_2->DefaultFrameRate;
    }
    else {
      FVar30 = pUVar22->OutputFrameRate;
    }
    local_8f8 = pUVar22->bOverwriteExistingOutput;
    dVar41 = (double)FVar30.Numerator / (double)FVar30.Denominator;
  }
  pFVar16 = ::FString::SanitizeFloat(&local_288,dVar41,1);
  ::FString::FString(&local_4e8,L"frame_rate");
  local_4f8 = &local_4e8;
  local_4f0 = pFVar16;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_&&> *)(local_6f0 + 4),
             (bool *)&local_4f8);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  pFVar16 = ::FString::SanitizeFloat(&local_338,dVar41,1);
  ::FString::FString(&local_4c8,L"unreal/frameRate");
  local_4d8 = &local_4c8;
  local_4d0 = pFVar16;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            (&local_a8,(TPairInitializer<FString_&&,FString_&&> *)local_6e8,(bool *)&local_4d8);
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  pUVar7 = (param_2->Job).field0_0x0.DebugPtr;
  local_840.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_840.Data.ArrayNum = 0;
  local_840.Data.ArrayMax = 0;
  local_860.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_860.Data.ArrayNum = 0;
  local_860.Data.ArrayMax = 0;
  if (pUVar7 != (UMoviePipelineExecutorJob *)0x0) {
    pFVar16 = FSoftObjectPath::GetAssetName(&pUVar7->Map,&local_328);
    if (&local_840 != pFVar16) {
      if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_840.Data.AllocatorInstance.Data);
      }
      local_840.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_840.Data.ArrayNum = (pFVar16->Data).ArrayNum;
      local_840.Data.ArrayMax = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    pFVar16 = FSoftObjectPath::GetAssetName
                        (&((param_2->Job).field0_0x0.DebugPtr)->Sequence,&local_318);
    if (&local_860 != pFVar16) {
      if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_860.Data.AllocatorInstance.Data);
      }
      local_860.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_860.Data.ArrayNum = (pFVar16->Data).ArrayNum;
      local_860.Data.ArrayMax = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_4a8,L"level_name");
  local_4b8 = &local_4a8;
  local_4b0 = &local_840;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_const_&> *)(local_6e8 + 4),
             (bool *)&local_4b8);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_488,L"sequence_name");
  local_498 = &local_488;
  local_490 = &local_860;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_const_&> *)local_6e0,
             (bool *)&local_498);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_468,L"unreal/levelName");
  local_478 = &local_468;
  local_470 = &local_840;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            (&local_a8,(TPairInitializer<FString_&&,FString_const_&> *)(local_6e0 + 4),
             (bool *)&local_478);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_448,L"unreal/sequenceName");
  local_458 = &local_448;
  local_450 = &local_860;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
            (&local_a8,(TPairInitializer<FString_&&,FString_const_&> *)local_6d8,(bool *)&local_458)
  ;
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  UE::MoviePipeline::GetSharedFormatArguments
            ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_f8,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_a8,&param_2->InitializationTime,param_2->Version,
             (param_2->Job).field0_0x0.DebugPtr,&param_2->InitializationTimeOffset);
  if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_860.Data.AllocatorInstance.Data);
  }
  if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_840.Data.AllocatorInstance.Data);
  }
  pUVar23 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
  UE::MovieRenderPipeline::FindMoviePipelineSettingClasses(&local_7f0,pUVar23,false);
  iVar15 = local_7f0.ArrayNum;
  uVar29 = (ulonglong)local_7f0.ArrayNum;
  pFVar1 = local_7f0.AllocatorInstance.Data + uVar29 * 8;
  FVar40.Data = local_7f0.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar29 != iVar15) {
      local_8f7 = 0;
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_8f7);
    }
    uVar39 = local_8e0;
    if (FVar40.Data == pFVar1) break;
    pUVar6 = (param_2->EvaluatedConfig).field0_0x0.DebugPtr;
    pUVar23 = *(UClass **)FVar40.Data;
    local_8d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8d8.ArrayNum = 0;
    local_8d8.ArrayMax = 0;
    if (pUVar6 == (UMovieGraphEvaluatedConfig *)0x0) {
      if ((pUVar23->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar23);
      }
      pUVar8 = (pUVar23->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar25 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
      lVar33 = *(longlong *)&pUVar8->field_0x10;
      iVar37 = (int)pUVar25->_padding_;
      if (((*(int *)(lVar33 + 0x38) < iVar37) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar33 + 0x30) + (longlong)iVar37 * 8) !=
           &pUVar25->_padding_)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0x1479,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FString *)(*pcVar9)();
        return pFVar16;
      }
      if ((pUVar23->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar23);
      }
      local_828 = (pUVar23->ClassDefaultObject).field0_0x0;
      if (((local_8d8.AllocatorInstance.Data <= &local_828) &&
          (&local_828 <
           (TObjectPtr<UObject>_u_0 *)
           (local_8d8.AllocatorInstance.Data + (longlong)local_8d8.ArrayMax * 8))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FString *)(*pcVar9)();
        return pFVar16;
      }
      iVar37 = local_8d8.ArrayNum;
      if (local_8d8.ArrayNum == local_8d8.ArrayMax) {
        iVar37 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_8d8.AllocatorInstance,&local_8d8.ArrayMax);
      }
      local_8d8.ArrayNum = iVar37 + 1;
      *(TObjectPtr<UObject>_u_0 *)(local_8d8.AllocatorInstance.Data + (longlong)iVar37 * 8) =
           local_828;
    }
    else {
      pTVar24 = UMovieGraphEvaluatedConfig::GetSettingsForBranch
                          (pUVar6,&local_308,pUVar23,(param_2->RenderDataIdentifier).RootBranchName,
                           true,true);
      if (&local_8d8 != pTVar24) {
        if ((TObjectPtr<UObject>_u_0 *)local_8d8.AllocatorInstance.Data !=
            (TObjectPtr<UObject>_u_0 *)0x0) {
          FMemory::Free(local_8d8.AllocatorInstance.Data);
        }
        local_8d8.AllocatorInstance.Data = (pTVar24->AllocatorInstance).Data;
        (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_8d8.ArrayNum = pTVar24->ArrayNum;
        local_8d8.ArrayMax = pTVar24->ArrayMax;
        pTVar24->ArrayNum = 0;
        pTVar24->ArrayMax = 0;
      }
      if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.AllocatorInstance.Data);
      }
    }
    iVar37 = local_8d8.ArrayNum;
    uVar29 = (ulonglong)local_8d8.ArrayNum;
    pTVar2 = (TObjectPtr<UObject>_u_0 *)(local_8d8.AllocatorInstance.Data + uVar29 * 8);
    FVar31.Data = local_8d8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar29 != iVar37) {
        local_8f6 = 0;
        `TCheckedPointerIterator<UMovieGraphSettingNode_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_8f6);
      }
      if ((TObjectPtr<UObject>_u_0 *)FVar31.Data == pTVar2) break;
      (**(code **)(*(longlong *)*(UObject **)FVar31.Data + 0x360))
                (*(UObject **)FVar31.Data,local_f8,param_2);
      uVar29 = local_8d8._8_8_ & 0xffffffff;
      FVar31.Data = FVar31.Data + 8;
    }
    if ((TObjectPtr<UObject>_u_0 *)local_8d8.AllocatorInstance.Data !=
        (TObjectPtr<UObject>_u_0 *)0x0) {
      FMemory::Free(local_8d8.AllocatorInstance.Data);
    }
    uVar29 = (ulonglong)(uint)local_7f0.ArrayNum;
    FVar40.Data = FVar40.Data + 8;
  }
  puVar3 = &(param_2->FileMetadata).field_0x10;
  local_770._padding_._4_4_ = 1;
  pTVar4 = &param_2->FileMetadata;
  local_770._padding_._0_4_ = 0;
  local_770.UnvisitedBitMask = 0xffffffff;
  local_770.CurrentBitIndex = 0;
  local_770.BaseBitIndex = 0;
  local_770.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if (*(int *)&(param_2->FileMetadata).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_770);
  }
  TStack_888._padding_ = CONCAT44(local_770._padding_._4_4_,(undefined4)local_770._padding_);
  TStack_888._16_8_ = CONCAT44(local_770.CurrentBitIndex,local_770.UnvisitedBitMask);
  TStack_888._24_8_ = CONCAT44(local_770._28_4_,local_770.BaseBitIndex);
  local_868._0_4_ =
       *(int *)&(param_2->FileMetadata).field_0x8 - *(int *)&(param_2->FileMetadata).field_0x34;
  TStack_888.Array = local_770.Array;
  local_5f8 = local_770.Array;
  uStack_5dc = local_868._4_4_;
  local_890 = pTVar4;
  local_608._0_8_ = pTVar4;
  unique0x10002c07 = TStack_888._padding_;
  uStack_5f0 = TStack_888._16_8_;
  local_5e8 = TStack_888._24_8_;
  iStack_5e0 = (int)local_868;
  pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_1a8,(TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                       *(int *)&(param_2->FileMetadata).field_0x28);
  TStack_888._padding_ = pTVar26->_padding_;
  TStack_888.Array = pTVar26->Array;
  TStack_888.UnvisitedBitMask = pTVar26->UnvisitedBitMask;
  TStack_888.CurrentBitIndex = pTVar26->CurrentBitIndex;
  TStack_888._24_8_ = *(undefined8 *)&pTVar26->BaseBitIndex;
  local_868._0_4_ =
       *(int *)&(param_2->FileMetadata).field_0x8 - *(int *)&(param_2->FileMetadata).field_0x34;
  local_278.InitialNum = (int)local_868;
  local_278._44_4_ = local_868._4_4_;
  local_890 = pTVar4;
  local_278._padding_ = (longlong)pTVar4;
  local_278._padding_ = TStack_888._padding_;
  local_278._padding_ = (longlong)TStack_888.Array;
  local_278._padding_ = TStack_888._16_8_;
  local_278._padding_ = TStack_888._24_8_;
  bVar14 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_608,&local_278);
  if (bVar14) {
    do {
      local_438 = *(longlong *)local_608._0_8_ + (longlong)uStack_5f0._4_4_ * 0x28;
      local_430 = local_438 + 0x10;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                (&local_a8,(TPairInitializer<FString_const_&,FString_const_&> *)(local_6d8 + 4),
                 (bool *)&local_438);
      uStack_5f0 = CONCAT44(uStack_5f0._4_4_,(uint)uStack_5f0 & ~uStack_5fc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_608 + 8));
      bVar14 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_608,&local_278);
    } while (bVar14);
  }
  local_790 = (void *)0x0;
  local_788 = 0;
  ::FString::FString(&local_418,L"file_dup");
  local_428 = &local_418;
  local_420 = &local_790;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_&&> *)local_6a8,(bool *)&local_428);
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if (local_790 != (void *)0x0) {
    FMemory::Free(local_790);
  }
  ::FString::PrintfImpl(&local_3e8,L"v%0*d");
  ::FString::FString(&local_3f8,L"version");
  local_408 = &local_3f8;
  local_400 = &local_3e8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_f8,(TPairInitializer<FString_&&,FString_&&> *)local_6d0,(bool *)&local_408);
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  pTVar4 = &param_2->FileNameFormatOverrides;
  local_750._padding_._0_4_ = 0;
  puVar3 = &(param_2->FileNameFormatOverrides).field_0x10;
  local_750._padding_._4_4_ = 1;
  local_750.UnvisitedBitMask = 0xffffffff;
  local_750.CurrentBitIndex = 0;
  local_750.BaseBitIndex = 0;
  local_750.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if (*(int *)&(param_2->FileNameFormatOverrides).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_750);
  }
  TStack_888._padding_ = CONCAT44(local_750._padding_._4_4_,(undefined4)local_750._padding_);
  TStack_888.CurrentBitIndex = local_750.CurrentBitIndex;
  TStack_888.UnvisitedBitMask = local_750.UnvisitedBitMask;
  TStack_888._28_4_ = local_750._28_4_;
  TStack_888.BaseBitIndex = local_750.BaseBitIndex;
  TStack_888.Array = local_750.Array;
  local_868 = CONCAT44(local_868._4_4_,
                       *(int *)&(param_2->FileNameFormatOverrides).field_0x8 -
                       *(int *)&(param_2->FileNameFormatOverrides).field_0x34);
  TStack_630.Array = local_750.Array;
  uStack_610 = local_868;
  local_890 = pTVar4;
  local_638 = pTVar4;
  TStack_630._padding_ = TStack_888._padding_;
  TStack_630._16_8_ = TStack_888._16_8_;
  TStack_630._24_8_ = TStack_888._24_8_;
  pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_188,(TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                       *(int *)&(param_2->FileNameFormatOverrides).field_0x28);
  TStack_888._padding_ = pTVar26->_padding_;
  pTVar10 = pTVar26->Array;
  uVar11._0_4_ = pTVar26->UnvisitedBitMask;
  uVar11._4_4_ = pTVar26->CurrentBitIndex;
  TStack_888.BaseBitIndex = pTVar26->BaseBitIndex;
  TStack_888._28_4_ = *(undefined4 *)&pTVar26->field_0x1c;
  TStack_888.Array = pTVar10;
  TStack_888._16_8_ = uVar11;
  while( true ) {
    pTVar13 = local_638;
    if (*(int *)&local_638->field_0x8 - *(int *)&local_638->field_0x34 != (int)uStack_610) {
      local_8f5 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_8f5);
    }
    uVar36 = local_d0;
    if (((TStack_630.CurrentBitIndex == uVar11._4_4_) && (TStack_630.Array == pTVar10)) &&
       (pTVar13 == pTVar4)) break;
    local_3d8 = *(longlong *)pTVar13 + (longlong)TStack_630.CurrentBitIndex * 0x28;
    local_3d0 = local_3d8 + 0x10;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_f8,(TPairInitializer<FString_const_&,FString_const_&> *)(local_6d0 + 4),
               (bool *)&local_3d8);
    TStack_630.UnvisitedBitMask = TStack_630.UnvisitedBitMask & ~TStack_630._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_630);
  }
  local_67c.Value._4_4_ = 0;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  uStack_66c = 1;
  local_148._8_8_ = 0;
  local_658 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_11c = 0x80;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = (ForElementType<FSetElementId>)0x0;
  local_100 = 0;
  uStack_65c = local_658;
  if (local_d0 != 0) {
    puVar38 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar38 = local_d8;
    }
    uVar35 = *puVar38;
    local_67c.Value._4_4_ = 0;
    local_658 = 0;
    while (uVar35 == 0) {
      local_67c.Value._4_4_ = local_67c.Value._4_4_ + 1;
      local_658 = local_658 + 0x20;
      uStack_65c = local_d0;
      if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 <
          (int)local_67c.Value._4_4_) goto LAB_14dc87df2;
      uVar35 = puVar38[(int)local_67c.Value._4_4_];
    }
    uStack_66c = -uVar35 & uVar35;
    uVar29 = (ulonglong)uStack_66c * 2 + 1;
    lVar33 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    uStack_65c = (local_658 - 1) + (int)lVar33;
    local_680 = (int)lVar33;
    if ((int)local_d0 < (int)uStack_65c) {
      uStack_65c = local_d0;
    }
  }
LAB_14dc87df2:
  local_890 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               *)local_f8;
  local_67c._4_8_ = local_890;
  uVar35 = local_d0 & 0xffffffe0;
  uStack_654 = local_14c;
  TStack_888.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  local_668 = TStack_888.Array;
  uStack_660 = 0xffffffff;
  TStack_888.CurrentBitIndex = uStack_65c;
  TStack_888.UnvisitedBitMask = 0xffffffff;
  TStack_888._padding_ = CONCAT44(uStack_66c,local_67c.Value._4_4_);
  iStack_650 = local_f8._8_4_ - local_c4;
  iVar15 = (int)local_d0 >> 5;
  TStack_888._28_4_ = local_14c;
  TStack_888.BaseBitIndex = local_658;
  local_868 = CONCAT44(uStack_64c,local_f8._8_4_ - local_c4);
  bVar28 = (byte)local_d0;
  if (((int)local_d0 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    pFVar16 = (FString *)(*pcVar9)();
    return pFVar16;
  }
  if (uVar36 != local_d0) {
    puVar38 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar38 = local_d8;
    }
    uVar36 = -1 << (bVar28 & 0x1f) & puVar38[iVar15];
    while (uVar36 == 0) {
      iVar15 = iVar15 + 1;
      uVar35 = uVar35 + 0x20;
      uVar36 = local_d0;
      if ((int)(((int)(local_d0 - 1) >> 0x1f & 0x1fU) + (local_d0 - 1)) >> 5 < iVar15)
      goto LAB_14dc87f1e;
      uVar36 = puVar38[iVar15];
    }
    uVar29 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    uVar36 = (uVar35 - 1) + (int)lVar33;
    if ((int)local_d0 < (int)uVar36) {
      uVar36 = local_d0;
    }
  }
LAB_14dc87f1e:
  while( true ) {
    pTVar4 = local_890;
    if ((int)*(longlong *)((longlong)local_890 + 8) - *(int *)((longlong)local_890 + 0x34) !=
        (int)local_868) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_8b8);
    }
    pFVar16 = local_730;
    if (((TStack_888.CurrentBitIndex == uVar36) &&
        (TStack_888.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
       (pTVar4 == (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)local_f8)) break;
    local_7d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar33 = *(longlong *)pTVar4;
    local_7d0.Data.ArrayNum = *(int *)(lVar33 + 0x18 + (longlong)TStack_888.CurrentBitIndex * 0x28);
    lVar32 = (longlong)local_7d0.Data.ArrayNum;
    pFVar16 = (FString *)(lVar33 + (longlong)TStack_888.CurrentBitIndex * 0x28);
    pFVar1 = pFVar16[1].Data.AllocatorInstance.Data;
    if (local_7d0.Data.ArrayNum == 0) {
      local_7d0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_7d0.Data.ArrayNum,0,(ForAnyElementType *)&local_7d0,
                 local_7d0.Data.ArrayNum,&local_7d0.Data.ArrayMax);
      memcpy(local_7d0.Data.AllocatorInstance.Data,pFVar1,lVar32 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_248,&local_7d0);
    TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
    ::Emplace<FString_const_&,FStringFormatArg>
              ((TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)local_148,pFVar16,&local_248);
    if (local_248.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.StringValue.Data.AllocatorInstance.Data);
    }
    TStack_888.UnvisitedBitMask = TStack_888.UnvisitedBitMask & ~TStack_888._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_888);
  }
  local_8b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b0.Data.ArrayNum = (local_730->Data).ArrayNum;
  lVar33 = (longlong)local_8b0.Data.ArrayNum;
  pFVar1 = (local_730->Data).AllocatorInstance.Data;
  if (local_8b0.Data.ArrayNum == 0) {
    local_8b0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_8b0.Data.ArrayNum,0,(ForAnyElementType *)&local_8b0,local_8b0.Data.ArrayNum
               ,&local_8b0.Data.ArrayMax);
    memcpy(local_8b0.Data.AllocatorInstance.Data,pFVar1,lVar33 * 2);
  }
  UpdateTokenMapsWithResolvedExternalTokens
            (&local_8b0,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_f8,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_148);
  this = local_700;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>
            (&local_700->FileMetadata,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_a8);
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>
            (&this->FilenameArguments,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_f8);
  pFVar18 = local_728.Value;
  pFVar17 = local_830;
  if ((pFVar16->Data).ArrayNum < 2) {
    (local_830->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_830->Data).ArrayNum = 0;
    (local_830->Data).ArrayMax = 0;
    if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
    }
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_148);
  }
  else {
    FVar40.Data = (FScriptContainerElement *)L"";
    if (local_8b0.Data.ArrayNum != 0) {
      FVar40.Data = local_8b0.Data.AllocatorInstance.Data;
    }
    ::FString::FormatImpl
              (&local_8f0,(wchar_t *)FVar40.Data,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)local_148);
    pFVar17 = local_830;
    FVar40.Data = local_8f0.Data.AllocatorInstance.Data;
    if (local_8f4 != '\0') {
      if (*(bool *)((longlong)pFVar18 + 0xc0) != false) {
        pFVar16 = FPaths::ConvertRelativePathToFull(&local_2f8,&local_8f0);
        if (&local_8f0 != pFVar16) {
          if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
          }
          local_8f0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8f0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
          local_8f0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
        }
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
      }
      FPaths::NormalizeFilename(&local_8f0);
      bVar14 = ::FString::StartsWith(&local_8f0,L"//",2,IgnoreCase);
      if (bVar14) {
        ::FString::RemoveAt(&local_8f0,0,1,No);
        FPaths::RemoveDuplicateSlashes(&local_8f0);
        ::FString::ConcatCF((FString *)(local_6a8 + 8),L"/",&local_8f0);
        if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
        }
        local_8f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_6a8._8_8_;
        local_8f0.Data.ArrayMax = local_694;
        local_8f0.Data.ArrayNum = local_698;
      }
      else {
        FPaths::RemoveDuplicateSlashes(&local_8f0);
      }
      do {
        ::FString::FString(&local_690,"..");
        if (local_690.Data.ArrayNum == 0) {
          _Str = L"";
LAB_14dc882d6:
          sVar27 = wcslen(_Str);
          iVar15 = ::FString::Find(&local_8f0,_Str,(int)sVar27,IgnoreCase,FromStart,-1);
        }
        else {
          _Str = (wchar_t *)local_690.Data.AllocatorInstance.Data;
          if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14dc882d6;
          iVar15 = -1;
        }
        if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_690.Data.AllocatorInstance.Data);
        }
        if (iVar15 == -1) goto LAB_14dc8833f;
        ::FString::ReplaceInline(&local_8f0,L"..",L".",IgnoreCase);
      } while( true );
    }
    local_8f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_830->Data).AllocatorInstance.Data = FVar40.Data;
    (local_830->Data).ArrayNum = local_8f0.Data.ArrayNum;
    (local_830->Data).ArrayMax = local_8f0.Data.ArrayMax;
    local_8f0.Data.ArrayNum = 0;
    local_8f0.Data.ArrayMax = 0;
    if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
    }
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_148);
  }
  goto LAB_14dc8876c;
LAB_14dc8833f:
  ::FString::RemoveFromEnd(&local_8f0,L".",1,IgnoreCase);
  ::FString::FString(&local_7c0,L".{ext}");
  FVar40.Data = (FScriptContainerElement *)L"";
  if (local_7c0.Data.ArrayNum != 0) {
    FVar40.Data = local_7c0.Data.AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            (&local_800,(wchar_t *)FVar40.Data,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_148);
  if (local_800.Data.ArrayNum == local_7c0.Data.ArrayNum) {
    if (1 < local_800.Data.ArrayNum) {
      iVar15 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_800.Data.AllocatorInstance.Data,
                          (wchar_t *)local_7c0.Data.AllocatorInstance.Data);
      bVar14 = iVar15 == 0;
      goto LAB_14dc883b9;
    }
LAB_14dc88437:
    piVar34 = local_778;
    uVar39 = uVar39 | 0x10;
    local_780 = (void *)0x0;
    local_778[0] = 0;
    local_778[1] = 0;
    FVar40.Data = (FScriptContainerElement *)0x0;
  }
  else {
    bVar14 = local_7c0.Data.ArrayNum + local_800.Data.ArrayNum == 1;
LAB_14dc883b9:
    FVar40.Data = local_800.Data.AllocatorInstance.Data;
    if (bVar14) goto LAB_14dc88437;
    uVar39 = uVar39 | 0x20;
    local_818[0] = local_800.Data.ArrayNum;
    local_820.Data = (FScriptContainerElement *)0x0;
    if (local_800.Data.ArrayNum == 0) {
      piVar34 = local_818;
      local_818[1] = 0;
      FVar40.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_800.Data.ArrayNum,0,&local_820,local_800.Data.ArrayNum,local_818 + 1);
      memcpy(local_820.Data,FVar40.Data,(longlong)local_800.Data.ArrayNum * 2);
      piVar34 = local_818;
      FVar40.Data = local_820.Data;
    }
  }
  pvVar12 = local_780;
  local_810.Data.ArrayNum = *piVar34;
  lVar33 = (longlong)local_810.Data.ArrayNum;
  local_810.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_810.Data.ArrayNum == 0) {
    local_810.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_810.Data.ArrayNum,0,(ForAnyElementType *)&local_810,local_810.Data.ArrayNum
               ,&local_810.Data.ArrayMax);
    memcpy(local_810.Data.AllocatorInstance.Data,FVar40.Data,lVar33 * 2);
  }
  if (((uVar39 & 0x20) != 0) &&
     (uVar39 = uVar39 & 0xffffffdf, local_820.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_820.Data);
  }
  if (((uVar39 & 0x10) != 0) && (pvVar12 != (void *)0x0)) {
    FMemory::Free(pvVar12);
  }
  ::FString::ConcatFF(&local_8c8,&local_8f0,&local_800);
  FVar40.Data = (FScriptContainerElement *)L"";
  if (local_8c8.Data.ArrayNum != 0) {
    FVar40.Data = local_8c8.Data.AllocatorInstance.Data;
  }
  bVar14 = UE::MoviePipeline::CanWriteToFile((wchar_t *)FVar40.Data,local_8f8);
  if (!bVar14) {
    local_3c8 = &local_3b8;
    local_3c0 = &local_228;
    do {
      ::FString::PrintfImpl(&local_2e8,L"_(%d)");
      FStringFormatArg::FStringFormatArg(&local_228,&local_2e8);
      ::FString::FString(&local_3b8,L"file_dup");
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
                ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                  *)local_148,&local_67c,(bool *)&local_3c8);
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      if (local_228.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.StringValue.Data.AllocatorInstance.Data);
      }
      FVar40.Data = (FScriptContainerElement *)L"";
      if (local_8b0.Data.ArrayNum != 0) {
        FVar40.Data = local_8b0.Data.AllocatorInstance.Data;
      }
      ::FString::FormatImpl
                (&local_3a8,(wchar_t *)FVar40.Data,
                 (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                  *)local_148);
      ::FString::ConcatFF(&local_7e0,&local_3a8,&local_810);
      if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
      }
      iVar15 = local_7e0.Data.ArrayNum;
      local_8c8.Data.AllocatorInstance.Data = local_7e0.Data.AllocatorInstance.Data;
      local_7e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8c8.Data.ArrayNum = local_7e0.Data.ArrayNum;
      local_8c8.Data.ArrayMax = local_7e0.Data.ArrayMax;
      local_7e0.Data.ArrayNum = 0;
      local_7e0.Data.ArrayMax = 0;
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        iVar15 = local_8c8.Data.ArrayNum;
      }
      FVar40.Data = (FScriptContainerElement *)L"";
      if (iVar15 != 0) {
        FVar40.Data = local_8c8.Data.AllocatorInstance.Data;
      }
      bVar14 = UE::MoviePipeline::CanWriteToFile((wchar_t *)FVar40.Data,local_8f8);
    } while (!bVar14);
  }
  pFVar17 = local_830;
  FVar40.Data = local_8c8.Data.AllocatorInstance.Data;
  local_8c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_830->Data).AllocatorInstance.Data = FVar40.Data;
  (local_830->Data).ArrayNum = local_8c8.Data.ArrayNum;
  iVar15 = local_8c8.Data.ArrayMax;
  local_8c8.Data.ArrayNum = 0;
  local_8c8.Data.ArrayMax = 0;
  (local_830->Data).ArrayMax = iVar15;
  if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_810.Data.AllocatorInstance.Data);
  }
  if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_800.Data.AllocatorInstance.Data);
  }
  if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
  }
  if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
  }
  if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
  }
  local_100 = 0;
  if (local_108 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_148,0,local_148._8_4_);
  iVar15 = SUB84(local_148._8_8_,4);
  local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
  }
  local_120 = 0;
  local_114 = 0;
  local_118 = 0xffffffff;
  if (0x80 < local_11c) {
    local_11c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
  }
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
LAB_14dc8876c:
  if (local_7f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f0.AllocatorInstance.Data);
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  return pFVar17;
}

// UpdateTokenMapsWithResolvedExternalTokens @ 14dc8d010

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

void __cdecl
`anonymous_namespace'::UpdateTokenMapsWithResolvedExternalTokens
          (FString *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                   *param_3)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  UEngine *pUVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UNamingTokensEngineSubsystem *this;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  ForElementType<FSetElementId> FVar22;
  uint *puVar23;
  FNamingTokenValueData *pFVar24;
  bool bVar25;
  undefined1 auStackY_3c8 [32];
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386 [6];
  ForAnyElementType local_380;
  int local_378;
  int local_374;
  FString local_370;
  uint local_360;
  FString *local_358;
  ForAnyElementType local_350;
  int local_348;
  int local_344;
  ForAnyElementType local_340;
  int local_338;
  int local_334;
  FNamingTokenFilterArgs local_330;
  FString local_318;
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> local_308;
  FString local_2f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  longlong *local_2a8;
  int iStack_2a0;
  uint uStack_29c;
  TBitArray<FDefaultBitArrayAllocator> *local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  int local_288;
  uint uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  FString *local_1b8;
  ForAnyElementType *local_1b0;
  ForAnyElementType *local_1a8;
  ForAnyElementType *local_1a0;
  FString local_198;
  FString local_188;
  FStringFormatArg local_178;
  FStringFormatArg local_158;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_138;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_358 = param_1;
  local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  GetTokensFromString(&local_2e8,param_1);
  iVar13 = local_2e8.ArrayNum;
  pFVar21 = local_2e8.AllocatorInstance.Data + (longlong)local_2e8.ArrayNum * 0x10;
  FVar18.Data = local_2e8.AllocatorInstance.Data;
  while( true ) {
    if (local_2e8.ArrayNum != iVar13) {
      local_388 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_388)
      ;
    }
    if (FVar18.Data == pFVar21) break;
    if (*(int *)(FVar18.Data + 8) == 0) {
      pwVar15 = L"";
      iVar7 = 0;
    }
    else {
      pwVar15 = *(wchar_t **)FVar18.Data;
      iVar7 = *(int *)(FVar18.Data + 8) + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar15);
    iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)param_2,uVar6,(FString *)FVar18.Data);
    if (iVar7 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_138,(FString *)local_1f0,(bool *)FVar18.Data);
    }
    FVar18.Data = FVar18.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_2e8.AllocatorInstance.Data,local_2e8.ArrayNum);
  if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.AllocatorInstance.Data);
  }
  pUVar4 = GEngine;
  pUVar8 = Z_Construct_UClass_UNamingTokensEngineSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 != (UClass *)0x0) goto LAB_14dc8d171;
LAB_14dc8d19f:
    pUVar8 = (UClass *)0x0;
  }
  else {
    if (pUVar8 == (UClass *)0x0) goto LAB_14dc8d19f;
    UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14dc8d171:
    pUVar9 = Z_Construct_UClass_UNamingTokensEngineSubsystem_NoRegister();
    if (pUVar9 == (UClass *)0x0) goto LAB_14dc8d19f;
    iVar13 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar13) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar13 * 8) != &pUVar9->_padding_
       )) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    if (!bVar25) goto LAB_14dc8d19f;
  }
  this = (UNamingTokensEngineSubsystem *)
         FSubsystemCollectionBase::GetSubsystemInternal
                   ((FSubsystemCollectionBase *)&pUVar4->EngineSubsystemCollection,pUVar8);
  if (this != (UNamingTokensEngineSubsystem *)0x0) {
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_330._19_4_ = 0;
    local_330._23_1_ = 0;
    local_330.AdditionalNamespacesToInclude.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.AdditionalNamespacesToInclude.ArrayNum = 0;
    local_330.AdditionalNamespacesToInclude.ArrayMax = 0;
    local_330.bIncludeGlobal = true;
    local_330.bForceCaseSensitive = false;
    local_330.bNativeOnly = false;
    pTVar10 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                        (&local_138,&local_270);
    UNamingTokensEngineSubsystem::EvaluateTokenList(this,&local_308,pTVar10,&local_330);
    DestructItems<FString,int>((FString *)local_270.AllocatorInstance.Data,local_270.ArrayNum);
    if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_330.AdditionalNamespacesToInclude.AllocatorInstance.Data,
               local_330.AdditionalNamespacesToInclude.ArrayNum);
    if (local_330.AdditionalNamespacesToInclude.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.AdditionalNamespacesToInclude.AllocatorInstance.Data);
    }
    uVar14 = (ulonglong)local_308.ArrayNum;
    local_360 = local_308.ArrayNum;
    pFVar24 = (FNamingTokenValueData *)(local_308.AllocatorInstance.Data + uVar14 * 0x38);
    FVar18.Data = local_308.AllocatorInstance.Data;
LAB_14dc8d290:
    do {
      if (local_308.ArrayNum != (uint)uVar14) {
        local_387 = 0;
        `TCheckedPointerIterator<FNamingTokenValueData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_387);
      }
      if ((FNamingTokenValueData *)FVar18.Data == pFVar24) goto LAB_14dc8da1f;
      UE::NamingTokens::Utils::CombineNamespaceAndTokenKey
                (&local_370,&((FNamingTokenValueData *)FVar18.Data)->TokenNamespace,
                 (FString *)FVar18.Data);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_98,(FString *)(local_1f0 + 4),(bool *)&local_370);
      if (((FNamingTokenValueData *)FVar18.Data)->bWasEvaluated == false) {
        FPaths::MakeValidFileName(&local_198,&local_370,L'_');
        ::FString::PrintfImpl(&local_250,L"{%s}");
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_250.Data.ArrayNum != 0) {
          FVar17.Data = local_250.Data.AllocatorInstance.Data;
        }
        ::FString::PrintfImpl(&local_260,L"{%s}");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_260.Data.ArrayNum != 0) {
          FVar16.Data = local_260.Data.AllocatorInstance.Data;
        }
        ::FString::ReplaceInline(param_1,(wchar_t *)FVar16.Data,(wchar_t *)FVar17.Data,IgnoreCase);
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
          uVar14 = (ulonglong)local_360;
          FVar18.Data = FVar18.Data + 0x38;
          goto LAB_14dc8d290;
        }
      }
      else {
        iVar13 = local_370.Data.ArrayNum + -1;
        FVar17.Data = local_370.Data.AllocatorInstance.Data;
        if (local_370.Data.ArrayNum == 0) {
          iVar13 = 0;
          FVar17.Data = (FScriptContainerElement *)L"";
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar17.Data);
        if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_138.Hash;
          if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_138.Hash.SecondaryData;
          }
          iVar13 = *(int *)((longlong)FVar22 + (ulonglong)(local_138.HashSize - 1U & uVar6) * 4);
          iVar7 = local_370.Data.ArrayNum;
          lVar19 = local_138.Elements._0_8_;
          while (iVar13 != -1) {
            lVar1 = (longlong)iVar13 * 0x18;
            iVar2 = *(int *)(lVar19 + 8 + lVar1);
            if (iVar2 == iVar7) {
              if (1 < iVar2) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)(lVar19 + lVar1),
                                   (wchar_t *)local_370.Data.AllocatorInstance.Data);
                bVar25 = iVar7 == 0;
                lVar19 = local_138.Elements._0_8_;
                iVar7 = local_370.Data.ArrayNum;
                goto LAB_14dc8d474;
              }
LAB_14dc8d489:
              if (iVar13 != -1) {
                ::FString::PrintfImpl(&local_2c8,L"__MRGTEMP_%s_%s__");
                ::FString::PrintfImpl(&local_230,L"{%s}");
                FVar17.Data = (FScriptContainerElement *)L"";
                if (local_230.Data.ArrayNum != 0) {
                  FVar17.Data = local_230.Data.AllocatorInstance.Data;
                }
                ::FString::PrintfImpl(&local_240,L"{%s}");
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_240.Data.ArrayNum != 0) {
                  FVar16.Data = local_240.Data.AllocatorInstance.Data;
                }
                ::FString::ReplaceInline
                          (param_1,(wchar_t *)FVar16.Data,(wchar_t *)FVar17.Data,IgnoreCase);
                if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240.Data.AllocatorInstance.Data);
                }
                if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_230.Data.AllocatorInstance.Data);
                }
                pFVar11 = FText::ToString(&((FNamingTokenValueData *)FVar18.Data)->TokenValue);
                local_350.Data = (FScriptContainerElement *)0x0;
                local_348 = (pFVar11->Data).ArrayNum;
                lVar19 = (longlong)local_348;
                pFVar21 = (pFVar11->Data).AllocatorInstance.Data;
                if (local_348 == 0) {
                  local_344 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_348,0,&local_350,local_348,&local_344);
                  memcpy(local_350.Data,pFVar21,lVar19 * 2);
                }
                iVar13 = local_348;
                FVar17.Data = local_350.Data;
                local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2d8.Data.ArrayNum = local_348;
                if (local_348 == 0) {
                  local_2d8.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_348,0,(ForAnyElementType *)&local_2d8,local_348,
                             &local_2d8.Data.ArrayMax);
                  memcpy(local_2d8.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar13 * 2);
                }
                FStringFormatArg::FStringFormatArg(&local_178,&local_2d8);
                TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                ::Emplace<FString_const_&,FStringFormatArg>
                          ((TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                            *)local_2f8.Data.AllocatorInstance.Data,&local_2c8,&local_178);
                if (local_178.StringValue.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
                }
                local_1b8 = &local_370;
                local_1b0 = &local_350;
                TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                          ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)param_2,(TPairInitializer<FString_const_&,FString_const_&> *)local_278
                           ,(bool *)&local_1b8);
                if (local_350.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_350.Data);
                }
                param_1 = local_358;
                if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                  param_1 = local_358;
                }
              }
              break;
            }
            bVar25 = iVar2 + iVar7 == 1;
LAB_14dc8d474:
            if (bVar25) goto LAB_14dc8d489;
            iVar13 = *(int *)(lVar1 + 0x10 + lVar19);
          }
        }
        local_378 = (((FNamingTokenValueData *)FVar18.Data)->TokenKey).Data.ArrayNum;
        lVar19 = (longlong)local_378;
        pFVar21 = (((FNamingTokenValueData *)FVar18.Data)->TokenKey).Data.AllocatorInstance.Data;
        local_380.Data = (FScriptContainerElement *)0x0;
        if (local_378 == 0) {
          local_374 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_378,0,&local_380,local_378,&local_374);
          memcpy(local_380.Data,pFVar21,lVar19 * 2);
        }
        iVar13 = local_378 + -1;
        FVar17.Data = local_380.Data;
        if (local_378 == 0) {
          iVar13 = 0;
          FVar17.Data = (FScriptContainerElement *)L"";
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar17.Data);
        if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_138.Hash;
          if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_138.Hash.SecondaryData;
          }
          iVar13 = *(int *)((longlong)FVar22 + (ulonglong)(local_138.HashSize - 1U & uVar6) * 4);
          iVar7 = local_378;
          lVar19 = local_138.Elements._0_8_;
          while (iVar13 != -1) {
            lVar1 = (longlong)iVar13 * 0x18;
            iVar2 = *(int *)(lVar19 + 8 + lVar1);
            if (iVar2 == iVar7) {
              if (1 < iVar2) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)(lVar19 + lVar1),(wchar_t *)local_380.Data);
                bVar25 = iVar7 == 0;
                lVar19 = local_138.Elements._0_8_;
                iVar7 = local_378;
                goto LAB_14dc8d7c4;
              }
LAB_14dc8d7d9:
              if (iVar13 != -1) {
                ::FString::PrintfImpl(&local_2b8,L"__MRGTEMP_%s_%s__");
                ::FString::PrintfImpl(&local_210,L"{%s}");
                FVar17.Data = (FScriptContainerElement *)L"";
                if (local_210.Data.ArrayNum != 0) {
                  FVar17.Data = local_210.Data.AllocatorInstance.Data;
                }
                ::FString::PrintfImpl(&local_220,L"{%s}");
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_220.Data.ArrayNum != 0) {
                  FVar16.Data = local_220.Data.AllocatorInstance.Data;
                }
                ::FString::ReplaceInline
                          (param_1,(wchar_t *)FVar16.Data,(wchar_t *)FVar17.Data,IgnoreCase);
                if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_220.Data.AllocatorInstance.Data);
                }
                if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_210.Data.AllocatorInstance.Data);
                }
                pFVar11 = FText::ToString(&((FNamingTokenValueData *)FVar18.Data)->TokenValue);
                local_340.Data = (FScriptContainerElement *)0x0;
                local_338 = (pFVar11->Data).ArrayNum;
                lVar19 = (longlong)local_338;
                pFVar21 = (pFVar11->Data).AllocatorInstance.Data;
                if (local_338 == 0) {
                  local_334 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_338,0,&local_340,local_338,&local_334);
                  memcpy(local_340.Data,pFVar21,lVar19 * 2);
                }
                iVar13 = local_338;
                FVar17.Data = local_340.Data;
                local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_318.Data.ArrayNum = local_338;
                if (local_338 == 0) {
                  local_318.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_338,0,(ForAnyElementType *)&local_318,local_338,
                             &local_318.Data.ArrayMax);
                  memcpy(local_318.Data.AllocatorInstance.Data,FVar17.Data,(longlong)iVar13 * 2);
                }
                FStringFormatArg::FStringFormatArg(&local_158,&local_318);
                TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                ::Emplace<FString_const_&,FStringFormatArg>
                          ((TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                            *)local_2f8.Data.AllocatorInstance.Data,&local_2b8,&local_158);
                if (local_158.StringValue.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
                }
                local_1a8 = &local_380;
                local_1a0 = &local_340;
                TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                          ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)param_2,
                           (TPairInitializer<FString_const_&,FString_const_&> *)(local_278 + 4),
                           (bool *)&local_1a8);
                if (local_340.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_340.Data);
                }
                if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                }
              }
              break;
            }
            bVar25 = iVar2 + iVar7 == 1;
LAB_14dc8d7c4:
            if (bVar25) goto LAB_14dc8d7d9;
            iVar13 = *(int *)(lVar1 + 0x10 + lVar19);
          }
        }
        if (local_380.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data);
        }
        param_1 = local_358;
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
          param_1 = local_358;
        }
      }
      uVar14 = (ulonglong)local_360;
      FVar18.Data = FVar18.Data + 0x38;
    } while( true );
  }
LAB_14dc8dd8d:
  local_138.HashSize = 0;
  if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138.Elements);
  return;
LAB_14dc8da1f:
  DestructItems<FNamingTokenValueData,int>
            ((FNamingTokenValueData *)local_308.AllocatorInstance.Data,local_308.ArrayNum);
  if ((FNamingTokenValueData *)local_308.AllocatorInstance.Data != (FNamingTokenValueData *)0x0) {
    FMemory::Free(local_308.AllocatorInstance.Data);
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
            (&local_138,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
             &local_98);
  uVar6 = local_c0;
  iStack_2a0 = 0;
  uStack_29c = 1;
  local_288 = 0;
  uStack_28c = 0;
  if (local_c0 != 0) {
    puVar23 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar23 = local_c8;
    }
    uVar20 = *puVar23;
    local_288 = 0;
    while (uVar20 == 0) {
      lVar19 = (longlong)iStack_2a0;
      local_288 = local_288 + 0x20;
      iStack_2a0 = iStack_2a0 + 1;
      uStack_28c = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2a0)
      goto LAB_14dc8dae1;
      uVar20 = puVar23[lVar19 + 1];
    }
    uStack_29c = -uVar20 & uVar20;
    uVar14 = (ulonglong)uStack_29c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_360 = (uint)lVar19;
    uStack_28c = (local_360 - 1) + local_288;
    if ((int)local_c0 < (int)uStack_28c) {
      uStack_28c = local_c0;
    }
  }
LAB_14dc8dae1:
  local_2a8 = (longlong *)local_e8;
  local_298 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  iStack_280 = local_e8._8_4_ - local_b4;
  uVar20 = local_c0 & 0xffffffe0;
  uStack_290 = 0xffffffff;
  TStack_1e0.CurrentBitIndex = uStack_28c;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  TStack_1e0._padding_ = CONCAT44(uStack_29c,iStack_2a0);
  iVar13 = (int)local_c0 >> 5;
  TStack_1e0._28_4_ = uStack_28c;
  TStack_1e0.BaseBitIndex = local_288;
  uStack_1c0 = CONCAT44(uStack_27c,iStack_280);
  bVar12 = (byte)local_c0;
  uStack_284 = uStack_28c;
  local_1e8 = local_2a8;
  TStack_1e0.Array = local_298;
  if (((int)local_c0 < 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar25)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar11 = local_358;
  if (uVar6 != local_c0) {
    puVar23 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar23 = local_c8;
    }
    uVar6 = -1 << (bVar12 & 0x1f) & puVar23[iVar13];
    while (uVar6 == 0) {
      lVar19 = (longlong)iVar13;
      uVar20 = uVar20 + 0x20;
      iVar13 = iVar13 + 1;
      uVar6 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14dc8dc01;
      uVar6 = puVar23[lVar19 + 1];
    }
    uVar14 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar6 = (int)lVar19 + -1 + uVar20;
    if ((int)local_c0 < (int)uVar6) {
      uVar6 = local_c0;
    }
  }
LAB_14dc8dc01:
  while( true ) {
    plVar5 = local_1e8;
    if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_386);
    }
    if (((TStack_1e0.CurrentBitIndex == uVar6) &&
        (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar5 == (longlong *)local_e8)) break;
    FPaths::MakeValidFileName
              (&local_188,(FString *)(*plVar5 + (longlong)TStack_1e0.CurrentBitIndex * 0x18),L'_');
    ::FString::PrintfImpl(&local_200,L"{%s}");
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_200.Data.ArrayNum != 0) {
      FVar18.Data = local_200.Data.AllocatorInstance.Data;
    }
    ::FString::PrintfImpl(&local_2f8,L"{%s}");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_2f8.Data.ArrayNum != 0) {
      FVar17.Data = local_2f8.Data.AllocatorInstance.Data;
    }
    ::FString::ReplaceInline(pFVar11,(wchar_t *)FVar17.Data,(wchar_t *)FVar18.Data,IgnoreCase);
    if ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
         *)local_2f8.Data.AllocatorInstance.Data !=
        (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
         *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  goto LAB_14dc8dd8d;
}

// Z_Construct_UClass_AMoviePipelineGameMode_NoRegister @ 14dc8ea20

UClass * __cdecl Z_Construct_UClass_AMoviePipelineGameMode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineGameMode",
               &Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton,
               AMoviePipelineGameMode::StaticRegisterNativesAMoviePipelineGameMode,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AMoviePipelineGameMode>,
               InternalVTableHelperCtorCaller<AMoviePipelineGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMoviePipelineGameMode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphBlueprintLibrary_NoRegister @ 14dc8eae0

UClass * __cdecl Z_Construct_UClass_UMovieGraphBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBlueprintLibrary",
               &Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton,
               UMovieGraphBlueprintLibrary::StaticRegisterNativesUMovieGraphBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMovieGraphBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister @ 14dc8eba0

UClass * __cdecl Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBurnInWidget",
               &Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton,
               UMovieGraphBurnInWidget::StaticRegisterNativesUMovieGraphBurnInWidget,0x3a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphBurnInWidget>,
               InternalVTableHelperCtorCaller<UMovieGraphBurnInWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBurnInWidget.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphCoreTimeStep_NoRegister @ 14dc8ec60

UClass * __cdecl Z_Construct_UClass_UMovieGraphCoreTimeStep_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCoreTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton,
               UMovieGraphCoreTimeStep::StaticRegisterNativesUMovieGraphCoreTimeStep,400,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphCoreTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphCoreTimeStep>,local_res8,
               UMovieGraphTimeStepBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName_NoRegister @ 14dc8ed20

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_CameraName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_CameraName",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_CameraName.InnerSingleton,
               UMovieGraphGlobalVariable_CameraName::
               StaticRegisterNativesUMovieGraphGlobalVariable_CameraName,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_CameraName>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_CameraName>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_CameraName.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber_NoRegister @ 14dc8ede0

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_FrameNumber",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton,
               UMovieGraphGlobalVariable_FrameNumber::
               StaticRegisterNativesUMovieGraphGlobalVariable_FrameNumber,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_FrameNumber>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_FrameNumber>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName_NoRegister @ 14dc8eea0

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_SequenceName",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton,
               UMovieGraphGlobalVariable_SequenceName::
               StaticRegisterNativesUMovieGraphGlobalVariable_SequenceName,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_SequenceName>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_SequenceName>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName_NoRegister @ 14dc8ef60

UClass * __cdecl Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_ShotName",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton,
               UMovieGraphGlobalVariable_ShotName::
               StaticRegisterNativesUMovieGraphGlobalVariable_ShotName,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_ShotName>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_ShotName>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphInterfaceBase_NoRegister @ 14dc8f020

UClass * __cdecl Z_Construct_UClass_UMovieGraphInterfaceBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphInterfaceBase",
               &Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton,
               UMovieGraphInterfaceBase::StaticRegisterNativesUMovieGraphInterfaceBase,0x80,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphInterfaceBase>,
               InternalVTableHelperCtorCaller<UMovieGraphInterfaceBase>,local_res8,
               UMovieGraphMember::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphInterfaceBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister @ 14dc8f0e0

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPassNode",
               &Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton,
               UMovieGraphRenderPassNode::StaticRegisterNativesUMovieGraphRenderPassNode,0xd8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphRenderPassNode>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPassNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPassNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphRenderPreviewWidget_NoRegister @ 14dc8f1a0

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderPreviewWidget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPreviewWidget",
               &Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton,
               UMovieGraphRenderPreviewWidget::StaticRegisterNativesUMovieGraphRenderPreviewWidget,
               0x3a8,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphRenderPreviewWidget>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPreviewWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPreviewWidget.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphTraversableObject_NoRegister @ 14dc8f260

UClass * __cdecl Z_Construct_UClass_UMovieGraphTraversableObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphTraversableObject",
               &Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton,
               UMovieGraphTraversableObject::StaticRegisterNativesUMovieGraphTraversableObject,0x28,
               8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphTraversableObject>,
               InternalVTableHelperCtorCaller<UMovieGraphTraversableObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphTraversableObject.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineBase_NoRegister @ 14dc8f320

UClass * __cdecl Z_Construct_UClass_UMoviePipelineBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineBase",
               &Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton,
               UMoviePipelineBase::StaticRegisterNativesUMoviePipelineBase,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBase.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister @ 14dc8f3d0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineHighResSetting",
               &Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton,
               UMoviePipelineHighResSetting::StaticRegisterNativesUMoviePipelineHighResSetting,0x68,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineHighResSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineHighResSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineHighResSetting.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_NoRegister @ 14dc8f490

UClass * __cdecl Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineInProcessExecutorSettings",
               &Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton,
               UMoviePipelineInProcessExecutorSettings::
               StaticRegisterNativesUMoviePipelineInProcessExecutorSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineInProcessExecutorSettings>,
               InternalVTableHelperCtorCaller<UMoviePipelineInProcessExecutorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutorSettings.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineOutputBase_NoRegister @ 14dc8f550

UClass * __cdecl Z_Construct_UClass_UMoviePipelineOutputBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineOutputBase",
               &Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton,
               UMoviePipelineOutputBase::StaticRegisterNativesUMoviePipelineOutputBase,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineOutputBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineOutputBase>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineOutputBase.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister @ 14dc8f610

UClass * __cdecl Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineRenderPass",
               &Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton,
               UMoviePipelineRenderPass::StaticRegisterNativesUMoviePipelineRenderPass,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineRenderPass>,
               InternalVTableHelperCtorCaller<UMoviePipelineRenderPass>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton;
}

// Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister @ 14dc8f6d0

UClass * __cdecl Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineViewFamilySetting",
               &Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton,
               UMoviePipelineViewFamilySetting::StaticRegisterNativesUMoviePipelineViewFamilySetting
               ,0x48,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineViewFamilySetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineViewFamilySetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.InnerSingleton;
}

// Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister @ 14dc8f790

UClass * __cdecl Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieRenderDebugWidget",
               &Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton,
               UMovieRenderDebugWidget::StaticRegisterNativesUMovieRenderDebugWidget,0x3a8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieRenderDebugWidget>,
               InternalVTableHelperCtorCaller<UMovieRenderDebugWidget>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieRenderDebugWidget.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType @ 14dc8f850

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphContainerType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphContainerType.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphContainerType.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType @ 14dc8f890

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphValueType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphValueType.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphValueType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphBranch @ 14dc8f8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphBranch(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphBranch.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphBranch.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphBranch_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphBranch.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphBranch.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphEvaluationContext @ 14dc8f950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphEvaluationContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphRenderOutputData @ 14dc8f9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphRenderOutputData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderOutputData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphRenderOutputData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphRenderOutputData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphRenderOutputData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphRenderOutputData.InnerSingleton;
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

// ActiveEncodeJobs'' @ 15045dc60

void __cdecl
`dynamic_atexit_destructor_for_'UMovieGraphCommandLineEncoderNode::ActiveEncodeJobs__(void)

{
  DestructItems<UMovieGraphCommandLineEncoderNode::FActiveJob,int>
            ((FActiveJob *)
             UMovieGraphCommandLineEncoderNode::ActiveEncodeJobs.AllocatorInstance.Data,
             UMovieGraphCommandLineEncoderNode::ActiveEncodeJobs.ArrayNum);
  if (UMovieGraphCommandLineEncoderNode::ActiveEncodeJobs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(UMovieGraphCommandLineEncoderNode::ActiveEncodeJobs.AllocatorInstance.Data);
    return;
  }
  return;
}

// QuickRenderSettingsPackagePath'' @ 15045dca0

void __cdecl
`dynamic_atexit_destructor_for_'UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance
               .Data;
  if (UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'InputBaseName'' @ 15045dcc0

void __cdecl
`UMovieGraphConfig::AddInput'::__l2::_dynamic_atexit_destructor_for__InputBaseName__(void)

{
  if (InputBaseName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045dccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputBaseName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidChars'' @ 15045dce0

void __cdecl
`UMovieGraphMember::CanRename'::__l2::_dynamic_atexit_destructor_for__InvalidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidChars.Data.AllocatorInstance.Data;
  if (InvalidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OutputBaseName'' @ 15045dd00

void __cdecl
`UMovieGraphConfig::AddOutput'::__l2::_dynamic_atexit_destructor_for__OutputBaseName__(void)

{
  if (OutputBaseName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045dd0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputBaseName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Pattern'' @ 15045dd20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
``anonymous_namespace'::GetTokensFromString'::__l2::_dynamic_atexit_destructor_for__Pattern__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (`GetTokensFromString'::`2'::Pattern.Implementation.SharedReferenceCount.
             ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'PatternString'' @ 15045dd40

void __cdecl
``anonymous_namespace'::GetTokensFromString'::__l2::_dynamic_atexit_destructor_for__PatternString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `GetTokensFromString'::`2'::PatternString.Data.AllocatorInstance.Data;
  if (`GetTokensFromString'::`2'::PatternString.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (`GetTokensFromString'::`2'::PatternString.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'VariableBaseName'' @ 15045dd60

void __cdecl
`UMovieGraphConfig::AddVariable'::__l2::_dynamic_atexit_destructor_for__VariableBaseName__(void)

{
  if (VariableBaseName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045dd6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*VariableBaseName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__LoggedMessages__DuplicateVariableNameWarning'' @ 15045dd80

void __cdecl
`UMovieGraphEvaluatedConfig::GetVariableValueByName'::__l8::
_dynamic_atexit_destructor_for____LoggedMessages__DuplicateVariableNameWarning__(void)

{
  DestructItems<FString,int>
            ((FString *)__LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance.Data,
             __LoggedMessages__DuplicateVariableNameWarning.ArrayNum);
  if (__LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(__LoggedMessages__DuplicateVariableNameWarning.AllocatorInstance.Data);
    return;
  }
  return;
}

