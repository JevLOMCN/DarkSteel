// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 234

// ResonanceApiMap'' @ 141450c80

void __cdecl
`dynamic_initializer_for_'ResonanceAudio::FResonanceAudioPluginListener::ResonanceApiMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'ResonanceAudio::FResonanceAudioPluginListener::
         ResonanceApiMap__);
  return;
}

// ResonanceApiMapCriticalSection'' @ 141450ca0

void __cdecl
`dynamic_initializer_for_'ResonanceAudio::FResonanceAudioPluginListener::
ResonanceApiMapCriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &ResonanceAudio::FResonanceAudioPluginListener::ResonanceApiMapCriticalSection,4000);
  atexit(`dynamic_atexit_destructor_for_'ResonanceAudio::FResonanceAudioPluginListener::
         ResonanceApiMapCriticalSection__);
  return;
}

// `dynamic_initializer_for_'CVarExtraResonanceLogging'' @ 141450cd0

void __cdecl _dynamic_initializer_for__CVarExtraResonanceLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarExtraResonanceLogging,L"au.ExtraResonanceLogging",&ExtraResonanceLoggingCVar,
             L"If non-zero, will log extra information about the state of Resonance HRTF processing.\n0: Disable, >0: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarExtraResonanceLogging__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreUserResonanceSubmix'' @ 141450d20

void __cdecl _dynamic_initializer_for__CVarIgnoreUserResonanceSubmix__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIgnoreUserResonanceSubmix,L"au.IgnoreUserResonanceSubmix",
             &IgnoreUserResonanceSubmixCVar,
             L"When set to 1, the resonance project setting will be bypassed.\n1: Submix Effects are disabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreUserResonanceSubmix__);
  return;
}

// `dynamic_initializer_for_'CVarResonanceQualityOverride'' @ 141450d70

void __cdecl _dynamic_initializer_for__CVarResonanceQualityOverride__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResonanceQualityOverride,L"au.resonance.quality",&ResonanceQualityOverrideCVar,
             L"Override the quality of resonance sound sources. Will not increase quality levels. The quality used will be min of the quality in the resonance source settings and this override.\n0: Quality is not overridden, 1: Stereo Panning, 2: Low Quality, 3: Medium Quality, 4: High Quality"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResonanceQualityOverride__);
  return;
}

// `dynamic_initializer_for_'CVarUsingReverb'' @ 141450dc0

void __cdecl ResonanceAudioConsoleVariables::_dynamic_initializer_for__CVarUsingReverb__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUsingReverb,L"au.Resonance.UsingReverb",&bUsingReverb,
             L"Allows Resonance to Query AudioVolumes for reverb effects.\n0: Disable, 1: Enable (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUsingReverb__);
  return;
}

// `dynamic_initializer_for_'LogResonanceAudio'' @ 141450e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogResonanceAudio__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogResonanceAudio,L"LogResonanceAudio",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogResonanceAudio__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantResonanceAudio'' @ 141450e50

void __cdecl _dynamic_initializer_for__ModuleRegistrantResonanceAudio__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ResonanceAudio";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ResonanceAudio",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<ResonanceAudio::FResonanceAudioModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 141450ea0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 141450ec0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 141450ee0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 141450f00

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 141450f20

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 141450f40

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 141450f60

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 141450f80

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioDirectivityVisualizer_h__Script_ResonanceAudio_2746695387'' @ 141450fa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioDirectivityVisualizer_h__Script_ResonanceAudio_2746695387__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ResonanceAudio",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioDirectivityVisualizer_h__Script_ResonanceAudio_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h__Script_ResonanceAudio_4260281642'' @ 141450fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h__Script_ResonanceAudio_4260281642__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ResonanceAudio",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h__Script_ResonanceAudio_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h__Script_ResonanceAudio_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h__Script_ResonanceAudio_294699768'' @ 141451030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h__Script_ResonanceAudio_294699768__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ResonanceAudio",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioSettings_h__Script_ResonanceAudio_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h__Script_ResonanceAudio_1888084147'' @ 141451070

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h__Script_ResonanceAudio_1888084147__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ResonanceAudio",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h__Script_ResonanceAudio_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h__Script_ResonanceAudio_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h__Script_ResonanceAudio_2615252967'' @ 1414510c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h__Script_ResonanceAudio_2615252967__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ResonanceAudio",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h__Script_ResonanceAudio_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioEnums_h__Script_ResonanceAudio_1148639114'' @ 141451100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioEnums_h__Script_ResonanceAudio_1148639114__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ResonanceAudio",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioEnums_h__Script_ResonanceAudio_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h__Script_ResonanceAudio_64474925'' @ 141451150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h__Script_ResonanceAudio_64474925__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ResonanceAudio",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioSpatializationSourceSettings_h__Script_ResonanceAudio_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ResonanceAudio'' @ 141451190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ResonanceAudio__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x19665cda;
  local_res8[0].DeclarationsHash = 0x4d87ac1a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ResonanceAudio,L"/Script/ResonanceAudio",
             &Z_Registration_Info_UPackage__Script_ResonanceAudio,local_res8);
  return;
}

// Z_Construct_UClass_UResonanceAudioSoundfieldSettings @ 14f041210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UResonanceAudioSoundfieldSettings(void)

{
  if (Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.OuterSingleton,
               &Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.OuterSingleton;
}

// Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode @ 14f041250

UEnum * __cdecl Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode(void)

{
  if (Z_Registration_Info_UEnum_EResonanceRenderMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EResonanceRenderMode.InnerSingleton,
               &Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EResonanceRenderMode.InnerSingleton;
}

// EResonanceRenderMode_StaticEnum @ 14f041290

UEnum * __cdecl EResonanceRenderMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode,(UObject *)pUVar1,
                       L"EResonanceRenderMode");
  }
  return Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton;
}

// Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary @ 14f041390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset @ 14f0413d0

UFunction * __cdecl
Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset @ 14f041410

UFunction * __cdecl
Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister @ 14f041510

UClass * __cdecl Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSpatializationSourceSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.
                InnerSingleton,
               UResonanceAudioSpatializationSourceSettings::
               StaticRegisterNativesUResonanceAudioSpatializationSourceSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UResonanceAudioSpatializationSourceSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSpatializationSourceSettings>,
               local_res8,USpatializationPluginSourceSettingsBase::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.InnerSingleton;
}

// Z_Construct_UClass_UResonanceAudioReverbPluginPreset @ 14f041740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UResonanceAudioReverbPluginPreset(void)

{
  if (Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.OuterSingleton,
               &Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings @ 14f041780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FResonanceAudioReverbPluginSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FResonanceAudioReverbPluginSettings.InnerSingleton
               ,&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FResonanceAudioReverbPluginSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FResonanceAudioReverbPluginSettings.InnerSingleton;
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

// NewProp_bEnableRoomEffects_SetBit @ 14f041800

void __cdecl
Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::
NewProp_bEnableRoomEffects_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bGetTransformFromAudioVolume_SetBit @ 14f041810

void __cdecl
Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::
NewProp_bGetTransformFromAudioVolume_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14f041820

void * __cdecl
Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FResonanceAudioReverbPluginSettings,&UE::CoreUObject::Private::Construct<FResonanceAudioReverbPluginSettings>,&UE::CoreUObject::Private::ConstructForTests<FResonanceAudioReverbPluginSettings>,&UE::CoreUObject::Private::Destruct<FResonanceAudioReverbPluginSettings>,&UE::CoreUObject::Private::Copy<FResonanceAudioReverbPluginSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_ResonanceAudio @ 14f041860

UPackage * __cdecl Z_Construct_UPackage__Script_ResonanceAudio(void)

{
  if (Z_Registration_Info_UPackage__Script_ResonanceAudio.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ResonanceAudio.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ResonanceAudio.OuterSingleton;
}

// NewProp_bInEnableRoomEffects_SetBit @ 14f0418a0

void __cdecl
Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::
NewProp_bInEnableRoomEffects_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects @ 14f0418b0

UFunction * __cdecl
Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar @ 14f0418f0

UFunction * __cdecl
Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel @ 14f041930

UEnum * __cdecl Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel(void)

{
  if (Z_Registration_Info_UEnum_ERaDistanceRolloffModel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERaDistanceRolloffModel.InnerSingleton,
               &Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERaDistanceRolloffModel.InnerSingleton;
}

// Z_Construct_UEnum_ResonanceAudio_ERaMaterialName @ 14f041970

UEnum * __cdecl Z_Construct_UEnum_ResonanceAudio_ERaMaterialName(void)

{
  if (Z_Registration_Info_UEnum_ERaMaterialName.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERaMaterialName.InnerSingleton,
               &Z_Construct_UEnum_ResonanceAudio_ERaMaterialName_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERaMaterialName.InnerSingleton;
}

// Z_Construct_UEnum_ResonanceAudio_ERaQualityMode @ 14f0419b0

UEnum * __cdecl Z_Construct_UEnum_ResonanceAudio_ERaQualityMode(void)

{
  if (Z_Registration_Info_UEnum_ERaQualityMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERaQualityMode.InnerSingleton,
               &Z_Construct_UEnum_ResonanceAudio_ERaQualityMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERaQualityMode.InnerSingleton;
}

// Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod @ 14f0419f0

UEnum * __cdecl Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod(void)

{
  if (Z_Registration_Info_UEnum_ERaSpatializationMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERaSpatializationMethod.InnerSingleton,
               &Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERaSpatializationMethod.InnerSingleton;
}

// ERaQualityMode_StaticEnum @ 14f041a30

UEnum * __cdecl ERaQualityMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaQualityMode,(UObject *)pUVar1,
                       L"ERaQualityMode");
  }
  return Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness @ 14f041a70

UFunction * __cdecl
Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ERaSpatializationMethod_StaticEnum @ 14f041ab0

UEnum * __cdecl ERaSpatializationMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod,(UObject *)pUVar1,
                       L"ERaSpatializationMethod");
  }
  return Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain @ 14f041af0

UFunction * __cdecl Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ERaDistanceRolloffModel_StaticEnum @ 14f041b30

UEnum * __cdecl ERaDistanceRolloffModel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel,(UObject *)pUVar1,
                       L"ERaDistanceRolloffModel");
  }
  return Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier @ 14f041b70

UFunction * __cdecl
Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ERaMaterialName_StaticEnum @ 14f041bb0

UEnum * __cdecl ERaMaterialName_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaMaterialName,(UObject *)pUVar1,
                       L"ERaMaterialName");
  }
  return Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions @ 14f041bf0

UFunction * __cdecl Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials @ 14f041c30

UFunction * __cdecl Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition @ 14f041c70

UFunction * __cdecl Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation @ 14f041d70

UFunction * __cdecl Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister @ 14f041db0

UClass * __cdecl Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioReverbPluginPreset",
               &Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton,
               UResonanceAudioReverbPluginPreset::
               StaticRegisterNativesUResonanceAudioReverbPluginPreset,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioReverbPluginPreset>,
               InternalVTableHelperCtorCaller<UResonanceAudioReverbPluginPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton;
}

// Z_Construct_UClass_AResonanceAudioDirectivityVisualizer @ 14f041f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AResonanceAudioDirectivityVisualizer(void)

{
  if (Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.OuterSingleton,
               &Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.OuterSingleton;
}

// Z_Construct_UClass_UResonanceAudioSettings @ 14f041fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UResonanceAudioSettings(void)

{
  if (Z_Registration_Info_UClass_UResonanceAudioSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UResonanceAudioSettings.OuterSingleton,
               &Z_Construct_UClass_UResonanceAudioSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSettings.OuterSingleton;
}

// Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings @ 14f042170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings(void)

{
  if (Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.
                OuterSingleton,
               &Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.OuterSingleton;
}

// Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity @ 14f0421b0

UFunction * __cdecl
Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread @ 14f0421f0

UFunction * __cdecl
Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bToggleVisualization_SetBit @ 14f042230

void __cdecl
Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::
NewProp_bToggleVisualization_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// DefaultConstructItems<ResonanceAudio::FBinauralSource,int> @ 14f042240

void __cdecl DefaultConstructItems<ResonanceAudio::FBinauralSource,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + -4) = 0;
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DowncastSoundfieldRef<FAmbisonicsSoundfieldBuffer_const_,ISoundfieldAudioPacket_const_> @ 14f042280

FAmbisonicsSoundfieldBuffer * __cdecl
DowncastSoundfieldRef<FAmbisonicsSoundfieldBuffer_const_,ISoundfieldAudioPacket_const_>
          (ISoundfieldAudioPacket *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAmbisonicsSoundfieldBuffer *pFVar3;
  
  if (param_1 == (ISoundfieldAudioPacket *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAmbisonicsSoundfieldBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FAmbisonicsSoundfieldBuffer *)param_1;
}

// DowncastSoundfieldRef<FAmbisonicsSoundfieldSettings_const_,ISoundfieldEncodingSettingsProxy_const_> @ 14f0422d0

FAmbisonicsSoundfieldSettings * __cdecl
DowncastSoundfieldRef<FAmbisonicsSoundfieldSettings_const_,ISoundfieldEncodingSettingsProxy_const_>
          (ISoundfieldEncodingSettingsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAmbisonicsSoundfieldSettings *pFVar3;
  
  if (param_1 == (ISoundfieldEncodingSettingsProxy *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAmbisonicsSoundfieldSettings *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FAmbisonicsSoundfieldSettings *)param_1;
}

// DowncastSoundfieldRef<FResonanceAmbisonicsSettingsProxy_const_,ISoundfieldEncodingSettingsProxy_const_> @ 14f042320

FResonanceAmbisonicsSettingsProxy * __cdecl
DowncastSoundfieldRef<FResonanceAmbisonicsSettingsProxy_const_,ISoundfieldEncodingSettingsProxy_const_>
          (ISoundfieldEncodingSettingsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  FResonanceAmbisonicsSettingsProxy *pFVar3;
  
  if (param_1 == (ISoundfieldEncodingSettingsProxy *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FResonanceAmbisonicsSettingsProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FResonanceAmbisonicsSettingsProxy *)param_1;
}

// DowncastSoundfieldRef<FResonanceAmbisonicsSettingsProxy_const_,ISoundfieldEncodingSettingsProxy> @ 14f042370

FResonanceAmbisonicsSettingsProxy * __cdecl
DowncastSoundfieldRef<FResonanceAmbisonicsSettingsProxy_const_,ISoundfieldEncodingSettingsProxy>
          (ISoundfieldEncodingSettingsProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  FResonanceAmbisonicsSettingsProxy *pFVar3;
  
  if (param_1 == (ISoundfieldEncodingSettingsProxy *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FResonanceAmbisonicsSettingsProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FResonanceAmbisonicsSettingsProxy *)param_1;
}

// DowncastSoundfieldRef<ResonanceAudio::FResonancePacket_const_,ISoundfieldAudioPacket_const_> @ 14f0423c0

FResonancePacket * __cdecl
DowncastSoundfieldRef<ResonanceAudio::FResonancePacket_const_,ISoundfieldAudioPacket_const_>
          (ISoundfieldAudioPacket *param_1)

{
  code *pcVar1;
  bool bVar2;
  FResonancePacket *pFVar3;
  
  if (param_1 == (ISoundfieldAudioPacket *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FResonancePacket *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FResonancePacket *)param_1;
}

// DowncastSoundfieldRef<ResonanceAudio::FResonancePacket_const_,ISoundfieldAudioPacket> @ 14f042410

FResonancePacket * __cdecl
DowncastSoundfieldRef<ResonanceAudio::FResonancePacket_const_,ISoundfieldAudioPacket>
          (ISoundfieldAudioPacket *param_1)

{
  code *pcVar1;
  bool bVar2;
  FResonancePacket *pFVar3;
  
  if (param_1 == (ISoundfieldAudioPacket *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FResonancePacket *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FResonancePacket *)param_1;
}

// DowncastSoundfieldRef<ResonanceAudio::FResonancePacket,ISoundfieldAudioPacket> @ 14f042460

FResonancePacket * __cdecl
DowncastSoundfieldRef<ResonanceAudio::FResonancePacket,ISoundfieldAudioPacket>
          (ISoundfieldAudioPacket *param_1)

{
  code *pcVar1;
  bool bVar2;
  FResonancePacket *pFVar3;
  
  if (param_1 == (ISoundfieldAudioPacket *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FResonancePacket *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FResonancePacket *)param_1;
}

// GetDefault<UResonanceAudioSettings> @ 14f042750

UResonanceAudioSettings * __cdecl GetDefault<UResonanceAudioSettings>(void)

{
  UClass *this;
  
  this = UResonanceAudioSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UResonanceAudioSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UResonanceAudioSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// InternalConstructor<AResonanceAudioDirectivityVisualizer> @ 14f042840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AResonanceAudioDirectivityVisualizer>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  longlong *plVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    *(undefined4 *)&this[1]._padding_ = 0x80;
    this->_padding_ = (longlong)&___7AResonanceAudioDirectivityVisualizer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    AActor::SetActorHiddenInGame(this,true);
    pFVar2 = FName::FName(&local_res8,L"VisualizationMesh");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
    pUVar4 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    *(USceneComponent **)&this[1].CustomTimeDilation = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar4;
    plVar5 = (longlong *)(*(longlong *)&this[1].CustomTimeDilation + 0x590);
    (**(code **)(*plVar5 + 0x20))(plVar5,0);
  }
  return;
}

// InternalConstructor<UResonanceAudioBlueprintFunctionLibrary> @ 14f042970

void __cdecl
InternalConstructor<UResonanceAudioBlueprintFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UResonanceAudioBlueprintFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UResonanceAudioReverbPluginPreset> @ 14f0429a0

void __cdecl InternalConstructor<UResonanceAudioReverbPluginPreset>(FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset *this;
  undefined8 uVar1;
  double dVar2;
  
  this = (USoundEffectSubmixPreset *)param_1->Obj;
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7UResonanceAudioReverbPluginPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined2 *)&this[1].field_0x28 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x38 = uVar1;
    *(double *)&this[1].field_0x40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)&this[1].field_0x48 = UE::Math::TQuat<double>::Identity.X;
    *(double *)&this[1].field_0x50 = dVar2;
    dVar2 = UE::Math::TQuat<double>::Identity.W;
    *(double *)&this[1].field_0x58 = UE::Math::TQuat<double>::Identity.Z;
    *(double *)&this[1].field_0x60 = dVar2;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(this + 2) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[2].field_0x8 = uVar1;
    *(double *)&this[2].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined2 *)&this[2].field_0x1c = 0;
    *(undefined4 *)&this[2].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x24 = 0x3f800000;
    *(undefined8 *)&this[2].field_0x28 = 0x3f800000;
    *(undefined2 *)&this[2].field_0x30 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[2].field_0x38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[2].field_0x40 = uVar1;
    *(double *)&this[2].field_0x48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)&this[2].field_0x50 = UE::Math::TQuat<double>::Identity.X;
    *(double *)&this[2].field_0x58 = dVar2;
    dVar2 = UE::Math::TQuat<double>::Identity.W;
    *(double *)&this[2].field_0x60 = UE::Math::TQuat<double>::Identity.Z;
    *(double *)(this + 3) = dVar2;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[3].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[3].field_0x10 = uVar1;
    *(double *)&this[3].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined2 *)&this[3].field_0x24 = 0;
    *(undefined4 *)&this[3].field_0x28 = 0x3f800000;
    *(undefined4 *)&this[3].field_0x2c = 0x3f800000;
    *(undefined8 *)&this[3].field_0x30 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UResonanceAudioSettings> @ 14f042b10

void __cdecl InternalConstructor<UResonanceAudioSettings>(FObjectInitializer *param_1)

{
  int iVar1;
  UObject *this;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    this[1].field_0x20 = 3;
    *(undefined ***)this = &___7UResonanceAudioSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    pFVar2 = FString::FString(&local_18,
                              L"/ResonanceAudio/ResonanceSubmixDefault.ResonanceSubmixDefault");
    local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    iVar1 = (pFVar2->Data).ArrayNum;
    local_28.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_28.Size = 0;
    }
    FSoftObjectPath::SetPath((FSoftObjectPath *)(this + 1),&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InternalConstructor<UResonanceAudioSoundfieldSettings> @ 14f042be0

void __cdecl InternalConstructor<UResonanceAudioSoundfieldSettings>(FObjectInitializer *param_1)

{
  USoundfieldEncodingSettingsBase *this;
  
  this = (USoundfieldEncodingSettingsBase *)param_1->Obj;
  if (this != (USoundfieldEncodingSettingsBase *)0x0) {
    USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase(this,param_1);
    *(undefined1 *)(this + 1) = 3;
    *(undefined ***)this = &___7UResonanceAudioSoundfieldSettings__6B_;
  }
  return;
}

// InternalConstructor<UResonanceAudioSpatializationSourceSettings> @ 14f042c20

void __cdecl
InternalConstructor<UResonanceAudioSpatializationSourceSettings>(FObjectInitializer *param_1)

{
  USpatializationPluginSourceSettingsBase *this;
  FObjectInitializer *pFVar1;
  
  this = (USpatializationPluginSourceSettingsBase *)param_1->Obj;
  if (this != (USpatializationPluginSourceSettingsBase *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    USpatializationPluginSourceSettingsBase::USpatializationPluginSourceSettingsBase(this,pFVar1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UResonanceAudioSpatializationSourceSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0;
    this[1].field_0xc = 0;
    *(undefined4 *)&this[1].field_0x1c = 0;
    *(undefined4 *)&this[1].field_0x8 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x10 = 0x3f800000;
    this[1].field_0x18 = 2;
    *(undefined4 *)&this[1].field_0x20 = 0x47435000;
  }
  return;
}

// InternalVTableHelperCtorCaller<AResonanceAudioDirectivityVisualizer> @ 14f042c80

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
InternalVTableHelperCtorCaller<AResonanceAudioDirectivityVisualizer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AResonanceAudioDirectivityVisualizer::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x80;
    this->_padding_ = (longlong)&___7AResonanceAudioDirectivityVisualizer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UResonanceAudioBlueprintFunctionLibrary> @ 14f042da0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UResonanceAudioBlueprintFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UResonanceAudioBlueprintFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UResonanceAudioBlueprintFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UResonanceAudioReverbPluginPreset> @ 14f042e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UResonanceAudioReverbPluginPreset>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  USoundEffectSubmixPreset *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UResonanceAudioReverbPluginPreset::GetPrivateStaticClass();
  this = (USoundEffectSubmixPreset *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USoundEffectSubmixPreset *)0x0) {
    USoundEffectSubmixPreset::USoundEffectSubmixPreset(this,param_1);
    *(undefined ***)this = &___7UResonanceAudioReverbPluginPreset__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    *(undefined2 *)&this[1].field_0x28 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[1].field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[1].field_0x38 = uVar1;
    *(double *)&this[1].field_0x40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)&this[1].field_0x48 = UE::Math::TQuat<double>::Identity.X;
    *(double *)&this[1].field_0x50 = dVar2;
    dVar2 = UE::Math::TQuat<double>::Identity.W;
    *(double *)&this[1].field_0x58 = UE::Math::TQuat<double>::Identity.Z;
    *(double *)&this[1].field_0x60 = dVar2;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(this + 2) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[2].field_0x8 = uVar1;
    *(double *)&this[2].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined2 *)&this[2].field_0x1c = 0;
    *(undefined4 *)&this[2].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x24 = 0x3f800000;
    *(undefined8 *)&this[2].field_0x28 = 0x3f800000;
    *(undefined2 *)&this[2].field_0x30 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[2].field_0x38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[2].field_0x40 = uVar1;
    *(double *)&this[2].field_0x48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    *(double *)&this[2].field_0x50 = UE::Math::TQuat<double>::Identity.X;
    *(double *)&this[2].field_0x58 = dVar2;
    dVar2 = UE::Math::TQuat<double>::Identity.W;
    *(double *)&this[2].field_0x60 = UE::Math::TQuat<double>::Identity.Z;
    *(double *)(this + 3) = dVar2;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[3].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[3].field_0x10 = uVar1;
    *(double *)&this[3].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined2 *)&this[3].field_0x24 = 0;
    *(undefined4 *)&this[3].field_0x28 = 0x3f800000;
    *(undefined4 *)&this[3].field_0x2c = 0x3f800000;
    *(undefined8 *)&this[3].field_0x30 = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UResonanceAudioSettings> @ 14f043030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UResonanceAudioSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UResonanceAudioSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UResonanceAudioSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UResonanceAudioSoundfieldSettings> @ 14f043110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UResonanceAudioSoundfieldSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UResonanceAudioSoundfieldSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    USoundfieldEncodingSettingsBase::USoundfieldEncodingSettingsBase
              ((USoundfieldEncodingSettingsBase *)pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 3;
    *(undefined ***)pUVar1 = &___7UResonanceAudioSoundfieldSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UResonanceAudioSpatializationSourceSettings> @ 14f0431c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UResonanceAudioSpatializationSourceSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UResonanceAudioSpatializationSourceSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    USpatializationPluginSourceSettingsBase::USpatializationPluginSourceSettingsBase
              ((USpatializationPluginSourceSettingsBase *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UResonanceAudioSpatializationSourceSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UResonanceAudioReverbPluginPreset> @ 14f043270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UResonanceAudioReverbPluginPreset * __cdecl
NewObject<UResonanceAudioReverbPluginPreset>(UObject *param_1)

{
  UClass *pUVar1;
  UResonanceAudioReverbPluginPreset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UResonanceAudioReverbPluginPreset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UResonanceAudioReverbPluginPreset *)
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

// NewObject<UResonanceAudioReverbPluginPreset> @ 14f043310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UResonanceAudioReverbPluginPreset * __cdecl
NewObject<UResonanceAudioReverbPluginPreset>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UResonanceAudioReverbPluginPreset *pUVar2;
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
  pUVar1 = UResonanceAudioReverbPluginPreset::StaticClass();
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
  pUVar2 = (UResonanceAudioReverbPluginPreset *)
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

// NewObject<UResonanceAudioSpatializationSourceSettings> @ 14f043410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UResonanceAudioSpatializationSourceSettings * __cdecl
NewObject<UResonanceAudioSpatializationSourceSettings>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UResonanceAudioSpatializationSourceSettings *pUVar2;
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
  pUVar1 = UResonanceAudioSpatializationSourceSettings::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UResonanceAudioSpatializationSourceSettings *)
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

// NewObject<USoundSubmix> @ 14f043500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundSubmix * __cdecl NewObject<USoundSubmix>(UObject *param_1)

{
  UClass *pUVar1;
  USoundSubmix *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USoundSubmix_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USoundSubmix *)
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

// StaticEnum<enum_ERaDistanceRolloffModel> @ 14f043740

UEnum * __cdecl StaticEnum<enum_ERaDistanceRolloffModel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel,(UObject *)pUVar1,
                       L"ERaDistanceRolloffModel");
  }
  return Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton;
}

// StaticEnum<enum_ERaMaterialName> @ 14f043780

UEnum * __cdecl StaticEnum<enum_ERaMaterialName>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaMaterialName,(UObject *)pUVar1,
                       L"ERaMaterialName");
  }
  return Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton;
}

// StaticEnum<enum_ERaQualityMode> @ 14f0437c0

UEnum * __cdecl StaticEnum<enum_ERaQualityMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaQualityMode,(UObject *)pUVar1,
                       L"ERaQualityMode");
  }
  return Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton;
}

// StaticEnum<enum_ERaSpatializationMethod> @ 14f043800

UEnum * __cdecl StaticEnum<enum_ERaSpatializationMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod,(UObject *)pUVar1,
                       L"ERaSpatializationMethod");
  }
  return Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton;
}

// StaticEnum<enum_EResonanceRenderMode> @ 14f043840

UEnum * __cdecl StaticEnum<enum_EResonanceRenderMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_EResonanceRenderMode,(UObject *)pUVar1,
                       L"EResonanceRenderMode");
  }
  return Z_Registration_Info_UEnum_EResonanceRenderMode.OuterSingleton;
}

// operator() @ 14f044dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
`ResonanceAudio::LoadResonanceAudioDynamicLibrary'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  void *pvVar4;
  ForAnyElementType FVar5;
  int iVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pTVar3 = &FPaths::EngineDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar3,0x29 - (uint)(pTVar3->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_28,L"Source/ThirdParty/ResonanceAudioApi/lib",0x27);
  iVar2 = (param_1->Data).ArrayNum;
  pvVar4 = (void *)0x0;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if ((local_28.ArrayNum != 0) || (iVar2 = 2, iVar6 == -1)) {
    iVar2 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,&local_28,iVar6 + iVar2);
  ::FString::PathAppend
            ((FString *)&local_38,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar6);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogResonanceAudio._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
  }
  bVar1 = FPaths::FileExists((FString *)&local_38);
  if (bVar1) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.ArrayNum != 0) {
      FVar5.Data = local_38.AllocatorInstance.Data;
    }
    pvVar4 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar5.Data);
    if (pvVar4 != (void *)0x0) {
      if (4 < (byte)LogResonanceAudio._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
      }
      goto LAB_14f044f78;
    }
  }
  else {
    if ((byte)LogResonanceAudio._0_1_ < 5) goto LAB_14f044f78;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
  }
  if (4 < (byte)LogResonanceAudio._0_1_) {
    FPaths::ConvertRelativePathToFull(&local_18,(FString *)&local_38);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
LAB_14f044f78:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return pvVar4;
}

// `scalar_deleting_destructor' @ 14f044fa0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioPluginListener,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioPluginListener>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioPluginListener,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioPluginListener>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f044fe0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioReverb,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioReverb>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioReverb,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioReverb>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045020

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioSpatialization,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioSpatialization>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<ResonanceAudio::FResonanceAudioSpatialization,SharedPointerInternals::DefaultDeleter<ResonanceAudio::FResonanceAudioSpatialization>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045060

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<vraudio::ResonanceAudioApi,SharedPointerInternals::DefaultDeleter<vraudio::ResonanceAudioApi>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<vraudio::ResonanceAudioApi,SharedPointerInternals::DefaultDeleter<vraudio::ResonanceAudioApi>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0450a0

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
AResonanceAudioDirectivityVisualizer::_scalar_deleting_destructor_
          (AResonanceAudioDirectivityVisualizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AResonanceAudioDirectivityVisualizer__6B_;
  pFVar1 = (this->Tangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UV0).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Normals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045170

void * __thiscall
ResonanceAudio::FAmbisonicsFactory::_scalar_deleting_destructor_
          (FAmbisonicsFactory *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FAmbisonicsFactory_ResonanceAudio__6B_;
  ISoundfieldFactory::UnregisterSoundfieldFormat((ISoundfieldFactory *)this);
  *(undefined4 *)&(this->ResonanceAudioAPIMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResonanceAudioAPIMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResonanceAudioAPIMap);
  this->_padding_ = (longlong)&___7ISoundfieldFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0451f0

void * __thiscall
ResonanceAudio::FAmbisonicsTranscoder::_scalar_deleting_destructor_
          (FAmbisonicsTranscoder *this,uint param_1)

{
  ResonanceAudioApi *pRVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FAmbisonicsTranscoder_ResonanceAudio__6B_;
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0xdb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  pRVar1 = (this->ResonanceSystem).Object;
  (**(code **)((longlong)*pRVar1 + 0x60))(pRVar1,this->AmbisonicsSourceId);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResonanceSystem).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ISoundfieldTranscodeStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0452b0

void * __thiscall
ResonanceAudio::FDecoder::_scalar_deleting_destructor_(FDecoder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISoundfieldDecoderStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0452f0

void * __thiscall
ResonanceAudio::FEncoder::_scalar_deleting_destructor_(FEncoder *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  ResonanceAudioApi *pRVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&___7FEncoder_ResonanceAudio__6B_;
  if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0x55,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  pFVar8 = (this->SourceIdArray).AllocatorInstance.Data;
  iVar1 = (this->SourceIdArray).ArrayNum;
  pFVar4 = pFVar8 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->SourceIdArray).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar4) break;
    uVar2 = *(undefined4 *)pFVar8;
    if ((this->ResonanceSystem).Object == (ResonanceAudioApi *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar5)();
        return pvVar7;
      }
    }
    pRVar3 = (this->ResonanceSystem).Object;
    (**(code **)((longlong)*pRVar3 + 0x60))(pRVar3,uVar2);
    pFVar8 = pFVar8 + 4;
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->DeinterleavedBuffers).AllocatorInstance.Data,
             (this->DeinterleavedBuffers).ArrayNum);
  pFVar4 = (this->DeinterleavedBuffers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SourceIdArray).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResonanceSystem).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ISoundfieldEncoderStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045430

void * __thiscall
FResonanceAmbisonicsSettingsProxy::_scalar_deleting_destructor_
          (FResonanceAmbisonicsSettingsProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISoundfieldEncodingSettingsProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045470

void * __thiscall
ResonanceAudio::FResonanceAudioModule::_scalar_deleting_destructor_
          (FResonanceAudioModule *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FResonanceAudioModule_ResonanceAudio__6B_;
  (this->AmbisonicsFactory)._padding_ = (longlong)&___7FAmbisonicsFactory_ResonanceAudio__6B_;
  ISoundfieldFactory::UnregisterSoundfieldFormat((ISoundfieldFactory *)&this->AmbisonicsFactory);
  *(undefined4 *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->AmbisonicsFactory).ResonanceAudioAPIMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AmbisonicsFactory).ResonanceAudioAPIMap);
  (this->AmbisonicsFactory)._padding_ = (longlong)&___7ISoundfieldFactory__6B_;
  this->ReverbPluginFactory = (FReverbPluginFactory)&___7IAudioReverbFactory__6B_;
  this->SpatializationPluginFactory =
       (FSpatializationPluginFactory)&___7IAudioSpatializationFactory__6B_;
  pFVar2 = (this->RegisteredAudioDevices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045530

void * __thiscall
ResonanceAudio::FResonanceAudioPluginListener::_scalar_deleting_destructor_
          (FResonanceAudioPluginListener *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  uint uVar4;
  FAudioDevice *local_res8;
  
  this->_padding_ = (longlong)&___7FResonanceAudioPluginListener_ResonanceAudio__6B_;
  if ((this->ResonanceAudioApi).Object != (ResonanceAudioApi *)0x0) {
    if (this->OwningAudioDevice == (FAudioDevice *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningAudioDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioPluginListener.cpp"
                         ,0x27,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pvVar3 = (void *)(*pcVar1)();
        return pvVar3;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
    local_res8 = this->OwningAudioDevice;
    if (ResonanceApiMap._8_4_ != ResonanceApiMap._52_4_) {
      uVar4 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4))
              * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FAudioDevice_const_*>
                ((TSet<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>,FDefaultSetAllocator>
                  *)&ResonanceApiMap,uVar4 >> 0x10 ^ uVar4,&local_res8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&ResonanceApiMapCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResonanceAudioApi).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IAudioPluginListener__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void * __thiscall
ResonanceAudio::FResonanceAudioReverb::_scalar_deleting_destructor_
          (FResonanceAudioReverb *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FUObjectItem *this_00;
  
  this->ReverbPluginPreset = (UResonanceAudioReverbPluginPreset *)0x0;
  this->_padding_ = (longlong)&___7FResonanceAudioReverb_ResonanceAudio__6B_;
  if (this->ReverbSubmixPtr != (USoundSubmix *)0x0) {
    USoundSubmixWithParentBase::SetParentSubmix
              ((USoundSubmixWithParentBase *)this->ReverbSubmixPtr,(USoundSubmixBase *)0x0,false);
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this->ReverbSubmixPtr->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SubmixEffect).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TemporaryStereoBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAudioReverb__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0456e0

void * __thiscall
FResonanceAudioReverbPlugin::_scalar_deleting_destructor_
          (FResonanceAudioReverbPlugin *this,uint param_1)

{
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045720

void * __thiscall
ResonanceAudio::FResonanceAudioSpatialization::_scalar_deleting_destructor_
          (FResonanceAudioSpatialization *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FResonanceAudioSpatialization_ResonanceAudio__6B_;
  pFVar1 = (this->SpatializationSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BinauralSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAudioSpatialization__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045790

void * __thiscall
ResonanceAudio::FResonanceMixer::_scalar_deleting_destructor_(FResonanceMixer *this,uint param_1)

{
  *this = (FResonanceMixer)&___7ISoundfieldMixerStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0457d0

void * __thiscall
ResonanceAudio::FResonancePacket::_scalar_deleting_destructor_(FResonancePacket *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ISoundfieldAudioPacket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045810

void * __thiscall
ResonanceAudio::FReverbPluginFactory::_scalar_deleting_destructor_
          (FReverbPluginFactory *this,uint param_1)

{
  *this = (FReverbPluginFactory)&___7IAudioReverbFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045850

void * __thiscall
ResonanceAudio::FSpatializationPluginFactory::_scalar_deleting_destructor_
          (FSpatializationPluginFactory *this,uint param_1)

{
  *this = (FSpatializationPluginFactory)&___7IAudioSpatializationFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045890

void * __thiscall
IAudioPluginListener::_scalar_deleting_destructor_(IAudioPluginListener *this,uint param_1)

{
  *this = (IAudioPluginListener)&___7IAudioPluginListener__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0458d0

void * __thiscall IAudioReverb::_scalar_deleting_destructor_(IAudioReverb *this,uint param_1)

{
  *this = (IAudioReverb)&___7IAudioReverb__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045910

void * __thiscall
IAudioReverbFactory::_scalar_deleting_destructor_(IAudioReverbFactory *this,uint param_1)

{
  *this = (IAudioReverbFactory)&___7IAudioReverbFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045950

void * __thiscall
IAudioSpatialization::_scalar_deleting_destructor_(IAudioSpatialization *this,uint param_1)

{
  *this = (IAudioSpatialization)&___7IAudioSpatialization__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045990

void * __thiscall
IAudioSpatializationFactory::_scalar_deleting_destructor_
          (IAudioSpatializationFactory *this,uint param_1)

{
  *this = (IAudioSpatializationFactory)&___7IAudioSpatializationFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0459d0

void * __thiscall
IResonanceAudioModule::_scalar_deleting_destructor_(IResonanceAudioModule *this,uint param_1)

{
  *this = (IResonanceAudioModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045a10

void * __thiscall
ISoundfieldDecoderStream::_scalar_deleting_destructor_(ISoundfieldDecoderStream *this,uint param_1)

{
  *this = (ISoundfieldDecoderStream)&___7ISoundfieldDecoderStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045a50

void * __thiscall
ISoundfieldEncoderStream::_scalar_deleting_destructor_(ISoundfieldEncoderStream *this,uint param_1)

{
  *this = (ISoundfieldEncoderStream)&___7ISoundfieldEncoderStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045a90

void * __thiscall
ISoundfieldFactory::_scalar_deleting_destructor_(ISoundfieldFactory *this,uint param_1)

{
  *this = (ISoundfieldFactory)&___7ISoundfieldFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045ad0

void * __thiscall
ISoundfieldMixerStream::_scalar_deleting_destructor_(ISoundfieldMixerStream *this,uint param_1)

{
  *this = (ISoundfieldMixerStream)&___7ISoundfieldMixerStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045b10

void * __thiscall
ISoundfieldTranscodeStream::_scalar_deleting_destructor_
          (ISoundfieldTranscodeStream *this,uint param_1)

{
  *this = (ISoundfieldTranscodeStream)&___7ISoundfieldTranscodeStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045b50

void * __thiscall
UResonanceAudioBlueprintFunctionLibrary::_scalar_deleting_destructor_
          (UResonanceAudioBlueprintFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UResonanceAudioBlueprintFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14f045bb0

void * __thiscall
UResonanceAudioReverbPluginPreset::_scalar_deleting_destructor_
          (UResonanceAudioReverbPluginPreset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UResonanceAudioReverbPluginPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045c20

void * __thiscall
UResonanceAudioSettings::_scalar_deleting_destructor_(UResonanceAudioSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UResonanceAudioSettings__6B_;
  pFVar1 = (this->GlobalSourcePreset).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GlobalReverbPreset).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputSubmix).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 14f045cb0

void * __thiscall
UResonanceAudioSoundfieldSettings::_scalar_deleting_destructor_
          (UResonanceAudioSoundfieldSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UResonanceAudioSoundfieldSettings__6B_;
  USoundfieldEncodingSettingsBase::~USoundfieldEncodingSettingsBase
            ((USoundfieldEncodingSettingsBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f045d10

void * __thiscall
UResonanceAudioSpatializationSourceSettings::_scalar_deleting_destructor_
          (UResonanceAudioSpatializationSourceSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UResonanceAudioSpatializationSourceSettings__6B_;
  USpatializationPluginSourceSettingsBase::~USpatializationPluginSourceSettingsBase
            ((USpatializationPluginSourceSettingsBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// ConvertToResonanceAudioCoordinates @ 14f046020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
ResonanceAudio::ConvertToResonanceAudioCoordinates
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = _UNK_150ab51c8 * (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.X * __real_bf847ae140000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ___xmm_3f847ae1400000003f847ae140000000 * (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ConvertToResonanceAudioCoordinates @ 14f046050

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __cdecl
ResonanceAudio::ConvertToResonanceAudioCoordinates
          (TVector<double> *__return_storage_ptr__,FChannelPositionInfo *param_1)

{
  float fVar1;
  double dVar2;
  undefined8 extraout_XMM0_Qa;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  double dVar3;
  float fVar4;
  
  __libm_sse2_sincosf4_();
  dVar2 = __real_3f847ae140000000;
  fVar4 = extraout_XMM0_Dc * param_1->Radius;
  fVar1 = param_1->Radius;
  dVar3 = (double)((float)((ulonglong)extraout_XMM0_Qa >> 0x20) * fVar4) * __real_3f847ae140000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)((float)extraout_XMM0_Qa * fVar4) * __real_3f847ae140000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(extraout_XMM0_Dd * fVar1) * dVar2;
  return __return_storage_ptr__;
}

// ConvertToResonanceAudioRotation @ 14f0460e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __cdecl
ResonanceAudio::ConvertToResonanceAudioRotation
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)&param_1->Y;
  uVar2 = *(uint *)((longlong)&param_1->Y + 4);
  uVar3 = *(uint *)&param_1->Z;
  uVar4 = *(uint *)((longlong)&param_1->Z + 4);
  __return_storage_ptr__->Z = param_1->X;
  uVar1 = uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar2 = uVar2 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar3 = uVar3 ^ _UNK_15066df78;
  uVar4 = uVar4 ^ _UNK_15066df7c;
  __return_storage_ptr__->W = param_1->W;
  *(uint *)&__return_storage_ptr__->X = uVar1;
  *(uint *)((longlong)&__return_storage_ptr__->X + 4) = uVar2;
  *(uint *)&__return_storage_ptr__->Y = uVar3;
  *(uint *)((longlong)&__return_storage_ptr__->Y + 4) = uVar4;
  return __return_storage_ptr__;
}

// ConvertToResonanceMaterialName @ 14f046110

/* WARNING: Enum "Type": Some values do not have unique names */

MaterialName __cdecl ResonanceAudio::ConvertToResonanceMaterialName(ERaMaterialName param_1)

{
  switch(param_1) {
  case TRANSPARENT:
    goto switchD_14f046131_caseD_0;
  case ACOUSTIC_CEILING_TILES:
    return kAcousticCeilingTiles;
  case BRICK_BARE:
    return kBrickBare;
  case BRICK_PAINTED:
    return kBrickPainted;
  case CONCRETE_BLOCK_COARSE:
    return kConcreteBlockCoarse;
  case CONCRETE_BLOCK_PAINTED:
    return kConcreteBlockPainted;
  case CURTAIN_HEAVY:
    return kCurtainHeavy;
  case FIBER_GLASS_INSULATION:
    return kFiberGlassInsulation;
  case GLASS_THIN:
    return kGlassThin;
  case GLASS_THICK:
    return kGlassThick;
  case GRASS:
    return kGrass;
  case LINOLEUM_ON_CONCRETE:
    return kLinoleumOnConcrete;
  case MARBLE:
  case METAL:
    return kMarble;
  case PARQUET_ONCONCRETE:
    return kParquetOnConcrete;
  case PLASTER_ROUGH:
    return kPlasterRough;
  case PLASTER_SMOOTH:
    return kPlasterSmooth;
  case PLYWOOD_PANEL:
    return kPlywoodPanel;
  case POLISHED_CONCRETE_OR_TILE:
    return kPolishedConcreteOrTile;
  case SHEETROCK:
    return kSheetrock;
  case WATER_OR_ICE_SURFACE:
    return kWaterOrIceSurface;
  case WOOD_CEILING:
    return kWoodCeiling;
  case WOOD_PANEL:
    return kWoodPanel;
  case UNIFORM:
    return kUniform;
  default:
    if (1 < (byte)LogResonanceAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    }
switchD_14f046131_caseD_0:
    return kTransparent;
  }
}

// CreateResonanceAudioApi @ 14f046c20

ResonanceAudioApi * __cdecl
ResonanceAudio::CreateResonanceAudioApi(void *param_1,ulong64 param_2,ulong64 param_3,int param_4)

{
  ResonanceAudioApi *pRVar1;
  
  pRVar1 = ::CreateResonanceAudioApi(param_2,param_3,param_4);
  return pRVar1;
}

// EmptyLinkFunctionForGeneratedCodeResonanceAudioAmbisonicsSettings @ 14f047d00

void __cdecl EmptyLinkFunctionForGeneratedCodeResonanceAudioAmbisonicsSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeResonanceAudioBlueprintFunctionLibrary @ 14f047d10

void __cdecl EmptyLinkFunctionForGeneratedCodeResonanceAudioBlueprintFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeResonanceAudioDirectivityVisualizer @ 14f047d20

void __cdecl EmptyLinkFunctionForGeneratedCodeResonanceAudioDirectivityVisualizer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeResonanceAudioEnums @ 14f047d30

void __cdecl EmptyLinkFunctionForGeneratedCodeResonanceAudioEnums(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeResonanceAudioReverb @ 14f047d40

void __cdecl EmptyLinkFunctionForGeneratedCodeResonanceAudioReverb(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeResonanceAudioSettings @ 14f047d50

void __cdecl EmptyLinkFunctionForGeneratedCodeResonanceAudioSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeResonanceAudioSpatializationSourceSettings @ 14f047d60

void __cdecl EmptyLinkFunctionForGeneratedCodeResonanceAudioSpatializationSourceSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeResonanceAudio_init @ 14f047d70

void __cdecl EmptyLinkFunctionForGeneratedCodeResonanceAudio_init(void)

{
  return;
}

// IsResonanceAudioTheCurrentSpatializationPlugin @ 14f049b30

bool __cdecl ResonanceAudioUtils::IsResonanceAudioTheCurrentSpatializationPlugin(void)

{
  int iVar1;
  FString *pFVar2;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ResonanceDisplayName,L"Resonance Audio");
      atexit(`ResonanceAudioUtils::IsResonanceAudioTheCurrentSpatializationPlugin'::__l2::
             _dynamic_atexit_destructor_for__ResonanceDisplayName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (bCheckedSpatializationPlugin == false) {
    pFVar2 = AudioPluginUtilities::GetDesiredPluginName(&local_18,REVERB);
    iVar1 = (pFVar2->Data).ArrayNum;
    if (iVar1 == ResonanceDisplayName.Data.ArrayNum) {
      if (iVar1 < 2) {
        bIsResonanceCurrentSpatiatizationPlugin = true;
      }
      else {
        iVar1 = wcscmp((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                       (wchar_t *)ResonanceDisplayName.Data.AllocatorInstance.Data);
        bIsResonanceCurrentSpatiatizationPlugin = iVar1 == 0;
      }
    }
    else {
      bIsResonanceCurrentSpatiatizationPlugin = ResonanceDisplayName.Data.ArrayNum + iVar1 == 1;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bCheckedSpatializationPlugin = true;
    return bIsResonanceCurrentSpatiatizationPlugin;
  }
  return bIsResonanceCurrentSpatiatizationPlugin;
}

// LoadResonanceAudioDynamicLibrary @ 14f049c70

void * __cdecl ResonanceAudio::LoadResonanceAudioDynamicLibrary(void)

{
  void *pvVar1;
  undefined1 local_res8 [32];
  FString local_18;
  
  ::FString::FString(&local_18,L"win_x64/vraudio.dll");
  pvVar1 = `ResonanceAudio::LoadResonanceAudioDynamicLibrary'::__l2::<lambda_1>::operator()
                     (local_res8,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pvVar1;
}

// Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_NoRegister @ 14f04e0e0

UClass * __cdecl Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioDirectivityVisualizer",
               &Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton,
               AResonanceAudioDirectivityVisualizer::
               StaticRegisterNativesAResonanceAudioDirectivityVisualizer,0x340,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AResonanceAudioDirectivityVisualizer>,
               InternalVTableHelperCtorCaller<AResonanceAudioDirectivityVisualizer>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton;
}

// Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_NoRegister @ 14f04e1a0

UClass * __cdecl Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton,
               UResonanceAudioBlueprintFunctionLibrary::
               StaticRegisterNativesUResonanceAudioBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioBlueprintFunctionLibrary>
               ,InternalVTableHelperCtorCaller<UResonanceAudioBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UResonanceAudioSettings_NoRegister @ 14f04e260

UClass * __cdecl Z_Construct_UClass_UResonanceAudioSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton,
               UResonanceAudioSettings::StaticRegisterNativesUResonanceAudioSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UResonanceAudioSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton;
}

// Z_Construct_UClass_UResonanceAudioSoundfieldSettings_NoRegister @ 14f04e310

UClass * __cdecl Z_Construct_UClass_UResonanceAudioSoundfieldSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSoundfieldSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton,
               UResonanceAudioSoundfieldSettings::
               StaticRegisterNativesUResonanceAudioSoundfieldSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioSoundfieldSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSoundfieldSettings>,local_res8,
               USoundfieldEncodingSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton;
}

// cfftb1 @ 14f04e3d0

void __cdecl cfftb1(int param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  
  fVar5 = __real_3f800000;
  iVar11 = 0;
  iVar16 = 0;
  local_58 = (longlong)param_5[1];
  if (0 < local_58) {
    piVar10 = param_5 + 2;
    iVar15 = 1;
    do {
      iVar2 = *piVar10;
      local_5c = iVar2 * iVar15;
      iVar3 = (param_1 / local_5c) * 2;
      pfVar7 = param_4 + iVar16;
      local_64 = iVar11;
      local_60 = iVar11;
      if (iVar2 == 2) {
        pfVar6 = param_2;
        pfVar12 = param_3;
        if (iVar11 != 0) {
          pfVar6 = param_3;
          pfVar12 = param_2;
        }
        passb2(iVar3,iVar15,pfVar6,pfVar12,pfVar7);
LAB_14f04e5f2:
        iVar11 = 1 - iVar11;
      }
      else {
        if (iVar2 == 3) {
          pfVar12 = param_2;
          if (iVar11 != 0) {
            pfVar12 = param_3;
          }
          pfVar6 = param_3;
          if (iVar11 != 0) {
            pfVar6 = param_2;
          }
          passb3(iVar3,iVar15,pfVar12,pfVar6,pfVar7,param_4 + (iVar3 + iVar16));
          goto LAB_14f04e5f2;
        }
        if (iVar2 == 4) {
          pfVar12 = param_2;
          if (iVar11 != 0) {
            pfVar12 = param_3;
          }
          pfVar6 = param_3;
          if (iVar11 != 0) {
            pfVar6 = param_2;
          }
          passb4(iVar3,iVar15,pfVar12,pfVar6,pfVar7,param_4 + (iVar3 + iVar16),
                 param_4 + (iVar3 + iVar16 + iVar3));
          goto LAB_14f04e5f2;
        }
        if (iVar2 == 5) {
          iVar1 = iVar3 + iVar16 + iVar3;
          pfVar12 = param_2;
          if (iVar11 != 0) {
            pfVar12 = param_3;
          }
          pfVar6 = param_3;
          if (iVar11 != 0) {
            pfVar6 = param_2;
          }
          passfb5(iVar3,iVar15,pfVar12,pfVar6,pfVar7,param_4 + (iVar3 + iVar16),param_4 + iVar1,
                  param_4 + (iVar1 + iVar3),fVar5);
          iVar11 = 1 - local_60;
        }
        else {
          pfVar6 = param_2;
          pfVar12 = param_3;
          if (iVar11 != 0) {
            pfVar6 = param_3;
            pfVar12 = param_2;
          }
          passfb(&local_68,iVar3,iVar2,iVar15,iVar3 * iVar15,pfVar6,pfVar6,pfVar6,pfVar12,pfVar12,
                 pfVar7,fVar5);
          if (local_68 != 0) {
            iVar11 = 1 - local_64;
          }
        }
      }
      piVar10 = piVar10 + 1;
      iVar16 = iVar16 + (iVar2 + -1) * iVar3;
      local_58 = local_58 + -1;
      iVar15 = local_5c;
    } while (local_58 != 0);
    iVar16 = 0;
    if (iVar11 != 0) {
      uVar4 = param_1 * 2;
      if (((0 < (int)uVar4) && (3 < uVar4)) &&
         ((param_3 + (int)(uVar4 - 1) < param_2 || (param_2 + (int)(uVar4 - 1) < param_3)))) {
        memcpy(param_2,param_3,(longlong)(int)uVar4 * 4);
        do {
          iVar16 = iVar16 + 1;
        } while (iVar16 < (int)uVar4);
      }
      lVar14 = (longlong)iVar16;
      lVar8 = (longlong)(int)uVar4;
      if (lVar14 < lVar8) {
        lVar9 = (longlong)param_3 - (longlong)param_2;
        if (3 < lVar8 - lVar14) {
          pfVar7 = param_2 + lVar14 + 1;
          lVar13 = ((lVar8 - lVar14) - 4U >> 2) + 1;
          lVar14 = lVar14 + lVar13 * 4;
          do {
            pfVar7[-1] = *(float *)(lVar9 + -4 + (longlong)pfVar7);
            *pfVar7 = *(float *)(lVar9 + (longlong)pfVar7);
            pfVar7[1] = *(float *)(lVar9 + 4 + (longlong)pfVar7);
            pfVar7[2] = *(float *)(lVar9 + 8 + (longlong)pfVar7);
            pfVar7 = pfVar7 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          if (lVar8 <= lVar14) {
            return;
          }
        }
        pfVar7 = param_2 + lVar14;
        lVar8 = lVar8 - lVar14;
        do {
          *pfVar7 = *(float *)(lVar9 + (longlong)pfVar7);
          pfVar7 = pfVar7 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
  }
  return;
}

// cfftf1 @ 14f04e740

void __cdecl cfftf1(int param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  
  fVar5 = __real_bf800000;
  iVar11 = 0;
  iVar16 = 0;
  local_58 = (longlong)param_5[1];
  if (0 < local_58) {
    piVar10 = param_5 + 2;
    iVar15 = 1;
    do {
      iVar2 = *piVar10;
      local_5c = iVar2 * iVar15;
      iVar3 = (param_1 / local_5c) * 2;
      pfVar7 = param_4 + iVar16;
      local_64 = iVar11;
      local_60 = iVar11;
      if (iVar2 == 2) {
        pfVar6 = param_2;
        pfVar12 = param_3;
        if (iVar11 != 0) {
          pfVar6 = param_3;
          pfVar12 = param_2;
        }
        passf2(iVar3,iVar15,pfVar6,pfVar12,pfVar7);
LAB_14f04e962:
        iVar11 = 1 - iVar11;
      }
      else {
        if (iVar2 == 3) {
          pfVar12 = param_2;
          if (iVar11 != 0) {
            pfVar12 = param_3;
          }
          pfVar6 = param_3;
          if (iVar11 != 0) {
            pfVar6 = param_2;
          }
          passf3(iVar3,iVar15,pfVar12,pfVar6,pfVar7,param_4 + (iVar3 + iVar16));
          goto LAB_14f04e962;
        }
        if (iVar2 == 4) {
          pfVar12 = param_2;
          if (iVar11 != 0) {
            pfVar12 = param_3;
          }
          pfVar6 = param_3;
          if (iVar11 != 0) {
            pfVar6 = param_2;
          }
          passf4(iVar3,iVar15,pfVar12,pfVar6,pfVar7,param_4 + (iVar3 + iVar16),
                 param_4 + (iVar3 + iVar16 + iVar3));
          goto LAB_14f04e962;
        }
        if (iVar2 == 5) {
          iVar1 = iVar3 + iVar16 + iVar3;
          pfVar12 = param_2;
          if (iVar11 != 0) {
            pfVar12 = param_3;
          }
          pfVar6 = param_3;
          if (iVar11 != 0) {
            pfVar6 = param_2;
          }
          passfb5(iVar3,iVar15,pfVar12,pfVar6,pfVar7,param_4 + (iVar3 + iVar16),param_4 + iVar1,
                  param_4 + (iVar1 + iVar3),fVar5);
          iVar11 = 1 - local_60;
        }
        else {
          pfVar6 = param_2;
          pfVar12 = param_3;
          if (iVar11 != 0) {
            pfVar6 = param_3;
            pfVar12 = param_2;
          }
          passfb(&local_68,iVar3,iVar2,iVar15,iVar3 * iVar15,pfVar6,pfVar6,pfVar6,pfVar12,pfVar12,
                 pfVar7,fVar5);
          if (local_68 != 0) {
            iVar11 = 1 - local_64;
          }
        }
      }
      piVar10 = piVar10 + 1;
      iVar16 = iVar16 + (iVar2 + -1) * iVar3;
      local_58 = local_58 + -1;
      iVar15 = local_5c;
    } while (local_58 != 0);
    iVar16 = 0;
    if (iVar11 != 0) {
      uVar4 = param_1 * 2;
      if (((0 < (int)uVar4) && (3 < uVar4)) &&
         ((param_3 + (int)(uVar4 - 1) < param_2 || (param_2 + (int)(uVar4 - 1) < param_3)))) {
        memcpy(param_2,param_3,(longlong)(int)uVar4 * 4);
        do {
          iVar16 = iVar16 + 1;
        } while (iVar16 < (int)uVar4);
      }
      lVar14 = (longlong)iVar16;
      lVar8 = (longlong)(int)uVar4;
      if (lVar14 < lVar8) {
        lVar9 = (longlong)param_3 - (longlong)param_2;
        if (3 < lVar8 - lVar14) {
          pfVar7 = param_2 + lVar14 + 1;
          lVar13 = ((lVar8 - lVar14) - 4U >> 2) + 1;
          lVar14 = lVar14 + lVar13 * 4;
          do {
            pfVar7[-1] = *(float *)(lVar9 + -4 + (longlong)pfVar7);
            *pfVar7 = *(float *)(lVar9 + (longlong)pfVar7);
            pfVar7[1] = *(float *)(lVar9 + 4 + (longlong)pfVar7);
            pfVar7[2] = *(float *)(lVar9 + 8 + (longlong)pfVar7);
            pfVar7 = pfVar7 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          if (lVar8 <= lVar14) {
            return;
          }
        }
        pfVar7 = param_2 + lVar14;
        lVar8 = lVar8 - lVar14;
        do {
          *pfVar7 = *(float *)(lVar9 + (longlong)pfVar7);
          pfVar7 = pfVar7 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
  }
  return;
}

// cfftf1_ps @ 14f04eab0

__m128 * __cdecl
cfftf1_ps(int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4,float *param_5,int *param_6,
         int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __m128 *p_Var6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong local_58;
  
  p_Var6 = param_4;
  if (param_2 == param_4) {
    p_Var6 = param_3;
  }
  iVar7 = 0;
  iVar2 = param_6[1];
  if (1 < (longlong)(iVar2 + 1)) {
    local_58 = 2;
    iVar8 = 1;
    do {
      iVar3 = param_6[local_58];
      iVar5 = param_1 / (iVar3 * iVar8);
      iVar4 = iVar5 * 2;
      if (iVar3 == 2) {
        passf2_ps(iVar4,iVar8,param_2,p_Var6,param_5 + iVar7,(float)param_7);
      }
      else if (iVar3 == 3) {
        passf3_ps(iVar4,iVar8,param_2,p_Var6,param_5 + iVar7,param_5 + (iVar4 + iVar7),
                  (float)param_7);
      }
      else if (iVar3 == 4) {
        passf4_ps(iVar4,iVar8,param_2,p_Var6,param_5 + iVar7,param_5 + (iVar4 + iVar7),
                  param_5 + (iVar4 + iVar7 + iVar4),(float)param_7);
      }
      else if (iVar3 == 5) {
        iVar1 = iVar4 + iVar7 + iVar4;
        passf5_ps(iVar4,iVar8,param_2,p_Var6,param_5 + iVar7,param_5 + (iVar4 + iVar7),
                  param_5 + iVar1,param_5 + (iVar1 + iVar4),(float)param_7);
      }
      iVar7 = iVar7 + (iVar3 * 2 + -2) * iVar5;
      bVar9 = p_Var6 != param_4;
      p_Var6 = param_3;
      param_2 = param_4;
      if (bVar9) {
        p_Var6 = param_4;
        param_2 = param_3;
      }
      local_58 = local_58 + 1;
      iVar8 = iVar3 * iVar8;
    } while (local_58 <= iVar2 + 1);
  }
  return param_2;
}

// cffti1_ps @ 14f04ed10

void __cdecl cffti1_ps(int param_1,float *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  iVar5 = 0;
  lVar10 = 0;
  lVar12 = 0;
  iVar8 = ntryh[0];
  iVar6 = param_1;
  do {
    if (iVar6 != 1) {
      piVar2 = param_3 + lVar10 + 1;
      lVar9 = lVar10;
      do {
        iVar1 = iVar6 / iVar8;
        lVar10 = lVar9;
        if (iVar6 != iVar1 * iVar8) break;
        piVar2 = piVar2 + 1;
        iVar5 = iVar5 + 1;
        lVar10 = lVar9 + 1;
        *piVar2 = iVar8;
        if ((iVar8 == 2) && (lVar10 != 1)) {
          piVar3 = piVar2;
          if (1 < lVar10) {
            do {
              *piVar3 = piVar3[-1];
              lVar9 = lVar9 + -1;
              piVar3 = piVar3 + -1;
            } while (lVar9 != 0);
          }
          param_3[2] = 2;
        }
        lVar9 = lVar10;
        iVar6 = iVar1;
      } while (iVar1 != 1);
    }
    iVar8 = *(int *)((longlong)ntryh + lVar12 + 4);
    lVar12 = lVar12 + 4;
    if (iVar8 == 0) {
      iVar8 = 1;
      lVar10 = (longlong)iVar5;
      *param_3 = param_1;
      param_3[1] = iVar5;
      if (0 < lVar10) {
        piVar2 = param_3 + 2;
        lVar12 = 1;
        do {
          iVar6 = *piVar2;
          iVar8 = iVar6 * iVar8;
          if (0 < (int)(iVar6 - 1U)) {
            uVar11 = (ulonglong)(iVar6 - 1U);
            lVar9 = lVar12;
            do {
              (param_2 + lVar9 + -1)[0] = 1.0;
              (param_2 + lVar9 + -1)[1] = 0.0;
              lVar12 = lVar9;
              if (3 < (param_1 / iVar8) * 2 + 2) {
                uVar7 = (ulonglong)(param_1 / iVar8 & 0x7fffffff);
                lVar4 = lVar9;
                do {
                  lVar12 = lVar4 + 2;
                  __libm_sse2_sincosf_();
                  param_2[lVar12] = extraout_XMM0_Da;
                  param_2[lVar4 + 1] = extraout_XMM0_Db;
                  uVar7 = uVar7 - 1;
                  lVar4 = lVar12;
                } while (uVar7 != 0);
              }
              if (5 < iVar6) {
                param_2[lVar9 + -1] = param_2[lVar12 + -1];
                param_2[lVar9] = param_2[lVar12];
              }
              uVar11 = uVar11 - 1;
              lVar9 = lVar12;
            } while (uVar11 != 0);
          }
          piVar2 = piVar2 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      return;
    }
  } while( true );
}

// cosqb1 @ 14f04ef50

void __cdecl cosqb1(int param_1,float *param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar3 = (param_1 + 1) / 2;
  if (2 < param_1) {
    uVar9 = (ulonglong)(param_1 - 1U >> 1);
    pfVar5 = param_2;
    do {
      pfVar7 = pfVar5 + 2;
      fVar2 = *pfVar7;
      *pfVar7 = fVar2 - pfVar5[1];
      pfVar5[1] = fVar2 + pfVar5[1];
      uVar9 = uVar9 - 1;
      pfVar5 = pfVar7;
    } while (uVar9 != 0);
  }
  *param_2 = *param_2 + *param_2;
  if ((param_1 & 1U) == 0) {
    param_2[(longlong)param_1 + -1] =
         param_2[(longlong)param_1 + -1] + param_2[(longlong)param_1 + -1];
  }
  if (param_1 != 1) {
    rfftb1(param_1,param_2,param_4,param_4 + param_1,
           (int *)(param_4 + (longlong)(param_1 * 2 + 1) + -1));
  }
  lVar6 = (longlong)(param_1 + 2);
  lVar8 = 2;
  lVar11 = (longlong)iVar3;
  if (1 < lVar11) {
    lVar13 = 2;
    if (4 < lVar11) {
      pfVar5 = param_3 + 3;
      lVar12 = (longlong)param_4 - (longlong)param_3;
      lVar10 = (longlong)param_2 + (-4 - (longlong)param_3);
      uVar9 = lVar11 - 1U >> 2;
      pfVar7 = param_3 + lVar6 + -5;
      lVar13 = uVar9 * 4 + 2;
      do {
        lVar1 = (-4 - (longlong)param_3) + (longlong)param_2;
        *(float *)(lVar12 + -8 + (longlong)pfVar5) =
             pfVar5[-3] * *(float *)(lVar10 + 0xc + (longlong)pfVar7) +
             *(float *)(lVar10 + -4 + (longlong)pfVar5) * pfVar7[1];
        *(float *)(lVar12 + 8 + (longlong)pfVar7) =
             pfVar5[-3] * *(float *)(lVar10 + -4 + (longlong)pfVar5) -
             pfVar7[1] * *(float *)(lVar10 + 0xc + (longlong)pfVar7);
        *(float *)(lVar12 + -4 + (longlong)pfVar5) =
             pfVar5[-2] * *(float *)(lVar10 + 8 + (longlong)pfVar7) +
             *pfVar7 * *(float *)(lVar1 + (longlong)pfVar5);
        *(float *)(lVar12 + 4 + (longlong)pfVar7) =
             pfVar5[-2] * *(float *)(lVar1 + (longlong)pfVar5) -
             *pfVar7 * *(float *)(lVar10 + 8 + (longlong)pfVar7);
        *(float *)(lVar12 + (longlong)pfVar5) =
             *(float *)(lVar10 + 4 + (longlong)pfVar7) * pfVar5[-1] +
             *(float *)(lVar10 + 4 + (longlong)pfVar5) * pfVar7[-1];
        *(float *)(lVar12 + (longlong)pfVar7) =
             *(float *)(lVar10 + 4 + (longlong)pfVar5) * pfVar5[-1] -
             *(float *)(lVar10 + 4 + (longlong)pfVar7) * pfVar7[-1];
        *(float *)(lVar12 + 4 + (longlong)pfVar5) =
             *(float *)(lVar10 + (longlong)pfVar7) * *pfVar5 +
             *(float *)(lVar10 + 8 + (longlong)pfVar5) * pfVar7[-2];
        pfVar4 = (float *)(lVar10 + 8 + (longlong)pfVar5);
        fVar2 = *pfVar5;
        pfVar5 = pfVar5 + 4;
        *(float *)(lVar12 + -4 + (longlong)pfVar7) =
             *pfVar4 * fVar2 - *(float *)(lVar10 + (longlong)pfVar7) * pfVar7[-2];
        pfVar7 = pfVar7 + -4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if (lVar11 < lVar13) goto LAB_14f04f25d;
    }
    pfVar5 = param_3 + lVar13 + -2;
    pfVar7 = param_3 + (lVar6 - lVar13) + -2;
    lVar10 = -(longlong)param_3;
    lVar13 = (lVar11 - lVar13) + 1;
    do {
      *(float *)((longlong)param_4 + (4 - (longlong)param_3) + (longlong)pfVar5) =
           *pfVar7 * *(float *)((longlong)param_2 + lVar10 + 4 + (longlong)pfVar5) +
           *pfVar5 * *(float *)((longlong)param_2 + lVar10 + 4 + (longlong)pfVar7);
      fVar2 = *pfVar5;
      pfVar4 = (float *)((longlong)param_2 + lVar10 + 4 + (longlong)pfVar5);
      pfVar5 = pfVar5 + 1;
      *(float *)((longlong)param_4 + (4 - (longlong)param_3) + (longlong)pfVar7) =
           fVar2 * *pfVar4 - *(float *)((longlong)param_2 + lVar10 + 4 + (longlong)pfVar7) * *pfVar7
      ;
      pfVar7 = pfVar7 + -1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
LAB_14f04f25d:
  if ((param_1 & 1U) == 0) {
    param_2[iVar3] = (param_2[iVar3] + param_2[iVar3]) * param_3[lVar11 + -1];
  }
  if (1 < lVar11) {
    if (4 < lVar11) {
      lVar13 = (longlong)param_2 + (-4 - (longlong)param_4);
      uVar9 = lVar11 - 1U >> 2;
      pfVar5 = param_4 + lVar6 + -5;
      lVar8 = uVar9 * 4 + 2;
      pfVar7 = param_4;
      do {
        pfVar4 = pfVar7 + 4;
        *(float *)((longlong)pfVar7 + lVar13 + 8) = pfVar7[1] + pfVar5[2];
        *(float *)(lVar13 + 0xc + (longlong)pfVar5) = pfVar7[1] - pfVar5[2];
        *(float *)((longlong)pfVar4 + (longlong)param_2 + (-8 - (longlong)param_4)) =
             pfVar7[2] + pfVar5[1];
        *(float *)(lVar13 + 8 + (longlong)pfVar5) = pfVar7[2] - pfVar5[1];
        *(float *)((longlong)pfVar4 + lVar13) = pfVar7[3] + *pfVar5;
        *(float *)(lVar13 + 4 + (longlong)pfVar5) = pfVar7[3] - *pfVar5;
        *(float *)(lVar13 + 4 + (longlong)pfVar4) = pfVar5[-1] + *pfVar4;
        *(float *)(lVar13 + (longlong)pfVar5) = *pfVar4 - pfVar5[-1];
        pfVar5 = pfVar5 + -4;
        uVar9 = uVar9 - 1;
        pfVar7 = pfVar4;
      } while (uVar9 != 0);
      if (lVar11 < lVar8) goto LAB_14f04f3b9;
    }
    pfVar5 = param_4 + lVar8 + -1;
    lVar6 = (lVar11 - lVar8) + 1;
    pfVar7 = param_4 + ((param_1 + 2) - lVar8) + -1;
    do {
      *(float *)((longlong)param_2 + -(longlong)param_4 + (longlong)pfVar5) = *pfVar7 + *pfVar5;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      *(float *)((longlong)param_2 + -(longlong)param_4 + (longlong)pfVar7) = fVar2 - *pfVar7;
      pfVar7 = pfVar7 + -1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
LAB_14f04f3b9:
  *param_2 = *param_2 + *param_2;
  return;
}

// cosqf1 @ 14f04f3e0

void __cdecl cosqf1(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  pfVar6 = param_2 + -1;
  lVar13 = 2;
  iVar2 = (param_1 + 1) / 2;
  lVar12 = (longlong)iVar2;
  lVar11 = (longlong)(param_1 + 2);
  if (1 < lVar12) {
    lVar8 = 2;
    if (4 < iVar2) {
      lVar4 = (longlong)pfVar6 - (longlong)param_4;
      pfVar3 = param_4 + lVar11 + -5;
      uVar9 = lVar12 - 1U >> 2;
      lVar8 = uVar9 * 4 + 2;
      pfVar5 = param_4;
      do {
        pfVar7 = pfVar5 + 4;
        pfVar5[1] = *(float *)(lVar4 + 0xc + (longlong)pfVar3) +
                    *(float *)((longlong)pfVar5 + lVar4 + 8);
        pfVar3[2] = *(float *)((longlong)pfVar5 + lVar4 + 8) -
                    *(float *)(lVar4 + 0xc + (longlong)pfVar3);
        pfVar5[2] = *(float *)((longlong)pfVar7 + (longlong)param_2 + (-8 - (longlong)param_4)) +
                    *(float *)(lVar4 + 8 + (longlong)pfVar3);
        pfVar3[1] = *(float *)((longlong)pfVar7 + (longlong)param_2 + (-8 - (longlong)param_4)) -
                    *(float *)(lVar4 + 8 + (longlong)pfVar3);
        pfVar5[3] = *(float *)(lVar4 + 4 + (longlong)pfVar3) + *(float *)((longlong)pfVar7 + lVar4);
        *pfVar3 = *(float *)((longlong)pfVar7 + lVar4) - *(float *)(lVar4 + 4 + (longlong)pfVar3);
        *pfVar7 = *(float *)(lVar4 + (longlong)pfVar3) + *(float *)((longlong)pfVar5 + lVar4 + 0x14)
        ;
        pfVar3[-1] = *(float *)((longlong)pfVar5 + lVar4 + 0x14) -
                     *(float *)(lVar4 + (longlong)pfVar3);
        pfVar3 = pfVar3 + -4;
        uVar9 = uVar9 - 1;
        pfVar5 = pfVar7;
      } while (uVar9 != 0);
      if (lVar12 < lVar8) goto LAB_14f04f57f;
    }
    pfVar3 = pfVar6 + lVar8;
    pfVar5 = pfVar6 + (lVar11 - lVar8);
    lVar8 = (lVar12 - lVar8) + 1;
    do {
      *(float *)((longlong)param_4 + (-4 - (longlong)pfVar6) + (longlong)pfVar3) = *pfVar3 + *pfVar5
      ;
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      *(float *)((longlong)param_4 + (-4 - (longlong)pfVar6) + (longlong)pfVar5) = fVar1 - *pfVar5;
      pfVar5 = pfVar5 + -1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
LAB_14f04f57f:
  if ((param_1 & 1U) == 0) {
    param_4[lVar12] = param_2[lVar12] + param_2[lVar12];
  }
  if (1 < lVar12) {
    lVar8 = (longlong)param_3 - (longlong)param_4;
    if (4 < iVar2) {
      pfVar3 = param_3 + 3;
      lVar4 = (longlong)pfVar6 - (longlong)param_4;
      lVar10 = (longlong)param_4 - (longlong)param_3;
      pfVar5 = param_4 + lVar11 + -4;
      uVar9 = lVar12 - 1U >> 2;
      lVar13 = uVar9 * 4 + 2;
      do {
        *(float *)((longlong)pfVar6 + (-4 - (longlong)param_3) + (longlong)pfVar3) =
             pfVar3[-3] * pfVar5[1] +
             *(float *)(lVar10 + -8 + (longlong)pfVar3) * *(float *)(lVar8 + (longlong)pfVar5);
        *(float *)((longlong)pfVar5 + lVar4 + 8) =
             pfVar3[-3] * *(float *)(lVar10 + -8 + (longlong)pfVar3) -
             *(float *)(lVar8 + (longlong)pfVar5) * pfVar5[1];
        *(float *)((longlong)pfVar3 + (longlong)param_2 + (-4 - (longlong)param_3)) =
             pfVar3[-2] * *pfVar5 +
             *(float *)(lVar10 + -4 + (longlong)pfVar3) * *(float *)(lVar8 + -4 + (longlong)pfVar5);
        *(float *)((longlong)pfVar5 + lVar4 + 4) =
             pfVar3[-2] * *(float *)(lVar10 + -4 + (longlong)pfVar3) -
             *(float *)(lVar8 + -4 + (longlong)pfVar5) * *pfVar5;
        *(float *)((longlong)pfVar6 + (4 - (longlong)param_3) + (longlong)pfVar3) =
             *(float *)(lVar10 + (longlong)pfVar3) * *(float *)(lVar8 + -8 + (longlong)pfVar5) +
             pfVar5[-1] * pfVar3[-1];
        *(float *)((longlong)pfVar5 + lVar4) =
             *(float *)(lVar10 + (longlong)pfVar3) * pfVar3[-1] -
             *(float *)(lVar8 + -8 + (longlong)pfVar5) * pfVar5[-1];
        *(float *)((longlong)pfVar6 + (8 - (longlong)param_3) + (longlong)pfVar3) =
             pfVar5[-2] * *pfVar3 +
             *(float *)(lVar10 + 4 + (longlong)pfVar3) * *(float *)(lVar8 + -0xc + (longlong)pfVar5)
        ;
        pfVar7 = (float *)(lVar10 + 4 + (longlong)pfVar3);
        fVar1 = *pfVar3;
        pfVar3 = pfVar3 + 4;
        *(float *)((longlong)pfVar5 + lVar4 + -4) =
             *pfVar7 * fVar1 - pfVar5[-2] * *(float *)(lVar8 + -0xc + (longlong)pfVar5);
        pfVar5 = pfVar5 + -4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if (lVar12 < lVar13) goto LAB_14f04f7a8;
    }
    pfVar3 = param_4 + lVar13 + -1;
    pfVar5 = param_4 + (lVar11 - lVar13) + -1;
    lVar13 = (lVar12 - lVar13) + 1;
    do {
      *(float *)((longlong)pfVar6 + (4 - (longlong)param_4) + (longlong)pfVar3) =
           *(float *)(lVar8 + -4 + (longlong)pfVar5) * *pfVar3 +
           *pfVar5 * *(float *)(lVar8 + -4 + (longlong)pfVar3);
      pfVar7 = (float *)(lVar8 + -4 + (longlong)pfVar3);
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      *(float *)((longlong)pfVar6 + (4 - (longlong)param_4) + (longlong)pfVar5) =
           *pfVar7 * fVar1 - *(float *)(lVar8 + -4 + (longlong)pfVar5) * *pfVar5;
      pfVar5 = pfVar5 + -1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
LAB_14f04f7a8:
  if ((param_1 & 1U) == 0) {
    param_2[iVar2] = param_3[(longlong)iVar2 + -1] * param_4[iVar2];
  }
  if (param_1 != 1) {
    rfftf1(param_1,param_2,param_4,param_4 + param_1,
           (int *)(param_4 + (longlong)(param_1 * 2 + 1) + -1));
    if (2 < param_1) {
      uVar9 = (ulonglong)(param_1 - 1U >> 1);
      do {
        pfVar6 = param_2 + 2;
        fVar1 = *pfVar6;
        *pfVar6 = fVar1 + param_2[1];
        param_2[1] = param_2[1] - fVar1;
        uVar9 = uVar9 - 1;
        param_2 = pfVar6;
      } while (uVar9 != 0);
    }
  }
  return;
}

// decompose @ 14f04f870

int __cdecl decompose(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = 0;
  iVar3 = 0;
  lVar9 = 0;
  lVar5 = 0;
  iVar4 = param_1;
  do {
    if (lVar9 < 4) {
      iVar8 = param_3[lVar9];
    }
    else {
      iVar8 = iVar8 + 2;
    }
    lVar9 = lVar9 + 1;
    piVar7 = param_2 + lVar5 + 2;
    while (iVar1 = iVar4 / iVar8, iVar4 == iVar1 * iVar8) {
      piVar7 = piVar7 + 1;
      iVar3 = iVar3 + 1;
      lVar6 = lVar5 + 1;
      *piVar7 = iVar8;
      if ((iVar8 == 2) && (lVar6 != 1)) {
        piVar2 = piVar7;
        if (1 < lVar6) {
          do {
            *piVar2 = piVar2[-1];
            lVar5 = lVar5 + -1;
            piVar2 = piVar2 + -1;
          } while (lVar5 != 0);
        }
        param_2[3] = 2;
      }
      lVar5 = lVar6;
      iVar4 = iVar1;
      if (iVar1 == 1) goto LAB_14f04f926;
    }
  } while (iVar4 != 1);
LAB_14f04f926:
  param_2[2] = iVar3;
  param_2[1] = param_1;
  return iVar3;
}

// passb2 @ 14f0502c0

void __cdecl passb2(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  float *pfVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  
  iVar33 = 1;
  lVar23 = (longlong)(param_1 * 3);
  lVar31 = (longlong)((param_2 + 1) * param_1);
  if (param_1 < 3) {
    if (3 < param_2) {
      lVar25 = (longlong)(param_1 * 4);
      lVar21 = (longlong)(param_1 * 8);
      lVar24 = lVar23 - lVar25;
      pfVar14 = param_3 + (lVar25 - lVar23);
      iVar15 = (param_2 + 2) * param_1;
      lVar27 = (longlong)(param_1 * 6);
      lVar22 = lVar21 - lVar27;
      pfVar19 = param_3 + ((lVar27 + 1) - lVar23);
      iVar33 = param_2 * 2;
      lVar17 = (longlong)((iVar33 + 2) * param_1);
      lVar8 = iVar15 - lVar17;
      pfVar20 = param_4 + (lVar17 - lVar31);
      lVar9 = (param_2 + 3) * param_1 - lVar17;
      lVar10 = (iVar33 + 3) * param_1 - lVar17;
      lVar11 = (param_2 + 4) * param_1 - lVar17;
      lVar12 = iVar15 * 2 - lVar17;
      lVar13 = (iVar33 + 1) * param_1 - lVar17;
      lVar16 = param_1 * 5 - lVar25;
      lVar18 = param_1 * 7 - lVar25;
      lVar32 = param_1 * 9 - lVar25;
      lVar27 = param_1 * 10 - lVar27;
      uVar28 = (ulonglong)((uint)param_2 >> 2);
      iVar33 = ((uint)param_2 >> 2) * 4 + 1;
      do {
        pfVar20[lVar31 - lVar17] = pfVar14[lVar24] + *pfVar14;
        pfVar20[lVar13] = pfVar14[lVar24] - *pfVar14;
        pfVar20[(lVar31 - lVar17) + 1] = pfVar14[1] + pfVar14[lVar24 + 1];
        pfVar20[lVar13 + 1] = pfVar14[lVar24 + 1] - pfVar14[1];
        pfVar20[lVar8] = pfVar14[lVar16] + pfVar19[-1];
        *pfVar20 = pfVar14[lVar16] - pfVar19[-1];
        pfVar20[lVar8 + 1] = *pfVar19 + pfVar14[lVar16 + 1];
        pfVar20[1] = pfVar14[lVar16 + 1] - *pfVar19;
        pfVar20[lVar9] = pfVar19[lVar22 + -1] + pfVar14[lVar18];
        pfVar20[lVar10] = pfVar14[lVar18] - pfVar19[lVar22 + -1];
        pfVar20[lVar9 + 1] = pfVar14[lVar18 + 1] + pfVar19[lVar22];
        pfVar20[lVar10 + 1] = pfVar14[lVar18 + 1] - pfVar19[lVar22];
        pfVar20[lVar11] = pfVar14[lVar32] + pfVar19[lVar27 + -1];
        pfVar20[lVar12] = pfVar14[lVar32] - pfVar19[lVar27 + -1];
        pfVar20[lVar11 + 1] = pfVar19[lVar27] + pfVar14[lVar32 + 1];
        pfVar1 = pfVar14 + lVar32 + 1;
        pfVar29 = pfVar19 + lVar27;
        pfVar19 = pfVar19 + lVar21;
        pfVar14 = pfVar14 + lVar21;
        pfVar20[lVar12 + 1] = *pfVar1 - *pfVar29;
        pfVar20 = pfVar20 + lVar25;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    if (iVar33 <= param_2) {
      pfVar29 = param_4 + ((longlong)((param_2 * 2 + iVar33) * param_1) -
                          (longlong)((param_2 + 1) * param_1)) + 1;
      pfVar19 = param_3 + (((longlong)((iVar33 * 2 + 2) * param_1) + 1) - lVar23);
      pfVar20 = param_3 + (((longlong)((iVar33 * 2 + 1) * param_1) + 1) - lVar23);
      pfVar14 = param_4 + ((longlong)((iVar33 + param_2) * param_1) -
                          (longlong)((param_2 + 1) * param_1)) + 1;
      uVar28 = (ulonglong)((param_2 - iVar33) + 1);
      do {
        pfVar14[-1] = pfVar20[-1] + pfVar19[-1];
        pfVar29[-1] = pfVar20[-1] - pfVar19[-1];
        *pfVar14 = *pfVar20 + *pfVar19;
        pfVar14 = pfVar14 + param_1;
        fVar2 = *pfVar20;
        pfVar20 = pfVar20 + param_1 * 2;
        fVar3 = *pfVar19;
        pfVar19 = pfVar19 + param_1 * 2;
        *pfVar29 = fVar2 - fVar3;
        pfVar29 = pfVar29 + param_1;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
  }
  else if (0 < param_2) {
    iVar15 = param_1 * 3 + 2;
    iVar30 = 3;
    do {
      if (1 < (ulonglong)(longlong)param_1) {
        pfVar19 = param_5 + 1;
        uVar28 = (ulonglong)(longlong)param_1 >> 1;
        iVar26 = iVar15;
        do {
          lVar9 = (longlong)iVar26;
          lVar10 = (longlong)(param_1 + iVar26);
          lVar8 = (longlong)(((iVar33 - iVar30) + param_2) * param_1 + iVar26);
          iVar7 = ((param_2 * 2 - iVar30) + iVar33) * param_1 + iVar26;
          iVar26 = iVar26 + 2;
          param_4[(lVar8 + -2) - lVar31] =
               param_3[(lVar9 + -2) - lVar23] + param_3[(lVar10 + -2) - lVar23];
          fVar2 = param_3[(lVar9 + -2) - lVar23];
          fVar3 = param_3[(lVar10 + -2) - lVar23];
          param_4[(lVar8 + -1) - lVar31] =
               param_3[(lVar9 + -1) - lVar23] + param_3[(lVar10 + -1) - lVar23];
          fVar4 = param_3[(lVar9 + -1) - lVar23];
          fVar5 = param_3[(lVar10 + -1) - lVar23];
          lVar8 = (longlong)iVar7;
          param_4[(lVar8 + -1) - lVar31] =
               (fVar4 - fVar5) * pfVar19[-1] + (fVar2 - fVar3) * *pfVar19;
          pfVar20 = pfVar19 + -1;
          fVar6 = *pfVar19;
          pfVar19 = pfVar19 + 2;
          param_4[(lVar8 + -2) - lVar31] = (fVar2 - fVar3) * *pfVar20 - (fVar4 - fVar5) * fVar6;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      iVar15 = iVar15 + param_1 * 2;
      iVar33 = iVar33 + 1;
      iVar30 = iVar30 + 2;
    } while (iVar33 <= param_2);
  }
  return;
}

// passb3 @ 14f050830

void __cdecl
passb3(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_res8;
  int local_res20;
  
  fVar5 = __real_3f5db3d7;
  fVar4 = __real_3f000000;
  iVar6 = (param_2 + 1) * param_1;
  lVar18 = (longlong)(param_1 * 4);
  if (param_1 == 2) {
    if (0 < param_2) {
      pfVar14 = param_4 + 1;
      pfVar11 = param_3 + 2;
      lVar18 = (longlong)(param_2 * 2) + 2;
      lVar16 = param_2 * 4 - lVar18;
      uVar9 = (ulonglong)(uint)param_2;
      lVar18 = param_2 * 6 - lVar18;
      do {
        fVar21 = pfVar11[2];
        fVar19 = *pfVar11;
        fVar22 = pfVar11[-2];
        pfVar14[-1] = fVar22 + fVar21 + fVar19;
        fVar22 = fVar22 - (fVar21 + fVar19) * fVar4;
        fVar21 = pfVar11[-1];
        fVar19 = pfVar11[1];
        fVar20 = pfVar11[3];
        *pfVar14 = fVar21 + fVar19 + fVar20;
        fVar21 = fVar21 - (fVar19 + fVar20) * fVar4;
        fVar19 = *pfVar11;
        pfVar1 = pfVar11 + 2;
        pfVar2 = pfVar11 + 1;
        pfVar3 = pfVar11 + 3;
        pfVar11 = pfVar11 + 6;
        fVar20 = (fVar19 - *pfVar1) * fVar5;
        fVar19 = (*pfVar2 - *pfVar3) * fVar5;
        pfVar14[lVar16 + 1] = fVar22 - fVar19;
        pfVar14[lVar18 + 1] = fVar19 + fVar22;
        pfVar14[lVar16 + 2] = fVar20 + fVar21;
        pfVar14[lVar18 + 2] = fVar21 - fVar20;
        pfVar14 = pfVar14 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      return;
    }
  }
  else {
    local_res8 = 1;
    if (0 < param_2) {
      iVar7 = param_1 * 5 + 2;
      local_res20 = 5;
      do {
        if (1 < (longlong)param_1) {
          lVar16 = (longlong)param_5 - (longlong)param_6;
          uVar9 = (ulonglong)(longlong)param_1 >> 1;
          pfVar14 = param_6;
          iVar13 = iVar7;
          do {
            lVar15 = (longlong)iVar13;
            lVar17 = (longlong)(param_1 + iVar13);
            lVar12 = (longlong)(((local_res8 - local_res20) + param_2) * param_1 + iVar13);
            fVar21 = param_3[(lVar17 + -2) - lVar18];
            fVar19 = param_3[(lVar15 + -2) - lVar18];
            fVar22 = param_3[((longlong)(iVar13 - param_1) + -2) - lVar18];
            param_4[(lVar12 + -2) - (longlong)iVar6] = fVar22 + fVar21 + fVar19;
            fVar22 = fVar22 - (fVar21 + fVar19) * fVar4;
            fVar21 = param_3[((longlong)(iVar13 - param_1) + -1) - lVar18];
            fVar19 = param_3[(lVar15 + -1) - lVar18];
            fVar20 = param_3[(lVar17 + -1) - lVar18];
            lVar10 = (longlong)(((param_2 * 2 - local_res20) + local_res8) * param_1 + iVar13);
            iVar8 = ((param_2 * 3 - local_res20) + local_res8) * param_1 + iVar13;
            iVar13 = iVar13 + 2;
            param_4[(lVar12 + -1) - (longlong)iVar6] = fVar21 + fVar19 + fVar20;
            fVar21 = fVar21 - (fVar19 + fVar20) * fVar4;
            fVar19 = (param_3[(lVar15 + -2) - lVar18] - param_3[(lVar17 + -2) - lVar18]) * fVar5;
            fVar20 = (param_3[(lVar15 + -1) - lVar18] - param_3[(lVar17 + -1) - lVar18]) * fVar5;
            fVar23 = fVar21 - fVar19;
            fVar21 = fVar21 + fVar19;
            fVar19 = fVar22 - fVar20;
            fVar20 = fVar20 + fVar22;
            param_4[(lVar10 + -1) - (longlong)iVar6] =
                 fVar19 * *(float *)(lVar16 + 4 + (longlong)pfVar14) +
                 fVar21 * *(float *)(lVar16 + (longlong)pfVar14);
            param_4[(lVar10 + -2) - (longlong)iVar6] =
                 fVar19 * *(float *)(lVar16 + (longlong)pfVar14) -
                 fVar21 * *(float *)(lVar16 + 4 + (longlong)pfVar14);
            lVar10 = (longlong)iVar8;
            param_4[(lVar10 + -1) - (longlong)iVar6] = fVar23 * *pfVar14 + fVar20 * pfVar14[1];
            fVar21 = *pfVar14;
            pfVar11 = pfVar14 + 1;
            pfVar14 = pfVar14 + 2;
            param_4[(lVar10 + -2) - (longlong)iVar6] = fVar20 * fVar21 - fVar23 * *pfVar11;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        local_res8 = local_res8 + 1;
        iVar7 = iVar7 + param_1 * 3;
        local_res20 = local_res20 + 3;
      } while (local_res8 <= param_2);
    }
  }
  return;
}

// passb4 @ 14f050c20

void __cdecl
passb4(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
      float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_res8;
  int local_b8;
  ulonglong local_b0;
  
  iVar4 = (param_2 + 1) * param_1;
  lVar10 = (longlong)(param_1 * 5);
  if (param_1 == 2) {
    if (0 < param_2) {
      pfVar8 = param_3 + 5;
      lVar10 = (longlong)(param_2 * 6) + 2;
      lVar11 = (longlong)(param_2 * 2) + 2;
      lVar12 = lVar11 - lVar10;
      pfVar6 = param_4 + (lVar10 - lVar11);
      lVar11 = param_2 * 4 - lVar10;
      lVar10 = param_2 * 8 - lVar10;
      uVar7 = (ulonglong)(uint)param_2;
      do {
        fVar20 = pfVar8[2] - pfVar8[-2];
        pfVar1 = pfVar8 + 1;
        fVar18 = pfVar8[-2] + pfVar8[2];
        pfVar2 = pfVar8 + -3;
        fVar19 = pfVar8[-5] - pfVar8[-1];
        fVar16 = pfVar8[-1] + pfVar8[-5];
        fVar21 = pfVar8[-4] + *pfVar8;
        fVar23 = pfVar8[-4] - *pfVar8;
        fVar17 = *pfVar2 - *pfVar1;
        pfVar8 = pfVar8 + 8;
        fVar15 = *pfVar1 + *pfVar2;
        pfVar6[lVar12] = fVar15 + fVar16;
        *pfVar6 = fVar16 - fVar15;
        pfVar6[lVar12 + 1] = fVar18 + fVar21;
        pfVar6[1] = fVar21 - fVar18;
        pfVar6[lVar11 + 2] = fVar19 + fVar20;
        pfVar6[lVar10 + 2] = fVar19 - fVar20;
        pfVar6[lVar11 + 3] = fVar23 + fVar17;
        pfVar6[lVar10 + 3] = fVar23 - fVar17;
        pfVar6 = pfVar6 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    local_res8 = 1;
    if (0 < param_2) {
      local_b8 = 7;
      iVar5 = param_1 * 7 + 2;
      do {
        if (1 < (longlong)param_1) {
          lVar11 = (longlong)param_5 - (longlong)param_6;
          lVar12 = (longlong)param_7 - (longlong)param_6;
          local_b0 = (ulonglong)(longlong)param_1 >> 1;
          pfVar6 = param_6;
          iVar14 = iVar5;
          do {
            lVar13 = (longlong)iVar14;
            lVar9 = (longlong)(param_1 * -2 + iVar14);
            fVar22 = param_3[(lVar9 + -1) - lVar10] + param_3[(lVar13 + -1) - lVar10];
            fVar24 = param_3[(lVar9 + -1) - lVar10] - param_3[(lVar13 + -1) - lVar10];
            fVar18 = param_3[((longlong)(iVar14 - param_1) + -2) - lVar10] -
                     param_3[((longlong)(param_1 + iVar14) + -2) - lVar10];
            fVar15 = param_3[((longlong)(param_1 + iVar14) + -2) - lVar10] +
                     param_3[((longlong)(iVar14 - param_1) + -2) - lVar10];
            fVar17 = param_3[((longlong)(iVar14 - param_1) + -1) - lVar10] +
                     param_3[((longlong)(param_1 + iVar14) + -1) - lVar10];
            fVar19 = param_3[((longlong)(param_1 + iVar14) + -1) - lVar10] -
                     param_3[((longlong)(iVar14 - param_1) + -1) - lVar10];
            fVar23 = param_3[(lVar9 + -2) - lVar10] - param_3[(lVar13 + -2) - lVar10];
            fVar20 = param_3[(lVar9 + -2) - lVar10] + param_3[(lVar13 + -2) - lVar10];
            lVar9 = (longlong)(((local_res8 - local_b8) + param_2) * param_1 + iVar14);
            fVar21 = fVar20 - fVar15;
            fVar16 = fVar18 + fVar24;
            fVar24 = fVar24 - fVar18;
            param_4[(lVar9 + -2) - (longlong)iVar4] = fVar15 + fVar20;
            fVar18 = fVar22 - fVar17;
            fVar15 = fVar23 + fVar19;
            fVar23 = fVar23 - fVar19;
            param_4[(lVar9 + -1) - (longlong)iVar4] = fVar17 + fVar22;
            lVar9 = (longlong)(((param_2 * 2 - local_b8) + local_res8) * param_1 + iVar14);
            param_4[(lVar9 + -2) - (longlong)iVar4] =
                 fVar15 * *(float *)(lVar11 + (longlong)pfVar6) -
                 fVar16 * *(float *)(lVar11 + 4 + (longlong)pfVar6);
            param_4[(lVar9 + -1) - (longlong)iVar4] =
                 fVar15 * *(float *)(lVar11 + 4 + (longlong)pfVar6) +
                 fVar16 * *(float *)(lVar11 + (longlong)pfVar6);
            lVar9 = (longlong)(((param_2 * 3 - local_b8) + local_res8) * param_1 + iVar14);
            iVar3 = ((param_2 * 4 - local_b8) + local_res8) * param_1 + iVar14;
            iVar14 = iVar14 + 2;
            param_4[(lVar9 + -2) - (longlong)iVar4] = fVar21 * *pfVar6 - fVar18 * pfVar6[1];
            param_4[(lVar9 + -1) - (longlong)iVar4] = fVar18 * *pfVar6 + fVar21 * pfVar6[1];
            lVar9 = (longlong)iVar3;
            param_4[(lVar9 + -2) - (longlong)iVar4] =
                 fVar23 * *(float *)(lVar12 + (longlong)pfVar6) -
                 fVar24 * *(float *)(lVar12 + 4 + (longlong)pfVar6);
            param_4[(lVar9 + -1) - (longlong)iVar4] =
                 fVar23 * *(float *)(lVar12 + 4 + (longlong)pfVar6) +
                 fVar24 * *(float *)(lVar12 + (longlong)pfVar6);
            pfVar6 = pfVar6 + 2;
            local_b0 = local_b0 - 1;
          } while (local_b0 != 0);
        }
        local_res8 = local_res8 + 1;
        iVar5 = iVar5 + param_1 * 4;
        local_b8 = local_b8 + 4;
      } while (local_res8 <= param_2);
    }
  }
  return;
}

// passf2 @ 14f051110

void __cdecl passf2(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  
  iVar21 = 1;
  lVar11 = (longlong)(param_1 * 3);
  iVar6 = (param_2 + 1) * param_1;
  if (param_1 == 2) {
    if (3 < param_2) {
      lVar12 = (longlong)(param_2 * 4) + 4;
      pfVar16 = param_3 + 2;
      lVar19 = (param_2 + 2) * 2 - lVar12;
      pfVar18 = param_4 + (lVar12 - iVar6);
      lVar14 = (param_2 * 2 + 6) - lVar12;
      lVar15 = (param_2 * 2 + 8) - lVar12;
      lVar11 = (param_2 + 2) * 4 - lVar12;
      lVar12 = param_2 * 2 - lVar12;
      uVar9 = (ulonglong)((uint)param_2 >> 2);
      iVar21 = ((uint)param_2 >> 2) * 4 + 1;
      do {
        pfVar18[lVar12 + 2] = *pfVar16 + pfVar16[-2];
        pfVar18[-2] = pfVar16[-2] - *pfVar16;
        pfVar18[lVar12 + 3] = pfVar16[-1] + pfVar16[1];
        pfVar18[-1] = pfVar16[-1] - pfVar16[1];
        pfVar18[lVar19] = pfVar16[4] + pfVar16[2];
        *pfVar18 = pfVar16[2] - pfVar16[4];
        pfVar18[lVar19 + 1] = pfVar16[5] + pfVar16[3];
        pfVar18[1] = pfVar16[3] - pfVar16[5];
        pfVar18[lVar14] = pfVar16[8] + pfVar16[6];
        pfVar18[2] = pfVar16[6] - pfVar16[8];
        pfVar18[lVar14 + 1] = pfVar16[9] + pfVar16[7];
        pfVar18[3] = pfVar16[7] - pfVar16[9];
        pfVar18[lVar15] = pfVar16[0xc] + pfVar16[10];
        pfVar18[lVar11] = pfVar16[10] - pfVar16[0xc];
        pfVar18[lVar15 + 1] = pfVar16[0xd] + pfVar16[0xb];
        pfVar13 = pfVar16 + 0xb;
        pfVar10 = pfVar16 + 0xd;
        pfVar16 = pfVar16 + 0x10;
        pfVar18[lVar11 + 1] = *pfVar13 - *pfVar10;
        pfVar18 = pfVar18 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (iVar21 <= param_2) {
      lVar11 = (longlong)(param_2 * 2 + 2);
      pfVar16 = param_4 + ((param_2 * 2 + iVar21) * 2 - lVar11) + 1;
      pfVar18 = param_3 + (longlong)(iVar21 * 4 + 4) + -5;
      pfVar13 = param_3 + (longlong)(iVar21 * 4 + 2) + -5;
      pfVar10 = param_4 + ((iVar21 + param_2) * 2 - lVar11) + 1;
      uVar9 = (ulonglong)((param_2 - iVar21) + 1);
      do {
        pfVar10[-1] = pfVar13[-1] + pfVar18[-1];
        pfVar16[-1] = pfVar13[-1] - pfVar18[-1];
        *pfVar10 = *pfVar13 + *pfVar18;
        pfVar10 = pfVar10 + 2;
        fVar1 = *pfVar13;
        pfVar13 = pfVar13 + 4;
        fVar2 = *pfVar18;
        pfVar18 = pfVar18 + 4;
        *pfVar16 = fVar1 - fVar2;
        pfVar16 = pfVar16 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else if (0 < param_2) {
    iVar8 = param_1 * 3 + 2;
    iVar20 = 3;
    do {
      if (1 < (longlong)param_1) {
        pfVar16 = param_5 + 1;
        uVar9 = (ulonglong)(longlong)param_1 >> 1;
        iVar17 = iVar8;
        do {
          lVar14 = (longlong)iVar17;
          lVar15 = (longlong)(iVar17 + param_1);
          lVar12 = (longlong)(iVar17 + ((iVar21 - iVar20) + param_2) * param_1);
          iVar7 = iVar17 + ((param_2 * 2 - iVar20) + iVar21) * param_1;
          iVar17 = iVar17 + 2;
          param_4[(lVar12 + -2) - (longlong)iVar6] =
               param_3[(lVar15 + -2) - lVar11] + param_3[(lVar14 + -2) - lVar11];
          fVar1 = param_3[(lVar14 + -2) - lVar11];
          fVar2 = param_3[(lVar15 + -2) - lVar11];
          param_4[(lVar12 + -1) - (longlong)iVar6] =
               param_3[(lVar15 + -1) - lVar11] + param_3[(lVar14 + -1) - lVar11];
          fVar3 = param_3[(lVar14 + -1) - lVar11];
          fVar4 = param_3[(lVar15 + -1) - lVar11];
          lVar12 = (longlong)iVar7;
          param_4[(lVar12 + -1) - (longlong)iVar6] =
               (fVar3 - fVar4) * pfVar16[-1] - (fVar1 - fVar2) * *pfVar16;
          fVar5 = *pfVar16;
          pfVar18 = pfVar16 + -1;
          pfVar16 = pfVar16 + 2;
          param_4[(lVar12 + -2) - (longlong)iVar6] =
               (fVar3 - fVar4) * fVar5 + (fVar1 - fVar2) * *pfVar18;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar8 = iVar8 + param_1 * 2;
      iVar21 = iVar21 + 1;
      iVar20 = iVar20 + 2;
    } while (iVar21 <= param_2);
  }
  return;
}

// passf2_ps @ 14f051510

void __cdecl
passf2_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float param_6)

{
  __m128 *p_Var1;
  __m128 *p_Var2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar26 = (longlong)param_1;
  iVar22 = param_1 * param_2;
  iVar20 = 0;
  lVar27 = (longlong)iVar22;
  if (param_1 < 3) {
    if (0 < iVar22) {
      do {
        p_Var1 = param_3 + lVar26;
        fVar5 = p_Var1->m128_f32[1];
        fVar6 = p_Var1->m128_f32[2];
        fVar7 = p_Var1->m128_f32[3];
        iVar20 = iVar20 + param_1;
        fVar8 = param_3->m128_f32[1];
        fVar9 = param_3->m128_f32[2];
        fVar10 = param_3->m128_f32[3];
        param_4->m128_f32[0] = p_Var1->m128_f32[0] + param_3->m128_f32[0];
        param_4->m128_f32[1] = fVar5 + fVar8;
        param_4->m128_f32[2] = fVar6 + fVar9;
        param_4->m128_f32[3] = fVar7 + fVar10;
        fVar5 = param_3->m128_f32[1];
        fVar6 = param_3->m128_f32[2];
        fVar7 = param_3->m128_f32[3];
        p_Var1 = param_3 + lVar26;
        fVar8 = p_Var1->m128_f32[1];
        fVar9 = p_Var1->m128_f32[2];
        fVar10 = p_Var1->m128_f32[3];
        p_Var2 = param_4 + lVar27;
        p_Var2->m128_f32[0] = param_3->m128_f32[0] - p_Var1->m128_f32[0];
        p_Var2->m128_f32[1] = fVar5 - fVar8;
        p_Var2->m128_f32[2] = fVar6 - fVar9;
        p_Var2->m128_f32[3] = fVar7 - fVar10;
        fVar5 = *(float *)((longlong)param_3 + 0x14);
        fVar6 = *(float *)((longlong)param_3 + 0x18);
        fVar7 = *(float *)((longlong)param_3 + 0x1c);
        pfVar24 = (float *)(param_3->m128_i8 + lVar26 * 0x10 + 0x10);
        fVar8 = pfVar24[1];
        fVar9 = pfVar24[2];
        fVar10 = pfVar24[3];
        param_4[1].m128_f32[0] = param_3[1].m128_f32[0] + *pfVar24;
        *(float *)((longlong)param_4 + 0x14) = fVar5 + fVar8;
        *(float *)((longlong)param_4 + 0x18) = fVar6 + fVar9;
        *(float *)((longlong)param_4 + 0x1c) = fVar7 + fVar10;
        p_Var1 = param_3 + 1;
        fVar5 = *(float *)((longlong)param_3 + 0x14);
        fVar6 = *(float *)((longlong)param_3 + 0x18);
        fVar7 = *(float *)((longlong)param_3 + 0x1c);
        pfVar24 = (float *)(param_3->m128_i8 + lVar26 * 0x10 + 0x10);
        fVar8 = pfVar24[1];
        fVar9 = pfVar24[2];
        fVar10 = pfVar24[3];
        param_3 = param_3 + param_1 * 2;
        p_Var2 = param_4 + lVar27 + 1;
        p_Var2->m128_f32[0] = p_Var1->m128_f32[0] - *pfVar24;
        p_Var2->m128_f32[1] = fVar5 - fVar8;
        p_Var2->m128_f32[2] = fVar6 - fVar9;
        p_Var2->m128_f32[3] = fVar7 - fVar10;
        param_4 = param_4 + lVar26;
      } while (iVar20 < iVar22);
      return;
    }
  }
  else if (0 < iVar22) {
    do {
      if (0 < param_1 + -1) {
        pfVar23 = (float *)(param_3->m128_i8 + lVar26 * 0x10 + 0x10);
        lVar21 = (longlong)param_4 + (lVar26 * -0x10 - (longlong)param_3);
        uVar25 = (ulonglong)((param_1 - 2U >> 1) + 1);
        pfVar24 = param_5;
        do {
          pfVar4 = pfVar23 + lVar26 * -4;
          fVar6 = *pfVar4;
          fVar7 = pfVar4[1];
          fVar8 = pfVar4[2];
          fVar9 = pfVar4[3];
          fVar10 = *pfVar23;
          fVar11 = pfVar23[1];
          fVar12 = pfVar23[2];
          fVar13 = pfVar23[3];
          fVar5 = *pfVar24;
          fVar28 = param_6 * pfVar24[1];
          pfVar24 = pfVar24 + 2;
          fVar14 = pfVar23[lVar26 * -4 + -3];
          fVar15 = pfVar23[lVar26 * -4 + -2];
          fVar16 = pfVar23[lVar26 * -4 + -1];
          fVar29 = pfVar23[lVar26 * -4 + -4] - pfVar23[-4];
          fVar30 = fVar14 - pfVar23[-3];
          fVar31 = fVar15 - pfVar23[-2];
          fVar32 = fVar16 - pfVar23[-1];
          fVar17 = pfVar23[-3];
          fVar18 = pfVar23[-2];
          fVar19 = pfVar23[-1];
          pfVar4 = (float *)((longlong)pfVar23 + lVar21 + -0x10);
          *pfVar4 = pfVar23[lVar26 * -4 + -4] + pfVar23[-4];
          pfVar4[1] = fVar14 + fVar17;
          pfVar4[2] = fVar15 + fVar18;
          pfVar4[3] = fVar16 + fVar19;
          fVar14 = pfVar23[1];
          fVar15 = pfVar23[2];
          fVar16 = pfVar23[3];
          pfVar4 = pfVar23 + lVar26 * -4;
          fVar17 = pfVar4[1];
          fVar18 = pfVar4[2];
          fVar19 = pfVar4[3];
          pfVar3 = (float *)((longlong)pfVar23 + lVar21);
          *pfVar3 = *pfVar23 + *pfVar4;
          pfVar3[1] = fVar14 + fVar17;
          pfVar3[2] = fVar15 + fVar18;
          pfVar3[3] = fVar16 + fVar19;
          pfVar4 = (float *)((longlong)(pfVar23 + -4) +
                            (longlong)
                            (param_4->m128_i8 + ((lVar27 - lVar26) * 0x10 - (longlong)param_3)));
          *pfVar4 = fVar29 * fVar5 - (fVar6 - fVar10) * fVar28;
          pfVar4[1] = fVar30 * fVar5 - (fVar7 - fVar11) * fVar28;
          pfVar4[2] = fVar31 * fVar5 - (fVar8 - fVar12) * fVar28;
          pfVar4[3] = fVar32 * fVar5 - (fVar9 - fVar13) * fVar28;
          pfVar4 = (float *)((longlong)pfVar23 +
                            (longlong)
                            (param_4->m128_i8 + ((lVar27 - lVar26) * 0x10 - (longlong)param_3)));
          *pfVar4 = fVar29 * fVar28 + (fVar6 - fVar10) * fVar5;
          pfVar4[1] = fVar30 * fVar28 + (fVar7 - fVar11) * fVar5;
          pfVar4[2] = fVar31 * fVar28 + (fVar8 - fVar12) * fVar5;
          pfVar4[3] = fVar32 * fVar28 + (fVar9 - fVar13) * fVar5;
          pfVar23 = pfVar23 + 8;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      iVar20 = iVar20 + param_1;
      param_4 = param_4 + lVar26;
      param_3 = param_3 + param_1 * 2;
    } while (iVar20 < iVar22);
  }
  return;
}

// passf3 @ 14f051700

void __cdecl
passf3(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_res8;
  int local_res20;
  
  fVar5 = __real_bf5db3d7;
  fVar4 = __real_3f000000;
  iVar6 = (param_2 + 1) * param_1;
  lVar18 = (longlong)(param_1 * 4);
  if (param_1 == 2) {
    if (0 < param_2) {
      pfVar14 = param_4 + 1;
      pfVar11 = param_3 + 2;
      lVar18 = (longlong)(param_2 * 2) + 2;
      lVar16 = param_2 * 4 - lVar18;
      uVar9 = (ulonglong)(uint)param_2;
      lVar18 = param_2 * 6 - lVar18;
      do {
        fVar21 = pfVar11[2];
        fVar19 = *pfVar11;
        fVar22 = pfVar11[-2];
        pfVar14[-1] = fVar22 + fVar21 + fVar19;
        fVar22 = fVar22 - (fVar21 + fVar19) * fVar4;
        fVar21 = pfVar11[-1];
        fVar19 = pfVar11[1];
        fVar20 = pfVar11[3];
        *pfVar14 = fVar21 + fVar19 + fVar20;
        fVar21 = fVar21 - (fVar19 + fVar20) * fVar4;
        fVar19 = *pfVar11;
        pfVar1 = pfVar11 + 2;
        pfVar2 = pfVar11 + 1;
        pfVar3 = pfVar11 + 3;
        pfVar11 = pfVar11 + 6;
        fVar20 = (fVar19 - *pfVar1) * fVar5;
        fVar19 = (*pfVar2 - *pfVar3) * fVar5;
        pfVar14[lVar16 + 1] = fVar22 - fVar19;
        pfVar14[lVar18 + 1] = fVar19 + fVar22;
        pfVar14[lVar16 + 2] = fVar20 + fVar21;
        pfVar14[lVar18 + 2] = fVar21 - fVar20;
        pfVar14 = pfVar14 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      return;
    }
  }
  else {
    local_res8 = 1;
    if (0 < param_2) {
      iVar7 = param_1 * 5 + 2;
      local_res20 = 5;
      do {
        if (1 < (longlong)param_1) {
          lVar16 = (longlong)param_5 - (longlong)param_6;
          uVar9 = (ulonglong)(longlong)param_1 >> 1;
          pfVar14 = param_6;
          iVar13 = iVar7;
          do {
            lVar15 = (longlong)iVar13;
            lVar17 = (longlong)(param_1 + iVar13);
            lVar12 = (longlong)(((local_res8 - local_res20) + param_2) * param_1 + iVar13);
            fVar21 = param_3[(lVar17 + -2) - lVar18];
            fVar19 = param_3[(lVar15 + -2) - lVar18];
            fVar22 = param_3[((longlong)(iVar13 - param_1) + -2) - lVar18];
            param_4[(lVar12 + -2) - (longlong)iVar6] = fVar22 + fVar21 + fVar19;
            fVar22 = fVar22 - (fVar21 + fVar19) * fVar4;
            fVar21 = param_3[((longlong)(iVar13 - param_1) + -1) - lVar18];
            fVar19 = param_3[(lVar15 + -1) - lVar18];
            fVar20 = param_3[(lVar17 + -1) - lVar18];
            lVar10 = (longlong)(((param_2 * 2 - local_res20) + local_res8) * param_1 + iVar13);
            iVar8 = ((param_2 * 3 - local_res20) + local_res8) * param_1 + iVar13;
            iVar13 = iVar13 + 2;
            param_4[(lVar12 + -1) - (longlong)iVar6] = fVar21 + fVar19 + fVar20;
            fVar21 = fVar21 - (fVar19 + fVar20) * fVar4;
            fVar19 = (param_3[(lVar15 + -2) - lVar18] - param_3[(lVar17 + -2) - lVar18]) * fVar5;
            fVar23 = (param_3[(lVar15 + -1) - lVar18] - param_3[(lVar17 + -1) - lVar18]) * fVar5;
            fVar20 = fVar21 + fVar19;
            fVar21 = fVar21 - fVar19;
            fVar19 = fVar22 - fVar23;
            fVar23 = fVar23 + fVar22;
            param_4[(lVar10 + -1) - (longlong)iVar6] =
                 fVar20 * *(float *)(lVar16 + (longlong)pfVar14) -
                 fVar19 * *(float *)(lVar16 + 4 + (longlong)pfVar14);
            param_4[(lVar10 + -2) - (longlong)iVar6] =
                 fVar20 * *(float *)(lVar16 + 4 + (longlong)pfVar14) +
                 fVar19 * *(float *)(lVar16 + (longlong)pfVar14);
            lVar10 = (longlong)iVar8;
            param_4[(lVar10 + -1) - (longlong)iVar6] = fVar21 * *pfVar14 - fVar23 * pfVar14[1];
            fVar19 = *pfVar14;
            pfVar11 = pfVar14 + 1;
            pfVar14 = pfVar14 + 2;
            param_4[(lVar10 + -2) - (longlong)iVar6] = fVar23 * fVar19 + fVar21 * *pfVar11;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        local_res8 = local_res8 + 1;
        iVar7 = iVar7 + param_1 * 3;
        local_res20 = local_res20 + 3;
      } while (local_res8 <= param_2);
    }
  }
  return;
}

// passf3_ps @ 14f051af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
passf3_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6,
         float param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  __m128 *p_Var11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  fVar9 = _UNK_15068972c;
  fVar8 = _UNK_150689728;
  fVar7 = _UNK_150689724;
  fVar6 = ___xmm_bf000000bf000000bf000000bf000000;
  iVar10 = 0;
  lVar16 = (longlong)param_1;
  iVar14 = param_1 * param_2;
  fVar39 = param_7 * __real_3f5db3d7;
  if (0 < iVar14) {
    do {
      if (0 < param_1 + -1) {
        pfVar13 = param_5 + 1;
        p_Var11 = param_3 + lVar16 + 1;
        lVar12 = (longlong)param_4 + (lVar16 * -0x10 - (longlong)param_3);
        uVar15 = (ulonglong)((param_1 - 2U >> 1) + 1);
        do {
          fVar4 = p_Var11->m128_f32[-3];
          fVar5 = p_Var11->m128_f32[-2];
          fVar17 = p_Var11->m128_f32[-1];
          pfVar3 = p_Var11->m128_f32 + lVar16 * 4 + -4;
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          fVar25 = p_Var11->m128_f32[lVar16 * -4 + -3];
          fVar26 = p_Var11->m128_f32[lVar16 * -4 + -2];
          fVar27 = p_Var11->m128_f32[lVar16 * -4 + -1];
          fVar21 = (p_Var11->m128_f32[-4] + *pfVar3) * fVar6 + p_Var11->m128_f32[lVar16 * -4 + -4];
          fVar22 = (fVar4 + fVar18) * fVar7 + p_Var11->m128_f32[lVar16 * -4 + -3];
          fVar23 = (fVar5 + fVar19) * fVar8 + p_Var11->m128_f32[lVar16 * -4 + -2];
          fVar24 = (fVar17 + fVar20) * fVar9 + p_Var11->m128_f32[lVar16 * -4 + -1];
          pfVar2 = (float *)(lVar12 + -0x10 + (longlong)p_Var11);
          *pfVar2 = p_Var11->m128_f32[-4] + *pfVar3 + p_Var11->m128_f32[lVar16 * -4 + -4];
          pfVar2[1] = fVar4 + fVar18 + fVar25;
          pfVar2[2] = fVar5 + fVar19 + fVar26;
          pfVar2[3] = fVar17 + fVar20 + fVar27;
          pfVar3 = p_Var11->m128_f32 + lVar16 * 4;
          fVar4 = pfVar3[1];
          fVar5 = pfVar3[2];
          fVar17 = pfVar3[3];
          fVar18 = p_Var11->m128_f32[1];
          fVar19 = p_Var11->m128_f32[2];
          fVar20 = p_Var11->m128_f32[3];
          pfVar2 = p_Var11->m128_f32 + lVar16 * -4;
          fVar25 = pfVar2[1];
          fVar26 = pfVar2[2];
          fVar27 = pfVar2[3];
          pfVar1 = p_Var11->m128_f32 + lVar16 * -4;
          fVar35 = (*pfVar3 + p_Var11->m128_f32[0]) * fVar6 + *pfVar1;
          fVar36 = (fVar4 + fVar18) * fVar7 + pfVar1[1];
          fVar37 = (fVar5 + fVar19) * fVar8 + pfVar1[2];
          fVar38 = (fVar17 + fVar20) * fVar9 + pfVar1[3];
          pfVar1 = (float *)(lVar12 + (longlong)p_Var11);
          *pfVar1 = *pfVar3 + p_Var11->m128_f32[0] + *pfVar2;
          pfVar1[1] = fVar4 + fVar18 + fVar25;
          pfVar1[2] = fVar5 + fVar19 + fVar26;
          pfVar1[3] = fVar17 + fVar20 + fVar27;
          pfVar3 = p_Var11->m128_f32 + lVar16 * 4;
          pfVar2 = p_Var11->m128_f32 + lVar16 * 4 + -4;
          fVar4 = pfVar13[-1];
          fVar25 = param_7 * *(float *)((longlong)pfVar13 + ((longlong)param_6 - (longlong)param_5))
          ;
          fVar5 = *(float *)((longlong)pfVar13 + ((longlong)param_6 - (longlong)param_5) + -4);
          fVar17 = (p_Var11->m128_f32[-4] - *pfVar2) * fVar39;
          fVar18 = (p_Var11->m128_f32[-3] - pfVar2[1]) * fVar39;
          fVar19 = (p_Var11->m128_f32[-2] - pfVar2[2]) * fVar39;
          fVar20 = (p_Var11->m128_f32[-1] - pfVar2[3]) * fVar39;
          fVar31 = (p_Var11->m128_f32[0] - *pfVar3) * fVar39;
          fVar32 = (p_Var11->m128_f32[1] - pfVar3[1]) * fVar39;
          fVar33 = (p_Var11->m128_f32[2] - pfVar3[2]) * fVar39;
          fVar34 = (p_Var11->m128_f32[3] - pfVar3[3]) * fVar39;
          fVar26 = fVar17 + fVar35;
          fVar27 = fVar18 + fVar36;
          fVar28 = fVar19 + fVar37;
          fVar29 = fVar20 + fVar38;
          fVar35 = fVar35 - fVar17;
          fVar36 = fVar36 - fVar18;
          fVar37 = fVar37 - fVar19;
          fVar38 = fVar38 - fVar20;
          fVar18 = fVar21 - fVar31;
          fVar19 = fVar22 - fVar32;
          fVar20 = fVar23 - fVar33;
          fVar30 = fVar24 - fVar34;
          fVar31 = fVar31 + fVar21;
          fVar32 = fVar32 + fVar22;
          fVar33 = fVar33 + fVar23;
          fVar34 = fVar34 + fVar24;
          fVar17 = param_7 * *pfVar13;
          pfVar13 = pfVar13 + 2;
          pfVar3 = (float *)(param_4->m128_i8 + ((iVar14 - lVar16) * 0x10 - (longlong)param_3) +
                             -0x10 + (longlong)p_Var11);
          *pfVar3 = fVar4 * fVar18 - fVar26 * fVar17;
          pfVar3[1] = fVar4 * fVar19 - fVar27 * fVar17;
          pfVar3[2] = fVar4 * fVar20 - fVar28 * fVar17;
          pfVar3[3] = fVar4 * fVar30 - fVar29 * fVar17;
          pfVar3 = (float *)(param_4->m128_i8 + ((iVar14 - lVar16) * 0x10 - (longlong)param_3) +
                            (longlong)p_Var11);
          *pfVar3 = fVar18 * fVar17 + fVar4 * fVar26;
          pfVar3[1] = fVar19 * fVar17 + fVar4 * fVar27;
          pfVar3[2] = fVar20 * fVar17 + fVar4 * fVar28;
          pfVar3[3] = fVar30 * fVar17 + fVar4 * fVar29;
          pfVar3 = (float *)(param_4->m128_i8 +
                             (((longlong)iVar14 * 2 - lVar16) * 0x10 - (longlong)param_3) + -0x10 +
                            (longlong)p_Var11);
          *pfVar3 = fVar5 * fVar31 - fVar25 * fVar35;
          pfVar3[1] = fVar5 * fVar32 - fVar25 * fVar36;
          pfVar3[2] = fVar5 * fVar33 - fVar25 * fVar37;
          pfVar3[3] = fVar5 * fVar34 - fVar25 * fVar38;
          pfVar3 = (float *)(param_4->m128_i8 +
                             (((longlong)iVar14 * 2 - lVar16) * 0x10 - (longlong)param_3) +
                            (longlong)p_Var11);
          *pfVar3 = fVar5 * fVar35 + fVar25 * fVar31;
          pfVar3[1] = fVar5 * fVar36 + fVar25 * fVar32;
          pfVar3[2] = fVar5 * fVar37 + fVar25 * fVar33;
          pfVar3[3] = fVar5 * fVar38 + fVar25 * fVar34;
          p_Var11 = (__m128 *)(p_Var11->m128_f32 + 8);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      iVar10 = iVar10 + param_1;
      param_3 = param_3 + param_1 * 3;
      param_4 = param_4 + lVar16;
    } while (iVar10 < iVar14);
  }
  return;
}

// passf4 @ 14f051d90

void __cdecl
passf4(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
      float *param_7)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res8;
  int local_b8;
  ulonglong local_b0;
  
  iVar4 = (param_2 + 1) * param_1;
  lVar11 = (longlong)(param_1 * 5);
  if (param_1 == 2) {
    if (0 < param_2) {
      pfVar9 = param_3 + 5;
      lVar11 = (longlong)(param_2 * 6) + 2;
      lVar12 = (longlong)(param_2 * 2) + 2;
      lVar13 = lVar12 - lVar11;
      pfVar6 = param_4 + (lVar11 - lVar12);
      lVar12 = param_2 * 4 - lVar11;
      lVar11 = param_2 * 8 - lVar11;
      uVar7 = (ulonglong)(uint)param_2;
      do {
        fVar21 = pfVar9[-2] - pfVar9[2];
        pfVar3 = pfVar9 + -3;
        fVar19 = pfVar9[2] + pfVar9[-2];
        pfVar1 = pfVar9 + 1;
        fVar20 = pfVar9[-5] - pfVar9[-1];
        fVar17 = pfVar9[-1] + pfVar9[-5];
        fVar22 = pfVar9[-4] + *pfVar9;
        fVar24 = pfVar9[-4] - *pfVar9;
        fVar18 = *pfVar1 - *pfVar3;
        pfVar9 = pfVar9 + 8;
        fVar16 = *pfVar3 + *pfVar1;
        pfVar6[lVar13] = fVar16 + fVar17;
        *pfVar6 = fVar17 - fVar16;
        pfVar6[lVar13 + 1] = fVar19 + fVar22;
        pfVar6[1] = fVar22 - fVar19;
        pfVar6[lVar12 + 2] = fVar20 + fVar21;
        pfVar6[lVar11 + 2] = fVar20 - fVar21;
        pfVar6[lVar12 + 3] = fVar24 + fVar18;
        pfVar6[lVar11 + 3] = fVar24 - fVar18;
        pfVar6 = pfVar6 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    local_res8 = 1;
    if (0 < param_2) {
      local_b8 = 7;
      iVar5 = param_1 * 7 + 2;
      do {
        if (1 < (longlong)param_1) {
          lVar12 = (longlong)param_5 - (longlong)param_6;
          lVar13 = (longlong)param_7 - (longlong)param_6;
          local_b0 = (ulonglong)(longlong)param_1 >> 1;
          pfVar6 = param_6;
          iVar15 = iVar5;
          do {
            lVar14 = (longlong)iVar15;
            lVar10 = (longlong)(param_1 * -2 + iVar15);
            lVar8 = (longlong)(param_1 + iVar15);
            fVar25 = param_3[(lVar10 + -1) - lVar11] - param_3[(lVar14 + -1) - lVar11];
            fVar23 = param_3[(lVar10 + -1) - lVar11] + param_3[(lVar14 + -1) - lVar11];
            fVar18 = param_3[((longlong)(iVar15 - param_1) + -1) - lVar11] +
                     param_3[(lVar8 + -1) - lVar11];
            fVar21 = param_3[((longlong)(iVar15 - param_1) + -1) - lVar11] -
                     param_3[(lVar8 + -1) - lVar11];
            fVar20 = param_3[(lVar8 + -2) - lVar11] -
                     param_3[((longlong)(iVar15 - param_1) + -2) - lVar11];
            fVar16 = param_3[((longlong)(iVar15 - param_1) + -2) - lVar11] +
                     param_3[(lVar8 + -2) - lVar11];
            fVar22 = param_3[(lVar10 + -2) - lVar11] + param_3[(lVar14 + -2) - lVar11];
            fVar19 = param_3[(lVar10 + -2) - lVar11] - param_3[(lVar14 + -2) - lVar11];
            lVar8 = (longlong)(((local_res8 - local_b8) + param_2) * param_1 + iVar15);
            fVar24 = fVar22 - fVar16;
            fVar17 = fVar20 + fVar25;
            fVar25 = fVar25 - fVar20;
            param_4[(lVar8 + -2) - (longlong)iVar4] = fVar16 + fVar22;
            fVar20 = fVar23 - fVar18;
            fVar16 = fVar19 - fVar21;
            fVar19 = fVar19 + fVar21;
            param_4[(lVar8 + -1) - (longlong)iVar4] = fVar18 + fVar23;
            lVar8 = (longlong)(((param_2 * 2 - local_b8) + local_res8) * param_1 + iVar15);
            param_4[(lVar8 + -2) - (longlong)iVar4] =
                 fVar17 * *(float *)(lVar12 + 4 + (longlong)pfVar6) +
                 fVar19 * *(float *)(lVar12 + (longlong)pfVar6);
            param_4[(lVar8 + -1) - (longlong)iVar4] =
                 fVar17 * *(float *)(lVar12 + (longlong)pfVar6) -
                 fVar19 * *(float *)(lVar12 + 4 + (longlong)pfVar6);
            lVar8 = (longlong)(((param_2 * 3 - local_b8) + local_res8) * param_1 + iVar15);
            iVar2 = ((param_2 * 4 - local_b8) + local_res8) * param_1 + iVar15;
            iVar15 = iVar15 + 2;
            param_4[(lVar8 + -2) - (longlong)iVar4] = fVar20 * pfVar6[1] + fVar24 * *pfVar6;
            param_4[(lVar8 + -1) - (longlong)iVar4] = fVar20 * *pfVar6 - fVar24 * pfVar6[1];
            lVar8 = (longlong)iVar2;
            param_4[(lVar8 + -2) - (longlong)iVar4] =
                 fVar25 * *(float *)(lVar13 + 4 + (longlong)pfVar6) +
                 fVar16 * *(float *)(lVar13 + (longlong)pfVar6);
            pfVar3 = (float *)(lVar13 + (longlong)pfVar6);
            pfVar9 = (float *)(lVar13 + 4 + (longlong)pfVar6);
            pfVar6 = pfVar6 + 2;
            param_4[(lVar8 + -1) - (longlong)iVar4] = fVar25 * *pfVar3 - fVar16 * *pfVar9;
            local_b0 = local_b0 - 1;
          } while (local_b0 != 0);
        }
        local_res8 = local_res8 + 1;
        iVar5 = iVar5 + param_1 * 4;
        local_b8 = local_b8 + 4;
      } while (local_res8 <= param_2);
    }
  }
  return;
}

// passf4_ps @ 14f052280

void __cdecl
passf4_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6,
         float *param_7,float param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  __m128 *p_Var9;
  __m128 *p_Var10;
  float *pfVar11;
  __m128 *p_Var12;
  longlong lVar13;
  __m128 *p_Var14;
  __m128 *p_Var15;
  __m128 *p_Var16;
  ulonglong uVar17;
  int iVar18;
  float *pfVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  int local_118;
  
  lVar8 = (longlong)param_1;
  iVar18 = param_1 * param_2;
  lVar20 = (longlong)iVar18;
  if (param_1 == 2) {
    if (0 < iVar18) {
      p_Var15 = param_3 + 7;
      p_Var16 = param_3 + 5;
      p_Var10 = param_4 + lVar20;
      p_Var12 = param_3 + 2;
      p_Var14 = param_3 + 3;
      uVar17 = (ulonglong)((iVar18 - 1U >> 1) + 1);
      do {
        p_Var9 = p_Var15 + -1;
        pfVar11 = (float *)((longlong)p_Var15 + -0xc);
        pfVar19 = (float *)((longlong)p_Var15 + -8);
        pfVar1 = (float *)((longlong)p_Var15 + -4);
        fVar37 = p_Var14[-2].m128_f32[0] + p_Var16->m128_f32[0];
        fVar38 = *(float *)((longlong)p_Var14 + -0x1c) + p_Var16->m128_f32[1];
        fVar39 = *(float *)((longlong)p_Var14 + -0x18) + p_Var16->m128_f32[2];
        fVar40 = *(float *)((longlong)p_Var14 + -0x14) + p_Var16->m128_f32[3];
        fVar45 = p_Var14[-2].m128_f32[0] - p_Var16->m128_f32[0];
        fVar46 = *(float *)((longlong)p_Var14 + -0x1c) - p_Var16->m128_f32[1];
        fVar47 = *(float *)((longlong)p_Var14 + -0x18) - p_Var16->m128_f32[2];
        fVar48 = *(float *)((longlong)p_Var14 + -0x14) - p_Var16->m128_f32[3];
        fVar25 = p_Var12->m128_f32[0];
        pfVar2 = p_Var12->m128_f32 + 1;
        pfVar3 = p_Var12->m128_f32 + 2;
        pfVar4 = p_Var12->m128_f32 + 3;
        fVar26 = p_Var15->m128_f32[0];
        pfVar5 = p_Var15->m128_f32 + 1;
        pfVar6 = p_Var15->m128_f32 + 2;
        pfVar7 = p_Var15->m128_f32 + 3;
        fVar29 = p_Var9->m128_f32[0] + p_Var12->m128_f32[0];
        fVar30 = *pfVar11 + p_Var12->m128_f32[1];
        fVar31 = *pfVar19 + p_Var12->m128_f32[2];
        fVar32 = *pfVar1 + p_Var12->m128_f32[3];
        fVar21 = p_Var14->m128_f32[0] + p_Var15->m128_f32[0];
        fVar22 = p_Var14->m128_f32[1] + p_Var15->m128_f32[1];
        fVar23 = p_Var14->m128_f32[2] + p_Var15->m128_f32[2];
        fVar24 = p_Var14->m128_f32[3] + p_Var15->m128_f32[3];
        p_Var12 = p_Var12 + 8;
        p_Var15 = p_Var15 + 8;
        fVar33 = (fVar25 - p_Var9->m128_f32[0]) * param_8;
        fVar34 = (*pfVar2 - *pfVar11) * param_8;
        fVar35 = (*pfVar3 - *pfVar19) * param_8;
        fVar36 = (*pfVar4 - *pfVar1) * param_8;
        p_Var9 = p_Var14 + -3;
        pfVar11 = (float *)((longlong)p_Var14 + -0x2c);
        pfVar19 = (float *)((longlong)p_Var14 + -0x28);
        pfVar1 = (float *)((longlong)p_Var14 + -0x24);
        fVar25 = (fVar26 - p_Var14->m128_f32[0]) * param_8;
        fVar26 = (*pfVar5 - p_Var14->m128_f32[1]) * param_8;
        fVar27 = (*pfVar6 - p_Var14->m128_f32[2]) * param_8;
        fVar28 = (*pfVar7 - p_Var14->m128_f32[3]) * param_8;
        p_Var14 = p_Var14 + 8;
        fVar41 = p_Var9->m128_f32[0] + p_Var16[-1].m128_f32[0];
        fVar42 = *pfVar11 + *(float *)((longlong)p_Var16 + -0xc);
        fVar43 = *pfVar19 + *(float *)((longlong)p_Var16 + -8);
        fVar44 = *pfVar1 + *(float *)((longlong)p_Var16 + -4);
        fVar49 = p_Var9->m128_f32[0] - p_Var16[-1].m128_f32[0];
        fVar50 = *pfVar11 - *(float *)((longlong)p_Var16 + -0xc);
        fVar51 = *pfVar19 - *(float *)((longlong)p_Var16 + -8);
        fVar52 = *pfVar1 - *(float *)((longlong)p_Var16 + -4);
        p_Var9 = p_Var10 + -lVar20;
        p_Var16 = p_Var16 + 8;
        p_Var9->m128_f32[0] = fVar29 + fVar41;
        p_Var9->m128_f32[1] = fVar30 + fVar42;
        p_Var9->m128_f32[2] = fVar31 + fVar43;
        p_Var9->m128_f32[3] = fVar32 + fVar44;
        pfVar11 = (float *)(p_Var10->m128_i8 + lVar20 * -0x10 + 0x10);
        *pfVar11 = fVar37 + fVar21;
        pfVar11[1] = fVar38 + fVar22;
        pfVar11[2] = fVar39 + fVar23;
        pfVar11[3] = fVar40 + fVar24;
        p_Var10->m128_f32[0] = fVar49 + fVar25;
        p_Var10->m128_f32[1] = fVar50 + fVar26;
        p_Var10->m128_f32[2] = fVar51 + fVar27;
        p_Var10->m128_f32[3] = fVar52 + fVar28;
        p_Var10[1].m128_f32[0] = fVar33 + fVar45;
        *(float *)((longlong)p_Var10 + 0x14) = fVar34 + fVar46;
        *(float *)((longlong)p_Var10 + 0x18) = fVar35 + fVar47;
        *(float *)((longlong)p_Var10 + 0x1c) = fVar36 + fVar48;
        p_Var9 = p_Var10 + lVar20;
        p_Var9->m128_f32[0] = fVar41 - fVar29;
        p_Var9->m128_f32[1] = fVar42 - fVar30;
        p_Var9->m128_f32[2] = fVar43 - fVar31;
        p_Var9->m128_f32[3] = fVar44 - fVar32;
        p_Var9 = p_Var10 + lVar20 + 1;
        p_Var9->m128_f32[0] = fVar37 - fVar21;
        p_Var9->m128_f32[1] = fVar38 - fVar22;
        p_Var9->m128_f32[2] = fVar39 - fVar23;
        p_Var9->m128_f32[3] = fVar40 - fVar24;
        p_Var9 = p_Var10 + lVar20 * 2;
        p_Var9->m128_f32[0] = fVar49 - fVar25;
        p_Var9->m128_f32[1] = fVar50 - fVar26;
        p_Var9->m128_f32[2] = fVar51 - fVar27;
        p_Var9->m128_f32[3] = fVar52 - fVar28;
        p_Var9 = p_Var10 + lVar20 * 2 + 1;
        p_Var9->m128_f32[0] = fVar45 - fVar33;
        p_Var9->m128_f32[1] = fVar46 - fVar34;
        p_Var9->m128_f32[2] = fVar47 - fVar35;
        p_Var9->m128_f32[3] = fVar48 - fVar36;
        p_Var10 = p_Var10 + 2;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  else {
    local_118 = 0;
    if (0 < iVar18) {
      do {
        if (0 < param_1 + -1) {
          pfVar11 = param_5 + 1;
          pfVar19 = (float *)(param_3->m128_i8 + lVar8 * 0x30 + 0x10);
          lVar13 = (longlong)param_4 + (lVar8 * -0x30 - (longlong)param_3);
          uVar17 = (ulonglong)((param_1 - 2U >> 1) + 1);
          do {
            pfVar1 = pfVar19 + lVar8 * -8;
            pfVar2 = pfVar19 + lVar8 * -0xc;
            pfVar3 = pfVar19 + lVar8 * -4;
            fVar40 = *pfVar2 + *pfVar3;
            fVar42 = pfVar2[1] + pfVar3[1];
            fVar44 = pfVar2[2] + pfVar3[2];
            fVar46 = pfVar2[3] + pfVar3[3];
            pfVar3 = pfVar19 + lVar8 * -4;
            fVar52 = *pfVar2 - *pfVar3;
            fVar53 = pfVar2[1] - pfVar3[1];
            fVar54 = pfVar2[2] - pfVar3[2];
            fVar55 = pfVar2[3] - pfVar3[3];
            fVar23 = *pfVar1 + *pfVar19;
            fVar24 = pfVar1[1] + pfVar19[1];
            fVar27 = pfVar1[2] + pfVar19[2];
            fVar28 = pfVar1[3] + pfVar19[3];
            fVar25 = (*pfVar19 - *pfVar1) * param_8;
            fVar26 = (pfVar19[1] - pfVar1[1]) * param_8;
            fVar21 = (pfVar19[2] - pfVar1[2]) * param_8;
            fVar22 = (pfVar19[3] - pfVar1[3]) * param_8;
            fVar56 = pfVar19[lVar8 * -0xc + -4] - pfVar19[lVar8 * -4 + -4];
            fVar57 = pfVar19[lVar8 * -0xc + -3] - pfVar19[lVar8 * -4 + -3];
            fVar58 = pfVar19[lVar8 * -0xc + -2] - pfVar19[lVar8 * -4 + -2];
            fVar59 = pfVar19[lVar8 * -0xc + -1] - pfVar19[lVar8 * -4 + -1];
            fVar29 = pfVar19[lVar8 * -4 + -4] + pfVar19[lVar8 * -0xc + -4];
            fVar30 = pfVar19[lVar8 * -4 + -3] + pfVar19[lVar8 * -0xc + -3];
            fVar31 = pfVar19[lVar8 * -4 + -2] + pfVar19[lVar8 * -0xc + -2];
            fVar41 = pfVar19[lVar8 * -4 + -1] + pfVar19[lVar8 * -0xc + -1];
            fVar36 = fVar25 + fVar56;
            fVar37 = fVar26 + fVar57;
            fVar38 = fVar21 + fVar58;
            fVar39 = fVar22 + fVar59;
            fVar56 = fVar56 - fVar25;
            fVar57 = fVar57 - fVar26;
            fVar58 = fVar58 - fVar21;
            fVar59 = fVar59 - fVar22;
            fVar25 = pfVar19[lVar8 * -8 + -4] + pfVar19[-4];
            fVar26 = pfVar19[lVar8 * -8 + -3] + pfVar19[-3];
            fVar21 = pfVar19[lVar8 * -8 + -2] + pfVar19[-2];
            fVar22 = pfVar19[lVar8 * -8 + -1] + pfVar19[-1];
            fVar32 = (pfVar19[lVar8 * -8 + -4] - pfVar19[-4]) * param_8;
            fVar33 = (pfVar19[lVar8 * -8 + -3] - pfVar19[-3]) * param_8;
            fVar34 = (pfVar19[lVar8 * -8 + -2] - pfVar19[-2]) * param_8;
            fVar35 = (pfVar19[lVar8 * -8 + -1] - pfVar19[-1]) * param_8;
            fVar48 = fVar29 - fVar25;
            fVar49 = fVar30 - fVar26;
            fVar50 = fVar31 - fVar21;
            fVar51 = fVar41 - fVar22;
            pfVar1 = (float *)((longlong)pfVar19 + lVar13 + -0x10);
            *pfVar1 = fVar25 + fVar29;
            pfVar1[1] = fVar26 + fVar30;
            pfVar1[2] = fVar21 + fVar31;
            pfVar1[3] = fVar22 + fVar41;
            fVar22 = fVar32 + fVar52;
            fVar29 = fVar33 + fVar53;
            fVar30 = fVar34 + fVar54;
            fVar31 = fVar35 + fVar55;
            fVar41 = fVar40 - fVar23;
            fVar43 = fVar42 - fVar24;
            fVar45 = fVar44 - fVar27;
            fVar47 = fVar46 - fVar28;
            fVar52 = fVar52 - fVar32;
            fVar53 = fVar53 - fVar33;
            fVar54 = fVar54 - fVar34;
            fVar55 = fVar55 - fVar35;
            pfVar1 = (float *)((longlong)pfVar19 + lVar13);
            *pfVar1 = fVar23 + fVar40;
            pfVar1[1] = fVar24 + fVar42;
            pfVar1[2] = fVar27 + fVar44;
            pfVar1[3] = fVar28 + fVar46;
            fVar21 = param_8 * *pfVar11;
            fVar25 = pfVar11[-1];
            fVar23 = param_8 * *(float *)((longlong)pfVar11 +
                                         ((longlong)param_6 - (longlong)param_5));
            fVar26 = *(float *)((longlong)pfVar11 + ((longlong)param_6 - (longlong)param_5) + -4);
            pfVar1 = (float *)((longlong)(pfVar19 + -4) +
                              (longlong)
                              (param_4->m128_i8 + ((lVar20 + lVar8 * -3) * 0x10 - (longlong)param_3)
                              ));
            *pfVar1 = fVar36 * fVar25 - fVar22 * fVar21;
            pfVar1[1] = fVar37 * fVar25 - fVar29 * fVar21;
            pfVar1[2] = fVar38 * fVar25 - fVar30 * fVar21;
            pfVar1[3] = fVar39 * fVar25 - fVar31 * fVar21;
            pfVar1 = (float *)((longlong)pfVar19 +
                              (longlong)
                              (param_4->m128_i8 + ((lVar20 + lVar8 * -3) * 0x10 - (longlong)param_3)
                              ));
            *pfVar1 = fVar22 * fVar25 + fVar36 * fVar21;
            pfVar1[1] = fVar29 * fVar25 + fVar37 * fVar21;
            pfVar1[2] = fVar30 * fVar25 + fVar38 * fVar21;
            pfVar1[3] = fVar31 * fVar25 + fVar39 * fVar21;
            fVar21 = param_8 * *(float *)((longlong)pfVar11 +
                                         ((longlong)param_7 - (longlong)param_5));
            fVar25 = *(float *)((longlong)pfVar11 + ((longlong)param_7 - (longlong)param_5) + -4);
            pfVar1 = (float *)((longlong)(pfVar19 + -4) +
                              (longlong)
                              (param_4->m128_i8 +
                              ((lVar20 * 0x20 + lVar8 * -0x30) - (longlong)param_3)));
            *pfVar1 = fVar48 * fVar26 - fVar41 * fVar23;
            pfVar1[1] = fVar49 * fVar26 - fVar43 * fVar23;
            pfVar1[2] = fVar50 * fVar26 - fVar45 * fVar23;
            pfVar1[3] = fVar51 * fVar26 - fVar47 * fVar23;
            pfVar1 = (float *)((longlong)pfVar19 +
                              (longlong)
                              (param_4->m128_i8 +
                              ((lVar20 * 0x20 + lVar8 * -0x30) - (longlong)param_3)));
            *pfVar1 = fVar41 * fVar26 + fVar48 * fVar23;
            pfVar1[1] = fVar43 * fVar26 + fVar49 * fVar23;
            pfVar1[2] = fVar45 * fVar26 + fVar50 * fVar23;
            pfVar1[3] = fVar47 * fVar26 + fVar51 * fVar23;
            pfVar11 = pfVar11 + 2;
            pfVar1 = (float *)((longlong)(pfVar19 + -4) +
                              (longlong)
                              (param_4->m128_i8 + ((lVar20 - lVar8) * 0x30 - (longlong)param_3)));
            *pfVar1 = fVar56 * fVar25 - fVar52 * fVar21;
            pfVar1[1] = fVar57 * fVar25 - fVar53 * fVar21;
            pfVar1[2] = fVar58 * fVar25 - fVar54 * fVar21;
            pfVar1[3] = fVar59 * fVar25 - fVar55 * fVar21;
            pfVar1 = (float *)((longlong)pfVar19 +
                              (longlong)
                              (param_4->m128_i8 + ((lVar20 - lVar8) * 0x30 - (longlong)param_3)));
            *pfVar1 = fVar52 * fVar25 + fVar56 * fVar21;
            pfVar1[1] = fVar53 * fVar25 + fVar57 * fVar21;
            pfVar1[2] = fVar54 * fVar25 + fVar58 * fVar21;
            pfVar1[3] = fVar55 * fVar25 + fVar59 * fVar21;
            pfVar19 = pfVar19 + 8;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        local_118 = local_118 + param_1;
        param_4 = param_4 + lVar8;
        param_3 = param_3 + param_1 * 4;
      } while (local_118 < iVar18);
    }
  }
  return;
}

// passf5_ps @ 14f0527d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
passf5_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6,
         float *param_7,float *param_8,float param_9)

{
  float *pfVar1;
  __m128 *p_Var2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  __m128 *p_Var14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  ulonglong local_168;
  
  fVar16 = param_9 * __real_3f737871;
  uVar9 = (ulonglong)param_1;
  fVar25 = param_9 * __real_3f167918;
  if (0 < param_2) {
    uVar6 = (ulonglong)(uint)param_2;
    uVar11 = uVar9;
    fVar66 = ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd;
    fVar67 = _UNK_1530ea554;
    fVar68 = _UNK_1530ea558;
    fVar69 = _UNK_1530ea55c;
    do {
      if (0 < param_1 + -1) {
        iVar8 = (int)uVar11 * param_2;
        pfVar13 = param_7 + 1;
        pfVar5 = (float *)(param_3->m128_i8 + uVar9 * 0x10 + 0x10);
        lVar12 = (longlong)param_4 + (uVar9 * -0x10 - (longlong)param_3);
        lVar7 = (longlong)(iVar8 * 2);
        lVar15 = iVar8 * 3 - lVar7;
        lVar10 = iVar8 * 4 - lVar7;
        p_Var14 = param_4 + lVar7 + 1;
        local_168 = (ulonglong)((param_1 - 2U >> 1) + 1);
        fVar54 = fVar66;
        fVar26 = fVar67;
        fVar27 = fVar68;
        fVar28 = fVar69;
        do {
          pfVar3 = pfVar5 + uVar9 * 4 + -4;
          pfVar4 = pfVar5 + uVar9 * 8 + -4;
          fVar41 = *pfVar3 + *pfVar4;
          fVar43 = pfVar3[1] + pfVar4[1];
          fVar45 = pfVar3[2] + pfVar4[2];
          fVar47 = pfVar3[3] + pfVar4[3];
          pfVar4 = pfVar5 + uVar9 * 8 + -4;
          fVar33 = *pfVar3 - *pfVar4;
          fVar34 = pfVar3[1] - pfVar4[1];
          fVar35 = pfVar3[2] - pfVar4[2];
          fVar36 = pfVar3[3] - pfVar4[3];
          pfVar3 = pfVar5 + uVar9 * 4;
          pfVar4 = pfVar5 + uVar9 * 0xc + -4;
          fVar29 = pfVar5[-4] + *pfVar4;
          fVar30 = pfVar5[-3] + pfVar4[1];
          fVar31 = pfVar5[-2] + pfVar4[2];
          fVar32 = pfVar5[-1] + pfVar4[3];
          pfVar4 = pfVar5 + uVar9 * 0xc + -4;
          fVar53 = pfVar5[-4] - *pfVar4;
          fVar55 = pfVar5[-3] - pfVar4[1];
          fVar56 = pfVar5[-2] - pfVar4[2];
          fVar57 = pfVar5[-1] - pfVar4[3];
          pfVar4 = pfVar5 + uVar9 * 0xc;
          pfVar1 = pfVar5 + uVar9 * 8;
          fVar58 = *pfVar3 + *pfVar1;
          fVar60 = pfVar3[1] + pfVar1[1];
          fVar62 = pfVar3[2] + pfVar1[2];
          fVar64 = pfVar3[3] + pfVar1[3];
          pfVar1 = pfVar5 + uVar9 * 8;
          fVar49 = *pfVar3 - *pfVar1;
          fVar50 = pfVar3[1] - pfVar1[1];
          fVar51 = pfVar3[2] - pfVar1[2];
          fVar52 = pfVar3[3] - pfVar1[3];
          fVar42 = fVar41 * ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
          fVar44 = fVar43 * _UNK_1530ea4f4;
          fVar46 = fVar45 * _UNK_1530ea4f8;
          fVar48 = fVar47 * _UNK_1530ea4fc;
          fVar70 = *pfVar5 - *pfVar4;
          fVar71 = pfVar5[1] - pfVar4[1];
          fVar72 = pfVar5[2] - pfVar4[2];
          fVar73 = pfVar5[3] - pfVar4[3];
          fVar37 = *pfVar4 + *pfVar5;
          fVar38 = pfVar4[1] + pfVar5[1];
          fVar39 = pfVar4[2] + pfVar5[2];
          fVar40 = pfVar4[3] + pfVar5[3];
          pfVar3 = pfVar5 + uVar9 * -4 + -4;
          fVar66 = pfVar3[1];
          fVar67 = pfVar3[2];
          fVar68 = pfVar3[3];
          fVar59 = fVar58 * ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
          fVar61 = fVar60 * _UNK_1530ea4f4;
          fVar63 = fVar62 * _UNK_1530ea4f8;
          fVar65 = fVar64 * _UNK_1530ea4fc;
          pfVar4 = (float *)((longlong)pfVar5 + lVar12 + -0x10);
          *pfVar4 = fVar41 + fVar29 + *pfVar3;
          pfVar4[1] = fVar43 + fVar30 + fVar66;
          pfVar4[2] = fVar45 + fVar31 + fVar67;
          pfVar4[3] = fVar47 + fVar32 + fVar68;
          fVar17 = fVar29 * ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
          fVar19 = fVar30 * _UNK_1530ea4f4;
          fVar21 = fVar31 * _UNK_1530ea4f8;
          fVar23 = fVar32 * _UNK_1530ea4fc;
          pfVar3 = pfVar5 + uVar9 * -4;
          fVar66 = pfVar3[1];
          fVar67 = pfVar3[2];
          fVar68 = pfVar3[3];
          fVar18 = fVar37 * ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
          fVar20 = fVar38 * _UNK_1530ea4f4;
          fVar22 = fVar39 * _UNK_1530ea4f8;
          fVar24 = fVar40 * _UNK_1530ea4fc;
          pfVar4 = (float *)((longlong)pfVar5 + lVar12);
          *pfVar4 = fVar58 + fVar37 + *pfVar3;
          pfVar4[1] = fVar60 + fVar38 + fVar66;
          pfVar4[2] = fVar62 + fVar39 + fVar67;
          pfVar4[3] = fVar64 + fVar40 + fVar68;
          fVar69 = _UNK_1530ea55c;
          fVar68 = _UNK_1530ea558;
          fVar67 = _UNK_1530ea554;
          fVar66 = ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd;
          pfVar3 = pfVar5 + uVar9 * -4 + -4;
          fVar74 = fVar41 * fVar54 + fVar17 + *pfVar3;
          fVar75 = fVar43 * fVar26 + fVar19 + pfVar3[1];
          fVar76 = fVar45 * fVar27 + fVar21 + pfVar3[2];
          fVar77 = fVar47 * fVar28 + fVar23 + pfVar3[3];
          pfVar3 = pfVar5 + uVar9 * -4 + -4;
          fVar29 = fVar42 + fVar29 * fVar54 + *pfVar3;
          fVar30 = fVar44 + fVar30 * fVar26 + pfVar3[1];
          fVar31 = fVar46 + fVar31 * fVar27 + pfVar3[2];
          fVar32 = fVar48 + fVar32 * fVar28 + pfVar3[3];
          pfVar3 = pfVar5 + uVar9 * -4;
          fVar21 = fVar58 * fVar54 + fVar18 + *pfVar3;
          fVar20 = fVar60 * fVar26 + fVar20 + pfVar3[1];
          fVar22 = fVar62 * fVar27 + fVar22 + pfVar3[2];
          fVar23 = fVar64 * fVar28 + fVar24 + pfVar3[3];
          fVar17 = *(float *)(((longlong)param_6 - (longlong)param_7) + -4 + (longlong)pfVar13);
          pfVar3 = pfVar5 + uVar9 * -4;
          fVar41 = fVar59 + fVar37 * fVar54 + *pfVar3;
          fVar38 = fVar61 + fVar38 * fVar26 + pfVar3[1];
          fVar39 = fVar63 + fVar39 * fVar27 + pfVar3[2];
          fVar40 = fVar65 + fVar40 * fVar28 + pfVar3[3];
          fVar44 = fVar33 * fVar25 + fVar53 * fVar16;
          fVar45 = fVar34 * fVar25 + fVar55 * fVar16;
          fVar46 = fVar35 * fVar25 + fVar56 * fVar16;
          fVar47 = fVar36 * fVar25 + fVar57 * fVar16;
          fVar54 = fVar53 * fVar25 - fVar33 * fVar16;
          fVar19 = fVar55 * fVar25 - fVar34 * fVar16;
          fVar37 = fVar56 * fVar25 - fVar35 * fVar16;
          fVar36 = fVar57 * fVar25 - fVar36 * fVar16;
          fVar48 = fVar70 * fVar25 - fVar49 * fVar16;
          fVar53 = fVar71 * fVar25 - fVar50 * fVar16;
          fVar55 = fVar72 * fVar25 - fVar51 * fVar16;
          fVar56 = fVar73 * fVar25 - fVar52 * fVar16;
          fVar26 = fVar49 * fVar25 + fVar70 * fVar16;
          fVar27 = fVar50 * fVar25 + fVar71 * fVar16;
          fVar28 = fVar51 * fVar25 + fVar72 * fVar16;
          fVar18 = fVar52 * fVar25 + fVar73 * fVar16;
          fVar24 = fVar54 + fVar41;
          fVar33 = fVar19 + fVar38;
          fVar34 = fVar37 + fVar39;
          fVar35 = fVar36 + fVar40;
          fVar41 = fVar41 - fVar54;
          fVar38 = fVar38 - fVar19;
          fVar39 = fVar39 - fVar37;
          fVar40 = fVar40 - fVar36;
          fVar19 = param_9 * *(float *)(((longlong)param_6 - (longlong)param_7) + (longlong)pfVar13)
          ;
          fVar36 = fVar29 - fVar48;
          fVar37 = fVar30 - fVar53;
          fVar42 = fVar31 - fVar55;
          fVar43 = fVar32 - fVar56;
          fVar48 = fVar48 + fVar29;
          fVar53 = fVar53 + fVar30;
          fVar55 = fVar55 + fVar31;
          fVar56 = fVar56 + fVar32;
          fVar54 = pfVar13[-1];
          fVar49 = fVar26 + fVar74;
          fVar50 = fVar27 + fVar75;
          fVar51 = fVar28 + fVar76;
          fVar52 = fVar18 + fVar77;
          fVar74 = fVar74 - fVar26;
          fVar75 = fVar75 - fVar27;
          fVar76 = fVar76 - fVar28;
          fVar77 = fVar77 - fVar18;
          fVar29 = fVar21 - fVar44;
          fVar30 = fVar20 - fVar45;
          fVar31 = fVar22 - fVar46;
          fVar32 = fVar23 - fVar47;
          fVar44 = fVar44 + fVar21;
          fVar45 = fVar45 + fVar20;
          fVar46 = fVar46 + fVar22;
          fVar47 = fVar47 + fVar23;
          fVar18 = param_9 * *pfVar13;
          fVar26 = *(float *)(((longlong)param_5 - (longlong)param_7) + -4 + (longlong)pfVar13);
          fVar28 = param_9 * *(float *)(((longlong)param_5 - (longlong)param_7) + (longlong)pfVar13)
          ;
          pfVar5 = pfVar5 + 8;
          fVar27 = *(float *)((longlong)pfVar13 + ((longlong)param_8 - (longlong)param_7) + -4);
          fVar20 = param_9 * *(float *)((longlong)pfVar13 + ((longlong)param_8 - (longlong)param_7))
          ;
          pfVar13 = pfVar13 + 2;
          p_Var2 = p_Var14 + (iVar8 - lVar7);
          p_Var2->m128_f32[0] = fVar26 * fVar44 + fVar28 * fVar74;
          p_Var2->m128_f32[1] = fVar26 * fVar45 + fVar28 * fVar75;
          p_Var2->m128_f32[2] = fVar26 * fVar46 + fVar28 * fVar76;
          p_Var2->m128_f32[3] = fVar26 * fVar47 + fVar28 * fVar77;
          p_Var2 = p_Var14 + (iVar8 - lVar7) + -1;
          p_Var2->m128_f32[0] = fVar26 * fVar74 - fVar28 * fVar44;
          p_Var2->m128_f32[1] = fVar26 * fVar75 - fVar28 * fVar45;
          p_Var2->m128_f32[2] = fVar26 * fVar76 - fVar28 * fVar46;
          p_Var2->m128_f32[3] = fVar26 * fVar77 - fVar28 * fVar47;
          p_Var14->m128_f32[0] = fVar17 * fVar24 + fVar19 * fVar36;
          p_Var14->m128_f32[1] = fVar17 * fVar33 + fVar19 * fVar37;
          p_Var14->m128_f32[2] = fVar17 * fVar34 + fVar19 * fVar42;
          p_Var14->m128_f32[3] = fVar17 * fVar35 + fVar19 * fVar43;
          p_Var14[-1].m128_f32[0] = fVar17 * fVar36 - fVar19 * fVar24;
          *(float *)((longlong)p_Var14 + -0xc) = fVar17 * fVar37 - fVar19 * fVar33;
          *(float *)((longlong)p_Var14 + -8) = fVar17 * fVar42 - fVar19 * fVar34;
          *(float *)((longlong)p_Var14 + -4) = fVar17 * fVar43 - fVar19 * fVar35;
          p_Var2 = p_Var14 + lVar15;
          p_Var2->m128_f32[0] = fVar54 * fVar41 + fVar18 * fVar48;
          p_Var2->m128_f32[1] = fVar54 * fVar38 + fVar18 * fVar53;
          p_Var2->m128_f32[2] = fVar54 * fVar39 + fVar18 * fVar55;
          p_Var2->m128_f32[3] = fVar54 * fVar40 + fVar18 * fVar56;
          p_Var2 = p_Var14 + lVar15 + -1;
          p_Var2->m128_f32[0] = fVar54 * fVar48 - fVar18 * fVar41;
          p_Var2->m128_f32[1] = fVar54 * fVar53 - fVar18 * fVar38;
          p_Var2->m128_f32[2] = fVar54 * fVar55 - fVar18 * fVar39;
          p_Var2->m128_f32[3] = fVar54 * fVar56 - fVar18 * fVar40;
          p_Var2 = p_Var14 + lVar10 + -1;
          p_Var2->m128_f32[0] = fVar27 * fVar49 - fVar20 * fVar29;
          p_Var2->m128_f32[1] = fVar27 * fVar50 - fVar20 * fVar30;
          p_Var2->m128_f32[2] = fVar27 * fVar51 - fVar20 * fVar31;
          p_Var2->m128_f32[3] = fVar27 * fVar52 - fVar20 * fVar32;
          p_Var2 = p_Var14 + lVar10;
          p_Var2->m128_f32[0] = fVar27 * fVar29 + fVar20 * fVar49;
          p_Var2->m128_f32[1] = fVar27 * fVar30 + fVar20 * fVar50;
          p_Var2->m128_f32[2] = fVar27 * fVar31 + fVar20 * fVar51;
          p_Var2->m128_f32[3] = fVar27 * fVar32 + fVar20 * fVar52;
          p_Var14 = p_Var14 + 2;
          local_168 = local_168 - 1;
          fVar54 = fVar66;
          fVar26 = fVar67;
          fVar27 = fVar68;
          fVar28 = fVar69;
        } while (local_168 != 0);
        uVar11 = (ulonglong)(uint)param_1;
      }
      param_3 = param_3 + param_1 * 5;
      param_4 = param_4 + uVar9;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// passfb5 @ 14f052d50

void __cdecl
passfb5(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
       float *param_7,float *param_8,float param_9)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_128;
  int local_120;
  float *local_110;
  ulonglong local_108;
  
  fVar28 = param_9 * __real_3f167918;
  fVar27 = param_9 * __real_3f737871;
  lVar6 = (longlong)((param_2 + 1) * param_1);
  lVar4 = (longlong)(param_1 * 6);
  if (param_1 == 2) {
    if (0 < param_2) {
      pfVar7 = param_3 + 9;
      lVar4 = (longlong)(param_2 * 2) + 2;
      pfVar10 = param_4 + (((longlong)(param_2 * 2) + 3) - lVar6);
      lVar13 = param_2 * 4 - lVar4;
      lVar14 = param_2 * 10 - lVar4;
      lVar6 = param_2 * 6 - lVar4;
      lVar4 = param_2 * 8 - lVar4;
      uVar5 = (ulonglong)(uint)param_2;
      do {
        fVar25 = pfVar7[-7] - pfVar7[-1];
        fVar21 = pfVar7[-6] + *pfVar7;
        fVar26 = pfVar7[-6] - *pfVar7;
        fVar17 = pfVar7[-1] + pfVar7[-7];
        fVar24 = pfVar7[-4] - pfVar7[-2];
        fVar19 = pfVar7[-2] + pfVar7[-4];
        fVar20 = pfVar7[-5] - pfVar7[-3];
        fVar16 = pfVar7[-3] + pfVar7[-5];
        fVar18 = fVar17 * __real_3f4f1bbd;
        fVar22 = fVar21 * __real_3f4f1bbd;
        pfVar10[-1] = fVar17 + pfVar7[-9] + fVar16;
        fVar15 = fVar16 * __real_3f4f1bbd;
        *pfVar10 = fVar21 + pfVar7[-8] + fVar19;
        fVar15 = (fVar17 * __real_3e9e377a + pfVar7[-9]) - fVar15;
        fVar23 = (pfVar7[-9] - fVar18) + fVar16 * __real_3e9e377a;
        fVar21 = (fVar21 * __real_3e9e377a + pfVar7[-8]) - fVar19 * __real_3f4f1bbd;
        fVar18 = (pfVar7[-8] - fVar22) + fVar19 * __real_3e9e377a;
        fVar17 = fVar20 * fVar28 + fVar25 * fVar27;
        fVar19 = fVar25 * fVar28 - fVar20 * fVar27;
        fVar16 = fVar24 * fVar28 + fVar26 * fVar27;
        fVar20 = fVar26 * fVar28 - fVar24 * fVar27;
        pfVar10[lVar13 + 1] = fVar15 - fVar16;
        pfVar10[lVar14 + 1] = fVar15 + fVar16;
        pfVar10[lVar13 + 2] = fVar21 + fVar17;
        pfVar10[lVar6 + 2] = fVar18 + fVar19;
        pfVar10[lVar6 + 1] = fVar23 - fVar20;
        pfVar10[lVar4 + 1] = fVar23 + fVar20;
        pfVar7 = pfVar7 + 10;
        pfVar10[lVar4 + 2] = fVar18 - fVar19;
        pfVar10[lVar14 + 2] = fVar21 - fVar17;
        pfVar10 = pfVar10 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    local_128 = 1;
    if (0 < param_2) {
      iVar2 = param_1 * 10 + 2;
      local_120 = 10;
      do {
        if (1 < (longlong)param_1) {
          lVar13 = (longlong)param_5 - (longlong)param_6;
          local_110 = param_6;
          lVar14 = (longlong)param_7 - (longlong)param_6;
          lVar3 = (longlong)param_8 - (longlong)param_6;
          local_108 = (ulonglong)(longlong)param_1 >> 1;
          iVar12 = iVar2;
          do {
            lVar11 = (longlong)(iVar12 + param_1 * -3);
            lVar8 = (longlong)(iVar12 + param_1 * -2);
            fVar26 = param_3[(lVar11 + -1) - lVar4] - param_3[((longlong)iVar12 + -1) - lVar4];
            fVar20 = param_3[((longlong)iVar12 + -1) - lVar4] + param_3[(lVar11 + -1) - lVar4];
            fVar24 = param_3[(lVar11 + -2) - lVar4] - param_3[((longlong)iVar12 + -2) - lVar4];
            fVar17 = param_3[((longlong)iVar12 + -2) - lVar4] + param_3[(lVar11 + -2) - lVar4];
            fVar23 = param_3[(lVar8 + -1) - lVar4] -
                     param_3[((longlong)(iVar12 - param_1) + -1) - lVar4];
            fVar19 = param_3[((longlong)(iVar12 - param_1) + -1) - lVar4] +
                     param_3[(lVar8 + -1) - lVar4];
            fVar21 = fVar20 * __real_3f4f1bbd;
            lVar9 = (longlong)(iVar12 + param_1 * -4);
            lVar11 = (longlong)(iVar12 + ((local_128 - local_120) + param_2) * param_1);
            fVar22 = param_3[(lVar8 + -2) - lVar4] -
                     param_3[((longlong)(iVar12 - param_1) + -2) - lVar4];
            fVar16 = param_3[((longlong)(iVar12 - param_1) + -2) - lVar4] +
                     param_3[(lVar8 + -2) - lVar4];
            fVar18 = fVar17 * __real_3f4f1bbd;
            param_4[(lVar11 + -2) - lVar6] = fVar17 + param_3[(lVar9 + -2) - lVar4] + fVar16;
            fVar15 = fVar16 * __real_3f4f1bbd;
            param_4[(lVar11 + -1) - lVar6] = fVar20 + param_3[(lVar9 + -1) - lVar4] + fVar19;
            fVar15 = (fVar17 * __real_3e9e377a + param_3[(lVar9 + -2) - lVar4]) - fVar15;
            fVar18 = (param_3[(lVar9 + -2) - lVar4] - fVar18) + fVar16 * __real_3e9e377a;
            fVar25 = (param_3[(lVar9 + -1) - lVar4] - fVar21) + fVar19 * __real_3e9e377a;
            fVar20 = (fVar20 * __real_3e9e377a + param_3[(lVar9 + -1) - lVar4]) -
                     fVar19 * __real_3f4f1bbd;
            fVar19 = fVar22 * fVar28 + fVar24 * fVar27;
            fVar17 = fVar24 * fVar28 - fVar22 * fVar27;
            fVar16 = fVar23 * fVar28 + fVar26 * fVar27;
            lVar11 = (longlong)(iVar12 + ((param_2 * 2 - local_120) + local_128) * param_1);
            fVar21 = fVar16 + fVar15;
            fVar15 = fVar15 - fVar16;
            fVar16 = fVar17 + fVar25;
            fVar22 = fVar26 * fVar28 - fVar23 * fVar27;
            fVar25 = fVar25 - fVar17;
            fVar17 = fVar18 - fVar22;
            fVar22 = fVar22 + fVar18;
            fVar18 = fVar20 - fVar19;
            fVar19 = fVar19 + fVar20;
            param_4[(lVar11 + -2) - lVar6] =
                 fVar15 * *(float *)(lVar13 + (longlong)local_110) -
                 param_9 * *(float *)(lVar13 + 4 + (longlong)local_110) * fVar19;
            param_4[(lVar11 + -1) - lVar6] =
                 param_9 * *(float *)(lVar13 + 4 + (longlong)local_110) * fVar15 +
                 fVar19 * *(float *)(lVar13 + (longlong)local_110);
            lVar11 = (longlong)(iVar12 + ((param_2 * 3 - local_120) + local_128) * param_1);
            param_4[(lVar11 + -2) - lVar6] = fVar17 * *local_110 - param_9 * local_110[1] * fVar16;
            param_4[(lVar11 + -1) - lVar6] = param_9 * local_110[1] * fVar17 + fVar16 * *local_110;
            lVar11 = (longlong)(iVar12 + ((param_2 * 4 - local_120) + local_128) * param_1);
            iVar1 = iVar12 + ((param_2 * 5 - local_120) + local_128) * param_1;
            iVar12 = iVar12 + 2;
            param_4[(lVar11 + -2) - lVar6] =
                 fVar22 * *(float *)(lVar14 + (longlong)local_110) -
                 param_9 * *(float *)(lVar14 + 4 + (longlong)local_110) * fVar25;
            param_4[(lVar11 + -1) - lVar6] =
                 param_9 * *(float *)(lVar14 + 4 + (longlong)local_110) * fVar22 +
                 fVar25 * *(float *)(lVar14 + (longlong)local_110);
            lVar11 = (longlong)iVar1;
            param_4[(lVar11 + -2) - lVar6] =
                 fVar21 * *(float *)(lVar3 + (longlong)local_110) -
                 param_9 * *(float *)(lVar3 + 4 + (longlong)local_110) * fVar18;
            param_4[(lVar11 + -1) - lVar6] =
                 param_9 * *(float *)(lVar3 + 4 + (longlong)local_110) * fVar21 +
                 fVar18 * *(float *)(lVar3 + (longlong)local_110);
            local_110 = local_110 + 2;
            local_108 = local_108 - 1;
          } while (local_108 != 0);
        }
        local_128 = local_128 + 1;
        iVar2 = iVar2 + param_1 * 5;
        local_120 = local_120 + 5;
      } while (local_128 <= param_2);
    }
  }
  return;
}

// passfb @ 14f053560

void __cdecl
passfb(int *param_1,int param_2,int param_3,int param_4,int param_5,float *param_6,float *param_7,
      float *param_8,float *param_9,float *param_10,float *param_11,float param_12)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  float *pfVar19;
  longlong lVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  float *pfVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  float *pfVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  int iVar36;
  longlong lVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  longlong lVar48;
  longlong lVar49;
  int iVar50;
  longlong lVar51;
  int iVar52;
  longlong lVar53;
  float fVar54;
  ulonglong local_f0;
  
  uVar33 = (ulonglong)param_2;
  lVar53 = (longlong)((param_4 + 1) * param_2) * 4 + 4;
  lVar5 = (longlong)param_7 - lVar53;
  lVar53 = (longlong)param_9 - lVar53;
  lVar17 = (longlong)param_5 * 4 + 4;
  lVar27 = (longlong)param_10 - lVar17;
  lVar17 = (longlong)param_8 - lVar17;
  pfVar16 = param_6 + -(longlong)((param_3 + 1) * param_2);
  pfVar23 = pfVar16 + -1;
  iVar6 = (param_3 + 1) / 2;
  iVar24 = param_2 * param_3;
  if (param_2 < param_4) {
    iVar28 = 2;
    if (1 < iVar6) {
      iVar47 = param_3 * param_4;
      iVar36 = param_4 * 2;
      iVar45 = param_3;
      do {
        iVar52 = 1;
        if (0 < param_2) {
          do {
            iVar50 = 1;
            if (3 < param_4) {
              iVar25 = -(iVar47 + 2);
              iVar1 = param_3 * 2 + iVar28;
              iVar41 = (iVar47 + 2) * param_2 + iVar52;
              iVar46 = iVar1 * param_2 + iVar52;
              iVar7 = param_3 * 3 - iVar1;
              iVar8 = param_3 * 4 - iVar1;
              iVar18 = iVar36 + iVar25;
              iVar25 = iVar47 + iVar25;
              uVar33 = (ulonglong)((uint)param_4 >> 2);
              iVar50 = ((uint)param_4 >> 2) * 4 + 1;
              do {
                iVar10 = iVar46 + (iVar45 + -iVar1 + param_3) * param_2;
                iVar11 = iVar46 + (-iVar1 + iVar28 + param_3) * param_2;
                *(float *)(lVar53 + (longlong)((iVar18 + 1) * param_2 + iVar41) * 4) =
                     pfVar23[iVar11] + pfVar23[iVar10];
                iVar2 = ((param_3 * 2 - iVar1) + iVar45) * param_2 + iVar46;
                *(float *)(lVar53 + (longlong)((iVar25 + 1) * param_2 + iVar41) * 4) =
                     pfVar23[iVar11] - pfVar23[iVar10];
                *(float *)(lVar53 + (longlong)((iVar18 + 2) * param_2 + iVar41) * 4) =
                     pfVar23[iVar46] + pfVar23[iVar2];
                *(float *)(lVar53 + (longlong)iVar41 * 4) = pfVar23[iVar46] - pfVar23[iVar2];
                iVar10 = (iVar45 + iVar7) * param_2 + iVar46;
                iVar11 = iVar46 + (iVar7 + iVar28) * param_2;
                *(float *)(lVar53 + (longlong)((iVar18 + 3) * param_2 + iVar41) * 4) =
                     pfVar23[iVar11] + pfVar23[iVar10];
                iVar2 = iVar46 + (iVar8 + iVar45) * param_2;
                iVar9 = (iVar8 + iVar28) * param_2 + iVar46;
                *(float *)(lVar53 + (longlong)((iVar25 + 3) * param_2 + iVar41) * 4) =
                     pfVar23[iVar11] - pfVar23[iVar10];
                iVar10 = (iVar18 + 4) * param_2 + iVar41;
                iVar11 = (iVar25 + 4) * param_2 + iVar41;
                iVar41 = iVar41 + param_2 * 4;
                *(float *)(lVar53 + (longlong)iVar10 * 4) = pfVar23[iVar9] + pfVar23[iVar2];
                iVar46 = iVar46 + iVar24 * 4;
                *(float *)(lVar53 + (longlong)iVar11 * 4) = pfVar23[iVar9] - pfVar23[iVar2];
                uVar33 = uVar33 - 1;
              } while (uVar33 != 0);
            }
            if (iVar50 <= param_4) {
              pfVar16 = (float *)(lVar53 + (longlong)((iVar47 + iVar50) * param_2 + iVar52) * 4);
              pfVar14 = (float *)(lVar53 + (longlong)((iVar36 + iVar50) * param_2 + iVar52) * 4);
              pfVar29 = pfVar23 + ((iVar50 * param_3 + iVar45) * param_2 + iVar52);
              pfVar19 = pfVar23 + ((iVar28 + iVar50 * param_3) * param_2 + iVar52);
              uVar33 = (ulonglong)((param_4 - iVar50) + 1);
              do {
                *pfVar14 = *pfVar29 + *pfVar19;
                pfVar14 = pfVar14 + param_2;
                fVar3 = *pfVar19;
                pfVar19 = pfVar19 + iVar24;
                fVar4 = *pfVar29;
                pfVar29 = pfVar29 + iVar24;
                *pfVar16 = fVar3 - fVar4;
                pfVar16 = pfVar16 + param_2;
                uVar33 = uVar33 - 1;
              } while (uVar33 != 0);
            }
            iVar52 = iVar52 + 1;
          } while (iVar52 <= param_2);
        }
        iVar28 = iVar28 + 1;
        iVar45 = iVar45 + -1;
        iVar47 = iVar47 - param_4;
        iVar36 = iVar36 + param_4;
      } while (iVar28 <= iVar6);
    }
    uVar13 = (ulonglong)param_2;
    iVar28 = 1;
    uVar33 = uVar13;
    if (0 < param_2) {
      do {
        iVar36 = 1;
        if (3 < param_4) {
          iVar45 = (int)uVar33;
          lVar26 = (longlong)((param_4 + 3) * iVar45 + iVar28);
          pfVar16 = (float *)(lVar53 + lVar26 * 4);
          lVar12 = (longlong)((param_3 * 3 + 1) * iVar45 + iVar28);
          pfVar14 = pfVar23 + lVar12;
          iVar47 = (param_4 + 1) * param_2 + iVar28;
          uVar33 = (ulonglong)((uint)param_4 >> 2);
          iVar36 = ((uint)param_4 >> 2) * 4 + 1;
          do {
            pfVar16[iVar47 - lVar26] =
                 pfVar14[(iVar47 + ((param_3 - (param_4 + 1)) + 1) * param_2) - lVar12];
            pfVar16[((param_4 + 2) * iVar45 + iVar28) - lVar26] =
                 pfVar14[((param_3 * 2 + 1) * iVar45 + iVar28) - lVar12];
            *pfVar16 = *pfVar14;
            pfVar29 = pfVar14 + (((param_3 * 4 + 1) * iVar45 + iVar28) - lVar12);
            pfVar14 = pfVar14 + param_2 * param_3 * 4;
            pfVar16[((param_4 + 4) * iVar45 + iVar28) - lVar26] = *pfVar29;
            pfVar16 = pfVar16 + iVar45 * 4;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
          uVar33 = (ulonglong)(uint)param_2;
        }
        iVar45 = (int)uVar33;
        if (iVar36 <= param_4) {
          pfVar16 = (float *)(lVar53 + (longlong)((iVar36 + param_4) * iVar45 + iVar28) * 4);
          pfVar14 = pfVar23 + ((iVar36 * param_3 + 1) * iVar45 + iVar28);
          uVar34 = (ulonglong)((param_4 - iVar36) + 1);
          do {
            fVar3 = *pfVar14;
            pfVar14 = pfVar14 + param_2 * param_3;
            *pfVar16 = fVar3;
            pfVar16 = pfVar16 + uVar13;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 <= iVar45);
    }
  }
  else {
    if (1 < iVar6) {
      lVar39 = (longlong)((param_3 + 2) * param_2);
      lVar48 = (longlong)((param_4 * 2 + 1) * param_2);
      lVar43 = (longlong)(param_3 * param_2 * 2);
      lVar26 = (longlong)((param_3 * param_4 + 1) * param_2);
      lVar12 = (longlong)-(param_2 * param_4);
      pfVar14 = (float *)(lVar53 + (lVar26 + 2) * 4);
      uVar13 = (ulonglong)(iVar6 - 1);
      do {
        if (0 < param_4) {
          local_f0 = (ulonglong)(uint)param_4;
          lVar42 = lVar43 - lVar39;
          lVar49 = lVar48 - lVar26;
          pfVar29 = pfVar14;
          lVar32 = lVar26;
          lVar35 = lVar39;
          lVar20 = lVar43;
          do {
            lVar44 = 1;
            if ((longlong)uVar33 < 4) {
              if (0 < (longlong)uVar33) goto LAB_14f0538f1;
            }
            else {
              lVar40 = (lVar35 - lVar32) * 4 - lVar53;
              lVar44 = (lVar35 - lVar32) + lVar42;
              lVar30 = (((lVar20 - lVar32) * 4 + 4) - lVar53) + (longlong)pfVar23;
              lVar37 = (((lVar35 - lVar32) * 4 + 8) - lVar53) + (longlong)pfVar23;
              lVar31 = ((lVar44 * 4 + 8) - lVar53) + (longlong)pfVar23;
              lVar51 = lVar44 * 4 - lVar53;
              uVar34 = uVar33 >> 2;
              lVar44 = uVar34 * 4 + 1;
              pfVar19 = pfVar29;
              do {
                pfVar19[lVar49 + -1] =
                     *(float *)((longlong)pfVar19 + (longlong)pfVar23 + lVar40 + -4) +
                     *(float *)((longlong)pfVar23 + lVar51 + -4 + (longlong)pfVar19);
                pfVar19[-1] = *(float *)((longlong)pfVar19 + (longlong)pfVar23 + lVar40 + -4) -
                              *(float *)((longlong)pfVar23 + lVar51 + -4 + (longlong)pfVar19);
                pfVar19[lVar49] =
                     *(float *)((longlong)pfVar16 + (longlong)pfVar19 + -4 + lVar51) +
                     *(float *)((longlong)pfVar16 + (longlong)pfVar19 + -4 + lVar40);
                *pfVar19 = *(float *)((longlong)pfVar16 + (longlong)pfVar19 + -4 + lVar40) -
                           *(float *)((longlong)pfVar16 + (longlong)pfVar19 + -4 + lVar51);
                pfVar19[lVar49 + 1] =
                     *(float *)((longlong)pfVar23 + lVar40 + 4 + (longlong)pfVar19) +
                     *(float *)(lVar30 + (longlong)pfVar19);
                pfVar19[1] = *(float *)((longlong)pfVar23 + lVar40 + 4 + (longlong)pfVar19) -
                             *(float *)(lVar30 + (longlong)pfVar19);
                pfVar19[lVar49 + 2] =
                     *(float *)(lVar37 + (longlong)pfVar19) + *(float *)((longlong)pfVar19 + lVar31)
                ;
                pfVar19[2] = *(float *)(lVar37 + (longlong)pfVar19) -
                             *(float *)((longlong)pfVar19 + lVar31);
                pfVar19 = pfVar19 + 4;
                uVar34 = uVar34 - 1;
              } while (uVar34 != 0);
              if (lVar44 <= (longlong)uVar33) {
LAB_14f0538f1:
                pfVar19 = pfVar23 + lVar35 + lVar44;
                lVar44 = (uVar33 - lVar44) + 1;
                do {
                  *(float *)((((lVar32 - lVar35) + lVar49) * 4 - (longlong)pfVar23) + lVar53 +
                            (longlong)pfVar19) = pfVar19[lVar42] + *pfVar19;
                  *(float *)((longlong)pfVar19 +
                            ((lVar32 - lVar35) * 4 - (longlong)pfVar23) + lVar53) =
                       *pfVar19 - pfVar19[lVar42];
                  pfVar19 = pfVar19 + 1;
                  lVar44 = lVar44 + -1;
                } while (lVar44 != 0);
              }
            }
            lVar32 = lVar32 + uVar33;
            pfVar29 = pfVar29 + uVar33;
            lVar35 = lVar35 + iVar24;
            local_f0 = local_f0 - 1;
            lVar20 = iVar24 + lVar20;
          } while (local_f0 != 0);
        }
        lVar39 = lVar39 + uVar33;
        lVar43 = lVar43 + -param_2;
        lVar26 = lVar26 + lVar12;
        pfVar14 = pfVar14 + lVar12;
        lVar48 = lVar48 + param_2 * param_4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uVar33 = (ulonglong)param_2;
    if (0 < param_4) {
      lVar12 = (longlong)((param_4 + 1) * param_2 + 1);
      iVar28 = (param_4 + 1) * param_2;
      iVar36 = (param_3 + 1) * param_2;
      lVar26 = (longlong)((param_3 + 1) * param_2 + 1);
      puVar21 = (undefined4 *)(lVar53 + (lVar12 + 1) * 4);
      uVar13 = (ulonglong)(uint)param_4;
      do {
        iVar45 = 1;
        if (param_2 < 4) {
          if (0 < param_2) goto LAB_14f053b45;
        }
        else {
          lVar39 = ((lVar26 - lVar12) * 4 - lVar53) + (longlong)pfVar23;
          uVar34 = (ulonglong)((uint)param_2 >> 2);
          iVar45 = ((uint)param_2 >> 2) * 4 + 1;
          puVar22 = puVar21;
          do {
            puVar22[-1] = *(undefined4 *)((longlong)puVar22 + lVar39 + -4);
            *puVar22 = *(undefined4 *)((longlong)puVar22 + lVar39);
            puVar22[1] = *(undefined4 *)((longlong)puVar22 + lVar39 + 4);
            puVar22[2] = *(undefined4 *)
                          ((longlong)puVar22 +
                          (((lVar26 - lVar12) * 4 + 8) - lVar53) + (longlong)pfVar23);
            puVar22 = puVar22 + 4;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
          if (iVar45 <= param_2) {
LAB_14f053b45:
            pfVar14 = (float *)(lVar53 + (longlong)(iVar28 + iVar45) * 4);
            pfVar16 = pfVar23 + (iVar36 + iVar45);
            uVar34 = (ulonglong)((param_2 - iVar45) + 1);
            do {
              fVar3 = *pfVar16;
              pfVar16 = pfVar16 + 1;
              *pfVar14 = fVar3;
              pfVar14 = pfVar14 + 1;
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
          }
        }
        iVar28 = iVar28 + param_2;
        lVar12 = lVar12 + uVar33;
        puVar21 = puVar21 + uVar33;
        iVar36 = iVar36 + param_2 * param_3;
        lVar26 = lVar26 + param_2 * param_3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  uVar13 = (ulonglong)param_5;
  iVar28 = 0;
  iVar36 = 2 - (int)uVar33;
  uVar34 = (ulonglong)iVar36;
  if (1 < iVar6) {
    lVar43 = (longlong)(param_5 * 2);
    iVar47 = param_3 * param_5;
    pfVar23 = param_11 + (uVar34 - 1);
    lVar12 = (longlong)iVar47;
    lVar39 = (((lVar43 - uVar13) * 4 + 8) - lVar27) + lVar17;
    lVar26 = (((lVar12 - uVar13) * 4 + 8) - lVar27) + lVar17;
    pfVar16 = pfVar23 + -1;
    uVar15 = (ulonglong)(iVar6 - 1);
    iVar45 = param_3;
    do {
      pfVar16 = pfVar16 + param_2;
      pfVar23 = pfVar23 + param_2;
      uVar38 = (int)uVar34 + (int)uVar33;
      lVar48 = 1;
      if ((longlong)uVar13 < 4) {
        if (0 < (longlong)uVar13) goto LAB_14f0543f5;
      }
      else {
        lVar20 = lVar12 - uVar13;
        pfVar14 = (float *)(lVar27 + uVar13 * 4 + 8);
        uVar34 = uVar13 >> 2;
        lVar48 = uVar34 * 4 + 1;
        do {
          *(float *)((longlong)pfVar14 + lVar39 + -0xc) =
               pfVar14[uVar13 - 1] * *pfVar16 + pfVar14[-1];
          *(float *)((longlong)pfVar14 + lVar26 + -0xc) = param_12 * *pfVar23 * pfVar14[lVar20 + -1]
          ;
          *(float *)((longlong)pfVar14 + lVar39 + -8) = pfVar14[uVar13] * pfVar23[-1] + *pfVar14;
          *(float *)((longlong)pfVar14 + lVar26 + -8) = param_12 * *pfVar23 * pfVar14[lVar20];
          *(float *)((longlong)pfVar14 + lVar39 + -4) =
               pfVar14[uVar13 + 1] * pfVar23[-1] + pfVar14[1];
          *(float *)((longlong)pfVar14 + lVar26 + -4) = param_12 * *pfVar23 * pfVar14[lVar20 + 1];
          *(float *)((longlong)pfVar14 + lVar39) = pfVar14[uVar13 + 2] * pfVar23[-1] + pfVar14[2];
          *(float *)((longlong)pfVar14 + lVar26) =
               param_12 * *pfVar23 * pfVar14[(lVar12 - uVar13) + 2];
          pfVar14 = pfVar14 + 4;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
        if (lVar48 <= (longlong)uVar13) {
LAB_14f0543f5:
          pfVar14 = (float *)(lVar27 + (uVar13 + lVar48) * 4);
          lVar48 = (uVar13 - lVar48) + 1;
          do {
            *(float *)((longlong)pfVar14 + lVar39 + -8) = pfVar14[uVar13] * pfVar23[-1] + *pfVar14;
            *(float *)((longlong)pfVar14 + (((longlong)iVar47 - uVar13) * 4 - lVar27) + lVar17) =
                 param_12 * *pfVar23 * pfVar14[lVar12 - uVar13];
            pfVar14 = pfVar14 + 1;
            lVar48 = lVar48 + -1;
          } while (lVar48 != 0);
        }
      }
      iVar28 = iVar28 + (int)uVar33;
      if (2 < iVar6) {
        iVar52 = (param_3 + -1) * param_5;
        lVar48 = (longlong)(int)uVar38;
        lVar20 = (((iVar52 - lVar43) * 4 + 8) - lVar17) + lVar27;
        lVar32 = (((param_5 * 3 - lVar43) * 4 + 8) - lVar17) + lVar27;
        uVar33 = (ulonglong)(iVar6 - 2);
        do {
          lVar48 = lVar48 + iVar28;
          if (iVar24 < lVar48) {
            lVar48 = lVar48 - iVar24;
          }
          fVar3 = param_11[lVar48 + -2];
          lVar35 = 1;
          fVar4 = param_11[lVar48 + -1];
          if ((longlong)uVar13 < 4) {
            if (0 < (longlong)uVar13) goto LAB_14f054648;
          }
          else {
            pfVar14 = (float *)(uVar13 * 4 + lVar27 + lVar39);
            lVar42 = iVar45 * param_5 - lVar43;
            uVar34 = uVar13 >> 2;
            fVar54 = fVar4 * param_12;
            lVar35 = uVar34 * 4 + 1;
            do {
              pfVar14[-1] = fVar3 * *(float *)((longlong)pfVar14 + lVar32 + -0xc) + pfVar14[-1];
              pfVar14[lVar42 + -1] =
                   fVar54 * *(float *)((longlong)pfVar14 + lVar20 + -0xc) + pfVar14[lVar42 + -1];
              *pfVar14 = fVar3 * *(float *)((longlong)pfVar14 + lVar32 + -8) + *pfVar14;
              pfVar14[lVar42] =
                   fVar54 * *(float *)((longlong)pfVar14 + lVar20 + -8) + pfVar14[lVar42];
              pfVar14[1] = fVar3 * *(float *)((longlong)pfVar14 + lVar32 + -4) + pfVar14[1];
              pfVar14[lVar42 + 1] =
                   fVar54 * *(float *)((longlong)pfVar14 + lVar20 + -4) + pfVar14[lVar42 + 1];
              pfVar14[2] = fVar3 * *(float *)((longlong)pfVar14 + lVar32) + pfVar14[2];
              pfVar14[lVar42 + 2] =
                   fVar54 * *(float *)((longlong)pfVar14 + lVar20) + pfVar14[lVar42 + 2];
              pfVar14 = pfVar14 + 4;
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
            if (lVar35 <= (longlong)uVar13) {
LAB_14f054648:
              pfVar14 = (float *)(lVar17 + (lVar43 + lVar35) * 4);
              lVar42 = iVar45 * param_5 - lVar43;
              lVar35 = (uVar13 - lVar35) + 1;
              do {
                *pfVar14 = fVar3 * *(float *)((longlong)pfVar14 + lVar32 + -8) + *pfVar14;
                pfVar14[lVar42] =
                     fVar4 * param_12 *
                     *(float *)((longlong)pfVar14 + ((iVar52 - lVar43) * 4 - lVar17) + lVar27) +
                     pfVar14[lVar42];
                pfVar14 = pfVar14 + 1;
                lVar35 = lVar35 + -1;
              } while (lVar35 != 0);
            }
          }
          iVar52 = iVar52 - param_5;
          uVar33 = uVar33 - 1;
          lVar20 = lVar20 + (longlong)-param_5 * 4;
          lVar32 = lVar32 + uVar13 * 4;
        } while (uVar33 != 0);
        uVar33 = (ulonglong)(uint)param_2;
      }
      lVar26 = lVar26 + (longlong)-param_5 * 4;
      iVar47 = iVar47 - param_5;
      lVar39 = lVar39 + uVar13 * 4;
      uVar34 = (ulonglong)uVar38;
      iVar45 = iVar45 + -1;
      lVar43 = lVar43 + uVar13;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    uVar34 = (ulonglong)param_5;
    uVar13 = (ulonglong)(iVar6 - 1);
    lVar12 = ((longlong)(param_5 * 2) - uVar34) * 4 + 8;
    do {
      lVar26 = 1;
      if ((longlong)uVar34 < 4) {
        if (0 < (longlong)uVar34) goto LAB_14f054833;
      }
      else {
        uVar15 = uVar34 >> 2;
        pfVar16 = (float *)(lVar27 + 8 + uVar34 * 4);
        lVar26 = uVar15 * 4 + 1;
        do {
          pfVar16[-1] = *(float *)((longlong)pfVar16 + lVar12 + -0xc) + pfVar16[-1];
          *pfVar16 = *(float *)((longlong)pfVar16 + lVar12 + -8) + *pfVar16;
          pfVar16[1] = *(float *)((longlong)pfVar16 + lVar12 + -4) + pfVar16[1];
          pfVar16[2] = *(float *)((longlong)pfVar16 + lVar12) + pfVar16[2];
          pfVar16 = pfVar16 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        if (lVar26 <= (longlong)uVar34) {
LAB_14f054833:
          pfVar16 = (float *)(lVar27 + (uVar34 + lVar26) * 4);
          lVar26 = (uVar34 - lVar26) + 1;
          do {
            *pfVar16 = *(float *)((longlong)pfVar16 + lVar12 + -8) + *pfVar16;
            pfVar16 = pfVar16 + 1;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
      }
      lVar12 = lVar12 + uVar34 * 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    lVar12 = (longlong)(param_5 * 2);
    uVar13 = (ulonglong)(iVar6 - 1);
    lVar26 = (longlong)(param_3 * param_5);
    pfVar16 = (float *)(lVar17 + 4 + lVar12 * 4);
    do {
      if (1 < (longlong)uVar34) {
        lVar39 = lVar26 - lVar12;
        lVar43 = (lVar39 * 4 - lVar17) + lVar27;
        uVar15 = uVar34 >> 1;
        pfVar23 = pfVar16;
        do {
          *(float *)((longlong)pfVar23 + (lVar27 - lVar17)) = *pfVar23 - pfVar23[lVar39 + 1];
          *(float *)((longlong)pfVar23 + lVar43) = *pfVar23 + pfVar23[lVar39 + 1];
          *(float *)((longlong)pfVar23 + (lVar27 - lVar17) + 4) = pfVar23[1] + pfVar23[lVar39];
          *(float *)((longlong)pfVar23 + lVar43 + 4) = pfVar23[1] - pfVar23[lVar39];
          pfVar23 = pfVar23 + 2;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      lVar12 = lVar12 + uVar34;
      pfVar16 = pfVar16 + uVar34;
      lVar26 = lVar26 + -param_5;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar13 = (ulonglong)param_5;
  *param_1 = 1;
  iVar6 = (int)uVar33;
  if (iVar6 != 2) {
    lVar12 = 1;
    *param_1 = 0;
    if (3 < (longlong)uVar13) {
      lVar26 = lVar27 - lVar17;
      puVar21 = (undefined4 *)(lVar17 + 8 + uVar13 * 4);
      uVar34 = uVar13 >> 2;
      lVar12 = uVar34 * 4 + 1;
      do {
        puVar21[-1] = *(undefined4 *)((longlong)puVar21 + lVar26 + -4);
        *puVar21 = *(undefined4 *)((longlong)puVar21 + lVar26);
        puVar21[1] = *(undefined4 *)((longlong)puVar21 + lVar26 + 4);
        puVar21[2] = *(undefined4 *)((longlong)puVar21 + lVar26 + 8);
        puVar21 = puVar21 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    if (lVar12 <= (longlong)uVar13) {
      puVar21 = (undefined4 *)(lVar17 + (uVar13 + lVar12) * 4);
      lVar12 = (uVar13 - lVar12) + 1;
      do {
        *puVar21 = *(undefined4 *)((longlong)puVar21 + (lVar27 - lVar17));
        puVar21 = puVar21 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (1 < param_3) {
      iVar24 = param_4 * 2;
      uVar13 = (ulonglong)(param_3 - 1);
      lVar26 = (longlong)((iVar24 + 2) * iVar6);
      puVar21 = (undefined4 *)(lVar5 + 4 + lVar26 * 4);
      lVar27 = (longlong)((param_4 + 2) * iVar6 * 2);
      iVar28 = iVar24 + 3;
      lVar12 = lVar27 - lVar26;
      lVar17 = (iVar24 + 1) * iVar6 - lVar26;
      do {
        iVar45 = 1;
        if (param_4 < 4) {
          if (0 < param_4) goto LAB_14f054bcd;
        }
        else {
          lVar39 = lVar12 + lVar26;
          lVar32 = (lVar39 - lVar26) + (iVar28 * iVar6 - lVar27);
          lVar39 = lVar39 - lVar26;
          lVar48 = (lVar17 * 4 - lVar5) + lVar53;
          lVar43 = (lVar32 * 4 - lVar5) + lVar53;
          lVar20 = (lVar39 * 4 - lVar5) + lVar53;
          uVar34 = (ulonglong)((uint)param_4 >> 2);
          iVar45 = ((uint)param_4 >> 2) * 4 + 1;
          puVar22 = puVar21;
          do {
            puVar22[lVar17] = *(undefined4 *)((longlong)puVar22 + lVar48);
            puVar22[lVar17 + 1] = *(undefined4 *)((longlong)puVar22 + lVar48 + 4);
            *puVar22 = *(undefined4 *)((longlong)puVar22 + (lVar53 - lVar5));
            puVar22[1] = *(undefined4 *)((longlong)puVar22 + (lVar53 - lVar5) + 4);
            puVar22[lVar32] = *(undefined4 *)((longlong)puVar22 + lVar43);
            puVar22[lVar32 + 1] = *(undefined4 *)((longlong)puVar22 + lVar43 + 4);
            puVar22[lVar39] = *(undefined4 *)((longlong)puVar22 + lVar20);
            puVar22[lVar39 + 1] = *(undefined4 *)((longlong)puVar22 + lVar20 + 4);
            puVar22 = puVar22 + iVar6 * 4;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
          if (iVar45 <= param_4) {
LAB_14f054bcd:
            puVar22 = (undefined4 *)((longlong)((iVar24 + iVar45) * iVar6) * 4 + 4 + lVar5);
            uVar34 = (ulonglong)((param_4 - iVar45) + 1);
            do {
              *puVar22 = *(undefined4 *)((longlong)puVar22 + (lVar53 - lVar5));
              puVar22[1] = *(undefined4 *)((longlong)puVar22 + (lVar53 - lVar5) + 4);
              puVar22 = puVar22 + iVar6;
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
          }
        }
        lVar39 = (longlong)iVar6;
        iVar24 = iVar24 + param_4;
        lVar26 = lVar26 + iVar6 * param_4;
        puVar21 = puVar21 + iVar6 * param_4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      param_5 = param_4 * 2;
      uVar13 = (ulonglong)(param_3 - 1);
      lVar17 = 0;
      if (param_4 < param_2 / 2) {
        pfVar16 = param_11 + (longlong)iVar36 + -1;
        do {
          pfVar16 = pfVar16 + lVar39;
          iVar24 = 1;
          if (0 < param_4) {
            do {
              if (3 < lVar39) {
                pfVar23 = (float *)(lVar53 + ((longlong)((param_5 + iVar24) * iVar6) + 3) * 4);
                uVar33 = lVar39 - 2U >> 1;
                pfVar14 = pfVar16;
                do {
                  pfVar29 = pfVar14 + 2;
                  *(float *)((longlong)pfVar23 + (lVar5 - lVar53)) =
                       *pfVar23 * pfVar14[1] - param_12 * *pfVar29 * pfVar23[1];
                  *(float *)((longlong)pfVar23 + (lVar5 - lVar53) + 4) =
                       param_12 * *pfVar29 * *pfVar23 + pfVar23[1] * pfVar14[1];
                  pfVar23 = pfVar23 + 2;
                  uVar33 = uVar33 - 1;
                  pfVar14 = pfVar29;
                } while (uVar33 != 0);
              }
              iVar24 = iVar24 + 1;
            } while (iVar24 <= param_4);
          }
          param_5 = param_5 + param_4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      else {
        iVar24 = param_5 + 2;
        iVar28 = iVar24 * iVar6;
        lVar27 = (longlong)iVar6;
        do {
          lVar17 = lVar17 + 2;
          iVar36 = 4;
          if (3 < (int)uVar33) {
            iVar45 = iVar28 + 4;
            lVar12 = lVar17 * 4;
            lVar26 = lVar17;
            do {
              lVar17 = lVar26 + 2;
              iVar47 = 1;
              if (3 < param_4) {
                iVar47 = ((param_4 * 2 + 4) - iVar24) * iVar6 + iVar28;
                pfVar16 = (float *)(lVar53 + ((longlong)iVar45 + -1) * 4);
                lVar43 = (longlong)(iVar28 + iVar36);
                lVar27 = (iVar47 + -iVar6 + iVar36) - lVar43;
                lVar39 = (iVar47 + iVar36) - lVar43;
                lVar32 = (lVar27 * 4 - lVar53) + lVar5;
                lVar43 = (iVar28 + -iVar6 + iVar36) - lVar43;
                lVar20 = (lVar39 * 4 - lVar53) + lVar5;
                lVar48 = (lVar43 * 4 - lVar53) + lVar5;
                uVar34 = (ulonglong)((uint)param_4 >> 2);
                iVar47 = ((uint)param_4 >> 2) * 4 + 1;
                do {
                  *(float *)(lVar48 + (longlong)pfVar16) =
                       pfVar16[lVar43] * *(float *)((longlong)param_11 + lVar12) -
                       param_12 * param_11[lVar26 + 1] * pfVar16[lVar43 + 1];
                  *(float *)(lVar48 + 4 + (longlong)pfVar16) =
                       param_12 * param_11[lVar26 + 1] * pfVar16[lVar43] +
                       *(float *)((longlong)param_11 + lVar12) * pfVar16[lVar43 + 1];
                  *(float *)((lVar5 - lVar53) + (longlong)pfVar16) =
                       *(float *)((longlong)param_11 + lVar12) * *pfVar16 -
                       param_12 * param_11[lVar26 + 1] * pfVar16[1];
                  *(float *)((lVar5 - lVar53) + 4 + (longlong)pfVar16) =
                       param_12 * param_11[lVar26 + 1] * *pfVar16 +
                       pfVar16[1] * *(float *)((longlong)param_11 + lVar12);
                  *(float *)(lVar32 + (longlong)pfVar16) =
                       pfVar16[lVar27] * *(float *)((longlong)param_11 + lVar12) -
                       param_12 * param_11[lVar26 + 1] * pfVar16[lVar27 + 1];
                  *(float *)(lVar32 + 4 + (longlong)pfVar16) =
                       param_12 * param_11[lVar26 + 1] * pfVar16[lVar27] +
                       *(float *)((longlong)param_11 + lVar12) * pfVar16[lVar27 + 1];
                  *(float *)(lVar20 + (longlong)pfVar16) =
                       pfVar16[lVar39] * *(float *)((longlong)param_11 + lVar12) -
                       param_12 * param_11[lVar26 + 1] * pfVar16[lVar39 + 1];
                  *(float *)(lVar20 + 4 + (longlong)pfVar16) =
                       param_12 * param_11[lVar26 + 1] * pfVar16[lVar39] +
                       pfVar16[lVar39 + 1] * *(float *)((longlong)param_11 + lVar12);
                  pfVar16 = pfVar16 + (int)uVar33 * 4;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
                uVar33 = (ulonglong)(uint)param_2;
                lVar27 = (longlong)iVar6;
              }
              iVar52 = (int)uVar33;
              if (iVar47 <= param_4) {
                uVar34 = (ulonglong)((param_4 - iVar47) + 1);
                pfVar16 = (float *)(lVar53 + ((longlong)((param_5 + iVar47) * iVar52 + iVar36) + -1)
                                             * 4);
                do {
                  *(float *)((longlong)pfVar16 + (lVar5 - lVar53)) =
                       *pfVar16 * param_11[lVar26] - param_12 * param_11[lVar26 + 1] * pfVar16[1];
                  *(float *)((longlong)pfVar16 + (lVar5 - lVar53) + 4) =
                       param_12 * param_11[lVar26 + 1] * *pfVar16 + param_11[lVar26] * pfVar16[1];
                  pfVar16 = pfVar16 + lVar27;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
              }
              iVar45 = iVar45 + 2;
              iVar36 = iVar36 + 2;
              lVar27 = (longlong)iVar52;
              lVar12 = lVar12 + 8;
              lVar26 = lVar17;
            } while (iVar36 <= iVar52);
            lVar27 = (longlong)iVar52;
          }
          param_5 = param_5 + param_4;
          iVar28 = iVar28 + iVar6 * param_4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
  }
  return;
}

// pffft_cplx_finalize @ 14f055120

void __cdecl pffft_cplx_finalize(int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  int iVar1;
  __m128 *p_Var2;
  longlong lVar3;
  __m128 *p_Var4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  iVar1 = (int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2;
  lVar3 = (longlong)iVar1;
  if (0 < iVar1) {
    p_Var2 = param_2 + 2;
    p_Var4 = param_4 + 3;
    do {
      fVar25 = *(float *)((longlong)p_Var2 + -0x1c) * p_Var4[-3].m128_f32[0] -
               *(float *)((longlong)p_Var2 + -0xc) * p_Var4[-2].m128_f32[0];
      fVar26 = p_Var2->m128_f32[1] * *(float *)((longlong)p_Var4 + -0x2c) -
               *(float *)((longlong)p_Var2 + 0x14) * *(float *)((longlong)p_Var4 + -0x1c);
      fVar27 = *(float *)((longlong)p_Var2 + 0x24) * *(float *)((longlong)p_Var4 + -0x28) -
               *(float *)((longlong)p_Var2 + 0x34) * *(float *)((longlong)p_Var4 + -0x18);
      fVar28 = *(float *)((longlong)p_Var2 + 0x44) * *(float *)((longlong)p_Var4 + -0x24) -
               *(float *)((longlong)p_Var2 + 0x54) * *(float *)((longlong)p_Var4 + -0x14);
      fVar33 = *(float *)((longlong)p_Var2 + -0xc) * p_Var4[-3].m128_f32[0] +
               *(float *)((longlong)p_Var2 + -0x1c) * p_Var4[-2].m128_f32[0];
      fVar34 = *(float *)((longlong)p_Var2 + 0x14) * *(float *)((longlong)p_Var4 + -0x2c) +
               p_Var2->m128_f32[1] * *(float *)((longlong)p_Var4 + -0x1c);
      fVar35 = *(float *)((longlong)p_Var2 + 0x34) * *(float *)((longlong)p_Var4 + -0x28) +
               *(float *)((longlong)p_Var2 + 0x24) * *(float *)((longlong)p_Var4 + -0x18);
      fVar36 = *(float *)((longlong)p_Var2 + 0x54) * *(float *)((longlong)p_Var4 + -0x24) +
               *(float *)((longlong)p_Var2 + 0x44) * *(float *)((longlong)p_Var4 + -0x14);
      fVar13 = *(float *)((longlong)p_Var2 + -0x18) * p_Var4[-1].m128_f32[0] -
               *(float *)((longlong)p_Var2 + -8) * p_Var4->m128_f32[0];
      fVar14 = p_Var2->m128_f32[2] * *(float *)((longlong)p_Var4 + -0xc) -
               *(float *)((longlong)p_Var2 + 0x18) * p_Var4->m128_f32[1];
      fVar15 = *(float *)((longlong)p_Var2 + 0x28) * *(float *)((longlong)p_Var4 + -8) -
               *(float *)((longlong)p_Var2 + 0x38) * p_Var4->m128_f32[2];
      fVar16 = *(float *)((longlong)p_Var2 + 0x48) * *(float *)((longlong)p_Var4 + -4) -
               *(float *)((longlong)p_Var2 + 0x58) * p_Var4->m128_f32[3];
      fVar17 = p_Var2[-2].m128_f32[0] + fVar13;
      fVar18 = p_Var2->m128_f32[0] + fVar14;
      fVar19 = p_Var2[2].m128_f32[0] + fVar15;
      fVar20 = p_Var2[4].m128_f32[0] + fVar16;
      fVar29 = *(float *)((longlong)p_Var2 + -4) * p_Var4[1].m128_f32[0] +
               *(float *)((longlong)p_Var2 + -0x14) * p_Var4[2].m128_f32[0];
      fVar30 = *(float *)((longlong)p_Var2 + 0x1c) * *(float *)((longlong)p_Var4 + 0x14) +
               p_Var2->m128_f32[3] * *(float *)((longlong)p_Var4 + 0x24);
      fVar31 = *(float *)((longlong)p_Var2 + 0x3c) * *(float *)((longlong)p_Var4 + 0x18) +
               *(float *)((longlong)p_Var2 + 0x2c) * *(float *)((longlong)p_Var4 + 0x28);
      fVar32 = *(float *)((longlong)p_Var2 + 0x5c) * *(float *)((longlong)p_Var4 + 0x1c) +
               *(float *)((longlong)p_Var2 + 0x4c) * *(float *)((longlong)p_Var4 + 0x2c);
      fVar21 = *(float *)((longlong)p_Var2 + -8) * p_Var4[-1].m128_f32[0] +
               *(float *)((longlong)p_Var2 + -0x18) * p_Var4->m128_f32[0];
      fVar22 = *(float *)((longlong)p_Var2 + 0x18) * *(float *)((longlong)p_Var4 + -0xc) +
               p_Var2->m128_f32[2] * p_Var4->m128_f32[1];
      fVar23 = *(float *)((longlong)p_Var2 + 0x38) * *(float *)((longlong)p_Var4 + -8) +
               *(float *)((longlong)p_Var2 + 0x28) * p_Var4->m128_f32[2];
      fVar24 = *(float *)((longlong)p_Var2 + 0x58) * *(float *)((longlong)p_Var4 + -4) +
               *(float *)((longlong)p_Var2 + 0x48) * p_Var4->m128_f32[3];
      fVar9 = *(float *)((longlong)p_Var2 + -0x14) * p_Var4[1].m128_f32[0] -
              *(float *)((longlong)p_Var2 + -4) * p_Var4[2].m128_f32[0];
      fVar10 = p_Var2->m128_f32[3] * *(float *)((longlong)p_Var4 + 0x14) -
               *(float *)((longlong)p_Var2 + 0x1c) * *(float *)((longlong)p_Var4 + 0x24);
      fVar11 = *(float *)((longlong)p_Var2 + 0x2c) * *(float *)((longlong)p_Var4 + 0x18) -
               *(float *)((longlong)p_Var2 + 0x3c) * *(float *)((longlong)p_Var4 + 0x28);
      fVar12 = *(float *)((longlong)p_Var2 + 0x4c) * *(float *)((longlong)p_Var4 + 0x1c) -
               *(float *)((longlong)p_Var2 + 0x5c) * *(float *)((longlong)p_Var4 + 0x2c);
      fVar13 = p_Var2[-2].m128_f32[0] - fVar13;
      fVar14 = p_Var2->m128_f32[0] - fVar14;
      fVar15 = p_Var2[2].m128_f32[0] - fVar15;
      fVar16 = p_Var2[4].m128_f32[0] - fVar16;
      fVar5 = fVar29 + fVar33;
      fVar6 = fVar30 + fVar34;
      fVar7 = fVar31 + fVar35;
      fVar8 = fVar32 + fVar36;
      fVar33 = fVar33 - fVar29;
      fVar34 = fVar34 - fVar30;
      fVar35 = fVar35 - fVar31;
      fVar36 = fVar36 - fVar32;
      fVar29 = fVar9 + fVar25;
      fVar30 = fVar10 + fVar26;
      fVar31 = fVar11 + fVar27;
      fVar32 = fVar12 + fVar28;
      fVar25 = fVar25 - fVar9;
      fVar26 = fVar26 - fVar10;
      fVar27 = fVar27 - fVar11;
      fVar28 = fVar28 - fVar12;
      fVar9 = p_Var2[-1].m128_f32[0] + fVar21;
      fVar10 = p_Var2[1].m128_f32[0] + fVar22;
      fVar11 = p_Var2[3].m128_f32[0] + fVar23;
      fVar12 = p_Var2[5].m128_f32[0] + fVar24;
      fVar21 = p_Var2[-1].m128_f32[0] - fVar21;
      fVar22 = p_Var2[1].m128_f32[0] - fVar22;
      fVar23 = p_Var2[3].m128_f32[0] - fVar23;
      fVar24 = p_Var2[5].m128_f32[0] - fVar24;
      param_3->m128_f32[0] = fVar29 + fVar17;
      param_3->m128_f32[1] = fVar30 + fVar18;
      param_3->m128_f32[2] = fVar31 + fVar19;
      param_3->m128_f32[3] = fVar32 + fVar20;
      param_3[4].m128_f32[0] = fVar17 - fVar29;
      *(float *)((longlong)param_3 + 0x44) = fVar18 - fVar30;
      *(float *)((longlong)param_3 + 0x48) = fVar19 - fVar31;
      *(float *)((longlong)param_3 + 0x4c) = fVar20 - fVar32;
      param_3[1].m128_f32[0] = fVar5 + fVar9;
      *(float *)((longlong)param_3 + 0x14) = fVar6 + fVar10;
      *(float *)((longlong)param_3 + 0x18) = fVar7 + fVar11;
      *(float *)((longlong)param_3 + 0x1c) = fVar8 + fVar12;
      param_3[5].m128_f32[0] = fVar9 - fVar5;
      *(float *)((longlong)param_3 + 0x54) = fVar10 - fVar6;
      *(float *)((longlong)param_3 + 0x58) = fVar11 - fVar7;
      *(float *)((longlong)param_3 + 0x5c) = fVar12 - fVar8;
      param_3[2].m128_f32[0] = fVar33 + fVar13;
      *(float *)((longlong)param_3 + 0x24) = fVar34 + fVar14;
      *(float *)((longlong)param_3 + 0x28) = fVar35 + fVar15;
      *(float *)((longlong)param_3 + 0x2c) = fVar36 + fVar16;
      param_3[3].m128_f32[0] = fVar21 - fVar25;
      *(float *)((longlong)param_3 + 0x34) = fVar22 - fVar26;
      *(float *)((longlong)param_3 + 0x38) = fVar23 - fVar27;
      *(float *)((longlong)param_3 + 0x3c) = fVar24 - fVar28;
      param_3[6].m128_f32[0] = fVar13 - fVar33;
      *(float *)((longlong)param_3 + 100) = fVar14 - fVar34;
      *(float *)((longlong)param_3 + 0x68) = fVar15 - fVar35;
      *(float *)((longlong)param_3 + 0x6c) = fVar16 - fVar36;
      p_Var2 = p_Var2 + 8;
      p_Var4 = p_Var4 + 6;
      param_3[7].m128_f32[0] = fVar21 + fVar25;
      *(float *)((longlong)param_3 + 0x74) = fVar22 + fVar26;
      *(float *)((longlong)param_3 + 0x78) = fVar23 + fVar27;
      *(float *)((longlong)param_3 + 0x7c) = fVar24 + fVar28;
      param_3 = param_3 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// pffft_cplx_preprocess @ 14f055340

void __cdecl pffft_cplx_preprocess(int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  __m128 *p_Var42;
  longlong lVar43;
  __m128 *p_Var44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  
  iVar41 = (int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2;
  lVar43 = (longlong)iVar41;
  if (0 < iVar41) {
    p_Var42 = param_2 + 2;
    p_Var44 = param_4 + 3;
    do {
      fVar57 = p_Var42[-2].m128_f32[0] - p_Var42[2].m128_f32[0];
      fVar58 = *(float *)((longlong)p_Var42 + -0x1c) - *(float *)((longlong)p_Var42 + 0x24);
      fVar59 = *(float *)((longlong)p_Var42 + -0x18) - *(float *)((longlong)p_Var42 + 0x28);
      fVar60 = *(float *)((longlong)p_Var42 + -0x14) - *(float *)((longlong)p_Var42 + 0x2c);
      fVar65 = p_Var42[-2].m128_f32[0] + p_Var42[2].m128_f32[0];
      fVar67 = *(float *)((longlong)p_Var42 + -0x1c) + *(float *)((longlong)p_Var42 + 0x24);
      fVar69 = *(float *)((longlong)p_Var42 + -0x18) + *(float *)((longlong)p_Var42 + 0x28);
      fVar71 = *(float *)((longlong)p_Var42 + -0x14) + *(float *)((longlong)p_Var42 + 0x2c);
      fVar85 = p_Var42[3].m128_f32[0] + p_Var42[-1].m128_f32[0];
      fVar87 = *(float *)((longlong)p_Var42 + 0x34) + *(float *)((longlong)p_Var42 + -0xc);
      fVar89 = *(float *)((longlong)p_Var42 + 0x38) + *(float *)((longlong)p_Var42 + -8);
      fVar91 = *(float *)((longlong)p_Var42 + 0x3c) + *(float *)((longlong)p_Var42 + -4);
      fVar81 = p_Var42[-1].m128_f32[0] - p_Var42[3].m128_f32[0];
      fVar82 = *(float *)((longlong)p_Var42 + -0xc) - *(float *)((longlong)p_Var42 + 0x34);
      fVar83 = *(float *)((longlong)p_Var42 + -8) - *(float *)((longlong)p_Var42 + 0x38);
      fVar84 = *(float *)((longlong)p_Var42 + -4) - *(float *)((longlong)p_Var42 + 0x3c);
      fVar53 = p_Var42[4].m128_f32[0] + p_Var42->m128_f32[0];
      fVar54 = *(float *)((longlong)p_Var42 + 0x44) + p_Var42->m128_f32[1];
      fVar55 = *(float *)((longlong)p_Var42 + 0x48) + p_Var42->m128_f32[2];
      fVar56 = *(float *)((longlong)p_Var42 + 0x4c) + p_Var42->m128_f32[3];
      fVar61 = p_Var42->m128_f32[0] - p_Var42[4].m128_f32[0];
      fVar62 = p_Var42->m128_f32[1] - *(float *)((longlong)p_Var42 + 0x44);
      fVar63 = p_Var42->m128_f32[2] - *(float *)((longlong)p_Var42 + 0x48);
      fVar64 = p_Var42->m128_f32[3] - *(float *)((longlong)p_Var42 + 0x4c);
      fVar45 = p_Var42[5].m128_f32[0] + p_Var42[1].m128_f32[0];
      fVar46 = *(float *)((longlong)p_Var42 + 0x54) + *(float *)((longlong)p_Var42 + 0x14);
      fVar47 = *(float *)((longlong)p_Var42 + 0x58) + *(float *)((longlong)p_Var42 + 0x18);
      fVar48 = *(float *)((longlong)p_Var42 + 0x5c) + *(float *)((longlong)p_Var42 + 0x1c);
      fVar77 = p_Var42[1].m128_f32[0] - p_Var42[5].m128_f32[0];
      fVar78 = *(float *)((longlong)p_Var42 + 0x14) - *(float *)((longlong)p_Var42 + 0x54);
      fVar79 = *(float *)((longlong)p_Var42 + 0x18) - *(float *)((longlong)p_Var42 + 0x58);
      fVar80 = *(float *)((longlong)p_Var42 + 0x1c) - *(float *)((longlong)p_Var42 + 0x5c);
      fVar73 = fVar81 + fVar61;
      fVar74 = fVar82 + fVar62;
      fVar75 = fVar83 + fVar63;
      fVar76 = fVar84 + fVar64;
      fVar81 = fVar81 - fVar61;
      fVar82 = fVar82 - fVar62;
      fVar83 = fVar83 - fVar63;
      fVar84 = fVar84 - fVar64;
      fVar49 = fVar57 - fVar77;
      fVar50 = fVar58 - fVar78;
      fVar51 = fVar59 - fVar79;
      fVar52 = fVar60 - fVar80;
      fVar86 = fVar85 - fVar45;
      fVar88 = fVar87 - fVar46;
      fVar90 = fVar89 - fVar47;
      fVar92 = fVar91 - fVar48;
      fVar77 = fVar77 + fVar57;
      fVar78 = fVar78 + fVar58;
      fVar79 = fVar79 + fVar59;
      fVar80 = fVar80 + fVar60;
      fVar57 = p_Var44[-2].m128_f32[0];
      fVar58 = *(float *)((longlong)p_Var44 + -0x1c);
      fVar59 = *(float *)((longlong)p_Var44 + -0x18);
      fVar60 = *(float *)((longlong)p_Var44 + -0x14);
      fVar61 = p_Var44[-3].m128_f32[0];
      fVar62 = *(float *)((longlong)p_Var44 + -0x2c);
      fVar63 = *(float *)((longlong)p_Var44 + -0x28);
      fVar64 = *(float *)((longlong)p_Var44 + -0x24);
      fVar66 = fVar65 - fVar53;
      fVar68 = fVar67 - fVar54;
      fVar70 = fVar69 - fVar55;
      fVar72 = fVar71 - fVar56;
      fVar1 = p_Var44[-2].m128_f32[0];
      fVar2 = *(float *)((longlong)p_Var44 + -0x1c);
      fVar3 = *(float *)((longlong)p_Var44 + -0x18);
      fVar4 = *(float *)((longlong)p_Var44 + -0x14);
      fVar5 = p_Var44[-3].m128_f32[0];
      fVar6 = *(float *)((longlong)p_Var44 + -0x2c);
      fVar7 = *(float *)((longlong)p_Var44 + -0x28);
      fVar8 = *(float *)((longlong)p_Var44 + -0x24);
      fVar9 = p_Var44->m128_f32[0];
      fVar10 = p_Var44->m128_f32[1];
      fVar11 = p_Var44->m128_f32[2];
      fVar12 = p_Var44->m128_f32[3];
      fVar13 = p_Var44[-1].m128_f32[0];
      fVar14 = *(float *)((longlong)p_Var44 + -0xc);
      fVar15 = *(float *)((longlong)p_Var44 + -8);
      fVar16 = *(float *)((longlong)p_Var44 + -4);
      fVar17 = p_Var44[1].m128_f32[0];
      fVar18 = *(float *)((longlong)p_Var44 + 0x14);
      fVar19 = *(float *)((longlong)p_Var44 + 0x18);
      fVar20 = *(float *)((longlong)p_Var44 + 0x1c);
      fVar21 = p_Var44->m128_f32[0];
      fVar22 = p_Var44->m128_f32[1];
      fVar23 = p_Var44->m128_f32[2];
      fVar24 = p_Var44->m128_f32[3];
      fVar25 = p_Var44[-1].m128_f32[0];
      fVar26 = *(float *)((longlong)p_Var44 + -0xc);
      fVar27 = *(float *)((longlong)p_Var44 + -8);
      fVar28 = *(float *)((longlong)p_Var44 + -4);
      fVar29 = p_Var44[2].m128_f32[0];
      fVar30 = *(float *)((longlong)p_Var44 + 0x24);
      fVar31 = *(float *)((longlong)p_Var44 + 0x28);
      fVar32 = *(float *)((longlong)p_Var44 + 0x2c);
      fVar33 = p_Var44[2].m128_f32[0];
      fVar34 = *(float *)((longlong)p_Var44 + 0x24);
      fVar35 = *(float *)((longlong)p_Var44 + 0x28);
      fVar36 = *(float *)((longlong)p_Var44 + 0x2c);
      fVar37 = p_Var44[1].m128_f32[0];
      fVar38 = *(float *)((longlong)p_Var44 + 0x14);
      fVar39 = *(float *)((longlong)p_Var44 + 0x18);
      fVar40 = *(float *)((longlong)p_Var44 + 0x1c);
      param_3->m128_f32[0] = fVar53 + fVar65;
      param_3->m128_f32[1] = fVar49 * fVar5 + fVar73 * fVar57;
      param_3->m128_f32[2] = fVar66 * fVar13 + fVar86 * fVar21;
      param_3->m128_f32[3] = fVar77 * fVar17 + fVar81 * fVar33;
      param_3[1].m128_f32[0] = fVar45 + fVar85;
      *(float *)((longlong)param_3 + 0x14) = fVar73 * fVar61 - fVar49 * fVar1;
      *(float *)((longlong)param_3 + 0x18) = fVar86 * fVar25 - fVar66 * fVar9;
      *(float *)((longlong)param_3 + 0x1c) = fVar81 * fVar37 - fVar77 * fVar29;
      param_3[4].m128_f32[0] = fVar55 + fVar69;
      *(float *)((longlong)param_3 + 0x44) = fVar51 * fVar7 + fVar75 * fVar59;
      *(float *)((longlong)param_3 + 0x48) = fVar70 * fVar15 + fVar90 * fVar23;
      *(float *)((longlong)param_3 + 0x4c) = fVar79 * fVar19 + fVar83 * fVar35;
      param_3[5].m128_f32[0] = fVar47 + fVar89;
      *(float *)((longlong)param_3 + 0x54) = fVar75 * fVar63 - fVar51 * fVar3;
      *(float *)((longlong)param_3 + 0x58) = fVar90 * fVar27 - fVar70 * fVar11;
      *(float *)((longlong)param_3 + 0x5c) = fVar83 * fVar39 - fVar79 * fVar31;
      param_3[2].m128_f32[0] = fVar54 + fVar67;
      *(float *)((longlong)param_3 + 0x24) = fVar50 * fVar6 + fVar74 * fVar58;
      *(float *)((longlong)param_3 + 0x28) = fVar68 * fVar14 + fVar88 * fVar22;
      *(float *)((longlong)param_3 + 0x2c) = fVar78 * fVar18 + fVar82 * fVar34;
      param_3[3].m128_f32[0] = fVar46 + fVar87;
      *(float *)((longlong)param_3 + 0x34) = fVar74 * fVar62 - fVar50 * fVar2;
      *(float *)((longlong)param_3 + 0x38) = fVar88 * fVar26 - fVar68 * fVar10;
      *(float *)((longlong)param_3 + 0x3c) = fVar82 * fVar38 - fVar78 * fVar30;
      p_Var42 = p_Var42 + 8;
      param_3[7].m128_f32[0] = fVar48 + fVar91;
      *(float *)((longlong)param_3 + 0x74) = fVar76 * fVar64 - fVar52 * fVar4;
      *(float *)((longlong)param_3 + 0x78) = fVar92 * fVar28 - fVar72 * fVar12;
      *(float *)((longlong)param_3 + 0x7c) = fVar84 * fVar40 - fVar80 * fVar32;
      p_Var44 = p_Var44 + 6;
      param_3[6].m128_f32[0] = fVar56 + fVar71;
      *(float *)((longlong)param_3 + 100) = fVar52 * fVar8 + fVar76 * fVar60;
      *(float *)((longlong)param_3 + 0x68) = fVar72 * fVar16 + fVar92 * fVar24;
      *(float *)((longlong)param_3 + 0x6c) = fVar80 * fVar20 + fVar84 * fVar36;
      param_3 = param_3 + 8;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
  }
  return;
}

// pffft_real_finalize @ 14f055560

void __cdecl pffft_real_finalize(int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __m128 *p_Var7;
  __m128 *p_Var8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar3 = *(undefined8 *)(param_2 + 7);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x78);
  fVar11 = param_2->m128_f32[0];
  fVar21 = param_2->m128_f32[1];
  fVar26 = param_2->m128_f32[2];
  fVar2 = param_2->m128_f32[3];
  uVar5 = *(undefined8 *)(param_2 + (longlong)(param_1 * 2) + -1);
  uVar6 = *(undefined8 *)(param_2[(longlong)(param_1 * 2) + -1].m128_f32 + 2);
  fVar42 = param_4->m128_f32[0] * 0.0 + param_4[1].m128_f32[0] * 0.0;
  fVar43 = param_4->m128_f32[1] * *(float *)((longlong)param_2 + 0x24) +
           *(float *)((longlong)param_4 + 0x14) * *(float *)((longlong)param_2 + 0x14);
  fVar44 = param_4->m128_f32[2] * *(float *)((longlong)param_2 + 0x44) +
           *(float *)((longlong)param_4 + 0x18) * *(float *)((longlong)param_2 + 0x34);
  fVar45 = param_4->m128_f32[3] * *(float *)((longlong)param_2 + 100) +
           *(float *)((longlong)param_4 + 0x1c) * *(float *)((longlong)param_2 + 0x54);
  fVar34 = param_4->m128_f32[0] * 0.0 - param_4[1].m128_f32[0] * 0.0;
  fVar35 = param_4->m128_f32[1] * *(float *)((longlong)param_2 + 0x14) -
           *(float *)((longlong)param_4 + 0x14) * *(float *)((longlong)param_2 + 0x24);
  fVar36 = param_4->m128_f32[2] * *(float *)((longlong)param_2 + 0x34) -
           *(float *)((longlong)param_4 + 0x18) * *(float *)((longlong)param_2 + 0x44);
  fVar37 = param_4->m128_f32[3] * *(float *)((longlong)param_2 + 0x54) -
           *(float *)((longlong)param_4 + 0x1c) * *(float *)((longlong)param_2 + 100);
  fVar12 = param_4[2].m128_f32[0] * 0.0 - param_4[3].m128_f32[0] * 0.0;
  fVar14 = *(float *)((longlong)param_4 + 0x24) * *(float *)((longlong)param_2 + 0x18) -
           *(float *)((longlong)param_4 + 0x34) * *(float *)((longlong)param_2 + 0x28);
  fVar16 = *(float *)((longlong)param_4 + 0x28) * *(float *)((longlong)param_2 + 0x38) -
           *(float *)((longlong)param_4 + 0x38) * *(float *)((longlong)param_2 + 0x48);
  fVar18 = *(float *)((longlong)param_4 + 0x2c) * *(float *)((longlong)param_2 + 0x58) -
           *(float *)((longlong)param_4 + 0x3c) * *(float *)((longlong)param_2 + 0x68);
  fVar25 = param_4[2].m128_f32[0] * 0.0 + param_4[3].m128_f32[0] * 0.0;
  fVar27 = *(float *)((longlong)param_4 + 0x24) * *(float *)((longlong)param_2 + 0x28) +
           *(float *)((longlong)param_4 + 0x34) * *(float *)((longlong)param_2 + 0x18);
  fVar28 = *(float *)((longlong)param_4 + 0x28) * *(float *)((longlong)param_2 + 0x48) +
           *(float *)((longlong)param_4 + 0x38) * *(float *)((longlong)param_2 + 0x38);
  fVar29 = *(float *)((longlong)param_4 + 0x2c) * *(float *)((longlong)param_2 + 0x68) +
           *(float *)((longlong)param_4 + 0x3c) * *(float *)((longlong)param_2 + 0x58);
  fVar30 = fVar12 + 0.0;
  fVar31 = param_2[1].m128_f32[0] + fVar14;
  fVar32 = param_2[3].m128_f32[0] + fVar16;
  fVar33 = param_2[5].m128_f32[0] + fVar18;
  fVar12 = 0.0 - fVar12;
  fVar14 = param_2[1].m128_f32[0] - fVar14;
  fVar16 = param_2[3].m128_f32[0] - fVar16;
  fVar18 = param_2[5].m128_f32[0] - fVar18;
  fVar38 = param_4[4].m128_f32[0] * 0.0 - param_4[5].m128_f32[0] * 0.0;
  fVar39 = *(float *)((longlong)param_2 + 0x1c) * *(float *)((longlong)param_4 + 0x44) -
           *(float *)((longlong)param_4 + 0x54) * *(float *)((longlong)param_2 + 0x2c);
  fVar40 = *(float *)((longlong)param_2 + 0x3c) * *(float *)((longlong)param_4 + 0x48) -
           *(float *)((longlong)param_4 + 0x58) * *(float *)((longlong)param_2 + 0x4c);
  fVar41 = *(float *)((longlong)param_2 + 0x5c) * *(float *)((longlong)param_4 + 0x4c) -
           *(float *)((longlong)param_4 + 0x5c) * *(float *)((longlong)param_2 + 0x6c);
  fVar46 = param_4[4].m128_f32[0] * 0.0 + param_4[5].m128_f32[0] * 0.0;
  fVar47 = *(float *)((longlong)param_2 + 0x2c) * *(float *)((longlong)param_4 + 0x44) +
           *(float *)((longlong)param_4 + 0x54) * *(float *)((longlong)param_2 + 0x1c);
  fVar48 = *(float *)((longlong)param_2 + 0x4c) * *(float *)((longlong)param_4 + 0x48) +
           *(float *)((longlong)param_4 + 0x58) * *(float *)((longlong)param_2 + 0x3c);
  fVar49 = *(float *)((longlong)param_2 + 0x6c) * *(float *)((longlong)param_4 + 0x4c) +
           *(float *)((longlong)param_4 + 0x5c) * *(float *)((longlong)param_2 + 0x5c);
  fVar20 = fVar38 + fVar34;
  fVar22 = fVar39 + fVar35;
  fVar23 = fVar40 + fVar36;
  fVar24 = fVar41 + fVar37;
  fVar38 = fVar38 - fVar34;
  fVar39 = fVar39 - fVar35;
  fVar40 = fVar40 - fVar36;
  fVar41 = fVar41 - fVar37;
  fVar13 = fVar25 + 0.0;
  fVar15 = param_2[2].m128_f32[0] + fVar27;
  fVar17 = param_2[4].m128_f32[0] + fVar28;
  fVar19 = param_2[6].m128_f32[0] + fVar29;
  fVar34 = fVar46 + fVar42;
  fVar35 = fVar47 + fVar43;
  fVar36 = fVar48 + fVar44;
  fVar37 = fVar49 + fVar45;
  fVar25 = 0.0 - fVar25;
  fVar27 = param_2[2].m128_f32[0] - fVar27;
  fVar28 = param_2[4].m128_f32[0] - fVar28;
  fVar29 = param_2[6].m128_f32[0] - fVar29;
  param_3->m128_f32[0] = fVar20 + fVar30;
  param_3->m128_f32[1] = fVar22 + fVar31;
  param_3->m128_f32[2] = fVar23 + fVar32;
  param_3->m128_f32[3] = fVar24 + fVar33;
  fVar46 = fVar46 - fVar42;
  fVar47 = fVar47 - fVar43;
  fVar48 = fVar48 - fVar44;
  fVar49 = fVar49 - fVar45;
  param_3[6].m128_f32[0] = fVar30 - fVar20;
  *(float *)((longlong)param_3 + 100) = fVar31 - fVar22;
  *(float *)((longlong)param_3 + 0x68) = fVar32 - fVar23;
  *(float *)((longlong)param_3 + 0x6c) = fVar33 - fVar24;
  local_c8 = (float)uVar5;
  fStack_c4 = (float)((ulonglong)uVar5 >> 0x20);
  fStack_c0 = (float)uVar6;
  fStack_bc = (float)((ulonglong)uVar6 >> 0x20);
  fVar20 = fVar11 + fVar26;
  lVar9 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2);
  param_3[7].m128_f32[0] = fVar34 - fVar13;
  *(float *)((longlong)param_3 + 0x74) = fVar35 - fVar15;
  *(float *)((longlong)param_3 + 0x78) = fVar36 - fVar17;
  *(float *)((longlong)param_3 + 0x7c) = fVar37 - fVar19;
  param_3[1].m128_f32[0] = fVar34 + fVar13;
  *(float *)((longlong)param_3 + 0x14) = fVar35 + fVar15;
  *(float *)((longlong)param_3 + 0x18) = fVar36 + fVar17;
  *(float *)((longlong)param_3 + 0x1c) = fVar37 + fVar19;
  fVar34 = fVar21 + fVar2;
  param_3[2].m128_f32[0] = fVar46 + fVar12;
  *(float *)((longlong)param_3 + 0x24) = fVar47 + fVar14;
  *(float *)((longlong)param_3 + 0x28) = fVar48 + fVar16;
  *(float *)((longlong)param_3 + 0x2c) = fVar49 + fVar18;
  param_3[3].m128_f32[0] = fVar38 - fVar25;
  *(float *)((longlong)param_3 + 0x34) = fVar39 - fVar27;
  *(float *)((longlong)param_3 + 0x38) = fVar40 - fVar28;
  *(float *)((longlong)param_3 + 0x3c) = fVar41 - fVar29;
  param_3[4].m128_f32[0] = fVar12 - fVar46;
  *(float *)((longlong)param_3 + 0x44) = fVar14 - fVar47;
  *(float *)((longlong)param_3 + 0x48) = fVar16 - fVar48;
  *(float *)((longlong)param_3 + 0x4c) = fVar18 - fVar49;
  param_3[5].m128_f32[0] = fVar25 + fVar38;
  *(float *)((longlong)param_3 + 0x54) = fVar27 + fVar39;
  *(float *)((longlong)param_3 + 0x58) = fVar28 + fVar40;
  *(float *)((longlong)param_3 + 0x5c) = fVar29 + fVar41;
  param_3[5].m128_f32[0] = fVar2 - fVar21;
  param_3[4].m128_f32[0] = fVar11 - fVar26;
  param_3->m128_f32[0] = fVar34 + fVar20;
  param_3[1].m128_f32[0] = fVar20 - fVar34;
  fVar21 = (fStack_c4 - fStack_bc) * __real_3f3504f3;
  fVar26 = (fStack_bc + fStack_c4) * __real_3f3504f3;
  param_3[2].m128_f32[0] = local_c8 + fVar21;
  fVar11 = (float)((uint)fStack_c0 ^ __xmm_80000000800000008000000080000000);
  param_3[6].m128_f32[0] = local_c8 - fVar21;
  param_3[7].m128_f32[0] = fStack_c0 - fVar26;
  param_3[3].m128_f32[0] = fVar11 - fVar26;
  if (1 < lVar9) {
    local_b8 = (float)uVar3;
    fStack_b4 = (float)((ulonglong)uVar3 >> 0x20);
    fStack_b0 = (float)uVar4;
    fStack_ac = (float)((ulonglong)uVar4 >> 0x20);
    p_Var8 = param_4 + 9;
    lVar10 = (longlong)param_3 - (longlong)param_2;
    p_Var7 = param_2 + 0xe;
    lVar9 = lVar9 + -1;
    do {
      fVar11 = p_Var7[1].m128_f32[0];
      fVar21 = *(float *)((longlong)p_Var7 + 0x14);
      fVar26 = *(float *)((longlong)p_Var7 + 0x18);
      fVar2 = *(float *)((longlong)p_Var7 + 0x1c);
      fVar33 = p_Var8[-3].m128_f32[0] * *(float *)((longlong)p_Var7 + -0x5c) +
               p_Var8[-2].m128_f32[0] * fStack_b4;
      fVar38 = *(float *)((longlong)p_Var8 + -0x2c) * *(float *)((longlong)p_Var7 + -0x3c) +
               *(float *)((longlong)p_Var8 + -0x1c) * *(float *)((longlong)p_Var7 + -0x4c);
      fVar39 = *(float *)((longlong)p_Var8 + -0x28) * *(float *)((longlong)p_Var7 + -0x1c) +
               *(float *)((longlong)p_Var8 + -0x18) * *(float *)((longlong)p_Var7 + -0x2c);
      fVar40 = *(float *)((longlong)p_Var8 + -0x24) * p_Var7->m128_f32[1] +
               *(float *)((longlong)p_Var8 + -0x14) * *(float *)((longlong)p_Var7 + -0xc);
      fVar45 = p_Var8[-3].m128_f32[0] * fStack_b4 -
               p_Var8[-2].m128_f32[0] * *(float *)((longlong)p_Var7 + -0x5c);
      fVar46 = *(float *)((longlong)p_Var8 + -0x2c) * *(float *)((longlong)p_Var7 + -0x4c) -
               *(float *)((longlong)p_Var8 + -0x1c) * *(float *)((longlong)p_Var7 + -0x3c);
      fVar47 = *(float *)((longlong)p_Var8 + -0x28) * *(float *)((longlong)p_Var7 + -0x2c) -
               *(float *)((longlong)p_Var8 + -0x18) * *(float *)((longlong)p_Var7 + -0x1c);
      fVar48 = *(float *)((longlong)p_Var8 + -0x24) * *(float *)((longlong)p_Var7 + -0xc) -
               *(float *)((longlong)p_Var8 + -0x14) * p_Var7->m128_f32[1];
      fVar34 = p_Var8[-1].m128_f32[0] * fStack_b0 -
               p_Var8->m128_f32[0] * *(float *)((longlong)p_Var7 + -0x58);
      fVar36 = *(float *)((longlong)p_Var8 + -0xc) * *(float *)((longlong)p_Var7 + -0x48) -
               p_Var8->m128_f32[1] * *(float *)((longlong)p_Var7 + -0x38);
      fVar12 = *(float *)((longlong)p_Var8 + -8) * *(float *)((longlong)p_Var7 + -0x28) -
               p_Var8->m128_f32[2] * *(float *)((longlong)p_Var7 + -0x18);
      fVar14 = *(float *)((longlong)p_Var8 + -4) * *(float *)((longlong)p_Var7 + -8) -
               p_Var8->m128_f32[3] * p_Var7->m128_f32[2];
      fVar29 = p_Var8->m128_f32[0] * fStack_b0 +
               p_Var8[-1].m128_f32[0] * *(float *)((longlong)p_Var7 + -0x58);
      fVar30 = p_Var8->m128_f32[1] * *(float *)((longlong)p_Var7 + -0x48) +
               *(float *)((longlong)p_Var8 + -0xc) * *(float *)((longlong)p_Var7 + -0x38);
      fVar31 = p_Var8->m128_f32[2] * *(float *)((longlong)p_Var7 + -0x28) +
               *(float *)((longlong)p_Var8 + -8) * *(float *)((longlong)p_Var7 + -0x18);
      fVar32 = p_Var8->m128_f32[3] * *(float *)((longlong)p_Var7 + -8) +
               *(float *)((longlong)p_Var8 + -4) * p_Var7->m128_f32[2];
      fVar24 = fVar34 + local_b8;
      fVar25 = fVar36 + p_Var7[-5].m128_f32[0];
      fVar27 = fVar12 + p_Var7[-3].m128_f32[0];
      fVar28 = fVar14 + p_Var7[-1].m128_f32[0];
      fVar35 = p_Var8[1].m128_f32[0] * *(float *)((longlong)p_Var7 + -0x54) +
               p_Var8[2].m128_f32[0] * fStack_ac;
      fVar37 = *(float *)((longlong)p_Var8 + 0x14) * *(float *)((longlong)p_Var7 + -0x34) +
               *(float *)((longlong)p_Var8 + 0x24) * *(float *)((longlong)p_Var7 + -0x44);
      fVar13 = *(float *)((longlong)p_Var8 + 0x18) * *(float *)((longlong)p_Var7 + -0x14) +
               *(float *)((longlong)p_Var8 + 0x28) * *(float *)((longlong)p_Var7 + -0x24);
      fVar15 = *(float *)((longlong)p_Var8 + 0x1c) * p_Var7->m128_f32[3] +
               *(float *)((longlong)p_Var8 + 0x2c) * *(float *)((longlong)p_Var7 + -4);
      local_b8 = local_b8 - fVar34;
      fVar36 = p_Var7[-5].m128_f32[0] - fVar36;
      fVar12 = p_Var7[-3].m128_f32[0] - fVar12;
      fVar14 = p_Var7[-1].m128_f32[0] - fVar14;
      fVar19 = p_Var8[1].m128_f32[0] * fStack_ac -
               p_Var8[2].m128_f32[0] * *(float *)((longlong)p_Var7 + -0x54);
      fVar20 = *(float *)((longlong)p_Var8 + 0x14) * *(float *)((longlong)p_Var7 + -0x44) -
               *(float *)((longlong)p_Var8 + 0x24) * *(float *)((longlong)p_Var7 + -0x34);
      fVar22 = *(float *)((longlong)p_Var8 + 0x18) * *(float *)((longlong)p_Var7 + -0x24) -
               *(float *)((longlong)p_Var8 + 0x28) * *(float *)((longlong)p_Var7 + -0x14);
      fVar23 = *(float *)((longlong)p_Var8 + 0x1c) * *(float *)((longlong)p_Var7 + -4) -
               *(float *)((longlong)p_Var8 + 0x2c) * p_Var7->m128_f32[3];
      fVar34 = fVar29 + p_Var7[-6].m128_f32[0];
      fVar16 = fVar30 + p_Var7[-4].m128_f32[0];
      fVar17 = fVar31 + p_Var7[-2].m128_f32[0];
      fVar18 = fVar32 + p_Var7->m128_f32[0];
      fVar29 = p_Var7[-6].m128_f32[0] - fVar29;
      fVar30 = p_Var7[-4].m128_f32[0] - fVar30;
      fVar31 = p_Var7[-2].m128_f32[0] - fVar31;
      fVar32 = p_Var7->m128_f32[0] - fVar32;
      fVar41 = fVar35 - fVar33;
      fVar42 = fVar37 - fVar38;
      fVar43 = fVar13 - fVar39;
      fVar44 = fVar15 - fVar40;
      fVar35 = fVar35 + fVar33;
      fVar37 = fVar37 + fVar38;
      fVar13 = fVar13 + fVar39;
      fVar15 = fVar15 + fVar40;
      fVar33 = fVar19 - fVar45;
      fVar38 = fVar20 - fVar46;
      fVar39 = fVar22 - fVar47;
      fVar40 = fVar23 - fVar48;
      fVar19 = fVar19 + fVar45;
      fVar20 = fVar20 + fVar46;
      fVar22 = fVar22 + fVar47;
      fVar23 = fVar23 + fVar48;
      pfVar1 = (float *)(p_Var7->m128_i8 + lVar10 + -0x60);
      *pfVar1 = fVar19 + fVar24;
      pfVar1[1] = fVar20 + fVar25;
      pfVar1[2] = fVar22 + fVar27;
      pfVar1[3] = fVar23 + fVar28;
      pfVar1 = (float *)(p_Var7->m128_i8 + lVar10 + -0x50);
      *pfVar1 = fVar35 + fVar34;
      pfVar1[1] = fVar37 + fVar16;
      pfVar1[2] = fVar13 + fVar17;
      pfVar1[3] = fVar15 + fVar18;
      pfVar1 = (float *)(p_Var7->m128_i8 + lVar10 + -0x40);
      *pfVar1 = fVar41 + local_b8;
      pfVar1[1] = fVar42 + fVar36;
      pfVar1[2] = fVar43 + fVar12;
      pfVar1[3] = fVar44 + fVar14;
      pfVar1 = (float *)(p_Var7->m128_i8 + lVar10 + -0x30);
      *pfVar1 = fVar33 - fVar29;
      pfVar1[1] = fVar38 - fVar30;
      pfVar1[2] = fVar39 - fVar31;
      pfVar1[3] = fVar40 - fVar32;
      p_Var8 = p_Var8 + 6;
      pfVar1 = (float *)(p_Var7->m128_i8 + lVar10 + -0x20);
      *pfVar1 = local_b8 - fVar41;
      pfVar1[1] = fVar36 - fVar42;
      pfVar1[2] = fVar12 - fVar43;
      pfVar1[3] = fVar14 - fVar44;
      pfVar1 = (float *)(p_Var7->m128_i8 + lVar10 + -0x10);
      *pfVar1 = fVar29 + fVar33;
      pfVar1[1] = fVar30 + fVar38;
      pfVar1[2] = fVar31 + fVar39;
      pfVar1[3] = fVar32 + fVar40;
      pfVar1 = (float *)(p_Var7->m128_i8 + lVar10);
      *pfVar1 = fVar24 - fVar19;
      pfVar1[1] = fVar25 - fVar20;
      pfVar1[2] = fVar27 - fVar22;
      pfVar1[3] = fVar28 - fVar23;
      pfVar1 = (float *)(p_Var7->m128_i8 + lVar10 + 0x10);
      *pfVar1 = fVar35 - fVar34;
      pfVar1[1] = fVar37 - fVar16;
      pfVar1[2] = fVar13 - fVar17;
      pfVar1[3] = fVar15 - fVar18;
      p_Var7 = p_Var7 + 8;
      lVar9 = lVar9 + -1;
      local_b8 = fVar11;
      fStack_b4 = fVar21;
      fStack_b0 = fVar26;
      fStack_ac = fVar2;
    } while (lVar9 != 0);
  }
  return;
}

// pffft_real_preprocess @ 14f0559f0

void __cdecl pffft_real_preprocess(int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  __m128 *p_Var18;
  __m128 *p_Var19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  
  fVar25 = param_2->m128_f32[0];
  fVar5 = param_2[6].m128_f32[0];
  fVar27 = param_2[1].m128_f32[0];
  fVar6 = param_2[2].m128_f32[0];
  fVar7 = param_2[3].m128_f32[0];
  fVar32 = param_4->m128_f32[1];
  fVar9 = param_4->m128_f32[2];
  fVar10 = param_4->m128_f32[3];
  fVar11 = *(float *)((longlong)param_4 + 0x24);
  fVar39 = *(float *)((longlong)param_4 + 0x28);
  fVar42 = *(float *)((longlong)param_4 + 0x2c);
  fVar78 = *(float *)((longlong)param_2 + 100) + param_2->m128_f32[1];
  fVar80 = *(float *)((longlong)param_2 + 0x68) + param_2->m128_f32[2];
  fVar82 = *(float *)((longlong)param_2 + 0x6c) + param_2->m128_f32[3];
  fVar41 = param_2->m128_f32[1] - *(float *)((longlong)param_2 + 100);
  fVar43 = param_2->m128_f32[2] - *(float *)((longlong)param_2 + 0x68);
  fVar44 = param_2->m128_f32[3] - *(float *)((longlong)param_2 + 0x6c);
  fVar98 = *(float *)((longlong)param_2 + 0x74) + *(float *)((longlong)param_2 + 0x14);
  fVar99 = *(float *)((longlong)param_2 + 0x78) + *(float *)((longlong)param_2 + 0x18);
  fVar100 = *(float *)((longlong)param_2 + 0x7c) + *(float *)((longlong)param_2 + 0x1c);
  fVar46 = *(float *)((longlong)param_2 + 0x14) - *(float *)((longlong)param_2 + 0x74);
  fVar48 = *(float *)((longlong)param_2 + 0x18) - *(float *)((longlong)param_2 + 0x78);
  fVar50 = *(float *)((longlong)param_2 + 0x1c) - *(float *)((longlong)param_2 + 0x7c);
  fVar75 = *(float *)((longlong)param_2 + 0x54) + *(float *)((longlong)param_2 + 0x34);
  fVar76 = *(float *)((longlong)param_2 + 0x58) + *(float *)((longlong)param_2 + 0x38);
  fVar77 = *(float *)((longlong)param_2 + 0x5c) + *(float *)((longlong)param_2 + 0x3c);
  fVar40 = param_2[4].m128_f32[0];
  fVar86 = *(float *)((longlong)param_2 + 0x34) - *(float *)((longlong)param_2 + 0x54);
  fVar90 = *(float *)((longlong)param_2 + 0x38) - *(float *)((longlong)param_2 + 0x58);
  fVar94 = *(float *)((longlong)param_2 + 0x3c) - *(float *)((longlong)param_2 + 0x5c);
  fVar26 = param_2[5].m128_f32[0];
  fVar8 = param_2[7].m128_f32[0];
  fVar33 = fVar41 - fVar75;
  fVar35 = fVar43 - fVar76;
  fVar37 = fVar44 - fVar77;
  fVar87 = fVar86 + fVar46;
  fVar91 = fVar90 + fVar48;
  fVar95 = fVar94 + fVar50;
  fVar75 = fVar75 + fVar41;
  fVar76 = fVar76 + fVar43;
  fVar77 = fVar77 + fVar44;
  fVar41 = *(float *)((longlong)param_4 + 0x44);
  fVar43 = *(float *)((longlong)param_4 + 0x48);
  fVar44 = *(float *)((longlong)param_4 + 0x4c);
  fVar22 = *(float *)((longlong)param_2 + 0x44) + *(float *)((longlong)param_2 + 0x24);
  fVar23 = *(float *)((longlong)param_2 + 0x48) + *(float *)((longlong)param_2 + 0x28);
  fVar24 = *(float *)((longlong)param_2 + 0x4c) + *(float *)((longlong)param_2 + 0x2c);
  fVar52 = *(float *)((longlong)param_2 + 0x24) - *(float *)((longlong)param_2 + 0x44);
  fVar53 = *(float *)((longlong)param_2 + 0x28) - *(float *)((longlong)param_2 + 0x48);
  fVar54 = *(float *)((longlong)param_2 + 0x2c) - *(float *)((longlong)param_2 + 0x4c);
  fVar79 = fVar78 - fVar22;
  fVar81 = fVar80 - fVar23;
  fVar83 = fVar82 - fVar24;
  fVar28 = fVar98 - fVar52;
  fVar29 = fVar99 - fVar53;
  fVar30 = fVar100 - fVar54;
  fVar98 = fVar98 + fVar52;
  fVar99 = fVar99 + fVar53;
  fVar100 = fVar100 + fVar54;
  fVar52 = *(float *)((longlong)param_4 + 0x14);
  fVar53 = *(float *)((longlong)param_4 + 0x18);
  fVar54 = *(float *)((longlong)param_4 + 0x1c);
  fVar12 = *(float *)((longlong)param_4 + 0x34);
  fVar13 = *(float *)((longlong)param_4 + 0x38);
  fVar14 = *(float *)((longlong)param_4 + 0x3c);
  fVar15 = *(float *)((longlong)param_4 + 0x54);
  fVar16 = *(float *)((longlong)param_4 + 0x58);
  fVar17 = *(float *)((longlong)param_4 + 0x5c);
  lVar20 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2);
  param_3[1].m128_f32[0] = fVar22 + fVar78;
  *(float *)((longlong)param_3 + 0x14) = fVar52 * fVar28 + fVar32 * fVar33;
  *(float *)((longlong)param_3 + 0x18) = fVar12 * fVar87 + fVar11 * fVar79;
  *(float *)((longlong)param_3 + 0x1c) = fVar15 * fVar98 + fVar41 * fVar75;
  param_3[3].m128_f32[0] = fVar23 + fVar80;
  *(float *)((longlong)param_3 + 0x34) = fVar53 * fVar29 + fVar9 * fVar35;
  *(float *)((longlong)param_3 + 0x38) = fVar13 * fVar91 + fVar39 * fVar81;
  *(float *)((longlong)param_3 + 0x3c) = fVar16 * fVar99 + fVar43 * fVar76;
  param_3[4].m128_f32[0] = fVar48 - fVar90;
  *(float *)((longlong)param_3 + 0x44) = fVar9 * fVar29 - fVar53 * fVar35;
  *(float *)((longlong)param_3 + 0x48) = fVar39 * fVar91 - fVar13 * fVar81;
  *(float *)((longlong)param_3 + 0x4c) = fVar43 * fVar99 - fVar16 * fVar76;
  param_3[2].m128_f32[0] = fVar46 - fVar86;
  *(float *)((longlong)param_3 + 0x24) = fVar32 * fVar28 - fVar52 * fVar33;
  *(float *)((longlong)param_3 + 0x28) = fVar11 * fVar87 - fVar12 * fVar79;
  *(float *)((longlong)param_3 + 0x2c) = fVar41 * fVar98 - fVar15 * fVar75;
  param_3[5].m128_f32[0] = fVar24 + fVar82;
  *(float *)((longlong)param_3 + 0x54) = fVar54 * fVar30 + fVar10 * fVar37;
  *(float *)((longlong)param_3 + 0x58) = fVar14 * fVar95 + fVar42 * fVar83;
  *(float *)((longlong)param_3 + 0x5c) = fVar17 * fVar100 + fVar44 * fVar77;
  param_3[6].m128_f32[0] = fVar50 - fVar94;
  *(float *)((longlong)param_3 + 100) = fVar10 * fVar30 - fVar54 * fVar37;
  *(float *)((longlong)param_3 + 0x68) = fVar42 * fVar95 - fVar14 * fVar83;
  *(float *)((longlong)param_3 + 0x6c) = fVar44 * fVar100 - fVar17 * fVar77;
  if (1 < lVar20) {
    lVar21 = (longlong)param_2 - (longlong)param_3;
    p_Var19 = param_4 + 9;
    lVar20 = lVar20 + -1;
    p_Var18 = param_3 + 0xd;
    do {
      pfVar1 = (float *)(p_Var18->m128_i8 + lVar21 + -0x40);
      pfVar2 = (float *)(p_Var18->m128_i8 + lVar21 + -0x50);
      pfVar3 = (float *)(p_Var18->m128_i8 + lVar21 + 0x20);
      fVar45 = *pfVar1 - *pfVar3;
      fVar47 = pfVar1[1] - pfVar3[1];
      fVar49 = pfVar1[2] - pfVar3[2];
      fVar51 = pfVar1[3] - pfVar3[3];
      pfVar3 = (float *)(p_Var18->m128_i8 + lVar21 + 0x20);
      fVar71 = *pfVar1 + *pfVar3;
      fVar72 = pfVar1[1] + pfVar3[1];
      fVar73 = pfVar1[2] + pfVar3[2];
      fVar74 = pfVar1[3] + pfVar3[3];
      pfVar1 = (float *)(p_Var18->m128_i8 + lVar21 + -0x30);
      pfVar3 = (float *)(p_Var18->m128_i8 + lVar21 + 0x10);
      fVar39 = *pfVar2 - *pfVar3;
      fVar42 = pfVar2[1] - pfVar3[1];
      fVar41 = pfVar2[2] - pfVar3[2];
      fVar43 = pfVar2[3] - pfVar3[3];
      pfVar3 = (float *)(p_Var18->m128_i8 + lVar21 + -0x20);
      pfVar4 = (float *)(p_Var18->m128_i8 + lVar21 + -0x10);
      fVar95 = *pfVar1 + *pfVar4;
      fVar98 = pfVar1[1] + pfVar4[1];
      fVar99 = pfVar1[2] + pfVar4[2];
      fVar100 = pfVar1[3] + pfVar4[3];
      pfVar4 = (float *)(p_Var18->m128_i8 + lVar21 + -0x10);
      fVar44 = *pfVar1 - *pfVar4;
      fVar52 = pfVar1[1] - pfVar4[1];
      fVar53 = pfVar1[2] - pfVar4[2];
      fVar54 = pfVar1[3] - pfVar4[3];
      pfVar1 = (float *)(p_Var18->m128_i8 + lVar21 + 0x10);
      fVar59 = *pfVar2 + *pfVar1;
      fVar61 = pfVar2[1] + pfVar1[1];
      fVar63 = pfVar2[2] + pfVar1[2];
      fVar65 = pfVar2[3] + pfVar1[3];
      fVar32 = p_Var19->m128_f32[0];
      fVar9 = p_Var19->m128_f32[1];
      fVar10 = p_Var19->m128_f32[2];
      fVar11 = p_Var19->m128_f32[3];
      pfVar1 = (float *)(p_Var18->m128_i8 + lVar21);
      fVar67 = *pfVar1 + *pfVar3;
      fVar68 = pfVar1[1] + pfVar3[1];
      fVar69 = pfVar1[2] + pfVar3[2];
      fVar70 = pfVar1[3] + pfVar3[3];
      pfVar1 = (float *)(p_Var18->m128_i8 + lVar21);
      fVar84 = *pfVar3 - *pfVar1;
      fVar88 = pfVar3[1] - pfVar1[1];
      fVar92 = pfVar3[2] - pfVar1[2];
      fVar96 = pfVar3[3] - pfVar1[3];
      fVar55 = fVar71 - fVar44;
      fVar56 = fVar72 - fVar52;
      fVar57 = fVar73 - fVar53;
      fVar58 = fVar74 - fVar54;
      fVar71 = fVar71 + fVar44;
      fVar72 = fVar72 + fVar52;
      fVar73 = fVar73 + fVar53;
      fVar74 = fVar74 + fVar54;
      fVar60 = fVar59 - fVar95;
      fVar62 = fVar61 - fVar98;
      fVar64 = fVar63 - fVar99;
      fVar66 = fVar65 - fVar100;
      fVar31 = fVar39 - fVar67;
      fVar34 = fVar42 - fVar68;
      fVar36 = fVar41 - fVar69;
      fVar38 = fVar43 - fVar70;
      fVar67 = fVar67 + fVar39;
      fVar68 = fVar68 + fVar42;
      fVar69 = fVar69 + fVar41;
      fVar70 = fVar70 + fVar43;
      fVar39 = p_Var19[-2].m128_f32[0];
      fVar42 = *(float *)((longlong)p_Var19 + -0x1c);
      fVar41 = *(float *)((longlong)p_Var19 + -0x18);
      fVar43 = *(float *)((longlong)p_Var19 + -0x14);
      fVar44 = p_Var19[-3].m128_f32[0];
      fVar52 = *(float *)((longlong)p_Var19 + -0x2c);
      fVar53 = *(float *)((longlong)p_Var19 + -0x28);
      fVar54 = *(float *)((longlong)p_Var19 + -0x24);
      fVar85 = fVar84 + fVar45;
      fVar89 = fVar88 + fVar47;
      fVar93 = fVar92 + fVar49;
      fVar97 = fVar96 + fVar51;
      fVar12 = p_Var19[-2].m128_f32[0];
      fVar13 = *(float *)((longlong)p_Var19 + -0x1c);
      fVar14 = *(float *)((longlong)p_Var19 + -0x18);
      fVar15 = *(float *)((longlong)p_Var19 + -0x14);
      fVar16 = p_Var19[-3].m128_f32[0];
      fVar17 = *(float *)((longlong)p_Var19 + -0x2c);
      fVar22 = *(float *)((longlong)p_Var19 + -0x28);
      fVar23 = *(float *)((longlong)p_Var19 + -0x24);
      fVar24 = p_Var19[-1].m128_f32[0];
      fVar28 = *(float *)((longlong)p_Var19 + -0xc);
      fVar29 = *(float *)((longlong)p_Var19 + -8);
      fVar30 = *(float *)((longlong)p_Var19 + -4);
      fVar33 = p_Var19[1].m128_f32[0];
      fVar35 = *(float *)((longlong)p_Var19 + 0x14);
      fVar37 = *(float *)((longlong)p_Var19 + 0x18);
      fVar46 = *(float *)((longlong)p_Var19 + 0x1c);
      fVar48 = p_Var19[2].m128_f32[0];
      fVar50 = *(float *)((longlong)p_Var19 + 0x24);
      fVar75 = *(float *)((longlong)p_Var19 + 0x28);
      fVar76 = *(float *)((longlong)p_Var19 + 0x2c);
      fVar77 = p_Var19[-1].m128_f32[0];
      fVar78 = *(float *)((longlong)p_Var19 + -0xc);
      fVar79 = *(float *)((longlong)p_Var19 + -8);
      fVar80 = *(float *)((longlong)p_Var19 + -4);
      fVar81 = p_Var19[2].m128_f32[0];
      fVar82 = *(float *)((longlong)p_Var19 + 0x24);
      fVar83 = *(float *)((longlong)p_Var19 + 0x28);
      fVar86 = *(float *)((longlong)p_Var19 + 0x2c);
      fVar87 = p_Var19[1].m128_f32[0];
      fVar90 = *(float *)((longlong)p_Var19 + 0x14);
      fVar91 = *(float *)((longlong)p_Var19 + 0x18);
      fVar94 = *(float *)((longlong)p_Var19 + 0x1c);
      p_Var18[-6].m128_f32[0] = fVar95 + fVar59;
      *(float *)((longlong)p_Var18 + -0x5c) = fVar31 * fVar16 + fVar55 * fVar39;
      *(float *)((longlong)p_Var18 + -0x58) = fVar60 * fVar24 + fVar32 * fVar85;
      *(float *)((longlong)p_Var18 + -0x54) = fVar67 * fVar33 + fVar71 * fVar81;
      p_Var18[-5].m128_f32[0] = fVar45 - fVar84;
      *(float *)((longlong)p_Var18 + -0x4c) = fVar55 * fVar44 - fVar31 * fVar12;
      *(float *)((longlong)p_Var18 + -0x48) = fVar85 * fVar77 - fVar32 * fVar60;
      *(float *)((longlong)p_Var18 + -0x44) = fVar71 * fVar87 - fVar67 * fVar48;
      p_Var18[-1].m128_f32[0] = fVar49 - fVar92;
      *(float *)((longlong)p_Var18 + -0xc) = fVar57 * fVar53 - fVar36 * fVar14;
      *(float *)((longlong)p_Var18 + -8) = fVar93 * fVar79 - fVar10 * fVar64;
      *(float *)((longlong)p_Var18 + -4) = fVar73 * fVar91 - fVar69 * fVar75;
      p_Var18[-4].m128_f32[0] = fVar98 + fVar61;
      *(float *)((longlong)p_Var18 + -0x3c) = fVar34 * fVar17 + fVar56 * fVar42;
      *(float *)((longlong)p_Var18 + -0x38) = fVar62 * fVar28 + fVar9 * fVar89;
      *(float *)((longlong)p_Var18 + -0x34) = fVar68 * fVar35 + fVar72 * fVar82;
      p_Var18[-3].m128_f32[0] = fVar47 - fVar88;
      *(float *)((longlong)p_Var18 + -0x2c) = fVar56 * fVar52 - fVar34 * fVar13;
      *(float *)((longlong)p_Var18 + -0x28) = fVar89 * fVar78 - fVar9 * fVar62;
      *(float *)((longlong)p_Var18 + -0x24) = fVar72 * fVar90 - fVar68 * fVar50;
      p_Var18[-2].m128_f32[0] = fVar99 + fVar63;
      *(float *)((longlong)p_Var18 + -0x1c) = fVar36 * fVar22 + fVar57 * fVar41;
      *(float *)((longlong)p_Var18 + -0x18) = fVar64 * fVar29 + fVar10 * fVar93;
      *(float *)((longlong)p_Var18 + -0x14) = fVar69 * fVar37 + fVar73 * fVar83;
      p_Var19 = p_Var19 + 6;
      p_Var18->m128_f32[0] = fVar100 + fVar65;
      p_Var18->m128_f32[1] = fVar38 * fVar23 + fVar58 * fVar43;
      p_Var18->m128_f32[2] = fVar66 * fVar30 + fVar11 * fVar97;
      p_Var18->m128_f32[3] = fVar70 * fVar46 + fVar74 * fVar86;
      p_Var18[1].m128_f32[0] = fVar51 - fVar96;
      *(float *)((longlong)p_Var18 + 0x14) = fVar58 * fVar54 - fVar38 * fVar15;
      *(float *)((longlong)p_Var18 + 0x18) = fVar97 * fVar80 - fVar11 * fVar66;
      *(float *)((longlong)p_Var18 + 0x1c) = fVar74 * fVar94 - fVar70 * fVar76;
      p_Var18 = p_Var18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  fVar40 = fVar40 + fVar40;
  fVar32 = fVar25 - fVar27;
  fVar25 = fVar25 + fVar27;
  fVar26 = fVar26 + fVar26;
  param_3->m128_f32[0] = fVar40 + fVar25;
  param_3->m128_f32[2] = fVar25 - fVar40;
  lVar20 = (longlong)(param_1 * 2);
  param_3->m128_f32[1] = fVar32 - fVar26;
  param_3->m128_f32[3] = fVar26 + fVar32;
  fVar26 = fVar8 - fVar7;
  fVar40 = (fVar6 - fVar5) * __real_bfb504f3;
  fVar27 = (fVar8 + fVar7) * __real_3fb504f3;
  fVar25 = (fVar6 - fVar5) * __real_3fb504f3;
  param_3[lVar20 + -1].m128_f32[0] = fVar5 + fVar5 + fVar6 + fVar6;
  *(float *)((longlong)param_3 + lVar20 * 0x10 + -8) = fVar26 + fVar26;
  *(float *)((longlong)param_3 + lVar20 * 0x10 + -4) = fVar40 - fVar27;
  *(float *)((longlong)param_3 + lVar20 * 0x10 + -0xc) = fVar25 - fVar27;
  return;
}

// pffft_transform_internal @ 14f055ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pffft_transform_internal
          (PFFFT_Setup *param_1,float *param_2,float *param_3,__m128 *param_4,
          pffft_direction_t param_5,int param_6)

{
  undefined8 *puVar1;
  int iVar2;
  __m128 *p_Var3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  ulonglong uVar17;
  __m128 *p_Var18;
  __m128 *p_Var19;
  float *pfVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 auStack_a0 [5];
  longlong alStack_78 [2];
  int local_68 [4];
  undefined1 local_58 [8];
  float *local_50;
  __m128 *local_48;
  int local_40;
  __m128 *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)local_58;
  uVar24 = param_1->ifac[1] & 1;
  iVar2 = param_1->Ncvec;
  lVar25 = (longlong)iVar2;
  iVar5 = iVar2 * 2;
  iVar16 = 1;
  if (param_4 == (__m128 *)0x0) {
    iVar16 = iVar5;
  }
  local_40 = iVar5;
  uVar17 = (longlong)iVar16 * 0x10 + 0xf;
  if (uVar17 <= (ulonglong)((longlong)iVar16 * 0x10)) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x14f055f39;
  lVar4 = -(uVar17 & 0xfffffffffffffff0);
  local_50 = param_3;
  local_38 = (__m128 *)(local_58 + lVar4);
  if (param_4 != (__m128 *)0x0) {
    local_38 = param_4;
  }
  lVar23 = 0;
  local_48 = local_38;
  uVar17 = (ulonglong)(uVar24 != param_6);
  if (param_5 == PFFFT_FORWARD) {
    lVar21 = lVar23;
    if (uVar24 == param_6) {
      lVar21 = 8;
    }
    if (param_1->transform == PFFFT_REAL) {
      p_Var19 = *(__m128 **)((longlong)&local_50 + lVar21);
      *(int **)((longlong)alStack_78 + lVar4 + 8) = param_1->ifac;
      lVar21 = lVar23;
      if (uVar24 != param_6) {
        lVar21 = 8;
      }
      *(float **)((longlong)alStack_78 + lVar4) = param_1->twiddle;
      p_Var18 = *(__m128 **)((longlong)&local_50 + lVar21);
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f055fba;
      p_Var18 = rfftf1_ps(iVar5,(__m128 *)param_2,p_Var19,p_Var18,
                          *(float **)((longlong)alStack_78 + lVar4),
                          *(int **)((longlong)alStack_78 + lVar4 + 8));
      p_Var19 = (__m128 *)param_1->e;
      uVar17 = (ulonglong)(p_Var18 != (__m128 *)param_3);
      if (p_Var18 == (__m128 *)param_3) {
        lVar23 = 8;
      }
      p_Var18 = *(__m128 **)((longlong)&local_50 + lVar23);
      p_Var3 = (__m128 *)(&local_50)[uVar17];
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f055fde;
      pffft_real_finalize(iVar2,p_Var3,p_Var18,p_Var19);
    }
    else {
      p_Var19 = *(__m128 **)((longlong)&local_50 + lVar21);
      if (0 < iVar2) {
        p_Var18 = p_Var19 + 1;
        lVar21 = lVar25;
        pfVar20 = param_2;
        do {
          fVar6 = *pfVar20;
          pfVar22 = pfVar20 + 1;
          fVar7 = pfVar20[2];
          fVar8 = pfVar20[3];
          fVar9 = pfVar20[4];
          fVar10 = pfVar20[5];
          fVar11 = pfVar20[6];
          fVar12 = pfVar20[7];
          pfVar20 = pfVar20 + 8;
          p_Var18->m128_f32[0] = *pfVar22;
          p_Var18->m128_f32[1] = fVar8;
          p_Var18->m128_f32[2] = fVar10;
          p_Var18->m128_f32[3] = fVar12;
          pfVar22 = (float *)(p_Var19->m128_i8 + (-0x20 - (longlong)param_2) + (longlong)pfVar20);
          *pfVar22 = fVar6;
          pfVar22[1] = fVar7;
          pfVar22[2] = fVar9;
          pfVar22[3] = fVar11;
          lVar21 = lVar21 + -1;
          p_Var18 = p_Var18 + 2;
        } while (lVar21 != 0);
      }
      *(undefined4 *)((longlong)local_68 + lVar4) = 0xffffffff;
      *(int **)((longlong)alStack_78 + lVar4 + 8) = param_1->ifac;
      lVar21 = lVar23;
      if (uVar24 != param_6) {
        lVar21 = 8;
      }
      *(float **)((longlong)alStack_78 + lVar4) = param_1->twiddle;
      p_Var18 = *(__m128 **)((longlong)&local_50 + lVar21);
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f056060;
      p_Var18 = cfftf1_ps(iVar2,p_Var19,p_Var18,p_Var19,*(float **)((longlong)alStack_78 + lVar4),
                          *(int **)((longlong)alStack_78 + lVar4 + 8),
                          *(int *)((longlong)local_68 + lVar4));
      p_Var19 = (__m128 *)param_1->e;
      uVar17 = (ulonglong)(p_Var18 != (__m128 *)param_3);
      if (p_Var18 == (__m128 *)param_3) {
        lVar23 = 8;
      }
      p_Var18 = *(__m128 **)((longlong)&local_50 + lVar23);
      p_Var3 = (__m128 *)(&local_50)[uVar17];
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f056086;
      pffft_cplx_finalize(iVar2,p_Var3,p_Var18,p_Var19);
    }
    if (param_6 == 0) {
      uVar17 = (ulonglong)((uint)uVar17 ^ 1);
    }
    else {
      pfVar20 = (&local_50)[uVar17 ^ 1];
      pfVar22 = (&local_50)[uVar17];
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f0560a9;
      pffft_zreorder(param_1,pfVar20,pfVar22,PFFFT_FORWARD);
    }
  }
  else {
    if (param_2 == (&local_50)[uVar17]) {
      uVar17 = (ulonglong)(uVar24 == param_6);
    }
    p_Var19 = (__m128 *)param_2;
    if (param_6 != 0) {
      p_Var19 = (__m128 *)(&local_50)[uVar17];
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f0560e8;
      pffft_zreorder(param_1,param_2,p_Var19->m128_f32,PFFFT_BACKWARD);
      uVar17 = (ulonglong)((uint)uVar17 ^ 1);
    }
    p_Var18 = (__m128 *)param_1->e;
    p_Var3 = (__m128 *)(&local_50)[uVar17];
    if (param_1->transform == PFFFT_REAL) {
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f05610f;
      pffft_real_preprocess(iVar2,p_Var19,p_Var3,p_Var18);
      p_Var19 = local_38;
      pfVar20 = param_1->twiddle;
      *(int **)((longlong)alStack_78 + lVar4 + 8) = param_1->ifac;
      *(float **)((longlong)alStack_78 + lVar4) = pfVar20;
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f05612f;
      p_Var19 = rfftb1_ps(iVar2 * 2,p_Var3,(__m128 *)param_3,p_Var19,
                          *(float **)((longlong)alStack_78 + lVar4),
                          *(int **)((longlong)alStack_78 + lVar4 + 8));
      uVar17 = (ulonglong)(p_Var19 != (__m128 *)param_3);
    }
    else {
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f056140;
      pffft_cplx_preprocess(iVar2,p_Var19,p_Var3,p_Var18);
      p_Var19 = local_38;
      pfVar20 = param_1->twiddle;
      *(undefined4 *)((longlong)local_68 + lVar4) = 1;
      *(int **)((longlong)alStack_78 + lVar4 + 8) = param_1->ifac;
      *(float **)((longlong)alStack_78 + lVar4) = pfVar20;
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f056167;
      p_Var19 = cfftf1_ps(iVar2,p_Var3,(__m128 *)param_3,p_Var19,
                          *(float **)((longlong)alStack_78 + lVar4),
                          *(int **)((longlong)alStack_78 + lVar4 + 8),
                          *(int *)((longlong)local_68 + lVar4));
      uVar17 = (ulonglong)(p_Var19 != (__m128 *)param_3);
      if (0 < lVar25) {
        pfVar20 = (&local_50)[uVar17] + 4;
        pfVar22 = (&local_50)[uVar17];
        lVar23 = lVar25;
        do {
          fVar6 = *pfVar22;
          fVar7 = pfVar22[1];
          fVar8 = pfVar22[3];
          fVar9 = *pfVar20;
          fVar10 = pfVar20[1];
          *pfVar20 = pfVar22[2];
          pfVar20[1] = pfVar20[2];
          pfVar20[2] = fVar8;
          pfVar20[3] = pfVar20[3];
          pfVar20 = pfVar20 + 8;
          *pfVar22 = fVar6;
          pfVar22[1] = fVar9;
          pfVar22[2] = fVar7;
          pfVar22[3] = fVar10;
          lVar23 = lVar23 + -1;
          pfVar22 = pfVar22 + 8;
        } while (lVar23 != 0);
      }
    }
  }
  if (((&local_50)[uVar17] != param_3) && (0 < lVar25)) {
    pfVar20 = param_3 + 4;
    lVar23 = (longlong)(&local_50)[uVar17] - (longlong)param_3;
    do {
      puVar1 = (undefined8 *)(lVar23 + (longlong)pfVar20);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar23 + -0x10 + (longlong)pfVar20);
      uVar15 = puVar1[1];
      *(undefined8 *)(pfVar20 + -4) = *puVar1;
      *(undefined8 *)(pfVar20 + -2) = uVar15;
      *(undefined8 *)pfVar20 = uVar13;
      *(undefined8 *)(pfVar20 + 2) = uVar14;
      pfVar20 = pfVar20 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x14f0561f6;
  return;
}

// radb2 @ 14f056220

void __cdecl radb2(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  float *pfVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  int local_res8;
  int local_98;
  
  iVar22 = param_2 * 2;
  lVar23 = (longlong)((param_2 + 1) * param_1);
  lVar15 = (longlong)(param_1 * 3);
  iVar24 = 1;
  local_98 = 1;
  if (3 < param_2) {
    lVar18 = (longlong)(param_1 * 5);
    iVar9 = (param_2 + 2) * param_1;
    pfVar13 = param_3 + (lVar18 - lVar15);
    lVar11 = (longlong)((iVar22 + 2) * param_1);
    pfVar16 = param_4 + (lVar11 - lVar23);
    lVar10 = param_1 * 7 - lVar18;
    lVar12 = param_1 * 9 - lVar18;
    lVar21 = param_1 * 0xb - lVar18;
    uVar7 = (ulonglong)((uint)param_2 >> 2);
    iVar24 = ((uint)param_2 >> 2) * 4 + 1;
    do {
      pfVar16[lVar23 - lVar11] = pfVar13[lVar15 - lVar18] + pfVar13[-1];
      pfVar16[(iVar22 + 1) * param_1 - lVar11] = pfVar13[lVar15 - lVar18] - pfVar13[-1];
      pfVar16[iVar9 - lVar11] = pfVar13[lVar10 + -1] + *pfVar13;
      *pfVar16 = *pfVar13 - pfVar13[lVar10 + -1];
      pfVar16[(param_2 + 3) * param_1 - lVar11] = pfVar13[lVar10] + pfVar13[lVar12 + -1];
      pfVar16[(iVar22 + 3) * param_1 - lVar11] = pfVar13[lVar10] - pfVar13[lVar12 + -1];
      pfVar16[(param_2 + 4) * param_1 - lVar11] = pfVar13[lVar12] + pfVar13[lVar21 + -1];
      pfVar8 = pfVar13 + lVar12;
      pfVar20 = pfVar13 + lVar21 + -1;
      pfVar13 = pfVar13 + param_1 * 8;
      pfVar16[iVar9 * 2 - lVar11] = *pfVar8 - *pfVar20;
      pfVar16 = pfVar16 + param_1 * 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (iVar24 <= param_2) {
    pfVar13 = param_3 + (((longlong)((iVar24 * 2 + 3) * param_1) + -1) - lVar15);
    pfVar16 = param_4 + ((param_2 * 2 + iVar24) * param_1 - lVar23);
    pfVar8 = param_3 + ((iVar24 * 2 + 1) * param_1 - lVar15);
    pfVar20 = param_4 + ((iVar24 + param_2) * param_1 - lVar23);
    uVar7 = (ulonglong)((param_2 - iVar24) + 1);
    do {
      *pfVar20 = *pfVar8 + *pfVar13;
      pfVar20 = pfVar20 + param_1;
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + param_1 * 2;
      fVar2 = *pfVar13;
      pfVar13 = pfVar13 + param_1 * 2;
      *pfVar16 = fVar1 - fVar2;
      pfVar16 = pfVar16 + param_1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (1 < param_1) {
    if (param_1 != 2) {
      iVar22 = 1;
      if (0 < param_2) {
        iVar24 = param_1 * 5 + -1;
        local_res8 = 2;
        iVar9 = (param_2 + 1) * param_1 + 3;
        do {
          if (2 < (ulonglong)(longlong)param_1) {
            pfVar13 = param_5 + 1;
            uVar7 = (longlong)param_1 - 1U >> 1;
            iVar19 = iVar9;
            iVar14 = iVar24;
            do {
              lVar11 = (longlong)iVar14;
              lVar10 = (longlong)(((local_res8 - (param_2 + iVar22)) + 1) * param_1 + iVar19);
              iVar14 = iVar14 + -2;
              param_4[((longlong)iVar19 + -2) - lVar23] =
                   param_3[(lVar10 + -2) - lVar15] + param_3[(lVar11 + -2) - lVar15];
              fVar1 = param_3[(lVar10 + -2) - lVar15];
              fVar2 = param_3[(lVar11 + -2) - lVar15];
              param_4[((longlong)iVar19 + -1) - lVar23] =
                   param_3[(lVar10 + -1) - lVar15] - param_3[(lVar11 + -1) - lVar15];
              iVar17 = ((param_2 * 2 - (param_2 + iVar22)) + iVar22) * param_1 + iVar19;
              fVar3 = param_3[(lVar11 + -1) - lVar15];
              fVar4 = param_3[(lVar10 + -1) - lVar15];
              iVar19 = iVar19 + 2;
              lVar10 = (longlong)iVar17;
              param_4[(lVar10 + -2) - lVar23] =
                   (fVar1 - fVar2) * pfVar13[-1] - (fVar3 + fVar4) * *pfVar13;
              pfVar16 = pfVar13 + -1;
              fVar5 = *pfVar13;
              pfVar13 = pfVar13 + 2;
              param_4[(lVar10 + -1) - lVar23] = (fVar3 + fVar4) * *pfVar16 + (fVar1 - fVar2) * fVar5
              ;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          local_res8 = local_res8 + 2;
          iVar24 = iVar24 + param_1 * 2;
          iVar22 = iVar22 + 1;
          iVar9 = iVar9 + param_1;
        } while (iVar22 <= param_2);
      }
      if ((param_1 & 1U) != 0) {
        return;
      }
    }
    fVar1 = __real_c0000000;
    if (3 < param_2) {
      iVar22 = param_2 * 2 + 2;
      iVar19 = param_2 - iVar22;
      iVar24 = param_1 * 8;
      iVar9 = param_1 * 4;
      iVar17 = iVar22 * param_1;
      uVar7 = (ulonglong)((uint)param_2 >> 2);
      local_98 = ((uint)param_2 >> 2) * 4 + 1;
      iVar14 = iVar24;
      do {
        lVar10 = (longlong)iVar9;
        iVar9 = iVar9 + iVar24;
        param_4[((longlong)((iVar19 + 2) * param_1 + iVar17) + -1) - lVar23] =
             param_3[(lVar10 + -1) - lVar15] + param_3[(lVar10 + -1) - lVar15];
        param_4[((longlong)iVar17 + -1) - lVar23] = param_3[lVar10 - lVar15] * fVar1;
        lVar10 = (longlong)(param_1 * -2 + iVar14);
        param_4[((longlong)(iVar17 + (iVar19 + 3) * param_1) + -1) - lVar23] =
             param_3[(lVar10 + -1) - lVar15] + param_3[(lVar10 + -1) - lVar15];
        lVar11 = (longlong)iVar14;
        param_4[((longlong)(param_1 + iVar17) + -1) - lVar23] = param_3[lVar10 - lVar15] * fVar1;
        param_4[((longlong)((iVar19 + 4) * param_1 + iVar17) + -1) - lVar23] =
             param_3[(lVar11 + -1) - lVar15] + param_3[(lVar11 + -1) - lVar15];
        lVar10 = (longlong)(param_1 * 2 + iVar14);
        iVar14 = iVar14 + iVar24;
        param_4[((longlong)(((param_2 * 2 + 4) - iVar22) * param_1 + iVar17) + -1) - lVar23] =
             param_3[lVar11 - lVar15] * fVar1;
        iVar6 = param_1 * 3 + iVar17;
        param_4[((longlong)((iVar19 + 5) * param_1 + iVar17) + -1) - lVar23] =
             param_3[(lVar10 + -1) - lVar15] + param_3[(lVar10 + -1) - lVar15];
        iVar17 = iVar17 + param_1 * 4;
        param_4[((longlong)iVar6 + -1) - lVar23] = param_3[lVar10 - lVar15] * fVar1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (local_98 <= param_2) {
      pfVar13 = param_3 + (((longlong)((local_98 + 1) * param_1 * 2) + -1) - lVar15);
      pfVar16 = param_4 + ((longlong)((local_98 + 1 + param_2 * 2) * param_1) -
                          (longlong)((param_2 + 1) * param_1)) + -1;
      pfVar8 = param_4 + ((longlong)((local_98 + 1 + param_2) * param_1) -
                         (longlong)((param_2 + 1) * param_1)) + -1;
      uVar7 = (ulonglong)((param_2 - local_98) + 1);
      do {
        *pfVar8 = *pfVar13 + *pfVar13;
        pfVar8 = pfVar8 + param_1;
        pfVar20 = pfVar13 + 1;
        pfVar13 = pfVar13 + param_1 * 2;
        *pfVar16 = *pfVar20 * fVar1;
        pfVar16 = pfVar16 + param_1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

// radb2_ps @ 14f0568c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl radb2_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5)

{
  __m128 *p_Var1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  char *pcVar15;
  float *pfVar16;
  ulonglong uVar17;
  __m128 *p_Var18;
  ulonglong uVar19;
  longlong lVar20;
  __m128 *p_Var21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar17 = (ulonglong)param_1;
  lVar24 = 0;
  lVar23 = (longlong)(param_1 * param_2);
  if (0 < param_1 * param_2) {
    p_Var21 = param_4 + lVar23;
    p_Var18 = param_3 + -1;
    lVar22 = lVar24;
    do {
      p_Var18 = p_Var18 + uVar17 * 2;
      fVar4 = p_Var18->m128_f32[0];
      fVar5 = p_Var18->m128_f32[1];
      fVar30 = p_Var18->m128_f32[2];
      fVar6 = p_Var18->m128_f32[3];
      p_Var1 = param_3 + lVar22 * 2;
      fVar7 = p_Var1->m128_f32[0];
      fVar8 = p_Var1->m128_f32[1];
      fVar9 = p_Var1->m128_f32[2];
      fVar31 = p_Var1->m128_f32[3];
      lVar20 = uVar17 + lVar22;
      p_Var1 = param_4 + lVar22;
      p_Var1->m128_f32[0] = fVar4 + fVar7;
      p_Var1->m128_f32[1] = fVar5 + fVar8;
      p_Var1->m128_f32[2] = fVar30 + fVar9;
      p_Var1->m128_f32[3] = fVar6 + fVar31;
      p_Var21->m128_f32[0] = fVar7 - fVar4;
      p_Var21->m128_f32[1] = fVar8 - fVar5;
      p_Var21->m128_f32[2] = fVar9 - fVar30;
      p_Var21->m128_f32[3] = fVar31 - fVar6;
      p_Var21 = p_Var21 + uVar17;
      lVar22 = lVar20;
    } while (lVar20 < lVar23);
  }
  if (1 < param_1) {
    if (param_1 != 2) {
      uVar19 = uVar17;
      if (0 < lVar23) {
        p_Var18 = param_3 + 1;
        lVar20 = (longlong)param_4 - (longlong)param_3;
        pcVar15 = param_4->m128_i8 + (lVar23 * 0x10 - (longlong)param_3);
        lVar22 = lVar24;
        do {
          if (2 < (longlong)uVar17) {
            pfVar25 = (float *)(p_Var18->m128_i8 + uVar17 * 0x20 + -0x30);
            lVar14 = (uVar17 - 3 >> 1) + 1;
            p_Var21 = p_Var18;
            pfVar16 = param_5;
            do {
              pfVar3 = pfVar25 + -4;
              fVar4 = pfVar25[-3];
              fVar5 = pfVar25[-2];
              fVar30 = pfVar25[-1];
              fVar6 = *pfVar25;
              fVar7 = pfVar25[1];
              fVar8 = pfVar25[2];
              fVar9 = pfVar25[3];
              fVar31 = p_Var21->m128_f32[1];
              fVar32 = p_Var21->m128_f32[2];
              fVar33 = p_Var21->m128_f32[3];
              pfVar25 = pfVar25 + -8;
              fVar10 = p_Var21[1].m128_f32[0];
              fVar11 = *(float *)((longlong)p_Var21 + 0x14);
              fVar12 = *(float *)((longlong)p_Var21 + 0x18);
              fVar13 = *(float *)((longlong)p_Var21 + 0x1c);
              fVar26 = p_Var21->m128_f32[0] - *pfVar3;
              fVar27 = fVar31 - fVar4;
              fVar28 = fVar32 - fVar5;
              fVar29 = fVar33 - fVar30;
              pfVar2 = (float *)(p_Var21->m128_i8 + lVar20);
              *pfVar2 = *pfVar3 + p_Var21->m128_f32[0];
              pfVar2[1] = fVar4 + fVar31;
              pfVar2[2] = fVar5 + fVar32;
              pfVar2[3] = fVar30 + fVar33;
              fVar30 = fVar10 + fVar6;
              fVar31 = fVar11 + fVar7;
              fVar32 = fVar12 + fVar8;
              fVar33 = fVar13 + fVar9;
              pfVar3 = (float *)(p_Var21->m128_i8 + lVar20 + 0x10);
              *pfVar3 = fVar10 - fVar6;
              pfVar3[1] = fVar11 - fVar7;
              pfVar3[2] = fVar12 - fVar8;
              pfVar3[3] = fVar13 - fVar9;
              fVar4 = pfVar16[1];
              fVar5 = *pfVar16;
              pfVar16 = pfVar16 + 2;
              pfVar3 = (float *)(pcVar15 + (longlong)p_Var21->m128_i8);
              *pfVar3 = fVar26 * fVar5 - fVar30 * fVar4;
              pfVar3[1] = fVar27 * fVar5 - fVar31 * fVar4;
              pfVar3[2] = fVar28 * fVar5 - fVar32 * fVar4;
              pfVar3[3] = fVar29 * fVar5 - fVar33 * fVar4;
              pfVar3 = (float *)(pcVar15 + 0x10 + (longlong)p_Var21->m128_i8);
              *pfVar3 = fVar30 * fVar5 + fVar26 * fVar4;
              pfVar3[1] = fVar31 * fVar5 + fVar27 * fVar4;
              pfVar3[2] = fVar32 * fVar5 + fVar28 * fVar4;
              pfVar3[3] = fVar33 * fVar5 + fVar29 * fVar4;
              p_Var21 = p_Var21 + 2;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          lVar22 = lVar22 + uVar17;
          p_Var18 = p_Var18 + uVar17 * 2;
          pcVar15 = pcVar15 + uVar17 * -0x10;
          lVar20 = lVar20 + uVar17 * -0x10;
        } while (lVar22 < lVar23);
        uVar19 = (ulonglong)(uint)param_1;
      }
      if ((uVar19 & 1) != 0) {
        return;
      }
    }
    fVar6 = _UNK_15289f91c;
    fVar30 = _UNK_15289f918;
    fVar5 = _UNK_15289f914;
    fVar4 = ___xmm_c0000000c0000000c0000000c0000000;
    if (0 < lVar23) {
      pfVar16 = (float *)(param_4->m128_i8 + (uVar17 + lVar23) * 0x10 + -0x10);
      do {
        lVar22 = uVar17 + lVar24 * 2;
        lVar24 = lVar24 + uVar17;
        p_Var18 = param_3 + lVar22 + -1;
        fVar7 = p_Var18->m128_f32[1];
        fVar8 = p_Var18->m128_f32[2];
        fVar9 = p_Var18->m128_f32[3];
        p_Var21 = param_3 + lVar22;
        fVar31 = p_Var21->m128_f32[0];
        fVar32 = p_Var21->m128_f32[1];
        fVar33 = p_Var21->m128_f32[2];
        fVar10 = p_Var21->m128_f32[3];
        pfVar25 = pfVar16 + lVar23 * -4;
        *pfVar25 = p_Var18->m128_f32[0] + p_Var18->m128_f32[0];
        pfVar25[1] = fVar7 + fVar7;
        pfVar25[2] = fVar8 + fVar8;
        pfVar25[3] = fVar9 + fVar9;
        *pfVar16 = fVar31 * fVar4;
        pfVar16[1] = fVar32 * fVar5;
        pfVar16[2] = fVar33 * fVar30;
        pfVar16[3] = fVar10 * fVar6;
        pfVar16 = pfVar16 + uVar17 * 4;
      } while (lVar24 < lVar23);
    }
  }
  return;
}

// radb3 @ 14f056ad0

void __cdecl
radb3(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar16;
  ulonglong uVar17;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_res18;
  int local_b8;
  int local_a8;
  
  fVar3 = __real_3fddb3d7;
  uVar19 = (ulonglong)param_1;
  iVar4 = (param_2 + 1) * param_1;
  iVar24 = param_1 * 4;
  iVar5 = iVar24 + 1;
  local_a8 = 1;
  iVar26 = 1;
  if (3 < param_2) {
    iVar8 = param_2 * 2 + 2;
    iVar9 = param_2 - iVar8;
    iVar20 = param_1 * 0xc;
    iVar25 = param_1 * 6;
    iVar15 = iVar8 * param_1;
    iVar6 = param_2 * 3 - iVar8;
    uVar17 = (ulonglong)((uint)param_2 >> 2);
    iVar26 = ((uint)param_2 >> 2) * 4 + 1;
    local_res18 = iVar20;
    do {
      fVar2 = param_3[(longlong)iVar25 - (longlong)iVar5];
      fVar27 = param_3[((longlong)(param_1 * -2 + iVar25) + 1) - (longlong)iVar5] - fVar2;
      param_4[(longlong)((iVar9 + 1) * param_1 + iVar15) - (longlong)iVar4] =
           fVar2 + fVar2 + param_3[((longlong)(param_1 * -2 + iVar25) + 1) - (longlong)iVar5];
      fVar2 = param_3[((longlong)iVar25 + 1) - (longlong)iVar5];
      param_4[(longlong)(iVar15 - param_1) - (longlong)iVar4] = fVar27 - fVar2 * fVar3;
      lVar12 = (longlong)(local_res18 + param_1 * -3);
      param_4[(longlong)((iVar6 + 1) * param_1 + iVar15) - (longlong)iVar4] = fVar27 + fVar2 * fVar3
      ;
      fVar2 = param_3[lVar12 - iVar5];
      fVar27 = param_3[((longlong)(iVar25 + param_1) + 1) - (longlong)iVar5] - fVar2;
      param_4[(longlong)(iVar15 + (iVar9 + 2) * param_1) - (longlong)iVar4] =
           fVar2 + fVar2 + param_3[((longlong)(iVar25 + param_1) + 1) - (longlong)iVar5];
      fVar2 = param_3[(lVar12 + 1) - (longlong)iVar5];
      param_4[(longlong)iVar15 - (longlong)iVar4] = fVar27 - fVar2 * fVar3;
      param_4[(longlong)((iVar6 + 2) * param_1 + iVar15) - (longlong)iVar4] = fVar27 + fVar2 * fVar3
      ;
      fVar2 = param_3[(longlong)local_res18 - (longlong)iVar5];
      fVar27 = param_3[((longlong)(iVar24 + iVar25) + 1) - (longlong)iVar5] - fVar2;
      param_4[(longlong)((iVar9 + 3) * param_1 + iVar15) - (longlong)iVar4] =
           fVar2 + fVar2 + param_3[((longlong)(iVar24 + iVar25) + 1) - (longlong)iVar5];
      fVar2 = param_3[((longlong)local_res18 + 1) - (longlong)iVar5];
      param_4[(longlong)(param_1 + iVar15) - (longlong)iVar4] = fVar27 - fVar2 * fVar3;
      lVar12 = (longlong)(local_res18 + param_1 * 3);
      param_4[(longlong)((iVar6 + 3) * param_1 + iVar15) - (longlong)iVar4] = fVar27 + fVar2 * fVar3
      ;
      fVar2 = param_3[lVar12 - iVar5];
      local_res18 = local_res18 + iVar20;
      iVar7 = param_1 * 7 + iVar25;
      iVar25 = iVar25 + iVar20;
      fVar27 = param_3[((longlong)iVar7 + 1) - (longlong)iVar5] - fVar2;
      iVar1 = ((param_2 * 2 + 4) - iVar8) * param_1 + iVar15;
      param_4[(longlong)((iVar9 + 4) * param_1 + iVar15) - (longlong)iVar4] =
           fVar2 + fVar2 + param_3[((longlong)iVar7 + 1) - (longlong)iVar5];
      fVar2 = param_3[(lVar12 + 1) - (longlong)iVar5];
      iVar7 = (iVar6 + 4) * param_1 + iVar15;
      iVar15 = iVar15 + iVar24;
      param_4[(longlong)iVar1 - (longlong)iVar4] = fVar27 - fVar2 * fVar3;
      param_4[(longlong)iVar7 - (longlong)iVar4] = fVar2 * fVar3 + fVar27;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (iVar26 <= param_2) {
    pfVar22 = param_3 + ((longlong)((iVar26 * 3 + 3) * param_1) - (longlong)iVar5);
    pfVar10 = param_4 + ((longlong)((iVar26 + param_2 * 3) * param_1) - (longlong)iVar4);
    pfVar16 = param_4 + ((longlong)((iVar26 + param_2 * 2) * param_1) - (longlong)iVar4);
    pfVar18 = param_4 + ((longlong)((iVar26 + param_2) * param_1) - (longlong)iVar4);
    uVar17 = (ulonglong)((param_2 - iVar26) + 1);
    pfVar13 = param_3 + (((longlong)((iVar26 * 3 + 1) * param_1) + 1) - (longlong)iVar5);
    do {
      fVar2 = *pfVar13;
      pfVar13 = pfVar13 + param_1 * 3;
      fVar27 = *pfVar22;
      fVar28 = fVar2 - fVar27;
      *pfVar18 = fVar27 + fVar27 + fVar2;
      pfVar18 = pfVar18 + uVar19;
      fVar2 = pfVar22[1];
      pfVar22 = pfVar22 + param_1 * 3;
      *pfVar16 = fVar28 - fVar2 * fVar3;
      pfVar16 = pfVar16 + uVar19;
      *pfVar10 = fVar28 + fVar2 * fVar3;
      pfVar10 = pfVar10 + uVar19;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  fVar2 = __real_3f5db3d7;
  fVar3 = __real_3f000000;
  if ((param_1 != 1) && (0 < param_2)) {
    iVar24 = param_1 * 4 + 3;
    local_b8 = 4;
    uVar17 = uVar19;
    do {
      if (2 < (longlong)uVar19) {
        lVar12 = (longlong)param_5 - (longlong)param_6;
        iVar8 = iVar24 + param_1 * 2 + -4;
        iVar25 = (int)uVar17;
        uVar17 = uVar19 - 1 >> 1;
        pfVar22 = param_6;
        iVar26 = iVar24;
        do {
          lVar23 = (longlong)iVar8;
          lVar21 = (longlong)(iVar25 * 2 + iVar26);
          iVar8 = iVar8 + -2;
          lVar14 = (longlong)(iVar26 + ((local_a8 - local_b8) + param_2) * iVar25);
          fVar27 = param_3[(lVar23 + -1) - (longlong)iVar5];
          fVar28 = param_3[(lVar21 + -1) - (longlong)iVar5];
          fVar31 = param_3[((longlong)iVar26 + -1) - (longlong)iVar5];
          param_4[(lVar14 + -2) - (longlong)iVar4] = fVar31 + fVar27 + fVar28;
          fVar31 = fVar31 - (fVar27 + fVar28) * fVar3;
          fVar27 = param_3[(longlong)iVar26 - (longlong)iVar5];
          fVar28 = param_3[lVar21 - iVar5];
          fVar29 = param_3[lVar23 - iVar5];
          lVar11 = (longlong)(iVar26 + ((param_2 * 2 - local_b8) + local_a8) * iVar25);
          iVar6 = iVar26 + ((param_2 * 3 - local_b8) + local_a8) * iVar25;
          iVar26 = iVar26 + 2;
          param_4[(lVar14 + -1) - (longlong)iVar4] = fVar27 + (fVar28 - fVar29);
          fVar27 = fVar27 - (fVar28 - fVar29) * fVar3;
          fVar28 = (param_3[lVar23 - iVar5] + param_3[lVar21 - iVar5]) * fVar2;
          fVar29 = (param_3[(lVar21 + -1) - (longlong)iVar5] -
                   param_3[(lVar23 + -1) - (longlong)iVar5]) * fVar2;
          fVar30 = fVar31 - fVar28;
          fVar31 = fVar31 + fVar28;
          fVar28 = fVar27 - fVar29;
          fVar27 = fVar27 + fVar29;
          param_4[(lVar11 + -2) - (longlong)iVar4] =
               fVar30 * *(float *)((longlong)pfVar22 + lVar12) -
               fVar27 * *(float *)((longlong)pfVar22 + lVar12 + 4);
          param_4[(lVar11 + -1) - (longlong)iVar4] =
               fVar30 * *(float *)((longlong)pfVar22 + lVar12 + 4) +
               fVar27 * *(float *)((longlong)pfVar22 + lVar12);
          lVar11 = (longlong)iVar6;
          param_4[(lVar11 + -2) - (longlong)iVar4] = fVar31 * *pfVar22 - fVar28 * pfVar22[1];
          fVar27 = *pfVar22;
          pfVar10 = pfVar22 + 1;
          pfVar22 = pfVar22 + 2;
          param_4[(lVar11 + -1) - (longlong)iVar4] = fVar28 * fVar27 + fVar31 * *pfVar10;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
        uVar17 = (ulonglong)(uint)param_1;
      }
      local_a8 = local_a8 + 1;
      iVar24 = iVar24 + param_1 * 3;
      local_b8 = local_b8 + 3;
    } while (local_a8 <= param_2);
  }
  return;
}

// radb3_ps @ 14f057160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
radb3_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  __m128 *p_Var16;
  __m128 *p_Var17;
  int iVar18;
  longlong lVar19;
  __m128 *p_Var20;
  __m128 *p_Var21;
  __m128 *p_Var22;
  float *pfVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  int local_128;
  
  fVar12 = _UNK_1530ea53c;
  fVar11 = _UNK_1530ea538;
  fVar10 = _UNK_1530ea534;
  fVar9 = ___xmm_3fddb3d73fddb3d73fddb3d73fddb3d7;
  fVar8 = _UNK_15068972c;
  fVar7 = _UNK_150689728;
  fVar6 = _UNK_150689724;
  fVar5 = ___xmm_bf000000bf000000bf000000bf000000;
  iVar28 = 0;
  if (3 < param_2) {
    iVar25 = param_2 * 2;
    lVar27 = (longlong)(param_1 * 6);
    p_Var20 = param_3 + lVar27;
    lVar19 = (longlong)((iVar25 + 1) * param_1);
    lVar15 = (longlong)(param_1 * 5);
    p_Var16 = param_4 + lVar19;
    p_Var17 = param_3 + lVar15 + -1;
    lVar29 = param_1 * 2 - lVar15;
    lVar24 = param_1 * 8 - lVar15;
    lVar15 = param_1 * 0xb - lVar15;
    uVar13 = (param_2 - 4U >> 2) + 1;
    uVar14 = (ulonglong)uVar13;
    iVar28 = uVar13 * 4;
    do {
      p_Var21 = p_Var20 + -lVar27;
      fVar1 = p_Var21->m128_f32[1];
      fVar2 = p_Var21->m128_f32[2];
      fVar3 = p_Var21->m128_f32[3];
      p_Var22 = p_Var17 + lVar29;
      fVar30 = p_Var22->m128_f32[0] + p_Var22->m128_f32[0];
      fVar31 = p_Var22->m128_f32[1] + p_Var22->m128_f32[1];
      fVar33 = p_Var22->m128_f32[2] + p_Var22->m128_f32[2];
      fVar35 = p_Var22->m128_f32[3] + p_Var22->m128_f32[3];
      fVar36 = fVar5 * fVar30 + p_Var21->m128_f32[0];
      fVar37 = fVar6 * fVar31 + fVar1;
      fVar39 = fVar7 * fVar33 + fVar2;
      fVar41 = fVar8 * fVar35 + fVar3;
      p_Var22 = p_Var17 + lVar29 + 1;
      fVar4 = p_Var22->m128_f32[0];
      fVar46 = p_Var22->m128_f32[1];
      fVar32 = p_Var22->m128_f32[2];
      fVar34 = p_Var22->m128_f32[3];
      p_Var22 = p_Var16 + -lVar19;
      p_Var22->m128_f32[0] = p_Var21->m128_f32[0] + fVar30;
      p_Var22->m128_f32[1] = fVar1 + fVar31;
      p_Var22->m128_f32[2] = fVar2 + fVar33;
      p_Var22->m128_f32[3] = fVar3 + fVar35;
      fVar33 = p_Var17->m128_f32[0] + p_Var17->m128_f32[0];
      fVar38 = p_Var17->m128_f32[1] + p_Var17->m128_f32[1];
      fVar40 = p_Var17->m128_f32[2] + p_Var17->m128_f32[2];
      fVar42 = p_Var17->m128_f32[3] + p_Var17->m128_f32[3];
      p_Var21 = p_Var16 + (param_1 * param_2 - lVar19);
      p_Var21->m128_f32[0] = fVar36 - fVar9 * fVar4;
      p_Var21->m128_f32[1] = fVar37 - fVar10 * fVar46;
      p_Var21->m128_f32[2] = fVar39 - fVar11 * fVar32;
      p_Var21->m128_f32[3] = fVar41 - fVar12 * fVar34;
      p_Var21 = p_Var20 + (param_1 * 3 - lVar27);
      fVar1 = p_Var21->m128_f32[0];
      fVar2 = p_Var21->m128_f32[1];
      fVar3 = p_Var21->m128_f32[2];
      fVar30 = p_Var21->m128_f32[3];
      p_Var21 = p_Var16 + (param_1 * param_2 * 2 - lVar19);
      p_Var21->m128_f32[0] = fVar9 * fVar4 + fVar36;
      p_Var21->m128_f32[1] = fVar10 * fVar46 + fVar37;
      p_Var21->m128_f32[2] = fVar11 * fVar32 + fVar39;
      p_Var21->m128_f32[3] = fVar12 * fVar34 + fVar41;
      fVar4 = p_Var17[1].m128_f32[0];
      fVar32 = fVar10 * *(float *)((longlong)p_Var17 + 0x14);
      fVar34 = fVar11 * *(float *)((longlong)p_Var17 + 0x18);
      fVar31 = fVar12 * *(float *)((longlong)p_Var17 + 0x1c);
      fVar41 = fVar5 * fVar33 + fVar1;
      fVar43 = fVar6 * fVar38 + fVar2;
      fVar44 = fVar7 * fVar40 + fVar3;
      fVar45 = fVar8 * fVar42 + fVar30;
      p_Var21 = p_Var17 + lVar24;
      fVar35 = p_Var21->m128_f32[0] + p_Var21->m128_f32[0];
      fVar36 = p_Var21->m128_f32[1] + p_Var21->m128_f32[1];
      fVar37 = p_Var21->m128_f32[2] + p_Var21->m128_f32[2];
      fVar39 = p_Var21->m128_f32[3] + p_Var21->m128_f32[3];
      p_Var21 = p_Var16 + (param_1 - lVar19);
      p_Var21->m128_f32[0] = fVar1 + fVar33;
      p_Var21->m128_f32[1] = fVar2 + fVar38;
      p_Var21->m128_f32[2] = fVar3 + fVar40;
      p_Var21->m128_f32[3] = fVar30 + fVar42;
      p_Var21 = p_Var16 + ((param_2 + 1) * param_1 - lVar19);
      p_Var21->m128_f32[0] = fVar41 - fVar9 * fVar4;
      p_Var21->m128_f32[1] = fVar43 - fVar32;
      p_Var21->m128_f32[2] = fVar44 - fVar34;
      p_Var21->m128_f32[3] = fVar45 - fVar31;
      fVar1 = p_Var20->m128_f32[0];
      fVar2 = p_Var20->m128_f32[1];
      fVar3 = p_Var20->m128_f32[2];
      fVar46 = p_Var20->m128_f32[3];
      p_Var16->m128_f32[0] = fVar9 * fVar4 + fVar41;
      p_Var16->m128_f32[1] = fVar32 + fVar43;
      p_Var16->m128_f32[2] = fVar34 + fVar44;
      p_Var16->m128_f32[3] = fVar31 + fVar45;
      fVar38 = fVar5 * fVar35 + fVar1;
      fVar40 = fVar6 * fVar36 + fVar2;
      fVar41 = fVar7 * fVar37 + fVar3;
      fVar42 = fVar8 * fVar39 + fVar46;
      p_Var21 = p_Var17 + lVar24 + 1;
      fVar4 = p_Var21->m128_f32[0];
      fVar32 = p_Var21->m128_f32[1];
      fVar34 = p_Var21->m128_f32[2];
      fVar30 = p_Var21->m128_f32[3];
      p_Var21 = p_Var16 + (param_1 * 2 - lVar19);
      p_Var21->m128_f32[0] = fVar1 + fVar35;
      p_Var21->m128_f32[1] = fVar2 + fVar36;
      p_Var21->m128_f32[2] = fVar3 + fVar37;
      p_Var21->m128_f32[3] = fVar46 + fVar39;
      p_Var21 = p_Var17 + lVar15;
      fVar31 = p_Var21->m128_f32[0] + p_Var21->m128_f32[0];
      fVar33 = p_Var21->m128_f32[1] + p_Var21->m128_f32[1];
      fVar35 = p_Var21->m128_f32[2] + p_Var21->m128_f32[2];
      fVar36 = p_Var21->m128_f32[3] + p_Var21->m128_f32[3];
      p_Var21 = p_Var16 + ((param_2 + 2) * param_1 - lVar19);
      p_Var21->m128_f32[0] = fVar38 - fVar9 * fVar4;
      p_Var21->m128_f32[1] = fVar40 - fVar10 * fVar32;
      p_Var21->m128_f32[2] = fVar41 - fVar11 * fVar34;
      p_Var21->m128_f32[3] = fVar42 - fVar12 * fVar30;
      p_Var21 = p_Var20 + (param_1 * 9 - lVar27);
      fVar1 = p_Var21->m128_f32[0];
      fVar2 = p_Var21->m128_f32[1];
      fVar3 = p_Var21->m128_f32[2];
      fVar46 = p_Var21->m128_f32[3];
      p_Var20 = p_Var20 + param_1 * 0xc;
      p_Var21 = p_Var16 + ((iVar25 + 2) * param_1 - lVar19);
      p_Var21->m128_f32[0] = fVar38 + fVar9 * fVar4;
      p_Var21->m128_f32[1] = fVar40 + fVar10 * fVar32;
      p_Var21->m128_f32[2] = fVar41 + fVar11 * fVar34;
      p_Var21->m128_f32[3] = fVar42 + fVar12 * fVar30;
      fVar37 = fVar5 * fVar31 + fVar1;
      fVar38 = fVar6 * fVar33 + fVar2;
      fVar39 = fVar7 * fVar35 + fVar3;
      fVar40 = fVar8 * fVar36 + fVar46;
      p_Var21 = p_Var17 + lVar15 + 1;
      fVar4 = p_Var21->m128_f32[0];
      fVar32 = p_Var21->m128_f32[1];
      fVar34 = p_Var21->m128_f32[2];
      fVar30 = p_Var21->m128_f32[3];
      p_Var17 = p_Var17 + param_1 * 0xc;
      p_Var21 = p_Var16 + (param_1 * 3 - lVar19);
      p_Var21->m128_f32[0] = fVar1 + fVar31;
      p_Var21->m128_f32[1] = fVar2 + fVar33;
      p_Var21->m128_f32[2] = fVar3 + fVar35;
      p_Var21->m128_f32[3] = fVar46 + fVar36;
      p_Var21 = p_Var16 + ((param_2 + 3) * param_1 - lVar19);
      p_Var21->m128_f32[0] = fVar37 - fVar9 * fVar4;
      p_Var21->m128_f32[1] = fVar38 - fVar10 * fVar32;
      p_Var21->m128_f32[2] = fVar39 - fVar11 * fVar34;
      p_Var21->m128_f32[3] = fVar40 - fVar12 * fVar30;
      p_Var21 = p_Var16 + ((iVar25 + 3) * param_1 - lVar19);
      p_Var21->m128_f32[0] = fVar9 * fVar4 + fVar37;
      p_Var21->m128_f32[1] = fVar10 * fVar32 + fVar38;
      p_Var21->m128_f32[2] = fVar11 * fVar34 + fVar39;
      p_Var21->m128_f32[3] = fVar12 * fVar30 + fVar40;
      p_Var16 = p_Var16 + param_1 * 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (iVar28 < param_2) {
    p_Var17 = param_4 + iVar28 * param_1;
    p_Var20 = param_4 + (iVar28 + param_2 * 2) * param_1;
    p_Var21 = param_4 + (iVar28 + param_2) * param_1;
    p_Var22 = param_3 + iVar28 * param_1 * 3;
    p_Var16 = param_3 + (iVar28 * 3 + 2) * param_1;
    uVar14 = (ulonglong)(uint)(param_2 - iVar28);
    do {
      fVar1 = p_Var22->m128_f32[0];
      fVar2 = p_Var22->m128_f32[1];
      fVar3 = p_Var22->m128_f32[2];
      fVar4 = p_Var22->m128_f32[3];
      p_Var22 = p_Var22 + param_1 * 3;
      fVar31 = p_Var16[-1].m128_f32[0] + p_Var16[-1].m128_f32[0];
      fVar33 = *(float *)((longlong)p_Var16 + -0xc) + *(float *)((longlong)p_Var16 + -0xc);
      fVar35 = *(float *)((longlong)p_Var16 + -8) + *(float *)((longlong)p_Var16 + -8);
      fVar36 = *(float *)((longlong)p_Var16 + -4) + *(float *)((longlong)p_Var16 + -4);
      fVar37 = fVar5 * fVar31 + fVar1;
      fVar38 = fVar6 * fVar33 + fVar2;
      fVar39 = fVar7 * fVar35 + fVar3;
      fVar40 = fVar8 * fVar36 + fVar4;
      fVar46 = p_Var16->m128_f32[0];
      fVar32 = p_Var16->m128_f32[1];
      fVar34 = p_Var16->m128_f32[2];
      fVar30 = p_Var16->m128_f32[3];
      p_Var16 = p_Var16 + param_1 * 3;
      p_Var17->m128_f32[0] = fVar1 + fVar31;
      p_Var17->m128_f32[1] = fVar2 + fVar33;
      p_Var17->m128_f32[2] = fVar3 + fVar35;
      p_Var17->m128_f32[3] = fVar4 + fVar36;
      p_Var17 = p_Var17 + param_1;
      p_Var21->m128_f32[0] = fVar37 - fVar9 * fVar46;
      p_Var21->m128_f32[1] = fVar38 - fVar10 * fVar32;
      p_Var21->m128_f32[2] = fVar39 - fVar11 * fVar34;
      p_Var21->m128_f32[3] = fVar40 - fVar12 * fVar30;
      p_Var21 = p_Var21 + param_1;
      p_Var20->m128_f32[0] = fVar9 * fVar46 + fVar37;
      p_Var20->m128_f32[1] = fVar10 * fVar32 + fVar38;
      p_Var20->m128_f32[2] = fVar11 * fVar34 + fVar39;
      p_Var20->m128_f32[3] = fVar12 * fVar30 + fVar40;
      p_Var20 = p_Var20 + param_1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  fVar12 = _UNK_1530ea51c;
  fVar11 = _UNK_1530ea518;
  fVar10 = _UNK_1530ea514;
  fVar9 = ___xmm_3f5db3d73f5db3d73f5db3d73f5db3d7;
  lVar15 = (longlong)param_1;
  if ((param_1 != 1) && (0 < param_2)) {
    iVar25 = param_1 * 2 + -2;
    local_128 = 2;
    lVar19 = (longlong)(param_1 * param_2);
    iVar28 = param_1 * param_2 * 2;
    uVar14 = (ulonglong)(uint)param_2;
    p_Var16 = param_4 + lVar19 + 1;
    do {
      if (2 < lVar15) {
        lVar24 = (lVar15 - 3U >> 1) + 1;
        pfVar23 = param_5;
        p_Var17 = p_Var16;
        iVar26 = iVar25;
        iVar18 = local_128;
        do {
          fVar1 = *pfVar23;
          p_Var21 = param_3 + (longlong)iVar26 + -1;
          lVar27 = (longlong)(param_1 * 2 + iVar18);
          p_Var22 = param_3 + lVar27 + -1;
          p_Var20 = param_3 + lVar27;
          fVar3 = p_Var20->m128_f32[0];
          fVar4 = p_Var20->m128_f32[1];
          fVar46 = p_Var20->m128_f32[2];
          fVar32 = p_Var20->m128_f32[3];
          fVar33 = p_Var22->m128_f32[0] + p_Var21->m128_f32[0];
          fVar36 = p_Var22->m128_f32[1] + p_Var21->m128_f32[1];
          fVar38 = p_Var22->m128_f32[2] + p_Var21->m128_f32[2];
          fVar40 = p_Var22->m128_f32[3] + p_Var21->m128_f32[3];
          fVar2 = pfVar23[1];
          p_Var20 = param_3 + (longlong)iVar18 + -1;
          fVar34 = p_Var20->m128_f32[1];
          fVar30 = p_Var20->m128_f32[2];
          fVar31 = p_Var20->m128_f32[3];
          fVar42 = (p_Var22->m128_f32[0] - p_Var21->m128_f32[0]) * fVar9;
          fVar43 = (p_Var22->m128_f32[1] - p_Var21->m128_f32[1]) * fVar10;
          fVar44 = (p_Var22->m128_f32[2] - p_Var21->m128_f32[2]) * fVar11;
          fVar45 = (p_Var22->m128_f32[3] - p_Var21->m128_f32[3]) * fVar12;
          p_Var21 = p_Var17 + -lVar19;
          p_Var21->m128_f32[0] = fVar33 + p_Var20->m128_f32[0];
          p_Var21->m128_f32[1] = fVar36 + fVar34;
          p_Var21->m128_f32[2] = fVar38 + fVar30;
          p_Var21->m128_f32[3] = fVar40 + fVar31;
          p_Var20 = param_3 + iVar26;
          fVar35 = fVar3 - p_Var20->m128_f32[0];
          fVar37 = fVar4 - p_Var20->m128_f32[1];
          fVar39 = fVar46 - p_Var20->m128_f32[2];
          fVar41 = fVar32 - p_Var20->m128_f32[3];
          p_Var20 = param_3 + (longlong)iVar18 + -1;
          fVar33 = fVar33 * fVar5 + p_Var20->m128_f32[0];
          fVar36 = fVar36 * fVar6 + p_Var20->m128_f32[1];
          fVar38 = fVar38 * fVar7 + p_Var20->m128_f32[2];
          fVar40 = fVar40 * fVar8 + p_Var20->m128_f32[3];
          p_Var20 = param_3 + iVar26;
          p_Var21 = param_3 + iVar18;
          fVar34 = p_Var21->m128_f32[1];
          fVar30 = p_Var21->m128_f32[2];
          fVar31 = p_Var21->m128_f32[3];
          fVar50 = (fVar3 + p_Var20->m128_f32[0]) * fVar9;
          fVar51 = (fVar4 + p_Var20->m128_f32[1]) * fVar10;
          fVar52 = (fVar46 + p_Var20->m128_f32[2]) * fVar11;
          fVar53 = (fVar32 + p_Var20->m128_f32[3]) * fVar12;
          p_Var20 = p_Var17 + (1 - lVar19);
          p_Var20->m128_f32[0] = fVar35 + p_Var21->m128_f32[0];
          p_Var20->m128_f32[1] = fVar37 + fVar34;
          p_Var20->m128_f32[2] = fVar39 + fVar30;
          p_Var20->m128_f32[3] = fVar41 + fVar31;
          p_Var20 = param_3 + iVar18;
          fVar47 = fVar35 * fVar5 + p_Var20->m128_f32[0];
          fVar48 = fVar37 * fVar6 + p_Var20->m128_f32[1];
          fVar49 = fVar39 * fVar7 + p_Var20->m128_f32[2];
          fVar41 = fVar41 * fVar8 + p_Var20->m128_f32[3];
          fVar31 = fVar33 - fVar50;
          fVar35 = fVar36 - fVar51;
          fVar37 = fVar38 - fVar52;
          fVar39 = fVar40 - fVar53;
          fVar50 = fVar50 + fVar33;
          fVar51 = fVar51 + fVar36;
          fVar52 = fVar52 + fVar38;
          fVar53 = fVar53 + fVar40;
          fVar46 = fVar42 + fVar47;
          fVar32 = fVar43 + fVar48;
          fVar34 = fVar44 + fVar49;
          fVar30 = fVar45 + fVar41;
          fVar47 = fVar47 - fVar42;
          fVar48 = fVar48 - fVar43;
          fVar49 = fVar49 - fVar44;
          fVar41 = fVar41 - fVar45;
          fVar3 = *(float *)((longlong)pfVar23 + ((longlong)param_6 - (longlong)param_5) + 4);
          p_Var17[1].m128_f32[0] = fVar1 * fVar46 + fVar2 * fVar31;
          *(float *)((longlong)p_Var17 + 0x14) = fVar1 * fVar32 + fVar2 * fVar35;
          *(float *)((longlong)p_Var17 + 0x18) = fVar1 * fVar34 + fVar2 * fVar37;
          *(float *)((longlong)p_Var17 + 0x1c) = fVar1 * fVar30 + fVar2 * fVar39;
          fVar4 = *(float *)((longlong)pfVar23 + ((longlong)param_6 - (longlong)param_5));
          pfVar23 = pfVar23 + 2;
          p_Var17->m128_f32[0] = fVar1 * fVar31 - fVar2 * fVar46;
          p_Var17->m128_f32[1] = fVar1 * fVar35 - fVar2 * fVar32;
          p_Var17->m128_f32[2] = fVar1 * fVar37 - fVar2 * fVar34;
          p_Var17->m128_f32[3] = fVar1 * fVar39 - fVar2 * fVar30;
          p_Var17 = p_Var17 + 2;
          p_Var20 = param_4 + (iVar28 + iVar18);
          p_Var20->m128_f32[0] = fVar4 * fVar47 + fVar3 * fVar50;
          p_Var20->m128_f32[1] = fVar4 * fVar48 + fVar3 * fVar51;
          p_Var20->m128_f32[2] = fVar4 * fVar49 + fVar3 * fVar52;
          p_Var20->m128_f32[3] = fVar4 * fVar41 + fVar3 * fVar53;
          p_Var20 = param_4 + (longlong)(iVar28 + iVar18) + -1;
          p_Var20->m128_f32[0] = fVar4 * fVar50 - fVar3 * fVar47;
          p_Var20->m128_f32[1] = fVar4 * fVar51 - fVar3 * fVar48;
          p_Var20->m128_f32[2] = fVar4 * fVar52 - fVar3 * fVar49;
          p_Var20->m128_f32[3] = fVar4 * fVar53 - fVar3 * fVar41;
          lVar24 = lVar24 + -1;
          iVar26 = iVar26 + -2;
          iVar18 = iVar18 + 2;
        } while (lVar24 != 0);
      }
      iVar25 = iVar25 + param_1 * 3;
      local_128 = local_128 + param_1 * 3;
      p_Var16 = p_Var16 + lVar15;
      iVar28 = iVar28 + param_1 * -2;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}

// radb4 @ 14f057860

void __cdecl
radb4(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
     float *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int local_res8;
  int local_res20;
  int local_b4;
  ulonglong local_90;
  
  uVar23 = (ulonglong)param_1;
  iVar24 = 1;
  lVar22 = (longlong)((param_2 + 1) * param_1);
  iVar1 = param_1 * 5 + 1;
  iVar21 = param_1 * 4;
  if (3 < param_2) {
    iVar26 = param_2 * 2 + 2;
    iVar25 = param_1 * 7;
    iVar5 = param_2 * 3 - iVar26;
    iVar16 = iVar26 * param_1;
    iVar9 = param_2 - iVar26;
    iVar2 = param_2 * 4 - iVar26;
    uVar18 = (ulonglong)((uint)param_2 >> 2);
    iVar24 = ((uint)param_2 >> 2) * 4 + 1;
    do {
      lVar10 = (longlong)(param_1 * 2 + iVar25);
      fVar30 = param_3[((longlong)(param_1 * -2 + iVar25) + 1) - (longlong)iVar1] -
               param_3[lVar10 - iVar1];
      fVar29 = param_3[lVar10 - iVar1] +
               param_3[((longlong)(param_1 * -2 + iVar25) + 1) - (longlong)iVar1];
      fVar27 = param_3[(longlong)iVar25 - (longlong)iVar1] +
               param_3[(longlong)iVar25 - (longlong)iVar1];
      fVar28 = param_3[((longlong)iVar25 + 1) - (longlong)iVar1] +
               param_3[((longlong)iVar25 + 1) - (longlong)iVar1];
      param_4[((iVar9 + 1) * param_1 + iVar16) - lVar22] = fVar27 + fVar29;
      param_4[(iVar16 - param_1) - lVar22] = fVar30 - fVar28;
      param_4[((iVar5 + 1) * param_1 + iVar16) - lVar22] = fVar29 - fVar27;
      param_4[((iVar2 + 1) * param_1 + iVar16) - lVar22] = fVar28 + fVar30;
      lVar11 = (longlong)(param_1 * 6 + iVar25);
      fVar30 = param_3[(lVar10 + 1) - (longlong)iVar1] - param_3[lVar11 - iVar1];
      fVar29 = param_3[lVar11 - iVar1] + param_3[(lVar10 + 1) - (longlong)iVar1];
      fVar27 = param_3[(longlong)(iVar21 + iVar25) - (longlong)iVar1] +
               param_3[(longlong)(iVar21 + iVar25) - (longlong)iVar1];
      fVar28 = param_3[((longlong)(iVar21 + iVar25) + 1) - (longlong)iVar1] +
               param_3[((longlong)(iVar21 + iVar25) + 1) - (longlong)iVar1];
      param_4[(iVar16 + (iVar9 + 2) * param_1) - lVar22] = fVar27 + fVar29;
      param_4[iVar16 - lVar22] = fVar30 - fVar28;
      param_4[(iVar16 + (iVar5 + 2) * param_1) - lVar22] = fVar29 - fVar27;
      param_4[(iVar16 + (iVar2 + 2) * param_1) - lVar22] = fVar28 + fVar30;
      lVar12 = (longlong)(param_1 * 10 + iVar25);
      lVar10 = (longlong)(param_1 * 8 + iVar25);
      fVar30 = param_3[(lVar11 + 1) - (longlong)iVar1] - param_3[lVar12 - iVar1];
      fVar29 = param_3[lVar12 - iVar1] + param_3[(lVar11 + 1) - (longlong)iVar1];
      fVar27 = param_3[lVar10 - iVar1] + param_3[lVar10 - iVar1];
      fVar28 = param_3[(lVar10 + 1) - (longlong)iVar1] + param_3[(lVar10 + 1) - (longlong)iVar1];
      param_4[((iVar9 + 3) * param_1 + iVar16) - lVar22] = fVar27 + fVar29;
      param_4[(param_1 + iVar16) - lVar22] = fVar30 - fVar28;
      param_4[((iVar5 + 3) * param_1 + iVar16) - lVar22] = fVar29 - fVar27;
      iVar3 = param_1 * 0xe + iVar25;
      param_4[((iVar2 + 3) * param_1 + iVar16) - lVar22] = fVar30 + fVar28;
      iVar4 = param_1 * 0xc + iVar25;
      iVar25 = iVar25 + param_1 * 0x10;
      lVar10 = (longlong)iVar4;
      fVar30 = param_3[(lVar12 + 1) - (longlong)iVar1] - param_3[(longlong)iVar3 - (longlong)iVar1];
      fVar29 = param_3[(longlong)iVar3 - (longlong)iVar1] + param_3[(lVar12 + 1) - (longlong)iVar1];
      fVar27 = param_3[lVar10 - iVar1] + param_3[lVar10 - iVar1];
      fVar28 = param_3[(lVar10 + 1) - (longlong)iVar1] + param_3[(lVar10 + 1) - (longlong)iVar1];
      param_4[((iVar9 + 4) * param_1 + iVar16) - lVar22] = fVar27 + fVar29;
      iVar3 = (iVar5 + 4) * param_1 + iVar16;
      param_4[(iVar16 + ((param_2 * 2 + 4) - iVar26) * param_1) - lVar22] = fVar30 - fVar28;
      iVar4 = (iVar2 + 4) * param_1 + iVar16;
      iVar16 = iVar16 + iVar21;
      param_4[iVar3 - lVar22] = fVar29 - fVar27;
      param_4[iVar4 - lVar22] = fVar30 + fVar28;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (iVar24 <= param_2) {
    iVar26 = iVar24 * 4;
    pfVar17 = param_4 + ((param_2 * 4 + iVar24) * param_1 - lVar22);
    pfVar14 = param_4 + ((param_2 * 3 + iVar24) * param_1 - lVar22);
    pfVar15 = param_4 + ((param_2 * 2 + iVar24) * param_1 - lVar22);
    pfVar13 = param_4 + ((param_2 + iVar24) * param_1 - lVar22);
    pfVar20 = param_3 + ((longlong)((iVar26 + 3) * param_1) - (longlong)iVar1);
    pfVar8 = param_3 + ((longlong)((iVar26 + 5) * param_1) - (longlong)iVar1);
    uVar18 = (ulonglong)((param_2 - iVar24) + 1);
    pfVar6 = param_3 + (((longlong)((iVar26 + 1) * param_1) + 1) - (longlong)iVar1);
    do {
      fVar27 = *pfVar6;
      pfVar6 = pfVar6 + iVar21;
      fVar30 = fVar27 + *pfVar8;
      fVar27 = fVar27 - *pfVar8;
      fVar28 = *pfVar20 + *pfVar20;
      fVar29 = pfVar20[1] + pfVar20[1];
      pfVar8 = pfVar8 + iVar21;
      pfVar20 = pfVar20 + iVar21;
      *pfVar13 = fVar30 + fVar28;
      pfVar13 = pfVar13 + uVar23;
      *pfVar15 = fVar27 - fVar29;
      pfVar15 = pfVar15 + uVar23;
      *pfVar14 = fVar30 - fVar28;
      pfVar14 = pfVar14 + uVar23;
      *pfVar17 = fVar27 + fVar29;
      pfVar17 = pfVar17 + uVar23;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  iVar21 = param_1 * 4;
  if (1 < param_1) {
    if (param_1 != 2) {
      local_res20 = 1;
      uVar18 = uVar23;
      if (0 < param_2) {
        local_b4 = 7;
        iVar24 = param_1 * 7 + 3;
        do {
          if (2 < uVar23) {
            iVar26 = iVar24 + -4;
            lVar10 = (longlong)param_5 - (longlong)param_6;
            lVar11 = (longlong)param_7 - (longlong)param_6;
            iVar2 = (int)uVar18;
            local_90 = uVar23 - 1 >> 1;
            pfVar17 = param_6;
            iVar5 = iVar24;
            do {
              lVar19 = (longlong)(iVar2 * 2 + iVar26);
              lVar7 = (longlong)(iVar2 * -2 + iVar5);
              lVar12 = (longlong)iVar26;
              iVar26 = iVar26 + -2;
              fVar31 = param_3[(lVar7 + -1) - (longlong)iVar1] -
                       param_3[(lVar19 + -1) - (longlong)iVar1];
              fVar32 = param_3[(lVar19 + -1) - (longlong)iVar1] +
                       param_3[(lVar7 + -1) - (longlong)iVar1];
              fVar30 = param_3[(longlong)iVar5 - (longlong)iVar1] - param_3[lVar12 - iVar1];
              fVar35 = param_3[(longlong)iVar5 - (longlong)iVar1] + param_3[lVar12 - iVar1];
              fVar27 = param_3[((longlong)iVar5 + -1) - (longlong)iVar1] -
                       param_3[(lVar12 + -1) - (longlong)iVar1];
              fVar28 = param_3[((longlong)iVar5 + -1) - (longlong)iVar1] +
                       param_3[(lVar12 + -1) - (longlong)iVar1];
              fVar34 = param_3[lVar7 - iVar1] - param_3[lVar19 - iVar1];
              fVar36 = param_3[lVar7 - iVar1] + param_3[lVar19 - iVar1];
              lVar12 = (longlong)(((local_res20 - local_b4) + param_2) * iVar2 + iVar5);
              fVar33 = fVar32 - fVar28;
              fVar29 = fVar27 + fVar36;
              fVar36 = fVar36 - fVar27;
              param_4[(lVar12 + -2) - lVar22] = fVar28 + fVar32;
              fVar28 = fVar34 - fVar30;
              fVar27 = fVar31 - fVar35;
              fVar35 = fVar35 + fVar31;
              param_4[(lVar12 + -1) - lVar22] = fVar30 + fVar34;
              lVar12 = (longlong)(iVar5 + ((param_2 * 2 - local_b4) + local_res20) * iVar2);
              param_4[(lVar12 + -2) - lVar22] =
                   fVar27 * *(float *)((longlong)pfVar17 + lVar10) -
                   fVar29 * *(float *)((longlong)pfVar17 + lVar10 + 4);
              param_4[(lVar12 + -1) - lVar22] =
                   fVar27 * *(float *)((longlong)pfVar17 + lVar10 + 4) +
                   fVar29 * *(float *)((longlong)pfVar17 + lVar10);
              lVar12 = (longlong)(((param_2 * 3 - local_b4) + local_res20) * iVar2 + iVar5);
              iVar9 = ((param_2 * 4 - local_b4) + local_res20) * iVar2 + iVar5;
              iVar5 = iVar5 + 2;
              param_4[(lVar12 + -2) - lVar22] = fVar33 * *pfVar17 - fVar28 * pfVar17[1];
              param_4[(lVar12 + -1) - lVar22] = fVar33 * pfVar17[1] + fVar28 * *pfVar17;
              lVar12 = (longlong)iVar9;
              param_4[(lVar12 + -2) - lVar22] =
                   fVar35 * *(float *)(lVar11 + (longlong)pfVar17) -
                   fVar36 * *(float *)(lVar11 + 4 + (longlong)pfVar17);
              pfVar15 = (float *)(lVar11 + 4 + (longlong)pfVar17);
              pfVar14 = (float *)(lVar11 + (longlong)pfVar17);
              pfVar17 = pfVar17 + 2;
              local_90 = local_90 - 1;
              param_4[(lVar12 + -1) - lVar22] = fVar35 * *pfVar15 + fVar36 * *pfVar14;
            } while (local_90 != 0);
            uVar18 = (ulonglong)(uint)param_1;
          }
          local_res20 = local_res20 + 1;
          iVar24 = iVar24 + iVar21;
          local_b4 = local_b4 + 4;
        } while (local_res20 <= param_2);
        iVar21 = (int)uVar18 * 4;
      }
      param_1 = (int)uVar18;
      if ((uVar18 & 1) != 0) {
        return;
      }
    }
    fVar28 = __real_bfb504f3;
    fVar27 = __real_3fb504f3;
    iVar24 = 1;
    if (3 < param_2) {
      iVar26 = param_2 * 2 + 2;
      iVar9 = param_2 - iVar26;
      param_6._0_4_ = param_1 * 8;
      iVar5 = param_2 * 3 - iVar26;
      iVar16 = iVar26 * param_1;
      iVar25 = param_1 * 0x10;
      iVar2 = param_2 * 4 - iVar26;
      uVar23 = (ulonglong)((uint)param_2 >> 2);
      iVar24 = ((uint)param_2 >> 2) * 4 + 1;
      local_res8 = iVar25;
      do {
        lVar11 = (longlong)(int)param_6;
        lVar10 = (longlong)((int)param_6 + param_1 * -2);
        fVar30 = param_3[lVar10 - iVar1] - param_3[lVar11 - iVar1];
        fVar29 = param_3[lVar10 - iVar1] + param_3[lVar11 - iVar1];
        fVar32 = param_3[(lVar10 + 1) - (longlong)iVar1] + param_3[(lVar11 + 1) - (longlong)iVar1];
        fVar31 = param_3[(lVar11 + 1) - (longlong)iVar1] - param_3[(lVar10 + 1) - (longlong)iVar1];
        param_4[((longlong)(iVar16 + (iVar9 + 2) * param_1) + -1) - lVar22] = fVar29 + fVar29;
        param_4[((longlong)iVar16 + -1) - lVar22] = (fVar30 - fVar32) * fVar27;
        param_4[((longlong)(iVar16 + (iVar5 + 2) * param_1) + -1) - lVar22] = fVar31 + fVar31;
        lVar11 = (longlong)(local_res8 + param_1 * -4);
        param_4[((longlong)(iVar16 + (iVar2 + 2) * param_1) + -1) - lVar22] =
             fVar30 * fVar28 - fVar32 * fVar27;
        lVar10 = (longlong)((int)param_6 + param_1 * 2);
        fVar32 = param_3[(lVar10 + 1) - (longlong)iVar1] + param_3[(lVar11 + 1) - (longlong)iVar1];
        fVar31 = param_3[(lVar11 + 1) - (longlong)iVar1] - param_3[(lVar10 + 1) - (longlong)iVar1];
        fVar30 = param_3[lVar10 - iVar1] - param_3[lVar11 - iVar1];
        fVar29 = param_3[lVar11 - iVar1] + param_3[lVar10 - iVar1];
        param_4[((longlong)(iVar16 + (iVar9 + 3) * param_1) + -1) - lVar22] = fVar29 + fVar29;
        param_4[((longlong)(param_1 + iVar16) + -1) - lVar22] = (fVar30 - fVar32) * fVar27;
        param_4[((longlong)((iVar5 + 3) * param_1 + iVar16) + -1) - lVar22] = fVar31 + fVar31;
        param_4[((longlong)((iVar2 + 3) * param_1 + iVar16) + -1) - lVar22] =
             fVar30 * fVar28 - fVar32 * fVar27;
        lVar10 = (longlong)((int)param_6 + param_1 * 6);
        fVar32 = param_3[((longlong)local_res8 + 1) - (longlong)iVar1] +
                 param_3[(lVar10 + 1) - (longlong)iVar1];
        fVar31 = param_3[((longlong)local_res8 + 1) - (longlong)iVar1] -
                 param_3[(lVar10 + 1) - (longlong)iVar1];
        fVar30 = param_3[lVar10 - iVar1] - param_3[(longlong)local_res8 - (longlong)iVar1];
        fVar29 = param_3[(longlong)local_res8 - (longlong)iVar1] + param_3[lVar10 - iVar1];
        param_4[((longlong)((iVar9 + 4) * param_1 + iVar16) + -1) - lVar22] = fVar29 + fVar29;
        param_4[((longlong)(iVar16 + ((param_2 * 2 + 4) - iVar26) * param_1) + -1) - lVar22] =
             (fVar30 - fVar32) * fVar27;
        param_4[((longlong)((iVar5 + 4) * param_1 + iVar16) + -1) - lVar22] = fVar31 + fVar31;
        param_4[((longlong)((iVar2 + 4) * param_1 + iVar16) + -1) - lVar22] =
             fVar30 * fVar28 - fVar32 * fVar27;
        lVar10 = (longlong)((int)param_6 + param_1 * 10);
        fVar32 = param_3[(lVar10 + 1) - (longlong)iVar1] +
                 param_3[((longlong)(local_res8 + iVar21) + 1) - (longlong)iVar1];
        fVar31 = param_3[((longlong)(local_res8 + iVar21) + 1) - (longlong)iVar1] -
                 param_3[(lVar10 + 1) - (longlong)iVar1];
        fVar30 = param_3[lVar10 - iVar1] -
                 param_3[(longlong)(local_res8 + iVar21) - (longlong)iVar1];
        fVar29 = param_3[(longlong)(local_res8 + iVar21) - (longlong)iVar1] +
                 param_3[lVar10 - iVar1];
        param_4[((longlong)((iVar9 + 5) * param_1 + iVar16) + -1) - lVar22] = fVar29 + fVar29;
        iVar3 = (iVar5 + 5) * param_1 + iVar16;
        param_4[((longlong)(param_1 * 3 + iVar16) + -1) - lVar22] = (fVar30 - fVar32) * fVar27;
        iVar4 = (iVar2 + 5) * param_1 + iVar16;
        iVar16 = iVar16 + iVar21;
        param_4[((longlong)iVar3 + -1) - lVar22] = fVar31 + fVar31;
        param_6._0_4_ = (int)param_6 + iVar25;
        param_4[((longlong)iVar4 + -1) - lVar22] = fVar30 * fVar28 - fVar32 * fVar27;
        uVar23 = uVar23 - 1;
        local_res8 = local_res8 + iVar25;
      } while (uVar23 != 0);
      iVar21 = param_1 * 4;
    }
    if (iVar24 <= param_2) {
      pfVar17 = param_4 + (((longlong)((param_2 * 4 + 1 + iVar24) * param_1) + -1) - lVar22);
      pfVar14 = param_4 + (((longlong)((param_2 * 3 + 1 + iVar24) * param_1) + -1) - lVar22);
      pfVar15 = param_4 + (((longlong)((param_2 * 2 + 1 + iVar24) * param_1) + -1) - lVar22);
      pfVar13 = param_4 + (((longlong)((param_2 + 1 + iVar24) * param_1) + -1) - lVar22);
      pfVar20 = param_3 + ((longlong)((iVar24 * 4 + 4) * param_1) - (longlong)iVar1);
      pfVar8 = param_3 + ((longlong)((iVar24 * 4 + 2) * param_1) - (longlong)iVar1);
      uVar23 = (ulonglong)((param_2 - iVar24) + 1);
      do {
        fVar29 = *pfVar8;
        fVar33 = pfVar8[1] + pfVar20[1];
        fVar32 = pfVar20[1] - pfVar8[1];
        fVar30 = *pfVar20;
        pfVar8 = pfVar8 + iVar21;
        fVar31 = fVar29 - fVar30;
        pfVar20 = pfVar20 + iVar21;
        fVar30 = fVar30 + fVar29;
        *pfVar13 = fVar30 + fVar30;
        pfVar13 = pfVar13 + param_1;
        *pfVar15 = (fVar31 - fVar33) * fVar27;
        pfVar15 = pfVar15 + param_1;
        *pfVar14 = fVar32 + fVar32;
        pfVar14 = pfVar14 + param_1;
        *pfVar17 = fVar31 * fVar28 - fVar33 * fVar27;
        pfVar17 = pfVar17 + param_1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  return;
}

// radb4_ps @ 14f058580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
radb4_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6,
        float *param_7)

{
  __m128 *p_Var1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  __m128 *p_Var6;
  float *pfVar7;
  __m128 *p_Var8;
  longlong lVar9;
  longlong lVar10;
  __m128 *p_Var11;
  ulonglong uVar12;
  __m128 *p_Var13;
  __m128 *p_Var14;
  longlong lVar15;
  int iVar16;
  float *pfVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  int local_res18;
  
  lVar15 = (longlong)param_1;
  iVar16 = param_1 * param_2;
  lVar10 = (longlong)iVar16;
  p_Var8 = param_4 + lVar10;
  if (param_4 < p_Var8) {
    iVar4 = param_1 * 4;
    p_Var14 = param_3 + lVar15 * 2 + -1;
    p_Var11 = param_3 + lVar15 * 4 + -1;
    p_Var6 = p_Var8;
    p_Var13 = param_3;
    do {
      fVar23 = p_Var13->m128_f32[0] + p_Var11->m128_f32[0];
      fVar24 = p_Var13->m128_f32[1] + p_Var11->m128_f32[1];
      fVar25 = p_Var13->m128_f32[2] + p_Var11->m128_f32[2];
      fVar26 = p_Var13->m128_f32[3] + p_Var11->m128_f32[3];
      fVar31 = p_Var13->m128_f32[0] - p_Var11->m128_f32[0];
      fVar32 = p_Var13->m128_f32[1] - p_Var11->m128_f32[1];
      fVar33 = p_Var13->m128_f32[2] - p_Var11->m128_f32[2];
      fVar34 = p_Var13->m128_f32[3] - p_Var11->m128_f32[3];
      p_Var1 = p_Var13 + lVar15 * 2;
      fVar27 = p_Var14->m128_f32[0] + p_Var14->m128_f32[0];
      fVar28 = p_Var14->m128_f32[1] + p_Var14->m128_f32[1];
      fVar29 = p_Var14->m128_f32[2] + p_Var14->m128_f32[2];
      fVar30 = p_Var14->m128_f32[3] + p_Var14->m128_f32[3];
      fVar19 = p_Var1->m128_f32[0] + p_Var1->m128_f32[0];
      fVar20 = p_Var1->m128_f32[1] + p_Var1->m128_f32[1];
      fVar21 = p_Var1->m128_f32[2] + p_Var1->m128_f32[2];
      fVar22 = p_Var1->m128_f32[3] + p_Var1->m128_f32[3];
      p_Var13 = p_Var13 + iVar4;
      p_Var11 = p_Var11 + iVar4;
      p_Var14 = p_Var14 + iVar4;
      p_Var1 = p_Var6 + -lVar10;
      p_Var1->m128_f32[0] = fVar23 + fVar27;
      p_Var1->m128_f32[1] = fVar24 + fVar28;
      p_Var1->m128_f32[2] = fVar25 + fVar29;
      p_Var1->m128_f32[3] = fVar26 + fVar30;
      p_Var1 = p_Var6 + lVar10;
      p_Var1->m128_f32[0] = fVar23 - fVar27;
      p_Var1->m128_f32[1] = fVar24 - fVar28;
      p_Var1->m128_f32[2] = fVar25 - fVar29;
      p_Var1->m128_f32[3] = fVar26 - fVar30;
      p_Var6->m128_f32[0] = fVar31 - fVar19;
      p_Var6->m128_f32[1] = fVar32 - fVar20;
      p_Var6->m128_f32[2] = fVar33 - fVar21;
      p_Var6->m128_f32[3] = fVar34 - fVar22;
      p_Var1 = p_Var6 + lVar10 * 2;
      p_Var1->m128_f32[0] = fVar31 + fVar19;
      p_Var1->m128_f32[1] = fVar32 + fVar20;
      p_Var1->m128_f32[2] = fVar33 + fVar21;
      p_Var1->m128_f32[3] = fVar34 + fVar22;
      p_Var6 = p_Var6 + lVar15;
    } while (p_Var6 + -lVar10 < p_Var8);
  }
  if (1 < param_1) {
    if (param_1 != 2) {
      local_res18 = 0;
      if (0 < iVar16) {
        lVar18 = lVar15 << 5;
        p_Var8 = param_3;
        do {
          lVar9 = (longlong)param_1;
          p_Var6 = param_4 + (longlong)local_res18 + 1;
          if (2 < param_1) {
            pfVar7 = (float *)(p_Var8->m128_i8 + lVar15 * 0x40 + -0x20);
            uVar12 = (ulonglong)((param_1 - 3U >> 1) + 1);
            pfVar5 = (float *)(p_Var8->m128_i8 + lVar9 * 0x20 + 0x10);
            pfVar17 = param_5;
            do {
              pfVar2 = pfVar5 + lVar9 * -8;
              pfVar3 = (float *)(p_Var8->m128_i8 + (-(longlong)param_3 - lVar18) + -0x10 +
                                (longlong)pfVar7);
              fVar29 = *pfVar5 - *pfVar3;
              fVar30 = pfVar5[1] - pfVar3[1];
              fVar31 = pfVar5[2] - pfVar3[2];
              fVar32 = pfVar5[3] - pfVar3[3];
              pfVar3 = (float *)(p_Var8->m128_i8 + (-(longlong)param_3 - lVar18) + -0x10 +
                                (longlong)pfVar7);
              fVar19 = *pfVar5 + *pfVar3;
              fVar20 = pfVar5[1] + pfVar3[1];
              fVar21 = pfVar5[2] + pfVar3[2];
              fVar22 = pfVar5[3] + pfVar3[3];
              fVar25 = *pfVar2 - pfVar7[-4];
              fVar26 = pfVar2[1] - pfVar7[-3];
              fVar27 = pfVar2[2] - pfVar7[-2];
              fVar28 = pfVar2[3] - pfVar7[-1];
              fVar23 = *pfVar2 + pfVar7[-4];
              fVar24 = pfVar2[1] + pfVar7[-3];
              fVar33 = pfVar2[2] + pfVar7[-2];
              fVar34 = pfVar2[3] + pfVar7[-1];
              fVar49 = fVar23 - fVar19;
              fVar50 = fVar24 - fVar20;
              fVar51 = fVar33 - fVar21;
              fVar52 = fVar34 - fVar22;
              p_Var6->m128_f32[0] = fVar19 + fVar23;
              p_Var6->m128_f32[1] = fVar20 + fVar24;
              p_Var6->m128_f32[2] = fVar21 + fVar33;
              p_Var6->m128_f32[3] = fVar22 + fVar34;
              pfVar2 = pfVar7 + lVar9 * -8;
              fVar21 = pfVar5[4] - *pfVar2;
              fVar22 = pfVar5[5] - pfVar2[1];
              fVar23 = pfVar5[6] - pfVar2[2];
              fVar24 = pfVar5[7] - pfVar2[3];
              pfVar2 = pfVar7 + lVar9 * -8;
              fVar45 = pfVar5[4] + *pfVar2;
              fVar46 = pfVar5[5] + pfVar2[1];
              fVar47 = pfVar5[6] + pfVar2[2];
              fVar48 = pfVar5[7] + pfVar2[3];
              fVar41 = *pfVar7 + pfVar5[lVar9 * -8 + 4];
              fVar42 = pfVar7[1] + pfVar5[lVar9 * -8 + 5];
              fVar43 = pfVar7[2] + pfVar5[lVar9 * -8 + 6];
              fVar44 = pfVar7[3] + pfVar5[lVar9 * -8 + 7];
              fVar37 = pfVar5[lVar9 * -8 + 4] - *pfVar7;
              fVar38 = pfVar5[lVar9 * -8 + 5] - pfVar7[1];
              fVar39 = pfVar5[lVar9 * -8 + 6] - pfVar7[2];
              fVar40 = pfVar5[lVar9 * -8 + 7] - pfVar7[3];
              fVar33 = fVar25 - fVar45;
              fVar34 = fVar26 - fVar46;
              fVar35 = fVar27 - fVar47;
              fVar36 = fVar28 - fVar48;
              fVar45 = fVar45 + fVar25;
              fVar46 = fVar46 + fVar26;
              fVar47 = fVar47 + fVar27;
              fVar48 = fVar48 + fVar28;
              fVar19 = pfVar17[1];
              fVar25 = fVar29 + fVar41;
              fVar26 = fVar30 + fVar42;
              fVar27 = fVar31 + fVar43;
              fVar28 = fVar32 + fVar44;
              fVar41 = fVar41 - fVar29;
              fVar42 = fVar42 - fVar30;
              fVar43 = fVar43 - fVar31;
              fVar44 = fVar44 - fVar32;
              fVar20 = *pfVar17;
              fVar29 = fVar37 - fVar21;
              fVar30 = fVar38 - fVar22;
              fVar31 = fVar39 - fVar23;
              fVar32 = fVar40 - fVar24;
              p_Var6[1].m128_f32[0] = fVar21 + fVar37;
              *(float *)((longlong)p_Var6 + 0x14) = fVar22 + fVar38;
              *(float *)((longlong)p_Var6 + 0x18) = fVar23 + fVar39;
              *(float *)((longlong)p_Var6 + 0x1c) = fVar24 + fVar40;
              p_Var6 = p_Var6 + lVar10;
              fVar21 = *(float *)(((longlong)param_6 - (longlong)param_5) + 4 + (longlong)pfVar17);
              p_Var6[1].m128_f32[0] = fVar20 * fVar25 + fVar19 * fVar33;
              *(float *)((longlong)p_Var6 + 0x14) = fVar20 * fVar26 + fVar19 * fVar34;
              *(float *)((longlong)p_Var6 + 0x18) = fVar20 * fVar27 + fVar19 * fVar35;
              *(float *)((longlong)p_Var6 + 0x1c) = fVar20 * fVar28 + fVar19 * fVar36;
              fVar22 = *(float *)(((longlong)param_6 - (longlong)param_5) + (longlong)pfVar17);
              p_Var6->m128_f32[0] = fVar20 * fVar33 - fVar19 * fVar25;
              p_Var6->m128_f32[1] = fVar20 * fVar34 - fVar19 * fVar26;
              p_Var6->m128_f32[2] = fVar20 * fVar35 - fVar19 * fVar27;
              p_Var6->m128_f32[3] = fVar20 * fVar36 - fVar19 * fVar28;
              p_Var6 = p_Var6 + lVar10;
              p_Var13 = p_Var6 + lVar10;
              fVar19 = *(float *)((longlong)pfVar17 + ((longlong)param_7 - (longlong)param_5) + 4);
              p_Var6[1].m128_f32[0] = fVar22 * fVar29 + fVar21 * fVar49;
              *(float *)((longlong)p_Var6 + 0x14) = fVar22 * fVar30 + fVar21 * fVar50;
              *(float *)((longlong)p_Var6 + 0x18) = fVar22 * fVar31 + fVar21 * fVar51;
              *(float *)((longlong)p_Var6 + 0x1c) = fVar22 * fVar32 + fVar21 * fVar52;
              fVar20 = *(float *)((longlong)pfVar17 + ((longlong)param_7 - (longlong)param_5));
              pfVar17 = pfVar17 + 2;
              p_Var6->m128_f32[0] = fVar22 * fVar49 - fVar21 * fVar29;
              p_Var6->m128_f32[1] = fVar22 * fVar50 - fVar21 * fVar30;
              p_Var6->m128_f32[2] = fVar22 * fVar51 - fVar21 * fVar31;
              p_Var6->m128_f32[3] = fVar22 * fVar52 - fVar21 * fVar32;
              pfVar7 = pfVar7 + -8;
              p_Var6 = p_Var13 + (2 - (longlong)(iVar16 * 3));
              p_Var13->m128_f32[0] = fVar20 * fVar45 - fVar19 * fVar41;
              p_Var13->m128_f32[1] = fVar20 * fVar46 - fVar19 * fVar42;
              p_Var13->m128_f32[2] = fVar20 * fVar47 - fVar19 * fVar43;
              p_Var13->m128_f32[3] = fVar20 * fVar48 - fVar19 * fVar44;
              p_Var13[1].m128_f32[0] = fVar20 * fVar41 + fVar19 * fVar45;
              *(float *)((longlong)p_Var13 + 0x14) = fVar20 * fVar42 + fVar19 * fVar46;
              *(float *)((longlong)p_Var13 + 0x18) = fVar20 * fVar43 + fVar19 * fVar47;
              *(float *)((longlong)p_Var13 + 0x1c) = fVar20 * fVar44 + fVar19 * fVar48;
              uVar12 = uVar12 - 1;
              pfVar5 = pfVar5 + 8;
            } while (uVar12 != 0);
          }
          local_res18 = local_res18 + param_1;
          p_Var8 = p_Var8 + lVar15 * 4;
          lVar18 = lVar18 + lVar15 * 0x40;
        } while (local_res18 < iVar16);
      }
      if ((param_1 & 1U) != 0) {
        return;
      }
    }
    fVar22 = _UNK_1530ea56c;
    fVar21 = _UNK_1530ea568;
    fVar20 = _UNK_1530ea564;
    fVar19 = ___xmm_bfb504f3bfb504f3bfb504f3bfb504f3;
    lVar15 = (longlong)param_1;
    lVar18 = 0;
    if (0 < lVar10) {
      p_Var8 = param_4 + lVar15 + lVar10 * 2 + -1;
      pfVar5 = (float *)(param_3->m128_i8 + lVar15 * 0x10 + -0x10);
      do {
        pfVar7 = pfVar5 + lVar15 * 8 + 4;
        lVar18 = lVar18 + lVar15;
        pfVar17 = pfVar5 + lVar15 * 8;
        fVar27 = pfVar5[4] + *pfVar7;
        fVar28 = pfVar5[5] + pfVar7[1];
        fVar29 = pfVar5[6] + pfVar7[2];
        fVar30 = pfVar5[7] + pfVar7[3];
        fVar35 = *pfVar7 - pfVar5[4];
        fVar36 = pfVar7[1] - pfVar5[5];
        fVar37 = pfVar7[2] - pfVar5[6];
        fVar38 = pfVar7[3] - pfVar5[7];
        fVar31 = *pfVar5 - *pfVar17;
        fVar32 = pfVar5[1] - pfVar17[1];
        fVar33 = pfVar5[2] - pfVar17[2];
        fVar34 = pfVar5[3] - pfVar17[3];
        fVar23 = *pfVar17 + *pfVar5;
        fVar24 = pfVar17[1] + pfVar5[1];
        fVar25 = pfVar17[2] + pfVar5[2];
        fVar26 = pfVar17[3] + pfVar5[3];
        pfVar5 = pfVar5 + lVar15 * 0x10;
        p_Var6 = p_Var8 + lVar10 * -2;
        p_Var6->m128_f32[0] = fVar23 + fVar23;
        p_Var6->m128_f32[1] = fVar24 + fVar24;
        p_Var6->m128_f32[2] = fVar25 + fVar25;
        p_Var6->m128_f32[3] = fVar26 + fVar26;
        p_Var6 = p_Var8 + -lVar10;
        p_Var6->m128_f32[0] = (fVar27 - fVar31) * fVar19;
        p_Var6->m128_f32[1] = (fVar28 - fVar32) * fVar20;
        p_Var6->m128_f32[2] = (fVar29 - fVar33) * fVar21;
        p_Var6->m128_f32[3] = (fVar30 - fVar34) * fVar22;
        p_Var8->m128_f32[0] = fVar35 + fVar35;
        p_Var8->m128_f32[1] = fVar36 + fVar36;
        p_Var8->m128_f32[2] = fVar37 + fVar37;
        p_Var8->m128_f32[3] = fVar38 + fVar38;
        p_Var6 = p_Var8 + lVar10;
        p_Var6->m128_f32[0] = (fVar27 + fVar31) * fVar19;
        p_Var6->m128_f32[1] = (fVar28 + fVar32) * fVar20;
        p_Var6->m128_f32[2] = (fVar29 + fVar33) * fVar21;
        p_Var6->m128_f32[3] = (fVar30 + fVar34) * fVar22;
        p_Var8 = p_Var8 + lVar15;
      } while (lVar18 < lVar10);
    }
  }
  return;
}

// radb5 @ 14f0589f0

void __cdecl
radb5(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
     float *param_7,float *param_8)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  int iVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_130;
  int local_128;
  ulonglong local_120;
  
  fVar23 = __real_3ff37871;
  fVar22 = __real_3fcf1bbd;
  fVar4 = __real_3f967918;
  fVar3 = __real_3f1e377a;
  uVar20 = (ulonglong)param_1;
  lVar7 = (longlong)(param_1 * 6);
  lVar15 = (longlong)((param_2 + 1) * param_1);
  if (0 < param_2) {
    lVar8 = (longlong)(param_1 * 6);
    lVar13 = (longlong)((param_2 * 2 + 1) * param_1);
    pfVar18 = param_3 + (lVar8 - lVar7);
    pfVar16 = param_4 + (lVar13 - lVar15);
    uVar9 = (ulonglong)(uint)param_2;
    do {
      fVar21 = pfVar18[(param_1 * 8 - lVar8) + -1];
      pfVar2 = pfVar18 + (param_1 * 10 - lVar8);
      fVar24 = pfVar2[-1];
      fVar26 = pfVar2[(longlong)(param_1 * 8) - (longlong)(param_1 * 10)];
      fVar27 = *pfVar2;
      pfVar16[lVar15 - lVar13] = fVar24 + fVar24 + fVar21 + fVar21 + *pfVar18;
      fVar28 = *pfVar18;
      pfVar18 = pfVar18 + param_1 * 5;
      fVar25 = (fVar21 * fVar3 + fVar28) - fVar24 * fVar22;
      fVar24 = (fVar28 - fVar21 * fVar22) + fVar24 * fVar3;
      fVar21 = fVar26 * fVar23 + fVar27 * fVar4;
      fVar26 = fVar26 * fVar4 - fVar27 * fVar23;
      *pfVar16 = fVar25 - fVar21;
      pfVar16[(param_2 * 3 + 1) * param_1 - lVar13] = fVar24 - fVar26;
      pfVar16[(param_2 * 4 + 1) * param_1 - lVar13] = fVar26 + fVar24;
      pfVar16[(param_2 * 5 + 1) * param_1 - lVar13] = fVar21 + fVar25;
      pfVar16 = pfVar16 + uVar20;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  fVar4 = __real_3f4f1bbd;
  fVar3 = __real_3e9e377a;
  if ((param_1 != 1) && (local_130 = 1, 0 < param_2)) {
    iVar6 = param_1 * 10 + 3;
    local_128 = 10;
    uVar9 = uVar20;
    do {
      if (2 < (longlong)uVar20) {
        iVar5 = iVar6 + -4;
        pfVar16 = param_5 + 1;
        lVar8 = (longlong)param_7 - (longlong)param_5;
        lVar10 = (longlong)param_6 - (longlong)param_5;
        iVar19 = (int)uVar9;
        lVar13 = (longlong)param_8 - (longlong)param_5;
        local_120 = uVar20 - 1 >> 1;
        iVar12 = iVar6;
        do {
          lVar17 = (longlong)(iVar5 + iVar19 * -2);
          lVar14 = (longlong)iVar5;
          lVar11 = (longlong)(iVar12 + iVar19 * -2);
          fVar30 = param_3[(lVar11 + -2) - lVar7] - param_3[(lVar17 + -2) - lVar7];
          fVar23 = param_3[(lVar17 + -2) - lVar7] + param_3[(lVar11 + -2) - lVar7];
          fVar28 = param_3[(lVar11 + -1) - lVar7] - param_3[(lVar17 + -1) - lVar7];
          fVar32 = param_3[(lVar11 + -1) - lVar7] + param_3[(lVar17 + -1) - lVar7];
          fVar21 = param_3[((longlong)iVar12 + -1) - lVar7] - param_3[(lVar14 + -1) - lVar7];
          fVar25 = param_3[((longlong)iVar12 + -1) - lVar7] + param_3[(lVar14 + -1) - lVar7];
          fVar22 = param_3[((longlong)iVar12 + -2) - lVar7] + param_3[(lVar14 + -2) - lVar7];
          fVar27 = param_3[((longlong)iVar12 + -2) - lVar7] - param_3[(lVar14 + -2) - lVar7];
          lVar14 = (longlong)(iVar12 + iVar19 * -4);
          lVar11 = (longlong)(iVar12 + ((local_130 - local_128) + param_2) * iVar19);
          param_4[(lVar11 + -2) - lVar15] = fVar23 + param_3[(lVar14 + -2) - lVar7] + fVar22;
          param_4[(lVar11 + -1) - lVar15] = fVar28 + param_3[(lVar14 + -1) - lVar7] + fVar21;
          fVar29 = (fVar23 * fVar3 + param_3[(lVar14 + -2) - lVar7]) - fVar22 * fVar4;
          fVar24 = (param_3[(lVar14 + -2) - lVar7] - fVar23 * fVar4) + fVar22 * fVar3;
          fVar26 = (fVar28 * fVar3 + param_3[(lVar14 + -1) - lVar7]) - fVar21 * fVar4;
          fVar31 = (param_3[(lVar14 + -1) - lVar7] - fVar28 * fVar4) + fVar21 * fVar3;
          fVar21 = fVar30 * __real_3f737871 + fVar27 * __real_3f167918;
          fVar28 = fVar30 * __real_3f167918 - fVar27 * __real_3f737871;
          fVar22 = fVar32 * __real_3f737871 + fVar25 * __real_3f167918;
          fVar25 = fVar32 * __real_3f167918 - fVar25 * __real_3f737871;
          fVar23 = fVar24 - fVar25;
          fVar25 = fVar25 + fVar24;
          fVar27 = fVar22 + fVar29;
          fVar29 = fVar29 - fVar22;
          fVar22 = fVar28 + fVar31;
          fVar24 = fVar26 - fVar21;
          lVar11 = (longlong)(iVar12 + ((param_2 * 2 - local_128) + local_130) * iVar19);
          fVar21 = fVar21 + fVar26;
          fVar31 = fVar31 - fVar28;
          param_4[(lVar11 + -2) - lVar15] = fVar29 * pfVar16[-1] - fVar21 * *pfVar16;
          param_4[(lVar11 + -1) - lVar15] = fVar29 * *pfVar16 + fVar21 * pfVar16[-1];
          lVar11 = (longlong)(iVar12 + ((param_2 * 3 - local_128) + local_130) * iVar19);
          param_4[(lVar11 + -2) - lVar15] =
               fVar23 * *(float *)(lVar10 + -4 + (longlong)pfVar16) -
               fVar22 * *(float *)(lVar10 + (longlong)pfVar16);
          param_4[(lVar11 + -1) - lVar15] =
               fVar22 * *(float *)(lVar10 + -4 + (longlong)pfVar16) +
               fVar23 * *(float *)(lVar10 + (longlong)pfVar16);
          lVar11 = (longlong)(iVar12 + ((param_2 * 4 - local_128) + local_130) * iVar19);
          iVar1 = iVar12 + ((param_2 * 5 - local_128) + local_130) * iVar19;
          iVar12 = iVar12 + 2;
          param_4[(lVar11 + -2) - lVar15] =
               fVar25 * *(float *)(lVar8 + -4 + (longlong)pfVar16) -
               fVar31 * *(float *)(lVar8 + (longlong)pfVar16);
          param_4[(lVar11 + -1) - lVar15] =
               fVar31 * *(float *)(lVar8 + -4 + (longlong)pfVar16) +
               fVar25 * *(float *)(lVar8 + (longlong)pfVar16);
          lVar11 = (longlong)iVar1;
          iVar5 = iVar5 + -2;
          param_4[(lVar11 + -2) - lVar15] =
               fVar27 * *(float *)(lVar13 + -4 + (longlong)pfVar16) -
               fVar24 * *(float *)(lVar13 + (longlong)pfVar16);
          pfVar2 = (float *)(lVar13 + -4 + (longlong)pfVar16);
          pfVar18 = (float *)(lVar13 + (longlong)pfVar16);
          pfVar16 = pfVar16 + 2;
          local_120 = local_120 - 1;
          param_4[(lVar11 + -1) - lVar15] = fVar24 * *pfVar2 + fVar27 * *pfVar18;
        } while (local_120 != 0);
        uVar9 = (ulonglong)(uint)param_1;
      }
      local_130 = local_130 + 1;
      iVar6 = iVar6 + param_1 * 5;
      local_128 = local_128 + 5;
    } while (local_130 <= param_2);
  }
  return;
}

// radb5_ps @ 14f0590f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
radb5_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6,
        float *param_7,float *param_8)

{
  float *pfVar1;
  __m128 *p_Var2;
  float *pfVar3;
  __m128 *p_Var4;
  __m128 *p_Var5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  __m128 *p_Var14;
  int iVar15;
  __m128 *p_Var16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  int local_150;
  int local_148;
  float *local_138;
  ulonglong local_130;
  
  fVar41 = _UNK_1530ea55c;
  fVar39 = _UNK_1530ea558;
  fVar37 = _UNK_1530ea554;
  fVar35 = ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd;
  fVar34 = _UNK_1530ea52c;
  fVar31 = _UNK_1530ea528;
  fVar28 = _UNK_1530ea524;
  fVar6 = ___xmm_3f7378713f7378713f7378713f737871;
  fVar22 = _UNK_1530ea50c;
  fVar21 = _UNK_1530ea508;
  fVar20 = _UNK_1530ea504;
  fVar69 = ___xmm_3f1679183f1679183f1679183f167918;
  fVar25 = _UNK_1530ea4fc;
  fVar66 = _UNK_1530ea4f8;
  fVar64 = _UNK_1530ea4f4;
  fVar62 = ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
  uVar19 = (ulonglong)param_1;
  lVar8 = (longlong)(param_1 * 6);
  lVar12 = (longlong)((param_2 + 1) * param_1);
  if (0 < param_2) {
    lVar9 = (longlong)(param_1 * 6);
    lVar10 = (longlong)((param_2 * 2 + 1) * param_1);
    p_Var14 = param_4 + (lVar10 - lVar12);
    p_Var16 = param_3 + (lVar9 - lVar8);
    uVar11 = (ulonglong)(uint)param_2;
    do {
      pfVar3 = p_Var16->m128_f32 + (param_1 * 8 - lVar9) * 4 + -4;
      pfVar1 = p_Var16->m128_f32 + (param_1 * 10 - lVar9) * 4;
      fVar23 = *pfVar3 + *pfVar3;
      fVar26 = pfVar3[1] + pfVar3[1];
      fVar29 = pfVar3[2] + pfVar3[2];
      fVar32 = pfVar3[3] + pfVar3[3];
      pfVar3 = pfVar1 + ((longlong)(param_1 * 8) - (longlong)(param_1 * 10)) * 4;
      fVar54 = pfVar1[-4] + pfVar1[-4];
      fVar55 = pfVar1[-3] + pfVar1[-3];
      fVar56 = pfVar1[-2] + pfVar1[-2];
      fVar57 = pfVar1[-1] + pfVar1[-1];
      fVar50 = *pfVar3 + *pfVar3;
      fVar51 = pfVar3[1] + pfVar3[1];
      fVar52 = pfVar3[2] + pfVar3[2];
      fVar53 = pfVar3[3] + pfVar3[3];
      fVar42 = *pfVar1 + *pfVar1;
      fVar43 = pfVar1[1] + pfVar1[1];
      fVar44 = pfVar1[2] + pfVar1[2];
      fVar45 = pfVar1[3] + pfVar1[3];
      fVar24 = p_Var16->m128_f32[1];
      fVar27 = p_Var16->m128_f32[2];
      fVar30 = p_Var16->m128_f32[3];
      p_Var2 = p_Var14 + (lVar12 - lVar10);
      p_Var2->m128_f32[0] = fVar54 + fVar23 + p_Var16->m128_f32[0];
      p_Var2->m128_f32[1] = fVar55 + fVar26 + fVar24;
      p_Var2->m128_f32[2] = fVar56 + fVar29 + fVar27;
      p_Var2->m128_f32[3] = fVar57 + fVar32 + fVar30;
      fVar46 = fVar54 * fVar35 + fVar23 * fVar62 + p_Var16->m128_f32[0];
      fVar47 = fVar55 * fVar37 + fVar26 * fVar64 + p_Var16->m128_f32[1];
      fVar48 = fVar56 * fVar39 + fVar29 * fVar66 + p_Var16->m128_f32[2];
      fVar49 = fVar57 * fVar41 + fVar32 * fVar25 + p_Var16->m128_f32[3];
      fVar33 = fVar69 * fVar42 + fVar6 * fVar50;
      fVar36 = fVar20 * fVar43 + fVar28 * fVar51;
      fVar38 = fVar21 * fVar44 + fVar31 * fVar52;
      fVar40 = fVar22 * fVar45 + fVar34 * fVar53;
      fVar54 = fVar54 * fVar62 + fVar23 * fVar35 + p_Var16->m128_f32[0];
      fVar26 = fVar55 * fVar64 + fVar26 * fVar37 + p_Var16->m128_f32[1];
      fVar29 = fVar56 * fVar66 + fVar29 * fVar39 + p_Var16->m128_f32[2];
      fVar32 = fVar57 * fVar25 + fVar32 * fVar41 + p_Var16->m128_f32[3];
      p_Var16 = (__m128 *)(p_Var16->m128_f32 + (longlong)(param_1 * 5) * 4);
      fVar24 = fVar69 * fVar50 - fVar6 * fVar42;
      fVar27 = fVar20 * fVar51 - fVar28 * fVar43;
      fVar30 = fVar21 * fVar52 - fVar31 * fVar44;
      fVar23 = fVar22 * fVar53 - fVar34 * fVar45;
      p_Var14->m128_f32[0] = fVar46 - fVar33;
      p_Var14->m128_f32[1] = fVar47 - fVar36;
      p_Var14->m128_f32[2] = fVar48 - fVar38;
      p_Var14->m128_f32[3] = fVar49 - fVar40;
      p_Var2 = p_Var14 + ((param_2 * 3 + 1) * param_1 - lVar10);
      p_Var2->m128_f32[0] = fVar54 - fVar24;
      p_Var2->m128_f32[1] = fVar26 - fVar27;
      p_Var2->m128_f32[2] = fVar29 - fVar30;
      p_Var2->m128_f32[3] = fVar32 - fVar23;
      p_Var2 = p_Var14 + ((param_2 * 4 + 1) * param_1 - lVar10);
      p_Var2->m128_f32[0] = fVar54 + fVar24;
      p_Var2->m128_f32[1] = fVar26 + fVar27;
      p_Var2->m128_f32[2] = fVar29 + fVar30;
      p_Var2->m128_f32[3] = fVar32 + fVar23;
      p_Var2 = p_Var14 + ((param_2 * 5 + 1) * param_1 - lVar10);
      p_Var2->m128_f32[0] = fVar46 + fVar33;
      p_Var2->m128_f32[1] = fVar47 + fVar36;
      p_Var2->m128_f32[2] = fVar48 + fVar38;
      p_Var2->m128_f32[3] = fVar49 + fVar40;
      p_Var14 = p_Var14 + uVar19;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if ((param_1 != 1) && (local_150 = 1, 0 < param_2)) {
    iVar7 = param_1 * 10 + 3;
    local_148 = 10;
    uVar11 = uVar19;
    do {
      if (2 < (longlong)uVar19) {
        iVar15 = iVar7 + -4;
        local_138 = param_5;
        iVar18 = (int)uVar11;
        local_130 = uVar19 - 1 >> 1;
        iVar13 = iVar7;
        do {
          lVar9 = (longlong)iVar15;
          lVar17 = (longlong)(iVar15 + iVar18 * -2);
          p_Var14 = param_3 + ((lVar17 + -1) - lVar8);
          lVar10 = (longlong)(iVar13 + iVar18 * -2);
          p_Var2 = param_3 + ((lVar10 + -2) - lVar8);
          p_Var16 = param_3 + ((lVar10 + -1) - lVar8);
          fVar58 = p_Var16->m128_f32[0] + p_Var14->m128_f32[0];
          fVar59 = p_Var16->m128_f32[1] + p_Var14->m128_f32[1];
          fVar60 = p_Var16->m128_f32[2] + p_Var14->m128_f32[2];
          fVar61 = p_Var16->m128_f32[3] + p_Var14->m128_f32[3];
          fVar46 = p_Var16->m128_f32[0] - p_Var14->m128_f32[0];
          fVar47 = p_Var16->m128_f32[1] - p_Var14->m128_f32[1];
          fVar48 = p_Var16->m128_f32[2] - p_Var14->m128_f32[2];
          fVar49 = p_Var16->m128_f32[3] - p_Var14->m128_f32[3];
          p_Var14 = param_3 + ((lVar9 + -1) - lVar8);
          p_Var4 = param_3 + (((longlong)iVar13 + -2) - lVar8);
          p_Var16 = param_3 + (((longlong)iVar13 + -1) - lVar8);
          p_Var5 = param_3 + ((lVar9 + -2) - lVar8);
          fVar34 = p_Var4->m128_f32[0] + p_Var5->m128_f32[0];
          fVar24 = p_Var4->m128_f32[1] + p_Var5->m128_f32[1];
          fVar27 = p_Var4->m128_f32[2] + p_Var5->m128_f32[2];
          fVar30 = p_Var4->m128_f32[3] + p_Var5->m128_f32[3];
          p_Var5 = param_3 + ((lVar9 + -2) - lVar8);
          fVar42 = p_Var4->m128_f32[0] - p_Var5->m128_f32[0];
          fVar43 = p_Var4->m128_f32[1] - p_Var5->m128_f32[1];
          fVar44 = p_Var4->m128_f32[2] - p_Var5->m128_f32[2];
          fVar45 = p_Var4->m128_f32[3] - p_Var5->m128_f32[3];
          fVar33 = p_Var16->m128_f32[0] - p_Var14->m128_f32[0];
          fVar36 = p_Var16->m128_f32[1] - p_Var14->m128_f32[1];
          fVar38 = p_Var16->m128_f32[2] - p_Var14->m128_f32[2];
          fVar40 = p_Var16->m128_f32[3] - p_Var14->m128_f32[3];
          fVar54 = p_Var16->m128_f32[0] + p_Var14->m128_f32[0];
          fVar55 = p_Var16->m128_f32[1] + p_Var14->m128_f32[1];
          fVar56 = p_Var16->m128_f32[2] + p_Var14->m128_f32[2];
          fVar57 = p_Var16->m128_f32[3] + p_Var14->m128_f32[3];
          p_Var14 = param_3 + ((lVar17 + -2) - lVar8);
          fVar23 = p_Var2->m128_f32[0] + p_Var14->m128_f32[0];
          fVar26 = p_Var2->m128_f32[1] + p_Var14->m128_f32[1];
          fVar29 = p_Var2->m128_f32[2] + p_Var14->m128_f32[2];
          fVar32 = p_Var2->m128_f32[3] + p_Var14->m128_f32[3];
          fVar50 = p_Var2->m128_f32[0] - p_Var14->m128_f32[0];
          fVar51 = p_Var2->m128_f32[1] - p_Var14->m128_f32[1];
          fVar52 = p_Var2->m128_f32[2] - p_Var14->m128_f32[2];
          fVar53 = p_Var2->m128_f32[3] - p_Var14->m128_f32[3];
          lVar10 = (longlong)(iVar13 + iVar18 * -4);
          lVar9 = (longlong)(iVar13 + ((local_150 - local_148) + param_2) * iVar18);
          p_Var16 = param_3 + ((lVar10 + -2) - lVar8);
          fVar6 = p_Var16->m128_f32[1];
          fVar28 = p_Var16->m128_f32[2];
          fVar31 = p_Var16->m128_f32[3];
          p_Var14 = param_4 + ((lVar9 + -2) - lVar12);
          p_Var14->m128_f32[0] = fVar34 + fVar23 + p_Var16->m128_f32[0];
          p_Var14->m128_f32[1] = fVar24 + fVar26 + fVar6;
          p_Var14->m128_f32[2] = fVar27 + fVar29 + fVar28;
          p_Var14->m128_f32[3] = fVar30 + fVar32 + fVar31;
          p_Var14 = param_3 + ((lVar10 + -1) - lVar8);
          fVar6 = p_Var14->m128_f32[1];
          fVar28 = p_Var14->m128_f32[2];
          fVar31 = p_Var14->m128_f32[3];
          p_Var16 = param_4 + ((lVar9 + -1) - lVar12);
          p_Var16->m128_f32[0] = fVar33 + fVar46 + p_Var14->m128_f32[0];
          p_Var16->m128_f32[1] = fVar36 + fVar47 + fVar6;
          p_Var16->m128_f32[2] = fVar38 + fVar48 + fVar28;
          p_Var16->m128_f32[3] = fVar40 + fVar49 + fVar31;
          p_Var14 = param_3 + ((lVar10 + -2) - lVar8);
          fVar74 = fVar35 * fVar34 + fVar62 * fVar23 + p_Var14->m128_f32[0];
          fVar75 = fVar37 * fVar24 + fVar64 * fVar26 + p_Var14->m128_f32[1];
          fVar76 = fVar39 * fVar27 + fVar66 * fVar29 + p_Var14->m128_f32[2];
          fVar77 = fVar41 * fVar30 + fVar25 * fVar32 + p_Var14->m128_f32[3];
          p_Var14 = param_3 + ((lVar10 + -1) - lVar8);
          fVar70 = fVar35 * fVar33 + fVar62 * fVar46 + p_Var14->m128_f32[0];
          fVar71 = fVar37 * fVar36 + fVar64 * fVar47 + p_Var14->m128_f32[1];
          fVar72 = fVar39 * fVar38 + fVar66 * fVar48 + p_Var14->m128_f32[2];
          fVar73 = fVar41 * fVar40 + fVar25 * fVar49 + p_Var14->m128_f32[3];
          p_Var14 = param_3 + ((lVar10 + -2) - lVar8);
          fVar63 = fVar62 * fVar34 + fVar35 * fVar23 + p_Var14->m128_f32[0];
          fVar65 = fVar64 * fVar24 + fVar37 * fVar26 + p_Var14->m128_f32[1];
          fVar67 = fVar66 * fVar27 + fVar39 * fVar29 + p_Var14->m128_f32[2];
          fVar68 = fVar25 * fVar30 + fVar41 * fVar32 + p_Var14->m128_f32[3];
          fVar62 = *(float *)(((longlong)param_6 - (longlong)param_5) + 4 + (longlong)local_138);
          fVar64 = *(float *)(((longlong)param_7 - (longlong)param_5) + 4 + (longlong)local_138);
          p_Var14 = param_3 + ((lVar10 + -1) - lVar8);
          fVar26 = ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a * fVar33 +
                   ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd * fVar46 + p_Var14->m128_f32[0];
          fVar29 = _UNK_1530ea4f4 * fVar36 + _UNK_1530ea554 * fVar47 + p_Var14->m128_f32[1];
          fVar32 = _UNK_1530ea4f8 * fVar38 + _UNK_1530ea558 * fVar48 + p_Var14->m128_f32[2];
          fVar33 = _UNK_1530ea4fc * fVar40 + _UNK_1530ea55c * fVar49 + p_Var14->m128_f32[3];
          fVar6 = *(float *)(((longlong)param_8 - (longlong)param_5) + (longlong)local_138);
          fVar24 = fVar69 * fVar42 + ___xmm_3f7378713f7378713f7378713f737871 * fVar50;
          fVar27 = fVar20 * fVar43 + _UNK_1530ea524 * fVar51;
          fVar30 = fVar21 * fVar44 + _UNK_1530ea528 * fVar52;
          fVar23 = fVar22 * fVar45 + _UNK_1530ea52c * fVar53;
          lVar9 = (longlong)(iVar13 + ((param_2 * 2 - local_148) + local_150) * iVar18);
          fVar35 = fVar69 * fVar54 + ___xmm_3f7378713f7378713f7378713f737871 * fVar58;
          fVar37 = fVar20 * fVar55 + _UNK_1530ea524 * fVar59;
          fVar39 = fVar21 * fVar56 + _UNK_1530ea528 * fVar60;
          fVar41 = fVar22 * fVar57 + _UNK_1530ea52c * fVar61;
          fVar66 = *(float *)(((longlong)param_7 - (longlong)param_5) + (longlong)local_138);
          fVar25 = fVar69 * fVar50 - ___xmm_3f7378713f7378713f7378713f737871 * fVar42;
          fVar28 = fVar20 * fVar51 - _UNK_1530ea524 * fVar43;
          fVar31 = fVar21 * fVar52 - _UNK_1530ea528 * fVar44;
          fVar34 = fVar22 * fVar53 - _UNK_1530ea52c * fVar45;
          fVar36 = fVar26 - fVar25;
          fVar38 = fVar29 - fVar28;
          fVar40 = fVar32 - fVar31;
          fVar42 = fVar33 - fVar34;
          fVar26 = fVar26 + fVar25;
          fVar29 = fVar29 + fVar28;
          fVar32 = fVar32 + fVar31;
          fVar33 = fVar33 + fVar34;
          fVar25 = *local_138;
          fVar43 = fVar74 - fVar35;
          fVar44 = fVar75 - fVar37;
          fVar45 = fVar76 - fVar39;
          fVar46 = fVar77 - fVar41;
          fVar31 = fVar69 * fVar58 - ___xmm_3f7378713f7378713f7378713f737871 * fVar54;
          fVar20 = fVar20 * fVar59 - _UNK_1530ea524 * fVar55;
          fVar21 = fVar21 * fVar60 - _UNK_1530ea528 * fVar56;
          fVar22 = fVar22 * fVar61 - _UNK_1530ea52c * fVar57;
          fVar74 = fVar74 + fVar35;
          fVar75 = fVar75 + fVar37;
          fVar76 = fVar76 + fVar39;
          fVar77 = fVar77 + fVar41;
          fVar69 = local_138[1];
          fVar28 = *(float *)(((longlong)param_8 - (longlong)param_5) + 4 + (longlong)local_138);
          fVar34 = fVar63 + fVar31;
          fVar35 = fVar65 + fVar20;
          fVar37 = fVar67 + fVar21;
          fVar39 = fVar68 + fVar22;
          fVar63 = fVar63 - fVar31;
          fVar65 = fVar65 - fVar20;
          fVar67 = fVar67 - fVar21;
          fVar68 = fVar68 - fVar22;
          fVar21 = fVar70 + fVar24;
          fVar22 = fVar71 + fVar27;
          fVar31 = fVar72 + fVar30;
          fVar41 = fVar73 + fVar23;
          fVar70 = fVar70 - fVar24;
          fVar71 = fVar71 - fVar27;
          fVar72 = fVar72 - fVar30;
          fVar73 = fVar73 - fVar23;
          fVar20 = *(float *)(((longlong)param_6 - (longlong)param_5) + (longlong)local_138);
          p_Var14 = param_4 + ((lVar9 + -2) - lVar12);
          p_Var14->m128_f32[0] = fVar43 * fVar25 - fVar21 * fVar69;
          p_Var14->m128_f32[1] = fVar44 * fVar25 - fVar22 * fVar69;
          p_Var14->m128_f32[2] = fVar45 * fVar25 - fVar31 * fVar69;
          p_Var14->m128_f32[3] = fVar46 * fVar25 - fVar41 * fVar69;
          p_Var14 = param_4 + ((lVar9 + -1) - lVar12);
          p_Var14->m128_f32[0] = fVar21 * fVar25 + fVar69 * fVar43;
          p_Var14->m128_f32[1] = fVar22 * fVar25 + fVar69 * fVar44;
          p_Var14->m128_f32[2] = fVar31 * fVar25 + fVar69 * fVar45;
          p_Var14->m128_f32[3] = fVar41 * fVar25 + fVar69 * fVar46;
          lVar9 = (longlong)(iVar13 + ((param_2 * 3 - local_148) + local_150) * iVar18);
          local_138 = local_138 + 2;
          p_Var14 = param_4 + ((lVar9 + -2) - lVar12);
          p_Var14->m128_f32[0] = fVar20 * fVar63 - fVar26 * fVar62;
          p_Var14->m128_f32[1] = fVar20 * fVar65 - fVar29 * fVar62;
          p_Var14->m128_f32[2] = fVar20 * fVar67 - fVar32 * fVar62;
          p_Var14->m128_f32[3] = fVar20 * fVar68 - fVar33 * fVar62;
          p_Var14 = param_4 + ((lVar9 + -1) - lVar12);
          p_Var14->m128_f32[0] = fVar26 * fVar20 + fVar62 * fVar63;
          p_Var14->m128_f32[1] = fVar29 * fVar20 + fVar62 * fVar65;
          p_Var14->m128_f32[2] = fVar32 * fVar20 + fVar62 * fVar67;
          p_Var14->m128_f32[3] = fVar33 * fVar20 + fVar62 * fVar68;
          lVar9 = (longlong)(iVar13 + ((param_2 * 4 - local_148) + local_150) * iVar18);
          p_Var14 = param_4 + ((lVar9 + -1) - lVar12);
          p_Var14->m128_f32[0] = fVar36 * fVar66 + fVar64 * fVar34;
          p_Var14->m128_f32[1] = fVar38 * fVar66 + fVar64 * fVar35;
          p_Var14->m128_f32[2] = fVar40 * fVar66 + fVar64 * fVar37;
          p_Var14->m128_f32[3] = fVar42 * fVar66 + fVar64 * fVar39;
          p_Var14 = param_4 + ((lVar9 + -2) - lVar12);
          p_Var14->m128_f32[0] = fVar66 * fVar34 - fVar36 * fVar64;
          p_Var14->m128_f32[1] = fVar66 * fVar35 - fVar38 * fVar64;
          p_Var14->m128_f32[2] = fVar66 * fVar37 - fVar40 * fVar64;
          p_Var14->m128_f32[3] = fVar66 * fVar39 - fVar42 * fVar64;
          fVar41 = _UNK_1530ea55c;
          fVar39 = _UNK_1530ea558;
          fVar37 = _UNK_1530ea554;
          fVar35 = ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd;
          fVar22 = _UNK_1530ea50c;
          fVar21 = _UNK_1530ea508;
          fVar20 = _UNK_1530ea504;
          fVar69 = ___xmm_3f1679183f1679183f1679183f167918;
          lVar9 = (longlong)(iVar13 + ((param_2 * 5 - local_148) + local_150) * iVar18);
          iVar13 = iVar13 + 2;
          p_Var14 = param_4 + ((lVar9 + -1) - lVar12);
          p_Var14->m128_f32[0] = fVar70 * fVar6 + fVar28 * fVar74;
          p_Var14->m128_f32[1] = fVar71 * fVar6 + fVar28 * fVar75;
          p_Var14->m128_f32[2] = fVar72 * fVar6 + fVar28 * fVar76;
          p_Var14->m128_f32[3] = fVar73 * fVar6 + fVar28 * fVar77;
          fVar25 = _UNK_1530ea4fc;
          fVar66 = _UNK_1530ea4f8;
          fVar64 = _UNK_1530ea4f4;
          fVar62 = ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
          p_Var14 = param_4 + ((lVar9 + -2) - lVar12);
          p_Var14->m128_f32[0] = fVar6 * fVar74 - fVar70 * fVar28;
          p_Var14->m128_f32[1] = fVar6 * fVar75 - fVar71 * fVar28;
          p_Var14->m128_f32[2] = fVar6 * fVar76 - fVar72 * fVar28;
          p_Var14->m128_f32[3] = fVar6 * fVar77 - fVar73 * fVar28;
          iVar15 = iVar15 + -2;
          local_130 = local_130 - 1;
        } while (local_130 != 0);
        uVar11 = (ulonglong)(uint)param_1;
      }
      local_150 = local_150 + 1;
      iVar7 = iVar7 + param_1 * 5;
      local_148 = local_148 + 5;
      fVar35 = ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd;
      fVar37 = _UNK_1530ea554;
      fVar39 = _UNK_1530ea558;
      fVar41 = _UNK_1530ea55c;
      fVar62 = ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
      fVar64 = _UNK_1530ea4f4;
      fVar66 = _UNK_1530ea4f8;
      fVar25 = _UNK_1530ea4fc;
      fVar69 = ___xmm_3f1679183f1679183f1679183f167918;
      fVar20 = _UNK_1530ea504;
      fVar21 = _UNK_1530ea508;
      fVar22 = _UNK_1530ea50c;
    } while (local_150 <= param_2);
  }
  return;
}

// radbg @ 14f0598a0

void __cdecl
radbg(int param_1,int param_2,int param_3,int param_4,float *param_5,float *param_6,float *param_7,
     float *param_8,float *param_9,float *param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  undefined4 *puVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  float *pfVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  int iVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  int iVar42;
  longlong lVar43;
  int iVar44;
  int iVar45;
  float *pfVar46;
  longlong lVar47;
  int iVar48;
  longlong lVar49;
  int iVar50;
  float *pfVar51;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  int local_res10;
  ulonglong local_170;
  longlong local_138;
  ulonglong local_d0;
  
  uVar31 = (ulonglong)param_1;
  uVar39 = (ulonglong)(uint)param_3;
  iVar28 = (param_2 + 1) * param_1;
  iVar3 = (param_3 + 1) * param_1;
  lVar49 = (longlong)(iVar3 + 1);
  pfVar51 = param_8 + -lVar49;
  pfVar46 = param_6 + -lVar49;
  lVar15 = (longlong)(iVar28 + 1);
  lVar12 = (longlong)param_4 * 4 + 4;
  lVar37 = (longlong)param_9 - lVar12;
  lVar12 = (longlong)param_7 - lVar12;
  __libm_sse2_sincosf_();
  iVar4 = (param_1 + -1) / 2;
  iVar5 = (param_2 + 1) / 2;
  if (param_1 < param_3) {
    iVar28 = 1;
    if (0 < param_1) {
      iVar42 = param_2 * param_1;
      do {
        iVar44 = 1;
        if (3 < param_3) {
          iVar48 = (int)uVar31;
          lVar47 = (longlong)((param_3 + 3) * iVar48 + iVar28);
          pfVar10 = pfVar51 + lVar47;
          lVar49 = (longlong)((param_2 * 3 + 1) * iVar48 + iVar28);
          pfVar11 = param_5 + (lVar49 - lVar15);
          uVar31 = (ulonglong)((uint)param_3 >> 2);
          iVar44 = ((uint)param_3 >> 2) * 4 + 1;
          do {
            pfVar10[(iVar3 + iVar28) - lVar47] =
                 pfVar11[(((param_2 - (param_3 + 1)) + 1) * param_1 + iVar3 + iVar28) - lVar49];
            pfVar10[((param_3 + 2) * iVar48 + iVar28) - lVar47] =
                 pfVar11[((param_2 * 2 + 1) * iVar48 + iVar28) - lVar49];
            *pfVar10 = *pfVar11;
            pfVar17 = pfVar11 + (((param_2 * 4 + 1) * iVar48 + iVar28) - lVar49);
            pfVar11 = pfVar11 + iVar42 * 4;
            pfVar10[((param_3 + 4) * iVar48 + iVar28) - lVar47] = *pfVar17;
            pfVar10 = pfVar10 + iVar48 * 4;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
          uVar31 = (ulonglong)(uint)param_1;
          iVar42 = param_2 * param_1;
        }
        iVar48 = (int)uVar31;
        if (param_3 < iVar44) {
          iVar42 = param_2 * iVar48;
        }
        else {
          pfVar10 = pfVar51 + ((iVar44 + param_3) * iVar48 + iVar28);
          pfVar11 = param_5 + (((iVar44 * param_2 + 1) * iVar48 + iVar28) - lVar15);
          uVar39 = (ulonglong)((param_3 - iVar44) + 1);
          do {
            fVar53 = *pfVar11;
            pfVar11 = pfVar11 + iVar42;
            *pfVar10 = fVar53;
            pfVar10 = pfVar10 + iVar48;
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 <= iVar48);
    }
  }
  else if (0 < param_3) {
    pfVar10 = param_8 + 1;
    lVar47 = lVar15;
    do {
      iVar42 = 1;
      if (param_1 < 4) {
        if (0 < param_1) goto LAB_14f059a88;
      }
      else {
        lVar22 = (longlong)param_5 + ((lVar47 - lVar49) * 4 - (longlong)pfVar51) + lVar15 * -4;
        uVar34 = (ulonglong)((uint)param_1 >> 2);
        iVar42 = ((uint)param_1 >> 2) * 4 + 1;
        pfVar11 = pfVar10;
        do {
          pfVar11[-1] = *(float *)((longlong)pfVar11 + lVar22 + -4);
          *pfVar11 = *(float *)((longlong)pfVar11 + lVar22);
          pfVar11[1] = *(float *)((longlong)pfVar11 + lVar22 + 4);
          pfVar11[2] = *(float *)((longlong)pfVar11 +
                                 (longlong)param_5 +
                                 (((lVar47 - lVar49) * 4 + 8) - (longlong)pfVar51) + lVar15 * -4);
          pfVar11 = pfVar11 + 4;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
        if (iVar42 <= param_1) {
LAB_14f059a88:
          pfVar17 = pfVar51 + (iVar3 + iVar42);
          pfVar11 = param_5 + ((iVar42 + iVar28) - lVar15);
          uVar34 = (ulonglong)((param_1 - iVar42) + 1);
          do {
            fVar53 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            *pfVar17 = fVar53;
            pfVar17 = pfVar17 + 1;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
        }
      }
      iVar3 = iVar3 + param_1;
      lVar49 = lVar49 + uVar31;
      pfVar10 = pfVar10 + uVar31;
      iVar28 = iVar28 + param_1 * param_2;
      lVar47 = lVar47 + param_1 * param_2;
      uVar39 = uVar39 - 1;
    } while (uVar39 != 0);
  }
  uVar20 = 4;
  iVar3 = (int)uVar31;
  if (1 < iVar5) {
    iVar42 = param_3 * 2;
    iVar48 = param_2 * param_3;
    local_170 = (ulonglong)(iVar5 - 1);
    param_8 = (float *)&DAT_00000004;
    iVar28 = iVar48 + 2;
    iVar44 = iVar28 * iVar3;
    do {
      iVar26 = 1;
      if (param_3 < 4) {
        if (0 < param_3) goto LAB_14f059f92;
      }
      else {
        iVar13 = param_2 * 3 + -1 + uVar20;
        iVar38 = iVar13 * iVar3;
        iVar6 = iVar42 - iVar28;
        uVar39 = (ulonglong)((uint)param_3 >> 2);
        iVar26 = ((uint)param_3 >> 2) * 4 + 1;
        iVar33 = iVar44;
        do {
          lVar49 = (longlong)(int)(((uVar20 - iVar13) + -1 + param_2) * iVar3 + iVar38);
          pfVar51[(longlong)(iVar33 + (iVar6 + 1) * iVar3) + 1] =
               param_5[lVar49 - lVar15] + param_5[lVar49 - lVar15];
          pfVar51[(longlong)(iVar33 - iVar3) + 1] =
               param_5[(lVar49 + 1) - lVar15] + param_5[(lVar49 + 1) - lVar15];
          lVar49 = (longlong)(int)(((param_2 * 2 - iVar13) + -1 + uVar20) * iVar3 + iVar38);
          pfVar51[(longlong)(iVar33 + (iVar6 + 2) * iVar3) + 1] =
               param_5[lVar49 - lVar15] + param_5[lVar49 - lVar15];
          lVar47 = (longlong)iVar38;
          pfVar51[(longlong)iVar33 + 1] =
               param_5[(lVar49 + 1) - lVar15] + param_5[(lVar49 + 1) - lVar15];
          pfVar51[(longlong)(iVar33 + (iVar6 + 3) * iVar3) + 1] =
               param_5[lVar47 - lVar15] + param_5[lVar47 - lVar15];
          iVar7 = ((param_2 * 4 - iVar13) + -1 + uVar20) * iVar3 + iVar38;
          iVar38 = iVar38 + iVar3 * param_2 * 4;
          lVar49 = (longlong)iVar7;
          pfVar51[(longlong)(iVar33 + iVar3) + 1] =
               param_5[(lVar47 + 1) - lVar15] + param_5[(lVar47 + 1) - lVar15];
          iVar7 = iVar3 * 2 + iVar33;
          pfVar51[(longlong)((iVar6 + 4) * iVar3 + iVar33) + 1] =
               param_5[lVar49 - lVar15] + param_5[lVar49 - lVar15];
          iVar33 = iVar33 + iVar3 * 4;
          pfVar51[(longlong)iVar7 + 1] =
               param_5[(lVar49 + 1) - lVar15] + param_5[(lVar49 + 1) - lVar15];
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
        uVar20 = (uint)param_8;
        if (iVar26 <= param_3) {
LAB_14f059f92:
          pfVar10 = pfVar51 + (longlong)((iVar26 + iVar48) * iVar3) + 1;
          pfVar11 = pfVar51 + (longlong)((iVar26 + iVar42) * iVar3) + 1;
          uVar39 = (ulonglong)((param_3 - iVar26) + 1);
          pfVar17 = param_5 + ((int)((iVar26 * param_2 + ((uint)param_8 - 1)) * iVar3) - lVar15);
          do {
            *pfVar11 = *pfVar17 + *pfVar17;
            pfVar11 = pfVar11 + iVar3;
            pfVar23 = pfVar17 + 1;
            pfVar17 = pfVar17 + iVar3 * param_2;
            *pfVar10 = *pfVar23 + *pfVar23;
            pfVar10 = pfVar10 + iVar3;
            uVar39 = uVar39 - 1;
            uVar20 = (uint)param_8;
          } while (uVar39 != 0);
        }
      }
      iVar44 = iVar44 - iVar3 * param_3;
      local_170 = local_170 - 1;
      iVar28 = iVar28 - param_3;
      uVar20 = uVar20 + 2;
      iVar42 = iVar42 + param_3;
      param_8 = (float *)(ulonglong)uVar20;
      iVar48 = iVar48 - param_3;
    } while (local_170 != 0);
  }
  iVar28 = 4;
  if (iVar3 == 1) {
LAB_14f05a843:
    uVar39 = (longlong)iVar3;
    if (iVar5 < 2) goto LAB_14f05b26e;
  }
  else if (iVar4 < param_3) {
    iVar28 = 2;
    if (iVar5 < 2) goto LAB_14f05a843;
    iVar26 = param_2 * 2 + 2;
    iVar6 = param_2 * param_3;
    iVar42 = param_3 * 2;
    iVar48 = iVar26 * iVar3;
    iVar13 = (iVar6 + 2) * iVar3;
    iVar33 = -2 - param_2 * param_3;
    iVar44 = param_2 * -2 + 2;
    do {
      iVar38 = 3;
      if (2 < (int)uVar31) {
        iVar7 = (int)uVar31 + -1;
        do {
          iVar29 = 1;
          if (3 < param_3) {
            iVar2 = (int)uVar31;
            iVar45 = iVar48 + iVar7;
            iVar50 = iVar13 + iVar38;
            iVar14 = (iVar28 + param_2 * 2) * 2 - iVar26;
            iVar8 = iVar44 + param_2;
            iVar21 = iVar33 + iVar42;
            iVar1 = iVar33 + iVar6;
            uVar31 = (ulonglong)((uint)param_3 >> 2);
            iVar29 = ((uint)param_3 >> 2) * 4 + 1;
            do {
              lVar16 = (longlong)((iVar8 + -2) * iVar2 + iVar45);
              lVar22 = (longlong)(((iVar8 + -1) * iVar2 - iVar7) + iVar38 + iVar45);
              lVar47 = (longlong)(iVar50 + (iVar21 + 1) * iVar2);
              lVar49 = (longlong)((iVar1 + 1) * iVar2 + iVar50);
              pfVar51[lVar47 + -1] =
                   param_5[(lVar22 + -1) - lVar15] + param_5[(lVar16 + -1) - lVar15];
              pfVar51[lVar49 + -1] =
                   param_5[(lVar22 + -1) - lVar15] - param_5[(lVar16 + -1) - lVar15];
              pfVar51[lVar47] = param_5[lVar22 - lVar15] - param_5[lVar16 - lVar15];
              lVar47 = (longlong)(iVar45 + (iVar2 - iVar7) + iVar38);
              lVar9 = (longlong)iVar45;
              pfVar51[lVar49] = param_5[lVar16 - lVar15] + param_5[lVar22 - lVar15];
              lVar49 = (longlong)((iVar21 + 2) * iVar2 + iVar50);
              pfVar51[lVar49 + -1] =
                   param_5[(lVar47 + -1) - lVar15] + param_5[(lVar9 + -1) - lVar15];
              pfVar51[(longlong)iVar50 + -1] =
                   param_5[(lVar47 + -1) - lVar15] - param_5[(lVar9 + -1) - lVar15];
              pfVar51[lVar49] = param_5[lVar47 - lVar15] - param_5[lVar9 - lVar15];
              pfVar51[iVar50] = param_5[lVar9 - lVar15] + param_5[lVar47 - lVar15];
              lVar16 = (longlong)(iVar45 + param_2 * iVar2);
              lVar22 = (longlong)(((param_2 + 1) * iVar2 - iVar7) + iVar38 + iVar45);
              lVar47 = (longlong)((iVar21 + 3) * iVar2 + iVar50);
              lVar49 = (longlong)((iVar1 + 3) * iVar2 + iVar50);
              pfVar51[lVar47 + -1] =
                   param_5[(lVar22 + -1) - lVar15] + param_5[(lVar16 + -1) - lVar15];
              pfVar51[lVar49 + -1] =
                   param_5[(lVar22 + -1) - lVar15] - param_5[(lVar16 + -1) - lVar15];
              pfVar51[lVar47] = param_5[lVar22 - lVar15] - param_5[lVar16 - lVar15];
              lVar30 = (longlong)((iVar14 + -2) * iVar2 + iVar45);
              lVar9 = (longlong)(((iVar14 + -1) * iVar2 - iVar7) + iVar38 + iVar45);
              pfVar51[lVar49] = param_5[lVar16 - lVar15] + param_5[lVar22 - lVar15];
              lVar47 = (longlong)((iVar21 + 4) * iVar2 + iVar50);
              lVar49 = (longlong)((iVar1 + 4) * iVar2 + iVar50);
              pfVar51[lVar47 + -1] =
                   param_5[(lVar9 + -1) - lVar15] + param_5[(lVar30 + -1) - lVar15];
              pfVar51[lVar49 + -1] =
                   param_5[(lVar9 + -1) - lVar15] - param_5[(lVar30 + -1) - lVar15];
              iVar50 = iVar50 + iVar2 * 4;
              iVar45 = iVar45 + iVar2 * param_2 * 4;
              pfVar51[lVar47] = param_5[lVar9 - lVar15] - param_5[lVar30 - lVar15];
              pfVar51[lVar49] = param_5[lVar30 - lVar15] + param_5[lVar9 - lVar15];
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
            uVar31 = (ulonglong)(uint)param_1;
          }
          iVar50 = (int)uVar31;
          if (iVar29 <= param_3) {
            pfVar10 = pfVar51 + ((iVar6 + iVar29) * iVar50 + iVar38);
            pfVar11 = pfVar51 + ((iVar42 + iVar29) * iVar50 + iVar38);
            iVar21 = iVar44 + iVar26 + iVar29 * param_2;
            pfVar17 = param_5 + (((iVar21 + -1) * iVar50 + iVar38) - lVar15);
            pfVar23 = param_5 + (((iVar21 + -2) * iVar50 + iVar7) - lVar15);
            uVar39 = (ulonglong)((param_3 - iVar29) + 1);
            do {
              pfVar11[-1] = pfVar23[-1] + pfVar17[-1];
              pfVar10[-1] = pfVar17[-1] - pfVar23[-1];
              *pfVar11 = *pfVar17 - *pfVar23;
              pfVar11 = pfVar11 + iVar3;
              fVar53 = *pfVar23;
              pfVar23 = pfVar23 + iVar50 * param_2;
              fVar54 = *pfVar17;
              pfVar17 = pfVar17 + iVar50 * param_2;
              *pfVar10 = fVar53 + fVar54;
              pfVar10 = pfVar10 + iVar3;
              uVar39 = uVar39 - 1;
            } while (uVar39 != 0);
          }
          iVar38 = iVar38 + 2;
          iVar7 = iVar7 + -2;
        } while (iVar38 <= iVar50);
      }
      iVar28 = iVar28 + 1;
      iVar48 = iVar48 + (int)uVar31 * 2;
      iVar42 = iVar42 + param_3;
      iVar6 = iVar6 - param_3;
      iVar13 = iVar13 - iVar3 * param_3;
      iVar33 = iVar33 + param_3;
      iVar26 = iVar26 + 2;
    } while (iVar28 <= iVar5);
  }
  else {
    if (iVar5 < 2) goto LAB_14f05a843;
    lVar22 = (longlong)iVar3;
    lVar49 = (longlong)((param_3 * 2 + 1) * iVar3);
    iVar42 = (param_2 * param_3 + 1) * iVar3;
    lVar47 = (longlong)-(iVar3 * param_3);
    local_138 = (longlong)iVar42;
    uVar31 = (ulonglong)(iVar5 - 1);
    pfVar10 = pfVar51 + (longlong)iVar42 + 2;
    do {
      uVar39 = (ulonglong)(uint)param_3;
      pfVar11 = pfVar10;
      iVar42 = param_2;
      iVar44 = iVar28;
      if (0 < param_3) {
        do {
          if (2 < lVar22) {
            iVar26 = iVar3 + -1 + (iVar28 + -2 + iVar42) * iVar3;
            iVar48 = (param_2 + iVar44 + -1) * iVar3 + 3;
            uVar34 = lVar22 - 1U >> 1;
            pfVar17 = pfVar11;
            do {
              lVar9 = (longlong)iVar48;
              iVar48 = iVar48 + 2;
              lVar16 = (longlong)iVar26;
              iVar26 = iVar26 + -2;
              pfVar17[lVar49 - local_138] =
                   param_5[(lVar9 + -1) - lVar15] + param_5[(lVar16 + -1) - lVar15];
              *pfVar17 = param_5[(lVar9 + -1) - lVar15] - param_5[(lVar16 + -1) - lVar15];
              pfVar17[(lVar49 - local_138) + 1] = param_5[lVar9 - lVar15] - param_5[lVar16 - lVar15]
              ;
              pfVar17[1] = param_5[lVar16 - lVar15] + param_5[lVar9 - lVar15];
              pfVar17 = pfVar17 + 2;
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
          }
          uVar39 = uVar39 - 1;
          pfVar11 = pfVar11 + lVar22;
          iVar42 = iVar42 + param_2;
          iVar44 = param_2 + iVar44;
        } while (uVar39 != 0);
      }
      local_138 = local_138 + lVar47;
      pfVar10 = pfVar10 + lVar47;
      iVar28 = iVar28 + 2;
      lVar49 = lVar49 + iVar3 * param_3;
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
  }
  uVar39 = (ulonglong)(uint)param_4;
  fVar54 = 0.0;
  lVar22 = (longlong)(param_4 * 2);
  iVar28 = param_2 * param_4;
  uVar34 = (ulonglong)param_4;
  lVar15 = (longlong)iVar28;
  lVar49 = (((lVar22 - uVar34) * 4 + 8) - lVar37) + lVar12;
  lVar47 = (((lVar15 - uVar34) * 4 + 8) - lVar37) + lVar12;
  uVar31 = (ulonglong)(iVar5 - 1);
  fVar53 = __real_3f800000;
  iVar3 = param_2;
  do {
    lVar9 = 1;
    fVar56 = fVar53 * extraout_XMM0_Da;
    fVar53 = fVar53 * extraout_XMM0_Db - fVar54 * extraout_XMM0_Da;
    fVar54 = fVar56 + fVar54 * extraout_XMM0_Db;
    if ((longlong)uVar34 < 4) {
      iVar42 = (int)uVar39;
      if (0 < (longlong)uVar34) goto LAB_14f05aa0a;
    }
    else {
      pfVar10 = (float *)(lVar37 + (uVar34 + 2) * 4);
      lVar16 = lVar15 - uVar34;
      uVar39 = uVar34 >> 2;
      lVar9 = uVar39 * 4 + 1;
      do {
        *(float *)((longlong)pfVar10 + lVar49 + -0xc) = fVar53 * pfVar10[uVar34 - 1] + pfVar10[-1];
        *(float *)((longlong)pfVar10 + lVar47 + -0xc) = fVar54 * pfVar10[lVar16 + -1];
        *(float *)((longlong)pfVar10 + lVar49 + -8) = fVar53 * pfVar10[uVar34] + *pfVar10;
        *(float *)((longlong)pfVar10 + lVar47 + -8) = fVar54 * pfVar10[lVar16];
        *(float *)((longlong)pfVar10 + lVar49 + -4) = fVar53 * pfVar10[uVar34 + 1] + pfVar10[1];
        *(float *)((longlong)pfVar10 + lVar47 + -4) = fVar54 * pfVar10[lVar16 + 1];
        *(float *)((longlong)pfVar10 + lVar49) = fVar53 * pfVar10[uVar34 + 2] + pfVar10[2];
        *(float *)((longlong)pfVar10 + lVar47) = fVar54 * pfVar10[(lVar15 - uVar34) + 2];
        pfVar10 = pfVar10 + 4;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
      iVar42 = param_4;
      if (lVar9 <= (longlong)uVar34) {
LAB_14f05aa0a:
        pfVar10 = (float *)(lVar37 + (lVar9 + uVar34) * 4);
        lVar9 = (uVar34 - lVar9) + 1;
        do {
          *(float *)((longlong)pfVar10 + lVar49 + -8) = fVar53 * pfVar10[uVar34] + *pfVar10;
          *(float *)((longlong)pfVar10 + (((longlong)iVar28 - uVar34) * 4 - lVar37) + lVar12) =
               fVar54 * pfVar10[lVar15 - uVar34];
          pfVar10 = pfVar10 + 1;
          lVar9 = lVar9 + -1;
          iVar42 = param_4;
        } while (lVar9 != 0);
      }
    }
    if (2 < iVar5) {
      iVar44 = (param_2 + -1) * param_4;
      lVar9 = (((iVar42 * 3 - lVar22) * 4 + 8) - lVar12) + lVar37;
      lVar16 = (((iVar44 - lVar22) * 4 + 8) - lVar12) + lVar37;
      uVar39 = (ulonglong)(iVar5 - 2);
      fVar56 = fVar53;
      fVar52 = fVar54;
      do {
        lVar30 = 1;
        fVar55 = fVar56 * fVar54;
        fVar56 = fVar56 * fVar53 - fVar52 * fVar54;
        fVar52 = fVar52 * fVar53 + fVar55;
        if ((longlong)uVar34 < 4) {
          if (0 < (longlong)uVar34) goto LAB_14f05ac20;
        }
        else {
          pfVar10 = (float *)(lVar37 + uVar34 * 4 + lVar49);
          lVar18 = iVar3 * iVar42 - lVar22;
          uVar35 = uVar34 >> 2;
          lVar30 = uVar35 * 4 + 1;
          do {
            pfVar10[-1] = fVar56 * *(float *)(lVar9 + -0xc + (longlong)pfVar10) + pfVar10[-1];
            pfVar10[lVar18 + -1] =
                 fVar52 * *(float *)(lVar16 + -0xc + (longlong)pfVar10) + pfVar10[lVar18 + -1];
            *pfVar10 = fVar56 * *(float *)(lVar9 + -8 + (longlong)pfVar10) + *pfVar10;
            pfVar10[lVar18] = fVar52 * *(float *)(lVar16 + -8 + (longlong)pfVar10) + pfVar10[lVar18]
            ;
            pfVar10[1] = fVar56 * *(float *)(lVar9 + -4 + (longlong)pfVar10) + pfVar10[1];
            pfVar10[lVar18 + 1] =
                 fVar52 * *(float *)(lVar16 + -4 + (longlong)pfVar10) + pfVar10[lVar18 + 1];
            pfVar10[2] = fVar56 * *(float *)(lVar9 + (longlong)pfVar10) + pfVar10[2];
            pfVar10[lVar18 + 2] =
                 fVar52 * *(float *)(lVar16 + (longlong)pfVar10) + pfVar10[lVar18 + 2];
            pfVar10 = pfVar10 + 4;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
          if (lVar30 <= (longlong)uVar34) {
LAB_14f05ac20:
            pfVar10 = (float *)(lVar12 + (lVar22 + lVar30) * 4);
            lVar18 = iVar3 * iVar42 - lVar22;
            lVar30 = (uVar34 - lVar30) + 1;
            do {
              *pfVar10 = fVar56 * *(float *)(lVar9 + -8 + (longlong)pfVar10) + *pfVar10;
              pfVar10[lVar18] =
                   fVar52 * *(float *)(((iVar44 - lVar22) * 4 - lVar12) + lVar37 + (longlong)pfVar10
                                      ) + pfVar10[lVar18];
              pfVar10 = pfVar10 + 1;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
          }
        }
        uVar39 = uVar39 - 1;
        lVar16 = lVar16 + (longlong)-iVar42 * 4;
        lVar9 = lVar9 + uVar34 * 4;
        iVar44 = iVar44 - param_4;
      } while (uVar39 != 0);
    }
    lVar47 = lVar47 + (longlong)-param_4 * 4;
    lVar49 = lVar49 + uVar34 * 4;
    uVar39 = (ulonglong)param_4;
    iVar3 = iVar3 + -1;
    iVar28 = iVar28 - param_4;
    lVar22 = lVar22 + param_4;
    uVar31 = uVar31 - 1;
  } while (uVar31 != 0);
  uVar31 = (ulonglong)(iVar5 - 1);
  lVar15 = ((longlong)(param_4 * 2) - uVar39) * 4 + 8;
  do {
    lVar49 = 1;
    if ((longlong)uVar39 < 4) {
      if (0 < (longlong)uVar39) goto LAB_14f05ae03;
    }
    else {
      uVar34 = uVar39 >> 2;
      pfVar10 = (float *)(lVar37 + 8 + uVar39 * 4);
      lVar49 = uVar34 * 4 + 1;
      do {
        pfVar10[-1] = *(float *)(lVar15 + -0xc + (longlong)pfVar10) + pfVar10[-1];
        *pfVar10 = *(float *)(lVar15 + -8 + (longlong)pfVar10) + *pfVar10;
        pfVar10[1] = *(float *)(lVar15 + -4 + (longlong)pfVar10) + pfVar10[1];
        pfVar10[2] = *(float *)(lVar15 + (longlong)pfVar10) + pfVar10[2];
        pfVar10 = pfVar10 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
      if (lVar49 <= (longlong)uVar39) {
LAB_14f05ae03:
        pfVar10 = (float *)(lVar37 + (lVar49 + uVar39) * 4);
        lVar49 = (uVar39 - lVar49) + 1;
        do {
          *pfVar10 = *(float *)((longlong)pfVar10 + lVar15 + -8) + *pfVar10;
          pfVar10 = pfVar10 + 1;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
      }
    }
    lVar15 = lVar15 + uVar39 * 4;
    uVar31 = uVar31 - 1;
  } while (uVar31 != 0);
  iVar28 = param_3 * 2;
  iVar42 = param_2 * param_3;
  lVar16 = (longlong)((iVar28 + 3) * param_1);
  lVar30 = (longlong)((iVar42 + 2) * param_1);
  lVar15 = (longlong)-(param_1 * param_3);
  pfVar10 = pfVar46 + lVar30 + 1;
  lVar18 = (longlong)((iVar42 + 4) * param_1);
  iVar3 = iVar42 + 3;
  lVar40 = lVar18 - lVar30;
  lVar49 = (iVar42 + 1) * param_1 - lVar30;
  lVar47 = (iVar28 + 2) * param_1 - lVar16;
  lVar22 = (param_3 + 2) * param_1 * 2 - lVar16;
  lVar9 = (iVar28 + 1) * param_1 - lVar16;
  local_d0 = (ulonglong)(iVar5 - 1);
  do {
    iVar44 = 1;
    if (param_3 < 4) {
      if (0 < param_3) goto LAB_14f05b19a;
    }
    else {
      lVar27 = lVar40 + lVar30;
      lVar32 = lVar16 - lVar30;
      lVar36 = (lVar27 - lVar30) + (iVar3 * param_1 - lVar18);
      lVar41 = (lVar16 - lVar30) + lVar22;
      lVar27 = lVar27 - lVar30;
      lVar43 = (lVar16 - lVar30) + lVar9;
      lVar24 = (lVar16 - lVar30) + lVar47;
      uVar31 = (ulonglong)((uint)param_3 >> 2);
      iVar44 = ((uint)param_3 >> 2) * 4 + 1;
      pfVar11 = pfVar10;
      do {
        *(float *)((lVar43 * 4 - (longlong)pfVar46) + (longlong)pfVar51 + (longlong)pfVar11) =
             pfVar11[lVar43] - pfVar11[lVar49];
        *(float *)((lVar49 * 4 - (longlong)pfVar46) + (longlong)pfVar51 + (longlong)pfVar11) =
             pfVar11[lVar49] + pfVar11[lVar43];
        *(float *)((longlong)pfVar11 + (lVar24 * 4 - (longlong)pfVar46) + (longlong)pfVar51) =
             pfVar11[lVar24] - *pfVar11;
        *(float *)(((longlong)pfVar51 - (longlong)pfVar46) + (longlong)pfVar11) =
             *pfVar11 + pfVar11[lVar24];
        *(float *)((lVar32 * 4 - (longlong)pfVar46) + (longlong)pfVar51 + (longlong)pfVar11) =
             pfVar11[lVar32] - pfVar11[lVar36];
        *(float *)((lVar36 * 4 - (longlong)pfVar46) + (longlong)pfVar51 + (longlong)pfVar11) =
             pfVar11[lVar36] + pfVar11[lVar32];
        *(float *)((lVar41 * 4 - (longlong)pfVar46) + (longlong)pfVar51 + (longlong)pfVar11) =
             pfVar11[lVar41] - pfVar11[lVar27];
        *(float *)((lVar27 * 4 - (longlong)pfVar46) + (longlong)pfVar51 + (longlong)pfVar11) =
             pfVar11[lVar27] + pfVar11[lVar41];
        pfVar11 = pfVar11 + param_1 * 4;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
      if (iVar44 <= param_3) {
LAB_14f05b19a:
        pfVar11 = pfVar46 + (longlong)((iVar28 + iVar44) * param_1) + 1;
        pfVar17 = pfVar46 + (longlong)((iVar42 + iVar44) * param_1) + 1;
        uVar31 = (ulonglong)((param_3 - iVar44) + 1);
        do {
          *(float *)((longlong)pfVar11 + ((longlong)pfVar51 - (longlong)pfVar46)) =
               *pfVar11 - *pfVar17;
          fVar53 = *pfVar11;
          pfVar11 = pfVar11 + param_1;
          *(float *)((longlong)pfVar17 + ((longlong)pfVar51 - (longlong)pfVar46)) =
               *pfVar17 + fVar53;
          pfVar17 = pfVar17 + param_1;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
    }
    uVar31 = (ulonglong)param_1;
    lVar30 = lVar30 + lVar15;
    local_d0 = local_d0 - 1;
    pfVar10 = pfVar10 + lVar15;
    iVar28 = iVar28 + param_3;
    lVar16 = lVar16 + param_1 * param_3;
    iVar42 = iVar42 - param_3;
    uVar39 = uVar31;
  } while (local_d0 != 0);
LAB_14f05b26e:
  iVar3 = (int)uVar31;
  if (iVar3 != 1) {
    if (1 < iVar5) {
      iVar28 = param_3 * 2;
      if (iVar4 < param_3) {
        iVar42 = iVar28 + 2;
        iVar44 = iVar42 * iVar3;
        iVar48 = param_2 * param_3;
        uVar39 = (ulonglong)(iVar5 - 1);
        lVar15 = (longlong)iVar3;
        do {
          uVar20 = 3;
          param_8 = (float *)&DAT_00000003;
          if (2 < (int)uVar31) {
            iVar5 = iVar44 + 3;
            do {
              iVar26 = 1;
              if (3 < param_3) {
                iVar26 = ((param_3 * 2 + 4) - iVar42) * iVar3 + iVar44;
                iVar33 = (int)uVar31;
                pfVar10 = pfVar46 + (longlong)iVar5 + -1;
                lVar41 = (longlong)(int)(iVar44 + uVar20);
                lVar15 = (int)((iVar48 + 2) * iVar33 + uVar20) - lVar41;
                lVar49 = (lVar15 * 4 - (longlong)pfVar46) + (longlong)pfVar51;
                lVar47 = (int)((iVar48 + 3) * iVar33 + uVar20) - lVar41;
                lVar22 = (int)((iVar26 - iVar33) + uVar20) - lVar41;
                lVar9 = (lVar22 * 4 - (longlong)pfVar46) + (longlong)pfVar51;
                lVar16 = (lVar47 * 4 - (longlong)pfVar46) + (longlong)pfVar51;
                lVar30 = (int)((iVar48 + 4) * iVar33 + uVar20) - lVar41;
                lVar36 = (int)(iVar26 + uVar20) - lVar41;
                lVar18 = (lVar36 * 4 - (longlong)pfVar46) + (longlong)pfVar51;
                lVar40 = (lVar30 * 4 - (longlong)pfVar46) + (longlong)pfVar51;
                lVar27 = (int)((iVar48 + 1) * iVar33 + uVar20) - lVar41;
                lVar41 = (int)(iVar3 * -3 + iVar26 + (uint)param_8) - lVar41;
                lVar24 = (lVar41 * 4 - (longlong)pfVar46) + (longlong)pfVar51;
                lVar32 = (lVar27 * 4 - (longlong)pfVar46) + (longlong)pfVar51;
                uVar31 = (ulonglong)((uint)param_3 >> 2);
                iVar26 = ((uint)param_3 >> 2) * 4 + 1;
                do {
                  *(float *)((longlong)pfVar10 + lVar24) = pfVar10[lVar41] - pfVar10[lVar27 + 1];
                  *(float *)((longlong)pfVar10 + lVar32) = pfVar10[lVar27 + 1] + pfVar10[lVar41];
                  *(float *)((longlong)pfVar10 + lVar24 + 4) = pfVar10[lVar41 + 1] + pfVar10[lVar27]
                  ;
                  *(float *)((longlong)pfVar10 + lVar32 + 4) = pfVar10[lVar41 + 1] - pfVar10[lVar27]
                  ;
                  *(float *)((longlong)pfVar10 + ((longlong)pfVar51 - (longlong)pfVar46)) =
                       *pfVar10 - pfVar10[lVar15 + 1];
                  *(float *)((longlong)pfVar10 + lVar49) = pfVar10[lVar15 + 1] + *pfVar10;
                  *(float *)((longlong)pfVar10 + ((longlong)pfVar51 - (longlong)pfVar46) + 4) =
                       pfVar10[1] + pfVar10[lVar15];
                  *(float *)((longlong)pfVar10 + lVar49 + 4) = pfVar10[1] - pfVar10[lVar15];
                  *(float *)((longlong)pfVar10 + lVar9) = pfVar10[lVar22] - pfVar10[lVar47 + 1];
                  *(float *)((longlong)pfVar10 + lVar16) = pfVar10[lVar47 + 1] + pfVar10[lVar22];
                  *(float *)((longlong)pfVar10 + lVar9 + 4) = pfVar10[lVar22 + 1] + pfVar10[lVar47];
                  *(float *)((longlong)pfVar10 + lVar16 + 4) = pfVar10[lVar22 + 1] - pfVar10[lVar47]
                  ;
                  *(float *)((longlong)pfVar10 + lVar18) = pfVar10[lVar36] - pfVar10[lVar30 + 1];
                  *(float *)((longlong)pfVar10 + lVar40) = pfVar10[lVar30 + 1] + pfVar10[lVar36];
                  *(float *)((longlong)pfVar10 + lVar18 + 4) = pfVar10[lVar36 + 1] + pfVar10[lVar30]
                  ;
                  *(float *)((longlong)pfVar10 + lVar40 + 4) = pfVar10[lVar36 + 1] - pfVar10[lVar30]
                  ;
                  pfVar10 = pfVar10 + iVar33 * 4;
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
                uVar31 = (ulonglong)(uint)param_1;
                lVar15 = (longlong)iVar3;
                uVar20 = (uint)param_8;
              }
              iVar33 = (int)uVar31;
              if (iVar26 <= param_3) {
                pfVar10 = pfVar46 + (longlong)(int)((iVar48 + iVar26) * iVar33 + uVar20) + -1;
                pfVar11 = pfVar46 + (longlong)(int)((iVar28 + iVar26) * iVar33 + uVar20) + -1;
                lVar49 = (longlong)pfVar51 - (longlong)pfVar46;
                uVar34 = (ulonglong)((param_3 - iVar26) + 1);
                do {
                  *(float *)((longlong)pfVar11 + lVar49) = *pfVar11 - pfVar10[1];
                  *(float *)((longlong)pfVar10 + lVar49) = *pfVar11 + pfVar10[1];
                  *(float *)((longlong)pfVar11 + lVar49 + 4) = *pfVar10 + pfVar11[1];
                  pfVar17 = pfVar11 + 1;
                  pfVar11 = pfVar11 + lVar15;
                  *(float *)((longlong)pfVar10 + lVar49 + 4) = *pfVar17 - *pfVar10;
                  pfVar10 = pfVar10 + lVar15;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
              }
              uVar20 = uVar20 + 2;
              iVar5 = iVar5 + 2;
              param_8 = (float *)(ulonglong)uVar20;
              lVar15 = (longlong)iVar33;
            } while ((int)uVar20 <= iVar33);
            lVar15 = (longlong)iVar33;
          }
          iVar48 = iVar48 - param_3;
          iVar28 = iVar28 + param_3;
          iVar44 = iVar44 + iVar3 * param_3;
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
      }
      else {
        uVar34 = (ulonglong)(iVar5 - 1);
        iVar5 = param_2 * param_3;
        do {
          iVar42 = 1;
          if (0 < param_3) {
            do {
              if (2 < (longlong)uVar39) {
                pfVar10 = pfVar46 + (longlong)((iVar5 + iVar42) * iVar3) + 2;
                pfVar11 = pfVar46 + (longlong)((iVar42 + iVar28) * iVar3) + 2;
                lVar15 = (longlong)pfVar51 - (longlong)pfVar46;
                uVar35 = uVar39 - 1 >> 1;
                do {
                  *(float *)(lVar15 + (longlong)pfVar11) = *pfVar11 - pfVar10[1];
                  *(float *)(lVar15 + (longlong)pfVar10) = *pfVar11 + pfVar10[1];
                  *(float *)(lVar15 + 4 + (longlong)pfVar11) = *pfVar10 + pfVar11[1];
                  pfVar17 = pfVar11 + 1;
                  pfVar11 = pfVar11 + 2;
                  *(float *)(lVar15 + 4 + (longlong)pfVar10) = *pfVar17 - *pfVar10;
                  pfVar10 = pfVar10 + 2;
                  uVar35 = uVar35 - 1;
                } while (uVar35 != 0);
              }
              iVar42 = iVar42 + 1;
            } while (iVar42 <= param_3);
          }
          iVar5 = iVar5 - param_3;
          iVar28 = iVar28 + param_3;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
    }
    uVar39 = (ulonglong)param_4;
    lVar15 = 1;
    if (3 < (longlong)uVar39) {
      lVar49 = lVar37 - lVar12;
      puVar19 = (undefined4 *)(lVar12 + 8 + uVar39 * 4);
      uVar34 = uVar39 >> 2;
      lVar15 = uVar34 * 4 + 1;
      do {
        puVar19[-1] = *(undefined4 *)(lVar49 + -4 + (longlong)puVar19);
        *puVar19 = *(undefined4 *)(lVar49 + (longlong)puVar19);
        puVar19[1] = *(undefined4 *)(lVar49 + 4 + (longlong)puVar19);
        puVar19[2] = *(undefined4 *)(lVar49 + 8 + (longlong)puVar19);
        puVar19 = puVar19 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    if (lVar15 <= (longlong)uVar39) {
      puVar19 = (undefined4 *)(lVar12 + (lVar15 + uVar39) * 4);
      lVar15 = (uVar39 - lVar15) + 1;
      do {
        *puVar19 = *(undefined4 *)((longlong)puVar19 + (lVar37 - lVar12));
        puVar19 = puVar19 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (1 < param_2) {
      iVar5 = param_3 * 2;
      iVar28 = (int)uVar31;
      uVar39 = (ulonglong)iVar28;
      lVar49 = (longlong)((iVar5 + 2) * iVar28);
      pfVar10 = pfVar46 + lVar49 + 1;
      lVar37 = (longlong)((param_3 + 2) * iVar28 * 2);
      iVar3 = iVar5 + 3;
      lVar15 = lVar37 - lVar49;
      lVar12 = (iVar5 + 1) * iVar28 - lVar49;
      uVar34 = (ulonglong)(param_2 - 1);
      do {
        iVar42 = 1;
        if (param_3 < 4) {
          if (0 < param_3) goto LAB_14f05ba78;
        }
        else {
          lVar47 = lVar15 + lVar49;
          lVar9 = lVar12 + lVar49;
          lVar22 = (lVar47 - lVar49) + (iVar3 * iVar28 - lVar37);
          uVar39 = (ulonglong)((uint)param_3 >> 2);
          iVar42 = ((uint)param_3 >> 2) * 4 + 1;
          pfVar11 = pfVar10;
          do {
            pfVar11[lVar9 - lVar49] =
                 *(float *)(((lVar9 - lVar49) * 4 - (longlong)pfVar46) + (longlong)pfVar51 +
                           (longlong)pfVar11);
            *pfVar11 = *(float *)(((longlong)pfVar51 - (longlong)pfVar46) + (longlong)pfVar11);
            pfVar11[lVar22] =
                 *(float *)((lVar22 * 4 - (longlong)pfVar46) + (longlong)pfVar51 + (longlong)pfVar11
                           );
            pfVar11[lVar47 - lVar49] =
                 *(float *)(((lVar47 - lVar49) * 4 - (longlong)pfVar46) + (longlong)pfVar51 +
                           (longlong)pfVar11);
            pfVar11 = pfVar11 + (int)uVar31 * 4;
            uVar39 = uVar39 - 1;
          } while (uVar39 != 0);
          uVar31 = (ulonglong)param_1;
          uVar39 = uVar31;
          if (iVar42 <= param_3) {
LAB_14f05ba78:
            pfVar11 = pfVar46 + (longlong)((iVar5 + iVar42) * (int)uVar31) + 1;
            uVar35 = (ulonglong)((param_3 - iVar42) + 1);
            do {
              *pfVar11 = *(float *)(((longlong)pfVar51 - (longlong)pfVar46) + (longlong)pfVar11);
              pfVar11 = pfVar11 + uVar39;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
        }
        iVar5 = iVar5 + param_3;
        pfVar10 = pfVar10 + iVar28 * param_3;
        lVar49 = lVar49 + iVar28 * param_3;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
      iVar3 = param_3 * 2;
      iVar5 = (int)uVar31;
      pfVar10 = param_10 + (longlong)-iVar5 + -1;
      uVar34 = (ulonglong)(param_2 - 1);
      if (param_3 < iVar4) {
        do {
          pfVar10 = pfVar10 + uVar39;
          iVar4 = 1;
          if (0 < param_3) {
            do {
              if (2 < (longlong)uVar39) {
                pfVar11 = pfVar51 + (longlong)((iVar4 + iVar3) * iVar5) + 2;
                uVar31 = uVar39 - 1 >> 1;
                pfVar17 = pfVar10;
                do {
                  pfVar23 = pfVar17 + 2;
                  *(float *)((longlong)pfVar11 + ((longlong)pfVar46 - (longlong)pfVar51)) =
                       pfVar17[1] * *pfVar11 - pfVar11[1] * *pfVar23;
                  *(float *)((longlong)pfVar11 + ((longlong)pfVar46 - (longlong)pfVar51) + 4) =
                       pfVar17[1] * pfVar11[1] + *pfVar11 * *pfVar23;
                  pfVar11 = pfVar11 + 2;
                  uVar31 = uVar31 - 1;
                  pfVar17 = pfVar23;
                } while (uVar31 != 0);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 <= param_3);
          }
          iVar3 = iVar3 + param_3;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      else {
        iVar4 = iVar3 + 2;
        iVar28 = iVar4 * iVar5;
        uVar39 = (longlong)iVar5;
        do {
          pfVar10 = pfVar10 + iVar5;
          local_res10 = 3;
          if (2 < (int)uVar31) {
            iVar42 = iVar28 + 3;
            pfVar11 = pfVar10 + -1;
            pfVar17 = pfVar10;
            do {
              pfVar11 = pfVar11 + 2;
              iVar44 = 1;
              pfVar23 = pfVar17 + 2;
              if (3 < param_3) {
                iVar44 = ((param_3 * 2 + 4) - iVar4) * iVar5 + iVar28;
                iVar48 = (int)uVar31;
                pfVar25 = pfVar51 + (longlong)iVar42 + -1;
                lVar15 = (longlong)(iVar28 + local_res10);
                lVar12 = (-iVar5 + iVar44 + local_res10) - lVar15;
                lVar37 = (iVar44 + local_res10) - lVar15;
                lVar47 = (lVar12 * 4 - (longlong)pfVar51) + (longlong)pfVar46;
                lVar15 = (iVar28 + -iVar5 + local_res10) - lVar15;
                lVar49 = (lVar37 * 4 - (longlong)pfVar51) + (longlong)pfVar46;
                lVar22 = (lVar15 * 4 - (longlong)pfVar51) + (longlong)pfVar46;
                uVar35 = (ulonglong)((uint)param_3 >> 2);
                iVar44 = ((uint)param_3 >> 2) * 4 + 1;
                uVar31 = (ulonglong)param_1;
                do {
                  *(float *)(lVar22 + (longlong)pfVar25) =
                       *pfVar11 * pfVar25[lVar15] - pfVar25[lVar15 + 1] * *pfVar23;
                  *(float *)(lVar22 + 4 + (longlong)pfVar25) =
                       *pfVar23 * pfVar25[lVar15] + *pfVar11 * pfVar25[lVar15 + 1];
                  *(float *)((longlong)pfVar25 + ((longlong)pfVar46 - (longlong)pfVar51)) =
                       *pfVar11 * *pfVar25 - pfVar25[1] * *pfVar23;
                  *(float *)((longlong)pfVar25 + ((longlong)pfVar46 - (longlong)pfVar51) + 4) =
                       pfVar25[1] * *pfVar11 + *pfVar25 * *pfVar23;
                  *(float *)(lVar47 + (longlong)pfVar25) =
                       *pfVar11 * pfVar25[lVar12] - pfVar25[lVar12 + 1] * *pfVar23;
                  *(float *)(lVar47 + 4 + (longlong)pfVar25) =
                       *pfVar23 * pfVar25[lVar12] + *pfVar11 * pfVar25[lVar12 + 1];
                  *(float *)((longlong)pfVar25 + lVar49) =
                       pfVar25[lVar37] * *pfVar11 - *pfVar23 * pfVar25[lVar37 + 1];
                  *(float *)((longlong)pfVar25 + lVar49 + 4) =
                       *pfVar11 * pfVar25[lVar37 + 1] + pfVar25[lVar37] * *pfVar23;
                  pfVar25 = pfVar25 + iVar48 * 4;
                  uVar35 = uVar35 - 1;
                  uVar39 = uVar31;
                } while (uVar35 != 0);
              }
              iVar48 = (int)uVar31;
              if (iVar44 <= param_3) {
                pfVar25 = pfVar51 + (longlong)((iVar44 + iVar3) * iVar48 + local_res10) + -1;
                uVar35 = (ulonglong)((param_3 - iVar44) + 1);
                do {
                  *(float *)(((longlong)pfVar46 - (longlong)pfVar51) + (longlong)pfVar25) =
                       *pfVar25 * pfVar17[1] - pfVar25[1] * *pfVar23;
                  *(float *)(((longlong)pfVar46 - (longlong)pfVar51) + 4 + (longlong)pfVar25) =
                       pfVar17[1] * pfVar25[1] + *pfVar25 * *pfVar23;
                  pfVar25 = pfVar25 + uVar39;
                  uVar35 = uVar35 - 1;
                } while (uVar35 != 0);
              }
              local_res10 = local_res10 + 2;
              iVar42 = iVar42 + 2;
              uVar39 = (ulonglong)iVar48;
              pfVar17 = pfVar23;
            } while (local_res10 <= iVar48);
            uVar39 = (ulonglong)iVar48;
          }
          iVar3 = iVar3 + param_3;
          iVar28 = iVar28 + iVar5 * param_3;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
    }
  }
  return;
}

// radf2 @ 14f05bf70

void __cdecl radf2(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  int local_res8;
  
  lVar15 = (longlong)(param_1 * 3);
  iVar8 = 1;
  iVar2 = param_2 * 2;
  lVar17 = (longlong)((param_2 + 1) * param_1);
  if (3 < param_2) {
    lVar12 = (longlong)((iVar2 + 2) * param_1);
    lVar9 = (longlong)(param_1 * 5);
    pfVar13 = param_4 + (lVar9 - lVar15);
    pfVar20 = param_3 + (lVar12 - lVar17);
    lVar16 = param_1 * 7 - lVar9;
    lVar25 = param_1 * 9 - lVar9;
    iVar8 = (param_2 + 2) * param_1;
    lVar23 = (param_2 + 3) * param_1 - lVar12;
    lVar22 = iVar8 - lVar12;
    lVar3 = (iVar2 + 3) * param_1 - lVar12;
    lVar4 = (param_2 + 4) * param_1 - lVar12;
    lVar5 = iVar8 * 2 - lVar12;
    lVar6 = (iVar2 + 1) * param_1 - lVar12;
    uVar7 = (ulonglong)((uint)param_2 >> 2);
    iVar8 = ((uint)param_2 >> 2) * 4 + 1;
    do {
      pfVar13[lVar15 - lVar9] = pfVar20[lVar17 - lVar12] + pfVar20[lVar6];
      pfVar13[-1] = pfVar20[lVar17 - lVar12] - pfVar20[lVar6];
      *pfVar13 = pfVar20[lVar22] + *pfVar20;
      pfVar13[lVar16 + -1] = pfVar20[lVar22] - *pfVar20;
      pfVar13[lVar16] = pfVar20[lVar3] + pfVar20[lVar23];
      pfVar13[lVar25 + -1] = pfVar20[lVar23] - pfVar20[lVar3];
      pfVar13[lVar25] = pfVar20[lVar4] + pfVar20[lVar5];
      pfVar11 = pfVar20 + lVar4;
      pfVar10 = pfVar20 + lVar5;
      pfVar20 = pfVar20 + param_1 * 4;
      pfVar13[(param_1 * 0xb - lVar9) + -1] = *pfVar11 - *pfVar10;
      pfVar13 = pfVar13 + param_1 * 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  iVar21 = 1;
  if (iVar8 <= param_2) {
    pfVar13 = param_3 + ((iVar2 + iVar8) * param_1 - lVar17);
    pfVar20 = param_3 + ((iVar8 + param_2) * param_1 - lVar17);
    pfVar11 = param_4 + (((longlong)((iVar8 * 2 + 3) * param_1) + -1) - lVar15);
    pfVar10 = param_4 + ((iVar8 * 2 + 1) * param_1 - lVar15);
    uVar7 = (ulonglong)((param_2 - iVar8) + 1);
    do {
      *pfVar10 = *pfVar13 + *pfVar20;
      pfVar10 = pfVar10 + param_1 * 2;
      fVar26 = *pfVar20;
      pfVar20 = pfVar20 + param_1;
      fVar27 = *pfVar13;
      pfVar13 = pfVar13 + param_1;
      *pfVar11 = fVar26 - fVar27;
      pfVar11 = pfVar11 + param_1 * 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (1 < param_1) {
    if (param_1 != 2) {
      if (0 < param_2) {
        iVar2 = param_1 * 5 + -1;
        local_res8 = 2;
        iVar8 = (param_2 + 1) * param_1 + 3;
        do {
          if (2 < (ulonglong)(longlong)param_1) {
            pfVar13 = param_5 + 1;
            uVar7 = (longlong)param_1 - 1U >> 1;
            iVar19 = iVar8;
            iVar14 = iVar2;
            do {
              pfVar20 = pfVar13 + -1;
              fVar26 = *pfVar13;
              lVar4 = (longlong)(((param_2 * 2 - (iVar21 + param_2)) + iVar21) * param_1 + iVar19);
              lVar6 = (longlong)iVar19;
              iVar18 = ((local_res8 - (iVar21 + param_2)) + 1) * param_1 + iVar19;
              iVar19 = iVar19 + 2;
              pfVar13 = pfVar13 + 2;
              lVar5 = (longlong)iVar18;
              fVar27 = fVar26 * param_3[(lVar4 + -1) - lVar17] +
                       *pfVar20 * param_3[(lVar4 + -2) - lVar17];
              lVar3 = (longlong)iVar14;
              iVar14 = iVar14 + -2;
              fVar26 = *pfVar20 * param_3[(lVar4 + -1) - lVar17] -
                       fVar26 * param_3[(lVar4 + -2) - lVar17];
              param_4[(lVar5 + -1) - lVar15] = fVar26 + param_3[(lVar6 + -1) - lVar17];
              param_4[(lVar3 + -1) - lVar15] = fVar26 - param_3[(lVar6 + -1) - lVar17];
              param_4[(lVar5 + -2) - lVar15] = fVar27 + param_3[(lVar6 + -2) - lVar17];
              param_4[(lVar3 + -2) - lVar15] = param_3[(lVar6 + -2) - lVar17] - fVar27;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          local_res8 = local_res8 + 2;
          iVar2 = iVar2 + param_1 * 2;
          iVar21 = iVar21 + 1;
          iVar8 = iVar8 + param_1;
        } while (iVar21 <= param_2);
      }
      if ((param_1 & 1U) != 0) {
        return;
      }
    }
    uVar1 = __xmm_80000000800000008000000080000000;
    if (param_2 < 4) {
      iVar2 = 1;
    }
    else {
      iVar18 = param_2 * 2 - (param_2 + 2);
      iVar8 = param_1 * 8;
      iVar21 = param_1 * 4;
      iVar24 = (param_2 + 2) * param_1;
      uVar7 = (ulonglong)((uint)param_2 >> 2);
      iVar2 = ((uint)param_2 >> 2) * 4 + 1;
      iVar14 = iVar24;
      iVar19 = iVar8;
      do {
        lVar3 = (longlong)iVar21;
        iVar21 = iVar21 + iVar8;
        param_4[lVar3 - lVar15] =
             (float)((uint)param_3[((longlong)((iVar18 + 2) * param_1 + iVar14) + -1) - lVar17] ^
                    uVar1);
        param_4[(lVar3 + -1) - lVar15] = param_3[((longlong)iVar14 + -1) - lVar17];
        lVar3 = (longlong)(param_1 * -2 + iVar19);
        param_4[lVar3 - lVar15] =
             (float)((uint)param_3[((longlong)(iVar14 + (iVar18 + 3) * param_1) + -1) - lVar17] ^
                    uVar1);
        param_4[(lVar3 + -1) - lVar15] = param_3[((longlong)(param_1 + iVar14) + -1) - lVar17];
        param_4[iVar19 - lVar15] =
             (float)((uint)param_3[((longlong)(iVar24 + iVar14) + -1) - lVar17] ^ uVar1);
        param_4[((longlong)iVar19 + -1) - lVar15] =
             param_3[((longlong)(param_1 * 2 + iVar14) + -1) - lVar17];
        lVar3 = (longlong)(param_1 * 2 + iVar19);
        iVar19 = iVar19 + iVar8;
        param_4[lVar3 - lVar15] =
             (float)((uint)param_3[((longlong)((iVar18 + 5) * param_1 + iVar14) + -1) - lVar17] ^
                    uVar1);
        param_4[(lVar3 + -1) - lVar15] = param_3[((longlong)(param_1 * 3 + iVar14) + -1) - lVar17];
        iVar14 = iVar14 + param_1 * 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (iVar2 <= param_2) {
      pfVar13 = param_3 + (((longlong)((param_2 + 1 + iVar2) * param_1) + -1) - lVar17);
      pfVar20 = param_3 + (((longlong)((iVar2 + 1 + param_2 * 2) * param_1) + -1) - lVar17);
      pfVar11 = param_4 + (((longlong)((iVar2 + 1) * param_1 * 2) + -1) - lVar15);
      uVar7 = (ulonglong)((param_2 - iVar2) + 1);
      do {
        fVar26 = *pfVar20;
        pfVar20 = pfVar20 + param_1;
        pfVar11[1] = (float)((uint)fVar26 ^ uVar1);
        fVar26 = *pfVar13;
        pfVar13 = pfVar13 + param_1;
        *pfVar11 = fVar26;
        pfVar11 = pfVar11 + param_1 * 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

// radf2_ps @ 14f05c5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl radf2_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5)

{
  __m128 *p_Var1;
  __m128 *p_Var2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulong64 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  __m128 *p_Var23;
  __m128 *p_Var24;
  longlong lVar25;
  __m128 *p_Var26;
  __m128 *p_Var27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  uVar20 = (ulonglong)param_1;
  lVar21 = 0;
  lVar25 = (longlong)(param_1 * param_2);
  if (0 < param_1 * param_2) {
    p_Var24 = param_4 + -1;
    p_Var23 = param_3 + lVar25;
    lVar18 = lVar21;
    do {
      p_Var24 = p_Var24 + uVar20 * 2;
      fVar4 = p_Var23->m128_f32[0];
      fVar5 = p_Var23->m128_f32[1];
      fVar6 = p_Var23->m128_f32[2];
      fVar7 = p_Var23->m128_f32[3];
      p_Var26 = param_3 + lVar18;
      fVar8 = p_Var26->m128_f32[0];
      fVar9 = p_Var26->m128_f32[1];
      fVar10 = p_Var26->m128_f32[2];
      fVar11 = p_Var26->m128_f32[3];
      fVar12 = p_Var23->m128_f32[0];
      fVar13 = p_Var23->m128_f32[1];
      fVar14 = p_Var23->m128_f32[2];
      fVar29 = p_Var23->m128_f32[3];
      lVar17 = lVar18 + uVar20;
      p_Var23 = p_Var23 + uVar20;
      p_Var26 = param_4 + lVar18 * 2;
      p_Var26->m128_f32[0] = fVar4 + fVar8;
      p_Var26->m128_f32[1] = fVar5 + fVar9;
      p_Var26->m128_f32[2] = fVar6 + fVar10;
      p_Var26->m128_f32[3] = fVar7 + fVar11;
      p_Var24->m128_f32[0] = fVar8 - fVar12;
      p_Var24->m128_f32[1] = fVar9 - fVar13;
      p_Var24->m128_f32[2] = fVar10 - fVar14;
      p_Var24->m128_f32[3] = fVar11 - fVar29;
      lVar18 = lVar17;
    } while (lVar17 < lVar25);
  }
  if (1 < param_1) {
    if (param_1 != 2) {
      uVar22 = uVar20;
      if (0 < lVar25) {
        p_Var23 = param_4 + -2;
        p_Var24 = param_3 + lVar25 + 2;
        do {
          p_Var23 = p_Var23 + uVar20 * 2;
          if (2 < (longlong)uVar20) {
            lVar18 = (uVar20 - 3 >> 1) + 1;
            p_Var26 = p_Var24;
            p_Var27 = p_Var23;
            pfVar28 = param_5;
            do {
              fVar4 = pfVar28[1];
              fVar5 = *pfVar28;
              pfVar28 = pfVar28 + 2;
              fVar6 = p_Var26[-1 - lVar25].m128_f32[0];
              fVar7 = *(float *)((longlong)p_Var26 + lVar25 * -0x10 + -0xc);
              fVar8 = *(float *)((longlong)p_Var26 + lVar25 * -0x10 + -8);
              fVar9 = *(float *)((longlong)p_Var26 + lVar25 * -0x10 + -4);
              fVar29 = fVar4 * p_Var26->m128_f32[0] + p_Var26[-1].m128_f32[0] * fVar5;
              fVar30 = fVar4 * p_Var26->m128_f32[1] + *(float *)((longlong)p_Var26 + -0xc) * fVar5;
              fVar31 = fVar4 * p_Var26->m128_f32[2] + *(float *)((longlong)p_Var26 + -8) * fVar5;
              fVar32 = fVar4 * p_Var26->m128_f32[3] + *(float *)((longlong)p_Var26 + -4) * fVar5;
              p_Var1 = p_Var26 + -lVar25;
              fVar10 = p_Var1->m128_f32[1];
              fVar11 = p_Var1->m128_f32[2];
              fVar12 = p_Var1->m128_f32[3];
              fVar33 = p_Var26->m128_f32[0] * fVar5 - fVar4 * p_Var26[-1].m128_f32[0];
              fVar34 = p_Var26->m128_f32[1] * fVar5 - fVar4 * *(float *)((longlong)p_Var26 + -0xc);
              fVar35 = p_Var26->m128_f32[2] * fVar5 - fVar4 * *(float *)((longlong)p_Var26 + -8);
              fVar36 = p_Var26->m128_f32[3] * fVar5 - fVar4 * *(float *)((longlong)p_Var26 + -4);
              p_Var2 = p_Var26 + -lVar25;
              fVar4 = p_Var2->m128_f32[0];
              fVar5 = p_Var2->m128_f32[1];
              fVar13 = p_Var2->m128_f32[2];
              fVar14 = p_Var2->m128_f32[3];
              pfVar3 = (float *)(p_Var24->m128_i8 +
                                 (longlong)param_4 + (longlong)param_3 * -2 + lVar25 * -0x20 + -0x20
                                + (longlong)p_Var26->m128_i8);
              *pfVar3 = p_Var1->m128_f32[0] + fVar33;
              pfVar3[1] = fVar10 + fVar34;
              pfVar3[2] = fVar11 + fVar35;
              pfVar3[3] = fVar12 + fVar36;
              p_Var27->m128_f32[0] = fVar33 - fVar4;
              p_Var27->m128_f32[1] = fVar34 - fVar5;
              p_Var27->m128_f32[2] = fVar35 - fVar13;
              p_Var27->m128_f32[3] = fVar36 - fVar14;
              pfVar3 = (float *)(p_Var24->m128_i8 +
                                 (longlong)param_4 + (lVar25 * 0x10 + 0x18 + (longlong)param_3) * -2
                                + (longlong)p_Var26->m128_i8);
              *pfVar3 = fVar6 + fVar29;
              pfVar3[1] = fVar7 + fVar30;
              pfVar3[2] = fVar8 + fVar31;
              pfVar3[3] = fVar9 + fVar32;
              p_Var26 = p_Var26 + 2;
              p_Var27[-1].m128_f32[0] = fVar6 - fVar29;
              *(float *)((longlong)p_Var27 + -0xc) = fVar7 - fVar30;
              *(float *)((longlong)p_Var27 + -8) = fVar8 - fVar31;
              *(float *)((longlong)p_Var27 + -4) = fVar9 - fVar32;
              p_Var27 = p_Var27 + -2;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          lVar21 = lVar21 + uVar20;
          p_Var24 = p_Var24 + uVar20;
        } while (lVar21 < lVar25);
        uVar22 = (ulonglong)(uint)param_1;
      }
      if ((uVar22 & 1) != 0) {
        return;
      }
    }
    fVar7 = _UNK_15076c66c;
    fVar6 = _UNK_15076c668;
    fVar5 = _UNK_15076c664;
    fVar4 = ___xmm_bf800000bf800000bf800000bf800000;
    lVar21 = 0;
    if (0 < lVar25) {
      puVar19 = (ulong64 *)(param_3->m128_i8 + uVar20 * 0x10 + -0x10);
      do {
        lVar18 = uVar20 + lVar21 * 2;
        pfVar28 = (float *)(puVar19 + lVar25 * 2);
        fVar8 = pfVar28[1];
        fVar9 = pfVar28[2];
        fVar10 = pfVar28[3];
        lVar21 = lVar21 + uVar20;
        p_Var23 = param_4 + lVar18;
        p_Var23->m128_f32[0] = fVar4 * *pfVar28;
        p_Var23->m128_f32[1] = fVar5 * fVar8;
        p_Var23->m128_f32[2] = fVar6 * fVar9;
        p_Var23->m128_f32[3] = fVar7 * fVar10;
        uVar15 = *puVar19;
        uVar16 = puVar19[1];
        puVar19 = puVar19 + uVar20 * 2;
        param_4[lVar18 + -1].m128_u64[0] = uVar15;
        param_4[lVar18 + -1].m128_u64[1] = uVar16;
      } while (lVar21 < lVar25);
    }
  }
  return;
}

// radf3 @ 14f05c8b0

void __cdecl
radf3(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int local_res18;
  
  fVar3 = __real_3f5db3d7;
  fVar2 = __real_3f000000;
  uVar19 = (ulonglong)param_1;
  iVar20 = 1;
  iVar4 = (param_2 + 1) * param_1 + 1;
  if (3 < param_2) {
    iVar9 = param_2 * 2 + 2;
    iVar7 = param_2 * 3 - iVar9;
    iVar11 = iVar9 * param_1;
    iVar23 = param_1 * 0xc;
    iVar21 = param_1 * 6;
    iVar5 = param_2 - iVar9;
    uVar22 = (ulonglong)((uint)param_2 >> 2);
    iVar20 = ((uint)param_2 >> 2) * 4 + 1;
    local_res18 = iVar23;
    do {
      lVar15 = (longlong)((iVar7 + 1) * param_1 + iVar11);
      lVar13 = (longlong)((iVar5 + 1) * param_1 + iVar11);
      fVar24 = param_3[(lVar15 + 1) - (longlong)iVar4];
      fVar25 = param_3[((longlong)(iVar11 - param_1) + 1) - (longlong)iVar4];
      param_4[(longlong)(param_1 * -2 + iVar21) - (longlong)(param_1 * 4)] =
           fVar24 + fVar25 + param_3[(lVar13 + 1) - (longlong)iVar4];
      param_4[(longlong)iVar21 - (longlong)(param_1 * 4)] =
           (param_3[(lVar15 + 1) - (longlong)iVar4] -
           param_3[((longlong)(iVar11 - param_1) + 1) - (longlong)iVar4]) * fVar3;
      param_4[((longlong)iVar21 + -1) - (longlong)(param_1 * 4)] =
           param_3[(lVar13 + 1) - (longlong)iVar4] - (fVar24 + fVar25) * fVar2;
      lVar16 = (longlong)((iVar7 + 2) * param_1 + iVar11);
      lVar15 = (longlong)((iVar5 + 2) * param_1 + iVar11);
      fVar24 = param_3[(lVar16 + 1) - (longlong)iVar4];
      fVar25 = param_3[((longlong)iVar11 + 1) - (longlong)iVar4];
      param_4[(longlong)(param_1 + iVar21) - (longlong)(param_1 * 4)] =
           fVar24 + fVar25 + param_3[(lVar15 + 1) - (longlong)iVar4];
      lVar13 = (longlong)(local_res18 + param_1 * -3);
      lVar17 = (longlong)((iVar7 + 3) * param_1 + iVar11);
      param_4[lVar13 - param_1 * 4] =
           (param_3[(lVar16 + 1) - (longlong)iVar4] -
           param_3[((longlong)iVar11 + 1) - (longlong)iVar4]) * fVar3;
      lVar16 = (longlong)((iVar5 + 3) * param_1 + iVar11);
      param_4[(lVar13 + -1) - (longlong)(param_1 * 4)] =
           param_3[(lVar15 + 1) - (longlong)iVar4] - (fVar24 + fVar25) * fVar2;
      fVar24 = param_3[(lVar17 + 1) - (longlong)iVar4];
      fVar25 = param_3[((longlong)(iVar11 + param_1) + 1) - (longlong)iVar4];
      param_4[(longlong)(param_1 * 4 + iVar21) - (longlong)(param_1 * 4)] =
           fVar24 + fVar25 + param_3[(lVar16 + 1) - (longlong)iVar4];
      param_4[(longlong)local_res18 - (longlong)(param_1 * 4)] =
           (param_3[(lVar17 + 1) - (longlong)iVar4] -
           param_3[((longlong)(iVar11 + param_1) + 1) - (longlong)iVar4]) * fVar3;
      param_4[((longlong)local_res18 + -1) - (longlong)(param_1 * 4)] =
           param_3[(lVar16 + 1) - (longlong)iVar4] - (fVar24 + fVar25) * fVar2;
      lVar17 = (longlong)((iVar7 + 4) * param_1 + iVar11);
      lVar15 = (longlong)(iVar11 + ((param_2 * 2 + 4) - iVar9) * param_1);
      fVar24 = param_3[(lVar17 + 1) - (longlong)iVar4];
      fVar25 = param_3[(lVar15 + 1) - (longlong)iVar4];
      lVar16 = (longlong)((iVar5 + 4) * param_1 + iVar11);
      iVar11 = iVar11 + param_1 * 4;
      iVar6 = param_1 * 7 + iVar21;
      iVar21 = iVar21 + iVar23;
      param_4[(longlong)iVar6 - (longlong)(param_1 * 4)] =
           fVar24 + fVar25 + param_3[(lVar16 + 1) - (longlong)iVar4];
      lVar13 = (longlong)(local_res18 + param_1 * 3);
      param_4[lVar13 - param_1 * 4] =
           (param_3[(lVar17 + 1) - (longlong)iVar4] - param_3[(lVar15 + 1) - (longlong)iVar4]) *
           fVar3;
      param_4[(lVar13 + -1) - (longlong)(param_1 * 4)] =
           param_3[(lVar16 + 1) - (longlong)iVar4] - (fVar24 + fVar25) * fVar2;
      uVar22 = uVar22 - 1;
      local_res18 = local_res18 + iVar23;
    } while (uVar22 != 0);
  }
  iVar21 = 1;
  if (iVar20 <= param_2) {
    pfVar10 = param_3 + (((longlong)((iVar20 + param_2) * param_1) + 1) - (longlong)iVar4);
    pfVar18 = param_3 + (((longlong)((iVar20 + param_2 * 3) * param_1) + 1) - (longlong)iVar4);
    pfVar14 = param_3 + (((longlong)((iVar20 + param_2 * 2) * param_1) + 1) - (longlong)iVar4);
    pfVar12 = param_4 + (((longlong)((iVar20 * 3 + 3) * param_1) + -1) - (longlong)(param_1 * 4));
    pfVar8 = param_4 + ((longlong)((iVar20 * 3 + 1) * param_1) - (longlong)(param_1 * 4));
    uVar22 = (ulonglong)((param_2 - iVar20) + 1);
    do {
      fVar24 = *pfVar18;
      fVar25 = *pfVar14;
      *pfVar8 = fVar24 + fVar25 + *pfVar10;
      pfVar8 = pfVar8 + param_1 * 3;
      fVar26 = *pfVar18;
      pfVar18 = pfVar18 + uVar19;
      fVar27 = *pfVar14;
      pfVar14 = pfVar14 + uVar19;
      pfVar12[1] = (fVar26 - fVar27) * fVar3;
      fVar26 = *pfVar10;
      pfVar10 = pfVar10 + uVar19;
      *pfVar12 = fVar26 - (fVar24 + fVar25) * fVar2;
      pfVar12 = pfVar12 + param_1 * 3;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if ((param_1 != 1) && (0 < param_2)) {
    iVar20 = param_1 * 6 + -1;
    local_res18 = 3;
    uVar22 = uVar19;
    do {
      if (2 < (longlong)uVar19) {
        iVar7 = iVar21 + param_2 * 3;
        lVar13 = (longlong)param_5 - (longlong)param_6;
        iVar11 = (int)uVar22;
        iVar9 = iVar7 * iVar11 + 3;
        uVar22 = uVar19 - 1 >> 1;
        pfVar10 = param_6;
        iVar5 = iVar20;
        do {
          fVar24 = *pfVar10;
          pfVar18 = pfVar10 + 1;
          lVar16 = (longlong)(((param_2 * 2 - iVar7) + iVar21) * iVar11 + iVar9);
          lVar15 = (longlong)iVar9;
          pfVar14 = (float *)((longlong)pfVar10 + lVar13);
          pfVar8 = (float *)((longlong)pfVar10 + lVar13 + 4);
          pfVar12 = (float *)((longlong)pfVar10 + lVar13);
          pfVar1 = (float *)((longlong)pfVar10 + lVar13 + 4);
          pfVar10 = pfVar10 + 2;
          fVar29 = param_3[lVar16 - iVar4] * *pfVar12 -
                   param_3[(lVar16 + -1) - (longlong)iVar4] * *pfVar8;
          fVar28 = param_3[lVar16 - iVar4] * *pfVar1 +
                   param_3[(lVar16 + -1) - (longlong)iVar4] * *pfVar14;
          lVar17 = (longlong)(((iVar21 - iVar7) + param_2) * iVar11 + iVar9);
          fVar27 = *pfVar18 * param_3[lVar15 - iVar4] +
                   fVar24 * param_3[(lVar15 + -1) - (longlong)iVar4];
          lVar16 = (longlong)(iVar9 + ((local_res18 - iVar7) + 1) * iVar11);
          iVar23 = iVar9 + iVar11 * ((local_res18 - iVar7) + 3);
          iVar9 = iVar9 + 2;
          fVar26 = fVar24 * param_3[lVar15 - iVar4] -
                   *pfVar18 * param_3[(lVar15 + -1) - (longlong)iVar4];
          fVar25 = fVar27 + fVar28;
          fVar24 = fVar26 + fVar29;
          fVar27 = (fVar27 - fVar28) * fVar3;
          fVar26 = (fVar29 - fVar26) * fVar3;
          param_4[(lVar16 + -2) - (longlong)(param_1 * 4)] =
               fVar25 + param_3[(lVar17 + -1) - (longlong)iVar4];
          param_4[(lVar16 + -1) - (longlong)(param_1 * 4)] = fVar24 + param_3[lVar17 - iVar4];
          fVar25 = param_3[(lVar17 + -1) - (longlong)iVar4] - fVar25 * fVar2;
          lVar16 = (longlong)iVar23;
          fVar24 = param_3[lVar17 - iVar4] - fVar24 * fVar2;
          lVar15 = (longlong)iVar5;
          iVar5 = iVar5 + -2;
          param_4[(lVar16 + -2) - (longlong)(param_1 * 4)] = fVar26 + fVar25;
          param_4[(lVar15 + -2) - (longlong)(param_1 * 4)] = fVar25 - fVar26;
          param_4[(lVar16 + -1) - (longlong)(param_1 * 4)] = fVar27 + fVar24;
          param_4[(lVar15 + -1) - (longlong)(param_1 * 4)] = fVar27 - fVar24;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
        uVar22 = (ulonglong)(uint)param_1;
      }
      local_res18 = local_res18 + 3;
      iVar20 = iVar20 + param_1 * 3;
      iVar21 = iVar21 + 1;
    } while (iVar21 <= param_2);
  }
  return;
}

// radf3_ps @ 14f05cf70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
radf3_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6)

{
  __m128 *p_Var1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  __m128 *p_Var24;
  __m128 *p_Var25;
  longlong lVar26;
  __m128 *p_Var27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  __m128 *p_Var32;
  __m128 *p_Var33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  float *pfVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  int local_138;
  
  fVar17 = _UNK_1530ea51c;
  fVar16 = _UNK_1530ea518;
  fVar15 = _UNK_1530ea514;
  fVar14 = ___xmm_3f5db3d73f5db3d73f5db3d73f5db3d7;
  fVar13 = _UNK_15068972c;
  fVar12 = _UNK_150689728;
  fVar11 = _UNK_150689724;
  fVar10 = ___xmm_bf000000bf000000bf000000bf000000;
  iVar35 = 0;
  if (3 < param_2) {
    lVar30 = (longlong)(param_1 * 6);
    p_Var27 = param_4 + lVar30;
    lVar26 = (longlong)((param_2 + 1) * param_1);
    lVar22 = (longlong)(param_1 * 5);
    p_Var25 = param_4 + lVar22 + -1;
    p_Var24 = param_3 + lVar26;
    lVar31 = param_1 * 2 - lVar22;
    lVar36 = param_1 * 8 - lVar22;
    lVar22 = param_1 * 0xb - lVar22;
    iVar19 = param_2 * 2;
    lVar20 = (param_2 + 2) * param_1 - lVar26;
    lVar21 = param_1 * param_2 - lVar26;
    lVar28 = param_1 * 2 - lVar26;
    uVar18 = (param_2 - 4U >> 2) + 1;
    uVar23 = (ulonglong)uVar18;
    iVar35 = uVar18 * 4;
    do {
      p_Var32 = p_Var24 + -lVar26;
      fVar2 = p_Var32->m128_f32[1];
      fVar3 = p_Var32->m128_f32[2];
      fVar46 = p_Var32->m128_f32[3];
      p_Var33 = p_Var24 + (param_1 * param_2 * 2 - lVar26);
      fVar52 = p_Var33->m128_f32[0];
      fVar5 = p_Var33->m128_f32[1];
      fVar6 = p_Var33->m128_f32[2];
      fVar7 = p_Var33->m128_f32[3];
      p_Var33 = p_Var24 + lVar21;
      fVar38 = p_Var33->m128_f32[0] + fVar52;
      fVar40 = p_Var33->m128_f32[1] + fVar5;
      fVar42 = p_Var33->m128_f32[2] + fVar6;
      fVar44 = p_Var33->m128_f32[3] + fVar7;
      p_Var33 = p_Var24 + lVar21;
      fVar8 = p_Var33->m128_f32[0];
      fVar9 = p_Var33->m128_f32[1];
      fVar47 = p_Var33->m128_f32[2];
      fVar51 = p_Var33->m128_f32[3];
      p_Var33 = p_Var27 + -lVar30;
      p_Var33->m128_f32[0] = p_Var32->m128_f32[0] + fVar38;
      p_Var33->m128_f32[1] = fVar2 + fVar40;
      p_Var33->m128_f32[2] = fVar3 + fVar42;
      p_Var33->m128_f32[3] = fVar46 + fVar44;
      p_Var32 = p_Var25 + lVar31 + 1;
      p_Var32->m128_f32[0] = (fVar52 - fVar8) * fVar14;
      p_Var32->m128_f32[1] = (fVar5 - fVar9) * fVar15;
      p_Var32->m128_f32[2] = (fVar6 - fVar47) * fVar16;
      p_Var32->m128_f32[3] = (fVar7 - fVar51) * fVar17;
      p_Var32 = p_Var24 + ((iVar19 + 1) * param_1 - lVar26);
      fVar2 = p_Var32->m128_f32[0];
      fVar3 = p_Var32->m128_f32[1];
      fVar46 = p_Var32->m128_f32[2];
      fVar52 = p_Var32->m128_f32[3];
      fVar5 = p_Var24->m128_f32[0];
      fVar6 = p_Var24->m128_f32[1];
      fVar7 = p_Var24->m128_f32[2];
      fVar8 = p_Var24->m128_f32[3];
      fVar39 = fVar2 + p_Var24->m128_f32[0];
      fVar41 = fVar3 + p_Var24->m128_f32[1];
      fVar43 = fVar46 + p_Var24->m128_f32[2];
      fVar45 = fVar52 + p_Var24->m128_f32[3];
      p_Var32 = p_Var24 + -lVar26;
      fVar9 = p_Var32->m128_f32[1];
      fVar47 = p_Var32->m128_f32[2];
      fVar51 = p_Var32->m128_f32[3];
      p_Var33 = p_Var25 + lVar31;
      p_Var33->m128_f32[0] = fVar10 * fVar38 + p_Var32->m128_f32[0];
      p_Var33->m128_f32[1] = fVar11 * fVar40 + fVar9;
      p_Var33->m128_f32[2] = fVar12 * fVar42 + fVar47;
      p_Var33->m128_f32[3] = fVar13 * fVar44 + fVar51;
      p_Var32 = p_Var24 + (param_1 - lVar26);
      fVar9 = p_Var32->m128_f32[1];
      fVar47 = p_Var32->m128_f32[2];
      fVar51 = p_Var32->m128_f32[3];
      p_Var33 = p_Var27 + (param_1 * 3 - lVar30);
      p_Var33->m128_f32[0] = p_Var32->m128_f32[0] + fVar39;
      p_Var33->m128_f32[1] = fVar9 + fVar41;
      p_Var33->m128_f32[2] = fVar47 + fVar43;
      p_Var33->m128_f32[3] = fVar51 + fVar45;
      p_Var25[1].m128_f32[0] = (fVar2 - fVar5) * fVar14;
      *(float *)((longlong)p_Var25 + 0x14) = (fVar3 - fVar6) * fVar15;
      *(float *)((longlong)p_Var25 + 0x18) = (fVar46 - fVar7) * fVar16;
      *(float *)((longlong)p_Var25 + 0x1c) = (fVar52 - fVar8) * fVar17;
      p_Var32 = p_Var24 + lVar20;
      p_Var33 = p_Var24 + ((iVar19 + 2) * param_1 - lVar26);
      fVar2 = p_Var33->m128_f32[0];
      fVar3 = p_Var33->m128_f32[1];
      fVar46 = p_Var33->m128_f32[2];
      fVar52 = p_Var33->m128_f32[3];
      fVar42 = p_Var32->m128_f32[0] + fVar2;
      fVar44 = p_Var32->m128_f32[1] + fVar3;
      fVar48 = p_Var32->m128_f32[2] + fVar46;
      fVar49 = p_Var32->m128_f32[3] + fVar52;
      p_Var32 = p_Var24 + lVar20;
      fVar5 = p_Var32->m128_f32[0];
      fVar6 = p_Var32->m128_f32[1];
      fVar7 = p_Var32->m128_f32[2];
      fVar8 = p_Var32->m128_f32[3];
      p_Var32 = p_Var24 + (param_1 - lVar26);
      fVar9 = p_Var32->m128_f32[1];
      fVar47 = p_Var32->m128_f32[2];
      fVar51 = p_Var32->m128_f32[3];
      p_Var25->m128_f32[0] = fVar10 * fVar39 + p_Var32->m128_f32[0];
      p_Var25->m128_f32[1] = fVar11 * fVar41 + fVar9;
      p_Var25->m128_f32[2] = fVar12 * fVar43 + fVar47;
      p_Var25->m128_f32[3] = fVar13 * fVar45 + fVar51;
      p_Var32 = p_Var24 + lVar28;
      fVar9 = p_Var32->m128_f32[1];
      fVar47 = p_Var32->m128_f32[2];
      fVar51 = p_Var32->m128_f32[3];
      p_Var33 = p_Var24 + lVar28;
      fVar38 = p_Var33->m128_f32[0];
      fVar39 = p_Var33->m128_f32[1];
      fVar40 = p_Var33->m128_f32[2];
      fVar41 = p_Var33->m128_f32[3];
      p_Var27->m128_f32[0] = p_Var32->m128_f32[0] + fVar42;
      p_Var27->m128_f32[1] = fVar9 + fVar44;
      p_Var27->m128_f32[2] = fVar47 + fVar48;
      p_Var27->m128_f32[3] = fVar51 + fVar49;
      p_Var32 = p_Var25 + lVar36 + 1;
      p_Var32->m128_f32[0] = (fVar2 - fVar5) * fVar14;
      p_Var32->m128_f32[1] = (fVar3 - fVar6) * fVar15;
      p_Var32->m128_f32[2] = (fVar46 - fVar7) * fVar16;
      p_Var32->m128_f32[3] = (fVar52 - fVar8) * fVar17;
      p_Var32 = p_Var24 + ((iVar19 + 3) * param_1 - lVar26);
      fVar2 = p_Var32->m128_f32[0];
      fVar3 = p_Var32->m128_f32[1];
      fVar46 = p_Var32->m128_f32[2];
      fVar52 = p_Var32->m128_f32[3];
      p_Var32 = p_Var25 + lVar36;
      p_Var32->m128_f32[0] = fVar42 * fVar10 + fVar38;
      p_Var32->m128_f32[1] = fVar44 * fVar11 + fVar39;
      p_Var32->m128_f32[2] = fVar48 * fVar12 + fVar40;
      p_Var32->m128_f32[3] = fVar49 * fVar13 + fVar41;
      p_Var32 = p_Var24 + ((param_2 + 3) * param_1 - lVar26);
      fVar5 = p_Var32->m128_f32[0];
      fVar6 = p_Var32->m128_f32[1];
      fVar7 = p_Var32->m128_f32[2];
      fVar8 = p_Var32->m128_f32[3];
      fVar39 = fVar5 + fVar2;
      fVar40 = fVar6 + fVar3;
      fVar41 = fVar7 + fVar46;
      fVar42 = fVar8 + fVar52;
      p_Var32 = p_Var24 + (param_1 * 3 - lVar26);
      fVar9 = p_Var32->m128_f32[0];
      fVar47 = p_Var32->m128_f32[1];
      fVar51 = p_Var32->m128_f32[2];
      fVar38 = p_Var32->m128_f32[3];
      p_Var24 = p_Var24 + param_1 * 4;
      p_Var32 = p_Var27 + (param_1 * 9 - lVar30);
      p_Var32->m128_f32[0] = fVar9 + fVar39;
      p_Var32->m128_f32[1] = fVar47 + fVar40;
      p_Var32->m128_f32[2] = fVar51 + fVar41;
      p_Var32->m128_f32[3] = fVar38 + fVar42;
      p_Var27 = p_Var27 + param_1 * 0xc;
      p_Var32 = p_Var25 + lVar22 + 1;
      p_Var32->m128_f32[0] = (fVar2 - fVar5) * fVar14;
      p_Var32->m128_f32[1] = (fVar3 - fVar6) * fVar15;
      p_Var32->m128_f32[2] = (fVar46 - fVar7) * fVar16;
      p_Var32->m128_f32[3] = (fVar52 - fVar8) * fVar17;
      p_Var32 = p_Var25 + lVar22;
      p_Var32->m128_f32[0] = fVar39 * fVar10 + fVar9;
      p_Var32->m128_f32[1] = fVar40 * fVar11 + fVar47;
      p_Var32->m128_f32[2] = fVar41 * fVar12 + fVar51;
      p_Var32->m128_f32[3] = fVar42 * fVar13 + fVar38;
      p_Var25 = p_Var25 + param_1 * 0xc;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  if (iVar35 < param_2) {
    p_Var25 = param_3 + iVar35 * param_1;
    p_Var32 = param_4 + iVar35 * param_1 * 3;
    p_Var33 = param_3 + (iVar35 + param_2) * param_1;
    p_Var27 = param_3 + (iVar35 + param_2 * 2) * param_1;
    p_Var24 = param_4 + (iVar35 * 3 + 2) * param_1;
    uVar23 = (ulonglong)(uint)(param_2 - iVar35);
    do {
      fVar2 = p_Var27->m128_f32[0];
      fVar3 = p_Var27->m128_f32[1];
      fVar46 = p_Var27->m128_f32[2];
      fVar52 = p_Var27->m128_f32[3];
      p_Var27 = p_Var27 + param_1;
      fVar43 = p_Var33->m128_f32[0] + fVar2;
      fVar44 = p_Var33->m128_f32[1] + fVar3;
      fVar45 = p_Var33->m128_f32[2] + fVar46;
      fVar48 = p_Var33->m128_f32[3] + fVar52;
      fVar5 = p_Var33->m128_f32[0];
      fVar6 = p_Var33->m128_f32[1];
      fVar7 = p_Var33->m128_f32[2];
      fVar8 = p_Var33->m128_f32[3];
      p_Var33 = p_Var33 + param_1;
      fVar9 = p_Var25->m128_f32[0];
      fVar47 = p_Var25->m128_f32[1];
      fVar51 = p_Var25->m128_f32[2];
      fVar38 = p_Var25->m128_f32[3];
      fVar39 = p_Var25->m128_f32[0];
      fVar40 = p_Var25->m128_f32[1];
      fVar41 = p_Var25->m128_f32[2];
      fVar42 = p_Var25->m128_f32[3];
      p_Var25 = p_Var25 + param_1;
      p_Var32->m128_f32[0] = fVar43 + fVar9;
      p_Var32->m128_f32[1] = fVar44 + fVar47;
      p_Var32->m128_f32[2] = fVar45 + fVar51;
      p_Var32->m128_f32[3] = fVar48 + fVar38;
      p_Var32 = p_Var32 + param_1 * 3;
      p_Var24->m128_f32[0] = (fVar2 - fVar5) * fVar14;
      p_Var24->m128_f32[1] = (fVar3 - fVar6) * fVar15;
      p_Var24->m128_f32[2] = (fVar46 - fVar7) * fVar16;
      p_Var24->m128_f32[3] = (fVar52 - fVar8) * fVar17;
      p_Var24[-1].m128_f32[0] = fVar43 * fVar10 + fVar39;
      *(float *)((longlong)p_Var24 + -0xc) = fVar44 * fVar11 + fVar40;
      *(float *)((longlong)p_Var24 + -8) = fVar45 * fVar12 + fVar41;
      *(float *)((longlong)p_Var24 + -4) = fVar48 * fVar13 + fVar42;
      p_Var24 = p_Var24 + param_1 * 3;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  lVar20 = (longlong)param_1;
  if ((param_1 != 1) && (0 < param_2)) {
    iVar29 = param_1 * 2 + -2;
    p_Var24 = param_3 + 1;
    local_138 = 2;
    iVar19 = param_1 * param_2;
    iVar35 = iVar19 * 2;
    uVar23 = (ulonglong)(uint)param_2;
    do {
      if (2 < lVar20) {
        pfVar37 = param_5 + 1;
        lVar21 = (lVar20 - 3U >> 1) + 1;
        p_Var25 = p_Var24;
        iVar4 = iVar29;
        iVar34 = local_138;
        do {
          p_Var27 = p_Var25 + iVar19;
          p_Var32 = p_Var25 + (longlong)iVar19 + 1;
          fVar2 = pfVar37[-1];
          fVar3 = *pfVar37;
          fVar46 = *(float *)((longlong)pfVar37 + ((longlong)param_6 - (longlong)param_5) + -4);
          lVar22 = (longlong)(iVar35 + iVar34);
          fVar52 = *(float *)((longlong)pfVar37 + ((longlong)param_6 - (longlong)param_5));
          pfVar37 = pfVar37 + 2;
          fVar5 = p_Var25[1].m128_f32[0];
          fVar6 = *(float *)((longlong)p_Var25 + 0x14);
          fVar7 = *(float *)((longlong)p_Var25 + 0x18);
          fVar8 = *(float *)((longlong)p_Var25 + 0x1c);
          fVar54 = p_Var32->m128_f32[0] * fVar3 + p_Var27->m128_f32[0] * fVar2;
          fVar55 = p_Var32->m128_f32[1] * fVar3 + p_Var27->m128_f32[1] * fVar2;
          fVar56 = p_Var32->m128_f32[2] * fVar3 + p_Var27->m128_f32[2] * fVar2;
          fVar57 = p_Var32->m128_f32[3] * fVar3 + p_Var27->m128_f32[3] * fVar2;
          p_Var33 = param_3 + lVar22 + -1;
          p_Var1 = param_3 + lVar22;
          fVar58 = p_Var32->m128_f32[0] * fVar2 - p_Var27->m128_f32[0] * fVar3;
          fVar59 = p_Var32->m128_f32[1] * fVar2 - p_Var27->m128_f32[1] * fVar3;
          fVar60 = p_Var32->m128_f32[2] * fVar2 - p_Var27->m128_f32[2] * fVar3;
          fVar61 = p_Var32->m128_f32[3] * fVar2 - p_Var27->m128_f32[3] * fVar3;
          p_Var27 = param_3 + lVar22 + -1;
          p_Var32 = param_3 + lVar22;
          fVar43 = fVar52 * p_Var1->m128_f32[0] + fVar46 * p_Var33->m128_f32[0];
          fVar45 = fVar52 * p_Var1->m128_f32[1] + fVar46 * p_Var33->m128_f32[1];
          fVar49 = fVar52 * p_Var1->m128_f32[2] + fVar46 * p_Var33->m128_f32[2];
          fVar53 = fVar52 * p_Var1->m128_f32[3] + fVar46 * p_Var33->m128_f32[3];
          fVar2 = p_Var25->m128_f32[1];
          fVar3 = p_Var25->m128_f32[2];
          fVar9 = p_Var25->m128_f32[3];
          fVar51 = fVar46 * p_Var32->m128_f32[0] - fVar52 * p_Var27->m128_f32[0];
          fVar39 = fVar46 * p_Var32->m128_f32[1] - fVar52 * p_Var27->m128_f32[1];
          fVar41 = fVar46 * p_Var32->m128_f32[2] - fVar52 * p_Var27->m128_f32[2];
          fVar52 = fVar46 * p_Var32->m128_f32[3] - fVar52 * p_Var27->m128_f32[3];
          fVar46 = fVar43 + fVar54;
          fVar47 = fVar45 + fVar55;
          fVar38 = fVar49 + fVar56;
          fVar40 = fVar53 + fVar57;
          fVar42 = fVar51 + fVar58;
          fVar44 = fVar39 + fVar59;
          fVar48 = fVar41 + fVar60;
          fVar50 = fVar52 + fVar61;
          fVar54 = (fVar43 - fVar54) * fVar14;
          fVar55 = (fVar45 - fVar55) * fVar15;
          fVar56 = (fVar49 - fVar56) * fVar16;
          fVar57 = (fVar53 - fVar57) * fVar17;
          fVar58 = (fVar58 - fVar51) * fVar14;
          fVar59 = (fVar59 - fVar39) * fVar15;
          fVar60 = (fVar60 - fVar41) * fVar16;
          fVar61 = (fVar61 - fVar52) * fVar17;
          fVar52 = fVar46 * fVar10 + p_Var25->m128_f32[0];
          fVar51 = fVar47 * fVar11 + p_Var25->m128_f32[1];
          fVar39 = fVar38 * fVar12 + p_Var25->m128_f32[2];
          fVar41 = fVar40 * fVar13 + p_Var25->m128_f32[3];
          fVar43 = fVar42 * fVar10 + p_Var25[1].m128_f32[0];
          fVar45 = fVar44 * fVar11 + *(float *)((longlong)p_Var25 + 0x14);
          fVar49 = fVar48 * fVar12 + *(float *)((longlong)p_Var25 + 0x18);
          fVar53 = fVar50 * fVar13 + *(float *)((longlong)p_Var25 + 0x1c);
          p_Var27 = param_4 + (longlong)iVar34 + -1;
          p_Var27->m128_f32[0] = p_Var25->m128_f32[0] + fVar46;
          p_Var27->m128_f32[1] = fVar2 + fVar47;
          p_Var27->m128_f32[2] = fVar3 + fVar38;
          p_Var27->m128_f32[3] = fVar9 + fVar40;
          p_Var25 = p_Var25 + 2;
          p_Var27 = param_4 + iVar34;
          p_Var27->m128_f32[0] = fVar5 + fVar42;
          p_Var27->m128_f32[1] = fVar6 + fVar44;
          p_Var27->m128_f32[2] = fVar7 + fVar48;
          p_Var27->m128_f32[3] = fVar8 + fVar50;
          lVar22 = (longlong)(param_1 * 2 + iVar34);
          iVar34 = iVar34 + 2;
          p_Var27 = param_4 + lVar22 + -1;
          p_Var27->m128_f32[0] = fVar58 + fVar52;
          p_Var27->m128_f32[1] = fVar59 + fVar51;
          p_Var27->m128_f32[2] = fVar60 + fVar39;
          p_Var27->m128_f32[3] = fVar61 + fVar41;
          p_Var27 = param_4 + (longlong)iVar4 + -1;
          p_Var27->m128_f32[0] = fVar52 - fVar58;
          p_Var27->m128_f32[1] = fVar51 - fVar59;
          p_Var27->m128_f32[2] = fVar39 - fVar60;
          p_Var27->m128_f32[3] = fVar41 - fVar61;
          p_Var27 = param_4 + lVar22;
          p_Var27->m128_f32[0] = fVar43 + fVar54;
          p_Var27->m128_f32[1] = fVar45 + fVar55;
          p_Var27->m128_f32[2] = fVar49 + fVar56;
          p_Var27->m128_f32[3] = fVar53 + fVar57;
          p_Var27 = param_4 + iVar4;
          p_Var27->m128_f32[0] = fVar54 - fVar43;
          p_Var27->m128_f32[1] = fVar55 - fVar45;
          p_Var27->m128_f32[2] = fVar56 - fVar49;
          p_Var27->m128_f32[3] = fVar57 - fVar53;
          lVar21 = lVar21 + -1;
          iVar4 = iVar4 + -2;
        } while (lVar21 != 0);
      }
      iVar29 = iVar29 + param_1 * 3;
      local_138 = local_138 + param_1 * 3;
      p_Var24 = p_Var24 + lVar20;
      iVar35 = iVar35 + param_1 * -2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  return;
}

// radf4 @ 14f05d650

void __cdecl
radf4(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
     float *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int local_res8;
  int local_res20;
  int local_f0;
  
  uVar15 = (ulonglong)param_1;
  iVar27 = 1;
  lVar20 = (longlong)(param_1 * 5);
  iVar26 = param_1 * 4;
  iVar2 = (param_2 + 1) * param_1 + 1;
  if (3 < param_2) {
    iVar1 = param_2 * 2 + 2;
    iVar12 = param_2 * 4 - iVar1;
    iVar3 = param_1 * 7;
    iVar8 = param_2 * 3 - iVar1;
    iVar28 = iVar1 * param_1;
    iVar4 = param_2 - iVar1;
    uVar16 = (ulonglong)((uint)param_2 >> 2);
    iVar27 = ((uint)param_2 >> 2) * 4 + 1;
    do {
      lVar21 = (longlong)(iVar28 + (iVar12 + 1) * param_1);
      lVar18 = (longlong)(iVar28 + (iVar8 + 1) * param_1);
      fVar31 = param_3[((longlong)(iVar28 - param_1) + 1) - (longlong)iVar2];
      fVar29 = param_3[(lVar21 + 1) - (longlong)iVar2];
      lVar13 = (longlong)((iVar4 + 1) * param_1 + iVar28);
      fVar34 = param_3[(lVar13 + 1) - (longlong)iVar2];
      fVar33 = param_3[(lVar18 + 1) - (longlong)iVar2];
      param_4[(param_1 * -2 + iVar3) - lVar20] = fVar34 + fVar33 + fVar31 + fVar29;
      lVar9 = (longlong)(param_1 * 2 + iVar3);
      param_4[(lVar9 + -1) - lVar20] = (fVar34 + fVar33) - (fVar31 + fVar29);
      param_4[((longlong)iVar3 + -1) - lVar20] =
           param_3[(lVar13 + 1) - (longlong)iVar2] - param_3[(lVar18 + 1) - (longlong)iVar2];
      param_4[iVar3 - lVar20] =
           param_3[(lVar21 + 1) - (longlong)iVar2] -
           param_3[((longlong)(iVar28 - param_1) + 1) - (longlong)iVar2];
      fVar31 = param_3[((longlong)iVar28 + 1) - (longlong)iVar2];
      lVar21 = (longlong)(iVar28 + (iVar12 + 2) * param_1);
      lVar18 = (longlong)((iVar8 + 2) * param_1 + iVar28);
      fVar29 = param_3[(lVar21 + 1) - (longlong)iVar2];
      lVar13 = (longlong)((iVar4 + 2) * param_1 + iVar28);
      lVar24 = (longlong)(param_1 * 6 + iVar3);
      fVar34 = param_3[(lVar13 + 1) - (longlong)iVar2];
      fVar33 = param_3[(lVar18 + 1) - (longlong)iVar2];
      param_4[lVar9 - lVar20] = fVar34 + fVar33 + fVar31 + fVar29;
      param_4[(lVar24 + -1) - lVar20] = (fVar34 + fVar33) - (fVar31 + fVar29);
      param_4[((longlong)(iVar26 + iVar3) + -1) - lVar20] =
           param_3[(lVar13 + 1) - (longlong)iVar2] - param_3[(lVar18 + 1) - (longlong)iVar2];
      lVar22 = (longlong)((iVar12 + 3) * param_1 + iVar28);
      lVar18 = (longlong)((iVar8 + 3) * param_1 + iVar28);
      param_4[(iVar26 + iVar3) - lVar20] =
           param_3[(lVar21 + 1) - (longlong)iVar2] -
           param_3[((longlong)iVar28 + 1) - (longlong)iVar2];
      fVar31 = param_3[((longlong)(param_1 + iVar28) + 1) - (longlong)iVar2];
      fVar29 = param_3[(lVar22 + 1) - (longlong)iVar2];
      lVar13 = (longlong)((iVar4 + 3) * param_1 + iVar28);
      fVar34 = param_3[(lVar13 + 1) - (longlong)iVar2];
      fVar33 = param_3[(lVar18 + 1) - (longlong)iVar2];
      param_4[lVar24 - lVar20] = fVar34 + fVar33 + fVar31 + fVar29;
      lVar25 = (longlong)(param_1 * 10 + iVar3);
      lVar9 = (longlong)(param_1 * 8 + iVar3);
      param_4[(lVar25 + -1) - lVar20] = (fVar34 + fVar33) - (fVar31 + fVar29);
      param_4[(lVar9 + -1) - lVar20] =
           param_3[(lVar13 + 1) - (longlong)iVar2] - param_3[(lVar18 + 1) - (longlong)iVar2];
      lVar24 = (longlong)((iVar12 + 4) * param_1 + iVar28);
      lVar21 = (longlong)(iVar28 + ((param_2 * 2 + 4) - iVar1) * param_1);
      param_4[lVar9 - lVar20] =
           param_3[(lVar22 + 1) - (longlong)iVar2] -
           param_3[((longlong)(param_1 + iVar28) + 1) - (longlong)iVar2];
      fVar31 = param_3[(lVar21 + 1) - (longlong)iVar2];
      fVar29 = param_3[(lVar24 + 1) - (longlong)iVar2];
      lVar18 = (longlong)((iVar8 + 4) * param_1 + iVar28);
      iVar5 = (iVar4 + 4) * param_1 + iVar28;
      iVar28 = iVar28 + iVar26;
      lVar13 = (longlong)iVar5;
      iVar5 = param_1 * 0xe + iVar3;
      fVar34 = param_3[(lVar13 + 1) - (longlong)iVar2];
      fVar33 = param_3[(lVar18 + 1) - (longlong)iVar2];
      iVar6 = param_1 * 0xc + iVar3;
      iVar3 = iVar3 + param_1 * 0x10;
      param_4[lVar25 - lVar20] = fVar34 + fVar33 + fVar31 + fVar29;
      param_4[((longlong)iVar5 + -1) - lVar20] = (fVar34 + fVar33) - (fVar31 + fVar29);
      lVar9 = (longlong)iVar6;
      param_4[(lVar9 + -1) - lVar20] =
           param_3[(lVar13 + 1) - (longlong)iVar2] - param_3[(lVar18 + 1) - (longlong)iVar2];
      param_4[lVar9 - lVar20] =
           param_3[(lVar24 + 1) - (longlong)iVar2] - param_3[(lVar21 + 1) - (longlong)iVar2];
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (iVar27 <= param_2) {
    iVar1 = iVar27 * 4;
    pfVar19 = param_3 + (((longlong)((param_2 * 2 + iVar27) * param_1) + 1) - (longlong)iVar2);
    pfVar10 = param_3 + (((longlong)((param_2 * 3 + iVar27) * param_1) + 1) - (longlong)iVar2);
    pfVar23 = param_3 + (((longlong)((param_2 * 4 + iVar27) * param_1) + 1) - (longlong)iVar2);
    pfVar11 = param_4 + (((longlong)((iVar1 + 3) * param_1) + -1) - lVar20);
    pfVar17 = param_3 + (((longlong)((param_2 + iVar27) * param_1) + 1) - (longlong)iVar2);
    pfVar7 = param_4 + (((longlong)((iVar1 + 5) * param_1) + -1) - lVar20);
    uVar16 = (ulonglong)((param_2 - iVar27) + 1);
    pfVar14 = param_4 + ((iVar1 + 1) * param_1 - lVar20);
    do {
      fVar31 = *pfVar10;
      fVar29 = *pfVar17;
      fVar34 = *pfVar23;
      fVar33 = *pfVar19;
      *pfVar14 = fVar31 + fVar29 + fVar34 + fVar33;
      pfVar14 = pfVar14 + iVar26;
      *pfVar7 = (fVar31 + fVar29) - (fVar34 + fVar33);
      pfVar7 = pfVar7 + iVar26;
      fVar31 = *pfVar17;
      pfVar17 = pfVar17 + uVar15;
      fVar29 = *pfVar10;
      pfVar10 = pfVar10 + uVar15;
      *pfVar11 = fVar31 - fVar29;
      fVar31 = *pfVar23;
      pfVar23 = pfVar23 + uVar15;
      fVar29 = *pfVar19;
      pfVar19 = pfVar19 + uVar15;
      pfVar11[1] = fVar31 - fVar29;
      pfVar11 = pfVar11 + iVar26;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  iVar26 = param_1 * 4;
  if (1 < param_1) {
    if (param_1 != 2) {
      local_f0 = 1;
      uVar16 = uVar15;
      if (0 < param_2) {
        local_res20 = 4;
        iVar27 = param_1 * 7 + -1;
        do {
          if (2 < uVar15) {
            iVar1 = local_f0 + param_2 * 3;
            lVar9 = (longlong)param_7 - (longlong)param_6;
            lVar13 = (longlong)param_5 - (longlong)param_6;
            iVar3 = (int)uVar16;
            iVar8 = iVar1 * iVar3 + 3;
            uVar16 = uVar15 - 1 >> 1;
            pfVar19 = param_6;
            iVar4 = iVar27;
            do {
              lVar18 = (longlong)(iVar8 + ((param_2 * 2 - iVar1) + local_f0) * iVar3);
              fVar31 = param_3[lVar18 - iVar2] * *(float *)((longlong)pfVar19 + lVar13 + 4) +
                       param_3[(lVar18 + -1) - (longlong)iVar2] *
                       *(float *)((longlong)pfVar19 + lVar13);
              fVar36 = param_3[lVar18 - iVar2] * *(float *)((longlong)pfVar19 + lVar13) -
                       param_3[(lVar18 + -1) - (longlong)iVar2] *
                       *(float *)((longlong)pfVar19 + lVar13 + 4);
              lVar18 = (longlong)(iVar8 + ((param_2 * 4 - iVar1) + local_f0) * iVar3);
              fVar34 = param_3[(longlong)iVar8 - (longlong)iVar2] * pfVar19[1] +
                       param_3[((longlong)iVar8 + -1) - (longlong)iVar2] * *pfVar19;
              fVar33 = param_3[(longlong)iVar8 - (longlong)iVar2] * *pfVar19 -
                       param_3[((longlong)iVar8 + -1) - (longlong)iVar2] * pfVar19[1];
              lVar21 = (longlong)(iVar8 + ((local_f0 - iVar1) + param_2) * iVar3);
              lVar22 = (longlong)(iVar8 + ((local_res20 - iVar1) + 1) * iVar3);
              fVar35 = param_3[lVar18 - iVar2] * *(float *)(lVar9 + 4 + (longlong)pfVar19) +
                       param_3[(lVar18 + -1) - (longlong)iVar2] *
                       *(float *)(lVar9 + (longlong)pfVar19);
              fVar29 = param_3[lVar18 - iVar2] * *(float *)(lVar9 + (longlong)pfVar19) -
                       param_3[(lVar18 + -1) - (longlong)iVar2] *
                       *(float *)(lVar9 + 4 + (longlong)pfVar19);
              fVar30 = fVar35 + fVar31;
              fVar35 = fVar35 - fVar31;
              fVar31 = param_3[(lVar21 + -1) - (longlong)iVar2] + fVar34;
              fVar34 = param_3[(lVar21 + -1) - (longlong)iVar2] - fVar34;
              fVar32 = fVar29 + fVar36;
              fVar36 = fVar36 - fVar29;
              lVar18 = (longlong)(iVar3 * 2 + iVar4);
              fVar29 = param_3[lVar21 - iVar2] + fVar33;
              fVar33 = param_3[lVar21 - iVar2] - fVar33;
              iVar12 = ((local_res20 - iVar1) + 3) * iVar3 + iVar8;
              iVar8 = iVar8 + 2;
              param_4[(lVar22 + -2) - lVar20] = fVar31 + fVar30;
              param_4[(lVar18 + -2) - lVar20] = fVar31 - fVar30;
              param_4[(lVar22 + -1) - lVar20] = fVar29 + fVar32;
              param_4[(lVar18 + -1) - lVar20] = fVar32 - fVar29;
              lVar18 = (longlong)iVar12;
              param_4[(lVar18 + -2) - lVar20] = fVar34 + fVar36;
              param_4[((longlong)iVar4 + -2) - lVar20] = fVar34 - fVar36;
              param_4[(lVar18 + -1) - lVar20] = fVar33 + fVar35;
              param_4[((longlong)iVar4 + -1) - lVar20] = fVar35 - fVar33;
              iVar4 = iVar4 + -2;
              pfVar19 = pfVar19 + 2;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            uVar16 = (ulonglong)(uint)param_1;
          }
          local_f0 = local_f0 + 1;
          local_res20 = local_res20 + 4;
          iVar27 = iVar27 + iVar26;
        } while (local_f0 <= param_2);
        iVar26 = (int)uVar16 * 4;
      }
      param_1 = (int)uVar16;
      if ((uVar16 & 1) != 0) {
        return;
      }
    }
    fVar29 = __real_bf3504f3;
    fVar31 = __real_3f3504f3;
    if (param_2 < 4) {
      iVar27 = 1;
    }
    else {
      iVar1 = param_2 * 2 + 2;
      param_6._0_4_ = param_1 * 8;
      iVar12 = param_2 * 4 - iVar1;
      iVar28 = iVar1 * param_1;
      iVar4 = param_2 - iVar1;
      iVar8 = param_1 * 0x10;
      iVar3 = param_2 * 3 - iVar1;
      uVar15 = (ulonglong)((uint)param_2 >> 2);
      iVar27 = ((uint)param_2 >> 2) * 4 + 1;
      local_res8 = iVar8;
      do {
        lVar9 = (longlong)(iVar28 + (iVar4 + 2) * param_1);
        lVar18 = (longlong)((int)param_6 + param_1 * -2);
        fVar33 = param_3[(longlong)(iVar28 + (iVar12 + 2) * param_1) - (longlong)iVar2] * fVar29 -
                 param_3[(longlong)iVar28 - (longlong)iVar2] * fVar31;
        fVar34 = (param_3[(longlong)iVar28 - (longlong)iVar2] -
                 param_3[(longlong)(iVar28 + (iVar12 + 2) * param_1) - (longlong)iVar2]) * fVar31;
        param_4[(lVar18 + -1) - lVar20] = fVar34 + param_3[lVar9 - iVar2];
        lVar13 = (longlong)(iVar28 + (iVar3 + 2) * param_1);
        param_4[((longlong)(int)param_6 + -1) - lVar20] = param_3[lVar9 - iVar2] - fVar34;
        param_4[lVar18 - lVar20] = fVar33 - param_3[lVar13 - iVar2];
        param_4[(int)param_6 - lVar20] = fVar33 + param_3[lVar13 - iVar2];
        lVar9 = (longlong)((iVar4 + 3) * param_1 + iVar28);
        lVar21 = (longlong)((int)param_6 + param_1 * 2);
        fVar33 = param_3[(longlong)((iVar12 + 3) * param_1 + iVar28) - (longlong)iVar2] * fVar29 -
                 param_3[(longlong)(iVar28 + param_1) - (longlong)iVar2] * fVar31;
        lVar18 = (longlong)(local_res8 + param_1 * -4);
        fVar34 = (param_3[(longlong)(iVar28 + param_1) - (longlong)iVar2] -
                 param_3[(longlong)((iVar12 + 3) * param_1 + iVar28) - (longlong)iVar2]) * fVar31;
        param_4[(lVar21 + -1) - lVar20] = fVar34 + param_3[lVar9 - iVar2];
        lVar13 = (longlong)((iVar3 + 3) * param_1 + iVar28);
        param_4[(lVar18 + -1) - lVar20] = param_3[lVar9 - iVar2] - fVar34;
        param_4[lVar21 - lVar20] = fVar33 - param_3[lVar13 - iVar2];
        param_4[lVar18 - lVar20] = fVar33 + param_3[lVar13 - iVar2];
        fVar33 = param_3[(longlong)((iVar12 + 4) * param_1 + iVar28) - (longlong)iVar2] * fVar29 -
                 param_3[(longlong)(iVar28 + ((param_2 * 2 + 4) - iVar1) * param_1) -
                         (longlong)iVar2] * fVar31;
        fVar34 = (param_3[(longlong)(iVar28 + ((param_2 * 2 + 4) - iVar1) * param_1) -
                          (longlong)iVar2] -
                 param_3[(longlong)((iVar12 + 4) * param_1 + iVar28) - (longlong)iVar2]) * fVar31;
        lVar9 = (longlong)((iVar4 + 4) * param_1 + iVar28);
        lVar18 = (longlong)((int)param_6 + param_1 * 6);
        param_4[(lVar18 + -1) - lVar20] = fVar34 + param_3[lVar9 - iVar2];
        lVar13 = (longlong)((iVar3 + 4) * param_1 + iVar28);
        param_4[((longlong)local_res8 + -1) - lVar20] = param_3[lVar9 - iVar2] - fVar34;
        param_4[lVar18 - lVar20] = fVar33 - param_3[lVar13 - iVar2];
        param_4[local_res8 - lVar20] = fVar33 + param_3[lVar13 - iVar2];
        lVar9 = (longlong)((iVar4 + 5) * param_1 + iVar28);
        lVar18 = (longlong)((int)param_6 + param_1 * 10);
        fVar33 = param_3[(longlong)((iVar12 + 5) * param_1 + iVar28) - (longlong)iVar2] * fVar29 -
                 param_3[(longlong)(param_1 * 3 + iVar28) - (longlong)iVar2] * fVar31;
        iVar5 = (iVar3 + 5) * param_1 + iVar28;
        fVar34 = (param_3[(longlong)(param_1 * 3 + iVar28) - (longlong)iVar2] -
                 param_3[(longlong)((iVar12 + 5) * param_1 + iVar28) - (longlong)iVar2]) * fVar31;
        iVar28 = iVar28 + iVar26;
        param_4[(lVar18 + -1) - lVar20] = fVar34 + param_3[lVar9 - iVar2];
        lVar13 = (longlong)iVar5;
        param_4[((longlong)(local_res8 + iVar26) + -1) - lVar20] = param_3[lVar9 - iVar2] - fVar34;
        param_4[lVar18 - lVar20] = fVar33 - param_3[lVar13 - iVar2];
        param_4[(local_res8 + iVar26) - lVar20] = fVar33 + param_3[lVar13 - iVar2];
        param_6._0_4_ = (int)param_6 + iVar8;
        uVar15 = uVar15 - 1;
        local_res8 = local_res8 + iVar8;
      } while (uVar15 != 0);
      iVar26 = param_1 * 4;
    }
    if (iVar27 <= param_2) {
      pfVar19 = param_3 + ((longlong)((param_2 * 3 + 1 + iVar27) * param_1) - (longlong)iVar2);
      pfVar10 = param_4 + (((longlong)((iVar27 * 4 + 4) * param_1) + -1) - lVar20);
      pfVar23 = param_3 + ((longlong)((param_2 + 1 + iVar27) * param_1) - (longlong)iVar2);
      pfVar11 = param_4 + (((longlong)((iVar27 * 4 + 2) * param_1) + -1) - lVar20);
      pfVar17 = param_3 + ((longlong)((param_2 * 2 + 1 + iVar27) * param_1) - (longlong)iVar2);
      uVar15 = (ulonglong)((param_2 - iVar27) + 1);
      pfVar7 = param_3 + ((longlong)((param_2 * 4 + 1 + iVar27) * param_1) - (longlong)iVar2);
      do {
        fVar34 = *pfVar17;
        pfVar17 = pfVar17 + param_1;
        fVar33 = *pfVar7;
        pfVar7 = pfVar7 + param_1;
        fVar30 = (fVar34 - fVar33) * fVar31;
        fVar33 = fVar33 * fVar29 - fVar34 * fVar31;
        *pfVar11 = fVar30 + *pfVar23;
        fVar34 = *pfVar23;
        pfVar23 = pfVar23 + param_1;
        *pfVar10 = fVar34 - fVar30;
        pfVar11[1] = fVar33 - *pfVar19;
        pfVar11 = pfVar11 + iVar26;
        fVar34 = *pfVar19;
        pfVar19 = pfVar19 + param_1;
        pfVar10[1] = fVar33 + fVar34;
        pfVar10 = pfVar10 + iVar26;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  return;
}

// radf4_ps @ 14f05e390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
radf4_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6,
        float *param_7)

{
  __m128 *p_Var1;
  __m128 *p_Var2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  __m128 *p_Var12;
  __m128 *p_Var13;
  float *pfVar14;
  __m128 *p_Var15;
  float *pfVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  __m128 *p_Var19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  float *pfVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  int local_res10;
  longlong local_c8;
  
  uVar17 = (ulonglong)param_1;
  lVar22 = (longlong)(param_1 * param_2);
  if (param_3 < param_3 + lVar22) {
    p_Var15 = param_4 + uVar17 * 4 + -1;
    p_Var12 = param_3 + lVar22 * 2;
    iVar10 = param_1 * 4;
    p_Var19 = param_4 + uVar17 * 2 + -1;
    p_Var13 = param_4;
    do {
      p_Var1 = p_Var12 + lVar22 * -2;
      fVar29 = p_Var1->m128_f32[1];
      fVar33 = p_Var1->m128_f32[2];
      fVar42 = p_Var1->m128_f32[3];
      p_Var2 = p_Var12 + lVar22;
      fVar31 = p_Var2->m128_f32[0];
      fVar44 = p_Var2->m128_f32[1];
      fVar25 = p_Var2->m128_f32[2];
      fVar26 = p_Var2->m128_f32[3];
      fVar34 = p_Var1->m128_f32[0] + p_Var12->m128_f32[0];
      fVar36 = fVar29 + p_Var12->m128_f32[1];
      fVar38 = fVar33 + p_Var12->m128_f32[2];
      fVar40 = fVar42 + p_Var12->m128_f32[3];
      p_Var2 = p_Var12 + -lVar22;
      fVar27 = p_Var2->m128_f32[0];
      fVar28 = p_Var2->m128_f32[1];
      fVar35 = p_Var2->m128_f32[2];
      fVar47 = p_Var2->m128_f32[3];
      fVar30 = p_Var12->m128_f32[0];
      fVar32 = p_Var12->m128_f32[1];
      fVar37 = p_Var12->m128_f32[2];
      fVar39 = p_Var12->m128_f32[3];
      fVar41 = fVar31 + fVar27;
      fVar43 = fVar44 + fVar28;
      fVar45 = fVar25 + fVar35;
      fVar46 = fVar26 + fVar47;
      p_Var12 = p_Var12 + uVar17;
      p_Var19->m128_f32[0] = p_Var1->m128_f32[0] - fVar30;
      p_Var19->m128_f32[1] = fVar29 - fVar32;
      p_Var19->m128_f32[2] = fVar33 - fVar37;
      p_Var19->m128_f32[3] = fVar42 - fVar39;
      p_Var19 = p_Var19 + iVar10;
      p_Var1 = p_Var13 + uVar17 * 2;
      p_Var1->m128_f32[0] = fVar31 - fVar27;
      p_Var1->m128_f32[1] = fVar44 - fVar28;
      p_Var1->m128_f32[2] = fVar25 - fVar35;
      p_Var1->m128_f32[3] = fVar26 - fVar47;
      p_Var13->m128_f32[0] = fVar34 + fVar41;
      p_Var13->m128_f32[1] = fVar36 + fVar43;
      p_Var13->m128_f32[2] = fVar38 + fVar45;
      p_Var13->m128_f32[3] = fVar40 + fVar46;
      p_Var13 = p_Var13 + iVar10;
      p_Var15->m128_f32[0] = fVar34 - fVar41;
      p_Var15->m128_f32[1] = fVar36 - fVar43;
      p_Var15->m128_f32[2] = fVar38 - fVar45;
      p_Var15->m128_f32[3] = fVar40 - fVar46;
      p_Var15 = p_Var15 + iVar10;
    } while (p_Var12 + lVar22 * -2 < param_3 + lVar22);
  }
  if (1 < param_1) {
    if (param_1 != 2) {
      local_res10 = 0;
      uVar18 = uVar17;
      if (0 < lVar22) {
        pfVar16 = (float *)(param_4->m128_i8 + uVar17 * 0x20 + -0x30);
        local_c8 = 0;
        do {
          p_Var13 = param_3 + (longlong)local_res10 + 1;
          if (2 < (longlong)uVar17) {
            pfVar14 = param_5 + 1;
            pfVar11 = (float *)(p_Var13->m128_i8 + lVar22 * 0x10 + 0x10);
            pfVar23 = pfVar16 + 0x10;
            lVar20 = (uVar17 - 3 >> 1) + 1;
            pfVar24 = pfVar16;
            do {
              fVar29 = pfVar14[-1];
              fVar33 = *pfVar14;
              fVar42 = *(float *)((longlong)pfVar14 + ((longlong)param_6 - (longlong)param_5) + -4);
              fVar31 = *(float *)((longlong)pfVar14 + ((longlong)param_7 - (longlong)param_5) + -4);
              fVar44 = *(float *)((longlong)pfVar14 + ((longlong)param_6 - (longlong)param_5));
              fVar43 = fVar29 * pfVar11[-4] + fVar33 * *pfVar11;
              fVar45 = fVar29 * pfVar11[-3] + fVar33 * pfVar11[1];
              fVar46 = fVar29 * pfVar11[-2] + fVar33 * pfVar11[2];
              fVar48 = fVar29 * pfVar11[-1] + fVar33 * pfVar11[3];
              pfVar5 = pfVar11 + lVar22 * 4 + -4;
              fVar36 = *pfVar11 * fVar29 - fVar33 * pfVar11[-4];
              fVar38 = pfVar11[1] * fVar29 - fVar33 * pfVar11[-3];
              fVar40 = pfVar11[2] * fVar29 - fVar33 * pfVar11[-2];
              fVar41 = pfVar11[3] * fVar29 - fVar33 * pfVar11[-1];
              pfVar3 = pfVar11 + lVar22 * 4;
              pfVar6 = pfVar11 + lVar22 * 4 + -4;
              fVar33 = p_Var13->m128_f32[0];
              pfVar7 = p_Var13->m128_f32 + 1;
              pfVar8 = p_Var13->m128_f32 + 2;
              pfVar9 = p_Var13->m128_f32 + 3;
              p_Var13 = p_Var13 + 2;
              pfVar4 = pfVar11 + lVar22 * 4;
              fVar35 = fVar44 * *pfVar3 + fVar42 * *pfVar6;
              fVar37 = fVar44 * pfVar3[1] + fVar42 * pfVar6[1];
              fVar39 = fVar44 * pfVar3[2] + fVar42 * pfVar6[2];
              fVar34 = fVar44 * pfVar3[3] + fVar42 * pfVar6[3];
              pfVar3 = pfVar11 + lVar22 * 8;
              pfVar6 = pfVar11 + lVar22 * 8 + -4;
              fVar53 = fVar42 * *pfVar4 - fVar44 * *pfVar5;
              fVar54 = fVar42 * pfVar4[1] - fVar44 * pfVar5[1];
              fVar55 = fVar42 * pfVar4[2] - fVar44 * pfVar5[2];
              fVar56 = fVar42 * pfVar4[3] - fVar44 * pfVar5[3];
              fVar29 = *(float *)((longlong)pfVar14 + ((longlong)param_7 - (longlong)param_5));
              pfVar14 = pfVar14 + 2;
              fVar25 = fVar35 + fVar33;
              fVar26 = fVar37 + *pfVar7;
              fVar27 = fVar39 + *pfVar8;
              fVar28 = fVar34 + *pfVar9;
              pfVar5 = pfVar11 + lVar22 * 8 + -4;
              fVar33 = fVar33 - fVar35;
              fVar37 = *pfVar7 - fVar37;
              fVar39 = *pfVar8 - fVar39;
              fVar34 = *pfVar9 - fVar34;
              pfVar4 = pfVar11 + lVar22 * 8;
              fVar42 = fVar31 * *pfVar3 - fVar29 * *pfVar5;
              fVar44 = fVar31 * pfVar3[1] - fVar29 * pfVar5[1];
              fVar35 = fVar31 * pfVar3[2] - fVar29 * pfVar5[2];
              fVar47 = fVar31 * pfVar3[3] - fVar29 * pfVar5[3];
              fVar49 = fVar29 * *pfVar4 + fVar31 * *pfVar6;
              fVar50 = fVar29 * pfVar4[1] + fVar31 * pfVar6[1];
              fVar51 = fVar29 * pfVar4[2] + fVar31 * pfVar6[2];
              fVar52 = fVar29 * pfVar4[3] + fVar31 * pfVar6[3];
              fVar57 = fVar36 - fVar42;
              fVar58 = fVar38 - fVar44;
              fVar59 = fVar40 - fVar35;
              fVar60 = fVar41 - fVar47;
              fVar36 = fVar36 + fVar42;
              fVar38 = fVar38 + fVar44;
              fVar40 = fVar40 + fVar35;
              fVar41 = fVar41 + fVar47;
              fVar35 = fVar43 + fVar49;
              fVar47 = fVar45 + fVar50;
              fVar30 = fVar46 + fVar51;
              fVar32 = fVar48 + fVar52;
              fVar49 = fVar49 - fVar43;
              fVar50 = fVar50 - fVar45;
              fVar51 = fVar51 - fVar46;
              fVar52 = fVar52 - fVar48;
              pfVar3 = pfVar11 + lVar22 * -4;
              fVar29 = *pfVar3;
              fVar42 = pfVar3[1];
              fVar31 = pfVar3[2];
              fVar44 = pfVar3[3];
              pfVar11 = pfVar11 + 8;
              pfVar3 = pfVar23 + uVar17 * -8;
              *pfVar3 = fVar25 + fVar35;
              pfVar3[1] = fVar26 + fVar47;
              pfVar3[2] = fVar27 + fVar30;
              pfVar3[3] = fVar28 + fVar32;
              pfVar3 = pfVar24 + uVar17 * 8;
              *pfVar3 = fVar25 - fVar35;
              pfVar3[1] = fVar26 - fVar47;
              pfVar3[2] = fVar27 - fVar30;
              pfVar3[3] = fVar28 - fVar32;
              fVar25 = fVar29 + fVar53;
              fVar26 = fVar42 + fVar54;
              fVar27 = fVar31 + fVar55;
              fVar28 = fVar44 + fVar56;
              fVar29 = fVar29 - fVar53;
              fVar42 = fVar42 - fVar54;
              fVar31 = fVar31 - fVar55;
              fVar44 = fVar44 - fVar56;
              *pfVar23 = fVar33 + fVar57;
              pfVar23[1] = fVar37 + fVar58;
              pfVar23[2] = fVar39 + fVar59;
              pfVar23[3] = fVar34 + fVar60;
              *pfVar24 = fVar33 - fVar57;
              pfVar24[1] = fVar37 - fVar58;
              pfVar24[2] = fVar39 - fVar59;
              pfVar24[3] = fVar34 - fVar60;
              pfVar23[uVar17 * -8 + 4] = fVar25 + fVar36;
              pfVar23[uVar17 * -8 + 5] = fVar26 + fVar38;
              pfVar23[uVar17 * -8 + 6] = fVar27 + fVar40;
              pfVar23[uVar17 * -8 + 7] = fVar28 + fVar41;
              pfVar3 = pfVar24 + uVar17 * 8 + 4;
              *pfVar3 = fVar36 - fVar25;
              pfVar3[1] = fVar38 - fVar26;
              pfVar3[2] = fVar40 - fVar27;
              pfVar3[3] = fVar41 - fVar28;
              pfVar23[4] = fVar29 + fVar49;
              pfVar23[5] = fVar42 + fVar50;
              pfVar23[6] = fVar31 + fVar51;
              pfVar23[7] = fVar44 + fVar52;
              pfVar23 = pfVar23 + 8;
              pfVar24[4] = fVar49 - fVar29;
              pfVar24[5] = fVar50 - fVar42;
              pfVar24[6] = fVar51 - fVar31;
              pfVar24[7] = fVar52 - fVar44;
              pfVar24 = pfVar24 + -8;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            uVar18 = (ulonglong)(uint)param_1;
          }
          local_res10 = local_res10 + (int)uVar18;
          local_c8 = local_c8 + uVar17;
          pfVar16 = pfVar16 + uVar17 * 0x10;
        } while (local_c8 < lVar22);
      }
      if ((uVar18 & 1) != 0) {
        return;
      }
    }
    fVar31 = _UNK_150d5a59c;
    fVar42 = _UNK_150d5a598;
    fVar33 = _UNK_150d5a594;
    fVar29 = ___xmm_bf3504f3bf3504f3bf3504f3bf3504f3;
    lVar20 = 0;
    if (0 < lVar22) {
      lVar21 = uVar17 * 0x30;
      pfVar16 = (float *)(param_3->m128_i8 + (uVar17 + lVar22 * 3) * 0x10 + -0x10);
      p_Var13 = param_4 + uVar17;
      do {
        lVar20 = lVar20 + uVar17;
        pfVar23 = pfVar16 + lVar22 * -0xc;
        fVar44 = *pfVar23;
        fVar25 = pfVar23[1];
        fVar26 = pfVar23[2];
        fVar27 = pfVar23[3];
        pfVar23 = pfVar16 + lVar22 * -8;
        pfVar14 = pfVar16 + lVar22 * -8;
        fVar43 = (*pfVar23 + *pfVar16) * fVar29;
        fVar45 = (pfVar23[1] + pfVar16[1]) * fVar33;
        fVar46 = (pfVar23[2] + pfVar16[2]) * fVar42;
        fVar48 = (pfVar23[3] + pfVar16[3]) * fVar31;
        fVar36 = (*pfVar16 - *pfVar14) * fVar29;
        fVar38 = (pfVar16[1] - pfVar14[1]) * fVar33;
        fVar40 = (pfVar16[2] - pfVar14[2]) * fVar42;
        fVar41 = (pfVar16[3] - pfVar14[3]) * fVar31;
        p_Var13[-1].m128_f32[0] = fVar36 + fVar44;
        *(float *)((longlong)p_Var13 + -0xc) = fVar38 + fVar25;
        *(float *)((longlong)p_Var13 + -8) = fVar40 + fVar26;
        *(float *)((longlong)p_Var13 + -4) = fVar41 + fVar27;
        pfVar23 = pfVar16 + lVar22 * -4;
        fVar28 = *pfVar23;
        fVar35 = pfVar23[1];
        fVar47 = pfVar23[2];
        fVar30 = pfVar23[3];
        pfVar23 = pfVar16 + lVar22 * -4;
        fVar32 = *pfVar23;
        fVar37 = pfVar23[1];
        fVar39 = pfVar23[2];
        fVar34 = pfVar23[3];
        pfVar23 = (float *)(param_4->m128_i8 + lVar21 + -0x10);
        *pfVar23 = fVar44 - fVar36;
        pfVar23[1] = fVar25 - fVar38;
        pfVar23[2] = fVar26 - fVar40;
        pfVar23[3] = fVar27 - fVar41;
        pfVar16 = pfVar16 + uVar17 * 4;
        p_Var13->m128_f32[0] = fVar43 - fVar28;
        p_Var13->m128_f32[1] = fVar45 - fVar35;
        p_Var13->m128_f32[2] = fVar46 - fVar47;
        p_Var13->m128_f32[3] = fVar48 - fVar30;
        p_Var13 = p_Var13 + uVar17 * 4;
        pfVar23 = (float *)(param_4->m128_i8 + lVar21);
        *pfVar23 = fVar43 + fVar32;
        pfVar23[1] = fVar45 + fVar37;
        pfVar23[2] = fVar46 + fVar39;
        pfVar23[3] = fVar48 + fVar34;
        lVar21 = lVar21 + uVar17 * 0x40;
      } while (lVar20 < lVar22);
    }
  }
  return;
}

// radf5 @ 14f05e820

void __cdecl
radf5(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
     float *param_7,float *param_8)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_138;
  int local_134;
  int local_130;
  float *local_128;
  
  fVar22 = __real_3f737871;
  fVar4 = __real_3f4f1bbd;
  fVar26 = __real_3f167918;
  fVar3 = __real_3e9e377a;
  uVar19 = (ulonglong)param_1;
  lVar15 = (longlong)(param_1 * 6);
  iVar20 = (param_2 + 1) * param_1;
  lVar7 = (longlong)iVar20;
  if (0 < param_2) {
    lVar11 = (longlong)((param_2 * 2 + 1) * param_1);
    lVar8 = (longlong)(param_1 * 8);
    pfVar16 = param_3 + (lVar11 - lVar7);
    pfVar17 = param_4 + (lVar8 - lVar15);
    lVar13 = param_1 * 10 - lVar8;
    uVar9 = (ulonglong)(uint)param_2;
    lVar6 = iVar20 - lVar11;
    do {
      fVar23 = *pfVar16 + pfVar16[(param_2 * 5 + 1) * param_1 - lVar11];
      fVar25 = pfVar16[(param_2 * 5 + 1) * param_1 - lVar11] - *pfVar16;
      fVar21 = pfVar16[(param_2 * 3 + 1) * param_1 - lVar11] +
               pfVar16[(param_2 * 4 + 1) * param_1 - lVar11];
      fVar24 = pfVar16[(param_2 * 4 + 1) * param_1 - lVar11] -
               pfVar16[(param_2 * 3 + 1) * param_1 - lVar11];
      pfVar17[lVar15 - lVar8] = fVar23 + pfVar16[lVar6] + fVar21;
      pfVar17[-1] = (fVar23 * fVar3 + pfVar16[lVar6]) - fVar21 * fVar4;
      *pfVar17 = fVar25 * fVar22 + fVar24 * fVar26;
      pfVar2 = pfVar16 + lVar6;
      pfVar16 = pfVar16 + uVar19;
      pfVar17[lVar13 + -1] = (*pfVar2 - fVar23 * fVar4) + fVar21 * fVar3;
      pfVar17[lVar13] = fVar25 * fVar26 - fVar24 * fVar22;
      pfVar17 = pfVar17 + param_1 * 5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if ((param_1 != 1) && (local_134 = 1, 0 < param_2)) {
    iVar20 = param_1 * 10 + -1;
    local_130 = 5;
    uVar9 = uVar19;
    do {
      if (2 < (longlong)uVar19) {
        local_128 = param_5 + 1;
        iVar1 = local_134 + param_2 * 3;
        lVar6 = (longlong)param_6 - (longlong)param_5;
        lVar8 = (longlong)param_7 - (longlong)param_5;
        lVar11 = (longlong)param_8 - (longlong)param_5;
        iVar18 = (int)uVar9;
        iVar5 = local_130 - iVar1;
        iVar14 = iVar1 * iVar18 + 3;
        uVar9 = uVar19 - 1 >> 1;
        local_138 = iVar20;
        do {
          lVar13 = (longlong)(((param_2 * 2 - iVar1) + local_134) * iVar18 + iVar14);
          fVar25 = param_3[(lVar13 + -1) - lVar7] * local_128[-1] -
                   param_3[(lVar13 + -2) - lVar7] * *local_128;
          fVar21 = param_3[(lVar13 + -2) - lVar7] * local_128[-1] +
                   param_3[(lVar13 + -1) - lVar7] * *local_128;
          fVar26 = param_3[((longlong)iVar14 + -1) - lVar7] *
                   *(float *)((longlong)local_128 + lVar6) +
                   param_3[((longlong)iVar14 + -2) - lVar7] *
                   *(float *)((longlong)local_128 + lVar6 + -4);
          lVar13 = (longlong)(((param_2 * 4 - iVar1) + local_134) * iVar18 + iVar14);
          fVar24 = param_3[((longlong)iVar14 + -1) - lVar7] *
                   *(float *)((longlong)local_128 + lVar6 + -4) -
                   param_3[((longlong)iVar14 + -2) - lVar7] *
                   *(float *)((longlong)local_128 + lVar6);
          lVar10 = (longlong)(((param_2 * 5 - iVar1) + local_134) * iVar18 + iVar14);
          fVar30 = param_3[(lVar13 + -1) - lVar7] * *(float *)((longlong)local_128 + lVar8) +
                   param_3[(lVar13 + -2) - lVar7] * *(float *)((longlong)local_128 + lVar8 + -4);
          fVar28 = param_3[(lVar13 + -1) - lVar7] * *(float *)((longlong)local_128 + lVar8 + -4) -
                   param_3[(lVar13 + -2) - lVar7] * *(float *)((longlong)local_128 + lVar8);
          lVar12 = (longlong)(((local_134 - iVar1) + param_2) * iVar18 + iVar14);
          lVar13 = (longlong)((iVar5 + 1) * iVar18 + iVar14);
          fVar22 = fVar30 + fVar26;
          fVar23 = param_3[(lVar10 + -1) - lVar7] * *(float *)((longlong)local_128 + lVar11) +
                   param_3[(lVar10 + -2) - lVar7] * *(float *)((longlong)local_128 + lVar11 + -4);
          fVar27 = param_3[(lVar10 + -1) - lVar7] * *(float *)((longlong)local_128 + lVar11 + -4) -
                   param_3[(lVar10 + -2) - lVar7] * *(float *)((longlong)local_128 + lVar11);
          fVar30 = fVar30 - fVar26;
          fVar31 = fVar23 - fVar21;
          fVar23 = fVar23 + fVar21;
          fVar29 = fVar25 - fVar27;
          fVar27 = fVar27 + fVar25;
          fVar25 = fVar24 - fVar28;
          fVar28 = fVar28 + fVar24;
          param_4[(lVar13 + -2) - lVar15] = fVar23 + param_3[(lVar12 + -2) - lVar7] + fVar22;
          param_4[(lVar13 + -1) - lVar15] = fVar27 + param_3[(lVar12 + -1) - lVar7] + fVar28;
          local_128 = local_128 + 2;
          lVar10 = (longlong)((iVar5 + 3) * iVar18 + iVar14);
          fVar24 = (fVar23 * fVar3 + param_3[(lVar12 + -2) - lVar7]) - fVar22 * fVar4;
          fVar21 = (fVar27 * fVar3 + param_3[(lVar12 + -1) - lVar7]) - fVar28 * fVar4;
          fVar27 = (param_3[(lVar12 + -1) - lVar7] - fVar27 * fVar4) + fVar28 * fVar3;
          fVar26 = fVar29 * __real_3f737871 + fVar25 * __real_3f167918;
          fVar23 = (param_3[(lVar12 + -2) - lVar7] - fVar23 * fVar4) + fVar22 * fVar3;
          fVar25 = fVar29 * __real_3f167918 - fVar25 * __real_3f737871;
          fVar22 = fVar31 * __real_3f737871 + fVar30 * __real_3f167918;
          fVar28 = fVar31 * __real_3f167918 - fVar30 * __real_3f737871;
          param_4[(lVar10 + -2) - lVar15] = fVar24 + fVar26;
          lVar13 = (longlong)(local_138 + iVar18 * -2);
          param_4[(lVar13 + -2) - lVar15] = fVar24 - fVar26;
          param_4[(lVar10 + -1) - lVar15] = fVar21 + fVar22;
          param_4[(lVar13 + -1) - lVar15] = fVar22 - fVar21;
          lVar13 = (longlong)((iVar5 + 5) * iVar18 + iVar14);
          iVar14 = iVar14 + 2;
          param_4[(lVar13 + -2) - lVar15] = fVar23 + fVar25;
          param_4[((longlong)local_138 + -2) - lVar15] = fVar23 - fVar25;
          param_4[(lVar13 + -1) - lVar15] = fVar27 + fVar28;
          param_4[((longlong)local_138 + -1) - lVar15] = fVar28 - fVar27;
          local_138 = local_138 + -2;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        uVar9 = (ulonglong)(uint)param_1;
      }
      local_134 = local_134 + 1;
      local_130 = local_130 + 5;
      iVar20 = iVar20 + param_1 * 5;
    } while (local_134 <= param_2);
  }
  return;
}

// radf5_ps @ 14f05ef50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
radf5_ps(int param_1,int param_2,__m128 *param_3,__m128 *param_4,float *param_5,float *param_6,
        float *param_7,float *param_8)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  __m128 *p_Var4;
  __m128 *p_Var5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  __m128 *p_Var18;
  float *pfVar19;
  __m128 *p_Var20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  int local_128;
  int local_124;
  int local_120;
  
  fVar52 = _UNK_1530ea55c;
  fVar51 = _UNK_1530ea558;
  fVar50 = _UNK_1530ea554;
  fVar49 = ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd;
  fVar75 = _UNK_1530ea52c;
  fVar55 = _UNK_1530ea528;
  fVar54 = _UNK_1530ea524;
  fVar53 = ___xmm_3f7378713f7378713f7378713f737871;
  fVar9 = _UNK_1530ea50c;
  fVar8 = _UNK_1530ea508;
  fVar7 = _UNK_1530ea504;
  fVar6 = ___xmm_3f1679183f1679183f1679183f167918;
  fVar29 = _UNK_1530ea4fc;
  fVar28 = _UNK_1530ea4f8;
  fVar27 = _UNK_1530ea4f4;
  fVar26 = ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
  uVar22 = (ulonglong)param_1;
  lVar17 = (longlong)(param_1 * 6);
  iVar23 = (param_2 + 1) * param_1;
  lVar12 = (longlong)iVar23;
  if (0 < param_2) {
    lVar14 = (longlong)((param_2 * 2 + 1) * param_1);
    lVar13 = (longlong)(param_1 * 8);
    p_Var18 = param_3 + (lVar14 - lVar12);
    p_Var20 = param_4 + (lVar13 - lVar17);
    lVar16 = param_1 * 10 - lVar13;
    lVar25 = (param_2 * 3 + 1) * param_1 - lVar14;
    lVar11 = iVar23 - lVar14;
    uVar15 = (ulonglong)(uint)param_2;
    do {
      pfVar19 = p_Var18->m128_f32 + ((param_2 * 4 + 1) * param_1 - lVar14) * 4;
      pfVar2 = p_Var18->m128_f32 + ((param_2 * 5 + 1) * param_1 - lVar14) * 4;
      pfVar3 = p_Var18->m128_f32 + lVar25 * 4;
      fVar30 = *pfVar3 + *pfVar19;
      fVar32 = pfVar3[1] + pfVar19[1];
      fVar34 = pfVar3[2] + pfVar19[2];
      fVar36 = pfVar3[3] + pfVar19[3];
      pfVar3 = p_Var18->m128_f32 + lVar25 * 4;
      fVar41 = *pfVar19 - *pfVar3;
      fVar42 = pfVar19[1] - pfVar3[1];
      fVar43 = pfVar19[2] - pfVar3[2];
      fVar44 = pfVar19[3] - pfVar3[3];
      fVar37 = p_Var18->m128_f32[0] + *pfVar2;
      fVar38 = p_Var18->m128_f32[1] + pfVar2[1];
      fVar39 = p_Var18->m128_f32[2] + pfVar2[2];
      fVar40 = p_Var18->m128_f32[3] + pfVar2[3];
      fVar45 = *pfVar2 - p_Var18->m128_f32[0];
      fVar46 = pfVar2[1] - p_Var18->m128_f32[1];
      fVar47 = pfVar2[2] - p_Var18->m128_f32[2];
      fVar48 = pfVar2[3] - p_Var18->m128_f32[3];
      pfVar19 = p_Var18->m128_f32 + lVar11 * 4;
      fVar31 = pfVar19[1];
      fVar33 = pfVar19[2];
      fVar35 = pfVar19[3];
      p_Var4 = p_Var20 + (lVar17 - lVar13);
      p_Var4->m128_f32[0] = fVar30 + fVar37 + *pfVar19;
      p_Var4->m128_f32[1] = fVar32 + fVar38 + fVar31;
      p_Var4->m128_f32[2] = fVar34 + fVar39 + fVar33;
      p_Var4->m128_f32[3] = fVar36 + fVar40 + fVar35;
      pfVar19 = p_Var18->m128_f32 + lVar11 * 4;
      fVar31 = pfVar19[1];
      fVar33 = pfVar19[2];
      fVar35 = pfVar19[3];
      p_Var20[-1].m128_f32[0] = fVar49 * fVar30 + fVar26 * fVar37 + *pfVar19;
      *(float *)((longlong)p_Var20 + -0xc) = fVar50 * fVar32 + fVar27 * fVar38 + fVar31;
      *(float *)((longlong)p_Var20 + -8) = fVar51 * fVar34 + fVar28 * fVar39 + fVar33;
      *(float *)((longlong)p_Var20 + -4) = fVar52 * fVar36 + fVar29 * fVar40 + fVar35;
      p_Var20->m128_f32[0] = fVar6 * fVar41 + fVar53 * fVar45;
      p_Var20->m128_f32[1] = fVar7 * fVar42 + fVar54 * fVar46;
      p_Var20->m128_f32[2] = fVar8 * fVar43 + fVar55 * fVar47;
      p_Var20->m128_f32[3] = fVar9 * fVar44 + fVar75 * fVar48;
      pfVar19 = p_Var18->m128_f32 + lVar11 * 4;
      fVar31 = pfVar19[1];
      fVar33 = pfVar19[2];
      fVar35 = pfVar19[3];
      p_Var18 = (__m128 *)(p_Var18->m128_f32 + uVar22 * 4);
      p_Var4 = p_Var20 + lVar16 + -1;
      p_Var4->m128_f32[0] = fVar26 * fVar30 + fVar49 * fVar37 + *pfVar19;
      p_Var4->m128_f32[1] = fVar27 * fVar32 + fVar50 * fVar38 + fVar31;
      p_Var4->m128_f32[2] = fVar28 * fVar34 + fVar51 * fVar39 + fVar33;
      p_Var4->m128_f32[3] = fVar29 * fVar36 + fVar52 * fVar40 + fVar35;
      p_Var4 = p_Var20 + lVar16;
      p_Var4->m128_f32[0] = fVar6 * fVar45 - fVar53 * fVar41;
      p_Var4->m128_f32[1] = fVar7 * fVar46 - fVar54 * fVar42;
      p_Var4->m128_f32[2] = fVar8 * fVar47 - fVar55 * fVar43;
      p_Var4->m128_f32[3] = fVar9 * fVar48 - fVar75 * fVar44;
      p_Var20 = p_Var20 + param_1 * 5;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if ((param_1 != 1) && (local_124 = 1, 0 < param_2)) {
    iVar23 = param_1 * 10 + -1;
    local_120 = 5;
    uVar15 = uVar22;
    do {
      if (2 < (longlong)uVar22) {
        iVar1 = local_124 + param_2 * 3;
        pfVar19 = param_5 + 1;
        iVar21 = (int)uVar15;
        iVar24 = iVar1 * iVar21 + 3;
        iVar10 = local_120 - iVar1;
        uVar15 = uVar22 - 1 >> 1;
        local_128 = iVar23;
        do {
          fVar52 = _UNK_1530ea55c;
          fVar51 = _UNK_1530ea558;
          fVar50 = _UNK_1530ea554;
          fVar49 = ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd;
          fVar26 = pfVar19[-1];
          fVar27 = *pfVar19;
          fVar28 = *(float *)((longlong)pfVar19 + ((longlong)param_6 - (longlong)param_5) + -4);
          fVar29 = *(float *)((longlong)pfVar19 + ((longlong)param_6 - (longlong)param_5));
          fVar53 = *(float *)((longlong)pfVar19 + ((longlong)param_7 - (longlong)param_5) + -4);
          fVar54 = *(float *)((longlong)pfVar19 + ((longlong)param_7 - (longlong)param_5));
          fVar55 = *(float *)((longlong)pfVar19 + ((longlong)param_8 - (longlong)param_5) + -4);
          fVar75 = *(float *)((longlong)pfVar19 + ((longlong)param_8 - (longlong)param_5));
          lVar11 = (longlong)(iVar24 + ((param_2 * 2 - iVar1) + local_124) * iVar21);
          p_Var18 = param_3 + ((lVar11 + -1) - lVar12);
          p_Var4 = param_3 + ((lVar11 + -2) - lVar12);
          p_Var5 = param_3 + (((longlong)iVar24 + -2) - lVar12);
          fVar60 = p_Var4->m128_f32[0] * fVar27 - p_Var18->m128_f32[0] * fVar26;
          fVar61 = p_Var4->m128_f32[1] * fVar27 - p_Var18->m128_f32[1] * fVar26;
          fVar62 = p_Var4->m128_f32[2] * fVar27 - p_Var18->m128_f32[2] * fVar26;
          fVar63 = p_Var4->m128_f32[3] * fVar27 - p_Var18->m128_f32[3] * fVar26;
          p_Var20 = param_3 + (((longlong)iVar24 + -1) - lVar12);
          fVar37 = p_Var18->m128_f32[0] * fVar27 + p_Var4->m128_f32[0] * fVar26;
          fVar38 = p_Var18->m128_f32[1] * fVar27 + p_Var4->m128_f32[1] * fVar26;
          fVar39 = p_Var18->m128_f32[2] * fVar27 + p_Var4->m128_f32[2] * fVar26;
          fVar40 = p_Var18->m128_f32[3] * fVar27 + p_Var4->m128_f32[3] * fVar26;
          lVar11 = (longlong)(iVar24 + ((param_2 * 4 - iVar1) + local_124) * iVar21);
          p_Var4 = param_3 + ((lVar11 + -2) - lVar12);
          fVar41 = p_Var5->m128_f32[0] * fVar29 - p_Var20->m128_f32[0] * fVar28;
          fVar42 = p_Var5->m128_f32[1] * fVar29 - p_Var20->m128_f32[1] * fVar28;
          fVar43 = p_Var5->m128_f32[2] * fVar29 - p_Var20->m128_f32[2] * fVar28;
          fVar44 = p_Var5->m128_f32[3] * fVar29 - p_Var20->m128_f32[3] * fVar28;
          p_Var18 = param_3 + ((lVar11 + -1) - lVar12);
          lVar11 = (longlong)(iVar24 + ((param_2 * 5 - iVar1) + local_124) * iVar21);
          fVar31 = p_Var5->m128_f32[0] * fVar28 + p_Var20->m128_f32[0] * fVar29;
          fVar33 = p_Var5->m128_f32[1] * fVar28 + p_Var20->m128_f32[1] * fVar29;
          fVar35 = p_Var5->m128_f32[2] * fVar28 + p_Var20->m128_f32[2] * fVar29;
          fVar30 = p_Var5->m128_f32[3] * fVar28 + p_Var20->m128_f32[3] * fVar29;
          p_Var5 = param_3 + ((lVar11 + -2) - lVar12);
          fVar26 = p_Var4->m128_f32[0] * fVar54 - p_Var18->m128_f32[0] * fVar53;
          fVar27 = p_Var4->m128_f32[1] * fVar54 - p_Var18->m128_f32[1] * fVar53;
          fVar28 = p_Var4->m128_f32[2] * fVar54 - p_Var18->m128_f32[2] * fVar53;
          fVar29 = p_Var4->m128_f32[3] * fVar54 - p_Var18->m128_f32[3] * fVar53;
          p_Var20 = param_3 + ((lVar11 + -1) - lVar12);
          fVar68 = p_Var4->m128_f32[0] * fVar53 + p_Var18->m128_f32[0] * fVar54;
          fVar69 = p_Var4->m128_f32[1] * fVar53 + p_Var18->m128_f32[1] * fVar54;
          fVar70 = p_Var4->m128_f32[2] * fVar53 + p_Var18->m128_f32[2] * fVar54;
          fVar71 = p_Var4->m128_f32[3] * fVar53 + p_Var18->m128_f32[3] * fVar54;
          fVar45 = p_Var5->m128_f32[0] * fVar75 - p_Var20->m128_f32[0] * fVar55;
          fVar46 = p_Var5->m128_f32[1] * fVar75 - p_Var20->m128_f32[1] * fVar55;
          fVar47 = p_Var5->m128_f32[2] * fVar75 - p_Var20->m128_f32[2] * fVar55;
          fVar48 = p_Var5->m128_f32[3] * fVar75 - p_Var20->m128_f32[3] * fVar55;
          fVar32 = p_Var20->m128_f32[0] * fVar75 + p_Var5->m128_f32[0] * fVar55;
          fVar34 = p_Var20->m128_f32[1] * fVar75 + p_Var5->m128_f32[1] * fVar55;
          fVar36 = p_Var20->m128_f32[2] * fVar75 + p_Var5->m128_f32[2] * fVar55;
          fVar75 = p_Var20->m128_f32[3] * fVar75 + p_Var5->m128_f32[3] * fVar55;
          fVar56 = fVar60 - fVar45;
          fVar57 = fVar61 - fVar46;
          fVar58 = fVar62 - fVar47;
          fVar59 = fVar63 - fVar48;
          fVar72 = fVar32 - fVar37;
          fVar73 = fVar34 - fVar38;
          fVar74 = fVar36 - fVar39;
          fVar76 = fVar75 - fVar40;
          fVar32 = fVar32 + fVar37;
          fVar34 = fVar34 + fVar38;
          fVar36 = fVar36 + fVar39;
          fVar75 = fVar75 + fVar40;
          fVar45 = fVar45 + fVar60;
          fVar46 = fVar46 + fVar61;
          fVar47 = fVar47 + fVar62;
          fVar48 = fVar48 + fVar63;
          lVar13 = (longlong)(iVar24 + ((local_124 - iVar1) + param_2) * iVar21);
          fVar64 = fVar41 + fVar26;
          fVar65 = fVar42 + fVar27;
          fVar66 = fVar43 + fVar28;
          fVar67 = fVar44 + fVar29;
          fVar53 = fVar68 + fVar31;
          fVar54 = fVar69 + fVar33;
          fVar55 = fVar70 + fVar35;
          fVar37 = fVar71 + fVar30;
          fVar41 = fVar41 - fVar26;
          fVar42 = fVar42 - fVar27;
          fVar43 = fVar43 - fVar28;
          fVar44 = fVar44 - fVar29;
          fVar68 = fVar68 - fVar31;
          fVar69 = fVar69 - fVar33;
          fVar70 = fVar70 - fVar35;
          fVar71 = fVar71 - fVar30;
          lVar11 = (longlong)((iVar10 + 1) * iVar21 + iVar24);
          fVar60 = fVar53 * ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
          fVar61 = fVar54 * _UNK_1530ea4f4;
          fVar62 = fVar55 * _UNK_1530ea4f8;
          fVar63 = fVar37 * _UNK_1530ea4fc;
          fVar31 = fVar53 * ___xmm_bf4f1bbdbf4f1bbdbf4f1bbdbf4f1bbd;
          fVar33 = fVar54 * _UNK_1530ea554;
          fVar35 = fVar55 * _UNK_1530ea558;
          fVar30 = fVar37 * _UNK_1530ea55c;
          p_Var18 = param_3 + ((lVar13 + -2) - lVar12);
          fVar26 = p_Var18->m128_f32[1];
          fVar27 = p_Var18->m128_f32[2];
          fVar28 = p_Var18->m128_f32[3];
          p_Var20 = param_4 + ((lVar11 + -2) - lVar17);
          p_Var20->m128_f32[0] = fVar53 + fVar32 + p_Var18->m128_f32[0];
          p_Var20->m128_f32[1] = fVar54 + fVar34 + fVar26;
          p_Var20->m128_f32[2] = fVar55 + fVar36 + fVar27;
          p_Var20->m128_f32[3] = fVar37 + fVar75 + fVar28;
          p_Var18 = param_3 + ((lVar13 + -1) - lVar12);
          fVar26 = p_Var18->m128_f32[1];
          fVar27 = p_Var18->m128_f32[2];
          fVar28 = p_Var18->m128_f32[3];
          fVar29 = fVar32 * ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a;
          fVar53 = fVar34 * _UNK_1530ea4f4;
          fVar54 = fVar36 * _UNK_1530ea4f8;
          fVar55 = fVar75 * _UNK_1530ea4fc;
          p_Var20 = param_4 + ((lVar11 + -1) - lVar17);
          p_Var20->m128_f32[0] = p_Var18->m128_f32[0] - (fVar64 + fVar45);
          p_Var20->m128_f32[1] = fVar26 - (fVar65 + fVar46);
          p_Var20->m128_f32[2] = fVar27 - (fVar66 + fVar47);
          p_Var20->m128_f32[3] = fVar28 - (fVar67 + fVar48);
          p_Var18 = param_3 + ((lVar13 + -1) - lVar12);
          p_Var20 = param_3 + ((lVar13 + -2) - lVar12);
          fVar37 = fVar31 + fVar29 + p_Var20->m128_f32[0];
          fVar38 = fVar33 + fVar53 + p_Var20->m128_f32[1];
          fVar39 = fVar35 + fVar54 + p_Var20->m128_f32[2];
          fVar40 = fVar30 + fVar55 + p_Var20->m128_f32[3];
          p_Var20 = param_3 + ((lVar13 + -2) - lVar12);
          fVar32 = fVar60 + fVar32 * fVar49 + p_Var20->m128_f32[0];
          fVar34 = fVar61 + fVar34 * fVar50 + p_Var20->m128_f32[1];
          fVar36 = fVar62 + fVar36 * fVar51 + p_Var20->m128_f32[2];
          fVar60 = fVar63 + fVar75 * fVar52 + p_Var20->m128_f32[3];
          lVar13 = (longlong)((iVar10 + 3) * iVar21 + iVar24);
          fVar31 = p_Var18->m128_f32[0] -
                   (fVar64 * fVar49 + fVar45 * ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a);
          fVar33 = p_Var18->m128_f32[1] - (fVar65 * fVar50 + fVar46 * _UNK_1530ea4f4);
          fVar35 = p_Var18->m128_f32[2] - (fVar66 * fVar51 + fVar47 * _UNK_1530ea4f8);
          fVar30 = p_Var18->m128_f32[3] - (fVar67 * fVar52 + fVar48 * _UNK_1530ea4fc);
          fVar49 = p_Var18->m128_f32[0] -
                   (fVar64 * ___xmm_3e9e377a3e9e377a3e9e377a3e9e377a + fVar45 * fVar49);
          fVar50 = p_Var18->m128_f32[1] - (fVar65 * _UNK_1530ea4f4 + fVar46 * fVar50);
          fVar51 = p_Var18->m128_f32[2] - (fVar66 * _UNK_1530ea4f8 + fVar47 * fVar51);
          fVar52 = p_Var18->m128_f32[3] - (fVar67 * _UNK_1530ea4fc + fVar48 * fVar52);
          fVar26 = fVar41 * fVar6 + fVar56 * ___xmm_3f7378713f7378713f7378713f737871;
          fVar27 = fVar42 * fVar7 + fVar57 * _UNK_1530ea524;
          fVar28 = fVar43 * fVar8 + fVar58 * _UNK_1530ea528;
          fVar29 = fVar44 * fVar9 + fVar59 * _UNK_1530ea52c;
          fVar41 = fVar56 * fVar6 - fVar41 * ___xmm_3f7378713f7378713f7378713f737871;
          fVar42 = fVar57 * fVar7 - fVar42 * _UNK_1530ea524;
          fVar43 = fVar58 * fVar8 - fVar43 * _UNK_1530ea528;
          fVar44 = fVar59 * fVar9 - fVar44 * _UNK_1530ea52c;
          fVar53 = fVar68 * fVar6 + fVar72 * ___xmm_3f7378713f7378713f7378713f737871;
          fVar54 = fVar69 * fVar7 + fVar73 * _UNK_1530ea524;
          fVar55 = fVar70 * fVar8 + fVar74 * _UNK_1530ea528;
          fVar75 = fVar71 * fVar9 + fVar76 * _UNK_1530ea52c;
          fVar45 = fVar72 * fVar6 - fVar68 * ___xmm_3f7378713f7378713f7378713f737871;
          fVar46 = fVar73 * fVar7 - fVar69 * _UNK_1530ea524;
          fVar47 = fVar74 * fVar8 - fVar70 * _UNK_1530ea528;
          fVar48 = fVar76 * fVar9 - fVar71 * _UNK_1530ea52c;
          p_Var18 = param_4 + ((lVar13 + -2) - lVar17);
          p_Var18->m128_f32[0] = fVar37 - fVar26;
          p_Var18->m128_f32[1] = fVar38 - fVar27;
          p_Var18->m128_f32[2] = fVar39 - fVar28;
          p_Var18->m128_f32[3] = fVar40 - fVar29;
          lVar14 = (longlong)local_128;
          lVar11 = (longlong)(iVar21 * -2 + local_128);
          p_Var18 = param_4 + ((lVar11 + -2) - lVar17);
          p_Var18->m128_f32[0] = fVar37 + fVar26;
          p_Var18->m128_f32[1] = fVar38 + fVar27;
          p_Var18->m128_f32[2] = fVar39 + fVar28;
          p_Var18->m128_f32[3] = fVar40 + fVar29;
          p_Var18 = param_4 + ((lVar13 + -1) - lVar17);
          p_Var18->m128_f32[0] = fVar53 + fVar31;
          p_Var18->m128_f32[1] = fVar54 + fVar33;
          p_Var18->m128_f32[2] = fVar55 + fVar35;
          p_Var18->m128_f32[3] = fVar75 + fVar30;
          p_Var18 = param_4 + ((lVar11 + -1) - lVar17);
          p_Var18->m128_f32[0] = fVar53 - fVar31;
          p_Var18->m128_f32[1] = fVar54 - fVar33;
          p_Var18->m128_f32[2] = fVar55 - fVar35;
          p_Var18->m128_f32[3] = fVar75 - fVar30;
          lVar11 = (longlong)((iVar10 + 5) * iVar21 + iVar24);
          iVar24 = iVar24 + 2;
          p_Var18 = param_4 + ((lVar11 + -2) - lVar17);
          p_Var18->m128_f32[0] = fVar32 - fVar41;
          p_Var18->m128_f32[1] = fVar34 - fVar42;
          p_Var18->m128_f32[2] = fVar36 - fVar43;
          p_Var18->m128_f32[3] = fVar60 - fVar44;
          local_128 = local_128 + -2;
          p_Var18 = param_4 + ((lVar14 + -2) - lVar17);
          p_Var18->m128_f32[0] = fVar32 + fVar41;
          p_Var18->m128_f32[1] = fVar34 + fVar42;
          p_Var18->m128_f32[2] = fVar36 + fVar43;
          p_Var18->m128_f32[3] = fVar60 + fVar44;
          p_Var18 = param_4 + ((lVar11 + -1) - lVar17);
          p_Var18->m128_f32[0] = fVar45 + fVar49;
          p_Var18->m128_f32[1] = fVar46 + fVar50;
          p_Var18->m128_f32[2] = fVar47 + fVar51;
          p_Var18->m128_f32[3] = fVar48 + fVar52;
          p_Var18 = param_4 + ((lVar14 + -1) - lVar17);
          p_Var18->m128_f32[0] = fVar45 - fVar49;
          p_Var18->m128_f32[1] = fVar46 - fVar50;
          p_Var18->m128_f32[2] = fVar47 - fVar51;
          p_Var18->m128_f32[3] = fVar48 - fVar52;
          pfVar19 = pfVar19 + 2;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        uVar15 = (ulonglong)(uint)param_1;
      }
      local_124 = local_124 + 1;
      local_120 = local_120 + 5;
      iVar23 = iVar23 + param_1 * 5;
    } while (local_124 <= param_2);
  }
  return;
}

// radfg @ 14f05f690

void __cdecl
radfg(int param_1,int param_2,int param_3,int param_4,float *param_5,float *param_6,float *param_7,
     float *param_8,float *param_9,float *param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  float *pfVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  int iVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  longlong lVar40;
  int iVar41;
  longlong lVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  float *pfVar47;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  int local_res20;
  ulonglong local_158;
  ulonglong local_150;
  int local_144;
  
  local_150 = (ulonglong)param_1;
  uVar26 = (ulonglong)param_4;
  lVar31 = (longlong)((param_3 + 1) * param_1 + 1);
  pfVar29 = param_8 + -lVar31;
  pfVar10 = param_6 + -lVar31;
  pfVar47 = param_5 + (-1 - (longlong)((param_2 + 1) * param_1));
  lVar31 = uVar26 * 4 + 4;
  lVar23 = (longlong)param_9 - lVar31;
  lVar31 = (longlong)param_7 - lVar31;
  __libm_sse2_sincosf_();
  lVar36 = 1;
  iVar2 = (param_2 + 1) / 2;
  iVar3 = (param_1 + -1) / 2;
  uVar22 = local_150;
  if (param_1 == 1) {
    lVar18 = lVar23 - lVar31;
    if (3 < (longlong)uVar26) {
      puVar12 = (undefined4 *)(lVar31 + uVar26 * 4 + 8);
      uVar32 = uVar26 >> 2;
      lVar36 = uVar32 * 4 + 1;
      do {
        puVar12[-1] = *(undefined4 *)((longlong)puVar12 + lVar18 + -4);
        *puVar12 = *(undefined4 *)((longlong)puVar12 + lVar18);
        puVar12[1] = *(undefined4 *)((longlong)puVar12 + lVar18 + 4);
        puVar12[2] = *(undefined4 *)((longlong)puVar12 + lVar18 + 8);
        puVar12 = puVar12 + 4;
        uVar32 = uVar32 - 1;
      } while (uVar32 != 0);
    }
    if (lVar36 <= (longlong)uVar26) {
      lVar27 = (uVar26 - lVar36) + 1;
      puVar12 = (undefined4 *)(lVar31 + (lVar36 + uVar26) * 4);
      do {
        *puVar12 = *(undefined4 *)(lVar18 + (longlong)puVar12);
        puVar12 = puVar12 + 1;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if (iVar2 < 2) goto LAB_14f060f99;
  }
  else {
    if (3 < (longlong)uVar26) {
      lVar18 = lVar31 - lVar23;
      puVar12 = (undefined4 *)(lVar23 + 8 + uVar26 * 4);
      uVar32 = uVar26 >> 2;
      lVar36 = uVar32 * 4 + 1;
      do {
        puVar12[-1] = *(undefined4 *)((longlong)puVar12 + lVar18 + -4);
        *puVar12 = *(undefined4 *)((longlong)puVar12 + lVar18);
        puVar12[1] = *(undefined4 *)((longlong)puVar12 + lVar18 + 4);
        puVar12[2] = *(undefined4 *)((longlong)puVar12 + lVar18 + 8);
        puVar12 = puVar12 + 4;
        uVar32 = uVar32 - 1;
      } while (uVar32 != 0);
    }
    if (lVar36 <= (longlong)uVar26) {
      puVar12 = (undefined4 *)(lVar23 + (lVar36 + uVar26) * 4);
      lVar36 = (uVar26 - lVar36) + 1;
      do {
        *puVar12 = *(undefined4 *)((longlong)puVar12 + (lVar31 - lVar23));
        puVar12 = puVar12 + 1;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
    }
    local_158 = local_150;
    if (1 < param_2) {
      iVar41 = param_3 * 2;
      uVar26 = (ulonglong)(param_2 - 1);
      lVar36 = (longlong)((iVar41 + 2) * param_1);
      pfVar14 = pfVar29 + lVar36 + 1;
      lVar18 = (longlong)((param_3 + 2) * param_1 * 2);
      iVar30 = iVar41 + 3;
      lVar27 = lVar18 - lVar36;
      lVar6 = (iVar41 + 1) * param_1 - lVar36;
      do {
        iVar35 = 1;
        if (param_3 < 4) {
          if (0 < param_3) goto LAB_14f05fdcb;
        }
        else {
          lVar7 = lVar27 + lVar36;
          lVar19 = lVar6 + lVar36;
          lVar20 = (lVar7 - lVar36) + (iVar30 * param_1 - lVar18);
          uVar32 = (ulonglong)((uint)param_3 >> 2);
          iVar35 = ((uint)param_3 >> 2) * 4 + 1;
          pfVar9 = pfVar14;
          do {
            pfVar9[lVar19 - lVar36] =
                 *(float *)((longlong)pfVar9 +
                           ((lVar19 - lVar36) * 4 - (longlong)pfVar29) + (longlong)pfVar10);
            *pfVar9 = *(float *)((longlong)pfVar9 + ((longlong)pfVar10 - (longlong)pfVar29));
            pfVar9[lVar20] =
                 *(float *)((longlong)pfVar9 + (lVar20 * 4 - (longlong)pfVar29) + (longlong)pfVar10)
            ;
            pfVar9[lVar7 - lVar36] =
                 *(float *)((longlong)pfVar9 +
                           ((lVar7 - lVar36) * 4 - (longlong)pfVar29) + (longlong)pfVar10);
            pfVar9 = pfVar9 + (int)uVar22 * 4;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
          uVar22 = (ulonglong)(uint)param_1;
          if (iVar35 <= param_3) {
LAB_14f05fdcb:
            pfVar9 = pfVar29 + (longlong)((iVar41 + iVar35) * (int)uVar22) + 1;
            uVar32 = (ulonglong)((param_3 - iVar35) + 1);
            do {
              *pfVar9 = *(float *)((longlong)pfVar9 + ((longlong)pfVar10 - (longlong)pfVar29));
              pfVar9 = pfVar9 + local_150;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
        }
        iVar41 = iVar41 + param_3;
        pfVar14 = pfVar14 + param_1 * param_3;
        lVar36 = lVar36 + param_1 * param_3;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
      local_158 = (ulonglong)(int)uVar22;
    }
    iVar30 = (int)uVar22;
    uVar26 = local_158;
    if (param_3 < iVar3) {
      if (param_2 < 2) goto LAB_14f06022f;
      uVar26 = (ulonglong)(param_2 - 1);
      pfVar14 = param_10 + (longlong)-iVar30 + -1;
      iVar41 = param_3;
      do {
        iVar41 = iVar41 + param_3;
        pfVar14 = pfVar14 + local_150;
        iVar35 = 1;
        if (0 < param_3) {
          do {
            if (2 < (longlong)local_150) {
              pfVar9 = pfVar10 + (longlong)((iVar41 + iVar35) * iVar30) + 2;
              uVar32 = local_150 - 1 >> 1;
              pfVar15 = pfVar14;
              do {
                pfVar8 = pfVar15 + 2;
                *(float *)((longlong)pfVar9 + ((longlong)pfVar29 - (longlong)pfVar10)) =
                     *pfVar8 * pfVar9[1] + pfVar15[1] * *pfVar9;
                *(float *)((longlong)pfVar9 + ((longlong)pfVar29 - (longlong)pfVar10) + 4) =
                     pfVar15[1] * pfVar9[1] - *pfVar8 * *pfVar9;
                pfVar9 = pfVar9 + 2;
                uVar32 = uVar32 - 1;
                pfVar15 = pfVar8;
              } while (uVar32 != 0);
            }
            iVar35 = iVar35 + 1;
          } while (iVar35 <= param_3);
        }
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
      local_158 = (ulonglong)iVar30;
    }
    else {
      if (1 < param_2) {
        iVar35 = param_3 * 2;
        iVar41 = iVar35 + 2;
        iVar43 = iVar41 * iVar30;
        pfVar14 = param_10 + (longlong)-iVar30 + -1;
        uVar26 = (ulonglong)(param_2 - 1);
        do {
          pfVar14 = pfVar14 + local_158;
          iVar45 = 3;
          if (2 < iVar30) {
            iVar46 = iVar43 + 3;
            pfVar9 = pfVar14 + -1;
            pfVar15 = pfVar14;
            do {
              pfVar9 = pfVar9 + 2;
              iVar16 = 1;
              pfVar8 = pfVar15 + 2;
              if (3 < param_3) {
                iVar16 = ((param_3 * 2 + 4) - iVar41) * iVar30 + iVar43;
                pfVar13 = pfVar10 + (longlong)iVar46 + -1;
                lVar27 = (longlong)(iVar43 + iVar45);
                lVar36 = (-iVar30 + iVar16 + iVar45) - lVar27;
                lVar18 = (iVar16 + iVar45) - lVar27;
                lVar6 = (lVar36 * 4 - (longlong)pfVar10) + (longlong)pfVar29;
                lVar27 = (iVar43 + -iVar30 + iVar45) - lVar27;
                lVar19 = (lVar18 * 4 - (longlong)pfVar10) + (longlong)pfVar29;
                lVar7 = (lVar27 * 4 - (longlong)pfVar10) + (longlong)pfVar29;
                uVar32 = (ulonglong)((uint)param_3 >> 2);
                iVar16 = ((uint)param_3 >> 2) * 4 + 1;
                do {
                  *(float *)(lVar7 + (longlong)pfVar13) =
                       *pfVar9 * pfVar13[lVar27] + *pfVar8 * pfVar13[lVar27 + 1];
                  *(float *)(lVar7 + 4 + (longlong)pfVar13) =
                       *pfVar9 * pfVar13[lVar27 + 1] - *pfVar8 * pfVar13[lVar27];
                  *(float *)(((longlong)pfVar29 - (longlong)pfVar10) + (longlong)pfVar13) =
                       *pfVar9 * *pfVar13 + pfVar13[1] * *pfVar8;
                  *(float *)(((longlong)pfVar29 - (longlong)pfVar10) + 4 + (longlong)pfVar13) =
                       pfVar13[1] * *pfVar9 - *pfVar8 * *pfVar13;
                  *(float *)((longlong)pfVar13 + lVar6) =
                       *pfVar9 * pfVar13[lVar36] + *pfVar8 * pfVar13[lVar36 + 1];
                  *(float *)((longlong)pfVar13 + lVar6 + 4) =
                       *pfVar9 * pfVar13[lVar36 + 1] - *pfVar8 * pfVar13[lVar36];
                  *(float *)(lVar19 + (longlong)pfVar13) =
                       *pfVar8 * pfVar13[lVar18 + 1] + pfVar13[lVar18] * *pfVar9;
                  *(float *)(lVar19 + 4 + (longlong)pfVar13) =
                       *pfVar9 * pfVar13[lVar18 + 1] - pfVar13[lVar18] * *pfVar8;
                  pfVar13 = pfVar13 + iVar30 * 4;
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
              if (iVar16 <= param_3) {
                pfVar13 = pfVar10 + (longlong)((iVar16 + iVar35) * iVar30 + iVar45) + -1;
                uVar32 = (ulonglong)((param_3 - iVar16) + 1);
                do {
                  *(float *)(((longlong)pfVar29 - (longlong)pfVar10) + (longlong)pfVar13) =
                       *pfVar8 * pfVar13[1] + *pfVar13 * pfVar15[1];
                  *(float *)(((longlong)pfVar29 - (longlong)pfVar10) + 4 + (longlong)pfVar13) =
                       pfVar13[1] * pfVar15[1] - *pfVar13 * *pfVar8;
                  pfVar13 = pfVar13 + local_158;
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
              iVar46 = iVar46 + 2;
              iVar45 = iVar45 + 2;
              pfVar15 = pfVar8;
            } while (iVar45 <= iVar30);
          }
          iVar35 = iVar35 + param_3;
          iVar43 = iVar43 + iVar30 * param_3;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
        uVar26 = (longlong)iVar30;
        local_150 = local_158;
      }
LAB_14f06022f:
      local_158 = uVar26;
      if (iVar3 < param_3) {
        if (iVar2 < 2) goto LAB_14f060f99;
        iVar35 = param_3 * 2;
        iVar41 = iVar35 + 3;
        iVar45 = param_2 * param_3;
        iVar43 = iVar41 * iVar30;
        uVar26 = (ulonglong)(iVar2 - 1);
        do {
          local_144 = 3;
          if (2 < (int)uVar22) {
            do {
              iVar46 = 1;
              if (3 < param_3) {
                iVar16 = (int)uVar22;
                lVar38 = (longlong)((iVar45 + 2) * iVar16 + local_144);
                lVar36 = ((iVar43 - iVar16) + local_144) - lVar38;
                pfVar14 = pfVar29 + lVar38 + -1;
                lVar18 = ((iVar45 + 3) * iVar16 + local_144) - lVar38;
                lVar25 = (local_144 + iVar43) - lVar38;
                lVar27 = (lVar25 * 4 - (longlong)pfVar29) + (longlong)pfVar10;
                lVar6 = (lVar18 * 4 - (longlong)pfVar29) + (longlong)pfVar10;
                lVar7 = ((iVar45 + 4) * iVar16 + local_144) - lVar38;
                lVar33 = (((param_3 * 2 + 4) - iVar41) * iVar30 + iVar43 + local_144) - lVar38;
                lVar19 = (lVar33 * 4 - (longlong)pfVar29) + (longlong)pfVar10;
                lVar20 = (lVar7 * 4 - (longlong)pfVar29) + (longlong)pfVar10;
                lVar28 = ((iVar45 + 1) * iVar16 + local_144) - lVar38;
                lVar38 = (iVar43 + iVar30 * -2 + local_144) - lVar38;
                lVar37 = (lVar38 * 4 - (longlong)pfVar29) + (longlong)pfVar10;
                lVar21 = (lVar28 * 4 - (longlong)pfVar29) + (longlong)pfVar10;
                uVar22 = (ulonglong)((uint)param_3 >> 2);
                iVar46 = ((uint)param_3 >> 2) * 4 + 1;
                do {
                  *(float *)((longlong)pfVar14 + lVar37) = pfVar14[lVar38] + pfVar14[lVar28];
                  *(float *)((longlong)pfVar14 + lVar21) = pfVar14[lVar38 + 1] - pfVar14[lVar28 + 1]
                  ;
                  *(float *)((longlong)pfVar14 + lVar37 + 4) =
                       pfVar14[lVar28 + 1] + pfVar14[lVar38 + 1];
                  *(float *)((longlong)pfVar14 + lVar21 + 4) = pfVar14[lVar28] - pfVar14[lVar38];
                  pfVar9 = (float *)(((longlong)pfVar10 - (longlong)pfVar29) + (longlong)pfVar14);
                  pfVar9[lVar36] = *pfVar14 + pfVar14[lVar36];
                  *pfVar9 = pfVar14[lVar36 + 1] - pfVar14[1];
                  *(float *)((longlong)pfVar14 +
                            (longlong)pfVar10 + (lVar36 * 4 - (longlong)pfVar29) + 4) =
                       pfVar14[1] + pfVar14[lVar36 + 1];
                  pfVar9[1] = *pfVar14 - pfVar14[lVar36];
                  *(float *)((longlong)pfVar14 + lVar27) = pfVar14[lVar25] + pfVar14[lVar18];
                  *(float *)((longlong)pfVar14 + lVar6) = pfVar14[lVar25 + 1] - pfVar14[lVar18 + 1];
                  *(float *)((longlong)pfVar14 + lVar27 + 4) =
                       pfVar14[lVar25 + 1] + pfVar14[lVar18 + 1];
                  *(float *)((longlong)pfVar14 + lVar6 + 4) = pfVar14[lVar18] - pfVar14[lVar25];
                  *(float *)((longlong)pfVar14 + lVar19) = pfVar14[lVar33] + pfVar14[lVar7];
                  *(float *)((longlong)pfVar14 + lVar20) = pfVar14[lVar33 + 1] - pfVar14[lVar7 + 1];
                  *(float *)((longlong)pfVar14 + lVar19 + 4) =
                       pfVar14[lVar7 + 1] + pfVar14[lVar33 + 1];
                  *(float *)((longlong)pfVar14 + lVar20 + 4) = pfVar14[lVar7] - pfVar14[lVar33];
                  pfVar14 = pfVar14 + iVar16 * 4;
                  uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
                uVar22 = (ulonglong)(uint)param_1;
              }
              iVar16 = (int)uVar22;
              if (iVar46 <= param_3) {
                pfVar14 = pfVar29 + (longlong)((iVar35 + iVar46) * iVar16 + local_144) + -1;
                pfVar9 = pfVar29 + (longlong)((iVar45 + iVar46) * iVar16 + local_144) + -1;
                lVar36 = (longlong)pfVar10 - (longlong)pfVar29;
                uVar32 = (ulonglong)((param_3 - iVar46) + 1);
                do {
                  *(float *)(lVar36 + (longlong)pfVar14) = *pfVar14 + *pfVar9;
                  *(float *)(lVar36 + (longlong)pfVar9) = pfVar14[1] - pfVar9[1];
                  *(float *)(lVar36 + 4 + (longlong)pfVar14) = pfVar9[1] + pfVar14[1];
                  fVar49 = *pfVar14;
                  pfVar14 = pfVar14 + local_158;
                  *(float *)(lVar36 + 4 + (longlong)pfVar9) = *pfVar9 - fVar49;
                  pfVar9 = pfVar9 + local_158;
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
              local_144 = local_144 + 2;
            } while (local_144 <= iVar16);
          }
          iVar35 = iVar35 + param_3;
          iVar43 = iVar43 + iVar30 * param_3;
          iVar45 = iVar45 - param_3;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
        goto LAB_14f05f83b;
      }
    }
    if (iVar2 < 2) goto LAB_14f060f99;
    uVar26 = (ulonglong)(iVar2 - 1);
    pfVar14 = pfVar29 + (longlong)((param_2 * param_3 + 1) * iVar30) + 2;
    iVar41 = param_3;
    do {
      iVar41 = iVar41 + param_3;
      iVar35 = 1;
      pfVar9 = pfVar14;
      if (0 < param_3) {
        do {
          if (2 < (longlong)local_158) {
            lVar36 = (longlong)pfVar10 - (longlong)pfVar29;
            uVar32 = local_158 - 1 >> 1;
            pfVar15 = pfVar29 + (longlong)((iVar41 + iVar35) * iVar30) + 2;
            pfVar8 = pfVar9;
            do {
              *(float *)(lVar36 + (longlong)pfVar15) = *pfVar15 + *pfVar8;
              *(float *)(lVar36 + (longlong)pfVar8) = pfVar15[1] - pfVar8[1];
              *(float *)(lVar36 + 4 + (longlong)pfVar15) = pfVar15[1] + pfVar8[1];
              fVar49 = *pfVar15;
              pfVar15 = pfVar15 + 2;
              *(float *)(lVar36 + 4 + (longlong)pfVar8) = *pfVar8 - fVar49;
              pfVar8 = pfVar8 + 2;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          iVar35 = iVar35 + 1;
          pfVar9 = pfVar9 + local_158;
        } while (iVar35 <= param_3);
      }
      pfVar14 = pfVar14 + -(iVar30 * param_3);
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
LAB_14f05f83b:
  iVar41 = param_3 * 2;
  iVar35 = (int)uVar22;
  iVar43 = param_2 * param_3;
  local_150 = (ulonglong)iVar35;
  lVar37 = (longlong)((iVar41 + 3) * iVar35);
  lVar28 = (longlong)((iVar43 + 2) * iVar35);
  lVar36 = (longlong)-(iVar35 * param_3);
  pfVar14 = pfVar29 + lVar28 + 1;
  lVar19 = (longlong)((iVar43 + 4) * iVar35);
  iVar30 = iVar43 + 3;
  lVar20 = lVar19 - lVar28;
  lVar18 = (iVar43 + 1) * iVar35 - lVar28;
  lVar27 = (iVar41 + 2) * iVar35 - lVar37;
  lVar6 = (param_3 + 2) * iVar35 * 2 - lVar37;
  lVar7 = (iVar41 + 1) * iVar35 - lVar37;
  uVar26 = (ulonglong)(iVar2 - 1);
  do {
    iVar45 = 1;
    if (param_3 < 4) {
      if (0 < param_3) goto LAB_14f0608f3;
    }
    else {
      lVar42 = lVar20 + lVar28;
      lVar21 = (lVar37 - lVar28) + lVar27;
      lVar38 = (lVar37 - lVar28) + lVar6;
      lVar40 = (lVar37 - lVar28) + lVar7;
      lVar25 = lVar37 - lVar28;
      lVar33 = (lVar42 - lVar28) + (iVar30 * iVar35 - lVar19);
      lVar42 = lVar42 - lVar28;
      uVar32 = (ulonglong)((uint)param_3 >> 2);
      iVar45 = ((uint)param_3 >> 2) * 4 + 1;
      pfVar9 = pfVar14;
      do {
        *(float *)((longlong)pfVar9 + (lVar40 * 4 - (longlong)pfVar29) + (longlong)pfVar10) =
             pfVar9[lVar40] + pfVar9[lVar18];
        *(float *)((longlong)pfVar9 + (lVar18 * 4 - (longlong)pfVar29) + (longlong)pfVar10) =
             pfVar9[lVar18] - pfVar9[lVar40];
        *(float *)((longlong)pfVar9 + (lVar21 * 4 - (longlong)pfVar29) + (longlong)pfVar10) =
             pfVar9[lVar21] + *pfVar9;
        *(float *)((longlong)pfVar9 + ((longlong)pfVar10 - (longlong)pfVar29)) =
             *pfVar9 - pfVar9[lVar21];
        *(float *)((longlong)pfVar9 + (lVar25 * 4 - (longlong)pfVar29) + (longlong)pfVar10) =
             pfVar9[lVar25] + pfVar9[lVar33];
        *(float *)((longlong)pfVar9 + (lVar33 * 4 - (longlong)pfVar29) + (longlong)pfVar10) =
             pfVar9[lVar33] - pfVar9[lVar25];
        *(float *)((longlong)pfVar9 + (lVar38 * 4 - (longlong)pfVar29) + (longlong)pfVar10) =
             pfVar9[lVar38] + pfVar9[lVar42];
        *(float *)((longlong)pfVar9 + (lVar42 * 4 - (longlong)pfVar29) + (longlong)pfVar10) =
             pfVar9[lVar42] - pfVar9[lVar38];
        pfVar9 = pfVar9 + (int)uVar22 * 4;
        uVar32 = uVar32 - 1;
      } while (uVar32 != 0);
      uVar22 = (ulonglong)(uint)param_1;
      if (iVar45 <= param_3) {
LAB_14f0608f3:
        pfVar9 = pfVar29 + (longlong)((iVar41 + iVar45) * (int)uVar22) + 1;
        pfVar15 = pfVar29 + (longlong)((iVar45 + iVar43) * (int)uVar22) + 1;
        uVar32 = (ulonglong)((param_3 - iVar45) + 1);
        do {
          *(float *)((longlong)pfVar9 + ((longlong)pfVar10 - (longlong)pfVar29)) =
               *pfVar15 + *pfVar9;
          fVar49 = *pfVar9;
          pfVar9 = pfVar9 + local_150;
          *(float *)((longlong)pfVar15 + ((longlong)pfVar10 - (longlong)pfVar29)) =
               *pfVar15 - fVar49;
          pfVar15 = pfVar15 + local_150;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
    }
    lVar28 = lVar28 + lVar36;
    pfVar14 = pfVar14 + lVar36;
    iVar41 = iVar41 + param_3;
    lVar37 = lVar37 + iVar35 * param_3;
    uVar26 = uVar26 - 1;
    iVar43 = iVar43 - param_3;
  } while (uVar26 != 0);
  uVar32 = (ulonglong)param_4;
  fVar50 = 0.0;
  lVar6 = (longlong)(param_4 * 2);
  iVar41 = param_2 * param_4;
  lVar18 = (longlong)iVar41;
  lVar36 = (((lVar6 - uVar32) * 4 + 8) - lVar31) + lVar23;
  lVar27 = (((lVar18 - uVar32) * 4 + 8) - lVar31) + lVar23;
  uVar26 = (ulonglong)(iVar2 - 1);
  uVar22 = uVar32;
  fVar49 = __real_3f800000;
  iVar30 = param_2;
  do {
    lVar7 = 1;
    fVar52 = fVar49 * extraout_XMM0_Da;
    fVar49 = fVar49 * extraout_XMM0_Db - fVar50 * extraout_XMM0_Da;
    fVar50 = fVar52 + fVar50 * extraout_XMM0_Db;
    if ((longlong)uVar32 < 4) {
      if (0 < (longlong)uVar32) goto LAB_14f060b7b;
    }
    else {
      pfVar10 = (float *)(lVar31 + (uVar32 + 2) * 4);
      lVar19 = lVar18 - uVar32;
      uVar22 = uVar32 >> 2;
      lVar7 = uVar22 * 4 + 1;
      do {
        *(float *)((longlong)pfVar10 + lVar36 + -0xc) = fVar49 * pfVar10[uVar32 - 1] + pfVar10[-1];
        *(float *)(lVar27 + -0xc + (longlong)pfVar10) = fVar50 * pfVar10[lVar19 + -1];
        *(float *)((longlong)pfVar10 + lVar36 + -8) = fVar49 * pfVar10[uVar32] + *pfVar10;
        *(float *)(lVar27 + -8 + (longlong)pfVar10) = fVar50 * pfVar10[lVar19];
        *(float *)((longlong)pfVar10 + lVar36 + -4) = fVar49 * pfVar10[uVar32 + 1] + pfVar10[1];
        *(float *)(lVar27 + -4 + (longlong)pfVar10) = fVar50 * pfVar10[lVar19 + 1];
        *(float *)((longlong)pfVar10 + lVar36) = fVar49 * pfVar10[uVar32 + 2] + pfVar10[2];
        *(float *)(lVar27 + (longlong)pfVar10) = fVar50 * pfVar10[(lVar18 - uVar32) + 2];
        pfVar10 = pfVar10 + 4;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      if (lVar7 <= (longlong)uVar32) {
LAB_14f060b7b:
        pfVar10 = (float *)(lVar31 + (uVar32 + lVar7) * 4);
        lVar7 = (uVar32 - lVar7) + 1;
        do {
          *(float *)((longlong)pfVar10 + lVar36 + -8) = fVar49 * pfVar10[uVar32] + *pfVar10;
          *(float *)((longlong)pfVar10 + (((longlong)iVar41 - uVar32) * 4 - lVar31) + lVar23) =
               fVar50 * pfVar10[lVar18 - uVar32];
          pfVar10 = pfVar10 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar22 = (ulonglong)(uint)param_4;
    }
    if (2 < iVar2) {
      iVar43 = (param_2 + -1) * param_4;
      iVar35 = (int)uVar22;
      lVar7 = (((iVar35 * 3 - lVar6) * 4 + 8) - lVar23) + lVar31;
      lVar19 = (((iVar43 - lVar6) * 4 + 8) - lVar23) + lVar31;
      uVar22 = (ulonglong)(iVar2 - 2);
      fVar52 = fVar49;
      fVar48 = fVar50;
      do {
        lVar20 = 1;
        fVar51 = fVar52 * fVar50;
        fVar52 = fVar52 * fVar49 - fVar48 * fVar50;
        fVar48 = fVar48 * fVar49 + fVar51;
        if ((longlong)uVar32 < 4) {
          if (0 < (longlong)uVar32) goto LAB_14f060d86;
        }
        else {
          pfVar10 = (float *)(lVar31 + uVar32 * 4 + lVar36);
          lVar28 = iVar30 * iVar35 - lVar6;
          uVar34 = uVar32 >> 2;
          lVar20 = uVar34 * 4 + 1;
          do {
            pfVar10[-1] = fVar52 * *(float *)((longlong)pfVar10 + lVar7 + -0xc) + pfVar10[-1];
            pfVar10[lVar28 + -1] =
                 fVar48 * *(float *)((longlong)pfVar10 + lVar19 + -0xc) + pfVar10[lVar28 + -1];
            *pfVar10 = fVar52 * *(float *)((longlong)pfVar10 + lVar7 + -8) + *pfVar10;
            pfVar10[lVar28] = fVar48 * *(float *)((longlong)pfVar10 + lVar19 + -8) + pfVar10[lVar28]
            ;
            pfVar10[1] = fVar52 * *(float *)((longlong)pfVar10 + lVar7 + -4) + pfVar10[1];
            pfVar10[lVar28 + 1] =
                 fVar48 * *(float *)((longlong)pfVar10 + lVar19 + -4) + pfVar10[lVar28 + 1];
            pfVar10[2] = fVar52 * *(float *)((longlong)pfVar10 + lVar7) + pfVar10[2];
            pfVar10[lVar28 + 2] =
                 fVar48 * *(float *)((longlong)pfVar10 + lVar19) + pfVar10[lVar28 + 2];
            pfVar10 = pfVar10 + 4;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
          if (lVar20 <= (longlong)uVar32) {
LAB_14f060d86:
            pfVar10 = (float *)(lVar23 + (lVar20 + lVar6) * 4);
            lVar28 = iVar30 * iVar35 - lVar6;
            lVar20 = (uVar32 - lVar20) + 1;
            do {
              *pfVar10 = fVar52 * *(float *)(lVar7 + -8 + (longlong)pfVar10) + *pfVar10;
              pfVar10[lVar28] =
                   fVar48 * *(float *)(((iVar43 - lVar6) * 4 - lVar23) + lVar31 + (longlong)pfVar10)
                   + pfVar10[lVar28];
              pfVar10 = pfVar10 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
        }
        uVar22 = uVar22 - 1;
        lVar19 = lVar19 + (longlong)-iVar35 * 4;
        lVar7 = lVar7 + uVar32 * 4;
        iVar43 = iVar43 - param_4;
      } while (uVar22 != 0);
      uVar22 = (ulonglong)(uint)param_4;
    }
    lVar27 = lVar27 + (longlong)-param_4 * 4;
    iVar30 = iVar30 + -1;
    uVar26 = uVar26 - 1;
    iVar35 = (int)uVar22;
    iVar41 = iVar41 - iVar35;
    lVar6 = lVar6 + iVar35;
    lVar36 = lVar36 + uVar32 * 4;
  } while (uVar26 != 0);
  uVar32 = (ulonglong)(iVar2 - 1);
  uVar22 = (ulonglong)(uint)param_1;
  uVar26 = (ulonglong)iVar35;
  lVar31 = ((((longlong)(iVar35 * 2) - uVar26) * 4 + 8) - lVar23) + lVar31;
  do {
    lVar36 = 1;
    if ((longlong)uVar26 < 4) {
      if (0 < (longlong)uVar26) goto LAB_14f060f63;
    }
    else {
      uVar34 = uVar26 >> 2;
      pfVar10 = (float *)(lVar23 + (uVar26 + 2) * 4);
      lVar36 = uVar34 * 4 + 1;
      do {
        pfVar10[-1] = *(float *)(lVar31 + -0xc + (longlong)pfVar10) + pfVar10[-1];
        *pfVar10 = *(float *)(lVar31 + -8 + (longlong)pfVar10) + *pfVar10;
        pfVar10[1] = *(float *)(lVar31 + -4 + (longlong)pfVar10) + pfVar10[1];
        pfVar10[2] = pfVar10[2] + *(float *)(lVar31 + (longlong)pfVar10);
        pfVar10 = pfVar10 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
      if (lVar36 <= (longlong)uVar26) {
LAB_14f060f63:
        pfVar10 = (float *)(lVar23 + (uVar26 + lVar36) * 4);
        lVar36 = (uVar26 - lVar36) + 1;
        do {
          *pfVar10 = *(float *)(lVar31 + -8 + (longlong)pfVar10) + *pfVar10;
          pfVar10 = pfVar10 + 1;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
      }
    }
    lVar31 = lVar31 + uVar26 * 4;
    uVar32 = uVar32 - 1;
  } while (uVar32 != 0);
LAB_14f060f99:
  uVar26 = (ulonglong)(uint)param_3;
  iVar30 = (int)uVar22;
  if (iVar30 < param_3) {
    iVar41 = 1;
    if (0 < iVar30) {
      local_150 = (ulonglong)iVar30;
      do {
        iVar35 = 1;
        if (3 < param_3) {
          iVar43 = (int)uVar22;
          iVar45 = (param_3 + 1) * iVar30 + iVar41;
          lVar36 = (longlong)((param_3 + 3) * iVar43 + iVar41);
          pfVar10 = pfVar29 + lVar36;
          lVar31 = (longlong)((param_2 * 3 + 1) * iVar43 + iVar41);
          pfVar14 = pfVar47 + lVar31;
          uVar22 = (ulonglong)((uint)param_3 >> 2);
          iVar35 = ((uint)param_3 >> 2) * 4 + 1;
          do {
            pfVar14[((param_2 - param_3) * iVar30 + iVar45) - lVar31] = pfVar10[iVar45 - lVar36];
            pfVar14[((param_2 * 2 + 1) * iVar43 + iVar41) - lVar31] =
                 pfVar10[((param_3 + 2) * iVar43 + iVar41) - lVar36];
            *pfVar14 = *pfVar10;
            pfVar9 = pfVar10 + (((param_3 + 4) * iVar43 + iVar41) - lVar36);
            pfVar10 = pfVar10 + iVar43 * 4;
            pfVar14[((param_2 * 4 + 1) * iVar43 + iVar41) - lVar31] = *pfVar9;
            pfVar14 = pfVar14 + iVar43 * param_2 * 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
          uVar22 = (ulonglong)(uint)param_1;
        }
        iVar43 = (int)uVar22;
        if (iVar35 <= param_3) {
          pfVar10 = pfVar29 + ((iVar35 + param_3) * iVar43 + iVar41);
          pfVar14 = pfVar47 + ((iVar35 * param_2 + 1) * iVar43 + iVar41);
          uVar26 = (ulonglong)((param_3 - iVar35) + 1);
          do {
            fVar49 = *pfVar10;
            pfVar10 = pfVar10 + local_150;
            *pfVar14 = fVar49;
            pfVar14 = pfVar14 + iVar43 * param_2;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        iVar41 = iVar41 + 1;
      } while (iVar41 <= iVar43);
    }
  }
  else if (0 < param_3) {
    iVar43 = (param_3 + 1) * iVar30;
    iVar35 = iVar30 * param_2;
    iVar41 = (param_2 + 1) * iVar30;
    lVar36 = (longlong)((param_3 + 1) * iVar30 + 1);
    local_150 = (ulonglong)iVar30;
    lVar31 = (longlong)((param_2 + 1) * iVar30 + 1);
    pfVar10 = pfVar47 + lVar31 + 1;
    do {
      iVar45 = 1;
      if (iVar30 < 4) {
        if (0 < iVar30) goto LAB_14f0610c8;
      }
      else {
        lVar23 = ((lVar36 - lVar31) * 4 - (longlong)pfVar47) + (longlong)pfVar29;
        uVar32 = (uVar22 & 0xffffffff) >> 2;
        iVar45 = (int)uVar32 * 4 + 1;
        pfVar14 = pfVar10;
        do {
          pfVar14[-1] = *(float *)(lVar23 + -4 + (longlong)pfVar14);
          *pfVar14 = *(float *)(lVar23 + (longlong)pfVar14);
          pfVar14[1] = *(float *)(lVar23 + 4 + (longlong)pfVar14);
          pfVar14[2] = *(float *)((((lVar36 - lVar31) * 4 + 8) - (longlong)pfVar47) +
                                  (longlong)pfVar29 + (longlong)pfVar14);
          pfVar14 = pfVar14 + 4;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
        if (iVar45 <= iVar30) {
LAB_14f0610c8:
          pfVar9 = pfVar47 + (iVar41 + iVar45);
          pfVar14 = pfVar29 + (iVar43 + iVar45);
          uVar32 = (ulonglong)((iVar30 - iVar45) + 1);
          do {
            fVar49 = *pfVar14;
            pfVar14 = pfVar14 + 1;
            *pfVar9 = fVar49;
            pfVar9 = pfVar9 + 1;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
        }
      }
      iVar43 = iVar43 + iVar30;
      lVar36 = lVar36 + local_150;
      iVar41 = iVar41 + iVar35;
      lVar31 = lVar31 + iVar35;
      pfVar10 = pfVar10 + iVar35;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  param_9 = (float *)&DAT_00000004;
  iVar30 = (int)uVar22;
  if (1 < iVar2) {
    uVar26 = (ulonglong)(iVar2 - 1);
    local_res20 = 4;
    iVar35 = param_2 * param_3;
    iVar41 = param_3 * 2;
    lVar31 = (longlong)((param_2 + 3) * iVar30);
    do {
      iVar43 = 1;
      if (param_3 < 4) {
        if (0 < param_3) goto LAB_14f061518;
      }
      else {
        iVar45 = iVar35 + 1;
        lVar36 = (longlong)((param_2 * 3 + -1 + local_res20) * iVar30);
        pfVar10 = pfVar47 + lVar36 + 1;
        iVar46 = iVar41 + 1;
        lVar23 = (param_2 * 2 + -1 + local_res20) * iVar30 - lVar36;
        lVar18 = (local_res20 + -1 + param_2 * 4) * iVar30 - lVar36;
        do {
          iVar16 = iVar41 + iVar43;
          iVar4 = iVar46 * iVar30;
          iVar1 = iVar35 + iVar43;
          iVar43 = iVar43 + 4;
          iVar46 = iVar46 + 4;
          iVar5 = iVar45 * iVar30;
          iVar45 = iVar45 + 4;
          pfVar10[(lVar31 - lVar36) + -1] = pfVar29[(longlong)iVar4 + 1];
          pfVar10[lVar31 - lVar36] = pfVar29[(longlong)iVar5 + 1];
          pfVar10[lVar23 + -1] = pfVar29[(longlong)((iVar16 + 1) * iVar30) + 1];
          pfVar10[lVar23] = pfVar29[(longlong)((iVar1 + 1) * iVar30) + 1];
          pfVar10[-1] = pfVar29[(longlong)((iVar16 + 2) * iVar30) + 1];
          *pfVar10 = pfVar29[(longlong)((iVar1 + 2) * iVar30) + 1];
          pfVar10[lVar18 + -1] = pfVar29[(longlong)((iVar16 + 3) * iVar30) + 1];
          pfVar10[lVar18] = pfVar29[(longlong)((iVar1 + 3) * iVar30) + 1];
          pfVar10 = pfVar10 + iVar30 * param_2 * 4;
        } while (iVar43 <= param_3 + -3);
        if (iVar43 <= param_3) {
LAB_14f061518:
          pfVar10 = pfVar47 + (iVar43 * param_2 + -1 + local_res20) * iVar30;
          do {
            iVar45 = iVar35 + iVar43;
            *pfVar10 = pfVar29[(longlong)((iVar41 + iVar43) * iVar30) + 1];
            iVar43 = iVar43 + 1;
            pfVar10[1] = pfVar29[(longlong)(iVar45 * iVar30) + 1];
            pfVar10 = pfVar10 + iVar30 * param_2;
          } while (iVar43 <= param_3);
        }
      }
      local_res20 = local_res20 + 2;
      lVar31 = lVar31 + iVar30 * 2;
      iVar35 = iVar35 - param_3;
      iVar41 = iVar41 + param_3;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  uVar44 = 4;
  if ((iVar30 != 1) && (1 < iVar2)) {
    iVar41 = param_3 * 2;
    if (iVar3 < param_3) {
      iVar43 = param_2 * param_3;
      iVar35 = (iVar41 + 2) * iVar30;
      iVar3 = param_3 * -2 + -2;
      uVar26 = (ulonglong)(iVar2 - 1);
      lVar31 = (longlong)iVar30;
      do {
        uVar24 = 3;
        param_8 = (float *)&DAT_00000003;
        if (2 < (int)uVar22) {
          iVar2 = (int)uVar22 + -1;
          do {
            iVar45 = 1;
            if (3 < param_3) {
              iVar46 = iVar35 + uVar24;
              iVar4 = (int)uVar22;
              iVar17 = param_2 * 2 + -2 + uVar44;
              iVar5 = param_2 * 3 - iVar17;
              iVar39 = iVar17 * iVar4 + iVar2;
              iVar11 = param_2 * 4 - iVar17;
              iVar16 = iVar43 + iVar3;
              iVar1 = iVar41 + iVar3;
              uVar22 = (ulonglong)((uint)param_3 >> 2);
              iVar45 = ((uint)param_3 >> 2) * 4 + 1;
              do {
                lVar18 = (longlong)((iVar16 + 1) * iVar4 + iVar46);
                lVar23 = (longlong)((iVar1 + 1) * iVar4 + iVar46);
                lVar36 = (longlong)
                         (int)(((param_2 + -1 + (uVar44 - iVar17)) * iVar4 - iVar2) + uVar24 +
                              iVar39);
                lVar31 = (longlong)(int)(iVar39 + (param_2 + -2 + (uVar44 - iVar17)) * iVar4);
                pfVar47[lVar36 + -1] = pfVar29[lVar23 + -1] + pfVar29[lVar18 + -1];
                pfVar47[lVar31 + -1] = pfVar29[lVar23 + -1] - pfVar29[lVar18 + -1];
                pfVar47[lVar36] = pfVar29[lVar23] + pfVar29[lVar18];
                lVar36 = (longlong)(iVar46 + (iVar16 + 2) * iVar4);
                pfVar47[lVar31] = pfVar29[lVar18] - pfVar29[lVar23];
                lVar31 = (longlong)
                         (int)((((param_2 * 2 - iVar17) + -1 + uVar44) * iVar4 - iVar2) + uVar24 +
                              iVar39);
                pfVar47[lVar31 + -1] = pfVar29[(longlong)iVar46 + -1] + pfVar29[lVar36 + -1];
                pfVar47[(longlong)iVar39 + -1] =
                     pfVar29[(longlong)iVar46 + -1] - pfVar29[lVar36 + -1];
                pfVar47[lVar31] = pfVar29[iVar46] + pfVar29[lVar36];
                pfVar47[iVar39] = pfVar29[lVar36] - pfVar29[iVar46];
                lVar27 = (longlong)((iVar16 + 3) * iVar4 + iVar46);
                lVar23 = (longlong)((iVar1 + 3) * iVar4 + iVar46);
                lVar36 = (longlong)(int)(((iVar5 + -1 + uVar44) * iVar4 - iVar2) + uVar24 + iVar39);
                lVar31 = (longlong)(int)(iVar39 + (iVar5 + -2 + uVar44) * iVar4);
                pfVar47[lVar36 + -1] = pfVar29[lVar23 + -1] + pfVar29[lVar27 + -1];
                pfVar47[lVar31 + -1] = pfVar29[lVar23 + -1] - pfVar29[lVar27 + -1];
                pfVar47[lVar36] = pfVar29[lVar23] + pfVar29[lVar27];
                lVar6 = (longlong)((iVar16 + 4) * iVar4 + iVar46);
                lVar18 = (longlong)((iVar1 + 4) * iVar4 + iVar46);
                pfVar47[lVar31] = pfVar29[lVar27] - pfVar29[lVar23];
                lVar36 = (longlong)(int)(((iVar11 + -1 + uVar44) * iVar4 - iVar2) + uVar24 + iVar39)
                ;
                lVar31 = (longlong)(int)(iVar39 + (iVar11 + -2 + uVar44) * iVar4);
                pfVar47[lVar36 + -1] = pfVar29[lVar18 + -1] + pfVar29[lVar6 + -1];
                pfVar47[lVar31 + -1] = pfVar29[lVar18 + -1] - pfVar29[lVar6 + -1];
                iVar46 = iVar46 + iVar4 * 4;
                iVar39 = iVar39 + iVar4 * param_2 * 4;
                pfVar47[lVar36] = pfVar29[lVar18] + pfVar29[lVar6];
                pfVar47[lVar31] = pfVar29[lVar6] - pfVar29[lVar18];
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
              uVar22 = (ulonglong)(uint)param_1;
              lVar31 = (longlong)iVar30;
              uVar24 = (uint)param_8;
            }
            iVar46 = (int)uVar22;
            if (iVar45 <= param_3) {
              pfVar10 = pfVar29 + (int)((iVar41 + iVar45) * iVar46 + uVar24);
              pfVar14 = pfVar29 + (int)((iVar43 + iVar45) * iVar46 + uVar24);
              pfVar9 = pfVar47 + (int)((((uint)param_9 - 2) + param_2 * iVar45) * iVar46 + iVar2);
              pfVar15 = pfVar47 + (int)((((uint)param_9 - 1) + param_2 * iVar45) * iVar46 + uVar24);
              uVar32 = (ulonglong)((param_3 - iVar45) + 1);
              do {
                pfVar15[-1] = pfVar14[-1] + pfVar10[-1];
                pfVar9[-1] = pfVar10[-1] - pfVar14[-1];
                *pfVar15 = *pfVar10 + *pfVar14;
                pfVar15 = pfVar15 + iVar46 * param_2;
                fVar49 = *pfVar14;
                pfVar14 = pfVar14 + lVar31;
                fVar50 = *pfVar10;
                pfVar10 = pfVar10 + lVar31;
                *pfVar9 = fVar49 - fVar50;
                pfVar9 = pfVar9 + iVar46 * param_2;
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
            uVar24 = uVar24 + 2;
            iVar2 = iVar2 + -2;
            param_8 = (float *)(ulonglong)uVar24;
            lVar31 = (longlong)iVar46;
            uVar44 = (uint)param_9;
          } while ((int)uVar24 <= iVar46);
          lVar31 = (longlong)iVar46;
        }
        iVar35 = iVar35 + iVar30 * param_3;
        uVar44 = uVar44 + 2;
        iVar41 = iVar41 + param_3;
        param_9 = (float *)(ulonglong)uVar44;
        iVar3 = iVar3 + -param_3;
        iVar43 = iVar43 + -param_3;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    else {
      uVar22 = (ulonglong)(iVar2 - 1);
      iVar3 = param_2 * param_3;
      iVar2 = (param_2 + 3) * iVar30 + 3;
      do {
        iVar35 = 1;
        if (0 < param_3) {
          iVar43 = iVar2;
          do {
            if (2 < (longlong)local_150) {
              pfVar10 = pfVar29 + (longlong)((iVar41 + iVar35) * iVar30) + 3;
              uVar26 = local_150 - 1 >> 1;
              pfVar14 = pfVar29 + (longlong)((iVar35 + iVar3) * iVar30) + 3;
              iVar46 = iVar43 + -4;
              iVar45 = iVar43;
              do {
                pfVar47[(longlong)iVar45 + -1] = pfVar10[-1] + pfVar14[-1];
                pfVar47[(longlong)iVar46 + -1] = pfVar10[-1] - pfVar14[-1];
                pfVar47[iVar45] = *pfVar14 + *pfVar10;
                fVar49 = *pfVar14;
                pfVar14 = pfVar14 + 2;
                fVar50 = *pfVar10;
                pfVar10 = pfVar10 + 2;
                pfVar47[iVar46] = fVar49 - fVar50;
                uVar26 = uVar26 - 1;
                iVar46 = iVar46 + -2;
                iVar45 = iVar45 + 2;
              } while (uVar26 != 0);
            }
            iVar35 = iVar35 + 1;
            iVar43 = iVar43 + iVar30 * param_2;
          } while (iVar35 <= param_3);
        }
        iVar2 = iVar2 + iVar30 * 2;
        iVar41 = iVar41 + param_3;
        iVar3 = iVar3 - param_3;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  return;
}

// rfftb1 @ 14f061cc0

void __cdecl rfftb1(int param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong local_38;
  
  lVar13 = (longlong)param_1;
  iVar8 = 0;
  iVar14 = 0;
  local_38 = (longlong)param_5[1];
  if (0 < local_38) {
    piVar7 = param_5 + 2;
    iVar12 = 1;
    do {
      iVar1 = *piVar7;
      iVar2 = param_1 / (iVar1 * iVar12);
      pfVar4 = param_4 + iVar14;
      if (iVar1 == 2) {
        pfVar3 = param_2;
        pfVar9 = param_3;
        if (iVar8 != 0) {
          pfVar3 = param_3;
          pfVar9 = param_2;
        }
        radb2(iVar2,iVar12,pfVar3,pfVar9,pfVar4);
LAB_14f061ecc:
        iVar8 = 1 - iVar8;
      }
      else {
        if (iVar1 == 3) {
          pfVar9 = param_3;
          if (iVar8 != 0) {
            pfVar9 = param_2;
          }
          pfVar3 = param_2;
          if (iVar8 != 0) {
            pfVar3 = param_3;
          }
          radb3(iVar2,iVar12,pfVar3,pfVar9,pfVar4,param_4 + (iVar2 + iVar14));
          goto LAB_14f061ecc;
        }
        if (iVar1 == 4) {
          pfVar9 = param_3;
          if (iVar8 != 0) {
            pfVar9 = param_2;
          }
          pfVar3 = param_2;
          if (iVar8 != 0) {
            pfVar3 = param_3;
          }
          radb4(iVar2,iVar12,pfVar3,pfVar9,pfVar4,param_4 + (iVar2 + iVar14),
                param_4 + (iVar2 + iVar2 + iVar14));
          goto LAB_14f061ecc;
        }
        if (iVar1 == 5) {
          iVar5 = iVar2 + iVar14 + iVar2;
          pfVar9 = param_2;
          if (iVar8 != 0) {
            pfVar9 = param_3;
          }
          pfVar3 = param_3;
          if (iVar8 != 0) {
            pfVar3 = param_2;
          }
          radb5(iVar2,iVar12,pfVar9,pfVar3,pfVar4,param_4 + (iVar2 + iVar14),param_4 + iVar5,
                param_4 + (iVar2 + iVar5));
          iVar8 = 1 - iVar8;
        }
        else {
          pfVar3 = param_2;
          pfVar9 = param_3;
          if (iVar8 != 0) {
            pfVar3 = param_3;
            pfVar9 = param_2;
          }
          radbg(iVar2,iVar1,iVar12,iVar2 * iVar12,pfVar3,pfVar3,pfVar3,pfVar9,pfVar9,pfVar4);
          if (iVar2 == 1) {
            iVar8 = 1 - iVar8;
          }
        }
      }
      piVar7 = piVar7 + 1;
      iVar14 = iVar14 + (iVar1 + -1) * iVar2;
      local_38 = local_38 + -1;
      iVar12 = iVar1 * iVar12;
    } while (local_38 != 0);
    iVar14 = 0;
    if (iVar8 != 0) {
      if (((0 < param_1) && (3 < (uint)param_1)) &&
         ((param_3 + lVar13 + -1 < param_2 || (param_2 + lVar13 + -1 < param_3)))) {
        memcpy(param_2,param_3,lVar13 * 4);
        do {
          iVar14 = iVar14 + 1;
        } while (iVar14 < param_1);
      }
      lVar11 = (longlong)iVar14;
      if (lVar11 < lVar13) {
        lVar6 = (longlong)param_3 - (longlong)param_2;
        if (3 < lVar13 - lVar11) {
          pfVar4 = param_2 + lVar11 + 1;
          lVar10 = ((lVar13 - lVar11) - 4U >> 2) + 1;
          lVar11 = lVar11 + lVar10 * 4;
          do {
            pfVar4[-1] = *(float *)(lVar6 + -4 + (longlong)pfVar4);
            *pfVar4 = *(float *)(lVar6 + (longlong)pfVar4);
            pfVar4[1] = *(float *)(lVar6 + 4 + (longlong)pfVar4);
            pfVar4[2] = *(float *)(lVar6 + 8 + (longlong)pfVar4);
            pfVar4 = pfVar4 + 4;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          if (lVar13 <= lVar11) {
            return;
          }
        }
        pfVar4 = param_2 + lVar11;
        lVar13 = lVar13 - lVar11;
        do {
          *pfVar4 = *(float *)(lVar6 + (longlong)pfVar4);
          pfVar4 = pfVar4 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
  }
  return;
}

// rfftb1_ps @ 14f061ff0

__m128 * __cdecl
rfftb1_ps(int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4,float *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  __m128 *p_Var3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong local_res10;
  
  p_Var3 = param_4;
  if (param_2 == param_4) {
    p_Var3 = param_3;
  }
  iVar5 = 0;
  local_res10 = (longlong)param_6[1];
  if (0 < local_res10) {
    piVar4 = param_6 + 2;
    iVar7 = 1;
    do {
      iVar1 = *piVar4;
      iVar2 = param_1 / (iVar1 * iVar7);
      if (iVar1 == 2) {
        radb2_ps(iVar2,iVar7,param_2,p_Var3,param_5 + iVar5);
      }
      else if (iVar1 == 3) {
        radb3_ps(iVar2,iVar7,param_2,p_Var3,param_5 + iVar5,param_5 + (iVar2 + iVar5));
      }
      else if (iVar1 == 4) {
        radb4_ps(iVar2,iVar7,param_2,p_Var3,param_5 + iVar5,param_5 + (iVar2 + iVar5),
                 param_5 + (iVar2 + iVar2 + iVar5));
      }
      else if (iVar1 == 5) {
        iVar6 = iVar2 + iVar5 + iVar2;
        radb5_ps(iVar2,iVar7,param_2,p_Var3,param_5 + iVar5,param_5 + (iVar2 + iVar5),
                 param_5 + iVar6,param_5 + (iVar2 + iVar6));
      }
      iVar5 = iVar5 + (iVar1 + -1) * iVar2;
      bVar8 = p_Var3 != param_4;
      p_Var3 = param_3;
      param_2 = param_4;
      if (bVar8) {
        p_Var3 = param_4;
        param_2 = param_3;
      }
      piVar4 = piVar4 + 1;
      local_res10 = local_res10 + -1;
      iVar7 = iVar1 * iVar7;
    } while (local_res10 != 0);
  }
  return param_2;
}

// rfftf1 @ 14f0621f0

void __cdecl rfftf1(int param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int local_res8;
  longlong local_38;
  
  lVar12 = (longlong)param_1;
  iVar7 = 1;
  local_res8 = param_1 + -1;
  local_38 = (longlong)param_5[1];
  if (0 < local_38) {
    piVar3 = param_5 + local_38 + 1;
    iVar2 = param_1;
    do {
      iVar1 = *piVar3;
      iVar13 = iVar2 / iVar1;
      iVar2 = param_1 / iVar2;
      local_res8 = local_res8 - (iVar1 + -1) * iVar2;
      iVar4 = 1 - iVar7;
      pfVar5 = param_4 + local_res8;
      if (iVar1 == 2) {
        pfVar8 = param_2;
        pfVar10 = param_3;
        if (iVar4 != 0) {
          pfVar8 = param_3;
          pfVar10 = param_2;
        }
        radf2(iVar2,iVar13,pfVar8,pfVar10,pfVar5);
        iVar7 = iVar4;
      }
      else if (iVar1 == 3) {
        pfVar8 = param_2;
        pfVar10 = param_3;
        if (iVar4 != 0) {
          pfVar8 = param_3;
          pfVar10 = param_2;
        }
        radf3(iVar2,iVar13,pfVar8,pfVar10,pfVar5,param_4 + (iVar2 + local_res8));
        iVar7 = iVar4;
      }
      else if (iVar1 == 4) {
        pfVar8 = param_2;
        pfVar10 = param_3;
        if (iVar4 != 0) {
          pfVar8 = param_3;
          pfVar10 = param_2;
        }
        radf4(iVar2,iVar13,pfVar8,pfVar10,pfVar5,param_4 + (local_res8 + iVar2),
              param_4 + (local_res8 + iVar2 + iVar2));
        iVar7 = iVar4;
      }
      else if (iVar1 == 5) {
        iVar7 = iVar2 + local_res8 + iVar2;
        pfVar10 = param_3;
        if (iVar4 != 0) {
          pfVar10 = param_2;
        }
        pfVar8 = param_2;
        if (iVar4 != 0) {
          pfVar8 = param_3;
        }
        radf5(iVar2,iVar13,pfVar8,pfVar10,pfVar5,param_4 + (iVar2 + local_res8),param_4 + iVar7,
              param_4 + (iVar7 + iVar2));
        iVar7 = iVar4;
      }
      else {
        if (iVar2 != 1) {
          iVar7 = iVar4;
        }
        if (iVar7 == 0) {
          radfg(iVar2,iVar1,iVar13,iVar2 * iVar13,param_2,param_2,param_2,param_3,param_3,pfVar5);
          iVar7 = 1;
        }
        else {
          radfg(iVar2,iVar1,iVar13,iVar2 * iVar13,param_3,param_3,param_3,param_2,param_2,pfVar5);
          iVar7 = 0;
        }
      }
      piVar3 = piVar3 + -1;
      local_38 = local_38 + -1;
      iVar2 = iVar13;
    } while (local_38 != 0);
    if (iVar7 != 1) {
      iVar7 = 0;
      if (((0 < param_1) && (iVar7 = 0, 3 < (uint)param_1)) &&
         ((param_3 + (param_1 + -1) < param_2 || (param_2 + (param_1 + -1) < param_3)))) {
        memcpy(param_2,param_3,lVar12 * 4);
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_1);
      }
      lVar11 = (longlong)iVar7;
      if (lVar11 < lVar12) {
        lVar6 = (longlong)param_3 - (longlong)param_2;
        if (3 < lVar12 - lVar11) {
          pfVar5 = param_2 + lVar11 + 1;
          lVar9 = ((lVar12 - lVar11) - 4U >> 2) + 1;
          lVar11 = lVar11 + lVar9 * 4;
          do {
            pfVar5[-1] = *(float *)((longlong)pfVar5 + lVar6 + -4);
            *pfVar5 = *(float *)((longlong)pfVar5 + lVar6);
            pfVar5[1] = *(float *)((longlong)pfVar5 + lVar6 + 4);
            pfVar5[2] = *(float *)((longlong)pfVar5 + lVar6 + 8);
            pfVar5 = pfVar5 + 4;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          if (lVar12 <= lVar11) {
            return;
          }
        }
        pfVar5 = param_2 + lVar11;
        lVar12 = lVar12 - lVar11;
        do {
          *pfVar5 = *(float *)(lVar6 + (longlong)pfVar5);
          pfVar5 = pfVar5 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
    }
  }
  return;
}

// rfftf1_ps @ 14f062520

__m128 * __cdecl
rfftf1_ps(int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4,float *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __m128 *p_Var4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  iVar5 = param_1 + -1;
  p_Var4 = param_4;
  if (param_2 == param_4) {
    p_Var4 = param_3;
  }
  piVar3 = (int *)(longlong)param_6[1];
  if (0 < (longlong)piVar3) {
    piVar6 = param_6 + (longlong)piVar3 + 1;
    iVar2 = param_1;
    param_6 = piVar3;
    do {
      iVar1 = *piVar6;
      iVar7 = iVar2 / iVar1;
      iVar2 = param_1 / iVar2;
      iVar5 = iVar5 - (iVar1 + -1) * iVar2;
      if (iVar1 == 2) {
        radf2_ps(iVar2,iVar7,param_2,p_Var4,param_5 + iVar5);
      }
      else if (iVar1 == 3) {
        radf3_ps(iVar2,iVar7,param_2,p_Var4,param_5 + iVar5,param_5 + (iVar2 + iVar5));
      }
      else if (iVar1 == 4) {
        radf4_ps(iVar2,iVar7,param_2,p_Var4,param_5 + iVar5,param_5 + (iVar2 + iVar5),
                 param_5 + (iVar2 + iVar2 + iVar5));
      }
      else if (iVar1 == 5) {
        iVar1 = iVar2 + iVar5 + iVar2;
        radf5_ps(iVar2,iVar7,param_2,p_Var4,param_5 + iVar5,param_5 + (iVar2 + iVar5),
                 param_5 + iVar1,param_5 + (iVar2 + iVar1));
      }
      bVar8 = p_Var4 != param_4;
      p_Var4 = param_3;
      param_2 = param_4;
      if (bVar8) {
        p_Var4 = param_4;
        param_2 = param_3;
      }
      piVar6 = piVar6 + -1;
      param_6 = (int *)((longlong)param_6 + -1);
      iVar2 = iVar7;
    } while (param_6 != (int *)0x0);
  }
  return param_2;
}

// rffti1_ps @ 14f062710

void __cdecl rffti1_ps(int param_1,float *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  iVar7 = 0;
  lVar11 = 0;
  lVar14 = 0;
  iVar9 = ntryh[0];
  iVar12 = param_1;
  do {
    if (iVar12 != 1) {
      piVar3 = param_3 + lVar11 + 1;
      lVar10 = lVar11;
      do {
        iVar2 = iVar12 / iVar9;
        lVar11 = lVar10;
        if (iVar12 != iVar2 * iVar9) break;
        piVar3 = piVar3 + 1;
        iVar7 = iVar7 + 1;
        lVar11 = lVar10 + 1;
        *piVar3 = iVar9;
        if ((iVar9 == 2) && (lVar11 != 1)) {
          piVar4 = piVar3;
          if (1 < lVar11) {
            do {
              *piVar4 = piVar4[-1];
              lVar10 = lVar10 + -1;
              piVar4 = piVar4 + -1;
            } while (lVar10 != 0);
          }
          param_3[2] = 2;
        }
        lVar10 = lVar11;
        iVar12 = iVar2;
      } while (iVar2 != 1);
    }
    iVar9 = *(int *)((longlong)ntryh + lVar14 + 4);
    lVar14 = lVar14 + 4;
    if (iVar9 == 0) {
      iVar12 = 0;
      lVar11 = (longlong)(iVar7 + -1);
      iVar9 = 1;
      *param_3 = param_1;
      param_3[1] = iVar7;
      if (0 < lVar11) {
        piVar3 = param_3 + 2;
        do {
          iVar9 = *piVar3 * iVar9;
          iVar7 = param_1 / iVar9;
          uVar1 = *piVar3 - 1;
          if (0 < (int)uVar1) {
            uVar6 = (ulonglong)uVar1;
            pfVar13 = param_2 + (longlong)iVar12 + -1;
            iVar12 = iVar12 + uVar1 * iVar7;
            do {
              if (2 < iVar7) {
                uVar8 = (ulonglong)(iVar7 - 1U >> 1);
                pfVar5 = pfVar13;
                do {
                  __libm_sse2_sincosf_();
                  pfVar5[2] = extraout_XMM0_Da;
                  pfVar5[1] = extraout_XMM0_Db;
                  uVar8 = uVar8 - 1;
                  pfVar5 = pfVar5 + 2;
                } while (uVar8 != 0);
              }
              pfVar13 = pfVar13 + iVar7;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          piVar3 = piVar3 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      return;
    }
  } while( true );
}

// validate_pffft_simd @ 14f062940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl validate_pffft_simd(void)

{
  printf("VZERO=[%2g %2g %2g %2g]\n");
  printf("VADD(4:7,8:11)=[%2g %2g %2g %2g]\n");
  printf("VMUL(4:7,8:11)=[%2g %2g %2g %2g]\n");
  printf("VMADD(4:7,8:11,0:3)=[%2g %2g %2g %2g]\n");
  printf("INTERLEAVE2(4:7,8:11)=[%2g %2g %2g %2g] [%2g %2g %2g %2g]\n");
  printf("UNINTERLEAVE2(4:7,8:11)=[%2g %2g %2g %2g] [%2g %2g %2g %2g]\n");
  printf("LD_PS1(15)=[%2g %2g %2g %2g]\n");
  printf("VSWAPHL(4:7,8:11)=[%2g %2g %2g %2g]\n");
  printf(
        "VTRANSPOSE4(0:3,4:7,8:11,12:15)=[%2g %2g %2g %2g] [%2g %2g %2g %2g] [%2g %2g %2g %2g] [%2g %2g %2g %2g]\n"
        );
  return;
}

// IMPLEMENT_MODULE_ResonanceAudio @ 14f062ec0

void __cdecl IMPLEMENT_MODULE_ResonanceAudio(void)

{
  return;
}

// cfftb @ 14f062ed0

void __cdecl cfftb(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  if (param_1 != 1) {
    iVar1 = param_1 * 2 + 1;
    cfftb1(param_1,param_2,param_3,param_3 + (longlong)iVar1 + -1,
           (int *)(param_3 + (longlong)(param_1 * 2 + iVar1) + -1));
  }
  return;
}

// cfftf @ 14f062f10

void __cdecl cfftf(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  if (param_1 != 1) {
    iVar1 = param_1 * 2 + 1;
    cfftf1(param_1,param_2,param_3,param_3 + (longlong)iVar1 + -1,
           (int *)(param_3 + (longlong)(param_1 * 2 + iVar1) + -1));
  }
  return;
}

// cffti @ 14f062f50

void __cdecl cffti(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  if (param_1 != 1) {
    iVar8 = 1;
    iVar2 = decompose(param_1,(int *)(param_2 + (longlong)(param_1 << 2) + -1),ntryh);
    lVar9 = (longlong)iVar2;
    if (0 < lVar9) {
      pfVar3 = param_2 + (longlong)(param_1 << 2) + 2;
      lVar5 = 2;
      do {
        fVar1 = *pfVar3;
        iVar8 = (int)fVar1 * iVar8;
        if (0 < (int)((int)fVar1 - 1U)) {
          uVar10 = (ulonglong)((int)fVar1 - 1U);
          lVar6 = lVar5;
          do {
            param_2[(longlong)(param_1 * 2) + lVar6 + -2] = 1.0;
            param_2[(longlong)(param_1 * 2) + lVar6 + -1] = 0.0;
            lVar5 = lVar6;
            if (3 < (param_1 / iVar8) * 2 + 2) {
              uVar4 = (ulonglong)(param_1 / iVar8 & 0x7fffffff);
              lVar5 = lVar6 + uVar4 * 2;
              pfVar7 = param_2 + (longlong)(param_1 * 2) + lVar6 + -1;
              do {
                __libm_sse2_sincosf_();
                pfVar7[2] = extraout_XMM0_Da;
                pfVar7[1] = extraout_XMM0_Db;
                uVar4 = uVar4 - 1;
                pfVar7 = pfVar7 + 2;
              } while (uVar4 != 0);
            }
            if (5 < (int)fVar1) {
              param_2[(longlong)(param_1 * 2) + lVar6 + -2] =
                   param_2[(longlong)(param_1 * 2) + lVar5 + -2];
              param_2[(longlong)(param_1 * 2) + lVar6 + -1] =
                   param_2[(longlong)(param_1 * 2) + lVar5 + -1];
            }
            uVar10 = uVar10 - 1;
            lVar6 = lVar5;
          } while (uVar10 != 0);
        }
        pfVar3 = pfVar3 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}

// cosqb @ 14f0631c0

void __cdecl cosqb(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if (param_1 < 2) {
    *param_2 = *param_2 * __real_40800000;
    return;
  }
  if (param_1 == 2) {
    fVar1 = (param_2[1] + *param_2) * __real_40800000;
    param_2[1] = (*param_2 - param_2[1]) * __real_403504f3;
    *param_2 = fVar1;
    return;
  }
  cosqb1(param_1,param_2,param_3,param_3 + (longlong)(param_1 + 1) + -1);
  return;
}

// cosqf @ 14f063220

void __cdecl cosqf(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if (param_1 == 2) {
    fVar1 = param_2[1] * __real_3fb504f3;
    param_2[1] = *param_2 - fVar1;
    *param_2 = *param_2 + fVar1;
    return;
  }
  if (2 < param_1) {
    cosqf1(param_1,param_2,param_3,param_3 + (longlong)(param_1 + 1) + -1);
    return;
  }
  return;
}

// cosqi @ 14f063270

void __cdecl cosqi(int param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float extraout_XMM0_Da;
  double dVar15;
  float extraout_XMM0_Db;
  float fVar16;
  
  fVar2 = __real_3f800000;
  fVar16 = 0.0;
  uVar13 = (ulonglong)param_1;
  dVar15 = (__real_3ff0000000000000 / (double)param_1) * __real_3ff921fb54442d18;
  pfVar4 = param_2;
  uVar9 = uVar13;
  if (0 < (longlong)uVar13) {
    do {
      fVar16 = fVar16 + fVar2;
      fVar14 = cosf(fVar16 * (float)dVar15);
      *pfVar4 = fVar14;
      uVar9 = uVar9 - 1;
      pfVar4 = pfVar4 + 1;
    } while (uVar9 != 0);
  }
  if (param_1 != 1) {
    lVar5 = (longlong)(param_1 * 2 + 1) + uVar13;
    iVar8 = 0;
    iVar3 = decompose(param_1,(int *)(param_2 + lVar5 + -2),ntryh);
    iVar11 = 1;
    if ((iVar3 + -1 != 0) && (lVar12 = (longlong)(iVar3 + -1), 0 < lVar12)) {
      pfVar4 = param_2 + lVar5 + 1;
      uVar9 = uVar13;
      do {
        iVar11 = (int)*pfVar4 * iVar11;
        uVar1 = (int)*pfVar4 - 1;
        iVar3 = (int)((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff)
                     / (longlong)iVar11);
        if (0 < (int)uVar1) {
          pfVar7 = param_2 + uVar13 * 2 + (longlong)iVar8 + -1;
          uVar9 = (ulonglong)uVar1;
          iVar8 = iVar8 + uVar1 * iVar3;
          do {
            if (2 < iVar3) {
              uVar10 = (ulonglong)(iVar3 - 1U >> 1);
              pfVar6 = pfVar7;
              do {
                __libm_sse2_sincosf_();
                pfVar6[2] = extraout_XMM0_Da;
                pfVar6[1] = extraout_XMM0_Db;
                uVar10 = uVar10 - 1;
                pfVar6 = pfVar6 + 2;
              } while (uVar10 != 0);
            }
            pfVar7 = pfVar7 + iVar3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        pfVar4 = pfVar4 + 1;
        uVar9 = (ulonglong)(uint)param_1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  return;
}

// cost @ 14f0634f0

void __cdecl cost(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar6 = (ulonglong)param_1;
  pfVar4 = param_2 + -1;
  iVar9 = param_1 + 1;
  if (param_1 < 2) {
    return;
  }
  if (param_1 == 2) {
    fVar11 = param_2[1];
    param_2[1] = *param_2 - fVar11;
    *param_2 = fVar11 + *param_2;
    return;
  }
  if (param_1 == 3) {
    fVar11 = param_2[1] + param_2[1];
    fVar20 = param_2[2] + *param_2;
    param_2[1] = *param_2 - param_2[2];
    *param_2 = fVar11 + fVar20;
    param_2[2] = fVar20 - fVar11;
    return;
  }
  fVar11 = *param_2 - pfVar4[uVar6];
  lVar7 = (longlong)(param_1 / 2);
  *param_2 = pfVar4[uVar6] + *param_2;
  if (1 < lVar7) {
    lVar8 = 2;
    if (4 < lVar7) {
      lVar2 = (longlong)pfVar4 - (longlong)param_3;
      uVar10 = lVar7 - 1U >> 2;
      pfVar1 = param_3 + (longlong)iVar9 + -5;
      lVar8 = uVar10 * 4 + 2;
      pfVar3 = param_3;
      do {
        pfVar5 = pfVar3 + 4;
        fVar20 = *(float *)(lVar2 + -8 + (longlong)pfVar5);
        fVar12 = fVar20 - *(float *)((longlong)pfVar1 + lVar2 + 0xc);
        fVar20 = fVar20 + *(float *)((longlong)pfVar1 + lVar2 + 0xc);
        fVar13 = fVar12 * pfVar3[1];
        fVar19 = pfVar1[2];
        *(float *)(lVar2 + -8 + (longlong)pfVar5) = fVar20 - fVar13;
        *(float *)((longlong)pfVar1 + lVar2 + 0xc) = fVar13 + fVar20;
        fVar20 = *(float *)((longlong)pfVar5 + (longlong)param_2 + (-8 - (longlong)param_3));
        fVar14 = fVar20 - *(float *)((longlong)pfVar1 + lVar2 + 8);
        fVar20 = fVar20 + *(float *)((longlong)pfVar1 + lVar2 + 8);
        fVar15 = fVar14 * pfVar3[2];
        fVar13 = pfVar1[1];
        *(float *)((longlong)pfVar5 + (longlong)param_2 + (-8 - (longlong)param_3)) =
             fVar20 - fVar15;
        *(float *)((longlong)pfVar1 + lVar2 + 8) = fVar15 + fVar20;
        fVar16 = *(float *)(lVar2 + (longlong)pfVar5) - *(float *)((longlong)pfVar1 + lVar2 + 4);
        fVar15 = *(float *)(lVar2 + (longlong)pfVar5) + *(float *)((longlong)pfVar1 + lVar2 + 4);
        fVar17 = fVar16 * pfVar3[3];
        fVar20 = *pfVar1;
        *(float *)(lVar2 + (longlong)pfVar5) = fVar15 - fVar17;
        *(float *)((longlong)pfVar1 + lVar2 + 4) = fVar17 + fVar15;
        fVar15 = *(float *)(lVar2 + 4 + (longlong)pfVar5);
        fVar17 = fVar15 - *(float *)((longlong)pfVar1 + lVar2);
        fVar15 = fVar15 + *(float *)((longlong)pfVar1 + lVar2);
        fVar18 = fVar17 * *pfVar5;
        fVar11 = fVar17 * pfVar1[-1] + fVar16 * fVar20 + fVar14 * fVar13 + fVar12 * fVar19 + fVar11;
        *(float *)(lVar2 + 4 + (longlong)pfVar5) = fVar15 - fVar18;
        *(float *)((longlong)pfVar1 + lVar2) = fVar18 + fVar15;
        pfVar1 = pfVar1 + -4;
        uVar10 = uVar10 - 1;
        pfVar3 = pfVar5;
      } while (uVar10 != 0);
      if (lVar7 < lVar8) goto LAB_14f0637de;
    }
    pfVar1 = pfVar4 + lVar8;
    pfVar3 = pfVar4 + (iVar9 - lVar8);
    lVar8 = (lVar7 - lVar8) + 1;
    do {
      fVar20 = *pfVar3 + *pfVar1;
      fVar19 = *pfVar1 - *pfVar3;
      fVar13 = fVar19 * *(float *)((longlong)param_3 + (-4 - (longlong)pfVar4) + (longlong)pfVar1);
      fVar11 = fVar11 + fVar19 * *(float *)((longlong)param_3 + (-4 - (longlong)pfVar4) +
                                           (longlong)pfVar3);
      *pfVar1 = fVar20 - fVar13;
      pfVar1 = pfVar1 + 1;
      *pfVar3 = fVar13 + fVar20;
      pfVar3 = pfVar3 + -1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
LAB_14f0637de:
  if ((param_1 & 1U) != 0) {
    param_2[lVar7] = param_2[lVar7] + param_2[lVar7];
  }
  pfVar1 = param_3 + (longlong)iVar9 + -1;
  rfftf1(param_1 + -1,param_2,pfVar1,pfVar1 + (uVar6 - 1),
         (int *)(pfVar1 + (longlong)((param_1 + -1) * 2 + 1) + -1));
  fVar20 = param_2[1];
  param_2[1] = fVar11;
  if (3 < uVar6) {
    uVar10 = uVar6 - 2 >> 1;
    fVar11 = fVar20;
    do {
      pfVar1 = param_2 + 2;
      fVar20 = param_2[3];
      fVar19 = *pfVar1;
      *pfVar1 = fVar11;
      param_2[3] = param_2[1] - fVar19;
      uVar10 = uVar10 - 1;
      fVar11 = fVar20;
      param_2 = pfVar1;
    } while (uVar10 != 0);
  }
  if ((param_1 & 1U) != 0) {
    pfVar4[uVar6] = fVar20;
  }
  return;
}

// costi @ 14f0638a0

void __cdecl costi(int param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  
  lVar3 = (longlong)param_1;
  if (3 < param_1) {
    iVar12 = param_1 + -1;
    if (1 < (ulonglong)((uint)param_1 >> 1)) {
      lVar5 = (ulonglong)((uint)param_1 >> 1) - 1;
      pfVar7 = param_2 + lVar3 + -2;
      pfVar6 = param_2;
      do {
        pfVar6 = pfVar6 + 1;
        __libm_sse2_sincosf_();
        *pfVar6 = extraout_XMM0_Da + extraout_XMM0_Da;
        *pfVar7 = extraout_XMM0_Db + extraout_XMM0_Db;
        pfVar7 = pfVar7 + -1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    iVar9 = 0;
    pfVar7 = param_2 + (iVar12 * 2 + 1) + lVar3;
    iVar2 = decompose(iVar12,(int *)(pfVar7 + -2),ntryh);
    iVar11 = 1;
    if ((iVar2 + -1 != 0) && (lVar5 = (longlong)(iVar2 + -1), 0 < lVar5)) {
      do {
        pfVar7 = pfVar7 + 1;
        iVar11 = (int)*pfVar7 * iVar11;
        iVar2 = iVar12 / iVar11;
        uVar1 = (int)*pfVar7 - 1;
        if (0 < (int)uVar1) {
          pfVar6 = param_2 + lVar3 * 2 + -2 + (longlong)iVar9;
          uVar8 = (ulonglong)uVar1;
          iVar9 = iVar9 + uVar1 * iVar2;
          do {
            if (2 < iVar2) {
              uVar10 = (ulonglong)(iVar2 - 1U >> 1);
              pfVar4 = pfVar6;
              do {
                __libm_sse2_sincosf_();
                pfVar4[2] = extraout_XMM0_Da_00;
                pfVar4[1] = extraout_XMM0_Db_00;
                uVar10 = uVar10 - 1;
                pfVar4 = pfVar4 + 2;
              } while (uVar10 != 0);
            }
            pfVar6 = pfVar6 + iVar2;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}

// pffft_aligned_free @ 14f063b60

void __cdecl pffft_aligned_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f063b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(*(void **)((longlong)param_1 + -8));
    return;
  }
  return;
}

// pffft_aligned_malloc @ 14f063b80

void * __cdecl pffft_aligned_malloc(ulong64 param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = malloc(param_1 + 0x40);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  pvVar2 = (void *)((longlong)pvVar1 + 0x40U & 0xffffffffffffffc0);
  *(void **)((longlong)pvVar2 + -8) = pvVar1;
  return pvVar2;
}

// pffft_destroy_setup @ 14f063bc0

void __cdecl pffft_destroy_setup(PFFFT_Setup *param_1)

{
  if (param_1->data != (__m128 *)0x0) {
    free(*(void **)((longlong)param_1->data + -8));
  }
                    /* WARNING: Could not recover jumptable at 0x00014f063be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}

// pffft_new_setup @ 14f063c00

PFFFT_Setup * __cdecl pffft_new_setup(int param_1,pffft_transform_t param_2)

{
  int iVar1;
  PFFFT_Setup *_Memory;
  void *pvVar2;
  __m128 *p_Var3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  __m128 *p_Var11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  
  _Memory = malloc(0x60);
  _Memory->N = param_1;
  _Memory->transform = param_2;
  iVar1 = param_1 / 2;
  if (param_2 != PFFFT_REAL) {
    iVar1 = param_1;
  }
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  _Memory->Ncvec = iVar1;
  pvVar2 = malloc(((longlong)(iVar1 * 2) + 4) * 0x10);
  if (pvVar2 == (void *)0x0) {
    p_Var11 = (__m128 *)0x0;
  }
  else {
    p_Var11 = (__m128 *)((longlong)pvVar2 + 0x40U & 0xffffffffffffffc0);
    *(void **)((longlong)p_Var11 + -8) = pvVar2;
  }
  iVar8 = 1;
  p_Var3 = p_Var11 + ((int)(iVar1 * 6 + (iVar1 * 6 >> 0x1f & 3U)) >> 2);
  _Memory->data = p_Var11;
  _Memory->e = (float *)p_Var11;
  _Memory->twiddle = (float *)p_Var3;
  uVar6 = param_1 >> 0x1f;
  if (param_2 == PFFFT_REAL) {
    if (0 < iVar1) {
      uVar7 = 0;
      do {
        lVar10 = 3;
        pfVar9 = p_Var11->m128_f32 + (ulonglong)(uVar7 & 3) + (ulonglong)(uVar7 >> 2) * 0x18;
        do {
          __libm_sse2_sincosf_();
          *pfVar9 = extraout_XMM0_Db;
          pfVar9[4] = extraout_XMM0_Da;
          lVar10 = lVar10 + -1;
          pfVar9 = pfVar9 + 8;
        } while (lVar10 != 0);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar1);
    }
    rffti1_ps((int)((uVar6 & 3) + param_1) >> 2,p_Var3->m128_f32,_Memory->ifac);
  }
  else {
    uVar7 = 0;
    if (0 < iVar1) {
      do {
        lVar10 = 3;
        pfVar9 = p_Var11->m128_f32 + (ulonglong)(uVar7 & 3) + (ulonglong)(uVar7 >> 2) * 0x18;
        do {
          __libm_sse2_sincosf_();
          *pfVar9 = extraout_XMM0_Db_00;
          pfVar9[4] = extraout_XMM0_Da_00;
          lVar10 = lVar10 + -1;
          pfVar9 = pfVar9 + 8;
        } while (lVar10 != 0);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar1);
    }
    cffti1_ps((int)((uVar6 & 3) + param_1) >> 2,p_Var3->m128_f32,_Memory->ifac);
  }
  uVar5 = (ulonglong)(uint)_Memory->ifac[1];
  if (0 < _Memory->ifac[1]) {
    piVar4 = _Memory->ifac + 2;
    do {
      iVar8 = iVar8 * *piVar4;
      piVar4 = piVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar8 == (int)(param_1 + (uVar6 & 3)) >> 2) {
    return _Memory;
  }
  if (_Memory->data != (__m128 *)0x0) {
    free(*(void **)((longlong)_Memory->data + -8));
  }
  free(_Memory);
  return (PFFFT_Setup *)0x0;
}

// pffft_simd_size @ 14f063f20

int __cdecl pffft_simd_size(void)

{
  return 4;
}

// pffft_transform @ 14f063f30

void __cdecl
pffft_transform(PFFFT_Setup *param_1,float *param_2,float *param_3,float *param_4,
               pffft_direction_t param_5)

{
  pffft_transform_internal(param_1,param_2,param_3,(__m128 *)param_4,param_5,0);
  return;
}

// pffft_transform_ordered @ 14f063f60

void __cdecl
pffft_transform_ordered
          (PFFFT_Setup *param_1,float *param_2,float *param_3,float *param_4,
          pffft_direction_t param_5)

{
  pffft_transform_internal(param_1,param_2,param_3,(__m128 *)param_4,param_5,1);
  return;
}

// pffft_zconvolve_accumulate @ 14f063f90

void __cdecl
pffft_zconvolve_accumulate
          (PFFFT_Setup *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lVar25;
  float *pfVar26;
  
  fVar3 = *param_3;
  fVar4 = param_3[4];
  fVar5 = *param_2;
  fVar6 = param_2[4];
  fVar7 = *param_4;
  fVar8 = param_4[4];
  if (0 < (longlong)param_1->Ncvec) {
    pfVar26 = param_4 + 4;
    lVar25 = ((longlong)param_1->Ncvec - 1U >> 1) + 1;
    do {
      pfVar1 = (float *)((longlong)pfVar26 + ((longlong)param_3 - (longlong)param_4) + -0x10);
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar1 = (float *)((longlong)pfVar26 + ((longlong)param_3 - (longlong)param_4));
      pfVar2 = (float *)((longlong)pfVar26 + (longlong)param_2 + (-0x10 - (longlong)param_4));
      fVar13 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      fVar17 = *pfVar1;
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar20 = pfVar1[3];
      pfVar2 = (float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar1);
      fVar21 = *pfVar2;
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      *pfVar26 = (fVar21 * fVar9 + fVar13 * fVar17) * param_5 + *pfVar26;
      pfVar26[1] = (fVar22 * fVar10 + fVar14 * fVar18) * param_5 + pfVar26[1];
      pfVar26[2] = (fVar23 * fVar11 + fVar15 * fVar19) * param_5 + pfVar26[2];
      pfVar26[3] = (fVar24 * fVar12 + fVar16 * fVar20) * param_5 + pfVar26[3];
      pfVar26[-4] = (fVar9 * fVar13 - fVar21 * fVar17) * param_5 + pfVar26[-4];
      pfVar26[-3] = (fVar10 * fVar14 - fVar22 * fVar18) * param_5 + pfVar26[-3];
      pfVar26[-2] = (fVar11 * fVar15 - fVar23 * fVar19) * param_5 + pfVar26[-2];
      pfVar26[-1] = (fVar12 * fVar16 - fVar24 * fVar20) * param_5 + pfVar26[-1];
      pfVar2 = (float *)((longlong)pfVar26 + (longlong)param_2 + (0x10 - (longlong)param_4));
      fVar9 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      pfVar2 = (float *)((longlong)pfVar26 + (longlong)param_2 + (0x20 - (longlong)param_4));
      fVar13 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      fVar21 = pfVar1[8];
      fVar22 = pfVar1[9];
      fVar23 = pfVar1[10];
      fVar24 = pfVar1[0xb];
      pfVar26[4] = (fVar17 * fVar9 - fVar21 * fVar13) * param_5 + pfVar26[4];
      pfVar26[5] = (fVar18 * fVar10 - fVar22 * fVar14) * param_5 + pfVar26[5];
      pfVar26[6] = (fVar19 * fVar11 - fVar23 * fVar15) * param_5 + pfVar26[6];
      pfVar26[7] = (fVar20 * fVar12 - fVar24 * fVar16) * param_5 + pfVar26[7];
      pfVar26[8] = (fVar17 * fVar13 + fVar21 * fVar9) * param_5 + pfVar26[8];
      pfVar26[9] = (fVar18 * fVar14 + fVar22 * fVar10) * param_5 + pfVar26[9];
      pfVar26[10] = (fVar19 * fVar15 + fVar23 * fVar11) * param_5 + pfVar26[10];
      pfVar26[0xb] = (fVar20 * fVar16 + fVar24 * fVar12) * param_5 + pfVar26[0xb];
      pfVar26 = pfVar26 + 0x10;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  if (param_1->transform == PFFFT_REAL) {
    *param_4 = fVar3 * fVar5 * param_5 + fVar7;
    param_4[4] = fVar4 * fVar6 * param_5 + fVar8;
  }
  return;
}

// pffft_zreorder @ 14f064140

void __cdecl
pffft_zreorder(PFFFT_Setup *param_1,float *param_2,float *param_3,pffft_direction_t param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  ulonglong uVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar2 = param_1->N;
  iVar3 = param_1->Ncvec;
  if (param_1->transform != PFFFT_REAL) {
    uVar9 = 0;
    if (param_4 == PFFFT_FORWARD) {
      if (0 < iVar3) {
        do {
          fVar4 = *param_2;
          fVar18 = param_2[1];
          fVar19 = param_2[2];
          fVar20 = param_2[3];
          fVar21 = param_2[4];
          fVar23 = param_2[5];
          fVar22 = param_2[6];
          fVar5 = param_2[7];
          param_2 = param_2 + 8;
          uVar11 = uVar9 >> 2;
          uVar14 = uVar9 & 3;
          uVar9 = uVar9 + 1;
          lVar15 = (longlong)
                   (int)((uVar14 * ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + uVar11) * 2);
          pfVar13 = param_3 + lVar15 * 4;
          *pfVar13 = fVar4;
          pfVar13[1] = fVar21;
          pfVar13[2] = fVar18;
          pfVar13[3] = fVar23;
          pfVar13 = param_3 + (lVar15 + 1) * 4;
          *pfVar13 = fVar19;
          pfVar13[1] = fVar22;
          pfVar13[2] = fVar20;
          pfVar13[3] = fVar5;
        } while ((int)uVar9 < iVar3);
        return;
      }
    }
    else if (0 < iVar3) {
      do {
        uVar11 = uVar9 >> 2;
        uVar14 = uVar9 & 3;
        uVar9 = uVar9 + 1;
        lVar15 = (longlong)(int)((uVar14 * ((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + uVar11) * 2)
        ;
        pfVar13 = param_2 + lVar15 * 4;
        fVar4 = *pfVar13;
        fVar18 = pfVar13[2];
        fVar19 = pfVar13[3];
        pfVar10 = param_2 + (lVar15 + 1) * 4;
        fVar20 = *pfVar10;
        fVar21 = pfVar10[1];
        fVar23 = pfVar10[2];
        fVar22 = pfVar10[3];
        param_3[4] = pfVar13[1];
        param_3[5] = fVar19;
        param_3[6] = fVar21;
        param_3[7] = fVar22;
        *param_3 = fVar4;
        param_3[1] = fVar18;
        param_3[2] = fVar20;
        param_3[3] = fVar23;
        param_3 = param_3 + 8;
      } while ((int)uVar9 < iVar3);
    }
    return;
  }
  uVar9 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  uVar12 = (ulonglong)uVar9;
  lVar15 = (longlong)(int)uVar9;
  if (param_4 == PFFFT_FORWARD) {
    if (0 < (int)uVar9) {
      pfVar13 = param_2 + 0x10;
      pfVar10 = param_3 + 4;
      lVar16 = lVar15;
      do {
        fVar4 = pfVar13[-0xc];
        fVar18 = pfVar13[-0xb];
        fVar19 = pfVar13[-10];
        fVar20 = pfVar13[-9];
        fVar21 = pfVar13[-0xf];
        fVar23 = pfVar13[-0xe];
        fVar22 = pfVar13[-0xd];
        pfVar10[-4] = pfVar13[-0x10];
        pfVar10[-3] = fVar4;
        pfVar10[-2] = fVar21;
        pfVar10[-1] = fVar18;
        *pfVar10 = fVar23;
        pfVar10[1] = fVar19;
        pfVar10[2] = fVar22;
        pfVar10[3] = fVar20;
        fVar4 = *pfVar13;
        fVar18 = pfVar13[1];
        fVar19 = pfVar13[3];
        fVar20 = pfVar13[4];
        fVar21 = pfVar13[5];
        fVar23 = pfVar13[6];
        fVar22 = pfVar13[7];
        pfVar17 = pfVar10 + lVar15 * 0x10;
        *pfVar17 = pfVar13[2];
        pfVar17[1] = fVar23;
        pfVar17[2] = fVar19;
        pfVar17[3] = fVar22;
        pfVar17 = pfVar10 + lVar15 * 0x10 + -4;
        *pfVar17 = fVar4;
        pfVar17[1] = fVar20;
        pfVar17[2] = fVar18;
        pfVar17[3] = fVar21;
        lVar16 = lVar16 + -1;
        pfVar13 = pfVar13 + 0x20;
        pfVar10 = pfVar10 + 8;
      } while (lVar16 != 0);
    }
    fVar4 = param_2[8];
    fVar18 = param_2[9];
    fVar19 = param_2[0xb];
    fVar20 = param_2[0xe];
    fVar21 = param_2[0xf];
    fVar23 = param_2[0xc];
    fVar22 = param_2[0xd];
    lVar15 = (longlong)(iVar2 / 2) + -4;
    pfVar13 = param_3 + lVar15;
    *pfVar13 = param_2[10];
    pfVar13[1] = fVar20;
    pfVar13[2] = fVar18;
    pfVar13[3] = fVar22;
    pfVar13 = param_3 + lVar15;
    if (1 < (int)uVar9) {
      uVar12 = (ulonglong)(uVar9 - 1);
      pfVar10 = pfVar13;
      pfVar17 = param_2 + 0x28;
      fVar18 = fVar19;
      fVar20 = fVar21;
      do {
        fVar22 = pfVar17[1];
        fVar5 = pfVar17[2];
        fVar19 = pfVar17[3];
        fVar6 = pfVar17[4];
        fVar7 = pfVar17[5];
        fVar8 = pfVar17[6];
        fVar21 = pfVar17[7];
        pfVar10[-4] = *pfVar17;
        pfVar10[-3] = fVar6;
        pfVar10[-2] = fVar18;
        pfVar10[-1] = fVar20;
        pfVar13 = pfVar10 + -8;
        *pfVar13 = fVar5;
        pfVar10[-7] = fVar8;
        pfVar10[-6] = fVar22;
        pfVar10[-5] = fVar7;
        uVar12 = uVar12 - 1;
        pfVar10 = pfVar13;
        pfVar17 = pfVar17 + 0x20;
        fVar18 = fVar19;
        fVar20 = fVar21;
      } while (uVar12 != 0);
    }
    pfVar13[-4] = fVar4;
    pfVar13[-3] = fVar23;
    pfVar13[-2] = fVar19;
    pfVar13[-1] = fVar21;
    pfVar13 = param_3 + (longlong)iVar2 + -4;
    fVar4 = param_2[0x18];
    fVar18 = param_2[0x19];
    fVar19 = param_2[0x1b];
    fVar20 = param_2[0x1c];
    fVar21 = param_2[0x1d];
    fVar23 = param_2[0x1e];
    fVar22 = param_2[0x1f];
    *pfVar13 = param_2[0x1a];
    pfVar13[1] = fVar23;
    pfVar13[2] = fVar18;
    pfVar13[3] = fVar21;
    if (1 < (int)uVar9) {
      uVar12 = (ulonglong)(uVar9 - 1);
      pfVar10 = pfVar13;
      pfVar17 = param_2 + 0x38;
      fVar18 = fVar19;
      fVar21 = fVar22;
      do {
        fVar23 = pfVar17[1];
        fVar5 = pfVar17[2];
        fVar19 = pfVar17[3];
        fVar6 = pfVar17[4];
        fVar7 = pfVar17[5];
        fVar8 = pfVar17[6];
        fVar22 = pfVar17[7];
        pfVar10[-4] = *pfVar17;
        pfVar10[-3] = fVar6;
        pfVar10[-2] = fVar18;
        pfVar10[-1] = fVar21;
        pfVar13 = pfVar10 + -8;
        *pfVar13 = fVar5;
        pfVar10[-7] = fVar8;
        pfVar10[-6] = fVar23;
        pfVar10[-5] = fVar7;
        uVar12 = uVar12 - 1;
        pfVar10 = pfVar13;
        pfVar17 = pfVar17 + 0x20;
        fVar18 = fVar19;
        fVar21 = fVar22;
      } while (uVar12 != 0);
    }
    pfVar13[-4] = fVar4;
    pfVar13[-3] = fVar20;
    pfVar13[-2] = fVar19;
    pfVar13[-1] = fVar22;
    return;
  }
  if (0 < (int)uVar9) {
    pfVar13 = param_2 + 4;
    pfVar10 = param_3 + 0x14;
    do {
      fVar4 = *pfVar13;
      fVar18 = pfVar13[1];
      fVar19 = pfVar13[2];
      fVar20 = pfVar13[3];
      fVar21 = pfVar13[-4];
      pfVar17 = pfVar13 + -3;
      fVar23 = pfVar13[-2];
      fVar22 = pfVar13[-1];
      pfVar13 = pfVar13 + 8;
      pfVar10[-0x10] = *pfVar17;
      pfVar10[-0xf] = fVar22;
      pfVar10[-0xe] = fVar18;
      pfVar10[-0xd] = fVar20;
      pfVar10[-0x14] = fVar21;
      pfVar10[-0x13] = fVar23;
      pfVar10[-0x12] = fVar4;
      pfVar10[-0x11] = fVar19;
      pfVar17 = pfVar13 + lVar15 * 0x10 + -0xc;
      fVar4 = *pfVar17;
      fVar18 = pfVar17[2];
      fVar19 = pfVar17[3];
      pfVar1 = pfVar13 + lVar15 * 0x10 + -8;
      fVar20 = *pfVar1;
      fVar21 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar22 = pfVar1[3];
      *pfVar10 = pfVar17[1];
      pfVar10[1] = fVar19;
      pfVar10[2] = fVar21;
      pfVar10[3] = fVar22;
      pfVar10[-4] = fVar4;
      pfVar10[-3] = fVar18;
      pfVar10[-2] = fVar20;
      pfVar10[-1] = fVar23;
      uVar12 = uVar12 - 1;
      pfVar10 = pfVar10 + 0x20;
    } while (uVar12 != 0);
  }
  pfVar13 = param_3 + (longlong)iVar2 + -0x18;
  lVar15 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  pfVar10 = param_2 + lVar15;
  fVar4 = *pfVar10;
  fVar18 = pfVar10[1];
  fVar19 = pfVar10[2];
  fVar20 = pfVar10[3];
  pfVar10 = param_2 + lVar15 + 4;
  if (1 < (int)uVar9) {
    uVar12 = (ulonglong)(uVar9 - 1);
    fVar21 = fVar19;
    fVar23 = fVar20;
    do {
      fVar22 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      fVar7 = pfVar10[3];
      fVar8 = pfVar10[4];
      pfVar17 = pfVar10 + 5;
      fVar19 = pfVar10[6];
      fVar20 = pfVar10[7];
      pfVar10 = pfVar10 + 8;
      pfVar13[4] = *pfVar17;
      pfVar13[5] = fVar7;
      pfVar13[6] = fVar5;
      pfVar13[7] = fVar23;
      *pfVar13 = fVar8;
      pfVar13[1] = fVar6;
      pfVar13[2] = fVar22;
      pfVar13[3] = fVar21;
      pfVar13 = pfVar13 + -0x20;
      uVar12 = uVar12 - 1;
      fVar21 = fVar19;
      fVar23 = fVar20;
    } while (uVar12 != 0);
  }
  fVar21 = pfVar10[2];
  fVar23 = pfVar10[3];
  fVar22 = *pfVar10;
  fVar5 = pfVar10[1];
  *pfVar13 = fVar4;
  pfVar13[1] = fVar21;
  pfVar13[2] = fVar22;
  pfVar13[3] = fVar19;
  lVar15 = (longlong)((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 3U)) >> 2);
  pfVar13[4] = fVar18;
  pfVar13[5] = fVar23;
  pfVar13[6] = fVar5;
  pfVar13[7] = fVar20;
  pfVar13 = param_3 + (longlong)iVar2 + -8;
  pfVar10 = param_2 + lVar15;
  fVar4 = *pfVar10;
  fVar18 = pfVar10[1];
  fVar19 = pfVar10[2];
  fVar20 = pfVar10[3];
  pfVar10 = param_2 + lVar15 + 4;
  if (1 < (int)uVar9) {
    uVar12 = (ulonglong)(uVar9 - 1);
    fVar21 = fVar19;
    fVar23 = fVar20;
    do {
      fVar22 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      fVar7 = pfVar10[3];
      fVar8 = pfVar10[4];
      pfVar17 = pfVar10 + 5;
      fVar19 = pfVar10[6];
      fVar20 = pfVar10[7];
      pfVar10 = pfVar10 + 8;
      pfVar13[4] = *pfVar17;
      pfVar13[5] = fVar7;
      pfVar13[6] = fVar5;
      pfVar13[7] = fVar23;
      *pfVar13 = fVar8;
      pfVar13[1] = fVar6;
      pfVar13[2] = fVar22;
      pfVar13[3] = fVar21;
      pfVar13 = pfVar13 + -0x20;
      uVar12 = uVar12 - 1;
      fVar21 = fVar19;
      fVar23 = fVar20;
    } while (uVar12 != 0);
  }
  fVar21 = pfVar10[2];
  fVar23 = pfVar10[3];
  fVar22 = *pfVar10;
  fVar5 = pfVar10[1];
  pfVar13[4] = fVar18;
  pfVar13[5] = fVar23;
  pfVar13[6] = fVar5;
  pfVar13[7] = fVar20;
  *pfVar13 = fVar4;
  pfVar13[1] = fVar21;
  pfVar13[2] = fVar22;
  pfVar13[3] = fVar19;
  return;
}

// rfftb @ 14f0645b0

void __cdecl rfftb(int param_1,float *param_2,float *param_3)

{
  if (param_1 != 1) {
    rfftb1(param_1,param_2,param_3,param_3 + (longlong)(param_1 + 1) + -1,
           (int *)(param_3 + (longlong)(param_1 * 2 + 1) + -1));
  }
  return;
}

// rfftf @ 14f0645f0

void __cdecl rfftf(int param_1,float *param_2,float *param_3)

{
  if (param_1 != 1) {
    rfftf1(param_1,param_2,param_3,param_3 + (longlong)(param_1 + 1) + -1,
           (int *)(param_3 + (longlong)(param_1 * 2 + 1) + -1));
  }
  return;
}

// rffti @ 14f064630

void __cdecl rffti(int param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  if (param_1 != 1) {
    iVar7 = 0;
    pfVar3 = param_2 + (param_1 * 2 + 1);
    iVar2 = decompose(param_1,(int *)(pfVar3 + -2),ntryh);
    iVar9 = 1;
    if ((iVar2 + -1 != 0) &&
       (lVar10 = (longlong)(iVar2 + -1), uVar6 = (longlong)param_1, 0 < lVar10)) {
      do {
        pfVar3 = pfVar3 + 1;
        iVar9 = (int)*pfVar3 * iVar9;
        uVar1 = (int)*pfVar3 - 1;
        iVar2 = (int)((longlong)((ulonglong)(uint)((int)uVar6 >> 0x1f) << 0x20 | uVar6 & 0xffffffff)
                     / (longlong)iVar9);
        if (0 < (int)uVar1) {
          uVar6 = (ulonglong)uVar1;
          pfVar5 = param_2 + (longlong)param_1 + (longlong)iVar7 + -1;
          iVar7 = iVar7 + uVar1 * iVar2;
          do {
            if (2 < iVar2) {
              uVar8 = (ulonglong)(iVar2 - 1U >> 1);
              pfVar4 = pfVar5;
              do {
                __libm_sse2_sincosf_();
                pfVar4[2] = extraout_XMM0_Da;
                pfVar4[1] = extraout_XMM0_Db;
                uVar8 = uVar8 - 1;
                pfVar4 = pfVar4 + 2;
              } while (uVar8 != 0);
            }
            pfVar5 = pfVar5 + iVar2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          uVar6 = (ulonglong)(uint)param_1;
        }
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}

// sinqb @ 14f064870

void __cdecl sinqb(int param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float *pfVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  
  uVar1 = __xmm_80000000800000008000000080000000;
  uVar5 = (ulonglong)param_1;
  if (param_1 < 2) {
    *param_2 = *param_2 * __real_40800000;
    return;
  }
  if (1 < uVar5) {
    uVar3 = uVar5 >> 1;
    pfVar2 = param_2 + 1;
    do {
      *pfVar2 = (float)((uint)*pfVar2 ^ uVar1);
      uVar3 = uVar3 - 1;
      pfVar2 = pfVar2 + 2;
    } while (uVar3 != 0);
  }
  if (param_1 == 2) {
    fVar9 = (param_2[1] + *param_2) * __real_40800000;
    param_2[1] = (*param_2 - param_2[1]) * __real_403504f3;
    *param_2 = fVar9;
  }
  else {
    cosqb1(param_1,param_2,param_3,param_3 + (longlong)(param_1 + 1) + -1);
  }
  uVar6 = (ulonglong)((uint)param_1 >> 1);
  uVar3 = 1;
  if (3 < uVar6) {
    uVar8 = (ulonglong)((uint)param_1 >> 3);
    uVar3 = uVar8 * 4 + 1;
    pfVar2 = param_2 + 3;
    pfVar4 = param_2 + (uVar5 - 2);
    do {
      fVar9 = pfVar2[-3];
      pfVar2[-3] = pfVar4[1];
      pfVar4[1] = fVar9;
      fVar9 = pfVar2[-2];
      pfVar2[-2] = *pfVar4;
      *pfVar4 = fVar9;
      fVar9 = pfVar2[-1];
      pfVar2[-1] = pfVar4[-1];
      pfVar4[-1] = fVar9;
      fVar9 = *pfVar2;
      *pfVar2 = pfVar4[-2];
      pfVar4[-2] = fVar9;
      uVar8 = uVar8 - 1;
      pfVar2 = pfVar2 + 4;
      pfVar4 = pfVar4 + -4;
    } while (uVar8 != 0);
  }
  if (uVar3 <= uVar6) {
    lVar7 = (uVar6 - uVar3) + 1;
    pfVar2 = param_2 + (uVar3 - 1);
    pfVar4 = param_2 + (uVar5 - uVar3);
    do {
      fVar9 = *pfVar2;
      *pfVar2 = *pfVar4;
      *pfVar4 = fVar9;
      lVar7 = lVar7 + -1;
      pfVar2 = pfVar2 + 1;
      pfVar4 = pfVar4 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// sinqf @ 14f064a00

void __cdecl sinqf(int param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  
  uVar7 = (ulonglong)param_1;
  if (param_1 != 1) {
    lVar8 = 1;
    uVar5 = (ulonglong)(param_1 / 2);
    if (3 < (longlong)uVar5) {
      uVar4 = uVar5 >> 2;
      lVar8 = uVar4 * 4 + 1;
      pfVar2 = param_2 + 3;
      pfVar3 = param_2 + (uVar7 - 2);
      do {
        fVar9 = pfVar2[-3];
        pfVar2[-3] = pfVar3[1];
        pfVar3[1] = fVar9;
        fVar9 = pfVar2[-2];
        pfVar2[-2] = *pfVar3;
        *pfVar3 = fVar9;
        fVar9 = pfVar2[-1];
        pfVar2[-1] = pfVar3[-1];
        pfVar3[-1] = fVar9;
        fVar9 = *pfVar2;
        *pfVar2 = pfVar3[-2];
        pfVar3[-2] = fVar9;
        uVar4 = uVar4 - 1;
        pfVar2 = pfVar2 + 4;
        pfVar3 = pfVar3 + -4;
      } while (uVar4 != 0);
    }
    if (lVar8 <= (longlong)uVar5) {
      lVar6 = (uVar5 - lVar8) + 1;
      pfVar2 = param_2 + lVar8 + -1;
      pfVar3 = param_2 + (uVar7 - lVar8);
      do {
        fVar9 = *pfVar2;
        *pfVar2 = *pfVar3;
        *pfVar3 = fVar9;
        lVar6 = lVar6 + -1;
        pfVar2 = pfVar2 + 1;
        pfVar3 = pfVar3 + -1;
      } while (lVar6 != 0);
    }
    if (param_1 == 2) {
      fVar9 = param_2[1] * __real_3fb504f3;
      param_2[1] = *param_2 - fVar9;
      *param_2 = *param_2 + fVar9;
    }
    else if (2 < param_1) {
      cosqf1(param_1,param_2,param_3,param_3 + (longlong)(param_1 + 1) + -1);
    }
    uVar1 = __xmm_80000000800000008000000080000000;
    if (1 < (longlong)uVar7) {
      uVar7 = uVar7 >> 1;
      pfVar2 = param_2 + 1;
      do {
        *pfVar2 = (float)((uint)*pfVar2 ^ uVar1);
        uVar7 = uVar7 - 1;
        pfVar2 = pfVar2 + 2;
      } while (uVar7 != 0);
    }
  }
  return;
}

// sinqi @ 14f064b80

void __cdecl sinqi(int param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float extraout_XMM0_Da;
  double dVar15;
  float extraout_XMM0_Db;
  float fVar16;
  
  fVar2 = __real_3f800000;
  fVar16 = 0.0;
  uVar13 = (ulonglong)param_1;
  dVar15 = (__real_3ff0000000000000 / (double)param_1) * __real_3ff921fb54442d18;
  pfVar4 = param_2;
  uVar9 = uVar13;
  if (0 < (longlong)uVar13) {
    do {
      fVar16 = fVar16 + fVar2;
      fVar14 = cosf(fVar16 * (float)dVar15);
      *pfVar4 = fVar14;
      uVar9 = uVar9 - 1;
      pfVar4 = pfVar4 + 1;
    } while (uVar9 != 0);
  }
  if (param_1 != 1) {
    lVar5 = (longlong)(param_1 * 2 + 1) + uVar13;
    iVar8 = 0;
    iVar3 = decompose(param_1,(int *)(param_2 + lVar5 + -2),ntryh);
    iVar11 = 1;
    if ((iVar3 + -1 != 0) && (lVar12 = (longlong)(iVar3 + -1), 0 < lVar12)) {
      pfVar4 = param_2 + lVar5 + 1;
      uVar9 = uVar13;
      do {
        iVar11 = (int)*pfVar4 * iVar11;
        uVar1 = (int)*pfVar4 - 1;
        iVar3 = (int)((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff)
                     / (longlong)iVar11);
        if (0 < (int)uVar1) {
          pfVar7 = param_2 + uVar13 * 2 + (longlong)iVar8 + -1;
          uVar9 = (ulonglong)uVar1;
          iVar8 = iVar8 + uVar1 * iVar3;
          do {
            if (2 < iVar3) {
              uVar10 = (ulonglong)(iVar3 - 1U >> 1);
              pfVar6 = pfVar7;
              do {
                __libm_sse2_sincosf_();
                pfVar6[2] = extraout_XMM0_Da;
                pfVar6[1] = extraout_XMM0_Db;
                uVar10 = uVar10 - 1;
                pfVar6 = pfVar6 + 2;
              } while (uVar10 != 0);
            }
            pfVar7 = pfVar7 + iVar3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        pfVar4 = pfVar4 + 1;
        uVar9 = (ulonglong)(uint)param_1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  return;
}

// ResonanceApiMap'' @ 1504717e0

void __cdecl
`dynamic_atexit_destructor_for_'ResonanceAudio::FResonanceAudioPluginListener::ResonanceApiMap__
          (void)

{
  ResonanceAudio::FResonanceAudioPluginListener::ResonanceApiMap._72_4_ = 0;
  if (ResonanceAudio::FResonanceAudioPluginListener::ResonanceApiMap._64_8_ != 0) {
    FMemory::Free((void *)ResonanceAudio::FResonanceAudioPluginListener::ResonanceApiMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ResonanceAudio::FResonanceAudioPluginListener::ResonanceApiMap);
  return;
}

// ResonanceApiMapCriticalSection'' @ 150471820

void __cdecl
`dynamic_atexit_destructor_for_'ResonanceAudio::FResonanceAudioPluginListener::
ResonanceApiMapCriticalSection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150471827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &ResonanceAudio::FResonanceAudioPluginListener::ResonanceApiMapCriticalSection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarExtraResonanceLogging'' @ 150471840

void __cdecl _dynamic_atexit_destructor_for__CVarExtraResonanceLogging__(void)

{
  CVarExtraResonanceLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarExtraResonanceLogging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreUserResonanceSubmix'' @ 150471860

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreUserResonanceSubmix__(void)

{
  CVarIgnoreUserResonanceSubmix._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnoreUserResonanceSubmix);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResonanceQualityOverride'' @ 150471880

void __cdecl _dynamic_atexit_destructor_for__CVarResonanceQualityOverride__(void)

{
  CVarResonanceQualityOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResonanceQualityOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUsingReverb'' @ 1504718a0

void __cdecl ResonanceAudioConsoleVariables::_dynamic_atexit_destructor_for__CVarUsingReverb__(void)

{
  CVarUsingReverb._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUsingReverb);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultPresetName'' @ 1504718c0

void __cdecl
`ResonanceAudio::FResonanceAudioReverb::LoadSubmix'::__l82::
_dynamic_atexit_destructor_for__DefaultPresetName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultPresetName.Data.AllocatorInstance.Data;
  if (DefaultPresetName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultPresetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultSubmixName'' @ 1504718e0

void __cdecl
`ResonanceAudio::FResonanceAudioReverb::LoadSubmix'::__l21::
_dynamic_atexit_destructor_for__DefaultSubmixName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultSubmixName.Data.AllocatorInstance.Data;
  if (DefaultSubmixName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultSubmixName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DisplayName'' @ 150471900

void __cdecl
`ResonanceAudio::FReverbPluginFactory::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
               ::__l2::DisplayName.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
      ::__l2::DisplayName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString___cdecl_ResonanceAudio::FReverbPluginFactory::GetDisplayName(void)___ptr64'
      ::__l2::DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DisplayName'' @ 150471920

void __cdecl
`ResonanceAudio::FSpatializationPluginFactory::GetDisplayName'::__l2::
_dynamic_atexit_destructor_for__DisplayName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
               ::__l2::DisplayName.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
      ::__l2::DisplayName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString___cdecl_ResonanceAudio::FSpatializationPluginFactory::GetDisplayName(void)___ptr64'
      ::__l2::DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DisplayName'' @ 150471940

void __cdecl
`IAudioPluginFactory::GetDisplayName'::__l2::_dynamic_atexit_destructor_for__DisplayName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'
               ::__l2::DisplayName.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'::
      __l2::DisplayName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString___cdecl_IAudioPluginFactory::GetDisplayName(void)___ptr64'::
      __l2::DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DisplayName'' @ 150471960

void __cdecl
`IAudioReverbFactory::GetDisplayName'::__l2::_dynamic_atexit_destructor_for__DisplayName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString___cdecl_IAudioReverbFactory::GetDisplayName(void)___ptr64'
               ::__l2::DisplayName.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString___cdecl_IAudioReverbFactory::GetDisplayName(void)___ptr64'::
      __l2::DisplayName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString___cdecl_IAudioReverbFactory::GetDisplayName(void)___ptr64'::
      __l2::DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DisplayName'' @ 150471980

void __cdecl
`IAudioSpatializationFactory::GetDisplayName'::__l2::_dynamic_atexit_destructor_for__DisplayName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
               ::__l2::DisplayName.Data.AllocatorInstance.Data;
  if (`public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
      ::__l2::DisplayName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_class_FString___cdecl_IAudioSpatializationFactory::GetDisplayName(void)___ptr64'
      ::__l2::DisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogResonanceAudio'' @ 1504719a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogResonanceAudio__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogResonanceAudio);
  return;
}

// `dynamic_atexit_destructor_for_'ResonanceDisplayName'' @ 1504719c0

void __cdecl
`ResonanceAudioUtils::IsResonanceAudioTheCurrentSpatializationPlugin'::__l2::
_dynamic_atexit_destructor_for__ResonanceDisplayName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ResonanceDisplayName.Data.AllocatorInstance.Data;
  if (ResonanceDisplayName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ResonanceDisplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

