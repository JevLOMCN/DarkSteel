// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 640

// ActiveWriters'' @ 1413f8650

void __cdecl `dynamic_initializer_for_'UMovieGraphAudioOutputNode::ActiveWriters__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphAudioOutputNode::ActiveWriters__);
  return;
}

// AlreadyWrittenSegments'' @ 1413f8670

void __cdecl `dynamic_initializer_for_'UMovieGraphAudioOutputNode::AlreadyWrittenSegments__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphAudioOutputNode::AlreadyWrittenSegments__);
  return;
}

// CategoryMetaDataKey'' @ 1413f8690

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::CategoryMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::CategoryMetaDataKey,L"Category");
  return;
}

// CustomEntryName'' @ 1413f86b0

void __cdecl `dynamic_initializer_for_'FMovieGraphNamedResolution::CustomEntryName__(void)

{
  ::FName::FName(&FMovieGraphNamedResolution::CustomEntryName,L"Custom");
  return;
}

// DefaultBurnInWidgetAsset'' @ 1413f86d0

void __cdecl `dynamic_initializer_for_'UMovieGraphBurnInNode::DefaultBurnInWidgetAsset__(void)

{
  ::FString::FString(&UMovieGraphBurnInNode::DefaultBurnInWidgetAsset,
                     L"/MovieRenderPipeline/Blueprints/Graph/DefaultGraphBurnIn.DefaultGraphBurnIn_C"
                    );
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphBurnInNode::DefaultBurnInWidgetAsset__);
  return;
}

// DefaultPreviewWidgetAsset'' @ 1413f8700

void __cdecl `dynamic_initializer_for_'UMovieGraphPipeline::DefaultPreviewWidgetAsset__(void)

{
  ::FString::FString(&UMovieGraphPipeline::DefaultPreviewWidgetAsset,
                     L"/MovieRenderPipeline/Blueprints/UI_MovieGraphPipelineScreenOverlay.UI_MovieGraphPipelineScreenOverlay_C"
                    );
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphPipeline::DefaultPreviewWidgetAsset__);
  return;
}

// DefaultResolutionName'' @ 1413f8730

void __cdecl `dynamic_initializer_for_'FMovieGraphNamedResolution::DefaultResolutionName__(void)

{
  ::FName::FName(&FMovieGraphNamedResolution::DefaultResolutionName,L"1080p (FHD)");
  return;
}

// DisplayNameMetaDataKey'' @ 1413f8750

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::DisplayNameMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::DisplayNameMetaDataKey,L"DisplayName");
  return;
}

// EnableCategoriesMetaDataKey'' @ 1413f8770

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::EnableCategoriesMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::EnableCategoriesMetaDataKey,
                 L"EnableCategories");
  return;
}

// GlobalsPinName'' @ 1413f8790

void __cdecl `dynamic_initializer_for_'UMovieGraphNode::GlobalsPinName__(void)

{
  ::FName::FName(&UMovieGraphNode::GlobalsPinName,"Globals");
  return;
}

// GlobalsPinNameString'' @ 1413f87b0

void __cdecl `dynamic_initializer_for_'UMovieGraphNode::GlobalsPinNameString__(void)

{
  ::FString::FString(&UMovieGraphNode::GlobalsPinNameString,"Globals");
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphNode::GlobalsPinNameString__);
  return;
}

// OutputExtension'' @ 1413f87e0

void __cdecl `dynamic_initializer_for_'UMovieGraphAudioOutputNode::OutputExtension__(void)

{
  ::FString::FString(&UMovieGraphAudioOutputNode::OutputExtension,L"wav");
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphAudioOutputNode::OutputExtension__);
  return;
}

// QuickRenderSettingsPackagePath'' @ 1413f8810

void __cdecl
`dynamic_initializer_for_'UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath__(void)

{
  ::FString::FString(&UMovieGraphQuickRenderSettings::QuickRenderSettingsPackagePath,
                     L"/Temp/MovieRenderPipeline/QuickRenderSettings");
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphQuickRenderSettings::
         QuickRenderSettingsPackagePath__);
  return;
}

// RendererName'' @ 1413f8840

void __cdecl `dynamic_initializer_for_'UMovieGraphAudioOutputNode::RendererName__(void)

{
  ::FString::FString(&UMovieGraphAudioOutputNode::RendererName,L"Audio");
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphAudioOutputNode::RendererName__);
  return;
}

// RendererName'' @ 1413f8870

void __cdecl `dynamic_initializer_for_'UMovieGraphBurnInNode::RendererName__(void)

{
  ::FString::FString(&UMovieGraphBurnInNode::RendererName,"BurnIn");
  atexit(`dynamic_atexit_destructor_for_'UMovieGraphBurnInNode::RendererName__);
  return;
}

// ToolTipMetaDataKey'' @ 1413f88a0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::ToolTipMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::ToolTipMetaDataKey,L"ToolTip");
  return;
}

// VariableGuidMetaDataKey'' @ 1413f88c0

void __cdecl
`dynamic_initializer_for_'UMovieJobVariableAssignmentContainer::VariableGuidMetaDataKey__(void)

{
  ::FName::FName(&UMovieJobVariableAssignmentContainer::VariableGuidMetaDataKey,L"VariableGUID");
  return;
}

// `dynamic_initializer_for_'CVarNumWarmUpFramesWithTemporalSampling'' @ 1413f88e0

void __cdecl _dynamic_initializer_for__CVarNumWarmUpFramesWithTemporalSampling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 5;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNumWarmUpFramesWithTemporalSampling,
             L"MovieRenderPipeline.NumWarmUpFramesWithTemporalSampling",local_res8,
             L"The number of warm-up frames that should have temporal sampling applied to them.\n",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarNumWarmUpFramesWithTemporalSampling__);
  return;
}

// `dynamic_initializer_for_'CVarWaveOutputDelay'' @ 1413f8930

void __cdecl _dynamic_initializer_for__CVarWaveOutputDelay__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarWaveOutputDelay,L"MovieRenderPipeline.WaveOutput.WriteDelay",local_res8,
             L"How long (in seconds) should the .wav writer stall the main thread to wait for the async write to finish\nbefore moving on? If your .wav files take a long time to write and they\'re not finished by the time the\nencoder runs, the encoder may fail.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarWaveOutputDelay__);
  return;
}

// `dynamic_initializer_for_'Condition'' @ 1413f8980

void __cdecl UE::MovieGraph::BranchNode::_dynamic_initializer_for__Condition__(void)

{
  ::FName::FName(&Condition,"Condition");
  return;
}

// `dynamic_initializer_for_'FalseBranch'' @ 1413f89a0

void __cdecl UE::MovieGraph::BranchNode::_dynamic_initializer_for__FalseBranch__(void)

{
  ::FName::FName(&FalseBranch,"False");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1413f89c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1413f8a50

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

// `dynamic_initializer_for_'TrueBranch'' @ 1413f8ae0

void __cdecl UE::MovieGraph::BranchNode::_dynamic_initializer_for__TrueBranch__(void)

{
  ::FName::FName(&TrueBranch,"True");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h__Script_MovieRenderPipelineCore_1806458551'' @ 1413f8b00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h__Script_MovieRenderPipelineCore_1806458551__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDataTypes_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultAudioRenderer_h__Script_MovieRenderPipelineCore_4258282736'' @ 1413f8b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultAudioRenderer_h__Script_MovieRenderPipelineCore_4258282736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultAudioRenderer_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h__Script_MovieRenderPipelineCore_289095294'' @ 1413f8b90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h__Script_MovieRenderPipelineCore_289095294__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphDefaultRenderer_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h__Script_MovieRenderPipelineCore_1947526099'' @ 1413f8bd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h__Script_MovieRenderPipelineCore_1947526099__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphEdge_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphFilenameResolveParams_h__Script_MovieRenderPipelineCore_658931114'' @ 1413f8c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphFilenameResolveParams_h__Script_MovieRenderPipelineCore_658931114__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphFilenameResolveParams_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphLinearTimeStep_h__Script_MovieRenderPipelineCore_3206503154'' @ 1413f8c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphLinearTimeStep_h__Script_MovieRenderPipelineCore_3206503154__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphLinearTimeStep_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h__Script_MovieRenderPipelineCore_3162255927'' @ 1413f8c90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h__Script_MovieRenderPipelineCore_3162255927__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphNode_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h__Script_MovieRenderPipelineCore_1688571407'' @ 1413f8ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h__Script_MovieRenderPipelineCore_1688571407__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h__Script_MovieRenderPipelineCore_3396237746'' @ 1413f8d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h__Script_MovieRenderPipelineCore_3396237746__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h__Script_MovieRenderPipelineCore_1035952043'' @ 1413f8d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h__Script_MovieRenderPipelineCore_1035952043__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphProjectSettings_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h__Script_MovieRenderPipelineCore_2583442161'' @ 1413f8db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h__Script_MovieRenderPipelineCore_2583442161__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphQuickRenderSettings_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,5);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h__Script_MovieRenderPipelineCore_924515094'' @ 1413f8e00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h__Script_MovieRenderPipelineCore_924515094__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,0x14,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h__Script_MovieRenderPipelineCore_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h__Script_MovieRenderPipelineCore_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphSequenceDataSource_h__Script_MovieRenderPipelineCore_3683979590'' @ 1413f8e50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphSequenceDataSource_h__Script_MovieRenderPipelineCore_3683979590__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphSequenceDataSource_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h__Script_MovieRenderPipelineCore_3088771538'' @ 1413f8e90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h__Script_MovieRenderPipelineCore_3088771538__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieRenderGraphEditorSettings_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphApplyCVarPresetNode_h__Script_MovieRenderPipelineCore_3343197089'' @ 1413f8ed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphApplyCVarPresetNode_h__Script_MovieRenderPipelineCore_3343197089__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphApplyCVarPresetNode_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphApplyViewportLookNode_h__Script_MovieRenderPipelineCore_1557118108'' @ 1413f8f10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphApplyViewportLookNode_h__Script_MovieRenderPipelineCore_1557118108__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphApplyViewportLookNode_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h__Script_MovieRenderPipelineCore_2343896349'' @ 1413f8f50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h__Script_MovieRenderPipelineCore_2343896349__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphAudioOutputNode_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h__Script_MovieRenderPipelineCore_1332594546'' @ 1413f8f90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h__Script_MovieRenderPipelineCore_1332594546__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBranchNode_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBurnInNode_h__Script_MovieRenderPipelineCore_2895000146'' @ 1413f8fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBurnInNode_h__Script_MovieRenderPipelineCore_2895000146__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MovieRenderPipelineCore",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBurnInNode_h__Script_MovieRenderPipelineCore_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// NewProp_ReturnValue_SetBit @ 14dc97b60

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_ShouldHidePropertyNames_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_ShouldHidePropertyNames @ 14dc97b70

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_ShouldHidePropertyNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_ShouldHidePropertyNames_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphQuickRenderModeSettings_RefreshVariableAssignments @ 14dc97bb0

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphQuickRenderModeSettings_RefreshVariableAssignments(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphQuickRenderModeSettings_RefreshVariableAssignments_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_RemoveRenderLayer @ 14dc97bf0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_RemoveRenderLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_RemoveRenderLayer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsEnabled_SetBit @ 14dc97c30

void __cdecl
Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_Statics::NewProp_bIsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bOverride_ViewportLookFlags_SetBit @ 14dc97c40

void __cdecl
Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_Statics::
NewProp_bOverride_ViewportLookFlags_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_Reset @ 14dc97c50

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_Reset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_Reset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRendererBase_GetPreviewData @ 14dc97c90

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRendererBase_GetPreviewData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRendererBase_GetPreviewData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_SetActiveRenderLayerByName @ 14dc97cd0

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_SetActiveRenderLayerByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_SetActiveRenderLayerByName_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphSequenceDataSource @ 14dc97d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphSequenceDataSource(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_SetActiveRenderLayerByObj @ 14dc97e10

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_SetActiveRenderLayerByObj(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_NoRegister @ 14dc97e50

UClass * __cdecl Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphQuickRenderModeSettings",
               &Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton,
               UMovieGraphQuickRenderModeSettings::
               StaticRegisterNativesUMovieGraphQuickRenderModeSettings,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphQuickRenderModeSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphQuickRenderModeSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton;
}

// NewStructOps @ 14dc97fc0

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphActorQueryEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphActorQueryEntry,&UE::CoreUObject::Private::Construct<FMovieGraphActorQueryEntry>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphActorQueryEntry>,&UE::CoreUObject::Private::Destruct<FMovieGraphActorQueryEntry>,&UE::CoreUObject::Private::Copy<FMovieGraphActorQueryEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieGraphDefaultRenderer @ 14dc98160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphDefaultRenderer(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphDefaultRenderer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.OuterSingleton;
}

// NewProp_bOnlyMatchComponents_SetBit @ 14dc98320

void __cdecl
Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_Statics::
NewProp_bOnlyMatchComponents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bOnlyMatchComponents_SetBit @ 14dc983f0

void __cdecl
Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_Statics::
NewProp_bOnlyMatchComponents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UClass_UMovieGraphEdge_NoRegister @ 14dc984b0

UClass * __cdecl Z_Construct_UClass_UMovieGraphEdge_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEdge",
               &Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton,
               UMovieGraphEdge::StaticRegisterNativesUMovieGraphEdge,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphEdge>,
               InternalVTableHelperCtorCaller<UMovieGraphEdge>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphEdge @ 14dc986d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphEdge(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphEdge.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphEdge.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphEdge_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphEdge.OuterSingleton;
}

// NewProp_bIsSpawnable_SetBit @ 14dc98710

void __cdecl
Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_Statics::NewProp_bIsSpawnable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 14dc98720

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphEvaluationResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphEvaluationResult,&UE::CoreUObject::Private::Construct<FMovieGraphEvaluationResult>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluationResult>,&UE::CoreUObject::Private::Destruct<FMovieGraphEvaluationResult>,&UE::CoreUObject::Private::Copy<FMovieGraphEvaluationResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_AddQuery @ 14dc98a60

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_AddQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_AddQuery_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dc98b60

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphResolveArgs,&UE::CoreUObject::Private::Construct<FMovieGraphResolveArgs>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphResolveArgs>,&UE::CoreUObject::Private::Destruct<FMovieGraphResolveArgs>,&UE::CoreUObject::Private::Copy<FMovieGraphResolveArgs>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_DuplicateQuery @ 14dc98ba0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_DuplicateQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_DuplicateQuery_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_Evaluate @ 14dc98ca0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_Evaluate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_Evaluate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForceRelativeFrameNumbers_SetBit @ 14dc98ce0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::
NewProp_bForceRelativeFrameNumbers_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xac) = 1;
  return;
}

// NewProp_bEnsureAbsolutePath_SetBit @ 14dc98cf0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::
NewProp_bEnsureAbsolutePath_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewStructOps @ 14dc98d00

void * __cdecl
Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphFilenameResolveParams,&UE::CoreUObject::Private::Construct<FMovieGraphFilenameResolveParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphFilenameResolveParams>,&UE::CoreUObject::Private::Destruct<FMovieGraphFilenameResolveParams>,&UE::CoreUObject::Private::Copy<FMovieGraphFilenameResolveParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_EvaluateActorsAndComponents @ 14dc98d40

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroup_EvaluateActorsAndComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_EvaluateActorsAndComponents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_GetOperationType @ 14dc98d80

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_GetOperationType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_GetOperationType_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieRenderGraphEditorSettings @ 14dc98f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieRenderGraphEditorSettings(void)

{
  if (Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.OuterSingleton,
               &Z_Construct_UClass_UMovieRenderGraphEditorSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphApplyCVarPresetNode @ 14dc991f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphApplyCVarPresetNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphApplyCVarPresetNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.OuterSingleton;
}

// NewProp_bOverride_ConsoleVariablePreset_SetBit @ 14dc99230

void __cdecl
Z_Construct_UClass_UMovieGraphApplyCVarPresetNode_Statics::
NewProp_bOverride_ConsoleVariablePreset_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_GetQueries @ 14dc99300

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_GetQueries(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_GetQueries_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc99340

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroup_IsFirstConditionGroup_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_IsFirstConditionGroup @ 14dc99350

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_IsFirstConditionGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_IsFirstConditionGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc99390

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroup_MoveQueryToIndex_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_MoveQueryToIndex @ 14dc993a0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_MoveQueryToIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_MoveQueryToIndex_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc993e0

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroup_RemoveQuery_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_RemoveQuery @ 14dc993f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_RemoveQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_RemoveQuery_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroup_SetOperationType @ 14dc994e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroup_SetOperationType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroup_SetOperationType_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphDefaultAudioRenderer @ 14dc997b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphDefaultAudioRenderer(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphDefaultAudioRenderer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphCollection_AddConditionGroup @ 14dc998b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollection_AddConditionGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollection_AddConditionGroup_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphLinearTimeStep @ 14dc999e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphLinearTimeStep(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphCollection_Evaluate @ 14dc99a50

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollection_Evaluate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollection_Evaluate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphCollection_EvaluateActorsAndComponents @ 14dc99ad0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollection_EvaluateActorsAndComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollection_EvaluateActorsAndComponents_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphCollection_GetCollectionName @ 14dc99b10

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollection_GetCollectionName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollection_GetCollectionName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphApplyViewportLookNode @ 14dc99b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphApplyViewportLookNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.OuterSingleton;
}

// NewProp_bOverride_bOcio_SetBit @ 14dc99c50

void __cdecl
Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::NewProp_bOverride_bOcio_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 1;
  return;
}

// NewProp_bOverride_bShowFlags_SetBit @ 14dc99c60

void __cdecl
Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::NewProp_bOverride_bShowFlags_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 2;
  return;
}

// NewProp_bOverride_bViewMode_SetBit @ 14dc99c70

void __cdecl
Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::NewProp_bOverride_bViewMode_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 4;
  return;
}

// NewProp_bOverride_bVisibility_SetBit @ 14dc99c80

void __cdecl
Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::NewProp_bOverride_bVisibility_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 8;
  return;
}

// NewProp_bOcio_SetBit @ 14dc99c90

void __cdecl
Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::NewProp_bOcio_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// NewProp_bShowFlags_SetBit @ 14dc99ca0

void __cdecl
Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::NewProp_bShowFlags_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
  return;
}

// NewProp_bViewMode_SetBit @ 14dc99cb0

void __cdecl
Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::NewProp_bViewMode_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb3) = 1;
  return;
}

// NewProp_bVisibility_SetBit @ 14dc99cc0

void __cdecl
Z_Construct_UClass_UMovieGraphApplyViewportLookNode_Statics::NewProp_bVisibility_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// Z_Construct_UClass_UMovieGraphEvaluationNodeInjector @ 14dc99ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphEvaluationNodeInjector(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphNode @ 14dc9a030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphNode.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphPostRenderNode @ 14dc9a070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphPostRenderNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphPostRenderNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphPostRenderNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphPostRenderNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphPostRenderNode.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphSettingNode @ 14dc9a0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphSettingNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphSettingNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphSettingNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphSettingNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphSettingNode.OuterSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphBranchRestriction @ 14dc9a0f0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphBranchRestriction(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphBranchRestriction_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPinQueryRequirement @ 14dc9a130

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPinQueryRequirement(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPinQueryRequirement_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphPinProperties @ 14dc9a170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphPinProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPinProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphPinProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPinProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphPinProperties.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphPropertyInfo @ 14dc9a1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphPropertyInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPropertyInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphPropertyInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPropertyInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphPropertyInfo.InnerSingleton;
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

// NewProp_bIsDynamicProperty_SetBit @ 14dc9a270

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsDynamicProperty_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bIsPermanentlyExposed_SetBit @ 14dc9a280

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewProp_bIsPermanentlyExposed_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 14dc9a290

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphPropertyInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphPropertyInfo,&UE::CoreUObject::Private::Construct<FMovieGraphPropertyInfo>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphPropertyInfo>,&UE::CoreUObject::Private::Destruct<FMovieGraphPropertyInfo>,&UE::CoreUObject::Private::Copy<FMovieGraphPropertyInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphCollection_GetConditionGroups @ 14dc9a3c0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollection_GetConditionGroups(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollection_GetConditionGroups_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14dc9a400

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphTokenResolveContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphTokenResolveContext,&UE::CoreUObject::Private::Construct<FMovieGraphTokenResolveContext>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphTokenResolveContext>,&UE::CoreUObject::Private::Destruct<FMovieGraphTokenResolveContext>,&UE::CoreUObject::Private::Copy<FMovieGraphTokenResolveContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14dc9a530

void __cdecl
Z_Construct_UFunction_UMovieGraphCollection_MoveConditionGroupToIndex_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphCollection_MoveConditionGroupToIndex @ 14dc9a540

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollection_MoveConditionGroupToIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollection_MoveConditionGroupToIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphBranchRestriction_StaticEnum @ 14dc9a580

UEnum * __cdecl EMovieGraphBranchRestriction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphBranchRestriction,
                       (UObject *)pUVar1,L"EMovieGraphBranchRestriction");
  }
  return Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14dc9a5c0

void __cdecl
Z_Construct_UFunction_UMovieGraphCollection_RemoveConditionGroup_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UMovieGraphProjectSettings @ 14dc9a5d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphProjectSettings(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphProjectSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphProjectSettings.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphProjectSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphProjectSettings.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphCollection_RemoveConditionGroup @ 14dc9a6d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollection_RemoveConditionGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollection_RemoveConditionGroup_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9a730

void __cdecl
Z_Construct_UFunction_UMovieGraphNode_CanBeAddedByUser_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphNode_CanBeAddedByUser @ 14dc9a800

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_CanBeAddedByUser(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_CanBeAddedByUser_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphCollection_SetCollectionName @ 14dc9aa30

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollection_SetCollectionName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollection_SetCollectionName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9aa70

void __cdecl
Z_Construct_UFunction_UMovieGraphNode_CanBeDisabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphNode_CanBeDisabled @ 14dc9aa80

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_CanBeDisabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_CanBeDisabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_GetBranchRestriction @ 14dc9aac0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetBranchRestriction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetBranchRestriction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_GetExposedProperties @ 14dc9ab00

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetExposedProperties(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetExposedProperties_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphBurnInNode @ 14dc9ab40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphBurnInNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphBurnInNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphBurnInNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphBurnInNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphBurnInNode.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphOutputBurnInNode @ 14dc9ab80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphOutputBurnInNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphOutputBurnInNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.OuterSingleton;
}

// NewProp_bOverride_BurnInClass_SetBit @ 14dc9abc0

void __cdecl
Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_BurnInClass_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x150) = *(byte *)((longlong)param_1 + 0x150) | 1;
  return;
}

// Z_Construct_UClass_UMovieGraphAudioOutputNode @ 14dc9abd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphAudioOutputNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphAudioOutputNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphNode_GetFirstConnectedInputPin @ 14dc9ac10

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetFirstConnectedInputPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetFirstConnectedInputPin_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphPin @ 14dc9ac50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphPin(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphPin.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphPin.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphPin_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphPin.OuterSingleton;
}

// NewProp_bAllowMultipleConnections_SetBit @ 14dc9ac90

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bAllowMultipleConnections_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIsBranch_SetBit @ 14dc9aca0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBranch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bIsWildcard_SetBit @ 14dc9acb0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsWildcard_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bIsBuiltIn_SetBit @ 14dc9acc0

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBuiltIn_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// NewStructOps @ 14dc9acd0

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphPinProperties,&UE::CoreUObject::Private::Construct<FMovieGraphPinProperties>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphPinProperties>,&UE::CoreUObject::Private::Destruct<FMovieGraphPinProperties>,&UE::CoreUObject::Private::Copy<FMovieGraphPinProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphNode_GetFirstConnectedOutputPin @ 14dc9ad10

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetFirstConnectedOutputPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetFirstConnectedOutputPin_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bOverride_OutputName_SetBit @ 14dc9ad50

void __cdecl
Z_Construct_UClass_UMovieGraphOutputBurnInNode_Statics::NewProp_bOverride_OutputName_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 1;
  return;
}

// NewProp_bOverride_FileNameFormat_SetBit @ 14dc9ad60

void __cdecl
Z_Construct_UClass_UMovieGraphOutputBurnInNode_Statics::NewProp_bOverride_FileNameFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 2;
  return;
}

// NewProp_bOverride_OutputRestriction_SetBit @ 14dc9ad70

void __cdecl
Z_Construct_UClass_UMovieGraphOutputBurnInNode_Statics::NewProp_bOverride_OutputRestriction_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 4;
  return;
}

// NewProp_bOverride_LayerNameFormat_SetBit @ 14dc9ad80

void __cdecl
Z_Construct_UClass_UMovieGraphOutputBurnInNode_Statics::NewProp_bOverride_LayerNameFormat_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)((longlong)param_1 + 0x1c8) | 8;
  return;
}

// Z_Construct_UFunction_UMovieGraphModifierBase_ApplyModifier @ 14dc9ad90

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphModifierBase_ApplyModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphModifierBase_ApplyModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_GetInputPin @ 14dc9add0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetInputPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetInputPin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphModifierBase_GetModifierName @ 14dc9af00

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphModifierBase_GetModifierName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphModifierBase_GetModifierName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_GetInputPinProperties @ 14dc9afa0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetInputPinProperties(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetInputPinProperties_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphPinQueryRequirement_StaticEnum @ 14dc9afe0

UEnum * __cdecl EMovieGraphPinQueryRequirement_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPinQueryRequirement,
                       (UObject *)pUVar1,L"EMovieGraphPinQueryRequirement");
  }
  return Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphModifierBase_UndoModifier @ 14dc9b020

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphModifierBase_UndoModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphModifierBase_UndoModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9b0e0

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_AllowsMultipleConnections_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphPin_AllowsMultipleConnections @ 14dc9b0f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_AllowsMultipleConnections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPin_AllowsMultipleConnections_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9b130

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_CanCreateConnection_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphPin_CanCreateConnection @ 14dc9b140

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_CanCreateConnection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPin_CanCreateConnection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPin_EdgeCount @ 14dc9b230

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_EdgeCount(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMovieGraphPin_EdgeCount_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPin_GetAllConnectedPins @ 14dc9b270

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_GetAllConnectedPins(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPin_GetAllConnectedPins_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphCollectionModifier_AddCollection @ 14dc9b2b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollectionModifier_AddCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollectionModifier_AddCollection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphCollectionModifier_GetCollections @ 14dc9b3b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollectionModifier_GetCollections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollectionModifier_GetCollections_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphCollectionModifier_SetCollections @ 14dc9b430

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphCollectionModifier_SetCollections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphCollectionModifier_SetCollections_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_GetInputPins @ 14dc9b4b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetInputPins(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetInputPins_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphMaterialModifier_SetMaterial @ 14dc9b4f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphMaterialModifier_SetMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphMaterialModifier_SetMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9b530

void __cdecl
Z_Construct_UFunction_UMovieGraphNode_GetNodeValidationErrors_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bOverride_Material_SetBit @ 14dc9b540

void __cdecl
Z_Construct_UClass_UMovieGraphMaterialModifier_Statics::NewProp_bOverride_Material_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x88) = *(byte *)((longlong)param_1 + 0x88) | 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphNode_GetNodeValidationErrors @ 14dc9b550

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetNodeValidationErrors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetNodeValidationErrors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_GetOutputPin @ 14dc9b590

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetOutputPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetOutputPin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9b5d0

void __cdecl
Z_Construct_UFunction_UMovieGraphRenderPropertyModifier_IsHidden_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphPin_GetConnectedNodes @ 14dc9b5e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_GetConnectedNodes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPin_GetConnectedNodes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderPropertyModifier_IsHidden @ 14dc9b6d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderPropertyModifier_IsHidden(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderPropertyModifier_IsHidden_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_GetOutputPinProperties @ 14dc9b710

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetOutputPinProperties(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetOutputPinProperties_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsHidden_SetBit @ 14dc9b750

void __cdecl
Z_Construct_UFunction_UMovieGraphRenderPropertyModifier_SetHidden_Statics::
NewProp_bInIsHidden_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bFollowRerouteConnections_SetBit @ 14dc9b760

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_GetFirstConnectedPin_Statics::
NewProp_bFollowRerouteConnections_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UMovieGraphNode_NoRegister @ 14dc9b770

UClass * __cdecl Z_Construct_UClass_UMovieGraphNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphNode",
               &Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton,
               UMovieGraphNode::StaticRegisterNativesUMovieGraphNode,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphNode>,InternalVTableHelperCtorCaller<UMovieGraphNode>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphSettingNode_NoRegister @ 14dc9b820

UClass * __cdecl Z_Construct_UClass_UMovieGraphSettingNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton,
               UMovieGraphSettingNode::StaticRegisterNativesUMovieGraphSettingNode,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSettingNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSettingNode.InnerSingleton;
}

// Z_Construct_UFunction_UMovieGraphRenderPropertyModifier_SetHidden @ 14dc9b8e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderPropertyModifier_SetHidden(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderPropertyModifier_SetHidden_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_GetOutputPins @ 14dc9b920

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetOutputPins(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetOutputPins_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPin_GetFirstConnectedPin @ 14dc9b960

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_GetFirstConnectedPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPin_GetFirstConnectedPin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverride_bIsHidden_SetBit @ 14dc9b9e0

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::NewProp_bOverride_bIsHidden_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 1;
  return;
}

// NewProp_bOverride_bCastsShadows_SetBit @ 14dc9b9f0

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::NewProp_bOverride_bCastsShadows_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 2;
  return;
}

// NewProp_bOverride_bCastShadowWhileHidden_SetBit @ 14dc9ba00

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::
NewProp_bOverride_bCastShadowWhileHidden_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 4;
  return;
}

// NewProp_bOverride_bAffectIndirectLightingWhileHidden_SetBit @ 14dc9ba10

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::
NewProp_bOverride_bAffectIndirectLightingWhileHidden_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 8;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dc9ba20

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_IsConnected_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bOverride_bHoldout_SetBit @ 14dc9ba30

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::NewProp_bOverride_bHoldout_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x10;
  return;
}

// NewProp_bOverride_bProcessEditorOnlyActors_SetBit @ 14dc9ba40

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::
NewProp_bOverride_bProcessEditorOnlyActors_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x20;
  return;
}

// NewProp_bIsHidden_SetBit @ 14dc9ba90

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::NewProp_bIsHidden_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x40;
  return;
}

// NewProp_bCastsShadows_SetBit @ 14dc9baa0

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::NewProp_bCastsShadows_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x80;
  return;
}

// NewProp_bCastShadowWhileHidden_SetBit @ 14dc9bab0

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::NewProp_bCastShadowWhileHidden_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 1;
  return;
}

// NewProp_bAffectIndirectLightingWhileHidden_SetBit @ 14dc9bac0

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::
NewProp_bAffectIndirectLightingWhileHidden_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 2;
  return;
}

// NewProp_bHoldout_SetBit @ 14dc9bb90

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::NewProp_bHoldout_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 4;
  return;
}

// Z_Construct_UFunction_UMovieGraphNode_GetOverrideablePropertyInfo @ 14dc9bba0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_GetOverrideablePropertyInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_GetOverrideablePropertyInfo_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bProcessEditorOnlyActors_SetBit @ 14dc9bbe0

void __cdecl
Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::
NewProp_bProcessEditorOnlyActors_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 8;
  return;
}

// Z_Construct_UFunction_UMovieGraphPin_IsConnected @ 14dc9bbf0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_IsConnected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMovieGraphPin_IsConnected_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9bc30

void __cdecl
Z_Construct_UFunction_UMovieGraphNode_IsDisabled_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dc9bd00

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_IsConnectionToBranchAllowed_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphNode_IsDisabled @ 14dc9bd10

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_IsDisabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMovieGraphNode_IsDisabled_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPin_IsConnectionToBranchAllowed @ 14dc9be00

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_IsConnectionToBranchAllowed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPin_IsConnectionToBranchAllowed_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9be40

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_IsInputPin_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphNode_PromotePropertyToPin @ 14dc9be50

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_PromotePropertyToPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_PromotePropertyToPin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphBranchNode @ 14dc9be90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphBranchNode(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphBranchNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphBranchNode.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphBranchNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphBranchNode.OuterSingleton;
}

// NewProp_bNewDisableState_SetBit @ 14dc9bed0

void __cdecl
Z_Construct_UFunction_UMovieGraphNode_SetDisabled_Statics::NewProp_bNewDisableState_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphPin_IsInputPin @ 14dc9bee0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_IsInputPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMovieGraphPin_IsInputPin_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9bf20

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_IsOutputPin_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphNode_SetDisabled @ 14dc9bf30

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_SetDisabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_SetDisabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPin_IsOutputPin @ 14dc9bf70

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_IsOutputPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMovieGraphPin_IsOutputPin_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphCollection @ 14dc9bfb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphCollection(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphCollection.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollection.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphCollectionModifier @ 14dc9bff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphCollectionModifier(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphCollectionModifier.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphCollectionModifier.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphCollectionModifier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollectionModifier.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroup @ 14dc9c030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroup(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroup.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroup.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroup_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroup.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor @ 14dc9c070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer @ 14dc9c0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName @ 14dc9c0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName @ 14dc9c130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.
                OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType @ 14dc9c170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName @ 14dc9c1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.
                OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType @ 14dc9c1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.
                OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer @ 14dc9c230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder @ 14dc9c270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.
                OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable @ 14dc9c2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.OuterSingleton
               ,&Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphNode_TogglePromotePropertyToPin @ 14dc9c2f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_TogglePromotePropertyToPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_TogglePromotePropertyToPin_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel @ 14dc9c3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14dc9c430

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_IsPinDirectionCompatibleWith_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQueryBase @ 14dc9c440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQueryBase(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_AddLayerModifier @ 14dc9c480

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_AddLayerModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_AddLayerModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphMaterialModifier @ 14dc9c4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphMaterialModifier(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphMaterialModifier.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphMaterialModifier.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphMaterialModifier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphMaterialModifier.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphModifierBase @ 14dc9c500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphModifierBase(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphModifierBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphModifierBase.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphModifierBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphModifierBase.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphRenderLayer @ 14dc9c540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderLayer(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphRenderLayer.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphRenderLayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayer.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphRenderLayerSubsystem @ 14dc9c580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderLayerSubsystem(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphRenderPropertyModifier @ 14dc9c5c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderPropertyModifier(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.OuterSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupOpType @ 14dc9c600

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupOpType(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupOpType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupQueryOpType @ 14dc9c640

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupQueryOpType(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupQueryOpType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphActorQueryEntry @ 14dc9c680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphActorQueryEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphActorQueryEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphActorQueryEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphActorQueryEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphActorQueryEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphActorQueryEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphEvaluationResult @ 14dc9c700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphEvaluationResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphEvaluationResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationResult.InnerSingleton;
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

// EMovieGraphConditionGroupOpType_StaticEnum @ 14dc9c780

UEnum * __cdecl EMovieGraphConditionGroupOpType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupOpType,
                       (UObject *)pUVar1,L"EMovieGraphConditionGroupOpType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphPin_IsPinDirectionCompatibleWith @ 14dc9c7c0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_IsPinDirectionCompatibleWith(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPin_IsPinDirectionCompatibleWith_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphNode_UnpromotePropertyFromPin @ 14dc9c800

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphNode_UnpromotePropertyFromPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphNode_UnpromotePropertyFromPin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_AddModifier @ 14dc9c840

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_AddModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_AddModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphConditionGroupQueryOpType_StaticEnum @ 14dc9c880

UEnum * __cdecl EMovieGraphConditionGroupQueryOpType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupQueryOpType
                       ,(UObject *)pUVar1,L"EMovieGraphConditionGroupQueryOpType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14dc9c8c0

void __cdecl
Z_Construct_UFunction_UMovieGraphPin_IsTypeCompatibleWith_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphPin_IsTypeCompatibleWith @ 14dc9c8d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPin_IsTypeCompatibleWith(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPin_IsTypeCompatibleWith_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsDisabled_SetBit @ 14dc9c910

void __cdecl Z_Construct_UClass_UMovieGraphNode_Statics::NewProp_bIsDisabled_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x98) = *(byte *)((longlong)param_1 + 0x98) | 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_Apply @ 14dc9c920

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_Apply(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_Apply_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_GetCollectionByName @ 14dc9c960

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_GetCollectionByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_GetCollectionByName_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_GetLayerModifiers @ 14dc9c9a0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_GetLayerModifiers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_GetLayerModifiers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_NoRegister @ 14dc9cb60

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQueryBase",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton,
               UMovieGraphConditionGroupQueryBase::
               StaticRegisterNativesUMovieGraphConditionGroupQueryBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQueryBase>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQueryBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroup_NoRegister @ 14dc9cc10

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroup_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroup",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton,
               UMovieGraphConditionGroup::StaticRegisterNativesUMovieGraphConditionGroup,400,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroup>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroup>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroup.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphCollection_NoRegister @ 14dc9ccc0

UClass * __cdecl Z_Construct_UClass_UMovieGraphCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCollection",
               &Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton,
               UMovieGraphCollection::StaticRegisterNativesUMovieGraphCollection,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphCollection>,
               InternalVTableHelperCtorCaller<UMovieGraphCollection>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollection.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphModifierBase_NoRegister @ 14dc9cd70

UClass * __cdecl Z_Construct_UClass_UMovieGraphModifierBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphModifierBase",
               &Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton,
               UMovieGraphModifierBase::StaticRegisterNativesUMovieGraphModifierBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphModifierBase>,
               InternalVTableHelperCtorCaller<UMovieGraphModifierBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphModifierBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister @ 14dc9ce20

UClass * __cdecl Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCollectionModifier",
               &Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton,
               UMovieGraphCollectionModifier::StaticRegisterNativesUMovieGraphCollectionModifier,
               0x38,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphCollectionModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphCollectionModifier>,local_res8,
               UMovieGraphModifierBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCollectionModifier.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphRenderLayer_NoRegister @ 14dc9cee0

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderLayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderLayer",
               &Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton,
               UMovieGraphRenderLayer::StaticRegisterNativesUMovieGraphRenderLayer,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRenderLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderLayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayer.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_NoRegister @ 14dc9cf90

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderLayerSubsystem",
               &Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton,
               UMovieGraphRenderLayerSubsystem::StaticRegisterNativesUMovieGraphRenderLayerSubsystem
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphRenderLayerSubsystem>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderLayerSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderLayerSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphAudioRendererBase @ 14dc9d050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphAudioRendererBase(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphAudioRendererBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphDataSourceBase @ 14dc9d090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphDataSourceBase(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphDataSourceBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphDataSourceBase.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphDataSourceBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphDataSourceBase.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphEngineTimeStep @ 14dc9d0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphEngineTimeStep(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphRendererBase @ 14dc9d110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphRendererBase(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphRendererBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphRendererBase.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphRendererBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphRendererBase.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphTimeStepBase @ 14dc9d150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphTimeStepBase(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphTimeStepBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphTimeStepBase.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphTimeStepBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphTimeStepBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphImagePreviewData @ 14dc9d190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphImagePreviewData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphImagePreviewData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphImagePreviewData.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphImagePreviewData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphImagePreviewData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphImagePreviewData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphInitConfig @ 14dc9d210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphInitConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphInitConfig.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphInitConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphInitConfig.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphInitConfig.InnerSingleton;
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

// NewProp_bMultipleCameraNames_SetBit @ 14dc9d290

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphImagePreviewData_Statics::NewProp_bMultipleCameraNames_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 14dc9d2a0

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphImagePreviewData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphImagePreviewData,&UE::CoreUObject::Private::Construct<FMovieGraphImagePreviewData>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphImagePreviewData>,&UE::CoreUObject::Private::Destruct<FMovieGraphImagePreviewData>,&UE::CoreUObject::Private::Copy<FMovieGraphImagePreviewData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphEvaluationNodeInjector_InjectNodesPostEvaluation @ 14dc9d390

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphEvaluationNodeInjector_InjectNodesPostEvaluation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphEvaluationNodeInjector_InjectNodesPostEvaluation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRenderViewport_SetBit @ 14dc9d410

void __cdecl
Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewProp_bRenderViewport_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14dc9d420

void * __cdecl Z_Construct_UScriptStruct_FMovieGraphInitConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieGraphInitConfig,&UE::CoreUObject::Private::Construct<FMovieGraphInitConfig>,&UE::CoreUObject::Private::ConstructForTests<FMovieGraphInitConfig>,&UE::CoreUObject::Private::Destruct<FMovieGraphInitConfig>,&UE::CoreUObject::Private::Copy<FMovieGraphInitConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_GetModifiers @ 14dc9d460

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_GetModifiers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_GetModifiers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphPipeline @ 14dc9d4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphPipeline(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphPipeline.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphPipeline.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphPipeline_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphPipeline.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_GetRenderLayerName @ 14dc9d4e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_GetRenderLayerName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_GetRenderLayerName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob @ 14dc9d520

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_RemoveLayerModifier @ 14dc9d560

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_RemoveLayerModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_RemoveLayerModifier_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bForShot_SetBit @ 14dc9d5a0

void __cdecl
Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentTraversalContext_Statics::
NewProp_bForShot_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphTimeStepBase_GetCalculatedTimeData @ 14dc9d5b0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphTimeStepBase_GetCalculatedTimeData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphTimeStepBase_GetCalculatedTimeData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentTraversalContext @ 14dc9d5f0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentTraversalContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentTraversalContext_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_RemoveModifier @ 14dc9d630

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_RemoveModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_RemoveModifier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_Revert @ 14dc9d670

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_Revert(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_Revert_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister @ 14dc9d6b0

UClass * __cdecl Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphTimeStepBase",
               &Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton,
               UMovieGraphTimeStepBase::StaticRegisterNativesUMovieGraphTimeStepBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphTimeStepBase>,
               InternalVTableHelperCtorCaller<UMovieGraphTimeStepBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphTimeStepBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphEngineTimeStep_NoRegister @ 14dc9d760

UClass * __cdecl Z_Construct_UClass_UMovieGraphEngineTimeStep_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEngineTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton,
               UMovieGraphEngineTimeStep::StaticRegisterNativesUMovieGraphEngineTimeStep,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphEngineTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphEngineTimeStep>,local_res8,
               UEngineCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.InnerSingleton;
}

// Z_Construct_UFunction_UMovieGraphRenderLayer_SetRenderLayerName @ 14dc9d820

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayer_SetRenderLayerName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayer_SetRenderLayerName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime @ 14dc9d860

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphRendererBase_NoRegister @ 14dc9d8a0

UClass * __cdecl Z_Construct_UClass_UMovieGraphRendererBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRendererBase",
               &Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton,
               UMovieGraphRendererBase::StaticRegisterNativesUMovieGraphRendererBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphRendererBase>,
               InternalVTableHelperCtorCaller<UMovieGraphRendererBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRendererBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister @ 14dc9d950

UClass * __cdecl Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDataSourceBase",
               &Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton,
               UMovieGraphDataSourceBase::StaticRegisterNativesUMovieGraphDataSourceBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphDataSourceBase>,
               InternalVTableHelperCtorCaller<UMovieGraphDataSourceBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDataSourceBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphAudioRendererBase_NoRegister @ 14dc9da00

UClass * __cdecl Z_Construct_UClass_UMovieGraphAudioRendererBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphAudioRendererBase",
               &Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton,
               UMovieGraphAudioRendererBase::StaticRegisterNativesUMovieGraphAudioRendererBase,0x58,
               8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphAudioRendererBase>,
               InternalVTableHelperCtorCaller<UMovieGraphAudioRendererBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphAudioRendererBase.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphPin_NoRegister @ 14dc9dab0

UClass * __cdecl Z_Construct_UClass_UMovieGraphPin_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPin",
               &Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton,
               UMovieGraphPin::StaticRegisterNativesUMovieGraphPin,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphPin>,
               InternalVTableHelperCtorCaller<UMovieGraphPin>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPin.InnerSingleton;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_Evaluate @ 14dc9dc20

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_Evaluate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_Evaluate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTimeOffset @ 14dc9dc60

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTimeOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTimeOffset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPipeline_GetRendererInstance @ 14dc9dda0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_GetRendererInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_GetRendererInstance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieGraphQuickRenderModeSettings @ 14dc9dde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphQuickRenderModeSettings(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.OuterSingleton;
}

// Z_Construct_UClass_UMovieGraphQuickRenderSettings @ 14dc9de20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieGraphQuickRenderSettings(void)

{
  if (Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.OuterSingleton,
               &Z_Construct_UClass_UMovieGraphQuickRenderSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.OuterSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderFrameRangeType @ 14dc9de60

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderFrameRangeType(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderFrameRangeType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderMode @ 14dc9dea0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderMode(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderPostRenderActionType @ 14dc9dee0

UEnum * __cdecl
Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderPostRenderActionType(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderPostRenderActionType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.InnerSingleton;
}

// EMovieGraphQuickRenderButtonMode_StaticEnum @ 14dc9df20

UEnum * __cdecl EMovieGraphQuickRenderButtonMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderButtonMode,
                       (UObject *)pUVar1,L"EMovieGraphQuickRenderButtonMode");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphPipeline_GetTimeStepInstance @ 14dc9df60

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_GetTimeStepInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_GetTimeStepInstance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_EvaluateActorsAndComponents @ 14dc9e050

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_EvaluateActorsAndComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_EvaluateActorsAndComponents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphQuickRenderMode_StaticEnum @ 14dc9e090

UEnum * __cdecl EMovieGraphQuickRenderMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderMode,
                       (UObject *)pUVar1,L"EMovieGraphQuickRenderMode");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphPipeline_Initialize @ 14dc9e0d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_Initialize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphQuickRenderFrameRangeType_StaticEnum @ 14dc9e110

UEnum * __cdecl EMovieGraphQuickRenderFrameRangeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderFrameRangeType
                       ,(UObject *)pUVar1,L"EMovieGraphQuickRenderFrameRangeType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_GetOperationType @ 14dc9e210

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_GetOperationType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_GetOperationType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl @ 14dc9e250

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9e290

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsEditorOnlyQuery_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EMovieGraphQuickRenderPostRenderActionType_StaticEnum @ 14dc9e2a0

UEnum * __cdecl EMovieGraphQuickRenderPostRenderActionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderPostRenderActionType
                       ,(UObject *)pUVar1,L"EMovieGraphQuickRenderPostRenderActionType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.OuterSingleton;
}

// Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime @ 14dc9e3a0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsEditorOnlyQuery @ 14dc9e3e0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsEditorOnlyQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsEditorOnlyQuery_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EMovieGraphQuickRenderViewportLookFlags_StaticEnum @ 14dc9e420

UEnum * __cdecl EMovieGraphQuickRenderViewportLookFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderViewportLookFlags
                       ,(UObject *)pUVar1,L"EMovieGraphQuickRenderViewportLookFlags");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14dc9e460

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14dc9e470

void __cdecl
Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_AddRenderLayer_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsEnabled @ 14dc9e480

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_AddRenderLayer @ 14dc9e4c0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_AddRenderLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_AddRenderLayer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9e500

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsFirstConditionGroupQuery_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_ClearActiveRenderLayer @ 14dc9e510

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_ClearActiveRenderLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_ClearActiveRenderLayer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsFirstConditionGroupQuery @ 14dc9e550

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsFirstConditionGroupQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_IsFirstConditionGroupQuery_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphQuickRenderSettings_GetSavedQuickRenderModeSettings @ 14dc9e590

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphQuickRenderSettings_GetSavedQuickRenderModeSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphQuickRenderSettings_GetSavedQuickRenderModeSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14dc9e5d0

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_SetEnabled_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetActiveRenderLayer @ 14dc9e690

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetActiveRenderLayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetActiveRenderLayer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_SetEnabled @ 14dc9e6d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_SetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_SetEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetFromWorld @ 14dc9e750

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetFromWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetFromWorld_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_SetOperationType @ 14dc9e7d0

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_SetOperationType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_SetOperationType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14dc9e870

void __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_ShouldEvaluateComponents_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetRenderLayers @ 14dc9e950

UFunction * __cdecl Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetRenderLayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphRenderLayerSubsystem_GetRenderLayers_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_ShouldEvaluateComponents @ 14dc9e990

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_ShouldEvaluateComponents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphConditionGroupQueryBase_ShouldEvaluateComponents_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieGraphQuickRenderModeSettings_GetVariableAssignmentsForGraph @ 14dc9e9d0

UFunction * __cdecl
Z_Construct_UFunction_UMovieGraphQuickRenderModeSettings_GetVariableAssignmentsForGraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieGraphQuickRenderModeSettings_GetVariableAssignmentsForGraph_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// <lambda_invoker_cdecl> @ 14dc9ea10

void __cdecl Audio::<lambda_26_>::<lambda_invoker_cdecl>(void)

{
  return;
}

// BinarySearchBy<TArray<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14dc9fb40

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,TSizedDefaultAllocator<32>_>,int,TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TArray<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,TSizedDefaultAllocator<32>_>
           *param_1,int *param_2,FKeyForward param_3,TLess<int_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x1f8) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(int *)(pFVar2 + (longlong)iVar5 * 0x1f8) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// CastChecked<ALevelSequenceActor,AActor> @ 14dc9feb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelSequenceActor * __cdecl CastChecked<ALevelSequenceActor,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ALevelSequenceActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ALevelSequenceActor *)param_1;
  }
  pFVar3 = GetTypeName<ALevelSequenceActor>(&local_28);
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

// CastChecked<UMovieGraphDefaultRenderer,UObject> @ 14dc9ff70

UMovieGraphDefaultRenderer * __cdecl
CastChecked<UMovieGraphDefaultRenderer,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMovieGraphDefaultRenderer>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieGraphDefaultRenderer::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMovieGraphDefaultRenderer *)param_1;
  }
  pFVar3 = GetTypeName<UMovieGraphDefaultRenderer>(&local_28);
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

// CompareItems<TSoftObjectPtr<UActorComponent>,int> @ 14dca0030

bool __cdecl
CompareItems<TSoftObjectPtr<UActorComponent>,int>
          (TSoftObjectPtr<UActorComponent> *param_1,TSoftObjectPtr<UActorComponent> *param_2,
          int param_3)

{
  bool bVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return true;
    }
    bVar1 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
                       (FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
    if (!bVar1) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return false;
}

// ConstructItems<TObjectPtr<UMovieGraphCollection>,UMovieGraphCollection_*,int> @ 14dca00a0

void __cdecl
ConstructItems<TObjectPtr<UMovieGraphCollection>,UMovieGraphCollection_*,int>
          (void *param_1,UMovieGraphCollection **param_2,int param_3)

{
  UMovieGraphCollection *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UMovieGraphCollection **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UMovieGraphCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieGraphNamedResolution,FMovieGraphNamedResolution,int> @ 14dca0100

void __cdecl
ConstructItems<FMovieGraphNamedResolution,FMovieGraphNamedResolution,int>
          (void *param_1,FMovieGraphNamedResolution *param_2,int param_3)

{
  FString *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x10);
    pFVar1 = &param_2->Description;
    do {
      this[-1].Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)
            ((longlong)this + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(TIntPoint<int>_u_0 *)&this[-1].Data.ArrayNum =
           (((FMovieGraphNamedResolution *)(pFVar1 + -1))->Resolution).field0_0x0;
      FString::FString(this,pFVar1);
      pFVar1 = pFVar1 + 2;
      this = this + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateWidget<UMovieGraphBurnInWidget,UWorld_*> @ 14dca02b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMovieGraphBurnInWidget * __cdecl
CreateWidget<UMovieGraphBurnInWidget,UWorld_*>
          (UWorld *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CreateWidget> FVar9;
  TStatId TVar10;
  UClass *pUVar11;
  UUserWidget *pUVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UObjectBaseUtility *pUVar13;
  undefined4 uVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_CreateWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                       L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar9;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  bVar5 = false;
  bVar7 = false;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_14dca0408:
    bVar6 = false;
    LVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidget.h"
                   ,0x728);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dca0408;
    local_res8 = LVar15;
    local_58 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar6 = true;
    uVar14 = local_58._0_4_;
  }
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_CreateWidget");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                    L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar3 == 0) {
LAB_14dca04c1:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14dca04c1;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14dca04c1;
    pUVar13 = *(UObjectBaseUtility **)param_2.Class.field0_0x0;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,pUVar13,TVar10);
  if (param_1 != (UWorld *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (UUserWidget *)0x0) {
      pUVar11 = Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_14dca0533;
    }
  }
  pUVar12 = (UUserWidget *)0x0;
LAB_14dca0533:
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = uVar14;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
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
  return (UMovieGraphBurnInWidget *)pUVar12;
}

// CreateWidget<UMovieGraphRenderPreviewWidget,UWorld_*> @ 14dca0680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMovieGraphRenderPreviewWidget * __cdecl
CreateWidget<UMovieGraphRenderPreviewWidget,UWorld_*>
          (UWorld *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CreateWidget> FVar9;
  TStatId TVar10;
  UClass *pUVar11;
  UUserWidget *pUVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UObjectBaseUtility *pUVar13;
  undefined4 uVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_CreateWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                       L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar9;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  bVar5 = false;
  bVar7 = false;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_14dca07d8:
    bVar6 = false;
    LVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidget.h"
                   ,0x728);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dca07d8;
    local_res8 = LVar15;
    local_58 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar6 = true;
    uVar14 = local_58._0_4_;
  }
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_CreateWidget");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                    L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar3 == 0) {
LAB_14dca0891:
    pUVar13 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14dca0891;
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14dca0891;
    pUVar13 = *(UObjectBaseUtility **)param_2.Class.field0_0x0;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,pUVar13,TVar10);
  if (param_1 != (UWorld *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = UUserWidget::CreateWidgetInstance
                        (param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
    if (pUVar12 != (UUserWidget *)0x0) {
      pUVar11 = Z_Construct_UClass_UMovieGraphRenderPreviewWidget_NoRegister();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) goto LAB_14dca0903;
    }
  }
  pUVar12 = (UUserWidget *)0x0;
LAB_14dca0903:
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = uVar14;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
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
  return (UMovieGraphRenderPreviewWidget *)pUVar12;
}

// DefaultConstructItems<UMovieGraphRenderPropertyModifier::FActorState,int> @ 14dca0eb0

void __cdecl
DefaultConstructItems<UMovieGraphRenderPropertyModifier::FActorState,int>(void *param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_res18;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0x14;
    local_res18 = 0;
    do {
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + -0x14) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      FUtf8String::Reset((FUtf8String *)(lVar1 + 4),0);
      FSoftObjectPtr::operator=((FSoftObjectPtr *)(lVar1 + -0x14),(FObjectPtr)&local_res18);
      *(byte *)(lVar1 + 0x14) = *(byte *)(lVar1 + 0x14) & 0xfe;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<MoviePipeline::FAudioState::FAudioSegment,int> @ 14dca0f50

void __cdecl
DefaultConstructItems<MoviePipeline::FAudioState::FAudioSegment,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  FGuid *pFVar2;
  undefined8 *puVar3;
  FGuid local_18;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar3[-1] = 0;
      *puVar3 = 0;
      FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(puVar3 + 1));
      puVar3[0x26] = 0;
      puVar3[0x27] = 0;
      pFVar2 = FGuid::NewGuid(&local_18);
      uVar1 = *(undefined8 *)&pFVar2->C;
      puVar3[-1] = *(undefined8 *)pFVar2;
      *puVar3 = uVar1;
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 0x29;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UMovieGraphRenderPropertyModifier::FComponentState,int> @ 14dca0fd0

void __cdecl
DefaultConstructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_res18;
  
  if (param_2 != 0) {
    local_res18 = 0;
    lVar1 = (longlong)param_1 + 0x14;
    do {
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + -0x14) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      FUtf8String::Reset((FUtf8String *)(lVar1 + 4),0);
      FSoftObjectPtr::operator=((FSoftObjectPtr *)(lVar1 + -0x14),(FObjectPtr)&local_res18);
      *(byte *)(lVar1 + 0x14) = *(byte *)(lVar1 + 0x14) & 0xe1 | 1;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x30;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UMovieGraphAudioOutputNode::FFinalAudioData,int> @ 14dca1080

void __cdecl
DefaultConstructItems<UMovieGraphAudioOutputNode::FFinalAudioData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      *(undefined8 *)(lVar1 + 0x74) = 0;
      lVar1 = lVar1 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieGraphImagePreviewData,int> @ 14dca10f0

void __cdecl DefaultConstructItems<FMovieGraphImagePreviewData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined1 *)(lVar1 + 0x44) = 0;
      lVar1 = lVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`UMovieGraphDefaultRenderer::SetupRenderingPipelineForShot'::__l2::FMovieGraphPass,int> @ 14dca1140

void __cdecl
DefaultConstructItems<_UMovieGraphDefaultRenderer::SetupRenderingPipelineForShot_::__l2::FMovieGraphPass,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80;
      *(undefined4 *)(puVar1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieGraphRenderPassLayerData,int> @ 14dca1190

void __cdecl DefaultConstructItems<FMovieGraphRenderPassLayerData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x2c) = 1;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UWorld>,int> @ 14dca1220

void __cdecl DestructItems<TSoftObjectPtr<UWorld>,int>(TSoftObjectPtr<UWorld> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,int> @ 14dca1260

void __cdecl
DestructItems<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,int>
          (TTuple<int,TSoftObjectPtr<UMaterialInterface>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x20;
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

// DestructItems<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,int> @ 14dca12a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
DestructItems<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,int>
          (TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::MovieGraph::FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame
              ((FMovieGraphOutputMergerFrame *)&param_1->field_0x8);
    param_1 = (TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame> *)
              (&param_1->field_0x8 + 0x1f0);
  }
  return;
}

// DestructItems<TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>,int> @ 14dca12e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
DestructItems<TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>,int>
          (TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      UE::MovieGraph::FMovieGraphOutputFutureData::~FMovieGraphOutputFutureData
                ((FMovieGraphOutputFutureData *)(puVar1 + 1));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FString,float>,int> @ 14dca1330

void __cdecl DestructItems<TTuple<FString,float>,int>(TTuple<FString,float> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UMovieGraphRenderPropertyModifier::FActorState,int> @ 14dca1370

void __cdecl
DestructItems<UMovieGraphRenderPropertyModifier::FActorState,int>(FActorState *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Actor).SoftObjectPtr.field_0x18;
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

// DestructItems<MoviePipeline::FAudioState::FAudioSegment,int> @ 14dca13b0

void __cdecl
DestructItems<MoviePipeline::FAudioState::FAudioSegment,int>(FAudioSegment *param_1,int param_2)

{
  FMoviePipelineFrameOutputState *this;
  
  if (param_2 != 0) {
    this = &param_1->OutputState;
    do {
      if (*(void **)&this[1].ShotCount != (void *)0x0) {
        FMemory::Free(*(void **)&this[1].ShotCount);
      }
      FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(this);
      this = (FMoviePipelineFrameOutputState *)&this[1].TimeData.FrameDeltaTime;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UMovieGraphRenderPropertyModifier::FComponentState,int> @ 14dca1400

void __cdecl
DestructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>
          (FComponentState *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Component).SoftObjectPtr.field_0x18;
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

// DestructItems<UMovieGraphAudioOutputNode::FFinalAudioData,int> @ 14dca1440

void __cdecl
DestructItems<UMovieGraphAudioOutputNode::FFinalAudioData,int>(FFinalAudioData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->RenderIdentifier).SubResourceName;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-2].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pFVar2 + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -6) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -7) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -7) + 8));
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieGraphActorQueryEntry,int> @ 14dca14d0

void __cdecl
DestructItems<FMovieGraphActorQueryEntry,int>(FMovieGraphActorQueryEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ComponentsToMatch;
    do {
      DestructItems<TSoftObjectPtr<UActorComponent>,int>
                ((TSoftObjectPtr<UActorComponent> *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)(pTVar2 + -1) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -1));
      }
      pTVar2 = (TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MovieGraph::Private::FMovieGraphCVarManager::FMovieGraphCVarOverride,int> @ 14dca1530

void __cdecl
DestructItems<UE::MovieGraph::Private::FMovieGraphCVarManager::FMovieGraphCVarOverride,int>
          (FMovieGraphCVarOverride *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FMovieGraphImagePreviewData,int> @ 14dca1570

void __cdecl
DestructItems<FMovieGraphImagePreviewData,int>(FMovieGraphImagePreviewData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->Identifier).SubResourceName;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-2].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieGraphNamedResolution,int> @ 14dca15e0

void __cdecl
DestructItems<FMovieGraphNamedResolution,int>(FMovieGraphNamedResolution *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Description;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UMovieGraphDefaultRenderer::SetupRenderingPipelineForShot'::__l2::FMovieGraphPass,int> @ 14dca1620

void __cdecl
DestructItems<_UMovieGraphDefaultRenderer::SetupRenderingPipelineForShot_::__l2::FMovieGraphPass,int>
          (FMovieGraphPass *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->BranchRenderers).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieGraphRenderDataIdentifier,int> @ 14dca1680

void __cdecl
DestructItems<FMovieGraphRenderDataIdentifier,int>
          (FMovieGraphRenderDataIdentifier *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SubResourceName;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-2].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieGraphRenderPassLayerData,int> @ 14dca16f0

void __cdecl
DestructItems<FMovieGraphRenderPassLayerData,int>
          (FMovieGraphRenderPassLayerData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->LayerName;
    do {
      pFVar1 = (((FString *)((longlong)(pFVar2 + 1) + 8))->Data).AllocatorInstance.Data;
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

// DestructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int> @ 14dca1740

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,int>
          (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int> @ 14dca1780

void __cdecl
DestructItems<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int>
          (TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>
           *param_1,int param_2)

{
  FSoundWavePCMWriter *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FSoundWavePCMWriter *)0x0) {
      Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(this);
      operator_delete(this,0x78);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int> @ 14dca17e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>
          (TWeakPtr<Audio::FMixerSubmix,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::TSTR_VirtualTextureSystemFlushCommand437>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14dca43e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems_::__l18::TSTR_VirtualTextureSystemFlushCommand437>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::TSTR_VirtualTextureSystemFlushCommand437>
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
    goto LAB_14dca4808;
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
LAB_14dca46f2:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dca46f2;
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
LAB_14dca4808:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,1,1,`AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14dca5040

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
ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
    if (bVar12) goto LAB_14dca5163;
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
LAB_14dca5163:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14dca51fd;
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
LAB_14dca51fd:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14dca5300;
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
LAB_14dca5300:
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
        ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
      `AActor::
      GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar8);
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

// ForEachComponent_Internal<UActorComponent,1,1,`AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14dca5570

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
ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
    if (bVar12) goto LAB_14dca5693;
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
LAB_14dca5693:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14dca572d;
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
LAB_14dca572d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14dca5830;
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
LAB_14dca5830:
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
        ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
      `AActor::
      GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar8);
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

// ForEachComponent_Internal<UActorComponent,1,0,`AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14dca5aa0

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
ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
    if (bVar6) goto LAB_14dca5ba6;
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
LAB_14dca5ba6:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14dca5c2d;
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
LAB_14dca5c2d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14dca5d31;
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
LAB_14dca5d31:
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
      `AActor::
      GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UActorComponent,0,1,`AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14dca5db0

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
ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
    if (bVar13) goto LAB_14dca5ea3;
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
LAB_14dca5ea3:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14dca5f50;
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
LAB_14dca5f50:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14dca6060;
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
LAB_14dca6060:
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
        ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
        `AActor::
        GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
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

// ForEachComponent_Internal<UActorComponent,0,1,`AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14dca62f0

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
ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
    if (bVar13) goto LAB_14dca63e3;
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
LAB_14dca63e3:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14dca6490;
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
LAB_14dca6490:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14dca65a0;
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
LAB_14dca65a0:
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
        ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
        `AActor::
        GetComponents<UActorComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar8);
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

// ForEachComponent_Internal<UActorComponent,0,0,`AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14dca6830

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
ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
    if (bVar9) goto LAB_14dca690e;
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
LAB_14dca690e:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14dca699f;
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
LAB_14dca699f:
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
      goto LAB_14dca6ab0;
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
LAB_14dca6ab0:
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
        `AActor::
        GetComponents<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTypeName<UMovieGraphDefaultRenderer> @ 14dca8060

FString * __cdecl GetTypeName<UMovieGraphDefaultRenderer>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieGraphDefaultRenderer::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UMovieGraphApplyCVarPresetNode> @ 14dca80a0

void __cdecl InternalConstructor<UMovieGraphApplyCVarPresetNode>(FObjectInitializer *param_1)

{
  UMovieGraphNode *this;
  
  this = (UMovieGraphNode *)param_1->Obj;
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this);
    this->_padding_ = (longlong)&___7UMovieGraphApplyCVarPresetNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphApplyViewportLookNode> @ 14dca80e0

void __cdecl InternalConstructor<UMovieGraphApplyViewportLookNode>(FObjectInitializer *param_1)

{
  UMovieGraphNode *this;
  
  this = (UMovieGraphNode *)param_1->Obj;
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this);
    this->_padding_ = (longlong)&___7UMovieGraphApplyViewportLookNode__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphAudioOutputNode> @ 14dca8110

void __cdecl InternalConstructor<UMovieGraphAudioOutputNode>(FObjectInitializer *param_1)

{
  UMovieGraphNode *this;
  
  this = (UMovieGraphNode *)param_1->Obj;
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this);
    this->_padding_ = (longlong)&___7UMovieGraphFileOutputNode__6B_;
    FString::FString((FString *)&this[1]._padding_,"{sequence_name}.{layer_name}.{frame_number}");
    this->_padding_ = (longlong)&___7UMovieGraphAudioOutputNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FString::operator=((FString *)&this[1]._padding_,L"{sequence_name}");
  }
  return;
}

// InternalConstructor<UMovieGraphAudioRendererBase> @ 14dca8190

void __cdecl InternalConstructor<UMovieGraphAudioRendererBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphAudioRendererBase__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined1 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x4 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x8 = 1;
  }
  return;
}

// InternalConstructor<UMovieGraphBranchNode> @ 14dca81f0

void __cdecl InternalConstructor<UMovieGraphBranchNode>(FObjectInitializer *param_1)

{
  UMovieGraphNode *this;
  
  this = (UMovieGraphNode *)param_1->Obj;
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this);
    this->_padding_ = (longlong)&___7UMovieGraphBranchNode__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphBurnInNode> @ 14dca8220

void __cdecl InternalConstructor<UMovieGraphBurnInNode>(FObjectInitializer *param_1)

{
  UMovieGraphWidgetRendererBaseNode *this;
  TStringView<wchar_t> TStack_18;
  
  this = (UMovieGraphWidgetRendererBaseNode *)param_1->Obj;
  if (this == (UMovieGraphWidgetRendererBaseNode *)0x0) {
    return;
  }
  UMovieGraphWidgetRendererBaseNode::UMovieGraphWidgetRendererBaseNode(this);
  this->_padding_ = (longlong)&___7UMovieGraphBurnInNode__6B_;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  TStack_18.Size = UMovieGraphBurnInNode::DefaultBurnInWidgetAsset.Data.ArrayNum + -1;
  if (UMovieGraphBurnInNode::DefaultBurnInWidgetAsset.Data.ArrayNum == 0) {
    TStack_18.Size = 0;
  }
  TStack_18.DataPtr =
       (wchar_t *)UMovieGraphBurnInNode::DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this[1]._padding_,&TStack_18);
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined4 *)&this[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
  this[1]._padding_ = 0;
  *(undefined4 *)&this[1]._padding_ = 0;
  FString::operator=((FString *)&this->_padding_,&UMovieGraphBurnInNode::RendererName);
  FString::operator=((FString *)&this->_padding_,L"burnin");
  return;
}

// InternalConstructor<UMovieGraphCollection> @ 14dca8240

void __cdecl InternalConstructor<UMovieGraphCollection>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMovieGraphCollection__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphCollectionModifier> @ 14dca8280

void __cdecl InternalConstructor<UMovieGraphCollectionModifier>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphCollectionModifier__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroup> @ 14dca82c0

void __cdecl InternalConstructor<UMovieGraphConditionGroup>(FObjectInitializer *param_1)

{
  UObject *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMovieGraphConditionGroup__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    this[1].field_0x10 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x4 = 0x80;
    *(undefined4 *)&this[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[3].field_0xc = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x4 = 0x80;
    *(undefined4 *)&this[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[5].field_0xc = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined4 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined4 *)(this + 7) = 0;
    *(undefined4 *)&this[7].field_0x4 = 0x80;
    *(undefined4 *)&this[7].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[7].field_0xc = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined4 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    *(undefined4 *)(this + 9) = 0;
    *(undefined4 *)&this[9].field_0x4 = 0x80;
    *(undefined4 *)&this[9].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[9].field_0xc = 0;
    *(undefined8 *)&this[9].field_0x18 = 0;
    *(undefined4 *)&this[9].field_0x20 = 0;
    if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
      pFVar4 = FGuid::NewGuid(&local_18);
      uVar1 = pFVar4->B;
      uVar2 = pFVar4->C;
      uVar3 = pFVar4->D;
      *(uint *)&this[1].field_0x0 = pFVar4->A;
      *(uint *)&this[1].field_0x4 = uVar1;
      *(uint *)&this[1].field_0x8 = uVar2;
      *(uint *)&this[1].field_0xc = uVar3;
      return;
    }
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQueryBase> @ 14dca8430

void __cdecl InternalConstructor<UMovieGraphConditionGroupQueryBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQueryBase__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_Actor> @ 14dca8470

void __cdecl InternalConstructor<UMovieGraphConditionGroupQuery_Actor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_Actor__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_ActorLayer> @ 14dca84c0

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_ActorLayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_ActorLayer__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_ActorName> @ 14dca8500

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_ActorName>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_ActorName__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_ActorTagName> @ 14dca8540

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_ActorTagName>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_ActorTagName__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_ActorType> @ 14dca8580

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_ActorType>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_ActorType__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_ComponentTagName> @ 14dca85d0

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_ComponentTagName>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_ComponentTagName__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 1;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_ComponentType> @ 14dca8610

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_ComponentType>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_ComponentType__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined1 *)(this + 2) = 1;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_DataLayer> @ 14dca8660

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_DataLayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_DataLayer__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_EditorFolder> @ 14dca86a0

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_EditorFolder>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_EditorFolder__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_IsSpawnable> @ 14dca86e0

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_IsSpawnable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_IsSpawnable__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphConditionGroupQuery_Sublevel> @ 14dca8720

void __cdecl
InternalConstructor<UMovieGraphConditionGroupQuery_Sublevel>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UMovieGraphConditionGroupQuery_Sublevel__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphDataSourceBase> @ 14dca8760

void __cdecl InternalConstructor<UMovieGraphDataSourceBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphDataSourceBase__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphDefaultAudioRenderer> @ 14dca8790

void __cdecl InternalConstructor<UMovieGraphDefaultAudioRenderer>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined ***)this = &___7UMovieGraphDefaultAudioRenderer__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x8 = 1;
  }
  return;
}

// InternalConstructor<UMovieGraphDefaultRenderer> @ 14dca87f0

void __cdecl InternalConstructor<UMovieGraphDefaultRenderer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphDefaultRenderer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    this[1].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x1c = 0x80;
    *(undefined4 *)&this[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x24 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined4 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x1c = 0x80;
    *(undefined4 *)&this[6].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[6].field_0x24 = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined4 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)&this[8].field_0x10 = 0;
    *(undefined4 *)&this[8].field_0x18 = 0;
    *(undefined4 *)&this[8].field_0x1c = 0x80;
    *(undefined4 *)&this[8].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[8].field_0x24 = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined4 *)&this[9].field_0x10 = 0;
    *(undefined8 *)&this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined4 *)&this[10].field_0x18 = 0;
    *(undefined4 *)&this[10].field_0x1c = 0x80;
    *(undefined4 *)&this[10].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[10].field_0x24 = 0;
    *(undefined8 *)&this[0xb].field_0x8 = 0;
    *(undefined4 *)&this[0xb].field_0x10 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[0xb].field_0x18,4000);
    *(undefined8 *)&this[0xc].field_0x18 = 0;
    *(undefined8 *)&this[0xc].field_0x20 = 0;
    *(undefined8 *)(this + 0xd) = 0;
    *(undefined8 *)&this[0xd].field_0x8 = 0;
    *(undefined8 *)&this[0xd].field_0x20 = 0;
    *(undefined4 *)(this + 0xe) = 0;
    *(undefined4 *)&this[0xe].field_0x4 = 0x80;
    *(undefined4 *)&this[0xe].field_0xc = 0;
    *(undefined4 *)&this[0xe].field_0x8 = 0xffffffff;
    *(undefined8 *)&this[0xe].field_0x18 = 0;
    *(undefined4 *)&this[0xe].field_0x20 = 0;
    *(undefined1 *)(this + 0xf) = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphEdge> @ 14dca89e0

void __cdecl InternalConstructor<UMovieGraphEdge>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphEdge__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphEngineTimeStep> @ 14dca8a20

void __cdecl InternalConstructor<UMovieGraphEngineTimeStep>(FObjectInitializer *param_1)

{
  UEngineCustomTimeStep *this;
  FObjectInitializer *pFVar1;
  
  this = (UEngineCustomTimeStep *)param_1->Obj;
  if (this == (UEngineCustomTimeStep *)0x0) {
    return;
  }
  pFVar1 = FObjectInitializer::Get();
  UEngineCustomTimeStep::UEngineCustomTimeStep(this,pFVar1);
  *(undefined ***)this = &___7UMovieGraphEngineTimeStep__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x14 = 0;
  return;
}

// InternalConstructor<UMovieGraphEvaluationNodeInjector> @ 14dca8a40

void __cdecl InternalConstructor<UMovieGraphEvaluationNodeInjector>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieGraphEvaluationNodeInjector__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphLinearTimeStep> @ 14dca8a70

void __cdecl InternalConstructor<UMovieGraphLinearTimeStep>(FObjectInitializer *param_1)

{
  UMovieGraphCoreTimeStep *this;
  
  this = (UMovieGraphCoreTimeStep *)param_1->Obj;
  if (this != (UMovieGraphCoreTimeStep *)0x0) {
    UMovieGraphCoreTimeStep::UMovieGraphCoreTimeStep(this);
    this->_padding_ = (longlong)&___7UMovieGraphLinearTimeStep__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphMaterialModifier> @ 14dca8aa0

void __cdecl InternalConstructor<UMovieGraphMaterialModifier>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMovieGraphMaterialModifier__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)&this[4].field_0x8,0);
    return;
  }
  return;
}

// InternalConstructor<UMovieGraphModifierBase> @ 14dca8b30

void __cdecl InternalConstructor<UMovieGraphModifierBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphModifierBase__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphNode> @ 14dca8b60

void __cdecl InternalConstructor<UMovieGraphNode>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UMovieGraphNode__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined8 *)&this[1].field_0x18 = 2;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  *(undefined8 *)&this[2].field_0x20 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)(this + 3));
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x24 = 0;
  *(undefined8 *)&this[4].field_0x4 = 0;
  return;
}

// InternalConstructor<UMovieGraphOutputBurnInNode> @ 14dca8b80

void __cdecl InternalConstructor<UMovieGraphOutputBurnInNode>(FObjectInitializer *param_1)

{
  UMovieGraphBurnInNode *this;
  
  this = (UMovieGraphBurnInNode *)param_1->Obj;
  if (this != (UMovieGraphBurnInNode *)0x0) {
    UMovieGraphBurnInNode::UMovieGraphBurnInNode(this);
    this->_padding_ = (longlong)&___7UMovieGraphOutputBurnInNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FString::FString((FString *)&this[1]._padding_,"{sequence_name}.{layer_name}.{frame_number}");
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphPin> @ 14dca8c10

void __cdecl InternalConstructor<UMovieGraphPin>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphPin__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x10 = 5;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0x1000001;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphPipeline> @ 14dca8c70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieGraphPipeline>(FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  UMoviePipelineBase *this;
  FName FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FObjectInitializer *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  IModuleInterface *pIVar11;
  longlong lVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  TReferenceControllerBase<1> *pTVar15;
  UMoviePipelineBase *pUStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  TReferenceControllerBase<1> *pTStack_38;
  FSharedReferencer<1> FStack_30;
  
  this = (UMoviePipelineBase *)param_1->Obj;
  if (this == (UMoviePipelineBase *)0x0) {
    return;
  }
  pFVar7 = FObjectInitializer::Get();
  UMoviePipelineBase::UMoviePipelineBase(this,pFVar7);
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UMovieGraphPipeline__6B_;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate = 0;
  *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
  *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
  *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate = 0;
  *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate.field_0x8 = 0;
  *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate.field_0x10 = 0;
  *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegateNative = 0;
  *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegateNative.field_0x18 = 0;
  *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative = 0;
  *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x4 = 0x80;
  *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x8 = 0xffffffff;
  *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0xc = 0;
  *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
  *(undefined4 *)&this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate = 0;
  *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
  *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
  *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegate = 0;
  *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative = 0;
  *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x8 = 0;
  *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0xc = 0x80;
  *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x10 = 0xffffffff;
  *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x14 = 0;
  *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative = 0;
  *(undefined4 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x8 = 0;
  *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
  *(undefined4 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x10 = 0xffffffff;
  *(undefined2 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x14 = 0;
  *(undefined4 *)&this[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate = 0;
  *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
  *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
  *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate = 0;
  *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate.field_0x8 = 0;
  *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate.field_0x10 = 0;
  *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative = 0;
  *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x8 = 0;
  *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x10 = 0;
  *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x18 = 0;
  *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x10 = 0;
  *(undefined1 *)&this[3]._padding_ = 0;
  *(undefined4 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
  *(undefined4 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x1c = 0x80;
  *(undefined4 *)&this[4]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
  this[4]._padding_ = 0;
  *(undefined4 *)&this[4]._padding_ = 0;
  *(undefined1 *)&this[4]._padding_ = 0;
  pTVar8 = operator_new(0x90);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMovieGraphOutputMerger_MovieGraph_UE___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FMovieGraphOutputMerger_MovieGraph_UE__6B_;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar9 = operator_new(0x1f8);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      memset(pTVar9,0,0x1f8);
      pTVar9->_padding_ = 0;
      UE::MovieGraph::FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame
                ((FMovieGraphOutputMergerFrame *)&pTVar9->SharedReferenceCount);
      pTVar15 = pTVar9;
    }
    *(TReferenceControllerBase<1> **)&pTVar8[3].SharedReferenceCount = pTVar15;
    pTVar8[3]._padding_ = (longlong)pTVar15;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pTVar8[4]._padding_ = 0;
    pUStackX_8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar8 + 4),(FObjectPtr)&pUStackX_8);
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar8[5].SharedReferenceCount,4000);
    FModuleManager::Get();
    pFVar10 = FName::FName(&FStackX_10,"ImageWriteQueue");
    FVar3 = *pFVar10;
    this_00 = FModuleManager::Get();
    pIVar11 = FModuleManager::LoadModuleChecked(this_00,FVar3);
    lVar12 = (**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
    pTVar9 = pTVar8 + 1;
    pTVar8[8]._padding_ = lVar12;
    pTVar15 = pTVar8;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14dcb086e;
    }
  }
  lVar12._0_4_ = pTVar9->SharedReferenceCount;
  lVar12._4_4_ = pTVar9->WeakReferenceCount;
  if (((lVar12 == 0) || (pTVar9[1]._padding_ == 0)) || (*(int *)(pTVar9[1]._padding_ + 8) < 1)) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar9;
    if (pTVar15 != (TReferenceControllerBase<1> *)pTVar9[1]._padding_) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar9[1]._padding_;
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
      pTVar9[1]._padding_ = (longlong)pTVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
LAB_14dcb086e:
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTStack_38 = pTVar9;
  FStack_30.ReferenceController = pTVar15;
  if ((TReferenceControllerBase<1> **)&this[3]._padding_ != &pTStack_38) {
    this[3]._padding_ = (longlong)pTVar9;
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this[3]._padding_,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  pFVar10 = FName::FName(&FStackX_18,"MovieGraphEngineTimeStep");
  FVar3 = *pFVar10;
  pUVar13 = UMovieGraphEngineTimeStep::StaticClass();
  pUVar14 = UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar13,pUVar13,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  *(UObject **)&this[3].OnMoviePipelineWorkFinishedDelegateNative = pUVar14;
  return;
}

// InternalConstructor<UMovieGraphPostRenderNode> @ 14dca8c90

void __cdecl InternalConstructor<UMovieGraphPostRenderNode>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UMovieGraphPostRenderNode__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphProjectSettings> @ 14dca8cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UMovieGraphProjectSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *pUVar1;
  int *piVar2;
  int iVar3;
  UDeveloperSettings *this;
  ForAnyElementType FVar4;
  FObjectInitializer *pFVar5;
  undefined1 auStackY_158 [32];
  FName FStack_118;
  FName FStack_110;
  FName FStack_108;
  FName FStack_100;
  FString FStack_f8;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FMovieGraphNamedResolution FStack_b8;
  FName FStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ForAnyElementType FStack_88;
  int iStack_7c;
  FName FStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ForAnyElementType FStack_68;
  int iStack_5c;
  FName FStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ForAnyElementType FStack_48;
  int iStack_3c;
  ulonglong uStack_38;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this == (UDeveloperSettings *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar5 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings(this,pFVar5);
  pUVar1 = this + 1;
  this->_padding_ = (longlong)&___7UMovieGraphProjectSettings__6B_;
  piVar2 = (int *)((longlong)&this[1]._padding_ + 4);
  pUVar1->_padding_ = 0;
  *(undefined4 *)&this[1]._padding_ = 0;
  *piVar2 = 0;
  FName::FName(&FStack_118,"720p (HD)");
  FString::FString(&FStack_c8,"High definition");
  FVar4.Data = FStack_c8.Data.AllocatorInstance.Data;
  FStack_b8.ProfileName = FStack_118;
  FStack_b8.Resolution.field0_0x0._s_0.X = 0x500;
  FStack_b8.Resolution.field0_0x0._s_0.Y = 0x2d0;
  FStack_b8.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FStack_c8.Data.ArrayNum == 0) {
    FStack_b8.Description.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_c8.Data.ArrayNum,0,(ForAnyElementType *)&FStack_b8.Description,
               FStack_c8.Data.ArrayNum,&FStack_b8.Description.Data.ArrayMax);
    memcpy(FStack_b8.Description.Data.AllocatorInstance.Data,FVar4.Data,
           (longlong)FStack_c8.Data.ArrayNum * 2);
  }
  FName::FName(&FStack_110,"1080p (FHD)");
  FString::FString(&FStack_d8,"Full high definition");
  FVar4.Data = FStack_d8.Data.AllocatorInstance.Data;
  FStack_98 = FStack_110;
  uStack_90 = 0x780;
  uStack_8c = 0x438;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  if (FStack_d8.Data.ArrayNum == 0) {
    iStack_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_d8.Data.ArrayNum,0,&FStack_88,FStack_d8.Data.ArrayNum,&iStack_7c);
    memcpy(FStack_88.Data,FVar4.Data,(longlong)FStack_d8.Data.ArrayNum * 2);
  }
  FName::FName(&FStack_108,"1440p (QHD)");
  FString::FString(&FStack_e8,"Quad high definition");
  FVar4.Data = FStack_e8.Data.AllocatorInstance.Data;
  FStack_78 = FStack_108;
  uStack_70 = 0xa00;
  uStack_6c = 0x5a0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  if (FStack_e8.Data.ArrayNum == 0) {
    iStack_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_e8.Data.ArrayNum,0,&FStack_68,FStack_e8.Data.ArrayNum,&iStack_5c);
    memcpy(FStack_68.Data,FVar4.Data,(longlong)FStack_e8.Data.ArrayNum * 2);
  }
  FName::FName(&FStack_100,"2160p (4K UHD)");
  FString::FString(&FStack_f8,"Ultra high definition (4k)");
  FVar4.Data = FStack_f8.Data.AllocatorInstance.Data;
  FStack_58 = FStack_100;
  uStack_50 = 0xf00;
  uStack_4c = 0x870;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  if (FStack_f8.Data.ArrayNum == 0) {
    iStack_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_f8.Data.ArrayNum,0,&FStack_48,FStack_f8.Data.ArrayNum,&iStack_3c);
    memcpy(FStack_48.Data,FVar4.Data,(longlong)FStack_f8.Data.ArrayNum * 2);
  }
  DestructItems<FMovieGraphNamedResolution,int>
            ((FMovieGraphNamedResolution *)pUVar1->_padding_,(int)this[1]._padding_);
  iVar3 = *piVar2;
  *(undefined4 *)&this[1]._padding_ = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,4,iVar3,(ForAnyElementType *)pUVar1,4,piVar2);
  ConstructItems<FMovieGraphNamedResolution,FMovieGraphNamedResolution,int>
            ((FScriptContainerElement *)pUVar1->_padding_,&FStack_b8,4);
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  if (FStack_b8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Description.Data.AllocatorInstance.Data);
  }
  if (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
  }
  if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
  }
  if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
  }
  if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// InternalConstructor<UMovieGraphQuickRenderModeSettings> @ 14dca8ce0

void __cdecl InternalConstructor<UMovieGraphQuickRenderModeSettings>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UObject *this;
  ForAnyElementType _Src;
  size_t _Size;
  undefined8 local_res8;
  TStringView<wchar_t> local_48;
  FSoftObjectPath local_38;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    local_48.Size = 0x44;
    local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_38.AssetPath.PackageName.Number = 0;
    *(undefined ***)this = &___7UMovieGraphQuickRenderModeSettings__6B_;
    local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_38.AssetPath.AssetName.Number = 0;
    local_48.DataPtr = L"/MovieRenderPipeline/DefaultQuickRenderGraph.DefaultQuickRenderGraph";
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.SubPathString.Data.ArrayNum = 0;
    local_38.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_38,&local_48);
    _Src.Data = local_38.SubPathString.Data.AllocatorInstance.Data;
    _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
    puVar1 = &this[1].field_0x18;
    *(undefined8 *)(this + 1) = 0;
    *(uint *)&this[1].field_0x8 = local_38.AssetPath.PackageName.ComparisonIndex.Value;
    *(uint *)&this[1].field_0xc = local_38.AssetPath.PackageName.Number;
    *(uint *)&this[1].field_0x10 = local_38.AssetPath.AssetName.ComparisonIndex.Value;
    *(uint *)&this[1].field_0x14 = local_38.AssetPath.AssetName.Number;
    *(undefined8 *)puVar1 = 0;
    *(int *)&this[1].field_0x20 = local_38.SubPathString.Data.ArrayNum;
    if (local_38.SubPathString.Data.ArrayNum == 0) {
      *(undefined4 *)&this[1].field_0x24 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)puVar1,
                 local_38.SubPathString.Data.ArrayNum,(int *)&this[1].field_0x24);
      memcpy(*(void **)puVar1,_Src.Data,_Size);
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[2].field_0x18,0);
    local_res8 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)(this + 2),(FObjectPtr)&local_res8);
    *(undefined4 *)&this[3].field_0x4 = 0;
    this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0xc = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined2 *)(this + 3) = 1;
  }
  return;
}

// InternalConstructor<UMovieGraphQuickRenderSettings> @ 14dca8e50

void __cdecl InternalConstructor<UMovieGraphQuickRenderSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMovieGraphQuickRenderSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphRenderLayer> @ 14dca8eb0

void __cdecl InternalConstructor<UMovieGraphRenderLayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMovieGraphRenderLayer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphRenderLayerSubsystem> @ 14dca8ef0

void __cdecl InternalConstructor<UMovieGraphRenderLayerSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UMovieGraphRenderLayerSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphRenderPropertyModifier> @ 14dca8f30

void __cdecl InternalConstructor<UMovieGraphRenderPropertyModifier>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    this[2].field_0x8 = this[2].field_0x8 & 0x3f;
    this[2].field_0x8 = this[2].field_0x8 | 0x80;
    this[2].field_0x9 = this[2].field_0x9 & 0xf0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UMovieGraphRenderPropertyModifier__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UMovieGraphRendererBase> @ 14dca8f90

void __cdecl InternalConstructor<UMovieGraphRendererBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphRendererBase__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphSequenceDataSource> @ 14dca8fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl InternalConstructor<UMovieGraphSequenceDataSource>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UObject *this;
  code *pcVar2;
  bool bVar3;
  FObjectInitializer *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar4 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar4);
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    *(undefined ***)this = &___7UMovieGraphSequenceDataSource__6B_;
    puVar1 = &this[1].field_0x8;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    FStack_20.ReferenceController = operator_new(0x48);
    if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6 = FStack_20.ReferenceController + 1;
      (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_20.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMovieGraphSequenceTimeController_MovieGraph_UE___00_SharedPointerInternals__6B_
      ;
      FStack_20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[2]._padding_ = 0;
      *(undefined2 *)&FStack_20.ReferenceController[2].SharedReferenceCount.field_0x1 = 0;
      FStack_20.ReferenceController[2].SharedReferenceCount.field_0x3 = 0;
      FStack_20.ReferenceController[3]._padding_ = 1;
      *(undefined1 *)&FStack_20.ReferenceController[2].SharedReferenceCount = 0;
      FStack_20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
      FStack_20.ReferenceController[1]._padding_ =
           (longlong)&___7FMovieGraphSequenceTimeController_MovieGraph_UE__6B_;
      FStack_20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      FStack_20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&FStack_20.ReferenceController[4]._padding_ = 0x18;
      *(undefined4 *)((longlong)&FStack_20.ReferenceController[4]._padding_ + 4) = 1;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      (FStack_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar5 = FStack_20.ReferenceController;
      local_28 = pTVar6;
    }
    if ((TReferenceControllerBase<1> **)puVar1 != &local_28) {
      *(TReferenceControllerBase<1> **)puVar1 = pTVar6;
      local_28 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this[1].field_0x10,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// InternalConstructor<UMovieGraphSettingNode> @ 14dca9150

void __cdecl InternalConstructor<UMovieGraphSettingNode>(FObjectInitializer *param_1)

{
  UMovieGraphNode *this;
  
  this = (UMovieGraphNode *)param_1->Obj;
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this);
    this->_padding_ = (longlong)&___7UMovieGraphSettingNode__6B_;
  }
  return;
}

// InternalConstructor<UMovieGraphTimeStepBase> @ 14dca9180

void __cdecl InternalConstructor<UMovieGraphTimeStepBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieGraphTimeStepBase__6B_;
  }
  return;
}

// InternalConstructor<UMovieRenderGraphEditorSettings> @ 14dca91b0

void __cdecl InternalConstructor<UMovieRenderGraphEditorSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UDeveloperSettings::UDeveloperSettings(this,pFVar1);
    this->_padding_ = (longlong)&___7UMovieRenderGraphEditorSettings__6B_;
    FMovieGraphPostRenderSettings::FMovieGraphPostRenderSettings
              ((FMovieGraphPostRenderSettings *)(this + 1));
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieGraphApplyCVarPresetNode> @ 14dca9200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphApplyCVarPresetNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphApplyCVarPresetNode::GetPrivateStaticClass();
  this = (UMovieGraphNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphApplyCVarPresetNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphApplyViewportLookNode> @ 14dca92c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphApplyViewportLookNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphApplyViewportLookNode::GetPrivateStaticClass();
  this = (UMovieGraphNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphApplyViewportLookNode__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphAudioOutputNode> @ 14dca9370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphAudioOutputNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphFileOutputNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphAudioOutputNode::GetPrivateStaticClass();
  this = (UMovieGraphFileOutputNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphFileOutputNode *)0x0) {
    UMovieGraphFileOutputNode::UMovieGraphFileOutputNode(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphAudioOutputNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphAudioRendererBase> @ 14dca9430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphAudioRendererBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphAudioRendererBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphAudioRendererBase__6B_;
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3f800000;
    *(undefined8 *)&pUVar1[1].field_0x8 = 1;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphBranchNode> @ 14dca9500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphBranchNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphBranchNode::GetPrivateStaticClass();
  this = (UMovieGraphNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphBranchNode__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphBurnInNode> @ 14dca95b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphBurnInNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphBurnInNode *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphBurnInNode::GetPrivateStaticClass();
  pUVar3 = (UMovieGraphBurnInNode *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieGraphBurnInNode *)0x0) {
    pUVar3 = UMovieGraphBurnInNode::UMovieGraphBurnInNode(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphCollection> @ 14dca9650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphCollection::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphCollection__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphCollectionModifier> @ 14dca9710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphCollectionModifier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphCollectionModifier::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphCollectionModifier__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroup> @ 14dca97d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphConditionGroup>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroup::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroup__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0xc = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined4 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 9) = 0;
    *(undefined4 *)&pUVar1[9].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0xc = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined4 *)&pUVar1[9].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQueryBase> @ 14dca9990

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQueryBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQueryBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQueryBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Actor> @ 14dca9a40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Actor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_Actor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_Actor__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorLayer> @ 14dca9b00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorLayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_ActorLayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_ActorLayer__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorName> @ 14dca9bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorName>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_ActorName::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_ActorName__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorTagName> @ 14dca9c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorTagName>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_ActorTagName::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_ActorTagName__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorType> @ 14dca9d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorType>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_ActorType::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_ActorType__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentTagName> @ 14dca9e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentTagName>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_ComponentTagName::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_ComponentTagName__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentType> @ 14dca9ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentType>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_ComponentType::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_ComponentType__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_DataLayer> @ 14dca9f80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_DataLayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_DataLayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_DataLayer__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_EditorFolder> @ 14dcaa040

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_EditorFolder>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_EditorFolder::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_EditorFolder__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_IsSpawnable> @ 14dcaa100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_IsSpawnable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_IsSpawnable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_IsSpawnable__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Sublevel> @ 14dcaa1b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Sublevel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphConditionGroupQuery_Sublevel::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphConditionGroupQuery_Sublevel__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphDataSourceBase> @ 14dcaa270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphDataSourceBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphDataSourceBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphDataSourceBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphDefaultAudioRenderer> @ 14dcaa320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphDefaultAudioRenderer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphDefaultAudioRenderer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMovieGraphDefaultAudioRenderer__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3f800000;
    *(undefined8 *)&pUVar1[1].field_0x8 = 1;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphDefaultRenderer> @ 14dcaa3f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphDefaultRenderer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphDefaultRenderer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UMovieGraphDefaultRenderer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x24 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined4 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[10].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0x24 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x10 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[0xb].field_0x18,4000);
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xe) = 0;
    *(undefined4 *)&pUVar1[0xe].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0xe].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xe].field_0xc = 0;
    *(undefined8 *)&pUVar1[0xe].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xe].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 0xf) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphEdge> @ 14dcaa400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphEdge>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphEdge::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphEdge__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphEngineTimeStep> @ 14dcaa4c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphEngineTimeStep>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphEngineTimeStep::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UEngineCustomTimeStep::UEngineCustomTimeStep((UEngineCustomTimeStep *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphEngineTimeStep__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphEvaluationNodeInjector> @ 14dcaa580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphEvaluationNodeInjector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphEvaluationNodeInjector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphEvaluationNodeInjector__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphLinearTimeStep> @ 14dcaa630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphLinearTimeStep>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphCoreTimeStep *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphLinearTimeStep::GetPrivateStaticClass();
  this = (UMovieGraphCoreTimeStep *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphCoreTimeStep *)0x0) {
    UMovieGraphCoreTimeStep::UMovieGraphCoreTimeStep(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphLinearTimeStep__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphMaterialModifier> @ 14dcaa6e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphMaterialModifier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphMaterialModifier::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UMovieGraphMaterialModifier__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[4].field_0x8,0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphModifierBase> @ 14dcaa7f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphModifierBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphModifierBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphModifierBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphNode> @ 14dcaa8a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphNode *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphNode::GetPrivateStaticClass();
  pUVar3 = (UMovieGraphNode *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UMovieGraphNode *)0x0) {
    pUVar3 = UMovieGraphNode::UMovieGraphNode(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphOutputBurnInNode> @ 14dcaa940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphOutputBurnInNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphBurnInNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphOutputBurnInNode::GetPrivateStaticClass();
  this = (UMovieGraphBurnInNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphBurnInNode *)0x0) {
    UMovieGraphBurnInNode::UMovieGraphBurnInNode(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphOutputBurnInNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FString::FString((FString *)&this[1]._padding_,"{sequence_name}.{layer_name}.{frame_number}");
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphPin> @ 14dcaaa40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphPin>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphPin::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphPin__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0x10 = 5;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0x1000001;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphPipeline> @ 14dcaab10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphPipeline>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphPipeline::GetPrivateStaticClass();
  this = (UMoviePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineBase *)0x0) {
    UMoviePipelineBase::UMoviePipelineBase(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate = 0;
    *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegateNative = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative = 0;
    *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x4 = 0x80;
    *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x8 = 0xffffffff;
    *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0xc = 0;
    *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate = 0;
    *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegate = 0;
    *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative = 0;
    *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x8 = 0;
    *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0xc = 0x80;
    *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x14 = 0;
    *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative = 0;
    *(undefined4 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x8 = 0;
    *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate = 0;
    *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x8 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x10 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x10 = 0;
    *(undefined4 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined4 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x1c = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphPostRenderNode> @ 14dcaab20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphPostRenderNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphPostRenderNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphPostRenderNode__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphProjectSettings> @ 14dcaabd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphProjectSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphProjectSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphProjectSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphQuickRenderModeSettings> @ 14dcaac90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphQuickRenderModeSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  undefined8 local_res10;
  
  pUVar3 = (UObject *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphQuickRenderModeSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphQuickRenderModeSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x18,0);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[2].field_0x18,0);
    local_res10 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)(pUVar1 + 2),(FObjectPtr)&local_res10);
    *(undefined2 *)(pUVar1 + 3) = 1;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0;
    pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UMovieGraphQuickRenderSettings> @ 14dcaadb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphQuickRenderSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphQuickRenderSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphQuickRenderSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphRenderLayer> @ 14dcaae90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphRenderLayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphRenderLayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphRenderLayer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphRenderLayerSubsystem> @ 14dcaaf50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphRenderLayerSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphRenderLayerSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphRenderLayerSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphRenderPropertyModifier> @ 14dcab010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphRenderPropertyModifier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphRenderPropertyModifier::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMovieGraphRenderPropertyModifier__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphRendererBase> @ 14dcab0e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphRendererBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphRendererBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphRendererBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphSequenceDataSource> @ 14dcab190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieGraphSequenceDataSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphSequenceDataSource::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphSequenceDataSource__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphSettingNode> @ 14dcab250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphSettingNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieGraphNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphSettingNode::GetPrivateStaticClass();
  this = (UMovieGraphNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieGraphNode *)0x0) {
    UMovieGraphNode::UMovieGraphNode(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphSettingNode__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieGraphTimeStepBase> @ 14dcab300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieGraphTimeStepBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieGraphTimeStepBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieGraphTimeStepBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieRenderGraphEditorSettings> @ 14dcab3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieRenderGraphEditorSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieRenderGraphEditorSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UMovieRenderGraphEditorSettings__6B_;
    FMovieGraphPostRenderSettings::FMovieGraphPostRenderSettings
              ((FMovieGraphPostRenderSettings *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UMovieGraphEngineTimeStep,UEngineCustomTimeStep_*,0> @ 14dcab470

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieGraphEngineTimeStep,UEngineCustomTimeStep_*,0>
          (TObjectPtr<UMovieGraphEngineTimeStep> *param_1,UEngineCustomTimeStep **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieGraphEngineTimeStep *)0x0) {
    return (UMovieGraphEngineTimeStep *)*param_2 == (UMovieGraphEngineTimeStep *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UMovieGraphEngineTimeStep *)*param_2;
}

// IsObjectPtrEqual<UMovieGraphModifierBase,UMovieGraphModifierBase_*,0> @ 14dcab490

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieGraphModifierBase,UMovieGraphModifierBase_*,0>
          (TObjectPtr<UMovieGraphModifierBase> *param_1,UMovieGraphModifierBase **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieGraphModifierBase *)0x0) {
    return *param_2 == (UMovieGraphModifierBase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UMovieGraphModifierBase,UMovieGraphCollectionModifier_*,0> @ 14dcab4b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieGraphModifierBase,UMovieGraphCollectionModifier_*,0>
          (TObjectPtr<UMovieGraphModifierBase> *param_1,UMovieGraphCollectionModifier **param_2)

{
  if ((UMovieGraphCollectionModifier *)(param_1->field0_0x0).DebugPtr ==
      (UMovieGraphCollectionModifier *)0x0) {
    return *param_2 == (UMovieGraphCollectionModifier *)0x0;
  }
  return (UMovieGraphCollectionModifier *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UMovieGraphPin,UMovieGraphPin_const_*,0> @ 14dcab4d0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieGraphPin,UMovieGraphPin_const_*,0>
          (TObjectPtr<UMovieGraphPin> *param_1,UMovieGraphPin **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieGraphPin *)0x0) {
    return *param_2 == (UMovieGraphPin *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LowerBoundInternal<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>_const_,int,int,TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_> @ 14dcab4f0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>_const_,int,int,TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>::FKeyForward,TLess<int_const_>_>
          (TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame> *param_1,int param_2,
          int *param_3,FKeyForward param_4,TLess<int_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeSoftObjectPtr<UMovieGraphConfig> @ 14dcab550

TSoftObjectPtr<UMovieGraphConfig> * __cdecl
MakeSoftObjectPtr<UMovieGraphConfig>
          (TSoftObjectPtr<UMovieGraphConfig> *__return_storage_ptr__,UMovieGraphConfig *param_1)

{
  undefined1 *this;
  UMovieGraphConfig *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this = &(__return_storage_ptr__->SoftObjectPtr).field_0x18;
  *(undefined8 *)this = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->SoftObjectPtr = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SoftObjectPtr).field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this,0);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieGraphConfig *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&__return_storage_ptr__->SoftObjectPtr,(FObjectPtr)&local_res8);
  return __return_storage_ptr__;
}

// Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<`UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l18::<lambda_3>_>_>_>_> @ 14dcab5e0

void __cdecl
AlgoImpl::
Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l18::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,
          FElementCompareClass<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_18_::<lambda_3>_>_>_>
          param_5)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar19;
  uint uVar20;
  int iVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar23;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar18;
  
  if (0 < param_2) {
    iVar16 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar21 = 0;
      if (0 < param_2 - iVar16) {
        uVar20 = param_2 - iVar16;
        do {
          iVar14 = (uVar20 >> 1) + iVar21;
          if (*(int *)(*(longlong *)
                        (*(longlong *)
                          (((longlong)iVar14 + (longlong)iVar16) * 0x58 + 0x48 + (longlong)param_1)
                        + 0x18) + 0x184) <=
              *(int *)(*(longlong *)
                        (*(longlong *)((longlong)param_1 + (longlong)param_2 * 0x58 + 0x48) + 0x18)
                      + 0x184)) {
            iVar21 = iVar14 + (uVar20 & 1);
          }
          uVar2 = uVar20 >> 1;
          uVar20 = uVar20 >> 1;
        } while (uVar2 != 0);
      }
      iVar16 = iVar16 + iVar21;
      if (param_2 <= iVar16) {
        return;
      }
      iVar21 = 0;
      pTVar22 = param_1 + iVar16;
      if (0 < param_3 - param_2) {
        uVar20 = param_3 - param_2;
        do {
          iVar14 = (uVar20 >> 1) + iVar21;
          if (*(int *)(*(longlong *)
                        (*(longlong *)
                          (((longlong)iVar14 + (longlong)param_2) * 0x58 + 0x48 + (longlong)param_1)
                        + 0x18) + 0x184) <
              *(int *)(*(longlong *)(*(longlong *)((pTVar22->ElementData).Pad + 0x48) + 0x18) +
                      0x184)) {
            iVar21 = iVar14 + (uVar20 & 1);
          }
          uVar2 = uVar20 >> 1;
          uVar20 = uVar20 >> 1;
        } while (uVar2 != 0);
      }
      iVar15 = (iVar21 - iVar16) + param_2;
      iVar14 = param_2 - iVar16;
      if ((iVar14 != 0) && (iVar14 < iVar15)) {
        pTVar17 = pTVar22 + iVar14;
        pTVar23 = pTVar22;
        pTVar18 = pTVar22 + iVar14;
        do {
          while( true ) {
            pTVar19 = pTVar17 + 1;
            pTVar24 = pTVar23 + 1;
            uVar1 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x50);
            uVar3 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            TVar4 = pTVar23->_s_1;
            uVar5 = *(undefined8 *)((pTVar23->ElementData).Pad + 8);
            uVar6 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x10);
            uVar7 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x18);
            uVar8 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x20);
            uVar9 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x28);
            uVar10 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x30);
            uVar11 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x38);
            uVar12 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x40);
            uVar13 = *(undefined8 *)((pTVar23->ElementData).Pad + 0x48);
            pTVar23->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((pTVar23->ElementData).Pad + 8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x18) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x28);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x28) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x38);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x30);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x38) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x48);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x40) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x40);
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x48) = uVar3;
            *(undefined8 *)((pTVar23->ElementData).Pad + 0x50) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x50);
            pTVar17->_s_1 = TVar4;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar5;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x28) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x30) = uVar10;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x38) = uVar11;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x40) = uVar12;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x48) = uVar13;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x50) = uVar1;
            pTVar23 = pTVar24;
            if (pTVar19 == pTVar22 + iVar15) break;
            pTVar17 = pTVar19;
            if (pTVar24 == pTVar18) {
              pTVar18 = pTVar19;
            }
          }
          pTVar17 = pTVar18;
        } while (pTVar24 != pTVar18);
      }
      param_2 = param_2 + iVar21;
      iVar16 = iVar16 + 1 + iVar21;
    } while (iVar16 < param_2);
  }
  return;
}

// MutableView<TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_>_> @ 14dcabc20

TMutableView<TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_>_> __cdecl
MutableView<TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *in_RDX;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)in_RDX;
  iVar2 = *(int *)(in_RDX + 8);
  lVar1 = lVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)(in_RDX + 8) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 8;
  }
  (param_1->AllocatorInstance).Data = in_RDX;
  return (TMutableView<TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_>_>)
         (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// MutableView<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_> @ 14dcabc80

TMutableView<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
__cdecl MutableView<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
                  (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                   *param_1)

{
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar1;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *in_RDX;
  
  pTVar1 = UE::Core::Private::Unsafe::
           Decay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
                     (in_RDX);
  *(TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> **)&param_1->Elements = pTVar1;
  return (TMutableView<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>
          )(TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)param_1;
}

// MutableView<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_> @ 14dcabcb0

TMutableView<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
 __cdecl MutableView<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
                   (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                    *param_1)

{
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *in_RDX;
  
  pTVar1 = UE::Core::Private::Unsafe::
           Decay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                     (in_RDX);
  *(TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> **)
   &param_1->Elements = pTVar1;
  return (TMutableView<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>
          )(TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
           param_1;
}

// NewObject<UMovieGraphAudioRendererBase> @ 14dcabce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphAudioRendererBase * __cdecl
NewObject<UMovieGraphAudioRendererBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieGraphAudioRendererBase *pUVar2;
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
  pUVar1 = UMovieGraphAudioRendererBase::StaticClass();
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
  pUVar2 = (UMovieGraphAudioRendererBase *)
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

// NewObject<UMovieGraphConditionGroup> @ 14dcabde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphConditionGroup * __cdecl
NewObject<UMovieGraphConditionGroup>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphConditionGroup *pUVar2;
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
  pUVar1 = UMovieGraphConditionGroup::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphConditionGroup *)
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

// NewObject<UMovieGraphConditionGroupQueryBase> @ 14dcabed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphConditionGroupQueryBase * __cdecl
NewObject<UMovieGraphConditionGroupQueryBase>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieGraphConditionGroupQueryBase *pUVar2;
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
  pUVar1 = UMovieGraphConditionGroupQueryBase::StaticClass();
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
  pUVar2 = (UMovieGraphConditionGroupQueryBase *)
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

// NewObject<UMovieGraphDataSourceBase> @ 14dcabfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphDataSourceBase * __cdecl
NewObject<UMovieGraphDataSourceBase>
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
  pUVar1 = UMovieGraphDataSourceBase::StaticClass();
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
  return (UMovieGraphDataSourceBase *)pUVar2;
}

// NewObject<UMovieGraphEdge> @ 14dcac0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphEdge * __cdecl NewObject<UMovieGraphEdge>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieGraphEdge *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieGraphEdge::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieGraphEdge *)
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

// NewObject<UMovieGraphLinearTimeStep> @ 14dcac170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphLinearTimeStep * __cdecl NewObject<UMovieGraphLinearTimeStep>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieGraphLinearTimeStep *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieGraphLinearTimeStep::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieGraphLinearTimeStep *)
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

// NewObject<UMovieGraphPin> @ 14dcac210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphPin * __cdecl
NewObject<UMovieGraphPin>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphPin *pUVar2;
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
  pUVar1 = UMovieGraphPin::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphPin *)
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

// NewObject<UMovieGraphQuickRenderModeSettings> @ 14dcac300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphQuickRenderModeSettings * __cdecl
NewObject<UMovieGraphQuickRenderModeSettings>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieGraphQuickRenderModeSettings *pUVar2;
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
  pUVar1 = UMovieGraphQuickRenderModeSettings::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieGraphQuickRenderModeSettings *)
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

// NewObject<UMovieGraphQuickRenderSettings> @ 14dcac3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphQuickRenderSettings * __cdecl NewObject<UMovieGraphQuickRenderSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieGraphQuickRenderSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieGraphQuickRenderSettings::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieGraphQuickRenderSettings *)
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

// NewObject<UMovieGraphRenderLayer> @ 14dcac490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphRenderLayer * __cdecl NewObject<UMovieGraphRenderLayer>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieGraphRenderLayer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieGraphRenderLayer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieGraphRenderLayer *)
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

// NewObject<UMovieGraphRendererBase> @ 14dcac530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphRendererBase * __cdecl
NewObject<UMovieGraphRendererBase>
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
  pUVar1 = UMovieGraphRendererBase::StaticClass();
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
  return (UMovieGraphRendererBase *)pUVar2;
}

// NewObject<UMovieGraphTimeStepBase> @ 14dcac630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphTimeStepBase * __cdecl
NewObject<UMovieGraphTimeStepBase>
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
  pUVar1 = UMovieGraphTimeStepBase::StaticClass();
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
  return (UMovieGraphTimeStepBase *)pUVar2;
}

// ObjectPtrDecay<FMovieGraphEvaluationResult,UE::Core::Private::TObjectPtrDecayTypeOf<FMovieGraphEvaluationResult>,FMovieGraphEvaluationResult> @ 14dcac730

FMovieGraphEvaluationResult * __cdecl
ObjectPtrDecay<FMovieGraphEvaluationResult,UE::Core::Private::TObjectPtrDecayTypeOf<FMovieGraphEvaluationResult>,FMovieGraphEvaluationResult>
          (FMovieGraphEvaluationResult *param_1)

{
  return param_1;
}

// ObjectPtrDecay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_> @ 14dcac740

TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> * __cdecl
ObjectPtrDecay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar8;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dcac7dd;
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
LAB_14dcac7dd:
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
    pTVar8 = (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)(*pcVar4)();
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
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dcac8e0;
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
LAB_14dcac8e0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)param_1;
}

// Reverse<IMovieGraphModifierNodeInterface_*> @ 14dcace40

void __cdecl
AlgoImpl::Reverse<IMovieGraphModifierNodeInterface_*>
          (IMovieGraphModifierNodeInterface **param_1,int param_2)

{
  IMovieGraphModifierNodeInterface *pIVar1;
  IMovieGraphModifierNodeInterface **ppIVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppIVar2 = param_1 + (param_2 + -1);
    do {
      pIVar1 = param_1[lVar3];
      param_1[lVar3] = *ppIVar2;
      lVar3 = lVar3 + 1;
      *ppIVar2 = pIVar1;
      ppIVar2 = ppIVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>_> @ 14dcacea0

int __cdecl
AlgoImpl::RotateInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar14;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar13 = param_1 + param_3;
    pTVar16 = param_1;
    pTVar14 = param_1 + param_3;
    do {
      while( true ) {
        pTVar15 = pTVar13 + 1;
        pTVar17 = pTVar16 + 1;
        uVar1 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x50);
        uVar2 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8);
        TVar3 = pTVar16->_s_1;
        uVar4 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
        uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
        uVar6 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
        uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
        uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x28);
        uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x30);
        uVar10 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x38);
        uVar11 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x40);
        uVar12 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x48);
        pTVar16->_s_1 = pTVar13->_s_1;
        *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar2;
        uVar2 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18);
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) =
             *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10);
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar2;
        uVar2 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x28);
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) =
             *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x20);
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x28) = uVar2;
        uVar2 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x38);
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x30) =
             *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x30);
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x38) = uVar2;
        uVar2 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x48);
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x40) =
             *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x40);
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x48) = uVar2;
        *(undefined8 *)((pTVar16->ElementData).Pad + 0x50) =
             *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x50);
        pTVar13->_s_1 = TVar3;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar4;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10) = uVar5;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18) = uVar6;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x20) = uVar7;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x28) = uVar8;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x30) = uVar9;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x38) = uVar10;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x40) = uVar11;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x48) = uVar12;
        *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x50) = uVar1;
        pTVar16 = pTVar17;
        if (pTVar15 == param_1 + param_2) break;
        pTVar13 = pTVar15;
        if (pTVar17 == pTVar14) {
          pTVar14 = pTVar15;
        }
      }
      pTVar13 = pTVar14;
    } while (pTVar17 != pTVar14);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSort<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<`UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l18::<lambda_3>_>_> @ 14dcacf90

void __thiscall
TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
::
StableSort<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l18::<lambda_3>_>_>
          (TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_virtual_void___cdecl_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_18_::<lambda_3>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_virtual_void___cdecl_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_18_::<lambda_3>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::CompactStable(&this->Elements);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> **)&this->Elements;
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
    StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l18::<lambda_3>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_18_::<lambda_3>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<`UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread'::__l18::<lambda_3>_>_>_>_> @ 14dcad020

void __cdecl
AlgoImpl::
StableSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l18::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)_::_18_::<lambda_3>_>_>_>
          param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_> *pTVar17;
  int iVar18;
  longlong lVar19;
  
  if (0 < param_2) {
    pTVar17 = param_1 + 1;
    lVar19 = ((longlong)param_2 - 1U >> 1) + 1;
    iVar18 = 1;
    do {
      if ((iVar18 < param_2) &&
         (*(int *)(*(longlong *)(*(longlong *)((pTVar17->ElementData).Pad + 0x48) + 0x18) + 0x184) <
          *(int *)(*(longlong *)(*(longlong *)((longlong)pTVar17 + -0x10) + 0x18) + 0x184))) {
        uVar3 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
        TVar4 = pTVar17[-1]._s_1;
        uVar5 = *(undefined8 *)((longlong)pTVar17 + -0x50);
        uVar6 = *(undefined8 *)((longlong)pTVar17 + -0x48);
        uVar7 = *(undefined8 *)((longlong)pTVar17 + -0x40);
        uVar8 = *(undefined8 *)((longlong)pTVar17 + -0x38);
        uVar9 = *(undefined8 *)((longlong)pTVar17 + -0x30);
        uVar10 = *(undefined8 *)((longlong)pTVar17 + -0x28);
        uVar11 = *(undefined8 *)((longlong)pTVar17 + -0x20);
        uVar12 = *(undefined8 *)((longlong)pTVar17 + -0x18);
        uVar13 = *(undefined8 *)((longlong)pTVar17 + -0x10);
        uVar1 = *(undefined8 *)((longlong)pTVar17 + -8);
        pTVar17[-1]._s_1 = pTVar17->_s_1;
        *(undefined8 *)((longlong)pTVar17 + -0x50) = uVar3;
        uVar3 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
        *(undefined8 *)((longlong)pTVar17 + -0x48) =
             *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
        *(undefined8 *)((longlong)pTVar17 + -0x40) = uVar3;
        uVar3 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x28);
        *(undefined8 *)((longlong)pTVar17 + -0x38) =
             *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
        *(undefined8 *)((longlong)pTVar17 + -0x30) = uVar3;
        uVar3 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x38);
        *(undefined8 *)((longlong)pTVar17 + -0x28) =
             *(undefined8 *)((pTVar17->ElementData).Pad + 0x30);
        *(undefined8 *)((longlong)pTVar17 + -0x20) = uVar3;
        uVar3 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x48);
        *(undefined8 *)((longlong)pTVar17 + -0x18) =
             *(undefined8 *)((pTVar17->ElementData).Pad + 0x40);
        *(undefined8 *)((longlong)pTVar17 + -0x10) = uVar3;
        *(undefined8 *)((longlong)pTVar17 + -8) = *(undefined8 *)((pTVar17->ElementData).Pad + 0x50)
        ;
        pTVar17->_s_1 = TVar4;
        *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar5;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar6;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar7;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar8;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x28) = uVar9;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x30) = uVar10;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x38) = uVar11;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x40) = uVar12;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x48) = uVar13;
        *(undefined8 *)((pTVar17->ElementData).Pad + 0x50) = uVar1;
      }
      iVar18 = iVar18 + 2;
      pTVar17 = pTVar17 + 2;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  iVar18 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar18 * 2;
      iVar14 = 0;
      iVar15 = param_2;
      do {
        iVar16 = iVar15;
        if (iVar2 <= iVar15) {
          iVar16 = iVar2;
        }
        Merge<TSparseArrayElementOrFreeListLink<TAlignedBytes<88,8>_>,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>::FValueComparisonClass<_UE::MovieGraph::FMovieGraphOutputMerger::OnCompleteRenderPassDataAvailable_AnyThread_::__l18::<lambda_3>_>_>_>_>
                  (param_1 + iVar14,iVar18,iVar16,param_3,param_4);
        iVar14 = iVar14 + iVar2;
        iVar15 = iVar15 + iVar18 * -2;
      } while (iVar14 < param_2);
      iVar18 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StaticEnum<enum_EMovieGraphBranchRestriction> @ 14dcad1e0

UEnum * __cdecl StaticEnum<enum_EMovieGraphBranchRestriction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphBranchRestriction,
                       (UObject *)pUVar1,L"EMovieGraphBranchRestriction");
  }
  return Z_Registration_Info_UEnum_EMovieGraphBranchRestriction.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphConditionGroupOpType> @ 14dcad220

UEnum * __cdecl StaticEnum<enum_EMovieGraphConditionGroupOpType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupOpType,
                       (UObject *)pUVar1,L"EMovieGraphConditionGroupOpType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphConditionGroupOpType.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphConditionGroupQueryOpType> @ 14dcad260

UEnum * __cdecl StaticEnum<enum_EMovieGraphConditionGroupQueryOpType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphConditionGroupQueryOpType
                       ,(UObject *)pUVar1,L"EMovieGraphConditionGroupQueryOpType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphConditionGroupQueryOpType.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphPinQueryRequirement> @ 14dcad2a0

UEnum * __cdecl StaticEnum<enum_EMovieGraphPinQueryRequirement>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphPinQueryRequirement,
                       (UObject *)pUVar1,L"EMovieGraphPinQueryRequirement");
  }
  return Z_Registration_Info_UEnum_EMovieGraphPinQueryRequirement.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphQuickRenderButtonMode> @ 14dcad2e0

UEnum * __cdecl StaticEnum<enum_EMovieGraphQuickRenderButtonMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderButtonMode,
                       (UObject *)pUVar1,L"EMovieGraphQuickRenderButtonMode");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphQuickRenderFrameRangeType> @ 14dcad320

UEnum * __cdecl StaticEnum<enum_EMovieGraphQuickRenderFrameRangeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderFrameRangeType
                       ,(UObject *)pUVar1,L"EMovieGraphQuickRenderFrameRangeType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderFrameRangeType.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphQuickRenderMode> @ 14dcad360

UEnum * __cdecl StaticEnum<enum_EMovieGraphQuickRenderMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderMode,
                       (UObject *)pUVar1,L"EMovieGraphQuickRenderMode");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderMode.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphQuickRenderPostRenderActionType> @ 14dcad3a0

UEnum * __cdecl StaticEnum<enum_EMovieGraphQuickRenderPostRenderActionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderPostRenderActionType
                       ,(UObject *)pUVar1,L"EMovieGraphQuickRenderPostRenderActionType");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderPostRenderActionType.OuterSingleton;
}

// StaticEnum<enum_EMovieGraphQuickRenderViewportLookFlags> @ 14dcad3e0

UEnum * __cdecl StaticEnum<enum_EMovieGraphQuickRenderViewportLookFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderViewportLookFlags
                       ,(UObject *)pUVar1,L"EMovieGraphQuickRenderViewportLookFlags");
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.OuterSingleton;
}

// ~TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,1> @ 14dcb1480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  puVar1 = *(undefined8 **)((longlong)this + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dcb149b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::<lambda_1>,1,0> @ 14dcb14b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UMovieGraphDefaultRenderer::FlushAsyncEngineSystems_::__l18::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::`18'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// `vcall'{752,{flat}}'_}' @ 14dcb6b24

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]: __cdecl UMovieGraphPipeline::`vcall'{752,{flat}}' }' */

void __thiscall UMovieGraphPipeline::_vcall__752__flat______(UMovieGraphPipeline *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dcb6b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f0))();
  return;
}

// `vcall'{760,{flat}}'_}' @ 14dcb6b34

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]: __cdecl UMovieGraphPipeline::`vcall'{760,{flat}}' }' */

void __thiscall UMovieGraphPipeline::_vcall__760__flat______(UMovieGraphPipeline *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dcb6b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))();
  return;
}

// `scalar_deleting_destructor' @ 14dcb6b50

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6b80

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6bb0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l18::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6be0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::MaybeRevertToWildcard'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6c10

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::IsConnectionToBranchAllowed'::__l21::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6c40

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UMovieGraphNode_*,UMovieGraphPin_const_*),FDefaultDelegateUserPolicy,`UMovieGraphPin::PropagatePinType'::__l11::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6c70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6ca0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0> *this,
          uint param_1)

{
  TPimplPtr<FOpenColorIOProcessorPimpl,1> TVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_UFOpenColorIOPixelPreProcessor_FMovieGraphOCIOHelper___00_0A__Function_Private_Core_UE__6B_
  ;
  TVar1 = (this->Obj).Processor.Pimpl;
  if (TVar1 != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  puVar1 = *(undefined8 **)((longlong)this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::`18'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6dd0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6e10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieGraph::FMovieGraphSequenceTimeController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieGraph::FMovieGraphSequenceTimeController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6e50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMoviePipelineSurfaceQueue,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMoviePipelineSurfaceQueue,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6e90

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieGraph::Private::FMovieGraphCVarManager,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieGraph::Private::FMovieGraphCVarManager,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6ed0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MovieGraph::FMovieGraphOutputMerger,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieGraph::FMovieGraphOutputMerger,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6f10

void * __thiscall
UMovieGraphBurnInNode::FMovieGraphBurnInPass::_scalar_deleting_destructor_
          (FMovieGraphBurnInPass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RendererNodeInstanceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::~FMovieGraphWidgetPass
            ((FMovieGraphWidgetPass *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6f60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UE::MovieGraph::FMovieGraphOutputMerger::_scalar_deleting_destructor_
          (FMovieGraphOutputMerger *this,uint param_1)

{
  ~FMovieGraphOutputMerger(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6fa0

void * __thiscall
UE::MovieGraph::FMovieGraphSequenceTimeController::_scalar_deleting_destructor_
          (FMovieGraphSequenceTimeController *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb6fe0

void * __thiscall
UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::_scalar_deleting_destructor_
          (FMovieGraphWidgetPass *this,uint param_1)

{
  ~FMovieGraphWidgetPass(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb7020

void * __thiscall
UE::MovieGraph::IMovieGraphOutputMerger::_scalar_deleting_destructor_
          (IMovieGraphOutputMerger *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IMovieGraphOutputMerger_MovieGraph_UE__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7090

void * __thiscall
UMovieGraphApplyCVarPresetNode::_scalar_deleting_destructor_
          (UMovieGraphApplyCVarPresetNode *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphSettingNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb70f0

void * __thiscall
UMovieGraphApplyViewportLookNode::_scalar_deleting_destructor_
          (UMovieGraphApplyViewportLookNode *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphSettingNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb7150

void * __thiscall
UMovieGraphAudioOutputNode::_scalar_deleting_destructor_
          (UMovieGraphAudioOutputNode *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphAudioOutputNode__6B_;
  UMovieGraphFileOutputNode::~UMovieGraphFileOutputNode((UMovieGraphFileOutputNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb71b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
UMovieGraphAudioRendererBase::_scalar_deleting_destructor_
          (UMovieGraphAudioRendererBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphAudioRendererBase__6B_;
  DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>
            ((TWeakPtr<Audio::FMixerSubmix,1> *)
             (this->AudioState).ActiveSubmixes.AllocatorInstance.Data,
             (this->AudioState).ActiveSubmixes.ArrayNum);
  pFVar1 = (this->AudioState).ActiveSubmixes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<MoviePipeline::FAudioState::FAudioSegment,int>
            ((FAudioSegment *)(this->AudioState).FinishedSegments.AllocatorInstance.Data,
             (this->AudioState).FinishedSegments.ArrayNum);
  pFVar1 = (this->AudioState).FinishedSegments.AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14dcb7250

void * __thiscall
UMovieGraphBranchNode::_scalar_deleting_destructor_(UMovieGraphBranchNode *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphBranchNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb72b0

void * __thiscall
UMovieGraphBurnInNode::_scalar_deleting_destructor_(UMovieGraphBurnInNode *this,uint param_1)

{
  ~UMovieGraphBurnInNode(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb7310

void * __thiscall
UMovieGraphCollection::_scalar_deleting_destructor_(UMovieGraphCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphCollection__6B_;
  pFVar1 = (this->ConditionGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollectionName).Data.AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14dcb7390

void * __thiscall
UMovieGraphCollectionModifier::_scalar_deleting_destructor_
          (UMovieGraphCollectionModifier *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphCollectionModifier__6B_;
  pFVar1 = (this->Collections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphModifierBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7410

void * __thiscall
UMovieGraphConditionGroup::_scalar_deleting_destructor_
          (UMovieGraphConditionGroup *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroup__6B_;
  (this->EvaluationResult).MatchingComponents.HashSize = 0;
  FVar1 = (this->EvaluationResult).MatchingComponents.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EvaluationResult).MatchingComponents.Elements);
  (this->EvaluationResult).MatchingActors.HashSize = 0;
  FVar1 = (this->EvaluationResult).MatchingActors.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EvaluationResult);
  (this->QueryResult).MatchingComponents.HashSize = 0;
  FVar1 = (this->QueryResult).MatchingComponents.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->QueryResult).MatchingComponents.Elements);
  (this->QueryResult).MatchingActors.HashSize = 0;
  FVar1 = (this->QueryResult).MatchingActors.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QueryResult);
  pFVar2 = (this->Queries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,400);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb7520

void * __thiscall
UMovieGraphConditionGroupQueryBase::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQueryBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7580

void * __thiscall
UMovieGraphConditionGroupQuery_Actor::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_Actor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_Actor__6B_;
  DestructItems<FMovieGraphActorQueryEntry,int>
            ((FMovieGraphActorQueryEntry *)(this->ActorsAndComponentsToMatch).AllocatorInstance.Data
             ,(this->ActorsAndComponentsToMatch).ArrayNum);
  pFVar1 = (this->ActorsAndComponentsToMatch).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->ActorsToMatch).AllocatorInstance.Data,
             (this->ActorsToMatch).ArrayNum);
  pFVar1 = (this->ActorsToMatch).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7620

void * __thiscall
UMovieGraphConditionGroupQuery_ActorLayer::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_ActorLayer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorLayer__6B_;
  pFVar1 = (this->LayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb76a0

void * __thiscall
UMovieGraphConditionGroupQuery_ActorName::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_ActorName *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorName__6B_;
  pFVar1 = (this->WildcardSearch).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7720

void * __thiscall
UMovieGraphConditionGroupQuery_ActorTagName::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_ActorTagName *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorTagName__6B_;
  pFVar1 = (this->TagsToMatch).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb77a0

void * __thiscall
UMovieGraphConditionGroupQuery_ActorType::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_ActorType *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ActorType__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClassViewerWidget).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->ActorTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7830

void * __thiscall
UMovieGraphConditionGroupQuery_ComponentTagName::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_ComponentTagName *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ComponentTagName__6B_;
  pFVar1 = (this->TagsToMatch).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb78b0

void * __thiscall
UMovieGraphConditionGroupQuery_ComponentType::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_ComponentType *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_ComponentType__6B_;
  pFVar1 = (this->ComponentTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClassViewerWidget).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7940

void * __thiscall
UMovieGraphConditionGroupQuery_DataLayer::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_DataLayer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_DataLayer__6B_;
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            ((TSoftObjectPtr<UDataLayerAsset> *)(this->DataLayers).AllocatorInstance.Data,
             (this->DataLayers).ArrayNum);
  pFVar1 = (this->DataLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb79d0

void * __thiscall
UMovieGraphConditionGroupQuery_EditorFolder::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_EditorFolder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_EditorFolder__6B_;
  pFVar1 = (this->FolderPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7a50

void * __thiscall
UMovieGraphConditionGroupQuery_IsSpawnable::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_IsSpawnable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7ab0

void * __thiscall
UMovieGraphConditionGroupQuery_Sublevel::_scalar_deleting_destructor_
          (UMovieGraphConditionGroupQuery_Sublevel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_Sublevel__6B_;
  DestructItems<TSoftObjectPtr<UWorld>,int>
            ((TSoftObjectPtr<UWorld> *)(this->Sublevels).AllocatorInstance.Data,
             (this->Sublevels).ArrayNum);
  pFVar1 = (this->Sublevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7b40

void * __thiscall
UMovieGraphDataSourceBase::_scalar_deleting_destructor_
          (UMovieGraphDataSourceBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphDataSourceBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
UMovieGraphDefaultAudioRenderer::_scalar_deleting_destructor_
          (UMovieGraphDefaultAudioRenderer *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphAudioRendererBase__6B_;
  DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>
            (*(TWeakPtr<Audio::FMixerSubmix,1> **)&this->field_0x48,*(int *)&this->field_0x50);
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  DestructItems<MoviePipeline::FAudioState::FAudioSegment,int>
            (*(FAudioSegment **)&this->field_0x38,*(int *)&this->field_0x40);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
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

// `scalar_deleting_destructor' @ 14dcb7c40

void * __thiscall
UMovieGraphDefaultRenderer::_scalar_deleting_destructor_
          (UMovieGraphDefaultRenderer *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphDefaultRenderer__6B_;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CameraOverscanCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CameraOverscanCache);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)(this->OutstandingTasks).AllocatorInstance.Data,
             (this->OutstandingTasks).ArrayNum);
  pFVar2 = (this->OutstandingTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OutstandingTasksMutex);
  *(undefined4 *)&(this->PooledAccumulators).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PooledAccumulators).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PooledAccumulators);
  *(undefined4 *)&(this->PooledSurfaceQueues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PooledSurfaceQueues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FRenderTargetInitParams,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PooledSurfaceQueues);
  *(undefined4 *)&(this->PooledViewRenderTargetStates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PooledViewRenderTargetStates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewPoolState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PooledViewRenderTargetStates);
  *(undefined4 *)&(this->PooledViewRenderTargets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PooledViewRenderTargets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieGraph::DefaultRenderer::FMovieGraphImagePreviewDataPoolParams,TObjectPtr<UTextureRenderTarget2D>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PooledViewRenderTargets);
  *(undefined4 *)&(this->RenderTimeStatistics).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenderTimeStatistics).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RenderTimeStatistics);
  pFVar2 = (this->RenderPassesInUse).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UMovieGraphRendererBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x260);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb7dd0

void * __thiscall UMovieGraphEdge::_scalar_deleting_destructor_(UMovieGraphEdge *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphEdge__6B_;
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

// `scalar_deleting_destructor' @ 14dcb7e30

void * __thiscall
UMovieGraphEvaluationNodeInjector::_scalar_deleting_destructor_
          (UMovieGraphEvaluationNodeInjector *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14dcb7e90

void * __thiscall
UMovieGraphFileOutputNode::_scalar_deleting_destructor_
          (UMovieGraphFileOutputNode *this,uint param_1)

{
  ~UMovieGraphFileOutputNode(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb7ef0

void * __thiscall
UMovieGraphLinearTimeStep::_scalar_deleting_destructor_
          (UMovieGraphLinearTimeStep *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphLinearTimeStep__6B_;
  UMovieGraphCoreTimeStep::~UMovieGraphCoreTimeStep((UMovieGraphCoreTimeStep *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb7f50

void * __thiscall
UMovieGraphMaterialModifier::_scalar_deleting_destructor_
          (UMovieGraphMaterialModifier *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphMaterialModifier__6B_;
  pvVar1 = *(void **)&(this->Material).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->ModifiedComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModifiedComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModifiedComponents);
  this->_padding_ = (longlong)&___7UMovieGraphCollectionModifier__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UMovieGraphModifierBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb8020

void * __thiscall
UMovieGraphModifierBase::_scalar_deleting_destructor_(UMovieGraphModifierBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphModifierBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb8080

void * __thiscall UMovieGraphNode::_scalar_deleting_destructor_(UMovieGraphNode *this,uint param_1)

{
  ~UMovieGraphNode(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb80e0

void * __thiscall
UMovieGraphOutputBurnInNode::_scalar_deleting_destructor_
          (UMovieGraphOutputBurnInNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphOutputBurnInNode__6B_;
  pFVar1 = (this->LayerNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OutputRestriction).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->OutputName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphBurnInNode::~UMovieGraphBurnInNode((UMovieGraphBurnInNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb8190

void * __thiscall UMovieGraphPin::_scalar_deleting_destructor_(UMovieGraphPin *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphPin__6B_;
  pFVar1 = (this->Edges).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14dcb8200

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
UMovieGraphPipeline::_scalar_deleting_destructor_(UMovieGraphPipeline *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7UMovieGraphPipeline__6B_;
  *(undefined4 *)&(this->ClothSimCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClothSimCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothSimCache);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CVarManager).SharedReferenceCount.ReferenceController);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(this->GeneratedOutputData).AllocatorInstance.Data,
             (this->GeneratedOutputData).ArrayNum);
  pFVar2 = (this->GeneratedOutputData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>,int>
            ((TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *)
             (this->OutstandingOutputFutures).AllocatorInstance.Data,
             (this->OutstandingOutputFutures).ArrayNum);
  pFVar2 = (this->OutstandingOutputFutures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputMerger).SharedReferenceCount.ReferenceController);
  (this->OutputNodesDataSentTo).HashSize = 0;
  FVar3 = (this->OutputNodesDataSentTo).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutputNodesDataSentTo).Elements);
  pFVar2 = (this->CurrentScriptInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveShotList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DuplicatedGraphs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DuplicatedGraphs);
  pFVar2 = (this->GraphTimeStepInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMoviePipelineBase::~UMoviePipelineBase((UMoviePipelineBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb8380

void * __thiscall
UMovieGraphPostRenderNode::_scalar_deleting_destructor_
          (UMovieGraphPostRenderNode *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14dcb83e0

void * __thiscall
UMovieGraphProjectSettings::_scalar_deleting_destructor_
          (UMovieGraphProjectSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphProjectSettings__6B_;
  DestructItems<FMovieGraphNamedResolution,int>
            ((FMovieGraphNamedResolution *)(this->DefaultNamedResolutions).AllocatorInstance.Data,
             (this->DefaultNamedResolutions).ArrayNum);
  pFVar1 = (this->DefaultNamedResolutions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb8460

void * __thiscall
UMovieGraphQuickRenderModeSettings::_scalar_deleting_destructor_
          (UMovieGraphQuickRenderModeSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphQuickRenderModeSettings__6B_;
  pFVar1 = (this->GraphVariableAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->LevelSequenceOverride).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->GraphPreset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb84f0

void * __thiscall
UMovieGraphQuickRenderSettings::_scalar_deleting_destructor_
          (UMovieGraphQuickRenderSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphQuickRenderSettings__6B_;
  *(undefined4 *)&(this->ModeSettings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModeSettings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModeSettings);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb8580

void * __thiscall
UMovieGraphRenderLayer::_scalar_deleting_destructor_(UMovieGraphRenderLayer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayer__6B_;
  pFVar1 = (this->Modifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 14dcb85f0

void * __thiscall
UMovieGraphRenderLayerSubsystem::_scalar_deleting_destructor_
          (UMovieGraphRenderLayerSubsystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderLayerSubsystem__6B_;
  pFVar1 = (this->RenderLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb8660

void * __thiscall
UMovieGraphRenderPropertyModifier::_scalar_deleting_destructor_
          (UMovieGraphRenderPropertyModifier *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderPropertyModifier__6B_;
  DestructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>
            ((FComponentState *)(this->CachedComponentState).AllocatorInstance.Data,
             (this->CachedComponentState).ArrayNum);
  pFVar1 = (this->CachedComponentState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UMovieGraphRenderPropertyModifier::FActorState,int>
            ((FActorState *)(this->CachedActorState).AllocatorInstance.Data,
             (this->CachedActorState).ArrayNum);
  pFVar1 = (this->CachedActorState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphCollectionModifier__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UMovieGraphModifierBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb8720

void * __thiscall
UMovieGraphRendererBase::_scalar_deleting_destructor_(UMovieGraphRendererBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphRendererBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb8780

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UMovieGraphSequenceDataSource::_scalar_deleting_destructor_
          (UMovieGraphSequenceDataSource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieGraphSequenceDataSource__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieGraphDataSourceBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb8800

void * __thiscall
UMovieGraphSettingNode::_scalar_deleting_destructor_(UMovieGraphSettingNode *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphSettingNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14dcb8860

void * __thiscall
UMovieGraphTimeStepBase::_scalar_deleting_destructor_(UMovieGraphTimeStepBase *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieGraphTimeStepBase__6B_;
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

// `scalar_deleting_destructor' @ 14dcb88c0

void * __thiscall
UMovieRenderGraphEditorSettings::_scalar_deleting_destructor_
          (UMovieRenderGraphEditorSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieRenderGraphEditorSettings__6B_;
  FMovieGraphPostRenderSettings::~FMovieGraphPostRenderSettings(&this->PostRenderSettings);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphApplyCVarPresetNode @ 14dcc2f90

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphApplyCVarPresetNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphApplyViewportLookNode @ 14dcc2fa0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphApplyViewportLookNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphAudioOutputNode @ 14dcc2fb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphAudioOutputNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphBranchNode @ 14dcc2fc0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphBranchNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphBurnInNode @ 14dcc2fd0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphBurnInNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphDataTypes @ 14dcc2fe0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphDataTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphDefaultAudioRenderer @ 14dcc2ff0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphDefaultAudioRenderer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphDefaultRenderer @ 14dcc3000

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphDefaultRenderer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphEdge @ 14dcc3010

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphEdge(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphFilenameResolveParams @ 14dcc3020

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphFilenameResolveParams(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphLinearTimeStep @ 14dcc3030

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphLinearTimeStep(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphNode @ 14dcc3040

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphPin @ 14dcc3050

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphPin(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphPipeline @ 14dcc3060

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphPipeline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphProjectSettings @ 14dcc3070

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphProjectSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphQuickRenderSettings @ 14dcc3080

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphQuickRenderSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphRenderLayerSubsystem @ 14dcc3090

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphRenderLayerSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieGraphSequenceDataSource @ 14dcc30a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieGraphSequenceDataSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieRenderGraphEditorSettings @ 14dcc30b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieRenderGraphEditorSettings(void)

{
  return;
}

// RenameSimilarlyNamedResolutionsLoop @ 14dcdf540

void __cdecl
RenameSimilarlyNamedResolutionsLoop
          (TTuple<FName,int> *param_1,
          TArray<FMovieGraphNamedResolution,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FName *pFVar2;
  FName FVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  FName *this;
  FName local_res8;
  TTuple<FName,int> *local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = *(int *)&param_1->field_0x8;
  do {
    if (iVar1 < 2) {
      return;
    }
    pFVar2 = (FName *)(param_2->AllocatorInstance).Data;
    this = pFVar2 + (longlong)param_2->ArrayNum * 4;
    if (pFVar2 != this) {
      FVar3.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
      FVar3.Number = *(uint *)&param_1->field_0x4;
      do {
        this = this + -4;
        if (*this == FVar3) {
          if (this == (FName *)0x0) goto LAB_14dcdf596;
          goto LAB_14dcdf5b3;
        }
      } while (pFVar2 != this);
    }
    this = (FName *)0x0;
LAB_14dcdf596:
    local_res18 = param_1;
    bVar4 = `RenameSimilarlyNamedResolutionsLoop'::__l5::<lambda_2>::operator()(&local_res18);
    if (!bVar4) {
      return;
    }
LAB_14dcdf5b3:
    FName::ToString(this,&local_38);
    FString::PrintfImpl(&local_58,L"%s_%d");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar7.Data = local_58.Data.AllocatorInstance.Data;
    }
    FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    while( true ) {
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      pFVar6 = pFVar5 + (longlong)param_2->ArrayNum * 0x20;
      if (pFVar5 == pFVar6) break;
      while ((*(uint *)pFVar5 != local_res8.ComparisonIndex.Value.Value ||
             (*(uint *)(pFVar5 + 4) != local_res8.Number))) {
        pFVar5 = pFVar5 + 0x20;
        if (pFVar5 == pFVar6) goto LAB_14dcdf673;
      }
      FName::ToString(this,&local_28);
      FString::PrintfImpl(&local_48,L"%s_%d");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
      }
      FName::FName(&local_res20,(wchar_t *)FVar7.Data);
      local_res8 = local_res20;
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
      }
    }
LAB_14dcdf673:
    *(int *)&param_1->field_0x8 = *(int *)&param_1->field_0x8 + -1;
    *this = local_res8;
    iVar1 = *(int *)&param_1->field_0x8;
  } while( true );
}

// Z_Construct_UClass_UMovieGraphApplyCVarPresetNode_NoRegister @ 14dced040

UClass * __cdecl Z_Construct_UClass_UMovieGraphApplyCVarPresetNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphApplyCVarPresetNode",
               &Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton,
               UMovieGraphApplyCVarPresetNode::StaticRegisterNativesUMovieGraphApplyCVarPresetNode,
               200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphApplyCVarPresetNode>,
               InternalVTableHelperCtorCaller<UMovieGraphApplyCVarPresetNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphApplyViewportLookNode_NoRegister @ 14dced100

UClass * __cdecl Z_Construct_UClass_UMovieGraphApplyViewportLookNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphApplyViewportLookNode",
               &Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton,
               UMovieGraphApplyViewportLookNode::
               StaticRegisterNativesUMovieGraphApplyViewportLookNode,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphApplyViewportLookNode>,
               InternalVTableHelperCtorCaller<UMovieGraphApplyViewportLookNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphAudioOutputNode_NoRegister @ 14dced1c0

UClass * __cdecl Z_Construct_UClass_UMovieGraphAudioOutputNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphAudioOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton,
               UMovieGraphAudioOutputNode::StaticRegisterNativesUMovieGraphAudioOutputNode,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphAudioOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphAudioOutputNode>,local_res8,
               UMovieGraphFileOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphBranchNode_NoRegister @ 14dced280

UClass * __cdecl Z_Construct_UClass_UMovieGraphBranchNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBranchNode",
               &Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton,
               UMovieGraphBranchNode::StaticRegisterNativesUMovieGraphBranchNode,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphBranchNode>,
               InternalVTableHelperCtorCaller<UMovieGraphBranchNode>,local_res8,
               UMovieGraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBranchNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphBurnInNode_NoRegister @ 14dced340

UClass * __cdecl Z_Construct_UClass_UMovieGraphBurnInNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBurnInNode",
               &Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton,
               UMovieGraphBurnInNode::StaticRegisterNativesUMovieGraphBurnInNode,0x1c8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphBurnInNode>,
               InternalVTableHelperCtorCaller<UMovieGraphBurnInNode>,local_res8,
               UMovieGraphWidgetRendererBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBurnInNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer_NoRegister @ 14dced400

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorLayer",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton,
               UMovieGraphConditionGroupQuery_ActorLayer::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorLayer,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorLayer>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorLayer.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName_NoRegister @ 14dced4c0

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton,
               UMovieGraphConditionGroupQuery_ActorName::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorName,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorName>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorName.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName_NoRegister @ 14dced580

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorTagName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.
                InnerSingleton,
               UMovieGraphConditionGroupQuery_ActorTagName::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorTagName,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorTagName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorTagName>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorTagName.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType_NoRegister @ 14dced640

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ActorType",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton,
               UMovieGraphConditionGroupQuery_ActorType::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorType,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ActorType>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ActorType>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ActorType.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor_NoRegister @ 14dced700

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_Actor",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton,
               UMovieGraphConditionGroupQuery_Actor::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_Actor,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphConditionGroupQuery_Actor>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Actor>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_NoRegister @ 14dced7c0

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ComponentTagName",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.
                InnerSingleton,
               UMovieGraphConditionGroupQuery_ComponentTagName::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentTagName,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ComponentTagName>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentTagName>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentTagName.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_NoRegister @ 14dced880

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_ComponentType",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.
                InnerSingleton,
               UMovieGraphConditionGroupQuery_ComponentType::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentType,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_ComponentType>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_ComponentType>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_ComponentType.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer_NoRegister @ 14dced940

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_DataLayer",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton,
               UMovieGraphConditionGroupQuery_DataLayer::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_DataLayer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_DataLayer>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_DataLayer>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_DataLayer.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder_NoRegister @ 14dceda00

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_EditorFolder",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.
                InnerSingleton,
               UMovieGraphConditionGroupQuery_EditorFolder::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_EditorFolder,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_EditorFolder>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_EditorFolder>,
               local_res8,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_EditorFolder.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_NoRegister @ 14dcedac0

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_IsSpawnable",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton
               ,UMovieGraphConditionGroupQuery_IsSpawnable::
                StaticRegisterNativesUMovieGraphConditionGroupQuery_IsSpawnable,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQuery_IsSpawnable>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_IsSpawnable>,local_res8
               ,UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_IsSpawnable.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel_NoRegister @ 14dcedb80

UClass * __cdecl Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_Sublevel",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton,
               UMovieGraphConditionGroupQuery_Sublevel::
               StaticRegisterNativesUMovieGraphConditionGroupQuery_Sublevel,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphConditionGroupQuery_Sublevel>
               ,InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Sublevel>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Sublevel.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphDefaultAudioRenderer_NoRegister @ 14dcedc40

UClass * __cdecl Z_Construct_UClass_UMovieGraphDefaultAudioRenderer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDefaultAudioRenderer",
               &Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton,
               UMovieGraphDefaultAudioRenderer::StaticRegisterNativesUMovieGraphDefaultAudioRenderer
               ,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphDefaultAudioRenderer>,
               InternalVTableHelperCtorCaller<UMovieGraphDefaultAudioRenderer>,local_res8,
               UMovieGraphAudioRendererBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphDefaultRenderer_NoRegister @ 14dcedd00

UClass * __cdecl Z_Construct_UClass_UMovieGraphDefaultRenderer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMovieGraphDefaultRenderer::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDefaultRenderer",
               &Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton,
               UMovieGraphDefaultRenderer::StaticRegisterNativesUMovieGraphDefaultRenderer,0x260,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphDefaultRenderer>,
               InternalVTableHelperCtorCaller<UMovieGraphDefaultRenderer>,local_res8,
               UMovieGraphRendererBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDefaultRenderer.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_NoRegister @ 14dceddc0

UClass * __cdecl Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEvaluationNodeInjector",
               &Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton,
               UMovieGraphEvaluationNodeInjector::
               StaticRegisterNativesUMovieGraphEvaluationNodeInjector,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphEvaluationNodeInjector>,
               InternalVTableHelperCtorCaller<UMovieGraphEvaluationNodeInjector>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphLinearTimeStep_NoRegister @ 14dcede80

UClass * __cdecl Z_Construct_UClass_UMovieGraphLinearTimeStep_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphLinearTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton,
               UMovieGraphLinearTimeStep::StaticRegisterNativesUMovieGraphLinearTimeStep,400,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphLinearTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphLinearTimeStep>,local_res8,
               UMovieGraphCoreTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphMaterialModifier_NoRegister @ 14dcedf40

UClass * __cdecl Z_Construct_UClass_UMovieGraphMaterialModifier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMaterialModifier",
               &Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton,
               UMovieGraphMaterialModifier::StaticRegisterNativesUMovieGraphMaterialModifier,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphMaterialModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphMaterialModifier>,local_res8,
               UMovieGraphCollectionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMaterialModifier.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphOutputBurnInNode_NoRegister @ 14dcee000

UClass * __cdecl Z_Construct_UClass_UMovieGraphOutputBurnInNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphOutputBurnInNode",
               &Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton,
               UMovieGraphOutputBurnInNode::StaticRegisterNativesUMovieGraphOutputBurnInNode,0x220,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphOutputBurnInNode>,
               InternalVTableHelperCtorCaller<UMovieGraphOutputBurnInNode>,local_res8,
               UMovieGraphBurnInNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphOutputBurnInNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphPipeline_NoRegister @ 14dcee0c0

UClass * __cdecl Z_Construct_UClass_UMovieGraphPipeline_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPipeline",
               &Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton,
               UMovieGraphPipeline::StaticRegisterNativesUMovieGraphPipeline,0x288,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphPipeline>,
               InternalVTableHelperCtorCaller<UMovieGraphPipeline>,local_res8,
               UMoviePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphPostRenderNode_NoRegister @ 14dcee180

UClass * __cdecl Z_Construct_UClass_UMovieGraphPostRenderNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPostRenderNode",
               &Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton,
               UMovieGraphPostRenderNode::StaticRegisterNativesUMovieGraphPostRenderNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphPostRenderNode>,
               InternalVTableHelperCtorCaller<UMovieGraphPostRenderNode>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphProjectSettings_NoRegister @ 14dcee240

UClass * __cdecl Z_Construct_UClass_UMovieGraphProjectSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphProjectSettings",
               &Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton,
               UMovieGraphProjectSettings::StaticRegisterNativesUMovieGraphProjectSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"MovieRenderPipeline",InternalConstructor<UMovieGraphProjectSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphQuickRenderSettings_NoRegister @ 14dcee300

UClass * __cdecl Z_Construct_UClass_UMovieGraphQuickRenderSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphQuickRenderSettings",
               &Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton,
               UMovieGraphQuickRenderSettings::StaticRegisterNativesUMovieGraphQuickRenderSettings,
               0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphQuickRenderSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphQuickRenderSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphRenderPropertyModifier_NoRegister @ 14dcee3b0

UClass * __cdecl Z_Construct_UClass_UMovieGraphRenderPropertyModifier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPropertyModifier",
               &Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton,
               UMovieGraphRenderPropertyModifier::
               StaticRegisterNativesUMovieGraphRenderPropertyModifier,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRenderPropertyModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPropertyModifier>,local_res8,
               UMovieGraphCollectionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton;
}

// Z_Construct_UClass_UMovieGraphSequenceDataSource_NoRegister @ 14dcee470

UClass * __cdecl Z_Construct_UClass_UMovieGraphSequenceDataSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSequenceDataSource",
               &Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton,
               UMovieGraphSequenceDataSource::StaticRegisterNativesUMovieGraphSequenceDataSource,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphSequenceDataSource>,
               InternalVTableHelperCtorCaller<UMovieGraphSequenceDataSource>,local_res8,
               UMovieGraphDataSourceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton;
}

// Z_Construct_UClass_UMovieRenderGraphEditorSettings_NoRegister @ 14dcee530

UClass * __cdecl Z_Construct_UClass_UMovieRenderGraphEditorSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieRenderGraphEditorSettings",
               &Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton,
               UMovieRenderGraphEditorSettings::StaticRegisterNativesUMovieRenderGraphEditorSettings
               ,0x118,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieRenderGraphEditorSettings>,
               InternalVTableHelperCtorCaller<UMovieRenderGraphEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieRenderGraphEditorSettings.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderButtonMode @ 14dcee5f0

UEnum * __cdecl Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderButtonMode(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderButtonMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderButtonMode.InnerSingleton;
}

// Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderViewportLookFlags @ 14dcee630

UEnum * __cdecl
Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderViewportLookFlags(void)

{
  if (Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.InnerSingleton,
               &Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphQuickRenderViewportLookFlags_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMovieGraphQuickRenderViewportLookFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams @ 14dcee670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphFilenameResolveParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphFilenameResolveParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphFilenameResolveParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphFilenameResolveParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphResolveArgs @ 14dcee6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphResolveArgs(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphResolveArgs.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphResolveArgs.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphResolveArgs_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphResolveArgs.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphResolveArgs.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieGraphTokenResolveContext @ 14dcee770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieGraphTokenResolveContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphTokenResolveContext.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieGraphTokenResolveContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieGraphTokenResolveContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieGraphTokenResolveContext.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieGraphTokenResolveContext.InnerSingleton;
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

// ActiveWriters'' @ 15045ddc0

void __cdecl `dynamic_atexit_destructor_for_'UMovieGraphAudioOutputNode::ActiveWriters__(void)

{
  DestructItems<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int>
            ((TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_> *)
             UMovieGraphAudioOutputNode::ActiveWriters.AllocatorInstance.Data,
             UMovieGraphAudioOutputNode::ActiveWriters.ArrayNum);
  if (UMovieGraphAudioOutputNode::ActiveWriters.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(UMovieGraphAudioOutputNode::ActiveWriters.AllocatorInstance.Data);
    return;
  }
  return;
}

// AlreadyWrittenSegments'' @ 15045de00

void __cdecl
`dynamic_atexit_destructor_for_'UMovieGraphAudioOutputNode::AlreadyWrittenSegments__(void)

{
  UMovieGraphAudioOutputNode::AlreadyWrittenSegments.HashSize = 0;
  if (UMovieGraphAudioOutputNode::AlreadyWrittenSegments.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)UMovieGraphAudioOutputNode::AlreadyWrittenSegments.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UMovieGraphAudioOutputNode::AlreadyWrittenSegments.Elements);
  return;
}

// DefaultBurnInWidgetAsset'' @ 15045de40

void __cdecl `dynamic_atexit_destructor_for_'UMovieGraphBurnInNode::DefaultBurnInWidgetAsset__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphBurnInNode::DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data;
  if (UMovieGraphBurnInNode::DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphBurnInNode::DefaultBurnInWidgetAsset.Data.AllocatorInstance.Data !=
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

// DefaultPreviewWidgetAsset'' @ 15045de60

void __cdecl `dynamic_atexit_destructor_for_'UMovieGraphPipeline::DefaultPreviewWidgetAsset__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphPipeline::DefaultPreviewWidgetAsset.Data.AllocatorInstance.Data;
  if (UMovieGraphPipeline::DefaultPreviewWidgetAsset.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphPipeline::DefaultPreviewWidgetAsset.Data.AllocatorInstance.Data !=
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

// GlobalsPinNameString'' @ 15045de80

void __cdecl `dynamic_atexit_destructor_for_'UMovieGraphNode::GlobalsPinNameString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data;
  if (UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data !=
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

// OutputExtension'' @ 15045dea0

void __cdecl `dynamic_atexit_destructor_for_'UMovieGraphAudioOutputNode::OutputExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphAudioOutputNode::OutputExtension.Data.AllocatorInstance.Data;
  if (UMovieGraphAudioOutputNode::OutputExtension.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphAudioOutputNode::OutputExtension.Data.AllocatorInstance.Data !=
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

// QuickRenderSettingsPackagePath'' @ 15045dec0

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

// RendererName'' @ 15045dee0

void __cdecl `dynamic_atexit_destructor_for_'UMovieGraphAudioOutputNode::RendererName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphAudioOutputNode::RendererName.Data.AllocatorInstance.Data;
  if (UMovieGraphAudioOutputNode::RendererName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphAudioOutputNode::RendererName.Data.AllocatorInstance.Data !=
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

// RendererName'' @ 15045df00

void __cdecl `dynamic_atexit_destructor_for_'UMovieGraphBurnInNode::RendererName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UMovieGraphBurnInNode::RendererName.Data.AllocatorInstance.Data;
  if (UMovieGraphBurnInNode::RendererName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UMovieGraphBurnInNode::RendererName.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CVarNumWarmUpFramesWithTemporalSampling'' @ 15045df20

void __cdecl _dynamic_atexit_destructor_for__CVarNumWarmUpFramesWithTemporalSampling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNumWarmUpFramesWithTemporalSampling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWaveOutputDelay'' @ 15045df40

void __cdecl _dynamic_atexit_destructor_for__CVarWaveOutputDelay__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarWaveOutputDelay);
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045df60

void __cdecl
`UMovieGraphConditionGroupQueryBase::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045df6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045df80

void __cdecl
`UMovieGraphConditionGroupQuery_Actor::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045df8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045dfa0

void __cdecl
`UMovieGraphConditionGroupQuery_ActorLayer::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045dfaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045dfc0

void __cdecl
`UMovieGraphConditionGroupQuery_ActorName::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045dfcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045dfe0

void __cdecl
`UMovieGraphConditionGroupQuery_ActorTagName::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045dfef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045e000

void __cdecl
`UMovieGraphConditionGroupQuery_ActorType::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045e020

void __cdecl
`UMovieGraphConditionGroupQuery_ComponentTagName::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e02f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045e040

void __cdecl
`UMovieGraphConditionGroupQuery_ComponentType::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e04f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045e060

void __cdecl
`UMovieGraphConditionGroupQuery_DataLayer::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045e080

void __cdecl
`UMovieGraphConditionGroupQuery_EditorFolder::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045e0a0

void __cdecl
`UMovieGraphConditionGroupQuery_IsSpawnable::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayName'' @ 15045e0c0

void __cdecl
`UMovieGraphConditionGroupQuery_Sublevel::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  if (::DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e0cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'HoldoutModifierLabel'' @ 15045e0e0

void __cdecl
`UMovieGraphRenderPropertyModifier::ValidateProjectSettings'::__l2::
_dynamic_atexit_destructor_for__HoldoutModifierLabel__(void)

{
  if (HoldoutModifierLabel.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*HoldoutModifierLabel.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ModeToInternalName'' @ 15045e100

void __cdecl
`UMovieGraphQuickRenderSettings::GetSavedQuickRenderModeSettings'::__l2::
_dynamic_atexit_destructor_for__ModeToInternalName__(void)

{
  ModeToInternalName._72_4_ = 0;
  if (ModeToInternalName._64_8_ != 0) {
    FMemory::Free((void *)ModeToInternalName._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EMovieGraphQuickRenderMode,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EMovieGraphQuickRenderMode,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ModeToInternalName);
  return;
}

// `dynamic_atexit_destructor_for_'ModifierName'' @ 15045e140

void __cdecl
`UMovieGraphCollectionModifier::GetModifierName'::__l2::
_dynamic_atexit_destructor_for__ModifierName__(void)

{
  if (ModifierName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e14f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ModifierName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ModifierName'' @ 15045e160

void __cdecl
`UMovieGraphMaterialModifier::GetModifierName'::__l2::_dynamic_atexit_destructor_for__ModifierName__
          (void)

{
  if (ModifierName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e16f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ModifierName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ModifierName'' @ 15045e180

void __cdecl
`UMovieGraphRenderPropertyModifier::GetModifierName'::__l2::
_dynamic_atexit_destructor_for__ModifierName__(void)

{
  if (ModifierName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045e18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ModifierName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TrueValue'' @ 15045e1a0

void __cdecl
`UMovieGraphBranchNode::EvaluatePinsToFollow'::__l2::_dynamic_atexit_destructor_for__TrueValue__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TrueValue.Data.AllocatorInstance.Data;
  if (TrueValue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TrueValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 15058c840

bool __thiscall
``UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>
::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6062323587862233034>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6062323587862233034>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cc50

bool __thiscall `RenameSimilarlyNamedResolutionsLoop'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3368191856935436342>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3368191856935436342>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058ccbe;
    }
  }
  bVar2 = false;
LAB_15058ccbe:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

