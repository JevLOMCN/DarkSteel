// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 407

// `dynamic_initializer_for_'LogDatasmithContent'' @ 141419180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDatasmithContent__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDatasmithContent,L"LogDatasmithContent",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDatasmithContent__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDatasmithContent'' @ 1414191c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantDatasmithContent__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DatasmithContent";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DatasmithContent",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDatasmithContentModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAdditionalData_h__Script_DatasmithContent_164637389'' @ 141419210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAdditionalData_h__Script_DatasmithContent_164637389__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAdditionalData_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h__Script_DatasmithContent_2016612560'' @ 141419250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h__Script_DatasmithContent_2016612560__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h__Script_DatasmithContent_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h__Script_DatasmithContent_3164895541'' @ 1414192a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h__Script_DatasmithContent_3164895541__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h__Script_DatasmithContent_Statics
             ::ClassInfo,0xe,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h__Script_DatasmithContent_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h__Script_DatasmithContent_1099741990'' @ 1414192f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h__Script_DatasmithContent_1099741990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h__Script_DatasmithContent_1500359051'' @ 141419330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h__Script_DatasmithContent_1500359051__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h__Script_DatasmithContent_2476861791'' @ 141419370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h__Script_DatasmithContent_2476861791__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h__Script_DatasmithContent_203111275'' @ 1414193b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h__Script_DatasmithContent_203111275__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h__Script_DatasmithContent_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h__Script_DatasmithContent_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h__Script_DatasmithContent_Statics
             ::EnumInfo,9);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportedSequencesActor_h__Script_DatasmithContent_2143530291'' @ 141419400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportedSequencesActor_h__Script_DatasmithContent_2143530291__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportedSequencesActor_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h__Script_DatasmithContent_549699529'' @ 141419440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h__Script_DatasmithContent_549699529__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h__Script_DatasmithContent_4074256365'' @ 141419480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h__Script_DatasmithContent_4074256365__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithActorTemplate_h__Script_DatasmithContent_2725766729'' @ 1414194c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithActorTemplate_h__Script_DatasmithContent_2725766729__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithActorTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithAreaLightActorTemplate_h__Script_DatasmithContent_1087236798'' @ 141419500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithAreaLightActorTemplate_h__Script_DatasmithContent_1087236798__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithAreaLightActorTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h__Script_DatasmithContent_325568061'' @ 141419540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h__Script_DatasmithContent_325568061__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h__Script_DatasmithContent_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h__Script_DatasmithContent_731192937'' @ 141419590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h__Script_DatasmithContent_731192937__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h__Script_DatasmithContent_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithDecalComponentTemplate_h__Script_DatasmithContent_2246989468'' @ 1414195e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithDecalComponentTemplate_h__Script_DatasmithContent_2246989468__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithDecalComponentTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h__Script_DatasmithContent_2352067894'' @ 141419620

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h__Script_DatasmithContent_2352067894__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h__Script_DatasmithContent_1695923985'' @ 141419660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h__Script_DatasmithContent_1695923985__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h__Script_DatasmithContent_921858078'' @ 1414196a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h__Script_DatasmithContent_921858078__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithMaterialInstanceTemplate_h__Script_DatasmithContent_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h__Script_DatasmithContent_3479236616'' @ 1414196f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h__Script_DatasmithContent_3479236616__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h__Script_DatasmithContent_4039347831'' @ 141419730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h__Script_DatasmithContent_4039347831__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h__Script_DatasmithContent_1810691549'' @ 141419770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h__Script_DatasmithContent_1810691549__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSceneComponentTemplate_h__Script_DatasmithContent_1835063469'' @ 1414197b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSceneComponentTemplate_h__Script_DatasmithContent_1835063469__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSceneComponentTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h__Script_DatasmithContent_95697327'' @ 1414197f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h__Script_DatasmithContent_95697327__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h__Script_DatasmithContent_120088393'' @ 141419830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h__Script_DatasmithContent_120088393__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h__Script_DatasmithContent_485705316'' @ 141419870

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h__Script_DatasmithContent_485705316__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h__Script_DatasmithContent_2561725636'' @ 1414198b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h__Script_DatasmithContent_2561725636__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/DatasmithContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h__Script_DatasmithContent_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshTemplate_h__Script_DatasmithContent_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_DatasmithContent'' @ 141419900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_DatasmithContent__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xc6a304e5;
  local_res8[0].DeclarationsHash = 0x15333783;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_DatasmithContent,L"/Script/DatasmithContent",
             &Z_Registration_Info_UPackage__Script_DatasmithContent,local_res8);
  return;
}

// Z_Construct_UClass_UDatasmithScene @ 14e2ea250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithScene(void)

{
  if (Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton,
               &Z_Construct_UClass_UDatasmithScene_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithPointLightComponentTemplate @ 14e2ea390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithPointLightComponentTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithCineCameraComponentTemplate @ 14e2ea4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithCineCameraComponentTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate @ 14e2ea530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate @ 14e2ea5b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraFocusSettingsTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithCameraFocusSettingsTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraFocusSettingsTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithCameraFocusSettingsTemplate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate @ 14e2ea630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraLensSettingsTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithCameraLensSettingsTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraLensSettingsTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithCameraLensSettingsTemplate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate @ 14e2ea6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithPostProcessSettingsTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithPostProcessSettingsTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithPostProcessSettingsTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithPostProcessSettingsTemplate.InnerSingleton;
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

// NewStructOps @ 14e2ea730

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithCameraFilmbackSettingsTemplate,&UE::CoreUObject::Private::Construct<FDatasmithCameraFilmbackSettingsTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithCameraFilmbackSettingsTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithCameraFilmbackSettingsTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithCameraFilmbackSettingsTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e2ea8f0

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithCameraLensSettingsTemplate,&UE::CoreUObject::Private::Construct<FDatasmithCameraLensSettingsTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithCameraLensSettingsTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithCameraLensSettingsTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithCameraLensSettingsTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate @ 14e2ea930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 14e2ea970

void __cdecl
Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 1;
  return;
}

// NewProp_bUnbound_SetBit @ 14e2ea980

void __cdecl
Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 2;
  return;
}

// NewStructOps @ 14e2ea990

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithCameraFocusSettingsTemplate,&UE::CoreUObject::Private::Construct<FDatasmithCameraFocusSettingsTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithCameraFocusSettingsTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithCameraFocusSettingsTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithCameraFocusSettingsTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverride_WhiteTemp_SetBit @ 14e2ea9d0

void __cdecl
Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::
NewProp_bOverride_WhiteTemp_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bOverride_ColorSaturation_SetBit @ 14e2ea9e0

void __cdecl
Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::
NewProp_bOverride_ColorSaturation_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bOverride_VignetteIntensity_SetBit @ 14e2ea9f0

void __cdecl
Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::
NewProp_bOverride_VignetteIntensity_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bOverride_AutoExposureMethod_SetBit @ 14e2eaa00

void __cdecl
Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::
NewProp_bOverride_AutoExposureMethod_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// NewProp_bOverride_CameraISO_SetBit @ 14e2eaa10

void __cdecl
Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::
NewProp_bOverride_CameraISO_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x10;
  return;
}

// NewProp_bOverride_CameraShutterSpeed_SetBit @ 14e2eaa20

void __cdecl
Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::
NewProp_bOverride_CameraShutterSpeed_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x20;
  return;
}

// NewProp_bOverride_DepthOfFieldFstop_SetBit @ 14e2eaa30

void __cdecl
Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::
NewProp_bOverride_DepthOfFieldFstop_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) | 1;
  return;
}

// NewStructOps @ 14e2eab00

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithPostProcessSettingsTemplate,&UE::CoreUObject::Private::Construct<FDatasmithPostProcessSettingsTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithPostProcessSettingsTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithPostProcessSettingsTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithPostProcessSettingsTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_DatasmithContent @ 14e2eabc0

UPackage * __cdecl Z_Construct_UPackage__Script_DatasmithContent(void)

{
  if (Z_Registration_Info_UPackage__Script_DatasmithContent.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_DatasmithContent.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_DatasmithContent.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithSceneComponentTemplate @ 14e2ead20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithSceneComponentTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.OuterSingleton;
}

// NewProp_bVisible_SetBit @ 14e2ead60

void __cdecl
Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// NewProp_bCastShadow_SetBit @ 14e2ead70

void __cdecl
Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bCastShadow_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
  return;
}

// Z_Construct_UClass_UDatasmithDecalComponentTemplate @ 14e2eb2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithDecalComponentTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithSkyLightComponentTemplate @ 14e2eb3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithSkyLightComponentTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithAssetImportData @ 14e2eb4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithAssetImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithAssetImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithCADImportSceneData @ 14e2eb530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithCADImportSceneData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithDeltaGenAssetImportData @ 14e2eb570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithDeltaGenAssetImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithDeltaGenSceneImportData @ 14e2eb5b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithDeltaGenSceneImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithFBXSceneImportData @ 14e2eb5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithFBXSceneImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithGLTFSceneImportData @ 14e2eb630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithGLTFSceneImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithMDLSceneImportData @ 14e2eb670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithMDLSceneImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithSceneImportData @ 14e2eb6b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithSceneImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithSceneImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshCADImportData @ 14e2eb6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshCADImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData @ 14e2eb730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshImportData @ 14e2eb770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithTranslatedSceneImportData @ 14e2eb7b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithTranslatedSceneImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithVREDAssetImportData @ 14e2eb7f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithVREDAssetImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithVREDSceneImportData @ 14e2eb830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithVREDSceneImportData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDatasmithAssetImportOptions @ 14e2eb870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithAssetImportOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithAssetImportOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithAssetImportOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithAssetImportOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithAssetImportOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDatasmithImportBaseOptions @ 14e2eb8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithImportBaseOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithImportBaseOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithImportBaseOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithImportBaseOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithImportBaseOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions @ 14e2eb970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticMeshImportOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithStaticMeshImportOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticMeshImportOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithStaticMeshImportOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDatasmithTessellationOptions @ 14e2eb9f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithTessellationOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithTessellationOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithTessellationOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithTessellationOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithTessellationOptions.InnerSingleton;
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

// NewStructOps @ 14e2eba70

void * __cdecl Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithImportInfo,&UE::CoreUObject::Private::Construct<FDatasmithImportInfo>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithImportInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDatasmithSpotLightComponentTemplate @ 14e2ebb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithSpotLightComponentTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate @ 14e2ebc70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton;
}

// Z_Construct_UClass_ADatasmithSceneActor @ 14e2ebcb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADatasmithSceneActor(void)

{
  if (Z_Registration_Info_UClass_ADatasmithSceneActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADatasmithSceneActor.OuterSingleton,
               &Z_Construct_UClass_ADatasmithSceneActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADatasmithSceneActor.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithLandscapeTemplate @ 14e2ebd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithLandscapeTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton;
}

// NewProp_bGenerateLightmapUVs_SetBit @ 14e2ebf00

void __cdecl
Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bColorizeMaterials_SetBit @ 14e2ebfd0

void __cdecl
Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// NewProp_bMergeNodes_SetBit @ 14e2ec0a0

void __cdecl
Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bOptimizeDuplicatedNodes_SetBit @ 14e2ec0b0

void __cdecl
Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::
NewProp_bOptimizeDuplicatedNodes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bRemoveInvisibleNodes_SetBit @ 14e2ec0c0

void __cdecl
Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// NewProp_bSimplifyNodeHierarchy_SetBit @ 14e2ec0d0

void __cdecl
Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4b) = 1;
  return;
}

// NewProp_bImportVar_SetBit @ 14e2ec0e0

void __cdecl
Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bImportPos_SetBit @ 14e2ec0f0

void __cdecl
Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// Z_Construct_UClass_UDatasmithActorTemplate @ 14e2ec100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithActorTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithActorTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithActorTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithActorTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithActorTemplate.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithObjectTemplate @ 14e2ec140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithObjectTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithObjectTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithObjectTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithObjectTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithObjectTemplate.OuterSingleton;
}

// NewProp_bImportTml_SetBit @ 14e2ec180

void __cdecl
Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bMergeNodes_SetBit @ 14e2ec250

void __cdecl
Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bOptimizeDuplicatedNodes_SetBit @ 14e2ec260

void __cdecl
Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bImportMats_SetBit @ 14e2ec270

void __cdecl
Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  return;
}

// NewProp_bImportVar_SetBit @ 14e2ec280

void __cdecl
Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bCleanVar_SetBit @ 14e2ec290

void __cdecl
Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// NewProp_bImportLightInfo_SetBit @ 14e2ec2a0

void __cdecl
Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bImportClipInfo_SetBit @ 14e2ec2b0

void __cdecl
Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UClass_UDatasmithAreaLightActorTemplate @ 14e2ec500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithAreaLightActorTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.OuterSingleton;
}

// NewProp_bUseIESBrightness_SetBit @ 14e2ec540

void __cdecl
Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_bUseIESBrightness_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Z_Construct_UClass_UDatasmithAssetUserData_NoRegister @ 14e2ec610

UClass * __cdecl Z_Construct_UClass_UDatasmithAssetUserData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAssetUserData",
               &Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton,
               UDatasmithAssetUserData::StaticRegisterNativesUDatasmithAssetUserData,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithAssetUserData>
               ,InternalVTableHelperCtorCaller<UDatasmithAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithLightComponentTemplate @ 14e2ec850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithLightComponentTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton;
}

// NewProp_bVisible_SetBit @ 14e2ec890

void __cdecl
Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x30) = *(byte *)((longlong)param_1 + 0x30) | 1;
  return;
}

// NewProp_CastShadows_SetBit @ 14e2ec8a0

void __cdecl
Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 1;
  return;
}

// NewProp_bUseTemperature_SetBit @ 14e2ec8b0

void __cdecl
Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 2;
  return;
}

// NewProp_bUseIESBrightness_SetBit @ 14e2ec8c0

void __cdecl
Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 4;
  return;
}

// Z_Construct_UClass_UDatasmithAssetUserData @ 14e2ec990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithAssetUserData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithAssetUserData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithAssetUserData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithAssetUserData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithAssetUserData.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e2eced0

void * __thiscall
FDatasmithContentModule::_scalar_deleting_destructor_(FDatasmithContentModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TempDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UClass_UDatasmithContentBlueprintLibrary @ 14e2ed340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithContentBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithCineCameraActorTemplate @ 14e2ed380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithCineCameraActorTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate @ 14e2ed3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate.
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

// NewProp_bEnableLookAtTracking_SetBit @ 14e2ed440

void __cdecl
Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::
NewProp_bEnableLookAtTracking_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// NewProp_bAllowRoll_SetBit @ 14e2ed450

void __cdecl
Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::
NewProp_bAllowRoll_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 2;
  return;
}

// NewStructOps @ 14e2ed460

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithCameraLookatTrackingSettingsTemplate,&UE::CoreUObject::Private::Construct<FDatasmithCameraLookatTrackingSettingsTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithCameraLookatTrackingSettingsTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithCameraLookatTrackingSettingsTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithCameraLookatTrackingSettingsTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData @ 14e2ed590

UFunction * __cdecl
Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue @ 14e2ed690

UFunction * __cdecl
Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPartialMatchKey_SetBit @ 14e2ed6d0

void __cdecl
Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics::
NewProp_bPartialMatchKey_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey @ 14e2ed7a0

UFunction * __cdecl
Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPartialMatchKey_SetBit @ 14e2ed7e0

void __cdecl
Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics::
NewProp_bPartialMatchKey_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_ADatasmithImportedSequencesActor @ 14e2ed8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADatasmithImportedSequencesActor(void)

{
  if (Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.OuterSingleton,
               &Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.OuterSingleton;
}

// Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey @ 14e2ed8f0

UFunction * __cdecl
Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence @ 14e2ed930

UFunction * __cdecl Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDatasmithAdditionalData @ 14e2edb50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithAdditionalData(void)

{
  if (Z_Registration_Info_UClass_UDatasmithAdditionalData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithAdditionalData.OuterSingleton,
               &Z_Construct_UClass_UDatasmithAdditionalData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithAdditionalData.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithCustomActionBase @ 14e2edb90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithCustomActionBase(void)

{
  if (Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton,
               &Z_Construct_UClass_UDatasmithCustomActionBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton;
}

// Z_Construct_UClass_ADatasmithAreaLightActor @ 14e2edd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ADatasmithAreaLightActor(void)

{
  if (Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton,
               &Z_Construct_UClass_ADatasmithAreaLightActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape @ 14e2eddd0

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType @ 14e2ede10

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton;
}

// EDatasmithAreaLightActorShape_StaticEnum @ 14e2ede50

UEnum * __cdecl EDatasmithAreaLightActorShape_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape,
                       (UObject *)pUVar1,L"EDatasmithAreaLightActorShape");
  }
  return Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton;
}

// EDatasmithAreaLightActorType_StaticEnum @ 14e2ede90

UEnum * __cdecl EDatasmithAreaLightActorType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType,
                       (UObject *)pUVar1,L"EDatasmithAreaLightActorType");
  }
  return Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithCommonTessellationOptions @ 14e2eded0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithCommonTessellationOptions(void)

{
  if (Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.OuterSingleton,
               &Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithImportOptions @ 14e2edf10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithImportOptions(void)

{
  if (Z_Registration_Info_UClass_UDatasmithImportOptions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithImportOptions.OuterSingleton,
               &Z_Construct_UClass_UDatasmithImportOptions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithImportOptions.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithOptionsBase @ 14e2edf50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithOptionsBase(void)

{
  if (Z_Registration_Info_UClass_UDatasmithOptionsBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithOptionsBase.OuterSingleton,
               &Z_Construct_UClass_UDatasmithOptionsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithOptionsBase.OuterSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule @ 14e2edf90

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique @ 14e2edfd0

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy @ 14e2ee010

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy @ 14e2ee050

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax @ 14e2ee090

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin @ 14e2ee0d0

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality @ 14e2ee110

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene @ 14e2ee150

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithImportScene.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithImportScene.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithImportScene.InnerSingleton;
}

// Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy @ 14e2ee190

UEnum * __cdecl Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy(void)

{
  if (Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.InnerSingleton,
               &Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.InnerSingleton;
}

// NewProp_bUseIESBrightness_SetBit @ 14e2ee1d0

void __cdecl
Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x300) = 1;
  return;
}

// Z_Construct_UScriptStruct_FDatasmithReimportOptions @ 14e2ee1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithReimportOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithReimportOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithReimportOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithReimportOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithReimportOptions.InnerSingleton;
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

// EDatasmithImportSearchPackagePolicy_StaticEnum @ 14e2ee260

UEnum * __cdecl EDatasmithImportSearchPackagePolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy,
                       (UObject *)pUVar1,L"EDatasmithImportSearchPackagePolicy");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton;
}

// EDatasmithImportAssetConflictPolicy_StaticEnum @ 14e2ee2a0

UEnum * __cdecl EDatasmithImportAssetConflictPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy,
                       (UObject *)pUVar1,L"EDatasmithImportAssetConflictPolicy");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton;
}

// EDatasmithImportActorPolicy_StaticEnum @ 14e2ee2e0

UEnum * __cdecl EDatasmithImportActorPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy,
                       (UObject *)pUVar1,L"EDatasmithImportActorPolicy");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton;
}

// EDatasmithImportMaterialQuality_StaticEnum @ 14e2ee320

UEnum * __cdecl EDatasmithImportMaterialQuality_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality,
                       (UObject *)pUVar1,L"EDatasmithImportMaterialQuality");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton;
}

// EDatasmithImportLightmapMin_StaticEnum @ 14e2ee360

UEnum * __cdecl EDatasmithImportLightmapMin_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin,
                       (UObject *)pUVar1,L"EDatasmithImportLightmapMin");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton;
}

// EDatasmithImportLightmapMax_StaticEnum @ 14e2ee3a0

UEnum * __cdecl EDatasmithImportLightmapMax_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax,
                       (UObject *)pUVar1,L"EDatasmithImportLightmapMax");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e2ee3e0

void * __thiscall
IDatasmithContentModule::_scalar_deleting_destructor_(IDatasmithContentModule *this,uint param_1)

{
  *this = (IDatasmithContentModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EDatasmithImportScene_StaticEnum @ 14e2ee420

UEnum * __cdecl EDatasmithImportScene_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene,(UObject *)pUVar1,
                       L"EDatasmithImportScene");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithScene_NoRegister @ 14e2ee460

UClass * __cdecl Z_Construct_UClass_UDatasmithScene_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithScene.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithScene",
               &Z_Registration_Info_UClass_UDatasmithScene.InnerSingleton,
               UDatasmithScene::StaticRegisterNativesUDatasmithScene,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithScene>,
               InternalVTableHelperCtorCaller<UDatasmithScene>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithScene.InnerSingleton;
}

// EDatasmithCADStitchingTechnique_StaticEnum @ 14e2ee680

UEnum * __cdecl EDatasmithCADStitchingTechnique_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique,
                       (UObject *)pUVar1,L"EDatasmithCADStitchingTechnique");
  }
  return Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton;
}

// EDatasmithCADRetessellationRule_StaticEnum @ 14e2ee6c0

UEnum * __cdecl EDatasmithCADRetessellationRule_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule,
                       (UObject *)pUVar1,L"EDatasmithCADRetessellationRule");
  }
  return Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshTemplate @ 14e2ee790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithStaticMeshTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate @ 14e2ee7d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshBuildSettingsTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithMeshBuildSettingsTemplate.InnerSingleton
               ,&Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshBuildSettingsTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithMeshBuildSettingsTemplate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate @ 14e2ee850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate.InnerSingleton;
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

// NewStructOps @ 14e2ee8d0

void * __cdecl Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithAssetImportOptions,&UE::CoreUObject::Private::Construct<FDatasmithAssetImportOptions>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithAssetImportOptions>,&UE::CoreUObject::Private::Destruct<FDatasmithAssetImportOptions>,&UE::CoreUObject::Private::Copy<FDatasmithAssetImportOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate @ 14e2ee910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoTemplate.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoTemplate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate @ 14e2ee990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticMaterialTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithStaticMaterialTemplate.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticMaterialTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithStaticMaterialTemplate.InnerSingleton;
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

// NewProp_bUseMikkTSpace_SetBit @ 14e2eea10

void __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewProp_bUseMikkTSpace_SetBit
          (void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// NewProp_bRecomputeNormals_SetBit @ 14e2eea20

void __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::
NewProp_bRecomputeNormals_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 2;
  return;
}

// NewProp_bRecomputeTangents_SetBit @ 14e2eea30

void __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::
NewProp_bRecomputeTangents_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 4;
  return;
}

// NewProp_bRemoveDegenerates_SetBit @ 14e2eea40

void __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::
NewProp_bRemoveDegenerates_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 8;
  return;
}

// NewProp_bUseHighPrecisionTangentBasis_SetBit @ 14e2eea90

void __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::
NewProp_bUseHighPrecisionTangentBasis_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x10;
  return;
}

// NewProp_bUseFullPrecisionUVs_SetBit @ 14e2eeaa0

void __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::
NewProp_bUseFullPrecisionUVs_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x20;
  return;
}

// NewProp_bGenerateLightmapUVs_SetBit @ 14e2eeab0

void __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::
NewProp_bGenerateLightmapUVs_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 0x40;
  return;
}

// NewStructOps @ 14e2eeac0

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshBuildSettingsTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithMeshBuildSettingsTemplate,&UE::CoreUObject::Private::Construct<FDatasmithMeshBuildSettingsTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithMeshBuildSettingsTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithMeshBuildSettingsTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithMeshBuildSettingsTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bGenerateLightmapUVs_SetBit @ 14e2eeb00

void __cdecl
Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::
NewProp_bGenerateLightmapUVs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bRemoveDegenerates_SetBit @ 14e2eeb10

void __cdecl
Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::
NewProp_bRemoveDegenerates_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewStructOps @ 14e2eeb20

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithStaticMeshImportOptions,&UE::CoreUObject::Private::Construct<FDatasmithStaticMeshImportOptions>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithStaticMeshImportOptions>,&UE::CoreUObject::Private::Destruct<FDatasmithStaticMeshImportOptions>,&UE::CoreUObject::Private::Copy<FDatasmithStaticMeshImportOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e2eeb60

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithStaticMaterialTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithStaticMaterialTemplate,&UE::CoreUObject::Private::Construct<FDatasmithStaticMaterialTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithStaticMaterialTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithStaticMaterialTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithStaticMaterialTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUpdateActors_SetBit @ 14e2eeba0

void __cdecl
Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bUpdateActors_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bRespawnDeletedActors_SetBit @ 14e2eebb0

void __cdecl
Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewProp_bRespawnDeletedActors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14e2eebc0

void * __cdecl Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithReimportOptions,&UE::CoreUObject::Private::Construct<FDatasmithReimportOptions>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithReimportOptions>,&UE::CoreUObject::Private::Destruct<FDatasmithReimportOptions>,&UE::CoreUObject::Private::Copy<FDatasmithReimportOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e2eec00

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithMeshSectionInfoTemplate,&UE::CoreUObject::Private::Construct<FDatasmithMeshSectionInfoTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithMeshSectionInfoTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithMeshSectionInfoTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithMeshSectionInfoTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIncludeGeometry_SetBit @ 14e2eec40

void __cdecl
Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeGeometry_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bIncludeMaterial_SetBit @ 14e2eec50

void __cdecl
Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeMaterial_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bIncludeLight_SetBit @ 14e2eec60

void __cdecl
Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeLight_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bIncludeCamera_SetBit @ 14e2eec70

void __cdecl
Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeCamera_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bIncludeAnimation_SetBit @ 14e2eec80

void __cdecl
Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewProp_bIncludeAnimation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// Z_Construct_UClass_UDatasmithMaterialInstanceTemplate @ 14e2eec90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDatasmithMaterialInstanceTemplate(void)

{
  if (Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.OuterSingleton,
               &Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.OuterSingleton;
}

// Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate @ 14e2eecd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticParameterSetTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithStaticParameterSetTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticParameterSetTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithStaticParameterSetTemplate.InnerSingleton;
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

// NewStructOps @ 14e2eed50

void * __cdecl Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithImportBaseOptions,&UE::CoreUObject::Private::Construct<FDatasmithImportBaseOptions>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithImportBaseOptions>,&UE::CoreUObject::Private::Destruct<FDatasmithImportBaseOptions>,&UE::CoreUObject::Private::Copy<FDatasmithImportBaseOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e2eedf0

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithStaticParameterSetTemplate,&UE::CoreUObject::Private::Construct<FDatasmithStaticParameterSetTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithStaticParameterSetTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithStaticParameterSetTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithStaticParameterSetTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e2eee40

void * __cdecl
Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoMapTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithMeshSectionInfoMapTemplate,&UE::CoreUObject::Private::Construct<FDatasmithMeshSectionInfoMapTemplate>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithMeshSectionInfoMapTemplate>,&UE::CoreUObject::Private::Destruct<FDatasmithMeshSectionInfoMapTemplate>,&UE::CoreUObject::Private::Copy<FDatasmithMeshSectionInfoMapTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e2eef70

void * __cdecl Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithTessellationOptions,&UE::CoreUObject::Private::Construct<FDatasmithTessellationOptions>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithTessellationOptions>,&UE::CoreUObject::Private::Destruct<FDatasmithTessellationOptions>,&UE::CoreUObject::Private::Copy<FDatasmithTessellationOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e2ef0b0

void * __cdecl Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDatasmithRetessellationOptions,&UE::CoreUObject::Private::Construct<FDatasmithRetessellationOptions>,&UE::CoreUObject::Private::ConstructForTests<FDatasmithRetessellationOptions>,&UE::CoreUObject::Private::Destruct<FDatasmithRetessellationOptions>,&UE::CoreUObject::Private::Copy<FDatasmithRetessellationOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 14e2ef5e0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
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
  int iVar11;
  int iVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  longlong lVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar17;
  
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
  iVar10 = iVar8 * 2 + 1;
  iVar11 = iVar10;
  iVar13 = iVar8;
  do {
    while (param_2 <= iVar10) {
LAB_14e2ef716:
      if (iVar13 == 0) {
        iVar10 = param_2 + -1;
        lVar16 = (longlong)iVar10;
        if (0 < iVar10) {
          pTVar17 = param_1 + lVar16;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar2;
            pTVar17->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar6;
            iVar11 = 0;
            if (1 < iVar10) {
              do {
                iVar8 = iVar11 * 2;
                iVar13 = iVar8 + 1;
                if (iVar8 + 2 < iVar10) {
                  iVar12 = ::FName::Compare((FName *)&param_1[iVar8 + 2].ElementData,
                                            (FName *)&param_1[iVar13].ElementData);
                  if (iVar12 < 0) {
                    iVar13 = iVar8;
                  }
                  iVar13 = iVar13 + 1;
                }
                pTVar15 = param_1 + iVar13;
                pTVar14 = param_1 + iVar11;
                iVar11 = ::FName::Compare((FName *)&pTVar14->ElementData,
                                          (FName *)&pTVar15->ElementData);
                if (-1 < iVar11) break;
                uVar2 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
                TVar3 = pTVar14->_s_1;
                uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
                uVar5 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
                uVar6 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
                pTVar14->_s_1 = pTVar15->_s_1;
                *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
                *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
                *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar2;
                pTVar15->_s_1 = TVar3;
                *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar5;
                *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar6;
                iVar11 = iVar13;
              } while (iVar13 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar16 = lVar16 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar8 = iVar13 + -1;
      iVar10 = iVar11 + -2;
      iVar11 = iVar10;
      iVar13 = iVar8;
    }
    iVar10 = iVar8 * 2;
    iVar12 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      iVar9 = ::FName::Compare((FName *)&param_1[iVar10 + 2].ElementData,
                               (FName *)&param_1[iVar12].ElementData);
      if (iVar9 < 0) {
        iVar12 = iVar10;
      }
      iVar12 = iVar12 + 1;
    }
    pTVar14 = param_1 + iVar12;
    pTVar17 = param_1 + iVar8;
    iVar10 = ::FName::Compare((FName *)&pTVar17->ElementData,(FName *)&pTVar14->ElementData);
    if (-1 < iVar10) goto LAB_14e2ef716;
    uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
    iVar10 = iVar12 * 2 + 1;
    TVar3 = pTVar17->_s_1;
    uVar4 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar2;
    pTVar14->_s_1 = TVar3;
    *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar6;
    iVar8 = iVar12;
  } while( true );
}

// InternalConstructor<ADatasmithAreaLightActor> @ 14e2ef840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ADatasmithAreaLightActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FLinearColor FVar1;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this->_padding_ = (longlong)&___7ADatasmithAreaLightActor__6B_;
    this[1]._padding_ = 0x4059000000000000;
    this[1]._padding_ = 0x4059000000000000;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    FVar1 = FLinearColor::White;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0x45cb2000;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    *(FLinearColor_u_0 *)&this[1]._padding_ = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].CustomTimeDilation = 1000.0;
    this[1].RayTracingGroupId = 0x3f800000;
    *(undefined4 *)&this[1].AttachmentReplication.AttachParent.field0_0x0 = 0x42300000;
  }
  return;
}

// InternalConstructor<ADatasmithImportedSequencesActor> @ 14e2ef910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ADatasmithImportedSequencesActor>(FObjectInitializer *param_1)

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
    this->_padding_ = (longlong)&___7ADatasmithImportedSequencesActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"SceneComp");
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

// InternalConstructor<ADatasmithSceneActor> @ 14e2ef9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ADatasmithSceneActor>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    this->_padding_ = (longlong)&___7ADatasmithSceneActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick.Target = 0;
  }
  return;
}

// InternalConstructor<UDatasmithActorTemplate> @ 14e2efa40

void __cdecl InternalConstructor<UDatasmithActorTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UDatasmithActorTemplate__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0xc = 0x80;
    *(undefined4 *)&this[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x14 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
  }
  return;
}

// InternalConstructor<UDatasmithAdditionalData> @ 14e2efae0

void __cdecl InternalConstructor<UDatasmithAdditionalData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UDatasmithAdditionalData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithAreaLightActorTemplate> @ 14e2efb10

void __cdecl InternalConstructor<UDatasmithAreaLightActorTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *this_00;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UDatasmithAreaLightActorTemplate__6B_;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)&this[3].field_0x8,0);
    this_00 = ADatasmithAreaLightActor::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
      return;
    }
  }
  return;
}

// InternalConstructor<UDatasmithAssetImportData> @ 14e2efb80

void __cdecl InternalConstructor<UDatasmithAssetImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithAssetUserData> @ 14e2efbb0

void __cdecl InternalConstructor<UDatasmithAssetUserData>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7UDatasmithAssetUserData__6B_;
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

// InternalConstructor<UDatasmithCADImportSceneData> @ 14e2efc10

void __cdecl InternalConstructor<UDatasmithCADImportSceneData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithCADImportSceneData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithCineCameraActorTemplate> @ 14e2efc40

void __cdecl InternalConstructor<UDatasmithCineCameraActorTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    this[1].field_0x8 = this[1].field_0x8 & 0xfc;
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UDatasmithCineCameraActorTemplate__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 2),0);
    return;
  }
  return;
}

// InternalConstructor<UDatasmithCineCameraComponentTemplate> @ 14e2efca0

void __cdecl InternalConstructor<UDatasmithCineCameraComponentTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithCineCameraComponentTemplate__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    this[1].field_0x14 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate
              ((FDatasmithPostProcessSettingsTemplate *)(this + 2));
    return;
  }
  return;
}

// InternalConstructor<UDatasmithCommonTessellationOptions> @ 14e2efd00

void __cdecl InternalConstructor<UDatasmithCommonTessellationOptions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDatasmithCommonTessellationOptions__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0x3f50624dd2f1a9fc;
    *(undefined8 *)&this[1].field_0x18 = 0x3f50624dd2f1a9fc;
    *(undefined8 *)(this + 1) = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x8 = 0x41a00000;
    *(undefined2 *)&this[1].field_0xc = 2;
  }
  return;
}

// InternalConstructor<UDatasmithContentBlueprintLibrary> @ 14e2efd60

void __cdecl InternalConstructor<UDatasmithContentBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &UDatasmithContentBlueprintLibrary::_vftable_;
  }
  return;
}

// InternalConstructor<UDatasmithCustomActionBase> @ 14e2efd90

void __cdecl InternalConstructor<UDatasmithCustomActionBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UDatasmithCustomActionBase::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UDatasmithCustomActionBase::_vftable__for__IDatasmithCustomAction__;
  }
  return;
}

// InternalConstructor<UDatasmithDecalComponentTemplate> @ 14e2efdd0

void __cdecl InternalConstructor<UDatasmithDecalComponentTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithDecalComponentTemplate__6B_;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UDatasmithDeltaGenAssetImportData> @ 14e2efe10

void __cdecl InternalConstructor<UDatasmithDeltaGenAssetImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithDeltaGenAssetImportData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithDeltaGenSceneImportData> @ 14e2efe40

void __cdecl InternalConstructor<UDatasmithDeltaGenSceneImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &___7UDatasmithDeltaGenSceneImportData__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UDatasmithFBXSceneImportData> @ 14e2efea0

void __cdecl InternalConstructor<UDatasmithFBXSceneImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithFBXSceneImportData__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UDatasmithGLTFSceneImportData> @ 14e2efee0

void __cdecl InternalConstructor<UDatasmithGLTFSceneImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithGLTFSceneImportData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UDatasmithImportOptions> @ 14e2eff40

void __cdecl InternalConstructor<UDatasmithImportOptions>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithImportOptions__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined1 *)(this + 3) = 0;
    this[3].field_0x11 = 0;
    *(undefined4 *)&this[1].field_0x8 = 0x1010101;
    *(undefined2 *)&this[1].field_0xc = 0x101;
    *(undefined4 *)&this[1].field_0x18 = 0x1010302;
    *(undefined2 *)&this[1].field_0x1c = 1;
  }
  return;
}

// InternalConstructor<UDatasmithLandscapeTemplate> @ 14e2effc0

void __cdecl InternalConstructor<UDatasmithLandscapeTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UDatasmithLandscapeTemplate__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UDatasmithLightComponentTemplate> @ 14e2f0000

void __cdecl InternalConstructor<UDatasmithLightComponentTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithLightComponentTemplate__6B_;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UDatasmithMDLSceneImportData> @ 14e2f0040

void __cdecl InternalConstructor<UDatasmithMDLSceneImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithMDLSceneImportData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithMaterialInstanceTemplate> @ 14e2f0070

void __cdecl InternalConstructor<UDatasmithMaterialInstanceTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &___7UDatasmithMaterialInstanceTemplate__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x20,0);
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0xc = 0x80;
    *(undefined4 *)&this[3].field_0x14 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0xffffffff;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined4 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0xc = 0x80;
    *(undefined4 *)&this[5].field_0x14 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0xffffffff;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined4 *)&this[7].field_0x8 = 0;
    *(undefined4 *)&this[7].field_0xc = 0x80;
    *(undefined4 *)&this[7].field_0x14 = 0;
    *(undefined4 *)&this[7].field_0x10 = 0xffffffff;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
    *(undefined8 *)&this[8].field_0x10 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined4 *)&this[9].field_0x8 = 0;
    *(undefined4 *)&this[9].field_0xc = 0x80;
    *(undefined4 *)&this[9].field_0x14 = 0;
    *(undefined4 *)&this[9].field_0x10 = 0xffffffff;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined4 *)(this + 10) = 0;
  }
  return;
}

// InternalConstructor<UDatasmithObjectTemplate> @ 14e2f01d0

void __cdecl InternalConstructor<UDatasmithObjectTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithObjectTemplate__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithOptionsBase> @ 14e2f0200

void __cdecl InternalConstructor<UDatasmithOptionsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDatasmithOptionsBase__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithPointLightComponentTemplate> @ 14e2f0230

void __cdecl InternalConstructor<UDatasmithPointLightComponentTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *this_00;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithPointLightComponentTemplate__6B_;
    this_00 = Z_Construct_UClass_UPointLightComponent_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
      return;
    }
  }
  return;
}

// InternalConstructor<UDatasmithPostProcessVolumeTemplate> @ 14e2f0280

void __cdecl InternalConstructor<UDatasmithPostProcessVolumeTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UDatasmithPostProcessVolumeTemplate__6B_;
    FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate
              ((FDatasmithPostProcessSettingsTemplate *)&this[1].field_0x8);
    return;
  }
  return;
}

// InternalConstructor<UDatasmithScene> @ 14e2f02c0

void __cdecl InternalConstructor<UDatasmithScene>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &UDatasmithScene::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UDatasmithScene::_vftable__for__IInterface_AssetUserData__;
  }
  return;
}

// InternalConstructor<UDatasmithSceneComponentTemplate> @ 14e2f0300

void __cdecl InternalConstructor<UDatasmithSceneComponentTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithSceneComponentTemplate__6B_;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].field_0x8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[1].field_0x10 = (double)fVar1;
    *(double *)&this[1].field_0x18 = (double)fVar2;
    *(double *)&this[1].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)(this + 2) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[2].field_0x8 = (double)fVar1;
    *(double *)&this[2].field_0x10 = (double)fVar2;
    *(double *)&this[2].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[2].field_0x20 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)(this + 3) = (double)fVar1;
    *(double *)&this[3].field_0x8 = (double)fVar2;
    *(double *)&this[3].field_0x10 = (double)fVar3;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)(this + 4) = 0;
    FUtf8String::Reset((FUtf8String *)&this[4].field_0x10,0);
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    this[4].field_0x21 = 1;
    *(undefined4 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x4 = 0x80;
    *(undefined4 *)&this[6].field_0xc = 0;
    *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UDatasmithSceneImportData> @ 14e2f0400

void __cdecl InternalConstructor<UDatasmithSceneImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithSkyLightComponentTemplate> @ 14e2f0430

void __cdecl InternalConstructor<UDatasmithSkyLightComponentTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *this_00;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithSkyLightComponentTemplate__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this_00 = Z_Construct_UClass_USkyLightComponent_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
      return;
    }
  }
  return;
}

// InternalConstructor<UDatasmithSpotLightComponentTemplate> @ 14e2f0490

void __cdecl InternalConstructor<UDatasmithSpotLightComponentTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *this_00;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithSpotLightComponentTemplate__6B_;
    this_00 = Z_Construct_UClass_USpotLightComponent_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
      return;
    }
  }
  return;
}

// InternalConstructor<UDatasmithStaticMeshCADImportData> @ 14e2f04e0

void __cdecl InternalConstructor<UDatasmithStaticMeshCADImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithStaticMeshCADImportData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithStaticMeshComponentTemplate> @ 14e2f0510

void __cdecl InternalConstructor<UDatasmithStaticMeshComponentTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithStaticMeshComponentTemplate__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UDatasmithStaticMeshGLTFImportData> @ 14e2f0550

void __cdecl InternalConstructor<UDatasmithStaticMeshGLTFImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithStaticMeshGLTFImportData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UDatasmithStaticMeshImportData> @ 14e2f0590

void __cdecl InternalConstructor<UDatasmithStaticMeshImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithStaticMeshImportData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithStaticMeshTemplate> @ 14e2f05c0

void __cdecl InternalConstructor<UDatasmithStaticMeshTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDatasmithStaticMeshTemplate__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[3].field_0xc = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<UDatasmithTranslatedSceneImportData> @ 14e2f0650

void __cdecl InternalConstructor<UDatasmithTranslatedSceneImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithTranslatedSceneImportData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithVREDAssetImportData> @ 14e2f0680

void __cdecl InternalConstructor<UDatasmithVREDAssetImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined ***)this = &___7UDatasmithVREDAssetImportData__6B_;
  }
  return;
}

// InternalConstructor<UDatasmithVREDSceneImportData> @ 14e2f06b0

void __cdecl InternalConstructor<UDatasmithVREDSceneImportData>(FObjectInitializer *param_1)

{
  UAssetImportData *this;
  
  this = (UAssetImportData *)param_1->Obj;
  if (this != (UAssetImportData *)0x0) {
    UAssetImportData::UAssetImportData(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &___7UDatasmithVREDSceneImportData__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<ADatasmithAreaLightActor> @ 14e2f0720

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

UObject * __cdecl InternalVTableHelperCtorCaller<ADatasmithAreaLightActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADatasmithAreaLightActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ADatasmithAreaLightActor__6B_;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ADatasmithImportedSequencesActor> @ 14e2f07e0

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
InternalVTableHelperCtorCaller<ADatasmithImportedSequencesActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADatasmithImportedSequencesActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ADatasmithImportedSequencesActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ADatasmithSceneActor> @ 14e2f08a0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ADatasmithSceneActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ADatasmithSceneActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ADatasmithSceneActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick.Target = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithActorTemplate> @ 14e2f09a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithActorTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithActorTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithActorTemplate__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithAdditionalData> @ 14e2f0ac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithAdditionalData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithAdditionalData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithAdditionalData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithAreaLightActorTemplate> @ 14e2f0b70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithAreaLightActorTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithAreaLightActorTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithAreaLightActorTemplate__6B_;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[3].field_0x8,0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithAssetImportData> @ 14e2f0c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithAssetImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithAssetImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithAssetImportData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithAssetUserData> @ 14e2f0cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithAssetUserData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithAssetUserData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithAssetUserData__6B_;
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

// InternalVTableHelperCtorCaller<UDatasmithCADImportSceneData> @ 14e2f0dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithCADImportSceneData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithCADImportSceneData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithCADImportSceneData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithCineCameraActorTemplate> @ 14e2f0e80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithCineCameraActorTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithCineCameraActorTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = pUVar1[1].field_0x8 & 0xfc;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithCineCameraActorTemplate__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    FUtf8String::Reset((FUtf8String *)(pUVar1 + 2),0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithCineCameraComponentTemplate> @ 14e2f0f50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithCineCameraComponentTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithCineCameraComponentTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithCineCameraComponentTemplate__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    pUVar1[1].field_0x14 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0;
    FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate
              ((FDatasmithPostProcessSettingsTemplate *)(pUVar1 + 2));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithCommonTessellationOptions> @ 14e2f1020

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithCommonTessellationOptions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithCommonTessellationOptions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithCommonTessellationOptions__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0x3f50624dd2f1a9fc;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0x3f50624dd2f1a9fc;
    *(undefined8 *)(pUVar1 + 1) = 0x3e4ccccd;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x41a00000;
    *(undefined2 *)&pUVar1[1].field_0xc = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithContentBlueprintLibrary> @ 14e2f1100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithContentBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithContentBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &UDatasmithContentBlueprintLibrary::_vftable_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithCustomActionBase> @ 14e2f11b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithCustomActionBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithCustomActionBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UDatasmithCustomActionBase::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UDatasmithCustomActionBase::_vftable__for__IDatasmithCustomAction__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithDecalComponentTemplate> @ 14e2f1270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithDecalComponentTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithDecalComponentTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithDecalComponentTemplate__6B_;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithDeltaGenAssetImportData> @ 14e2f1330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithDeltaGenAssetImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithDeltaGenAssetImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithDeltaGenAssetImportData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithDeltaGenSceneImportData> @ 14e2f13e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithDeltaGenSceneImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithDeltaGenSceneImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithDeltaGenSceneImportData__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithFBXSceneImportData> @ 14e2f14b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithFBXSceneImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithFBXSceneImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithFBXSceneImportData__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithGLTFSceneImportData> @ 14e2f1570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithGLTFSceneImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithGLTFSceneImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithGLTFSceneImportData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithImportOptions> @ 14e2f1640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithImportOptions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithImportOptions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithImportOptions__6B_;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x1010101;
    *(undefined2 *)&pUVar1[1].field_0xc = 0x101;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x1010302;
    *(undefined2 *)&pUVar1[1].field_0x1c = 1;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithLandscapeTemplate> @ 14e2f1730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithLandscapeTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithLandscapeTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithLandscapeTemplate__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithLightComponentTemplate> @ 14e2f17f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithLightComponentTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithLightComponentTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithLightComponentTemplate__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithMDLSceneImportData> @ 14e2f18b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithMDLSceneImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithMDLSceneImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithMDLSceneImportData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithMaterialInstanceTemplate> @ 14e2f1960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithMaterialInstanceTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithMaterialInstanceTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithMaterialInstanceTemplate__6B_;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x20,0);
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x14 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0x14 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x14 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 10) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithObjectTemplate> @ 14e2f1b30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithObjectTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithObjectTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithObjectTemplate__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithOptionsBase> @ 14e2f1be0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithOptionsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithOptionsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithOptionsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithPointLightComponentTemplate> @ 14e2f1c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithPointLightComponentTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithPointLightComponentTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithPointLightComponentTemplate__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithPostProcessVolumeTemplate> @ 14e2f1d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithPostProcessVolumeTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithPostProcessVolumeTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithPostProcessVolumeTemplate__6B_;
    FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate
              ((FDatasmithPostProcessSettingsTemplate *)&pUVar1[1].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithScene> @ 14e2f1e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithScene>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithScene::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UDatasmithScene::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UDatasmithScene::_vftable__for__IInterface_AssetUserData__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithSceneComponentTemplate> @ 14e2f1ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithSceneComponentTemplate>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UDatasmithSceneComponentTemplate::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined1 *)(pUVar4 + 1) = 0;
    *(undefined ***)pUVar4 = &___7UDatasmithSceneComponentTemplate__6B_;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[1].field_0x8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[1].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[1].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[1].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)(pUVar4 + 2) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[2].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[2].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[2].field_0x20 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)(pUVar4 + 3) = (double)fVar1;
    *(double *)&pUVar4[3].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x10 = (double)fVar3;
    *(undefined8 *)&pUVar4[4].field_0x10 = 0;
    *(undefined8 *)&pUVar4[4].field_0x18 = 0;
    *(undefined8 *)&pUVar4[3].field_0x20 = 0;
    *(undefined8 *)&pUVar4[4].field_0x8 = 0;
    *(undefined8 *)(pUVar4 + 4) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar4[4].field_0x10,0);
    pUVar4[4].field_0x21 = 1;
    *(undefined8 *)(pUVar4 + 5) = 0;
    *(undefined8 *)&pUVar4[5].field_0x8 = 0;
    *(undefined8 *)&pUVar4[5].field_0x20 = 0;
    *(undefined4 *)(pUVar4 + 6) = 0;
    *(undefined4 *)&pUVar4[6].field_0x4 = 0x80;
    *(undefined4 *)&pUVar4[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar4[6].field_0xc = 0;
    *(undefined8 *)&pUVar4[6].field_0x18 = 0;
    *(undefined4 *)&pUVar4[6].field_0x20 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithSceneImportData> @ 14e2f2030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDatasmithSceneImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithSceneImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithSceneImportData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithSkyLightComponentTemplate> @ 14e2f20e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithSkyLightComponentTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithSkyLightComponentTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithSkyLightComponentTemplate__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithSpotLightComponentTemplate> @ 14e2f21a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithSpotLightComponentTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithSpotLightComponentTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithSpotLightComponentTemplate__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithStaticMeshCADImportData> @ 14e2f2250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithStaticMeshCADImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithStaticMeshCADImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithStaticMeshCADImportData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithStaticMeshComponentTemplate> @ 14e2f2300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithStaticMeshComponentTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithStaticMeshComponentTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithStaticMeshComponentTemplate__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithStaticMeshGLTFImportData> @ 14e2f23c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithStaticMeshGLTFImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithStaticMeshGLTFImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithStaticMeshGLTFImportData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithStaticMeshImportData> @ 14e2f2480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithStaticMeshImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithStaticMeshImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithStaticMeshImportData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithStaticMeshTemplate> @ 14e2f2530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithStaticMeshTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithStaticMeshTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithStaticMeshTemplate__6B_;
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithTranslatedSceneImportData> @ 14e2f2640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithTranslatedSceneImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithTranslatedSceneImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithTranslatedSceneImportData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithVREDAssetImportData> @ 14e2f26f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithVREDAssetImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithVREDAssetImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDatasmithVREDAssetImportData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDatasmithVREDSceneImportData> @ 14e2f27a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDatasmithVREDSceneImportData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDatasmithVREDSceneImportData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetImportData::UAssetImportData((UAssetImportData *)pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UDatasmithVREDSceneImportData__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 14e2f2880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  uint uVar11;
  FNameEntryId FVar12;
  uint uVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar18;
  int iVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *this;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar21;
  float fVar22;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar22;
    memset(local_330,0,0x2e8);
    ppTVar18 = &local_348;
    do {
      pTVar21 = ppTVar18[1];
      pTVar20 = *ppTVar18;
      local_358 = ppTVar18[2];
      iVar14 = (int)((longlong)pTVar21 - (longlong)pTVar20 >> 5) + 1;
      this = pTVar20;
      iVar19 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14e2f2940:
        if (8 < iVar14) {
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 8);
          pTVar15 = pTVar21 + 1;
          pTVar20 = this + iVar14 / 2;
          TVar2 = pTVar20->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x18);
          pTVar20->_s_1 = this->_s_1;
          *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x10) =
               *(undefined8 *)((this->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x18) = uVar1;
          this->_s_1 = TVar2;
          *(undefined8 *)((this->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((this->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((this->ElementData).Pad + 0x18) = uVar5;
          pTVar20 = this;
LAB_14e2f2980:
          pTVar17 = pTVar20;
          pTVar20 = pTVar17 + 1;
          if (pTVar20 <= pTVar21) goto code_r0x00014e2f2989;
          goto LAB_14e2f29a0;
        }
        for (; pTVar15 = this, pTVar20 = this, this < pTVar21; pTVar21 = pTVar21 + -1) {
          while (pTVar17 = pTVar15, pTVar20 = pTVar20 + 1, pTVar20 <= pTVar21) {
            iVar19 = ::FName::Compare((FName *)&pTVar17->ElementData,(FName *)&pTVar20->ElementData)
            ;
            pTVar15 = pTVar20;
            if (-1 < iVar19) {
              pTVar15 = pTVar17;
            }
          }
          FVar10.Value = *(int *)pTVar17;
          uVar11 = *(int *)((longlong)pTVar17 + 4);
          uVar1 = *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 2);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 4);
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 6);
          FVar12.Value = *(int *)pTVar21;
          uVar13 = *(int *)((longlong)pTVar21 + 4);
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 2);
          *(int *)pTVar17 = FVar12.Value;
          *(uint *)((longlong)pTVar17 + 4) = uVar13;
          *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 2) = uVar5;
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 6);
          *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 4) =
               *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 4);
          *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 6) = uVar5;
          *(int *)pTVar21 = FVar10.Value;
          *(uint *)((longlong)pTVar21 + 4) = uVar11;
          *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 2) = uVar1;
          *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 4) = uVar3;
          *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 6) = uVar4;
        }
        goto LAB_14e2f2a91;
      }
LAB_14e2f2a80:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
                (pTVar20,iVar14,param_3,param_4);
LAB_14e2f2a91:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_348 <= ppTVar18);
  }
  return;
code_r0x00014e2f2989:
  iVar14 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar20->ElementData);
  if (-1 < iVar14) goto LAB_14e2f2980;
LAB_14e2f29a0:
  do {
    pTVar16 = pTVar15;
    pTVar15 = pTVar16 + -1;
    if (pTVar15 <= this) break;
    iVar14 = ::FName::Compare((FName *)&pTVar15->ElementData,(FName *)&this->ElementData);
  } while (-1 < iVar14);
  FVar6 = *(FName *)((longlong)pTVar16 + -0x18);
  if (pTVar20 <= pTVar15) {
    TVar2 = pTVar20->_s_1;
    FVar7 = *(FName *)((longlong)pTVar17 + 0x28);
    FVar8 = *(FName *)((longlong)pTVar17 + 0x30);
    FVar9 = *(FName *)((longlong)pTVar17 + 0x38);
    pTVar20->_s_1 = pTVar15->_s_1;
    *(FName *)((longlong)pTVar17 + 0x28) = FVar6;
    FVar6 = *(FName *)((longlong)pTVar16 + -8);
    *(FName *)((longlong)pTVar17 + 0x30) = *(FName *)((longlong)pTVar16 + -0x10);
    *(FName *)((longlong)pTVar17 + 0x38) = FVar6;
    pTVar15->_s_1 = TVar2;
    *(FName *)((longlong)pTVar16 + -0x18) = FVar7;
    *(FName *)((longlong)pTVar16 + -0x10) = FVar8;
    *(FName *)((longlong)pTVar16 + -8) = FVar9;
    goto LAB_14e2f2980;
  }
  TVar2 = this->_s_1;
  FVar7 = *(FName *)((this->ElementData).Pad + 8);
  FVar8 = *(FName *)((this->ElementData).Pad + 0x10);
  FVar9 = *(FName *)((this->ElementData).Pad + 0x18);
  this->_s_1 = pTVar15->_s_1;
  *(FName *)((this->ElementData).Pad + 8) = FVar6;
  iVar19 = iVar19 + -1;
  FVar6 = *(FName *)((longlong)pTVar16 + -8);
  *(FName *)((this->ElementData).Pad + 0x10) = *(FName *)((longlong)pTVar16 + -0x10);
  *(FName *)((this->ElementData).Pad + 0x18) = FVar6;
  pTVar15->_s_1 = TVar2;
  *(FName *)((longlong)pTVar16 + -0x18) = FVar7;
  *(FName *)((longlong)pTVar16 + -0x10) = FVar8;
  *(FName *)((longlong)pTVar16 + -8) = FVar9;
  if ((longlong)((longlong)pTVar15 + (-0x20 - (longlong)this) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar21 - (longlong)pTVar20 & 0xffffffffffffffe0U)) {
    if (pTVar20 < pTVar21) {
      *ppTVar18 = pTVar20;
      ppTVar18[1] = pTVar21;
      *(int *)(ppTVar18 + 2) = iVar19;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar15 <= this + 1) goto LAB_14e2f2a91;
    pTVar21 = pTVar16 + -2;
    pTVar20 = this;
  }
  else {
    if (this + 1 < pTVar15) {
      *ppTVar18 = this;
      ppTVar18[1] = pTVar16 + -2;
      *(int *)(ppTVar18 + 2) = iVar19;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar21 <= pTVar20) goto LAB_14e2f2a91;
  }
  iVar14 = (int)((longlong)pTVar21 - (longlong)pTVar20 >> 5) + 1;
  this = pTVar20;
  if (iVar19 == 0) goto LAB_14e2f2a80;
  goto LAB_14e2f2940;
}

// MapEquals<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_> @ 14e2f2b70

bool __cdecl
DatasmithMaterialInstanceTemplateImpl::
MapEquals<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_>
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
           *param_1,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  uint *puVar11;
  float *pfVar12;
  bool bVar13;
  bool bVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  int iStack_3c;
  
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  uVar5 = *(uint *)&param_1->field_0x28;
  uStack_54 = 1;
  bVar13 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 ==
           *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  pfVar12 = (float *)0x0;
  uStack_58 = 0;
  local_40 = 0;
  pfVar8 = pfVar12;
  if (uVar5 != 0) {
    pfVar8 = (float *)(ulonglong)uVar5;
    puVar11 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar11 = (uint *)TStack_80.Array;
    }
    uVar4 = *puVar11;
    pfVar7 = pfVar12;
    pfVar10 = pfVar12;
    local_40 = 0;
    uStack_58 = 0;
    while (uVar4 == 0) {
      iVar9 = (int)pfVar7;
      local_40 = (int)pfVar10 + 0x20;
      pfVar10 = (float *)(ulonglong)local_40;
      uStack_58 = iVar9 + 1;
      pfVar7 = (float *)(ulonglong)uStack_58;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < (int)uStack_58)
      goto LAB_14e2f2c1c;
      uVar4 = puVar11[(longlong)iVar9 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_54 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar4 = (int)lVar3 + -1 + local_40;
    if ((int)uVar5 < (int)uVar4) {
      uVar4 = uVar5;
    }
    pfVar8 = (float *)(ulonglong)uVar4;
  }
LAB_14e2f2c1c:
  uStack_48 = 0xffffffff;
  uStack_44 = (uint)pfVar8;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  local_60 = param_1;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80._padding_._0_4_ = uStack_58;
  TStack_80._padding_._4_4_ = uStack_54;
  TStack_80.CurrentBitIndex = uStack_44;
  if ((int)uStack_44 < (int)uVar5) {
    do {
      bVar14 = bVar13 == false;
      bVar13 = false;
      if (bVar14) break;
      lVar3 = *(longlong *)(*(longlong *)param_1 + (longlong)(int)pfVar8 * 0x14);
      uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar6 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar9 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&param_2->field_0x48 - 1U &
                                  uVar5 + (int)((ulonglong)lVar3 >> 0x20)) * 4);
        if (iVar9 != -1) {
          do {
            lVar1 = *(longlong *)param_2 + (longlong)iVar9 * 0x14;
            if (*(longlong *)(*(longlong *)param_2 + (longlong)iVar9 * 0x14) == lVar3) {
              pfVar7 = (float *)(lVar1 + 8);
              if (lVar1 == 0) {
                pfVar7 = pfVar12;
              }
              if ((pfVar7 != (float *)0x0) &&
                 (*pfVar7 == *(float *)(*(longlong *)param_1 + 8 + (longlong)(int)pfVar8 * 0x14))) {
                bVar13 = true;
                goto LAB_14e2f2cfe;
              }
              break;
            }
            iVar9 = *(int *)(lVar1 + 0xc);
          } while (iVar9 != -1);
        }
      }
      bVar13 = false;
LAB_14e2f2cfe:
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      pfVar8 = (float *)(ulonglong)(uint)TStack_80.CurrentBitIndex;
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  *(undefined4 *)&param_2->field_0x48 = 0;
  if (*(void **)&param_2->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_2);
  return bVar13;
}

// MapEquals<TMap<FName,TSoftObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>_>_> @ 14e2f2dc0

bool __cdecl
DatasmithMaterialInstanceTemplateImpl::
MapEquals<TMap<FName,TSoftObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>_>_>
          (TMap<FName,TSoftObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>_>
           *param_1,
          TMap<FName,TSoftObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>_>
          *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<FName,TSoftObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>_>
  *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  int iStack_3c;
  
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  uVar4 = *(uint *)&param_1->field_0x28;
  uStack_54 = 1;
  bVar13 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 ==
           *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  plVar12 = (longlong *)0x0;
  uStack_58 = 0;
  local_40 = 0;
  plVar5 = plVar12;
  if (uVar4 != 0) {
    plVar5 = (longlong *)(ulonglong)uVar4;
    puVar11 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar11 = (uint *)TStack_80.Array;
    }
    uVar3 = *puVar11;
    plVar7 = plVar12;
    plVar10 = plVar12;
    local_40 = 0;
    uStack_58 = 0;
    while (uVar3 == 0) {
      iVar9 = (int)plVar7;
      local_40 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)local_40;
      uStack_58 = iVar9 + 1;
      plVar7 = (longlong *)(ulonglong)uStack_58;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < (int)uStack_58)
      goto LAB_14e2f2e6d;
      uVar3 = puVar11[(longlong)iVar9 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_54 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = (local_40 - 1) + (int)lVar2;
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
    plVar5 = (longlong *)(ulonglong)uVar3;
  }
LAB_14e2f2e6d:
  uStack_48 = 0xffffffff;
  uStack_44 = (uint)plVar5;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80._padding_ = CONCAT44(uStack_54,uStack_58);
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  local_60 = param_1;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80.CurrentBitIndex = uStack_44;
  if ((int)uStack_44 < (int)uVar4) {
    do {
      bVar14 = bVar13 == false;
      bVar13 = false;
      if (bVar14) break;
      lVar8 = (longlong)(int)plVar5 * 0x38;
      lVar2 = *(longlong *)(lVar8 + *(longlong *)param_1);
      uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar6 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar9 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&param_2->field_0x48 - 1U &
                                  uVar4 + (int)((ulonglong)lVar2 >> 0x20)) * 4);
        if (iVar9 != -1) {
          do {
            plVar5 = (longlong *)((longlong)iVar9 * 0x38 + *(longlong *)param_2);
            if (*plVar5 == lVar2) {
              plVar7 = plVar5 + 1;
              if (plVar5 == (longlong *)0x0) {
                plVar7 = plVar12;
              }
              if (plVar7 != (longlong *)0x0) {
                bVar13 = FSoftObjectPath::operator==
                                   ((FSoftObjectPath *)(*(longlong *)param_1 + 0x10 + lVar8),
                                    (FSoftObjectPath *)(plVar7 + 1));
                goto LAB_14e2f2f3c;
              }
              break;
            }
            iVar9 = (int)plVar5[6];
          } while (iVar9 != -1);
        }
      }
      bVar13 = false;
LAB_14e2f2f3c:
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      plVar5 = (longlong *)(ulonglong)(uint)TStack_80.CurrentBitIndex;
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  *(undefined4 *)&param_2->field_0x48 = 0;
  if (*(void **)&param_2->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_2);
  return bVar13;
}

// MapEquals<TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>_> @ 14e2f2ff0

bool __cdecl
DatasmithMaterialInstanceTemplateImpl::
MapEquals<TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>_>
          (TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
           *param_1,
          TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
          *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  uint *puVar12;
  float *pfVar13;
  bool bVar14;
  bool bVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
  *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  int iStack_3c;
  
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  uVar4 = *(uint *)&param_1->field_0x28;
  uStack_54 = 1;
  bVar14 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 ==
           *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  pfVar13 = (float *)0x0;
  uStack_58 = 0;
  local_40 = 0;
  pfVar9 = pfVar13;
  if (uVar4 != 0) {
    pfVar9 = (float *)(ulonglong)uVar4;
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)TStack_80.Array;
    }
    uVar3 = *puVar12;
    pfVar5 = pfVar13;
    pfVar11 = pfVar13;
    local_40 = 0;
    uStack_58 = 0;
    while (uVar3 == 0) {
      iVar10 = (int)pfVar5;
      local_40 = (int)pfVar11 + 0x20;
      pfVar11 = (float *)(ulonglong)local_40;
      uStack_58 = iVar10 + 1;
      pfVar5 = (float *)(ulonglong)uStack_58;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < (int)uStack_58)
      goto LAB_14e2f309d;
      uVar3 = puVar12[(longlong)iVar10 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_54 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = (local_40 - 1) + (int)lVar2;
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
    pfVar9 = (float *)(ulonglong)uVar3;
  }
LAB_14e2f309d:
  uStack_48 = 0xffffffff;
  uStack_44 = (uint)pfVar9;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  local_60 = param_1;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80._padding_._0_4_ = uStack_58;
  TStack_80._padding_._4_4_ = uStack_54;
  TStack_80.CurrentBitIndex = uStack_44;
  if ((int)uStack_44 < (int)uVar4) {
    do {
      bVar15 = bVar14 == false;
      bVar14 = false;
      if (bVar15) break;
      lVar2 = *(longlong *)((longlong)(int)pfVar9 * 0x20 + *(longlong *)param_1);
      uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar7 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar10 = *(int *)(puVar7 + (ulonglong)
                                   (*(int *)&param_2->field_0x48 - 1U &
                                   uVar4 + (int)((ulonglong)lVar2 >> 0x20)) * 4);
        if (iVar10 != -1) {
          do {
            plVar6 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)param_2);
            if (*plVar6 == lVar2) {
              pfVar5 = (float *)(plVar6 + 1);
              if (plVar6 == (longlong *)0x0) {
                pfVar5 = pfVar13;
              }
              if (pfVar5 != (float *)0x0) {
                lVar2 = *(longlong *)param_1;
                lVar8 = (longlong)(int)pfVar9 * 0x20;
                if ((((*pfVar5 == *(float *)(lVar8 + 8 + lVar2)) &&
                     (pfVar5[1] == *(float *)(lVar8 + 0xc + lVar2))) &&
                    (pfVar5[2] == *(float *)(lVar8 + 0x10 + lVar2))) &&
                   (pfVar5[3] == *(float *)(lVar8 + 0x14 + lVar2))) {
                  bVar14 = true;
                  goto LAB_14e2f317d;
                }
              }
              break;
            }
            iVar10 = (int)plVar6[3];
          } while (iVar10 != -1);
        }
      }
      bVar14 = false;
LAB_14e2f317d:
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      pfVar9 = (float *)(ulonglong)(uint)TStack_80.CurrentBitIndex;
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  *(undefined4 *)&param_2->field_0x48 = 0;
  if (*(void **)&param_2->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_2);
  return bVar14;
}

// MapEquals<TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_> @ 14e2f3270

bool __cdecl
DatasmithMaterialInstanceTemplateImpl::
MapEquals<TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_>
          (TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *param_1
          ,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *param_2
          )

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  uint *puVar11;
  char *pcVar12;
  bool bVar13;
  bool bVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  int iStack_3c;
  
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  uVar5 = *(uint *)&param_1->field_0x28;
  uStack_54 = 1;
  bVar13 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 ==
           *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  pcVar12 = (char *)0x0;
  uStack_58 = 0;
  local_40 = 0;
  pcVar7 = pcVar12;
  if (uVar5 != 0) {
    pcVar7 = (char *)(ulonglong)uVar5;
    puVar11 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar11 = (uint *)TStack_80.Array;
    }
    uVar4 = *puVar11;
    pcVar8 = pcVar12;
    pcVar10 = pcVar12;
    local_40 = 0;
    uStack_58 = 0;
    while (uVar4 == 0) {
      iVar9 = (int)pcVar8;
      local_40 = (int)pcVar10 + 0x20;
      pcVar10 = (char *)(ulonglong)local_40;
      uStack_58 = iVar9 + 1;
      pcVar8 = (char *)(ulonglong)uStack_58;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < (int)uStack_58)
      goto LAB_14e2f331d;
      uVar4 = puVar11[(longlong)iVar9 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_54 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar4 = (local_40 - 1) + (int)lVar3;
    if ((int)uVar5 < (int)uVar4) {
      uVar4 = uVar5;
    }
    pcVar7 = (char *)(ulonglong)uVar4;
  }
LAB_14e2f331d:
  uStack_48 = 0xffffffff;
  uStack_44 = (uint)pcVar7;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  local_60 = param_1;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80._padding_._0_4_ = uStack_58;
  TStack_80._padding_._4_4_ = uStack_54;
  TStack_80.CurrentBitIndex = uStack_44;
  if ((int)uStack_44 < (int)uVar5) {
    do {
      bVar14 = bVar13 == false;
      bVar13 = false;
      if (bVar14) break;
      lVar3 = *(longlong *)(*(longlong *)param_1 + (longlong)(int)pcVar7 * 0x14);
      uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar6 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar9 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&param_2->field_0x48 - 1U &
                                  uVar5 + (int)((ulonglong)lVar3 >> 0x20)) * 4);
        if (iVar9 != -1) {
          do {
            lVar1 = *(longlong *)param_2 + (longlong)iVar9 * 0x14;
            if (*(longlong *)(*(longlong *)param_2 + (longlong)iVar9 * 0x14) == lVar3) {
              pcVar8 = (char *)(lVar1 + 8);
              if (lVar1 == 0) {
                pcVar8 = pcVar12;
              }
              if (pcVar8 != (char *)0x0) {
                bVar13 = *(char *)(*(longlong *)param_1 + 8 + (longlong)(int)pcVar7 * 0x14) ==
                         *pcVar8;
                goto LAB_14e2f33fe;
              }
              break;
            }
            iVar9 = *(int *)(lVar1 + 0xc);
          } while (iVar9 != -1);
        }
      }
      bVar13 = false;
LAB_14e2f33fe:
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      pcVar7 = (char *)(ulonglong)(uint)TStack_80.CurrentBitIndex;
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  *(undefined4 *)&param_2->field_0x48 = 0;
  if (*(void **)&param_2->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_2);
  return bVar13;
}

// NewObject<UDatasmithAssetUserData> @ 14e2f34b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDatasmithAssetUserData * __cdecl
NewObject<UDatasmithAssetUserData>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDatasmithAssetUserData *pUVar2;
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
  pUVar1 = UDatasmithAssetUserData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDatasmithAssetUserData *)
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

// NewObject<UDatasmithObjectTemplate> @ 14e2f35a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDatasmithObjectTemplate * __cdecl
NewObject<UDatasmithObjectTemplate>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDatasmithObjectTemplate *pUVar2;
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
  pUVar1 = UDatasmithObjectTemplate::StaticClass();
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
  pUVar2 = (UDatasmithObjectTemplate *)
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

// StaticEnum<enum_EDatasmithAreaLightActorShape> @ 14e2f3730

UEnum * __cdecl StaticEnum<enum_EDatasmithAreaLightActorShape>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape,
                       (UObject *)pUVar1,L"EDatasmithAreaLightActorShape");
  }
  return Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton;
}

// StaticEnum<enum_EDatasmithAreaLightActorType> @ 14e2f3770

UEnum * __cdecl StaticEnum<enum_EDatasmithAreaLightActorType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType,
                       (UObject *)pUVar1,L"EDatasmithAreaLightActorType");
  }
  return Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton;
}

// StaticEnum<enum_EDatasmithCADRetessellationRule> @ 14e2f37b0

UEnum * __cdecl StaticEnum<enum_EDatasmithCADRetessellationRule>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithCADRetessellationRule,
                       (UObject *)pUVar1,L"EDatasmithCADRetessellationRule");
  }
  return Z_Registration_Info_UEnum_EDatasmithCADRetessellationRule.OuterSingleton;
}

// StaticEnum<enum_EDatasmithCADStitchingTechnique> @ 14e2f37f0

UEnum * __cdecl StaticEnum<enum_EDatasmithCADStitchingTechnique>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithCADStitchingTechnique,
                       (UObject *)pUVar1,L"EDatasmithCADStitchingTechnique");
  }
  return Z_Registration_Info_UEnum_EDatasmithCADStitchingTechnique.OuterSingleton;
}

// StaticEnum<enum_EDatasmithImportActorPolicy> @ 14e2f3830

UEnum * __cdecl StaticEnum<enum_EDatasmithImportActorPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportActorPolicy,
                       (UObject *)pUVar1,L"EDatasmithImportActorPolicy");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportActorPolicy.OuterSingleton;
}

// StaticEnum<enum_EDatasmithImportAssetConflictPolicy> @ 14e2f3870

UEnum * __cdecl StaticEnum<enum_EDatasmithImportAssetConflictPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportAssetConflictPolicy,
                       (UObject *)pUVar1,L"EDatasmithImportAssetConflictPolicy");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportAssetConflictPolicy.OuterSingleton;
}

// StaticEnum<enum_EDatasmithImportLightmapMax> @ 14e2f38b0

UEnum * __cdecl StaticEnum<enum_EDatasmithImportLightmapMax>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMax,
                       (UObject *)pUVar1,L"EDatasmithImportLightmapMax");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportLightmapMax.OuterSingleton;
}

// StaticEnum<enum_EDatasmithImportLightmapMin> @ 14e2f38f0

UEnum * __cdecl StaticEnum<enum_EDatasmithImportLightmapMin>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportLightmapMin,
                       (UObject *)pUVar1,L"EDatasmithImportLightmapMin");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportLightmapMin.OuterSingleton;
}

// StaticEnum<enum_EDatasmithImportMaterialQuality> @ 14e2f3930

UEnum * __cdecl StaticEnum<enum_EDatasmithImportMaterialQuality>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportMaterialQuality,
                       (UObject *)pUVar1,L"EDatasmithImportMaterialQuality");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportMaterialQuality.OuterSingleton;
}

// StaticEnum<enum_EDatasmithImportScene> @ 14e2f3970

UEnum * __cdecl StaticEnum<enum_EDatasmithImportScene>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportScene,(UObject *)pUVar1,
                       L"EDatasmithImportScene");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportScene.OuterSingleton;
}

// StaticEnum<enum_EDatasmithImportSearchPackagePolicy> @ 14e2f39b0

UEnum * __cdecl StaticEnum<enum_EDatasmithImportSearchPackagePolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithImportSearchPackagePolicy,
                       (UObject *)pUVar1,L"EDatasmithImportSearchPackagePolicy");
  }
  return Z_Registration_Info_UEnum_EDatasmithImportSearchPackagePolicy.OuterSingleton;
}

// ~TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::__l2::<lambda_1>,0,0> @ 14e2f5a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UDatasmithOptionsBase::Serialize_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14e2f6794

/* [thunk]:public: virtual void * __ptr64 __cdecl UDatasmithCustomActionBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDatasmithCustomActionBase::_vector_deleting_destructor__adjustor_40__
          (UDatasmithCustomActionBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDatasmithCustomActionBase *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14e2f67a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UDatasmithScene::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDatasmithScene::_vector_deleting_destructor__adjustor_40__(UDatasmithScene *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDatasmithScene *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14e2f67c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UDatasmithOptionsBase::Serialize'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6800

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
ADatasmithAreaLightActor::_scalar_deleting_destructor_(ADatasmithAreaLightActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ADatasmithAreaLightActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6860

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
ADatasmithImportedSequencesActor::_scalar_deleting_destructor_
          (ADatasmithImportedSequencesActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADatasmithImportedSequencesActor__6B_;
  pFVar1 = (this->ImportedSequences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f68e0

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
ADatasmithSceneActor::_scalar_deleting_destructor_(ADatasmithSceneActor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ADatasmithSceneActor__6B_;
  *(undefined4 *)&(this->RelatedActors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RelatedActors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RelatedActors);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6980

void * __thiscall
IDatasmithCustomAction::_scalar_deleting_destructor_(IDatasmithCustomAction *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f69b0

void * __thiscall
UDatasmithActorTemplate::_scalar_deleting_destructor_(UDatasmithActorTemplate *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithActorTemplate__6B_;
  (this->Tags).HashSize = 0;
  FVar1 = (this->Tags).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Tags).Elements);
  (this->Layers).HashSize = 0;
  FVar1 = (this->Layers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Layers).Elements);
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6a70

void * __thiscall
UDatasmithAdditionalData::_scalar_deleting_destructor_(UDatasmithAdditionalData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithAdditionalData__6B_;
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

// `scalar_deleting_destructor' @ 14e2f6ad0

void * __thiscall
UDatasmithAreaLightActorTemplate::_scalar_deleting_destructor_
          (UDatasmithAreaLightActorTemplate *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithAreaLightActorTemplate__6B_;
  pvVar1 = *(void **)&(this->IESTexture).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6b50

void * __thiscall
UDatasmithAssetImportData::_scalar_deleting_destructor_
          (UDatasmithAssetImportData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6bb0

void * __thiscall
UDatasmithAssetUserData::_scalar_deleting_destructor_(UDatasmithAssetUserData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithAssetUserData__6B_;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetaData);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6c40

void * __thiscall
UDatasmithCADImportSceneData::_scalar_deleting_destructor_
          (UDatasmithCADImportSceneData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6ca0

void * __thiscall
UDatasmithCineCameraActorTemplate::_scalar_deleting_destructor_
          (UDatasmithCineCameraActorTemplate *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithCineCameraActorTemplate__6B_;
  pvVar1 = *(void **)&(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f6d20

void * __thiscall
UDatasmithCineCameraComponentTemplate::_scalar_deleting_destructor_
          (UDatasmithCineCameraComponentTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f6d80

void * __thiscall
UDatasmithCommonTessellationOptions::_scalar_deleting_destructor_
          (UDatasmithCommonTessellationOptions *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithOptionsBase__6B_;
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

// `scalar_deleting_destructor' @ 14e2f6de0

void * __thiscall
UDatasmithContentBlueprintLibrary::_scalar_deleting_destructor_
          (UDatasmithContentBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
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

// `scalar_deleting_destructor' @ 14e2f6e40

void * __thiscall
UDatasmithCustomActionBase::_scalar_deleting_destructor_
          (UDatasmithCustomActionBase *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDatasmithCustomAction__;
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

// `scalar_deleting_destructor' @ 14e2f6eb0

void * __thiscall
UDatasmithDecalComponentTemplate::_scalar_deleting_destructor_
          (UDatasmithDecalComponentTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f6f10

void * __thiscall
UDatasmithDeltaGenAssetImportData::_scalar_deleting_destructor_
          (UDatasmithDeltaGenAssetImportData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f6f70

void * __thiscall
UDatasmithDeltaGenSceneImportData::_scalar_deleting_destructor_
          (UDatasmithDeltaGenSceneImportData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithDeltaGenSceneImportData__6B_;
  pFVar1 = (this->TmlPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PosPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VarPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithFBXSceneImportData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7020

void * __thiscall
UDatasmithFBXSceneImportData::_scalar_deleting_destructor_
          (UDatasmithFBXSceneImportData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithFBXSceneImportData__6B_;
  pFVar1 = (this->TexturesDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f70a0

void * __thiscall
UDatasmithGLTFSceneImportData::_scalar_deleting_destructor_
          (UDatasmithGLTFSceneImportData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithGLTFSceneImportData__6B_;
  pFVar1 = (this->Source).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->License).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Author).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Generator).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7150

void * __thiscall
UDatasmithImportOptions::_scalar_deleting_destructor_(UDatasmithImportOptions *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithImportOptions__6B_;
  pFVar1 = (this->SourceUri).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithOptionsBase__6B_;
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

// `scalar_deleting_destructor' @ 14e2f71f0

void * __thiscall
UDatasmithLandscapeTemplate::_scalar_deleting_destructor_
          (UDatasmithLandscapeTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f7250

void * __thiscall
UDatasmithLightComponentTemplate::_scalar_deleting_destructor_
          (UDatasmithLightComponentTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f72b0

void * __thiscall
UDatasmithMDLSceneImportData::_scalar_deleting_destructor_
          (UDatasmithMDLSceneImportData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7310

void * __thiscall
UDatasmithMaterialInstanceTemplate::_scalar_deleting_destructor_
          (UDatasmithMaterialInstanceTemplate *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithMaterialInstanceTemplate__6B_;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StaticParameters).StaticSwitchParameters.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaticParameters);
  *(undefined4 *)&(this->TextureParameterValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TextureParameterValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextureParameterValues);
  *(undefined4 *)&(this->VectorParameterValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VectorParameterValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorParameterValues);
  *(undefined4 *)&(this->ScalarParameterValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScalarParameterValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalarParameterValues);
  pvVar1 = *(void **)&(this->ParentMaterial).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x198);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7420

void * __thiscall
UDatasmithObjectTemplate::_scalar_deleting_destructor_(UDatasmithObjectTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f7480

void * __thiscall
UDatasmithOptionsBase::_scalar_deleting_destructor_(UDatasmithOptionsBase *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithOptionsBase__6B_;
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

// `scalar_deleting_destructor' @ 14e2f74e0

void * __thiscall
UDatasmithPointLightComponentTemplate::_scalar_deleting_destructor_
          (UDatasmithPointLightComponentTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f7540

void * __thiscall
UDatasmithPostProcessVolumeTemplate::_scalar_deleting_destructor_
          (UDatasmithPostProcessVolumeTemplate *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f75a0

void * __thiscall UDatasmithScene::_scalar_deleting_destructor_(UDatasmithScene *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14e2f7610

void * __thiscall
UDatasmithSceneComponentTemplate::_scalar_deleting_destructor_
          (UDatasmithSceneComponentTemplate *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  *(undefined ***)this = &___7UDatasmithSceneComponentTemplate__6B_;
  (this->Tags).HashSize = 0;
  FVar1 = (this->Tags).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Tags).Elements);
  pvVar2 = *(void **)&(this->AttachParent).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)this = &___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f76d0

void * __thiscall
UDatasmithSceneImportData::_scalar_deleting_destructor_
          (UDatasmithSceneImportData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7730

void * __thiscall
UDatasmithSkyLightComponentTemplate::_scalar_deleting_destructor_
          (UDatasmithSkyLightComponentTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f7790

void * __thiscall
UDatasmithSpotLightComponentTemplate::_scalar_deleting_destructor_
          (UDatasmithSpotLightComponentTemplate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f77f0

void * __thiscall
UDatasmithStaticMeshCADImportData::_scalar_deleting_destructor_
          (UDatasmithStaticMeshCADImportData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7850

void * __thiscall
UDatasmithStaticMeshComponentTemplate::_scalar_deleting_destructor_
          (UDatasmithStaticMeshComponentTemplate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshComponentTemplate__6B_;
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
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

// `scalar_deleting_destructor' @ 14e2f78d0

void * __thiscall
UDatasmithStaticMeshGLTFImportData::_scalar_deleting_destructor_
          (UDatasmithStaticMeshGLTFImportData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshGLTFImportData__6B_;
  pFVar1 = (this->SourceMeshName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7950

void * __thiscall
UDatasmithStaticMeshImportData::_scalar_deleting_destructor_
          (UDatasmithStaticMeshImportData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f79b0

void * __thiscall
UDatasmithStaticMeshTemplate::_scalar_deleting_destructor_
          (UDatasmithStaticMeshTemplate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshTemplate__6B_;
  pFVar1 = (this->StaticMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuildSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SectionInfoMap).Map.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SectionInfoMap).Map.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDatasmithMeshSectionInfoTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SectionInfoMap);
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7a70

void * __thiscall
UDatasmithTranslatedSceneImportData::_scalar_deleting_destructor_
          (UDatasmithTranslatedSceneImportData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7ad0

void * __thiscall
UDatasmithVREDAssetImportData::_scalar_deleting_destructor_
          (UDatasmithVREDAssetImportData *this,uint param_1)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2f7b30

void * __thiscall
UDatasmithVREDSceneImportData::_scalar_deleting_destructor_
          (UDatasmithVREDSceneImportData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithVREDSceneImportData__6B_;
  pFVar1 = (this->ClipInfoPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LightInfoPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VarPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MatsPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithFBXSceneImportData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// AreTransformsEqual @ 14e2f8520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
`anonymous_namespace'::AreTransformsEqual(TTransform<double> *param_1,TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar14 = (param_1->Translation).ZW.m128d_f64[0] - (param_2->Translation).ZW.m128d_f64[0];
  dVar16 = (param_1->Translation).ZW.m128d_f64[1] - (param_2->Translation).ZW.m128d_f64[1];
  dVar18 = (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  dVar20 = (param_1->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
  lVar13 = -(ulonglong)
            (__real_3f8eb851e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3f8eb851e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar10 = movmskpd((int)param_1,auVar1);
  lVar13 = -(ulonglong)
            (__real_3f8eb851e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar20,0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar13;
  auVar6._0_8_ = -(ulonglong)
                  (__real_3f8eb851e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar6);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar18 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar20 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar14 = (param_1->Rotation).XY.m128d_f64[0];
    dVar16 = (param_1->Rotation).XY.m128d_f64[1];
    dVar15 = dVar18 - (param_2->Rotation).ZW.m128d_f64[0];
    dVar17 = dVar20 - (param_2->Rotation).ZW.m128d_f64[1];
    dVar18 = dVar18 + (param_2->Rotation).ZW.m128d_f64[0];
    dVar20 = dVar20 + (param_2->Rotation).ZW.m128d_f64[1];
    dVar19 = dVar14 - (param_2->Rotation).XY.m128d_f64[0];
    dVar21 = dVar16 - (param_2->Rotation).XY.m128d_f64[1];
    dVar14 = dVar14 + (param_2->Rotation).XY.m128d_f64[0];
    dVar16 = dVar16 + (param_2->Rotation).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd(0,auVar2);
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar10 = movmskpd(iVar9,auVar3);
    uVar12 = iVar11 << 2 | uVar10;
    if (uVar12 != 0) {
      lVar13 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar20,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar13;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar18,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      lVar13 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar16,0) & _UNK_15061cc88));
      auVar8._8_4_ = (int)lVar13;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar14,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar8);
      if ((uVar12 & 0x3fffffff) != 0 || uVar10 != 0) {
        return false;
      }
    }
    dVar14 = (param_1->Scale3D).ZW.m128d_f64[0] - (param_2->Scale3D).ZW.m128d_f64[0];
    dVar16 = (param_1->Scale3D).ZW.m128d_f64[1] - (param_2->Scale3D).ZW.m128d_f64[1];
    dVar18 = (param_1->Scale3D).XY.m128d_f64[0] - (param_2->Scale3D).XY.m128d_f64[0];
    dVar20 = (param_1->Scale3D).XY.m128d_f64[1] - (param_2->Scale3D).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar16,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar13;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar12 = movmskpd(0,auVar5);
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar13;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar9 = movmskpd(uVar10,auVar7);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      return true;
    }
  }
  return false;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithActorTemplate @ 14e2f8af0

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithActorTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithAdditionalData @ 14e2f8b00

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithAdditionalData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithAreaLightActor @ 14e2f8b10

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithAreaLightActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithAreaLightActorTemplate @ 14e2f8b20

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithAreaLightActorTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithAssetImportData @ 14e2f8b30

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithAssetImportData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithAssetUserData @ 14e2f8b40

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithAssetUserData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraActorTemplate @ 14e2f8b50

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraActorTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraComponentTemplate @ 14e2f8b60

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraComponentTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithContentBlueprintLibrary @ 14e2f8b70

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithContentBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithContent_init @ 14e2f8b80

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithContent_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithCustomAction @ 14e2f8b90

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithCustomAction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithDecalComponentTemplate @ 14e2f8ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithDecalComponentTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithImportOptions @ 14e2f8bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithImportOptions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithImportedSequencesActor @ 14e2f8bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithImportedSequencesActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithLandscapeTemplate @ 14e2f8bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithLandscapeTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithLightComponentTemplate @ 14e2f8be0

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithLightComponentTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithMaterialInstanceTemplate @ 14e2f8bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithMaterialInstanceTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithObjectTemplate @ 14e2f8c00

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithObjectTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithPointLightComponentTemplate @ 14e2f8c10

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithPointLightComponentTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithPostProcessVolumeTemplate @ 14e2f8c20

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithPostProcessVolumeTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithScene @ 14e2f8c30

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithScene(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithSceneActor @ 14e2f8c40

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithSceneActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithSceneComponentTemplate @ 14e2f8c50

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithSceneComponentTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithSkyLightComponentTemplate @ 14e2f8c60

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithSkyLightComponentTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithSpotLightComponentTemplate @ 14e2f8c70

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithSpotLightComponentTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithStaticMeshComponentTemplate @ 14e2f8c80

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithStaticMeshComponentTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDatasmithStaticMeshTemplate @ 14e2f8c90

void __cdecl EmptyLinkFunctionForGeneratedCodeDatasmithStaticMeshTemplate(void)

{
  return;
}

// GetAssetImportData @ 14e2fa940

UAssetImportData * __cdecl Datasmith::GetAssetImportData(UObject *param_1)

{
  return (UAssetImportData *)0x0;
}

// GetUserDataInterface @ 14e2fd8c0

IInterface_AssetUserData * __cdecl
DatasmithObjectTemplateUtilsImpl::GetUserDataInterface(UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  IInterface_AssetUserData *pIVar6;
  
  if (param_1 != (UObject *)0x0) {
    lVar2 = *(longlong *)&param_1->field_0x10;
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          param_1 = (UObject *)0x0;
        }
        param_1 = *(UObject **)(param_1 + 0xb);
        if (param_1 == (UObject *)0x0) {
          return (IInterface_AssetUserData *)0x0;
        }
      }
    }
    pUVar4 = *(UClass **)&((UObjectBaseUtility *)param_1)->field_0x10;
    pUVar5 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
    bVar3 = UClass::ImplementsInterface(pUVar4,pUVar5);
    if (bVar3) {
      pUVar4 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
      pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar4);
      return pIVar6;
    }
  }
  return (IInterface_AssetUserData *)0x0;
}

// Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister @ 14e2fff60

UClass * __cdecl Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAreaLightActor",
               &Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton,
               ADatasmithAreaLightActor::StaticRegisterNativesADatasmithAreaLightActor,0x338,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADatasmithAreaLightActor>,
               InternalVTableHelperCtorCaller<ADatasmithAreaLightActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithAreaLightActor.InnerSingleton;
}

// Z_Construct_UClass_ADatasmithImportedSequencesActor_NoRegister @ 14e300020

UClass * __cdecl Z_Construct_UClass_ADatasmithImportedSequencesActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithImportedSequencesActor",
               &Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton,
               ADatasmithImportedSequencesActor::
               StaticRegisterNativesADatasmithImportedSequencesActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADatasmithImportedSequencesActor>,
               InternalVTableHelperCtorCaller<ADatasmithImportedSequencesActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton;
}

// Z_Construct_UClass_ADatasmithSceneActor_NoRegister @ 14e3000e0

UClass * __cdecl Z_Construct_UClass_ADatasmithSceneActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneActor",
               &Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton,
               ADatasmithSceneActor::StaticRegisterNativesADatasmithSceneActor,0x318,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADatasmithSceneActor>,
               InternalVTableHelperCtorCaller<ADatasmithSceneActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithActorTemplate_NoRegister @ 14e3001a0

UClass * __cdecl Z_Construct_UClass_UDatasmithActorTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton,
               UDatasmithActorTemplate::StaticRegisterNativesUDatasmithActorTemplate,0xd0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithActorTemplate>
               ,InternalVTableHelperCtorCaller<UDatasmithActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithAdditionalData_NoRegister @ 14e300260

UClass * __cdecl Z_Construct_UClass_UDatasmithAdditionalData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAdditionalData",
               &Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton,
               UDatasmithAdditionalData::StaticRegisterNativesUDatasmithAdditionalData,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithAdditionalData>,
               InternalVTableHelperCtorCaller<UDatasmithAdditionalData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithAreaLightActorTemplate_NoRegister @ 14e300310

UClass * __cdecl Z_Construct_UClass_UDatasmithAreaLightActorTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAreaLightActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton,
               UDatasmithAreaLightActorTemplate::
               StaticRegisterNativesUDatasmithAreaLightActorTemplate,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithAreaLightActorTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithAreaLightActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithAssetImportData_NoRegister @ 14e3003d0

UClass * __cdecl Z_Construct_UClass_UDatasmithAssetImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton,
               UDatasmithAssetImportData::StaticRegisterNativesUDatasmithAssetImportData,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithAssetImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithCADImportSceneData_NoRegister @ 14e300490

UClass * __cdecl Z_Construct_UClass_UDatasmithCADImportSceneData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCADImportSceneData",
               &Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton,
               UDatasmithCADImportSceneData::StaticRegisterNativesUDatasmithCADImportSceneData,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithCADImportSceneData>,
               InternalVTableHelperCtorCaller<UDatasmithCADImportSceneData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithCineCameraActorTemplate_NoRegister @ 14e300550

UClass * __cdecl Z_Construct_UClass_UDatasmithCineCameraActorTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCineCameraActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton,
               UDatasmithCineCameraActorTemplate::
               StaticRegisterNativesUDatasmithCineCameraActorTemplate,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCineCameraActorTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithCineCameraActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_NoRegister @ 14e300610

UClass * __cdecl Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCineCameraComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton,
               UDatasmithCineCameraComponentTemplate::
               StaticRegisterNativesUDatasmithCineCameraComponentTemplate,0x90,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCineCameraComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithCineCameraComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister @ 14e3006d0

UClass * __cdecl Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCommonTessellationOptions",
               &Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton,
               UDatasmithCommonTessellationOptions::
               StaticRegisterNativesUDatasmithCommonTessellationOptions,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDatasmithCommonTessellationOptions>,
               InternalVTableHelperCtorCaller<UDatasmithCommonTessellationOptions>,local_res8,
               UDatasmithOptionsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithContentBlueprintLibrary_NoRegister @ 14e300790

UClass * __cdecl Z_Construct_UClass_UDatasmithContentBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithContentBlueprintLibrary",
               &Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton,
               UDatasmithContentBlueprintLibrary::
               StaticRegisterNativesUDatasmithContentBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithContentBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UDatasmithContentBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithContentBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister @ 14e300850

UClass * __cdecl Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCustomActionBase",
               &Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton,
               UDatasmithCustomActionBase::StaticRegisterNativesUDatasmithCustomActionBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithCustomActionBase>,
               InternalVTableHelperCtorCaller<UDatasmithCustomActionBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCustomActionBase.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithDecalComponentTemplate_NoRegister @ 14e300900

UClass * __cdecl Z_Construct_UClass_UDatasmithDecalComponentTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDecalComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton,
               UDatasmithDecalComponentTemplate::
               StaticRegisterNativesUDatasmithDecalComponentTemplate,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDecalComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithDecalComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_NoRegister @ 14e3009c0

UClass * __cdecl Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDeltaGenAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton,
               UDatasmithDeltaGenAssetImportData::
               StaticRegisterNativesUDatasmithDeltaGenAssetImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDeltaGenAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithDeltaGenAssetImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_NoRegister @ 14e300a80

UClass * __cdecl Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDeltaGenSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton,
               UDatasmithDeltaGenSceneImportData::
               StaticRegisterNativesUDatasmithDeltaGenSceneImportData,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDeltaGenSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithDeltaGenSceneImportData>,local_res8,
               UDatasmithFBXSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithFBXSceneImportData_NoRegister @ 14e300b40

UClass * __cdecl Z_Construct_UClass_UDatasmithFBXSceneImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithFBXSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton,
               UDatasmithFBXSceneImportData::StaticRegisterNativesUDatasmithFBXSceneImportData,0x48,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithFBXSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithFBXSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithGLTFSceneImportData_NoRegister @ 14e300c00

UClass * __cdecl Z_Construct_UClass_UDatasmithGLTFSceneImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithGLTFSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton,
               UDatasmithGLTFSceneImportData::StaticRegisterNativesUDatasmithGLTFSceneImportData,
               0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithGLTFSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithGLTFSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithImportOptions_NoRegister @ 14e300cc0

UClass * __cdecl Z_Construct_UClass_UDatasmithImportOptions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithImportOptions",
               &Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton,
               UDatasmithImportOptions::StaticRegisterNativesUDatasmithImportOptions,0x90,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDatasmithImportOptions>,
               InternalVTableHelperCtorCaller<UDatasmithImportOptions>,local_res8,
               UDatasmithOptionsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithImportOptions.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithLandscapeTemplate_NoRegister @ 14e300d80

UClass * __cdecl Z_Construct_UClass_UDatasmithLandscapeTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithLandscapeTemplate",
               &Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton,
               UDatasmithLandscapeTemplate::StaticRegisterNativesUDatasmithLandscapeTemplate,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithLandscapeTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithLandscapeTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithLightComponentTemplate_NoRegister @ 14e300e40

UClass * __cdecl Z_Construct_UClass_UDatasmithLightComponentTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton,
               UDatasmithLightComponentTemplate::
               StaticRegisterNativesUDatasmithLightComponentTemplate,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithMDLSceneImportData_NoRegister @ 14e300f00

UClass * __cdecl Z_Construct_UClass_UDatasmithMDLSceneImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithMDLSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton,
               UDatasmithMDLSceneImportData::StaticRegisterNativesUDatasmithMDLSceneImportData,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithMDLSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithMDLSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_NoRegister @ 14e300fc0

UClass * __cdecl Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithMaterialInstanceTemplate",
               &Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton,
               UDatasmithMaterialInstanceTemplate::
               StaticRegisterNativesUDatasmithMaterialInstanceTemplate,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithMaterialInstanceTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithMaterialInstanceTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister @ 14e301080

UClass * __cdecl Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithObjectTemplate",
               &Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton,
               UDatasmithObjectTemplate::StaticRegisterNativesUDatasmithObjectTemplate,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithObjectTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithObjectTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithObjectTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithOptionsBase_NoRegister @ 14e301130

UClass * __cdecl Z_Construct_UClass_UDatasmithOptionsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithOptionsBase",
               &Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton,
               UDatasmithOptionsBase::StaticRegisterNativesUDatasmithOptionsBase,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithOptionsBase>,
               InternalVTableHelperCtorCaller<UDatasmithOptionsBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithOptionsBase.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithPointLightComponentTemplate_NoRegister @ 14e3011e0

UClass * __cdecl Z_Construct_UClass_UDatasmithPointLightComponentTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithPointLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton,
               UDatasmithPointLightComponentTemplate::
               StaticRegisterNativesUDatasmithPointLightComponentTemplate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithPointLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithPointLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_NoRegister @ 14e3012a0

UClass * __cdecl Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithPostProcessVolumeTemplate",
               &Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton,
               UDatasmithPostProcessVolumeTemplate::
               StaticRegisterNativesUDatasmithPostProcessVolumeTemplate,0x80,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithPostProcessVolumeTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithPostProcessVolumeTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithSceneComponentTemplate_NoRegister @ 14e301360

UClass * __cdecl Z_Construct_UClass_UDatasmithSceneComponentTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton,
               UDatasmithSceneComponentTemplate::
               StaticRegisterNativesUDatasmithSceneComponentTemplate,0x120,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSceneComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSceneComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithSceneImportData_NoRegister @ 14e301420

UClass * __cdecl Z_Construct_UClass_UDatasmithSceneImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton,
               UDatasmithSceneImportData::StaticRegisterNativesUDatasmithSceneImportData,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithSceneImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_NoRegister @ 14e3014e0

UClass * __cdecl Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSkyLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton,
               UDatasmithSkyLightComponentTemplate::
               StaticRegisterNativesUDatasmithSkyLightComponentTemplate,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSkyLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSkyLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_NoRegister @ 14e3015a0

UClass * __cdecl Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSpotLightComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton,
               UDatasmithSpotLightComponentTemplate::
               StaticRegisterNativesUDatasmithSpotLightComponentTemplate,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSpotLightComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSpotLightComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshCADImportData_NoRegister @ 14e301660

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshCADImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshCADImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton,
               UDatasmithStaticMeshCADImportData::
               StaticRegisterNativesUDatasmithStaticMeshCADImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshCADImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshCADImportData>,local_res8,
               UDatasmithStaticMeshImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_NoRegister @ 14e301720

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton,
               UDatasmithStaticMeshComponentTemplate::
               StaticRegisterNativesUDatasmithStaticMeshComponentTemplate,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_NoRegister @ 14e3017e0

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshGLTFImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton,
               UDatasmithStaticMeshGLTFImportData::
               StaticRegisterNativesUDatasmithStaticMeshGLTFImportData,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshGLTFImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshGLTFImportData>,local_res8,
               UDatasmithStaticMeshImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshImportData_NoRegister @ 14e3018a0

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton,
               UDatasmithStaticMeshImportData::StaticRegisterNativesUDatasmithStaticMeshImportData,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithStaticMeshImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithStaticMeshTemplate_NoRegister @ 14e301960

UClass * __cdecl Z_Construct_UClass_UDatasmithStaticMeshTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshTemplate",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton,
               UDatasmithStaticMeshTemplate::StaticRegisterNativesUDatasmithStaticMeshTemplate,0xa8,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithStaticMeshTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshTemplate.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithTranslatedSceneImportData_NoRegister @ 14e301a20

UClass * __cdecl Z_Construct_UClass_UDatasmithTranslatedSceneImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithTranslatedSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton,
               UDatasmithTranslatedSceneImportData::
               StaticRegisterNativesUDatasmithTranslatedSceneImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithTranslatedSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithTranslatedSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithVREDAssetImportData_NoRegister @ 14e301ae0

UClass * __cdecl Z_Construct_UClass_UDatasmithVREDAssetImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithVREDAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton,
               UDatasmithVREDAssetImportData::StaticRegisterNativesUDatasmithVREDAssetImportData,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithVREDAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithVREDAssetImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton;
}

// Z_Construct_UClass_UDatasmithVREDSceneImportData_NoRegister @ 14e301ba0

UClass * __cdecl Z_Construct_UClass_UDatasmithVREDSceneImportData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithVREDSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton,
               UDatasmithVREDSceneImportData::StaticRegisterNativesUDatasmithVREDSceneImportData,
               0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDatasmithVREDSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithVREDSceneImportData>,local_res8,
               UDatasmithFBXSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDatasmithImportInfo @ 14e301c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithImportInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithImportInfo.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithImportInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithImportInfo.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FDatasmithImportInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDatasmithRetessellationOptions @ 14e301ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDatasmithRetessellationOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithRetessellationOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDatasmithRetessellationOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDatasmithRetessellationOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDatasmithRetessellationOptions.InnerSingleton;
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

// IMPLEMENT_MODULE_DatasmithContent @ 14e302fb0

void __cdecl IMPLEMENT_MODULE_DatasmithContent(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogDatasmithContent'' @ 1504641f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDatasmithContent__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDatasmithContent);
  return;
}

