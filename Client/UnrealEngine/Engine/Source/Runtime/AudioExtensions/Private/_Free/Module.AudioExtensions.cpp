// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 211

// Instance'' @ 140f8e7f0

void __cdecl `dynamic_initializer_for_'Audio::IAudioParameterInterfaceRegistry::Instance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Audio::IAudioParameterInterfaceRegistry::Instance__);
  return;
}

// NamespaceDelimiter'' @ 140f8e810

void __cdecl `dynamic_initializer_for_'Audio::FParameterPath::NamespaceDelimiter__(void)

{
  ::FString::FString(&Audio::FParameterPath::NamespaceDelimiter,L".");
  atexit(`dynamic_atexit_destructor_for_'Audio::FParameterPath::NamespaceDelimiter__);
  return;
}

// RouterName'' @ 140f8e840

void __cdecl `dynamic_initializer_for_'Audio::IParameterTransmitter::RouterName__(void)

{
  ::FName::FName(&Audio::IParameterTransmitter::RouterName,"ParameterTransmitter");
  return;
}

// `dynamic_initializer_for_'DefaultParameter'' @ 140f8e860

void __cdecl Audio::ModulationPrivate::_dynamic_initializer_for__DefaultParameter__(void)

{
  FModulationParameter::FModulationParameter(&DefaultParameter);
  atexit(_dynamic_atexit_destructor_for__DefaultParameter__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Audio_SpatializationPlugins'' @ 140f8e890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Audio_SpatializationPlugins__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_AudioSpatializationPluginsLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  
  FVar4 = StatPtr_STAT_AudioSummaryLLM;
  if (StatPtr_STAT_AudioSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_AudioSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSummaryLLM,*pFVar3,L"Audio",
                       "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_AudioSpatializationPluginsLLM;
  if (StatPtr_STAT_AudioSpatializationPluginsLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AudioSpatializationPluginsLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_AudioSpatializationPluginsLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AudioSpatializationPluginsLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSpatializationPluginsLLM,
                       *pFVar3,L"AudioSpatializationPlugins","STATGROUP_LLMFULL","STATCAT_Advanced",
                       L"LLM FULL",true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  pFVar3 = FName::FName(&local_res20,L"Audio");
  local_res18 = 0;
  FVar1.Number = local_res8.Number;
  FVar1.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar2.Number = local_res10.Number;
  FVar2.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Audio_SpatializationPlugins,L"Audio_SpatializationPlugins",
             (FName)0x0,*pFVar3,FVar2,FVar1,None);
  return;
}

// `dynamic_initializer_for_'LogAudioEndpoints'' @ 140f8ea00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioEndpoints__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioEndpoints,L"LogAudioEndpoints",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioEndpoints__);
  return;
}

// `dynamic_initializer_for_'LogAudioExtensions'' @ 140f8ea40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioExtensions__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioExtensions,L"LogAudioExtensions",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioExtensions__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioExtensions'' @ 140f8ea80

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioExtensions__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioExtensions";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioExtensions",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioExtensionsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 140f8ead0

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 140f8eaf0

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 140f8eb10

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 140f8eb30

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 140f8eb50

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 140f8eb70

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 140f8eb90

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 140f8ebb0

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'ParameterRegistry'' @ 140f8ebd0

void __cdecl Audio::ModulationInterfacePrivate::_dynamic_initializer_for__ParameterRegistry__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&ParameterRegistry.ThreadSafeValueAccessor,4000);
  atexit(_dynamic_atexit_destructor_for__ParameterRegistry__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSpatializationPluginsLLM'' @ 140f8ec00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSpatializationPluginsLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSpatializationPluginsLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AudioSpatializationPluginsLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSpatializationPluginsLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSpatializationPluginsLLM,*pFVar1,
               L"AudioSpatializationPlugins","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true
               ,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h__Script_AudioExtensions_3619306330'' @ 140f8ec90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h__Script_AudioExtensions_3619306330__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h__Script_AudioExtensions_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h__Script_AudioExtensions_2470884327'' @ 140f8ecd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h__Script_AudioExtensions_2470884327__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h__Script_AudioExtensions_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h__Script_AudioExtensions_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h__Script_AudioExtensions_41554493'' @ 140f8ed20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h__Script_AudioExtensions_41554493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h__Script_AudioExtensions_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h__Script_AudioExtensions_3845401892'' @ 140f8ed60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h__Script_AudioExtensions_3845401892__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h__Script_AudioExtensions_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioExtensionPlugin_h__Script_AudioExtensions_4291640337'' @ 140f8eda0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioExtensionPlugin_h__Script_AudioExtensions_4291640337__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioExtensionPlugin_h__Script_AudioExtensions_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h__Script_AudioExtensions_1539772027'' @ 140f8ede0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h__Script_AudioExtensions_1539772027__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h__Script_AudioExtensions_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h__Script_AudioExtensions_4180147217'' @ 140f8ee20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h__Script_AudioExtensions_4180147217__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h__Script_AudioExtensions_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h__Script_AudioExtensions_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h__Script_AudioExtensions_1595189362'' @ 140f8ee70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h__Script_AudioExtensions_1595189362__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h__Script_AudioExtensions_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldFormat_h__Script_AudioExtensions_43836451'' @ 140f8eeb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldFormat_h__Script_AudioExtensions_43836451__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldFormat_h__Script_AudioExtensions_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h__Script_AudioExtensions_2577619272'' @ 140f8eef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h__Script_AudioExtensions_2577619272__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h__Script_AudioExtensions_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h__Script_AudioExtensions_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_SoundGeneratorOutput_h__Script_AudioExtensions_164104493'' @ 140f8ef40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_SoundGeneratorOutput_h__Script_AudioExtensions_164104493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioExtensions",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_SoundGeneratorOutput_h__Script_AudioExtensions_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioExtensions'' @ 140f8ef80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioExtensions__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7c1e5b39;
  local_res8[0].DeclarationsHash = 0xbb156d92;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioExtensions,L"/Script/AudioExtensions",
             &Z_Registration_Info_UPackage__Script_AudioExtensions,local_res8);
  return;
}

// Z_Construct_UClass_UAudioParameterControllerInterface @ 14452a2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioParameterControllerInterface(void)

{
  if (Z_Registration_Info_UClass_UAudioParameterControllerInterface.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioParameterControllerInterface.OuterSingleton,
               &Z_Construct_UClass_UAudioParameterControllerInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioParameterControllerInterface.OuterSingleton;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters @ 14452a310

UFunction * __cdecl Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter @ 14452a350

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InBool_SetBit @ 14452a390

void __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::
NewProp_InBool_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter @ 14452a3a0

UFunction * __cdecl Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter @ 14452a3e0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USoundfieldEffectSettingsBase_NoRegister @ 14452a420

UClass * __cdecl Z_Construct_UClass_USoundfieldEffectSettingsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEffectSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton,
               USoundfieldEffectSettingsBase::StaticRegisterNativesUSoundfieldEffectSettingsBase,
               0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEffectSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEffectSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.InnerSingleton;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter @ 14452a580

UFunction * __cdecl Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter @ 14452a5c0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter @ 14452a600

UFunction * __cdecl Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter @ 14452a640

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter @ 14452a680

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint @ 14452a7a0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter @ 14452a8d0

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter @ 14452a910

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter @ 14452a950

UFunction * __cdecl
Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AudioExtensions @ 14452aaf0

UPackage * __cdecl Z_Construct_UPackage__Script_AudioExtensions(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioExtensions.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioExtensions.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioExtensions.OuterSingleton;
}

// Z_Construct_UClass_USoundfieldEndpointSettingsBase @ 14452abf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundfieldEndpointSettingsBase(void)

{
  if (Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton,
               &Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton;
}

// Z_Construct_UClass_UAudioPropertiesSheetAssetBase @ 14452ace0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioPropertiesSheetAssetBase(void)

{
  if (Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton,
               &Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton;
}

// Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface @ 14452ad20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface(void)

{
  if (Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.OuterSingleton,
               &Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.OuterSingleton;
}

// Z_Construct_UClass_USoundfieldEffectBase @ 14452b2c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundfieldEffectBase(void)

{
  if (Z_Registration_Info_UClass_USoundfieldEffectBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundfieldEffectBase.OuterSingleton,
               &Z_Construct_UClass_USoundfieldEffectBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundfieldEffectBase.OuterSingleton;
}

// Z_Construct_UClass_USoundfieldEffectSettingsBase @ 14452b300

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundfieldEffectSettingsBase(void)

{
  if (Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.OuterSingleton,
               &Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundfieldEffectSettingsBase.OuterSingleton;
}

// Z_Construct_UClass_USoundfieldEncodingSettingsBase @ 14452b340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundfieldEncodingSettingsBase(void)

{
  if (Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.OuterSingleton,
               &Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.OuterSingleton;
}

// Z_Construct_UClass_UOcclusionPluginSourceSettingsBase @ 14452b380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOcclusionPluginSourceSettingsBase(void)

{
  if (Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.OuterSingleton,
               &Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.OuterSingleton;
}

// Z_Construct_UClass_UReverbPluginSourceSettingsBase @ 14452b3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReverbPluginSourceSettingsBase(void)

{
  if (Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.OuterSingleton,
               &Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.OuterSingleton;
}

// Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase @ 14452b400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase(void)

{
  if (Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.
                OuterSingleton,
               &Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.OuterSingleton;
}

// Z_Construct_UClass_USpatializationPluginSourceSettingsBase @ 14452b440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USpatializationPluginSourceSettingsBase(void)

{
  if (Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.OuterSingleton,
               &Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.OuterSingleton;
}

// Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType @ 14452b6b0

UEnum * __cdecl Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType(void)

{
  if (Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.InnerSingleton,
               &Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.InnerSingleton;
}

// Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType @ 14452b6f0

UEnum * __cdecl
Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType(void)

{
  if (Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.
                InnerSingleton,
               &Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14452b870

void * __thiscall
IAudioEndpointFactory::_scalar_deleting_destructor_(IAudioEndpointFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAudioEndpointFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// ESoundWaveCloudStreamingPlatformProjectEnableType_StaticEnum @ 14452b8b0

UEnum * __cdecl ESoundWaveCloudStreamingPlatformProjectEnableType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioExtensions();
    Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType
                       ,(UObject *)pUVar1,L"ESoundWaveCloudStreamingPlatformProjectEnableType");
  }
  return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton;
}

// Z_Construct_UClass_UAudioEndpointSettingsBase @ 14452b920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioEndpointSettingsBase(void)

{
  if (Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton,
               &Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton;
}

// Z_Construct_UClass_UDummyEndpointSettings @ 14452b960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDummyEndpointSettings(void)

{
  if (Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton,
               &Z_Construct_UClass_UDummyEndpointSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton;
}

// NewStructOps @ 14452b9a0

void * __cdecl
Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveCloudStreamingPlatformProjectSettings,&UE::CoreUObject::Private::Construct<FSoundWaveCloudStreamingPlatformProjectSettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveCloudStreamingPlatformProjectSettings>,&UE::CoreUObject::Private::Destruct<FSoundWaveCloudStreamingPlatformProjectSettings>,&UE::CoreUObject::Private::Copy<FSoundWaveCloudStreamingPlatformProjectSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// ESoundWaveCloudStreamingPlatformEnableType_StaticEnum @ 14452b9e0

UEnum * __cdecl ESoundWaveCloudStreamingPlatformEnableType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioExtensions();
    Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType,
                       (UObject *)pUVar1,L"ESoundWaveCloudStreamingPlatformEnableType");
  }
  return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton;
}

// NewStructOps @ 14452ba20

void * __cdecl
Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveCloudStreamingPlatformSettings,&UE::CoreUObject::Private::Construct<FSoundWaveCloudStreamingPlatformSettings>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveCloudStreamingPlatformSettings>,&UE::CoreUObject::Private::Destruct<FSoundWaveCloudStreamingPlatformSettings>,&UE::CoreUObject::Private::Copy<FSoundWaveCloudStreamingPlatformSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWaveformTransformationBase_NoRegister @ 14452ba60

UClass * __cdecl Z_Construct_UClass_UWaveformTransformationBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"WaveformTransformationBase",
               &Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton,
               UWaveformTransformationBase::StaticRegisterNativesUWaveformTransformationBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWaveformTransformationBase>,
               InternalVTableHelperCtorCaller<UWaveformTransformationBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton;
}

// NewStructOps @ 14452bbc0

void * __cdecl Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundGeneratorOutput,&UE::CoreUObject::Private::Construct<FSoundGeneratorOutput>,&UE::CoreUObject::Private::ConstructForTests<FSoundGeneratorOutput>,&UE::CoreUObject::Private::Destruct<FSoundGeneratorOutput>,&UE::CoreUObject::Private::Copy<FSoundGeneratorOutput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14452bd80

void * __thiscall
FAudioExtensionsModule::_scalar_deleting_destructor_(FAudioExtensionsModule *this,uint param_1)

{
  *this = (FAudioExtensionsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UWaveformTransformationBase @ 14452bfc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWaveformTransformationBase(void)

{
  if (Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton,
               &Z_Construct_UClass_UWaveformTransformationBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton;
}

// Z_Construct_UClass_UWaveformTransformationChain @ 14452c000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWaveformTransformationChain(void)

{
  if (Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton,
               &Z_Construct_UClass_UWaveformTransformationChain_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton;
}

// NewProp_bIsLoopRegion_SetBit @ 14452c040

void __cdecl
Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewProp_bIsLoopRegion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14452c050

void * __cdecl Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSoundWaveCuePoint,&UE::CoreUObject::Private::Construct<FSoundWaveCuePoint>,&UE::CoreUObject::Private::ConstructForTests<FSoundWaveCuePoint>,&UE::CoreUObject::Private::Destruct<FSoundWaveCuePoint>,&UE::CoreUObject::Private::Copy<FSoundWaveCuePoint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_AudioExtensions_EAudioParameterType @ 14452c140

UEnum * __cdecl Z_Construct_UEnum_AudioExtensions_EAudioParameterType(void)

{
  if (Z_Registration_Info_UEnum_EAudioParameterType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioParameterType.InnerSingleton,
               &Z_Construct_UEnum_AudioExtensions_EAudioParameterType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioParameterType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAudioParameter @ 14452c180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioParameter.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioParameter.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioParameter.InnerSingleton;
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

// EAudioParameterType_StaticEnum @ 14452c200

UEnum * __cdecl EAudioParameterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioExtensions();
    Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioExtensions_EAudioParameterType,(UObject *)pUVar1,
                       L"EAudioParameterType");
  }
  return Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton;
}

// Z_Construct_UClass_USoundModulatorBase @ 14452c240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundModulatorBase(void)

{
  if (Z_Registration_Info_UClass_USoundModulatorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundModulatorBase.OuterSingleton,
               &Z_Construct_UClass_USoundModulatorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundModulatorBase.OuterSingleton;
}

// NewProp_BoolParam_SetBit @ 14452c280

void __cdecl
Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_BoolParam_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 14452c290

void * __cdecl Z_Construct_UScriptStruct_FAudioParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioParameter,&UE::CoreUObject::Private::Construct<FAudioParameter>,&UE::CoreUObject::Private::ConstructForTests<FAudioParameter>,&UE::CoreUObject::Private::Destruct<FAudioParameter>,&UE::CoreUObject::Private::Copy<FAudioParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FAudioParameter,FAudioParameter,int> @ 14452c300

void __cdecl
ConstructItems<FAudioParameter,FAudioParameter,int>
          (void *param_1,FAudioParameter *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  UObject *pUVar3;
  void *pvVar4;
  FScriptContainerElement *_Src;
  TObjectPtr<UObject> *pTVar5;
  FString *pFVar6;
  TSharedPtr<Audio::IProxyData,1> *pTVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_3 != 0) {
    piVar8 = (int *)((longlong)param_1 + 0x48);
    piVar9 = &(param_2->ArrayBoolParam).ArrayNum;
    do {
      *(undefined8 *)((longlong)piVar9 + (longlong)param_1 + (-0x48 - (longlong)param_2)) =
           *(undefined8 *)(piVar9 + -0x12);
      piVar8[-0x10] = piVar9[-0x10];
      *(char *)(piVar8 + -0xf) = (char)piVar9[-0xf];
      piVar8[-0xe] = piVar9[-0xe];
      pUVar3 = *(UObject **)(piVar9 + -0xc);
      *(UObject **)(piVar8 + -0xc) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FString::FString((FString *)(piVar8 + -10),(FString *)(piVar9 + -10));
      piVar8[-6] = 0;
      piVar8[-5] = 0;
      iVar2 = piVar9[-4];
      pvVar4 = *(void **)(piVar9 + -6);
      piVar8[-4] = iVar2;
      if (iVar2 == 0) {
        piVar8[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)(piVar8 + -6),iVar2,piVar8 + -3);
        memcpy(((ForAnyElementType *)(piVar8 + -6))->Data,pvVar4,(longlong)iVar2 << 2);
      }
      piVar8[-2] = 0;
      piVar8[-1] = 0;
      iVar2 = *piVar9;
      _Src = (((TArray<bool,TSizedDefaultAllocator<32>_> *)(piVar9 + -2))->AllocatorInstance).Data;
      *piVar8 = iVar2;
      if (iVar2 == 0) {
        piVar8[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,(ForAnyElementType *)(piVar8 + -2),iVar2,piVar8 + 1);
        memcpy(((ForAnyElementType *)(piVar8 + -2))->Data,_Src,(longlong)iVar2);
      }
      piVar8[2] = 0;
      piVar8[3] = 0;
      iVar2 = piVar9[4];
      pvVar4 = *(void **)(piVar9 + 2);
      piVar8[4] = iVar2;
      if (iVar2 == 0) {
        piVar8[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)(piVar8 + 2),iVar2,piVar8 + 5);
        memcpy(((ForAnyElementType *)(piVar8 + 2))->Data,pvVar4,(longlong)iVar2 << 2);
      }
      piVar8[6] = 0;
      piVar8[7] = 0;
      iVar2 = piVar9[8];
      pTVar5 = *(TObjectPtr<UObject> **)(piVar9 + 6);
      piVar8[8] = iVar2;
      if (iVar2 == 0) {
        piVar8[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,(ForAnyElementType *)(piVar8 + 6),iVar2,piVar8 + 9);
        ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                  (((ForAnyElementType *)(piVar8 + 6))->Data,pTVar5,iVar2);
      }
      piVar8[10] = 0;
      piVar8[0xb] = 0;
      iVar2 = piVar9[0xc];
      pFVar6 = *(FString **)(piVar9 + 10);
      piVar8[0xc] = iVar2;
      if (iVar2 == 0) {
        piVar8[0xd] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,(ForAnyElementType *)(piVar8 + 10),iVar2,piVar8 + 0xd);
        ConstructItems<FString,FString,int>(((ForAnyElementType *)(piVar8 + 10))->Data,pFVar6,iVar2)
        ;
      }
      pFVar1 = (ForAnyElementType *)(piVar8 + 0x12);
      *(char *)(piVar8 + 0xe) = (char)piVar9[0xe];
      *(undefined8 *)(piVar8 + 0xf) = *(undefined8 *)(piVar9 + 0xf);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar9[0x14];
      pTVar7 = *(TSharedPtr<Audio::IProxyData,1> **)(piVar9 + 0x12);
      piVar8[0x14] = iVar2;
      if (iVar2 == 0) {
        piVar8[0x15] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,pFVar1,iVar2,piVar8 + 0x15);
        ConstructItems<TSharedPtr<Audio::IProxyData,1>,TSharedPtr<Audio::IProxyData,1>,int>
                  (pFVar1->Data,pTVar7,iVar2);
      }
      piVar8 = piVar8 + 0x28;
      piVar9 = piVar9 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<Audio::IProxyData,1>,TSharedPtr<Audio::IProxyData,1>,int> @ 14452c5c0

void __cdecl
ConstructItems<TSharedPtr<Audio::IProxyData,1>,TSharedPtr<Audio::IProxyData,1>,int>
          (void *param_1,TSharedPtr<Audio::IProxyData,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IProxyData **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
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

// DestructItems<FAudioParameter,int> @ 14452c600

void __cdecl DestructItems<FAudioParameter,int>(FAudioParameter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ObjectProxies;
    do {
      DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                ((TSharedPtr<Audio::IProxyData,1> *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>
                ((FString *)
                 (((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->AllocatorInstance)
                 .Data,((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->ArrayNum);
      pFVar1 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar2 + -5))->AllocatorInstance).Data
      ;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar2 + -6))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -7))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<Audio::IProxyData,1>,int> @ 14452c6c0

void __cdecl
DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
          (TSharedPtr<Audio::IProxyData,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>,int> @ 14452c700

void __cdecl
DestructItems<TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>,int>
          (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *param_1,
          int param_2)

{
  ISoundfieldAudioPacket *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (ISoundfieldAudioPacket *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GetTypeHash<Audio::FParameterInterface_const_,1> @ 14452cf50

uint __cdecl
GetTypeHash<Audio::FParameterInterface_const_,1>
          (TSharedPtr<Audio::FParameterInterface_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<FAudioParameter,int,FIdentityFunctor,TDereferenceWrapper<FAudioParameter,`FAudioParameter::Merge'::__l2::<lambda_1>_>_> @ 14452cf80

void __cdecl
AlgoImpl::
HeapSortInternal<FAudioParameter,int,FIdentityFunctor,TDereferenceWrapper<FAudioParameter,_FAudioParameter::Merge_::__l2::<lambda_1>_>_>
          (FAudioParameter *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAudioParameter,_public:_static_void___cdecl_FAudioParameter::Merge(TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&&,TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  FName FVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  TObjectPtr<UObject>_u_0 TVar12;
  undefined8 uVar13;
  float fVar14;
  undefined3 uVar15;
  undefined1 uVar16;
  short sVar17;
  FNameEntryId FVar18;
  float fVar19;
  bool bVar20;
  undefined3 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  EAudioParameterType EVar35;
  undefined1 uVar36;
  short sVar37;
  FNameEntryId FVar38;
  int iVar39;
  bool bVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  longlong lVar45;
  longlong lVar46;
  int iVar47;
  int iVar48;
  FAudioParameter *pFVar49;
  FAudioParameter *pFVar50;
  FAudioParameter *pFVar51;
  int iVar52;
  
  if (param_2 < 0) {
    bVar40 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar40) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar40 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar40) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar41 = (param_2 + -2) / 2;
  iVar43 = iVar41 * 2 + 1;
  iVar48 = iVar43;
  iVar44 = iVar41;
  do {
    while (param_2 <= iVar43) {
LAB_14452d1ee:
      if (iVar44 == 0) {
        iVar43 = param_2 + -1;
        lVar45 = (longlong)iVar43;
        if (0 < iVar43) {
          pFVar49 = param_1 + lVar45;
          do {
            FVar2 = param_1->ParamName;
            fVar19 = param_1->FloatParam;
            bVar20 = param_1->BoolParam;
            uVar21 = *(undefined3 *)&param_1->field_0xd;
            iVar52 = 0;
            iVar44 = param_1->IntParam;
            iVar47 = param_1->_padding_;
            TVar3 = (param_1->ObjectParam).field0_0x0;
            pFVar4 = (param_1->StringParam).Data.AllocatorInstance.Data;
            iVar42 = (param_1->StringParam).Data.ArrayNum;
            iVar22 = (param_1->StringParam).Data.ArrayMax;
            pFVar5 = (param_1->ArrayFloatParam).AllocatorInstance.Data;
            iVar23 = (param_1->ArrayFloatParam).ArrayNum;
            iVar24 = (param_1->ArrayFloatParam).ArrayMax;
            pFVar6 = (param_1->ArrayBoolParam).AllocatorInstance.Data;
            iVar25 = (param_1->ArrayBoolParam).ArrayNum;
            iVar26 = (param_1->ArrayBoolParam).ArrayMax;
            pFVar7 = (param_1->ArrayIntParam).AllocatorInstance.Data;
            iVar27 = (param_1->ArrayIntParam).ArrayNum;
            iVar28 = (param_1->ArrayIntParam).ArrayMax;
            pFVar8 = (param_1->ArrayObjectParam).AllocatorInstance.Data;
            iVar29 = (param_1->ArrayObjectParam).ArrayNum;
            iVar30 = (param_1->ArrayObjectParam).ArrayMax;
            pFVar9 = (param_1->ArrayStringParam).AllocatorInstance.Data;
            iVar31 = (param_1->ArrayStringParam).ArrayNum;
            iVar32 = (param_1->ArrayStringParam).ArrayMax;
            EVar35 = param_1->ParamType;
            uVar36 = param_1->field_0x81;
            sVar37 = param_1->_padding_;
            FVar38.Value = (param_1->TypeName).ComparisonIndex.Value;
            uVar10 = *(undefined8 *)&(param_1->TypeName).Number;
            pFVar11 = (param_1->ObjectProxies).AllocatorInstance.Data;
            iVar33 = (param_1->ObjectProxies).ArrayNum;
            iVar34 = (param_1->ObjectProxies).ArrayMax;
            fVar14 = pFVar49->FloatParam;
            bVar40 = pFVar49->BoolParam;
            uVar15 = *(undefined3 *)&pFVar49->field_0xd;
            param_1->ParamName = pFVar49->ParamName;
            param_1->FloatParam = fVar14;
            param_1->BoolParam = bVar40;
            *(undefined3 *)&param_1->field_0xd = uVar15;
            iVar48 = pFVar49->_padding_;
            TVar12 = (pFVar49->ObjectParam).field0_0x0;
            param_1->IntParam = pFVar49->IntParam;
            param_1->_padding_ = iVar48;
            (param_1->ObjectParam).field0_0x0 = TVar12;
            iVar48 = (pFVar49->StringParam).Data.ArrayNum;
            iVar41 = (pFVar49->StringParam).Data.ArrayMax;
            (param_1->StringParam).Data.AllocatorInstance.Data =
                 (pFVar49->StringParam).Data.AllocatorInstance.Data;
            (param_1->StringParam).Data.ArrayNum = iVar48;
            (param_1->StringParam).Data.ArrayMax = iVar41;
            iVar48 = (pFVar49->ArrayFloatParam).ArrayNum;
            iVar41 = (pFVar49->ArrayFloatParam).ArrayMax;
            (param_1->ArrayFloatParam).AllocatorInstance.Data =
                 (pFVar49->ArrayFloatParam).AllocatorInstance.Data;
            (param_1->ArrayFloatParam).ArrayNum = iVar48;
            (param_1->ArrayFloatParam).ArrayMax = iVar41;
            iVar48 = (pFVar49->ArrayBoolParam).ArrayNum;
            iVar41 = (pFVar49->ArrayBoolParam).ArrayMax;
            (param_1->ArrayBoolParam).AllocatorInstance.Data =
                 (pFVar49->ArrayBoolParam).AllocatorInstance.Data;
            (param_1->ArrayBoolParam).ArrayNum = iVar48;
            (param_1->ArrayBoolParam).ArrayMax = iVar41;
            iVar48 = (pFVar49->ArrayIntParam).ArrayNum;
            iVar41 = (pFVar49->ArrayIntParam).ArrayMax;
            (param_1->ArrayIntParam).AllocatorInstance.Data =
                 (pFVar49->ArrayIntParam).AllocatorInstance.Data;
            (param_1->ArrayIntParam).ArrayNum = iVar48;
            (param_1->ArrayIntParam).ArrayMax = iVar41;
            iVar48 = (pFVar49->ArrayObjectParam).ArrayNum;
            iVar41 = (pFVar49->ArrayObjectParam).ArrayMax;
            (param_1->ArrayObjectParam).AllocatorInstance.Data =
                 (pFVar49->ArrayObjectParam).AllocatorInstance.Data;
            (param_1->ArrayObjectParam).ArrayNum = iVar48;
            (param_1->ArrayObjectParam).ArrayMax = iVar41;
            iVar48 = (pFVar49->ArrayStringParam).ArrayNum;
            iVar41 = (pFVar49->ArrayStringParam).ArrayMax;
            (param_1->ArrayStringParam).AllocatorInstance.Data =
                 (pFVar49->ArrayStringParam).AllocatorInstance.Data;
            (param_1->ArrayStringParam).ArrayNum = iVar48;
            (param_1->ArrayStringParam).ArrayMax = iVar41;
            uVar16 = pFVar49->field_0x81;
            sVar17 = pFVar49->_padding_;
            FVar18.Value = (pFVar49->TypeName).ComparisonIndex.Value;
            uVar13 = *(undefined8 *)&(pFVar49->TypeName).Number;
            param_1->ParamType = pFVar49->ParamType;
            param_1->field_0x81 = uVar16;
            param_1->_padding_ = sVar17;
            (param_1->TypeName).ComparisonIndex = (FNameEntryId)FVar18.Value;
            *(undefined8 *)&(param_1->TypeName).Number = uVar13;
            iVar48 = (pFVar49->ObjectProxies).ArrayNum;
            iVar41 = (pFVar49->ObjectProxies).ArrayMax;
            (param_1->ObjectProxies).AllocatorInstance.Data =
                 (pFVar49->ObjectProxies).AllocatorInstance.Data;
            (param_1->ObjectProxies).ArrayNum = iVar48;
            (param_1->ObjectProxies).ArrayMax = iVar41;
            pFVar49->ParamName = FVar2;
            pFVar49->FloatParam = fVar19;
            pFVar49->BoolParam = bVar20;
            *(undefined3 *)&pFVar49->field_0xd = uVar21;
            pFVar49->IntParam = iVar44;
            pFVar49->_padding_ = iVar47;
            (pFVar49->ObjectParam).field0_0x0 = TVar3;
            (pFVar49->StringParam).Data.AllocatorInstance.Data = pFVar4;
            (pFVar49->StringParam).Data.ArrayNum = iVar42;
            (pFVar49->StringParam).Data.ArrayMax = iVar22;
            (pFVar49->ArrayFloatParam).AllocatorInstance.Data = pFVar5;
            (pFVar49->ArrayFloatParam).ArrayNum = iVar23;
            (pFVar49->ArrayFloatParam).ArrayMax = iVar24;
            (pFVar49->ArrayBoolParam).AllocatorInstance.Data = pFVar6;
            (pFVar49->ArrayBoolParam).ArrayNum = iVar25;
            (pFVar49->ArrayBoolParam).ArrayMax = iVar26;
            (pFVar49->ArrayIntParam).AllocatorInstance.Data = pFVar7;
            (pFVar49->ArrayIntParam).ArrayNum = iVar27;
            (pFVar49->ArrayIntParam).ArrayMax = iVar28;
            (pFVar49->ArrayObjectParam).AllocatorInstance.Data = pFVar8;
            (pFVar49->ArrayObjectParam).ArrayNum = iVar29;
            (pFVar49->ArrayObjectParam).ArrayMax = iVar30;
            (pFVar49->ArrayStringParam).AllocatorInstance.Data = pFVar9;
            (pFVar49->ArrayStringParam).ArrayNum = iVar31;
            (pFVar49->ArrayStringParam).ArrayMax = iVar32;
            pFVar49->ParamType = EVar35;
            pFVar49->field_0x81 = uVar36;
            pFVar49->_padding_ = sVar37;
            (pFVar49->TypeName).ComparisonIndex = (FNameEntryId)FVar38.Value;
            *(undefined8 *)&(pFVar49->TypeName).Number = uVar10;
            (pFVar49->ObjectProxies).AllocatorInstance.Data = pFVar11;
            (pFVar49->ObjectProxies).ArrayNum = iVar33;
            (pFVar49->ObjectProxies).ArrayMax = iVar34;
            if (1 < iVar43) {
              do {
                iVar41 = iVar52 * 2;
                iVar48 = iVar41 + 1;
                if (iVar41 + 2 < iVar43) {
                  lVar46 = (longlong)iVar41;
                  iVar44 = param_1[lVar46 + 2].ParamName.ComparisonIndex.Value -
                           param_1[lVar46 + 1].ParamName.ComparisonIndex.Value;
                  if (iVar44 == 0) {
                    iVar44 = param_1[lVar46 + 2].ParamName.Number -
                             param_1[lVar46 + 1].ParamName.Number;
                  }
                  if (iVar44 < 0) {
                    iVar48 = iVar41;
                  }
                  iVar48 = iVar48 + 1;
                }
                pFVar50 = param_1 + iVar48;
                pFVar51 = param_1 + iVar52;
                iVar41 = (pFVar51->ParamName).ComparisonIndex.Value -
                         (pFVar50->ParamName).ComparisonIndex.Value;
                if (iVar41 == 0) {
                  iVar41 = (pFVar51->ParamName).Number - (pFVar50->ParamName).Number;
                }
                if (-1 < iVar41) break;
                FVar2 = pFVar51->ParamName;
                fVar19 = pFVar51->FloatParam;
                bVar20 = pFVar51->BoolParam;
                uVar21 = *(undefined3 *)&pFVar51->field_0xd;
                iVar47 = pFVar51->IntParam;
                iVar42 = pFVar51->_padding_;
                TVar3 = (pFVar51->ObjectParam).field0_0x0;
                pFVar4 = (pFVar51->StringParam).Data.AllocatorInstance.Data;
                iVar22 = (pFVar51->StringParam).Data.ArrayNum;
                iVar23 = (pFVar51->StringParam).Data.ArrayMax;
                pFVar5 = (pFVar51->ArrayFloatParam).AllocatorInstance.Data;
                iVar24 = (pFVar51->ArrayFloatParam).ArrayNum;
                iVar25 = (pFVar51->ArrayFloatParam).ArrayMax;
                pFVar6 = (pFVar51->ArrayBoolParam).AllocatorInstance.Data;
                iVar26 = (pFVar51->ArrayBoolParam).ArrayNum;
                iVar27 = (pFVar51->ArrayBoolParam).ArrayMax;
                pFVar7 = (pFVar51->ArrayIntParam).AllocatorInstance.Data;
                iVar28 = (pFVar51->ArrayIntParam).ArrayNum;
                iVar29 = (pFVar51->ArrayIntParam).ArrayMax;
                pFVar8 = (pFVar51->ArrayObjectParam).AllocatorInstance.Data;
                iVar30 = (pFVar51->ArrayObjectParam).ArrayNum;
                iVar31 = (pFVar51->ArrayObjectParam).ArrayMax;
                pFVar9 = (pFVar51->ArrayStringParam).AllocatorInstance.Data;
                iVar32 = (pFVar51->ArrayStringParam).ArrayNum;
                iVar33 = (pFVar51->ArrayStringParam).ArrayMax;
                EVar35 = pFVar51->ParamType;
                uVar36 = pFVar51->field_0x81;
                sVar37 = pFVar51->_padding_;
                FVar38.Value = (pFVar51->TypeName).ComparisonIndex.Value;
                uVar10 = *(undefined8 *)&(pFVar51->TypeName).Number;
                pFVar11 = (pFVar51->ObjectProxies).AllocatorInstance.Data;
                iVar34 = (pFVar51->ObjectProxies).ArrayNum;
                iVar52 = (pFVar51->ObjectProxies).ArrayMax;
                fVar14 = pFVar50->FloatParam;
                bVar40 = pFVar50->BoolParam;
                uVar15 = *(undefined3 *)&pFVar50->field_0xd;
                pFVar51->ParamName = pFVar50->ParamName;
                pFVar51->FloatParam = fVar14;
                pFVar51->BoolParam = bVar40;
                *(undefined3 *)&pFVar51->field_0xd = uVar15;
                iVar41 = pFVar50->_padding_;
                TVar12 = (pFVar50->ObjectParam).field0_0x0;
                pFVar51->IntParam = pFVar50->IntParam;
                pFVar51->_padding_ = iVar41;
                (pFVar51->ObjectParam).field0_0x0 = TVar12;
                iVar41 = (pFVar50->StringParam).Data.ArrayNum;
                iVar44 = (pFVar50->StringParam).Data.ArrayMax;
                (pFVar51->StringParam).Data.AllocatorInstance.Data =
                     (pFVar50->StringParam).Data.AllocatorInstance.Data;
                (pFVar51->StringParam).Data.ArrayNum = iVar41;
                (pFVar51->StringParam).Data.ArrayMax = iVar44;
                iVar41 = (pFVar50->ArrayFloatParam).ArrayNum;
                iVar44 = (pFVar50->ArrayFloatParam).ArrayMax;
                (pFVar51->ArrayFloatParam).AllocatorInstance.Data =
                     (pFVar50->ArrayFloatParam).AllocatorInstance.Data;
                (pFVar51->ArrayFloatParam).ArrayNum = iVar41;
                (pFVar51->ArrayFloatParam).ArrayMax = iVar44;
                iVar41 = (pFVar50->ArrayBoolParam).ArrayNum;
                iVar44 = (pFVar50->ArrayBoolParam).ArrayMax;
                (pFVar51->ArrayBoolParam).AllocatorInstance.Data =
                     (pFVar50->ArrayBoolParam).AllocatorInstance.Data;
                (pFVar51->ArrayBoolParam).ArrayNum = iVar41;
                (pFVar51->ArrayBoolParam).ArrayMax = iVar44;
                iVar41 = (pFVar50->ArrayIntParam).ArrayNum;
                iVar44 = (pFVar50->ArrayIntParam).ArrayMax;
                (pFVar51->ArrayIntParam).AllocatorInstance.Data =
                     (pFVar50->ArrayIntParam).AllocatorInstance.Data;
                (pFVar51->ArrayIntParam).ArrayNum = iVar41;
                (pFVar51->ArrayIntParam).ArrayMax = iVar44;
                iVar41 = (pFVar50->ArrayObjectParam).ArrayNum;
                iVar44 = (pFVar50->ArrayObjectParam).ArrayMax;
                (pFVar51->ArrayObjectParam).AllocatorInstance.Data =
                     (pFVar50->ArrayObjectParam).AllocatorInstance.Data;
                (pFVar51->ArrayObjectParam).ArrayNum = iVar41;
                (pFVar51->ArrayObjectParam).ArrayMax = iVar44;
                iVar41 = (pFVar50->ArrayStringParam).ArrayNum;
                iVar44 = (pFVar50->ArrayStringParam).ArrayMax;
                (pFVar51->ArrayStringParam).AllocatorInstance.Data =
                     (pFVar50->ArrayStringParam).AllocatorInstance.Data;
                (pFVar51->ArrayStringParam).ArrayNum = iVar41;
                (pFVar51->ArrayStringParam).ArrayMax = iVar44;
                uVar16 = pFVar50->field_0x81;
                sVar17 = pFVar50->_padding_;
                FVar18.Value = (pFVar50->TypeName).ComparisonIndex.Value;
                uVar13 = *(undefined8 *)&(pFVar50->TypeName).Number;
                pFVar51->ParamType = pFVar50->ParamType;
                pFVar51->field_0x81 = uVar16;
                pFVar51->_padding_ = sVar17;
                (pFVar51->TypeName).ComparisonIndex = (FNameEntryId)FVar18.Value;
                *(undefined8 *)&(pFVar51->TypeName).Number = uVar13;
                iVar41 = (pFVar50->ObjectProxies).ArrayNum;
                iVar44 = (pFVar50->ObjectProxies).ArrayMax;
                (pFVar51->ObjectProxies).AllocatorInstance.Data =
                     (pFVar50->ObjectProxies).AllocatorInstance.Data;
                (pFVar51->ObjectProxies).ArrayNum = iVar41;
                (pFVar51->ObjectProxies).ArrayMax = iVar44;
                pFVar50->ParamName = FVar2;
                pFVar50->FloatParam = fVar19;
                pFVar50->BoolParam = bVar20;
                *(undefined3 *)&pFVar50->field_0xd = uVar21;
                pFVar50->IntParam = iVar47;
                pFVar50->_padding_ = iVar42;
                (pFVar50->ObjectParam).field0_0x0 = TVar3;
                (pFVar50->StringParam).Data.AllocatorInstance.Data = pFVar4;
                (pFVar50->StringParam).Data.ArrayNum = iVar22;
                (pFVar50->StringParam).Data.ArrayMax = iVar23;
                (pFVar50->ArrayFloatParam).AllocatorInstance.Data = pFVar5;
                (pFVar50->ArrayFloatParam).ArrayNum = iVar24;
                (pFVar50->ArrayFloatParam).ArrayMax = iVar25;
                (pFVar50->ArrayBoolParam).AllocatorInstance.Data = pFVar6;
                (pFVar50->ArrayBoolParam).ArrayNum = iVar26;
                (pFVar50->ArrayBoolParam).ArrayMax = iVar27;
                (pFVar50->ArrayIntParam).AllocatorInstance.Data = pFVar7;
                (pFVar50->ArrayIntParam).ArrayNum = iVar28;
                (pFVar50->ArrayIntParam).ArrayMax = iVar29;
                (pFVar50->ArrayObjectParam).AllocatorInstance.Data = pFVar8;
                (pFVar50->ArrayObjectParam).ArrayNum = iVar30;
                (pFVar50->ArrayObjectParam).ArrayMax = iVar31;
                (pFVar50->ArrayStringParam).AllocatorInstance.Data = pFVar9;
                (pFVar50->ArrayStringParam).ArrayNum = iVar32;
                (pFVar50->ArrayStringParam).ArrayMax = iVar33;
                pFVar50->ParamType = EVar35;
                pFVar50->field_0x81 = uVar36;
                pFVar50->_padding_ = sVar37;
                (pFVar50->TypeName).ComparisonIndex = (FNameEntryId)FVar38.Value;
                *(undefined8 *)&(pFVar50->TypeName).Number = uVar10;
                (pFVar50->ObjectProxies).AllocatorInstance.Data = pFVar11;
                (pFVar50->ObjectProxies).ArrayNum = iVar34;
                (pFVar50->ObjectProxies).ArrayMax = iVar52;
                iVar52 = iVar48;
              } while (iVar48 * 2 + 1 < iVar43);
            }
            iVar43 = iVar43 + -1;
            lVar45 = lVar45 + -1;
            pFVar49 = pFVar49 + -1;
          } while (0 < lVar45);
        }
        return;
      }
      iVar41 = iVar44 + -1;
      iVar43 = iVar48 + -2;
      iVar48 = iVar43;
      iVar44 = iVar41;
    }
    iVar43 = iVar41 * 2;
    iVar47 = iVar43 + 1;
    if (iVar43 + 2 < param_2) {
      lVar45 = (longlong)iVar43;
      iVar42 = param_1[lVar45 + 2].ParamName.ComparisonIndex.Value -
               param_1[lVar45 + 1].ParamName.ComparisonIndex.Value;
      if (iVar42 == 0) {
        iVar42 = param_1[lVar45 + 2].ParamName.Number - param_1[lVar45 + 1].ParamName.Number;
      }
      if (iVar42 < 0) {
        iVar47 = iVar43;
      }
      iVar47 = iVar47 + 1;
    }
    pFVar49 = param_1 + iVar47;
    pFVar50 = param_1 + iVar41;
    iVar43 = (pFVar50->ParamName).ComparisonIndex.Value - (pFVar49->ParamName).ComparisonIndex.Value
    ;
    if (iVar43 == 0) {
      iVar43 = (pFVar50->ParamName).Number - (pFVar49->ParamName).Number;
    }
    if (-1 < iVar43) goto LAB_14452d1ee;
    FVar2 = pFVar50->ParamName;
    fVar19 = pFVar50->FloatParam;
    bVar20 = pFVar50->BoolParam;
    uVar21 = *(undefined3 *)&pFVar50->field_0xd;
    iVar42 = pFVar50->IntParam;
    iVar22 = pFVar50->_padding_;
    TVar3 = (pFVar50->ObjectParam).field0_0x0;
    pFVar4 = (pFVar50->StringParam).Data.AllocatorInstance.Data;
    iVar23 = (pFVar50->StringParam).Data.ArrayNum;
    iVar24 = (pFVar50->StringParam).Data.ArrayMax;
    pFVar5 = (pFVar50->ArrayFloatParam).AllocatorInstance.Data;
    iVar25 = (pFVar50->ArrayFloatParam).ArrayNum;
    iVar26 = (pFVar50->ArrayFloatParam).ArrayMax;
    pFVar6 = (pFVar50->ArrayBoolParam).AllocatorInstance.Data;
    iVar27 = (pFVar50->ArrayBoolParam).ArrayNum;
    iVar28 = (pFVar50->ArrayBoolParam).ArrayMax;
    pFVar7 = (pFVar50->ArrayIntParam).AllocatorInstance.Data;
    iVar29 = (pFVar50->ArrayIntParam).ArrayNum;
    iVar30 = (pFVar50->ArrayIntParam).ArrayMax;
    pFVar8 = (pFVar50->ArrayObjectParam).AllocatorInstance.Data;
    iVar31 = (pFVar50->ArrayObjectParam).ArrayNum;
    iVar32 = (pFVar50->ArrayObjectParam).ArrayMax;
    pFVar9 = (pFVar50->ArrayStringParam).AllocatorInstance.Data;
    iVar33 = (pFVar50->ArrayStringParam).ArrayNum;
    iVar34 = (pFVar50->ArrayStringParam).ArrayMax;
    EVar35 = pFVar50->ParamType;
    uVar36 = pFVar50->field_0x81;
    sVar37 = pFVar50->_padding_;
    FVar38.Value = (pFVar50->TypeName).ComparisonIndex.Value;
    uVar10 = *(undefined8 *)&(pFVar50->TypeName).Number;
    pFVar11 = (pFVar50->ObjectProxies).AllocatorInstance.Data;
    iVar52 = (pFVar50->ObjectProxies).ArrayNum;
    iVar39 = (pFVar50->ObjectProxies).ArrayMax;
    fVar14 = pFVar49->FloatParam;
    bVar40 = pFVar49->BoolParam;
    uVar15 = *(undefined3 *)&pFVar49->field_0xd;
    pFVar50->ParamName = pFVar49->ParamName;
    pFVar50->FloatParam = fVar14;
    pFVar50->BoolParam = bVar40;
    *(undefined3 *)&pFVar50->field_0xd = uVar15;
    iVar43 = pFVar49->_padding_;
    TVar12 = (pFVar49->ObjectParam).field0_0x0;
    pFVar50->IntParam = pFVar49->IntParam;
    pFVar50->_padding_ = iVar43;
    (pFVar50->ObjectParam).field0_0x0 = TVar12;
    iVar43 = (pFVar49->StringParam).Data.ArrayNum;
    iVar41 = (pFVar49->StringParam).Data.ArrayMax;
    (pFVar50->StringParam).Data.AllocatorInstance.Data =
         (pFVar49->StringParam).Data.AllocatorInstance.Data;
    (pFVar50->StringParam).Data.ArrayNum = iVar43;
    (pFVar50->StringParam).Data.ArrayMax = iVar41;
    iVar43 = (pFVar49->ArrayFloatParam).ArrayNum;
    iVar41 = (pFVar49->ArrayFloatParam).ArrayMax;
    (pFVar50->ArrayFloatParam).AllocatorInstance.Data =
         (pFVar49->ArrayFloatParam).AllocatorInstance.Data;
    (pFVar50->ArrayFloatParam).ArrayNum = iVar43;
    (pFVar50->ArrayFloatParam).ArrayMax = iVar41;
    iVar43 = (pFVar49->ArrayBoolParam).ArrayNum;
    iVar41 = (pFVar49->ArrayBoolParam).ArrayMax;
    (pFVar50->ArrayBoolParam).AllocatorInstance.Data =
         (pFVar49->ArrayBoolParam).AllocatorInstance.Data;
    (pFVar50->ArrayBoolParam).ArrayNum = iVar43;
    (pFVar50->ArrayBoolParam).ArrayMax = iVar41;
    iVar43 = (pFVar49->ArrayIntParam).ArrayNum;
    iVar41 = (pFVar49->ArrayIntParam).ArrayMax;
    (pFVar50->ArrayIntParam).AllocatorInstance.Data =
         (pFVar49->ArrayIntParam).AllocatorInstance.Data;
    (pFVar50->ArrayIntParam).ArrayNum = iVar43;
    (pFVar50->ArrayIntParam).ArrayMax = iVar41;
    iVar43 = (pFVar49->ArrayObjectParam).ArrayNum;
    iVar41 = (pFVar49->ArrayObjectParam).ArrayMax;
    (pFVar50->ArrayObjectParam).AllocatorInstance.Data =
         (pFVar49->ArrayObjectParam).AllocatorInstance.Data;
    (pFVar50->ArrayObjectParam).ArrayNum = iVar43;
    (pFVar50->ArrayObjectParam).ArrayMax = iVar41;
    iVar43 = (pFVar49->ArrayStringParam).ArrayNum;
    iVar41 = (pFVar49->ArrayStringParam).ArrayMax;
    (pFVar50->ArrayStringParam).AllocatorInstance.Data =
         (pFVar49->ArrayStringParam).AllocatorInstance.Data;
    (pFVar50->ArrayStringParam).ArrayNum = iVar43;
    (pFVar50->ArrayStringParam).ArrayMax = iVar41;
    uVar16 = pFVar49->field_0x81;
    sVar17 = pFVar49->_padding_;
    FVar18.Value = (pFVar49->TypeName).ComparisonIndex.Value;
    uVar13 = *(undefined8 *)&(pFVar49->TypeName).Number;
    pFVar50->ParamType = pFVar49->ParamType;
    pFVar50->field_0x81 = uVar16;
    pFVar50->_padding_ = sVar17;
    (pFVar50->TypeName).ComparisonIndex = (FNameEntryId)FVar18.Value;
    *(undefined8 *)&(pFVar50->TypeName).Number = uVar13;
    iVar43 = (pFVar49->ObjectProxies).ArrayNum;
    iVar41 = (pFVar49->ObjectProxies).ArrayMax;
    (pFVar50->ObjectProxies).AllocatorInstance.Data =
         (pFVar49->ObjectProxies).AllocatorInstance.Data;
    (pFVar50->ObjectProxies).ArrayNum = iVar43;
    (pFVar50->ObjectProxies).ArrayMax = iVar41;
    pFVar49->ParamName = FVar2;
    pFVar49->FloatParam = fVar19;
    pFVar49->BoolParam = bVar20;
    *(undefined3 *)&pFVar49->field_0xd = uVar21;
    pFVar49->IntParam = iVar42;
    pFVar49->_padding_ = iVar22;
    (pFVar49->ObjectParam).field0_0x0 = TVar3;
    (pFVar49->StringParam).Data.AllocatorInstance.Data = pFVar4;
    (pFVar49->StringParam).Data.ArrayNum = iVar23;
    (pFVar49->StringParam).Data.ArrayMax = iVar24;
    (pFVar49->ArrayFloatParam).AllocatorInstance.Data = pFVar5;
    (pFVar49->ArrayFloatParam).ArrayNum = iVar25;
    (pFVar49->ArrayFloatParam).ArrayMax = iVar26;
    (pFVar49->ArrayBoolParam).AllocatorInstance.Data = pFVar6;
    (pFVar49->ArrayBoolParam).ArrayNum = iVar27;
    (pFVar49->ArrayBoolParam).ArrayMax = iVar28;
    (pFVar49->ArrayIntParam).AllocatorInstance.Data = pFVar7;
    (pFVar49->ArrayIntParam).ArrayNum = iVar29;
    (pFVar49->ArrayIntParam).ArrayMax = iVar30;
    (pFVar49->ArrayObjectParam).AllocatorInstance.Data = pFVar8;
    (pFVar49->ArrayObjectParam).ArrayNum = iVar31;
    (pFVar49->ArrayObjectParam).ArrayMax = iVar32;
    (pFVar49->ArrayStringParam).AllocatorInstance.Data = pFVar9;
    (pFVar49->ArrayStringParam).ArrayNum = iVar33;
    (pFVar49->ArrayStringParam).ArrayMax = iVar34;
    iVar43 = iVar47 * 2 + 1;
    pFVar49->ParamType = EVar35;
    pFVar49->field_0x81 = uVar36;
    pFVar49->_padding_ = sVar37;
    (pFVar49->TypeName).ComparisonIndex = (FNameEntryId)FVar38.Value;
    *(undefined8 *)&(pFVar49->TypeName).Number = uVar10;
    (pFVar49->ObjectProxies).AllocatorInstance.Data = pFVar11;
    (pFVar49->ObjectProxies).ArrayNum = iVar52;
    (pFVar49->ObjectProxies).ArrayMax = iVar39;
    iVar41 = iVar47;
  } while( true );
}

// InternalConstructor<UAudioEndpointSettingsBase> @ 14452d560

void __cdecl InternalConstructor<UAudioEndpointSettingsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAudioEndpointSettingsBase__6B_;
  }
  return;
}

// InternalConstructor<UAudioParameterControllerInterface> @ 14452d590

void __cdecl InternalConstructor<UAudioParameterControllerInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAudioParameterControllerInterface__6B_;
  }
  return;
}

// InternalConstructor<UAudioPropertiesSheetAssetBase> @ 14452d5c0

void __cdecl InternalConstructor<UAudioPropertiesSheetAssetBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAudioPropertiesSheetAssetBase__6B_;
  }
  return;
}

// InternalConstructor<UAudioPropertiesSheetAssetUserInterface> @ 14452d5f0

void __cdecl
InternalConstructor<UAudioPropertiesSheetAssetUserInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAudioPropertiesSheetAssetUserInterface__6B_;
  }
  return;
}

// InternalConstructor<UDummyEndpointSettings> @ 14452d620

void __cdecl InternalConstructor<UDummyEndpointSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDummyEndpointSettings__6B_;
  }
  return;
}

// InternalConstructor<UOcclusionPluginSourceSettingsBase> @ 14452d650

void __cdecl InternalConstructor<UOcclusionPluginSourceSettingsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOcclusionPluginSourceSettingsBase__6B_;
  }
  return;
}

// InternalConstructor<UReverbPluginSourceSettingsBase> @ 14452d680

void __cdecl InternalConstructor<UReverbPluginSourceSettingsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UReverbPluginSourceSettingsBase__6B_;
  }
  return;
}

// InternalConstructor<USoundModulatorBase> @ 14452d6b0

void __cdecl InternalConstructor<USoundModulatorBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &USoundModulatorBase::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &USoundModulatorBase::_vftable__for__IAudioProxyDataFactory__;
  }
  return;
}

// InternalConstructor<USoundfieldEffectBase> @ 14452d6f0

void __cdecl InternalConstructor<USoundfieldEffectBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundfieldEffectBase__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<USoundfieldEffectSettingsBase> @ 14452d730

void __cdecl InternalConstructor<USoundfieldEffectSettingsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundfieldEffectSettingsBase__6B_;
  }
  return;
}

// InternalConstructor<USoundfieldEncodingSettingsBase> @ 14452d760

void __cdecl InternalConstructor<USoundfieldEncodingSettingsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundfieldEncodingSettingsBase__6B_;
  }
  return;
}

// InternalConstructor<USoundfieldEndpointSettingsBase> @ 14452d790

void __cdecl InternalConstructor<USoundfieldEndpointSettingsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USoundfieldEndpointSettingsBase__6B_;
  }
  return;
}

// InternalConstructor<USourceDataOverridePluginSourceSettingsBase> @ 14452d7c0

void __cdecl
InternalConstructor<USourceDataOverridePluginSourceSettingsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USourceDataOverridePluginSourceSettingsBase__6B_;
  }
  return;
}

// InternalConstructor<USpatializationPluginSourceSettingsBase> @ 14452d7f0

void __cdecl
InternalConstructor<USpatializationPluginSourceSettingsBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USpatializationPluginSourceSettingsBase__6B_;
  }
  return;
}

// InternalConstructor<UWaveformTransformationBase> @ 14452d820

void __cdecl InternalConstructor<UWaveformTransformationBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWaveformTransformationBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UWaveformTransformationChain> @ 14452d870

void __cdecl InternalConstructor<UWaveformTransformationChain>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWaveformTransformationChain__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioEndpointSettingsBase> @ 14452d8b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioEndpointSettingsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioEndpointSettingsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioEndpointSettingsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioParameterControllerInterface> @ 14452d960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioParameterControllerInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioParameterControllerInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioParameterControllerInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetBase> @ 14452da10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioPropertiesSheetAssetBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioPropertiesSheetAssetBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetUserInterface> @ 14452dac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetUserInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioPropertiesSheetAssetUserInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioPropertiesSheetAssetUserInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDummyEndpointSettings> @ 14452db70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDummyEndpointSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDummyEndpointSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDummyEndpointSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOcclusionPluginSourceSettingsBase> @ 14452dc20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOcclusionPluginSourceSettingsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOcclusionPluginSourceSettingsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOcclusionPluginSourceSettingsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UReverbPluginSourceSettingsBase> @ 14452dcd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UReverbPluginSourceSettingsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReverbPluginSourceSettingsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UReverbPluginSourceSettingsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundModulatorBase> @ 14452dd80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundModulatorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundModulatorBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &USoundModulatorBase::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &USoundModulatorBase::_vftable__for__IAudioProxyDataFactory__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundfieldEffectBase> @ 14452de40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundfieldEffectBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundfieldEffectBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundfieldEffectBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundfieldEffectSettingsBase> @ 14452def0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USoundfieldEffectSettingsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundfieldEffectSettingsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundfieldEffectSettingsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundfieldEncodingSettingsBase> @ 14452dfa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USoundfieldEncodingSettingsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundfieldEncodingSettingsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundfieldEncodingSettingsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundfieldEndpointSettingsBase> @ 14452e050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USoundfieldEndpointSettingsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundfieldEndpointSettingsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USoundfieldEndpointSettingsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USourceDataOverridePluginSourceSettingsBase> @ 14452e100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USourceDataOverridePluginSourceSettingsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USourceDataOverridePluginSourceSettingsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USourceDataOverridePluginSourceSettingsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USpatializationPluginSourceSettingsBase> @ 14452e1b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USpatializationPluginSourceSettingsBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USpatializationPluginSourceSettingsBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USpatializationPluginSourceSettingsBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWaveformTransformationBase> @ 14452e260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWaveformTransformationBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWaveformTransformationBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWaveformTransformationBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWaveformTransformationChain> @ 14452e320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWaveformTransformationChain>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWaveformTransformationChain::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWaveformTransformationChain__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FAudioParameter,int,FIdentityFunctor,TDereferenceWrapper<FAudioParameter,`FAudioParameter::Merge'::__l2::<lambda_1>_>_> @ 14452e3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAudioParameter,int,FIdentityFunctor,TDereferenceWrapper<FAudioParameter,_FAudioParameter::Merge_::__l2::<lambda_1>_>_>
          (FAudioParameter *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAudioParameter,_public:_static_void___cdecl_FAudioParameter::Merge(TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&&,TArray<FAudioParameter,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  FAudioParameter *pFVar1;
  FName FVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  TObjectPtr<UObject>_u_0 TVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined3 uVar15;
  int iVar16;
  undefined1 uVar17;
  short sVar18;
  FNameEntryId FVar19;
  float fVar20;
  bool bVar21;
  undefined3 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  EAudioParameterType EVar37;
  undefined1 uVar38;
  short sVar39;
  FNameEntryId FVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  FAudioParameter *pFVar44;
  FAudioParameter *pFVar45;
  FAudioParameter *pFVar46;
  FAudioParameter *pFVar47;
  FAudioParameter *pFVar48;
  FAudioParameter *pFVar49;
  FAudioParameter **ppFVar50;
  float fVar51;
  undefined1 auStack_418 [48];
  FAudioParameter *local_3e8;
  FName local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  TObjectPtr<UObject>_u_0 TStack_3c8;
  FScriptContainerElement *local_3c0;
  undefined8 uStack_3b8;
  FScriptContainerElement *local_3b0;
  undefined8 uStack_3a8;
  FScriptContainerElement *local_3a0;
  undefined8 uStack_398;
  FScriptContainerElement *local_390;
  undefined8 uStack_388;
  FScriptContainerElement *local_380;
  undefined8 uStack_378;
  FScriptContainerElement *local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  FScriptContainerElement *local_350;
  undefined8 uStack_348;
  FAudioParameter *local_338;
  FAudioParameter *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_418;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar51 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar51;
    memset(local_320,0,0x2e8);
    ppFVar50 = &local_338;
    do {
      pFVar44 = ppFVar50[1];
      pFVar49 = *ppFVar50;
      pFVar1 = ppFVar50[2];
      local_3e8._0_4_ = (int)pFVar1;
      iVar43 = (int)(((longlong)pFVar44 - (longlong)pFVar49) / 0xa0) + 1;
      pFVar48 = pFVar49;
      if ((int)local_3e8 != 0) {
LAB_14452e4d0:
        if (8 < iVar43) {
          pFVar46 = pFVar44 + 1;
          pFVar49 = pFVar48 + iVar43 / 2;
          FVar2 = pFVar49->ParamName;
          fVar20 = pFVar49->FloatParam;
          bVar21 = pFVar49->BoolParam;
          uVar22 = *(undefined3 *)&pFVar49->field_0xd;
          iVar23 = pFVar49->IntParam;
          iVar24 = pFVar49->_padding_;
          TVar3 = (pFVar49->ObjectParam).field0_0x0;
          pFVar4 = (pFVar49->StringParam).Data.AllocatorInstance.Data;
          iVar25 = (pFVar49->StringParam).Data.ArrayNum;
          iVar26 = (pFVar49->StringParam).Data.ArrayMax;
          pFVar5 = (pFVar49->ArrayFloatParam).AllocatorInstance.Data;
          iVar27 = (pFVar49->ArrayFloatParam).ArrayNum;
          iVar28 = (pFVar49->ArrayFloatParam).ArrayMax;
          pFVar6 = (pFVar49->ArrayBoolParam).AllocatorInstance.Data;
          iVar29 = (pFVar49->ArrayBoolParam).ArrayNum;
          iVar30 = (pFVar49->ArrayBoolParam).ArrayMax;
          pFVar7 = (pFVar49->ArrayIntParam).AllocatorInstance.Data;
          iVar31 = (pFVar49->ArrayIntParam).ArrayNum;
          iVar32 = (pFVar49->ArrayIntParam).ArrayMax;
          pFVar8 = (pFVar49->ArrayObjectParam).AllocatorInstance.Data;
          iVar33 = (pFVar49->ArrayObjectParam).ArrayNum;
          iVar34 = (pFVar49->ArrayObjectParam).ArrayMax;
          pFVar9 = (pFVar49->ArrayStringParam).AllocatorInstance.Data;
          iVar35 = (pFVar49->ArrayStringParam).ArrayNum;
          iVar36 = (pFVar49->ArrayStringParam).ArrayMax;
          EVar37 = pFVar49->ParamType;
          uVar38 = pFVar49->field_0x81;
          sVar39 = pFVar49->_padding_;
          FVar40.Value = (pFVar49->TypeName).ComparisonIndex.Value;
          uVar10 = *(undefined8 *)&(pFVar49->TypeName).Number;
          pFVar11 = (pFVar49->ObjectProxies).AllocatorInstance.Data;
          iVar41 = (pFVar49->ObjectProxies).ArrayNum;
          iVar42 = (pFVar49->ObjectProxies).ArrayMax;
          fVar51 = pFVar48->FloatParam;
          bVar14 = pFVar48->BoolParam;
          uVar15 = *(undefined3 *)&pFVar48->field_0xd;
          pFVar49->ParamName = pFVar48->ParamName;
          pFVar49->FloatParam = fVar51;
          pFVar49->BoolParam = bVar14;
          *(undefined3 *)&pFVar49->field_0xd = uVar15;
          iVar43 = pFVar48->_padding_;
          TVar12 = (pFVar48->ObjectParam).field0_0x0;
          pFVar49->IntParam = pFVar48->IntParam;
          pFVar49->_padding_ = iVar43;
          (pFVar49->ObjectParam).field0_0x0 = TVar12;
          iVar43 = (pFVar48->StringParam).Data.ArrayNum;
          iVar16 = (pFVar48->StringParam).Data.ArrayMax;
          (pFVar49->StringParam).Data.AllocatorInstance.Data =
               (pFVar48->StringParam).Data.AllocatorInstance.Data;
          (pFVar49->StringParam).Data.ArrayNum = iVar43;
          (pFVar49->StringParam).Data.ArrayMax = iVar16;
          iVar43 = (pFVar48->ArrayFloatParam).ArrayNum;
          iVar16 = (pFVar48->ArrayFloatParam).ArrayMax;
          (pFVar49->ArrayFloatParam).AllocatorInstance.Data =
               (pFVar48->ArrayFloatParam).AllocatorInstance.Data;
          (pFVar49->ArrayFloatParam).ArrayNum = iVar43;
          (pFVar49->ArrayFloatParam).ArrayMax = iVar16;
          iVar43 = (pFVar48->ArrayBoolParam).ArrayNum;
          iVar16 = (pFVar48->ArrayBoolParam).ArrayMax;
          (pFVar49->ArrayBoolParam).AllocatorInstance.Data =
               (pFVar48->ArrayBoolParam).AllocatorInstance.Data;
          (pFVar49->ArrayBoolParam).ArrayNum = iVar43;
          (pFVar49->ArrayBoolParam).ArrayMax = iVar16;
          iVar43 = (pFVar48->ArrayIntParam).ArrayNum;
          iVar16 = (pFVar48->ArrayIntParam).ArrayMax;
          (pFVar49->ArrayIntParam).AllocatorInstance.Data =
               (pFVar48->ArrayIntParam).AllocatorInstance.Data;
          (pFVar49->ArrayIntParam).ArrayNum = iVar43;
          (pFVar49->ArrayIntParam).ArrayMax = iVar16;
          iVar43 = (pFVar48->ArrayObjectParam).ArrayNum;
          iVar16 = (pFVar48->ArrayObjectParam).ArrayMax;
          (pFVar49->ArrayObjectParam).AllocatorInstance.Data =
               (pFVar48->ArrayObjectParam).AllocatorInstance.Data;
          (pFVar49->ArrayObjectParam).ArrayNum = iVar43;
          (pFVar49->ArrayObjectParam).ArrayMax = iVar16;
          iVar43 = (pFVar48->ArrayStringParam).ArrayNum;
          iVar16 = (pFVar48->ArrayStringParam).ArrayMax;
          (pFVar49->ArrayStringParam).AllocatorInstance.Data =
               (pFVar48->ArrayStringParam).AllocatorInstance.Data;
          (pFVar49->ArrayStringParam).ArrayNum = iVar43;
          (pFVar49->ArrayStringParam).ArrayMax = iVar16;
          uVar17 = pFVar48->field_0x81;
          sVar18 = pFVar48->_padding_;
          FVar19.Value = (pFVar48->TypeName).ComparisonIndex.Value;
          uVar13 = *(undefined8 *)&(pFVar48->TypeName).Number;
          pFVar49->ParamType = pFVar48->ParamType;
          pFVar49->field_0x81 = uVar17;
          pFVar49->_padding_ = sVar18;
          (pFVar49->TypeName).ComparisonIndex = (FNameEntryId)FVar19.Value;
          *(undefined8 *)&(pFVar49->TypeName).Number = uVar13;
          iVar43 = (pFVar48->ObjectProxies).ArrayNum;
          iVar16 = (pFVar48->ObjectProxies).ArrayMax;
          (pFVar49->ObjectProxies).AllocatorInstance.Data =
               (pFVar48->ObjectProxies).AllocatorInstance.Data;
          (pFVar49->ObjectProxies).ArrayNum = iVar43;
          (pFVar49->ObjectProxies).ArrayMax = iVar16;
          pFVar48->ParamName = FVar2;
          pFVar48->FloatParam = fVar20;
          pFVar48->BoolParam = bVar21;
          *(undefined3 *)&pFVar48->field_0xd = uVar22;
          pFVar48->IntParam = iVar23;
          pFVar48->_padding_ = iVar24;
          (pFVar48->ObjectParam).field0_0x0 = TVar3;
          (pFVar48->StringParam).Data.AllocatorInstance.Data = pFVar4;
          (pFVar48->StringParam).Data.ArrayNum = iVar25;
          (pFVar48->StringParam).Data.ArrayMax = iVar26;
          (pFVar48->ArrayFloatParam).AllocatorInstance.Data = pFVar5;
          (pFVar48->ArrayFloatParam).ArrayNum = iVar27;
          (pFVar48->ArrayFloatParam).ArrayMax = iVar28;
          (pFVar48->ArrayBoolParam).AllocatorInstance.Data = pFVar6;
          (pFVar48->ArrayBoolParam).ArrayNum = iVar29;
          (pFVar48->ArrayBoolParam).ArrayMax = iVar30;
          (pFVar48->ArrayIntParam).AllocatorInstance.Data = pFVar7;
          (pFVar48->ArrayIntParam).ArrayNum = iVar31;
          (pFVar48->ArrayIntParam).ArrayMax = iVar32;
          (pFVar48->ArrayObjectParam).AllocatorInstance.Data = pFVar8;
          (pFVar48->ArrayObjectParam).ArrayNum = iVar33;
          (pFVar48->ArrayObjectParam).ArrayMax = iVar34;
          (pFVar48->ArrayStringParam).AllocatorInstance.Data = pFVar9;
          (pFVar48->ArrayStringParam).ArrayNum = iVar35;
          (pFVar48->ArrayStringParam).ArrayMax = iVar36;
          pFVar48->ParamType = EVar37;
          pFVar48->field_0x81 = uVar38;
          pFVar48->_padding_ = sVar39;
          (pFVar48->TypeName).ComparisonIndex = (FNameEntryId)FVar40.Value;
          *(undefined8 *)&(pFVar48->TypeName).Number = uVar10;
          (pFVar48->ObjectProxies).AllocatorInstance.Data = pFVar11;
          (pFVar48->ObjectProxies).ArrayNum = iVar41;
          (pFVar48->ObjectProxies).ArrayMax = iVar42;
          pFVar49 = pFVar48;
LAB_14452e624:
          pFVar45 = pFVar49;
          pFVar49 = pFVar45 + 1;
          if (pFVar49 <= pFVar44) goto code_r0x00014452e630;
          goto LAB_14452e650;
        }
        for (; pFVar1 = pFVar48, pFVar49 = pFVar48, pFVar48 < pFVar44; pFVar44 = pFVar44 + -1) {
          while (pFVar46 = pFVar49 + 1, pFVar46 <= pFVar44) {
            iVar43 = (pFVar1->ParamName).ComparisonIndex.Value -
                     (pFVar46->ParamName).ComparisonIndex.Value;
            if (iVar43 == 0) {
              iVar43 = (pFVar1->ParamName).Number - pFVar49[1].ParamName.Number;
            }
            pFVar49 = pFVar46;
            if (iVar43 < 0) {
              pFVar1 = pFVar46;
            }
          }
          local_3e0 = pFVar1->ParamName;
          uStack_3d8._0_4_ = pFVar1->FloatParam;
          uStack_3d8._4_1_ = pFVar1->BoolParam;
          uStack_3d8._5_3_ = *(undefined3 *)&pFVar1->field_0xd;
          local_3d0._0_4_ = pFVar1->IntParam;
          local_3d0._4_4_ = pFVar1->_padding_;
          TStack_3c8 = (pFVar1->ObjectParam).field0_0x0;
          local_3c0 = (pFVar1->StringParam).Data.AllocatorInstance.Data;
          uStack_3b8._0_4_ = (pFVar1->StringParam).Data.ArrayNum;
          uStack_3b8._4_4_ = (pFVar1->StringParam).Data.ArrayMax;
          local_3b0 = (pFVar1->ArrayFloatParam).AllocatorInstance.Data;
          uStack_3a8._0_4_ = (pFVar1->ArrayFloatParam).ArrayNum;
          uStack_3a8._4_4_ = (pFVar1->ArrayFloatParam).ArrayMax;
          local_3a0 = (pFVar1->ArrayBoolParam).AllocatorInstance.Data;
          uStack_398._0_4_ = (pFVar1->ArrayBoolParam).ArrayNum;
          uStack_398._4_4_ = (pFVar1->ArrayBoolParam).ArrayMax;
          local_390 = (pFVar1->ArrayIntParam).AllocatorInstance.Data;
          uStack_388._0_4_ = (pFVar1->ArrayIntParam).ArrayNum;
          uStack_388._4_4_ = (pFVar1->ArrayIntParam).ArrayMax;
          local_380 = (pFVar1->ArrayObjectParam).AllocatorInstance.Data;
          uStack_378._0_4_ = (pFVar1->ArrayObjectParam).ArrayNum;
          uStack_378._4_4_ = (pFVar1->ArrayObjectParam).ArrayMax;
          local_370 = (pFVar1->ArrayStringParam).AllocatorInstance.Data;
          uStack_368._0_4_ = (pFVar1->ArrayStringParam).ArrayNum;
          uStack_368._4_4_ = (pFVar1->ArrayStringParam).ArrayMax;
          local_360._0_1_ = pFVar1->ParamType;
          local_360._1_1_ = pFVar1->field_0x81;
          local_360._2_2_ = pFVar1->_padding_;
          local_360._4_4_ = (pFVar1->TypeName).ComparisonIndex;
          uStack_358 = *(undefined8 *)&(pFVar1->TypeName).Number;
          local_350 = (pFVar1->ObjectProxies).AllocatorInstance.Data;
          uStack_348._0_4_ = (pFVar1->ObjectProxies).ArrayNum;
          uStack_348._4_4_ = (pFVar1->ObjectProxies).ArrayMax;
          fVar51 = pFVar44->FloatParam;
          bVar14 = pFVar44->BoolParam;
          uVar15 = *(undefined3 *)&pFVar44->field_0xd;
          pFVar1->ParamName = pFVar44->ParamName;
          pFVar1->FloatParam = fVar51;
          pFVar1->BoolParam = bVar14;
          *(undefined3 *)&pFVar1->field_0xd = uVar15;
          iVar43 = pFVar44->_padding_;
          TVar3 = (pFVar44->ObjectParam).field0_0x0;
          pFVar1->IntParam = pFVar44->IntParam;
          pFVar1->_padding_ = iVar43;
          (pFVar1->ObjectParam).field0_0x0 = TVar3;
          iVar43 = (pFVar44->StringParam).Data.ArrayNum;
          iVar16 = (pFVar44->StringParam).Data.ArrayMax;
          (pFVar1->StringParam).Data.AllocatorInstance.Data =
               (pFVar44->StringParam).Data.AllocatorInstance.Data;
          (pFVar1->StringParam).Data.ArrayNum = iVar43;
          (pFVar1->StringParam).Data.ArrayMax = iVar16;
          iVar43 = (pFVar44->ArrayFloatParam).ArrayNum;
          iVar16 = (pFVar44->ArrayFloatParam).ArrayMax;
          (pFVar1->ArrayFloatParam).AllocatorInstance.Data =
               (pFVar44->ArrayFloatParam).AllocatorInstance.Data;
          (pFVar1->ArrayFloatParam).ArrayNum = iVar43;
          (pFVar1->ArrayFloatParam).ArrayMax = iVar16;
          iVar43 = (pFVar44->ArrayBoolParam).ArrayNum;
          iVar16 = (pFVar44->ArrayBoolParam).ArrayMax;
          (pFVar1->ArrayBoolParam).AllocatorInstance.Data =
               (pFVar44->ArrayBoolParam).AllocatorInstance.Data;
          (pFVar1->ArrayBoolParam).ArrayNum = iVar43;
          (pFVar1->ArrayBoolParam).ArrayMax = iVar16;
          iVar43 = (pFVar44->ArrayIntParam).ArrayNum;
          iVar16 = (pFVar44->ArrayIntParam).ArrayMax;
          (pFVar1->ArrayIntParam).AllocatorInstance.Data =
               (pFVar44->ArrayIntParam).AllocatorInstance.Data;
          (pFVar1->ArrayIntParam).ArrayNum = iVar43;
          (pFVar1->ArrayIntParam).ArrayMax = iVar16;
          iVar43 = (pFVar44->ArrayObjectParam).ArrayNum;
          iVar16 = (pFVar44->ArrayObjectParam).ArrayMax;
          (pFVar1->ArrayObjectParam).AllocatorInstance.Data =
               (pFVar44->ArrayObjectParam).AllocatorInstance.Data;
          (pFVar1->ArrayObjectParam).ArrayNum = iVar43;
          (pFVar1->ArrayObjectParam).ArrayMax = iVar16;
          iVar43 = (pFVar44->ArrayStringParam).ArrayNum;
          iVar16 = (pFVar44->ArrayStringParam).ArrayMax;
          (pFVar1->ArrayStringParam).AllocatorInstance.Data =
               (pFVar44->ArrayStringParam).AllocatorInstance.Data;
          (pFVar1->ArrayStringParam).ArrayNum = iVar43;
          (pFVar1->ArrayStringParam).ArrayMax = iVar16;
          uVar17 = pFVar44->field_0x81;
          sVar18 = pFVar44->_padding_;
          FVar19.Value = (pFVar44->TypeName).ComparisonIndex.Value;
          uVar10 = *(undefined8 *)&(pFVar44->TypeName).Number;
          pFVar1->ParamType = pFVar44->ParamType;
          pFVar1->field_0x81 = uVar17;
          pFVar1->_padding_ = sVar18;
          (pFVar1->TypeName).ComparisonIndex = (FNameEntryId)FVar19.Value;
          *(undefined8 *)&(pFVar1->TypeName).Number = uVar10;
          iVar43 = (pFVar44->ObjectProxies).ArrayNum;
          iVar16 = (pFVar44->ObjectProxies).ArrayMax;
          (pFVar1->ObjectProxies).AllocatorInstance.Data =
               (pFVar44->ObjectProxies).AllocatorInstance.Data;
          (pFVar1->ObjectProxies).ArrayNum = iVar43;
          (pFVar1->ObjectProxies).ArrayMax = iVar16;
          pFVar44->ParamName = local_3e0;
          pFVar44->FloatParam = (float)(undefined4)uStack_3d8;
          pFVar44->BoolParam = (bool)uStack_3d8._4_1_;
          *(undefined3 *)&pFVar44->field_0xd = uStack_3d8._5_3_;
          pFVar44->IntParam = (undefined4)local_3d0;
          pFVar44->_padding_ = local_3d0._4_4_;
          (pFVar44->ObjectParam).field0_0x0 = TStack_3c8;
          (pFVar44->StringParam).Data.AllocatorInstance.Data = local_3c0;
          (pFVar44->StringParam).Data.ArrayNum = (undefined4)uStack_3b8;
          (pFVar44->StringParam).Data.ArrayMax = uStack_3b8._4_4_;
          (pFVar44->ArrayFloatParam).AllocatorInstance.Data = local_3b0;
          (pFVar44->ArrayFloatParam).ArrayNum = (undefined4)uStack_3a8;
          (pFVar44->ArrayFloatParam).ArrayMax = uStack_3a8._4_4_;
          (pFVar44->ArrayBoolParam).AllocatorInstance.Data = local_3a0;
          (pFVar44->ArrayBoolParam).ArrayNum = (undefined4)uStack_398;
          (pFVar44->ArrayBoolParam).ArrayMax = uStack_398._4_4_;
          (pFVar44->ArrayIntParam).AllocatorInstance.Data = local_390;
          (pFVar44->ArrayIntParam).ArrayNum = (undefined4)uStack_388;
          (pFVar44->ArrayIntParam).ArrayMax = uStack_388._4_4_;
          (pFVar44->ArrayObjectParam).AllocatorInstance.Data = local_380;
          (pFVar44->ArrayObjectParam).ArrayNum = (undefined4)uStack_378;
          (pFVar44->ArrayObjectParam).ArrayMax = uStack_378._4_4_;
          (pFVar44->ArrayStringParam).AllocatorInstance.Data = local_370;
          (pFVar44->ArrayStringParam).ArrayNum = (undefined4)uStack_368;
          (pFVar44->ArrayStringParam).ArrayMax = uStack_368._4_4_;
          pFVar44->ParamType = (undefined1)local_360;
          pFVar44->field_0x81 = local_360._1_1_;
          pFVar44->_padding_ = local_360._2_2_;
          (pFVar44->TypeName).ComparisonIndex = (FNameEntryId)local_360._4_4_;
          *(undefined8 *)&(pFVar44->TypeName).Number = uStack_358;
          (pFVar44->ObjectProxies).AllocatorInstance.Data = local_350;
          (pFVar44->ObjectProxies).ArrayNum = (undefined4)uStack_348;
          (pFVar44->ObjectProxies).ArrayMax = uStack_348._4_4_;
        }
        goto LAB_14452e9c7;
      }
LAB_14452e9b8:
      local_3e8 = pFVar1;
      HeapSortInternal<FAudioParameter,int,FIdentityFunctor,TDereferenceWrapper<FAudioParameter,_FAudioParameter::Merge_::__l2::<lambda_1>_>_>
                (pFVar49,iVar43,param_3,param_4);
LAB_14452e9c7:
      ppFVar50 = ppFVar50 + -3;
    } while (&local_338 <= ppFVar50);
  }
  return;
code_r0x00014452e630:
  iVar43 = (pFVar48->ParamName).ComparisonIndex.Value - (pFVar49->ParamName).ComparisonIndex.Value;
  if (iVar43 == 0) {
    iVar43 = (pFVar48->ParamName).Number - pFVar45[1].ParamName.Number;
  }
  if (-1 < iVar43) goto LAB_14452e624;
LAB_14452e650:
  do {
    pFVar47 = pFVar46;
    pFVar46 = pFVar47 + -1;
    if (pFVar46 <= pFVar48) break;
    iVar43 = (pFVar46->ParamName).ComparisonIndex.Value - (pFVar48->ParamName).ComparisonIndex.Value
    ;
    if (iVar43 == 0) {
      iVar43 = pFVar47[-1].ParamName.Number - (pFVar48->ParamName).Number;
    }
  } while (-1 < iVar43);
  if (pFVar49 <= pFVar46) {
    FVar2 = pFVar49->ParamName;
    fVar20 = pFVar45[1].FloatParam;
    bVar21 = pFVar45[1].BoolParam;
    uVar22 = *(undefined3 *)&pFVar45[1].field_0xd;
    iVar23 = pFVar45[1].IntParam;
    iVar24 = pFVar45[1]._padding_;
    TVar3 = pFVar45[1].ObjectParam.field0_0x0;
    pFVar4 = pFVar45[1].StringParam.Data.AllocatorInstance.Data;
    iVar25 = pFVar45[1].StringParam.Data.ArrayNum;
    iVar26 = pFVar45[1].StringParam.Data.ArrayMax;
    pFVar5 = pFVar45[1].ArrayFloatParam.AllocatorInstance.Data;
    iVar27 = pFVar45[1].ArrayFloatParam.ArrayNum;
    iVar28 = pFVar45[1].ArrayFloatParam.ArrayMax;
    pFVar6 = pFVar45[1].ArrayBoolParam.AllocatorInstance.Data;
    iVar29 = pFVar45[1].ArrayBoolParam.ArrayNum;
    iVar30 = pFVar45[1].ArrayBoolParam.ArrayMax;
    pFVar7 = pFVar45[1].ArrayIntParam.AllocatorInstance.Data;
    iVar31 = pFVar45[1].ArrayIntParam.ArrayNum;
    iVar32 = pFVar45[1].ArrayIntParam.ArrayMax;
    pFVar8 = pFVar45[1].ArrayObjectParam.AllocatorInstance.Data;
    iVar33 = pFVar45[1].ArrayObjectParam.ArrayNum;
    iVar34 = pFVar45[1].ArrayObjectParam.ArrayMax;
    pFVar9 = pFVar45[1].ArrayStringParam.AllocatorInstance.Data;
    iVar35 = pFVar45[1].ArrayStringParam.ArrayNum;
    iVar36 = pFVar45[1].ArrayStringParam.ArrayMax;
    EVar37 = pFVar45[1].ParamType;
    uVar38 = pFVar45[1].field_0x81;
    sVar39 = pFVar45[1]._padding_;
    FVar40.Value = pFVar45[1].TypeName.ComparisonIndex.Value;
    uVar10 = *(undefined8 *)&pFVar45[1].TypeName.Number;
    pFVar11 = pFVar45[1].ObjectProxies.AllocatorInstance.Data;
    iVar41 = pFVar45[1].ObjectProxies.ArrayNum;
    iVar42 = pFVar45[1].ObjectProxies.ArrayMax;
    fVar51 = pFVar47[-1].FloatParam;
    bVar14 = pFVar47[-1].BoolParam;
    uVar15 = *(undefined3 *)&pFVar47[-1].field_0xd;
    pFVar49->ParamName = pFVar46->ParamName;
    pFVar45[1].FloatParam = fVar51;
    pFVar45[1].BoolParam = bVar14;
    *(undefined3 *)&pFVar45[1].field_0xd = uVar15;
    iVar43 = pFVar47[-1]._padding_;
    TVar12 = pFVar47[-1].ObjectParam.field0_0x0;
    pFVar45[1].IntParam = pFVar47[-1].IntParam;
    pFVar45[1]._padding_ = iVar43;
    pFVar45[1].ObjectParam.field0_0x0 = TVar12;
    iVar43 = pFVar47[-1].StringParam.Data.ArrayNum;
    iVar16 = pFVar47[-1].StringParam.Data.ArrayMax;
    pFVar45[1].StringParam.Data.AllocatorInstance.Data =
         pFVar47[-1].StringParam.Data.AllocatorInstance.Data;
    pFVar45[1].StringParam.Data.ArrayNum = iVar43;
    pFVar45[1].StringParam.Data.ArrayMax = iVar16;
    iVar43 = pFVar47[-1].ArrayFloatParam.ArrayNum;
    iVar16 = pFVar47[-1].ArrayFloatParam.ArrayMax;
    pFVar45[1].ArrayFloatParam.AllocatorInstance.Data =
         pFVar47[-1].ArrayFloatParam.AllocatorInstance.Data;
    pFVar45[1].ArrayFloatParam.ArrayNum = iVar43;
    pFVar45[1].ArrayFloatParam.ArrayMax = iVar16;
    iVar43 = pFVar47[-1].ArrayBoolParam.ArrayNum;
    iVar16 = pFVar47[-1].ArrayBoolParam.ArrayMax;
    pFVar45[1].ArrayBoolParam.AllocatorInstance.Data =
         pFVar47[-1].ArrayBoolParam.AllocatorInstance.Data;
    pFVar45[1].ArrayBoolParam.ArrayNum = iVar43;
    pFVar45[1].ArrayBoolParam.ArrayMax = iVar16;
    iVar43 = pFVar47[-1].ArrayIntParam.ArrayNum;
    iVar16 = pFVar47[-1].ArrayIntParam.ArrayMax;
    pFVar45[1].ArrayIntParam.AllocatorInstance.Data =
         pFVar47[-1].ArrayIntParam.AllocatorInstance.Data;
    pFVar45[1].ArrayIntParam.ArrayNum = iVar43;
    pFVar45[1].ArrayIntParam.ArrayMax = iVar16;
    iVar43 = pFVar47[-1].ArrayObjectParam.ArrayNum;
    iVar16 = pFVar47[-1].ArrayObjectParam.ArrayMax;
    pFVar45[1].ArrayObjectParam.AllocatorInstance.Data =
         pFVar47[-1].ArrayObjectParam.AllocatorInstance.Data;
    pFVar45[1].ArrayObjectParam.ArrayNum = iVar43;
    pFVar45[1].ArrayObjectParam.ArrayMax = iVar16;
    iVar43 = pFVar47[-1].ArrayStringParam.ArrayNum;
    iVar16 = pFVar47[-1].ArrayStringParam.ArrayMax;
    pFVar45[1].ArrayStringParam.AllocatorInstance.Data =
         pFVar47[-1].ArrayStringParam.AllocatorInstance.Data;
    pFVar45[1].ArrayStringParam.ArrayNum = iVar43;
    pFVar45[1].ArrayStringParam.ArrayMax = iVar16;
    uVar17 = pFVar47[-1].field_0x81;
    sVar18 = pFVar47[-1]._padding_;
    FVar19.Value = pFVar47[-1].TypeName.ComparisonIndex.Value;
    uVar13 = *(undefined8 *)&pFVar47[-1].TypeName.Number;
    pFVar45[1].ParamType = pFVar47[-1].ParamType;
    pFVar45[1].field_0x81 = uVar17;
    pFVar45[1]._padding_ = sVar18;
    pFVar45[1].TypeName.ComparisonIndex = (FNameEntryId)FVar19.Value;
    *(undefined8 *)&pFVar45[1].TypeName.Number = uVar13;
    iVar43 = pFVar47[-1].ObjectProxies.ArrayNum;
    iVar16 = pFVar47[-1].ObjectProxies.ArrayMax;
    pFVar45[1].ObjectProxies.AllocatorInstance.Data =
         pFVar47[-1].ObjectProxies.AllocatorInstance.Data;
    pFVar45[1].ObjectProxies.ArrayNum = iVar43;
    pFVar45[1].ObjectProxies.ArrayMax = iVar16;
    pFVar46->ParamName = FVar2;
    pFVar47[-1].FloatParam = fVar20;
    pFVar47[-1].BoolParam = bVar21;
    *(undefined3 *)&pFVar47[-1].field_0xd = uVar22;
    pFVar47[-1].IntParam = iVar23;
    pFVar47[-1]._padding_ = iVar24;
    pFVar47[-1].ObjectParam.field0_0x0 = TVar3;
    pFVar47[-1].StringParam.Data.AllocatorInstance.Data = pFVar4;
    pFVar47[-1].StringParam.Data.ArrayNum = iVar25;
    pFVar47[-1].StringParam.Data.ArrayMax = iVar26;
    pFVar47[-1].ArrayFloatParam.AllocatorInstance.Data = pFVar5;
    pFVar47[-1].ArrayFloatParam.ArrayNum = iVar27;
    pFVar47[-1].ArrayFloatParam.ArrayMax = iVar28;
    pFVar47[-1].ArrayBoolParam.AllocatorInstance.Data = pFVar6;
    pFVar47[-1].ArrayBoolParam.ArrayNum = iVar29;
    pFVar47[-1].ArrayBoolParam.ArrayMax = iVar30;
    pFVar47[-1].ArrayIntParam.AllocatorInstance.Data = pFVar7;
    pFVar47[-1].ArrayIntParam.ArrayNum = iVar31;
    pFVar47[-1].ArrayIntParam.ArrayMax = iVar32;
    pFVar47[-1].ArrayObjectParam.AllocatorInstance.Data = pFVar8;
    pFVar47[-1].ArrayObjectParam.ArrayNum = iVar33;
    pFVar47[-1].ArrayObjectParam.ArrayMax = iVar34;
    pFVar47[-1].ArrayStringParam.AllocatorInstance.Data = pFVar9;
    pFVar47[-1].ArrayStringParam.ArrayNum = iVar35;
    pFVar47[-1].ArrayStringParam.ArrayMax = iVar36;
    pFVar47[-1].ParamType = EVar37;
    pFVar47[-1].field_0x81 = uVar38;
    pFVar47[-1]._padding_ = sVar39;
    pFVar47[-1].TypeName.ComparisonIndex = (FNameEntryId)FVar40.Value;
    *(undefined8 *)&pFVar47[-1].TypeName.Number = uVar10;
    pFVar47[-1].ObjectProxies.AllocatorInstance.Data = pFVar11;
    pFVar47[-1].ObjectProxies.ArrayNum = iVar41;
    pFVar47[-1].ObjectProxies.ArrayMax = iVar42;
    goto LAB_14452e624;
  }
  local_3e0 = pFVar48->ParamName;
  uStack_3d8._0_4_ = pFVar48->FloatParam;
  uStack_3d8._4_1_ = pFVar48->BoolParam;
  uStack_3d8._5_3_ = *(undefined3 *)&pFVar48->field_0xd;
  local_3e8._0_4_ = (int)local_3e8 + -1;
  local_3d0._0_4_ = pFVar48->IntParam;
  local_3d0._4_4_ = pFVar48->_padding_;
  TStack_3c8 = (pFVar48->ObjectParam).field0_0x0;
  local_3c0 = (pFVar48->StringParam).Data.AllocatorInstance.Data;
  uStack_3b8._0_4_ = (pFVar48->StringParam).Data.ArrayNum;
  uStack_3b8._4_4_ = (pFVar48->StringParam).Data.ArrayMax;
  local_3b0 = (pFVar48->ArrayFloatParam).AllocatorInstance.Data;
  uStack_3a8._0_4_ = (pFVar48->ArrayFloatParam).ArrayNum;
  uStack_3a8._4_4_ = (pFVar48->ArrayFloatParam).ArrayMax;
  local_3a0 = (pFVar48->ArrayBoolParam).AllocatorInstance.Data;
  uStack_398._0_4_ = (pFVar48->ArrayBoolParam).ArrayNum;
  uStack_398._4_4_ = (pFVar48->ArrayBoolParam).ArrayMax;
  local_390 = (pFVar48->ArrayIntParam).AllocatorInstance.Data;
  uStack_388._0_4_ = (pFVar48->ArrayIntParam).ArrayNum;
  uStack_388._4_4_ = (pFVar48->ArrayIntParam).ArrayMax;
  local_380 = (pFVar48->ArrayObjectParam).AllocatorInstance.Data;
  uStack_378._0_4_ = (pFVar48->ArrayObjectParam).ArrayNum;
  uStack_378._4_4_ = (pFVar48->ArrayObjectParam).ArrayMax;
  local_370 = (pFVar48->ArrayStringParam).AllocatorInstance.Data;
  uStack_368._0_4_ = (pFVar48->ArrayStringParam).ArrayNum;
  uStack_368._4_4_ = (pFVar48->ArrayStringParam).ArrayMax;
  local_360._0_1_ = pFVar48->ParamType;
  local_360._1_1_ = pFVar48->field_0x81;
  local_360._2_2_ = pFVar48->_padding_;
  local_360._4_4_ = (pFVar48->TypeName).ComparisonIndex;
  uStack_358 = *(undefined8 *)&(pFVar48->TypeName).Number;
  local_350 = (pFVar48->ObjectProxies).AllocatorInstance.Data;
  uStack_348._0_4_ = (pFVar48->ObjectProxies).ArrayNum;
  uStack_348._4_4_ = (pFVar48->ObjectProxies).ArrayMax;
  fVar51 = pFVar47[-1].FloatParam;
  bVar14 = pFVar47[-1].BoolParam;
  uVar15 = *(undefined3 *)&pFVar47[-1].field_0xd;
  pFVar48->ParamName = pFVar46->ParamName;
  pFVar48->FloatParam = fVar51;
  pFVar48->BoolParam = bVar14;
  *(undefined3 *)&pFVar48->field_0xd = uVar15;
  iVar43 = pFVar47[-1]._padding_;
  TVar3 = pFVar47[-1].ObjectParam.field0_0x0;
  pFVar48->IntParam = pFVar47[-1].IntParam;
  pFVar48->_padding_ = iVar43;
  (pFVar48->ObjectParam).field0_0x0 = TVar3;
  iVar43 = pFVar47[-1].StringParam.Data.ArrayNum;
  iVar16 = pFVar47[-1].StringParam.Data.ArrayMax;
  (pFVar48->StringParam).Data.AllocatorInstance.Data =
       pFVar47[-1].StringParam.Data.AllocatorInstance.Data;
  (pFVar48->StringParam).Data.ArrayNum = iVar43;
  (pFVar48->StringParam).Data.ArrayMax = iVar16;
  iVar43 = pFVar47[-1].ArrayFloatParam.ArrayNum;
  iVar16 = pFVar47[-1].ArrayFloatParam.ArrayMax;
  (pFVar48->ArrayFloatParam).AllocatorInstance.Data =
       pFVar47[-1].ArrayFloatParam.AllocatorInstance.Data;
  (pFVar48->ArrayFloatParam).ArrayNum = iVar43;
  (pFVar48->ArrayFloatParam).ArrayMax = iVar16;
  iVar43 = pFVar47[-1].ArrayBoolParam.ArrayNum;
  iVar16 = pFVar47[-1].ArrayBoolParam.ArrayMax;
  (pFVar48->ArrayBoolParam).AllocatorInstance.Data =
       pFVar47[-1].ArrayBoolParam.AllocatorInstance.Data;
  (pFVar48->ArrayBoolParam).ArrayNum = iVar43;
  (pFVar48->ArrayBoolParam).ArrayMax = iVar16;
  iVar43 = pFVar47[-1].ArrayIntParam.ArrayNum;
  iVar16 = pFVar47[-1].ArrayIntParam.ArrayMax;
  (pFVar48->ArrayIntParam).AllocatorInstance.Data = pFVar47[-1].ArrayIntParam.AllocatorInstance.Data
  ;
  (pFVar48->ArrayIntParam).ArrayNum = iVar43;
  (pFVar48->ArrayIntParam).ArrayMax = iVar16;
  iVar43 = pFVar47[-1].ArrayObjectParam.ArrayNum;
  iVar16 = pFVar47[-1].ArrayObjectParam.ArrayMax;
  (pFVar48->ArrayObjectParam).AllocatorInstance.Data =
       pFVar47[-1].ArrayObjectParam.AllocatorInstance.Data;
  (pFVar48->ArrayObjectParam).ArrayNum = iVar43;
  (pFVar48->ArrayObjectParam).ArrayMax = iVar16;
  iVar43 = pFVar47[-1].ArrayStringParam.ArrayNum;
  iVar16 = pFVar47[-1].ArrayStringParam.ArrayMax;
  (pFVar48->ArrayStringParam).AllocatorInstance.Data =
       pFVar47[-1].ArrayStringParam.AllocatorInstance.Data;
  (pFVar48->ArrayStringParam).ArrayNum = iVar43;
  (pFVar48->ArrayStringParam).ArrayMax = iVar16;
  uVar17 = pFVar47[-1].field_0x81;
  sVar18 = pFVar47[-1]._padding_;
  FVar19.Value = pFVar47[-1].TypeName.ComparisonIndex.Value;
  uVar10 = *(undefined8 *)&pFVar47[-1].TypeName.Number;
  pFVar48->ParamType = pFVar47[-1].ParamType;
  pFVar48->field_0x81 = uVar17;
  pFVar48->_padding_ = sVar18;
  (pFVar48->TypeName).ComparisonIndex = (FNameEntryId)FVar19.Value;
  *(undefined8 *)&(pFVar48->TypeName).Number = uVar10;
  iVar43 = pFVar47[-1].ObjectProxies.ArrayNum;
  iVar16 = pFVar47[-1].ObjectProxies.ArrayMax;
  (pFVar48->ObjectProxies).AllocatorInstance.Data = pFVar47[-1].ObjectProxies.AllocatorInstance.Data
  ;
  (pFVar48->ObjectProxies).ArrayNum = iVar43;
  (pFVar48->ObjectProxies).ArrayMax = iVar16;
  pFVar46->ParamName = local_3e0;
  pFVar47[-1].FloatParam = (float)(undefined4)uStack_3d8;
  pFVar47[-1].BoolParam = (bool)uStack_3d8._4_1_;
  *(undefined3 *)&pFVar47[-1].field_0xd = uStack_3d8._5_3_;
  pFVar47[-1].IntParam = (undefined4)local_3d0;
  pFVar47[-1]._padding_ = local_3d0._4_4_;
  pFVar47[-1].ObjectParam.field0_0x0 = TStack_3c8;
  pFVar47[-1].StringParam.Data.AllocatorInstance.Data = local_3c0;
  pFVar47[-1].StringParam.Data.ArrayNum = (undefined4)uStack_3b8;
  pFVar47[-1].StringParam.Data.ArrayMax = uStack_3b8._4_4_;
  pFVar47[-1].ArrayFloatParam.AllocatorInstance.Data = local_3b0;
  pFVar47[-1].ArrayFloatParam.ArrayNum = (undefined4)uStack_3a8;
  pFVar47[-1].ArrayFloatParam.ArrayMax = uStack_3a8._4_4_;
  pFVar47[-1].ArrayBoolParam.AllocatorInstance.Data = local_3a0;
  pFVar47[-1].ArrayBoolParam.ArrayNum = (undefined4)uStack_398;
  pFVar47[-1].ArrayBoolParam.ArrayMax = uStack_398._4_4_;
  pFVar47[-1].ArrayIntParam.AllocatorInstance.Data = local_390;
  pFVar47[-1].ArrayIntParam.ArrayNum = (undefined4)uStack_388;
  pFVar47[-1].ArrayIntParam.ArrayMax = uStack_388._4_4_;
  pFVar47[-1].ArrayObjectParam.AllocatorInstance.Data = local_380;
  pFVar47[-1].ArrayObjectParam.ArrayNum = (undefined4)uStack_378;
  pFVar47[-1].ArrayObjectParam.ArrayMax = uStack_378._4_4_;
  pFVar47[-1].ArrayStringParam.AllocatorInstance.Data = local_370;
  pFVar47[-1].ArrayStringParam.ArrayNum = (undefined4)uStack_368;
  pFVar47[-1].ArrayStringParam.ArrayMax = uStack_368._4_4_;
  pFVar47[-1].ParamType = (undefined1)local_360;
  pFVar47[-1].field_0x81 = local_360._1_1_;
  pFVar47[-1]._padding_ = local_360._2_2_;
  pFVar47[-1].TypeName.ComparisonIndex = (FNameEntryId)local_360._4_4_;
  *(undefined8 *)&pFVar47[-1].TypeName.Number = uStack_358;
  pFVar47[-1].ObjectProxies.AllocatorInstance.Data = local_350;
  pFVar47[-1].ObjectProxies.ArrayNum = (undefined4)uStack_348;
  pFVar47[-1].ObjectProxies.ArrayMax = uStack_348._4_4_;
  if (((longlong)pFVar46 + (-0xa0 - (longlong)pFVar48)) / 0xa0 <
      ((longlong)pFVar44 - (longlong)pFVar49) / 0xa0) {
    if (pFVar49 < pFVar44) {
      *ppFVar50 = pFVar49;
      ppFVar50[1] = pFVar44;
      *(int *)(ppFVar50 + 2) = (int)local_3e8;
      ppFVar50 = ppFVar50 + 3;
    }
    if (pFVar46 <= pFVar48 + 1) goto LAB_14452e9c7;
    pFVar44 = pFVar47 + -2;
    pFVar49 = pFVar48;
  }
  else {
    if (pFVar48 + 1 < pFVar46) {
      *ppFVar50 = pFVar48;
      ppFVar50[1] = pFVar47 + -2;
      *(int *)(ppFVar50 + 2) = (int)local_3e8;
      ppFVar50 = ppFVar50 + 3;
    }
    if (pFVar44 <= pFVar49) goto LAB_14452e9c7;
  }
  iVar43 = (int)(((longlong)pFVar44 - (longlong)pFVar49) / 0xa0) + 1;
  pFVar48 = pFVar49;
  if ((int)local_3e8 == 0) goto LAB_14452e9b8;
  goto LAB_14452e4d0;
}

// SetOrMergeArray<int> @ 14452ed30

void __cdecl
Audio::ParameterPrivate::SetOrMergeArray<int>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (!param_3) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(param_2,param_1);
    return;
  }
  if (param_2 == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4,(param_1->AllocatorInstance).Data
           ,(longlong)iVar1 << 2);
  }
  return;
}

// SetOrMergeArray<float> @ 14452edf0

void __cdecl
Audio::ParameterPrivate::SetOrMergeArray<float>
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (!param_3) {
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(param_2,param_1);
    return;
  }
  if (param_2 == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4,(param_1->AllocatorInstance).Data
           ,(longlong)iVar1 << 2);
  }
  return;
}

// SetOrMergeArray<TObjectPtr<UObject>_> @ 14452eeb0

void __cdecl
Audio::ParameterPrivate::SetOrMergeArray<TObjectPtr<UObject>_>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  if (param_3) {
    if ((param_2 == param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == 0) {
      return;
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar7,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    pFVar6 = (param_1->AllocatorInstance).Data;
    pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 8;
  }
  else {
    if (param_2 == param_1) {
      return;
    }
    iVar7 = param_1->ArrayNum;
    piVar1 = &param_2->ArrayMax;
    pFVar6 = (param_1->AllocatorInstance).Data;
    param_2->ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,*piVar1,&param_2->AllocatorInstance,iVar7,piVar1);
    pFVar5 = (param_2->AllocatorInstance).Data;
  }
  ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
            (pFVar5,(TObjectPtr<UObject> *)pFVar6,iVar7);
  return;
}

// SetOrMergeArray<FString> @ 14452efb0

void __cdecl
Audio::ParameterPrivate::SetOrMergeArray<FString>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  if (param_3) {
    if ((param_2 == param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == 0) {
      return;
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    pFVar6 = (param_1->AllocatorInstance).Data;
    pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  }
  else {
    if (param_2 == param_1) {
      return;
    }
    DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    iVar7 = param_1->ArrayNum;
    piVar1 = &param_2->ArrayMax;
    pFVar6 = (param_1->AllocatorInstance).Data;
    param_2->ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,*piVar1,&param_2->AllocatorInstance,iVar7,piVar1);
    pFVar5 = (param_2->AllocatorInstance).Data;
  }
  ConstructItems<FString,FString,int>(pFVar5,(FString *)pFVar6,iVar7);
  return;
}

// SetOrMergeArray<bool> @ 14452f0c0

void __cdecl
Audio::ParameterPrivate::SetOrMergeArray<bool>
          (TArray<bool,TSizedDefaultAllocator<32>_> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (!param_3) {
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=(param_2,param_1);
    return;
  }
  if (param_2 == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data + iVar4,(param_1->AllocatorInstance).Data,
           (longlong)iVar1);
  }
  return;
}

// StaticEnum<enum_EAudioParameterType> @ 14452f170

UEnum * __cdecl StaticEnum<enum_EAudioParameterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioExtensions();
    Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioExtensions_EAudioParameterType,(UObject *)pUVar1,
                       L"EAudioParameterType");
  }
  return Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton;
}

// StaticEnum<enum_ESoundWaveCloudStreamingPlatformEnableType> @ 14452f1b0

UEnum * __cdecl StaticEnum<enum_ESoundWaveCloudStreamingPlatformEnableType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioExtensions();
    Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType,
                       (UObject *)pUVar1,L"ESoundWaveCloudStreamingPlatformEnableType");
  }
  return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton;
}

// StaticEnum<enum_ESoundWaveCloudStreamingPlatformProjectEnableType> @ 14452f1f0

UEnum * __cdecl StaticEnum<enum_ESoundWaveCloudStreamingPlatformProjectEnableType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioExtensions();
    Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType
                       ,(UObject *)pUVar1,L"ESoundWaveCloudStreamingPlatformProjectEnableType");
  }
  return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton;
}

// ~TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::__l2::<lambda_1>,0,0> @ 144530550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_ISoundfieldEndpoint::StartRunningCallback_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::__l2::<lambda_2>,0,0> @ 144530570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_IAudioEndpoint::StartRunningAsyncCallback_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// `scalar_deleting_destructor' @ 1445316e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXAEAM_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531720

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXAEAMM_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445317a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445317e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::IProxyData,SharedPointerInternals::DefaultDeleter<Audio::IProxyData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::IProxyData,SharedPointerInternals::DefaultDeleter<Audio::IProxyData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531820

void * __thiscall
FDummyEndpointSettingsProxy::_scalar_deleting_destructor_
          (FDummyEndpointSettingsProxy *this,uint param_1)

{
  *this = (FDummyEndpointSettingsProxy)&___7IAudioEndpointSettingsProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531860

void * __thiscall
Audio::ParameterInterfaceRegistryPrivate::FParameterInterfaceRegistry::_scalar_deleting_destructor_
          (FParameterInterfaceRegistry *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x60 != 0) {
    plVar1 = (longlong *)&this->field_0x70;
    if (*(longlong **)&this->field_0x88 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x88;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined4 *)&this->field_0x58 = 0;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<Audio::FParameterInterface,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<Audio::FParameterInterface,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedPtr<Audio::FParameterInterface,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445318e0

void * __thiscall
Audio::FParameterTransmitterBase::_scalar_deleting_destructor_
          (FParameterTransmitterBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FParameterTransmitterBase_Audio__6B_;
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->AudioParameters).AllocatorInstance.Data,
             (this->AudioParameters).ArrayNum);
  pFVar1 = (this->AudioParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531940

void * __thiscall IAudioEndpoint::_scalar_deleting_destructor_(IAudioEndpoint *this,uint param_1)

{
  IAudioEndpointSettingsProxy *pIVar1;
  FScriptContainerElement *pFVar2;
  FMixerNullCallback *pFVar3;
  
  this->_padding_ = (longlong)&___7IAudioEndpoint__6B_;
  Audio::FPatchMixer::~FPatchMixer(&this->PatchMixer);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CurrentSettingsCriticalSection);
  pIVar1 = (this->CurrentSettings).Ptr;
  if (pIVar1 != (IAudioEndpointSettingsProxy *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->BufferForRenderCallback).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->RenderCallback).Ptr;
  if (pFVar3 != (FMixerNullCallback *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445319d0

void * __thiscall
IAudioEndpointSettingsProxy::_scalar_deleting_destructor_
          (IAudioEndpointSettingsProxy *this,uint param_1)

{
  *this = (IAudioEndpointSettingsProxy)&___7IAudioEndpointSettingsProxy__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531a10

void * __thiscall
Audio::IAudioParameterInterfaceRegistry::_scalar_deleting_destructor_
          (IAudioParameterInterfaceRegistry *this,uint param_1)

{
  longlong *plVar1;
  ForElementType<FSetElementId> FVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->RegistrationFunction != 0) {
    plVar1 = *(longlong **)&(this->RegistrationFunction).field_0x28;
    plVar3 = (longlong *)&(this->RegistrationFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  (this->Interfaces).HashSize = 0;
  FVar2 = (this->Interfaces).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<Audio::FParameterInterface,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<Audio::FParameterInterface,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Interfaces).Elements);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531a90

void * __thiscall
IAudioPropertiesDetailsInjector::_scalar_deleting_destructor_
          (IAudioPropertiesDetailsInjector *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAudioPropertiesDetailsInjector__6B_;
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

// `scalar_deleting_destructor' @ 144531b00

void * __thiscall
IAudioPropertiesDetailsInjectorBuilder::_scalar_deleting_destructor_
          (IAudioPropertiesDetailsInjectorBuilder *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAudioPropertiesDetailsInjectorBuilder__6B_;
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

// `scalar_deleting_destructor' @ 144531b70

void * __thiscall
Audio::ILegacyParameterTransmitter::_scalar_deleting_destructor_
          (ILegacyParameterTransmitter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531ba0

void * __thiscall
Audio::IParameterTransmitter::_scalar_deleting_destructor_(IParameterTransmitter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531bd0

void * __thiscall
ISoundfieldEndpoint::_scalar_deleting_destructor_(ISoundfieldEndpoint *this,uint param_1)

{
  ISoundfieldEndpointSettingsProxy *pIVar1;
  FScriptContainerElement *pFVar2;
  FMixerNullCallback *pFVar3;
  
  this->_padding_ = (longlong)&___7ISoundfieldEndpoint__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CurrentSettingsCriticalSection);
  pIVar1 = (this->CurrentSettings).Ptr;
  if (pIVar1 != (ISoundfieldEndpointSettingsProxy *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  DestructItems<TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>,int>
            ((TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *)
             (this->AudioPacketBuffer).AllocatorInstance.Data,(this->AudioPacketBuffer).ArrayNum);
  pFVar2 = (this->AudioPacketBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->RenderCallback).Ptr;
  if (pFVar3 != (FMixerNullCallback *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144531c60

void * __thiscall
UAudioEndpointSettingsBase::_scalar_deleting_destructor_
          (UAudioEndpointSettingsBase *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioEndpointSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 144531cc0

void * __thiscall
UAudioParameterControllerInterface::_scalar_deleting_destructor_
          (UAudioParameterControllerInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 144531d20

void * __thiscall
UAudioPropertiesSheetAssetBase::_scalar_deleting_destructor_
          (UAudioPropertiesSheetAssetBase *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioPropertiesSheetAssetBase__6B_;
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

// `scalar_deleting_destructor' @ 144531d80

void * __thiscall
UAudioPropertiesSheetAssetUserInterface::_scalar_deleting_destructor_
          (UAudioPropertiesSheetAssetUserInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 144531de0

void * __thiscall
UDummyEndpointSettings::_scalar_deleting_destructor_(UDummyEndpointSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioEndpointSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 144531e40

void * __thiscall
UOcclusionPluginSourceSettingsBase::_scalar_deleting_destructor_
          (UOcclusionPluginSourceSettingsBase *this,uint param_1)

{
  *(undefined ***)this = &___7UOcclusionPluginSourceSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 144531ea0

void * __thiscall
UReverbPluginSourceSettingsBase::_scalar_deleting_destructor_
          (UReverbPluginSourceSettingsBase *this,uint param_1)

{
  *(undefined ***)this = &___7UReverbPluginSourceSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 144531f00

void * __thiscall
USoundModulatorBase::_scalar_deleting_destructor_(USoundModulatorBase *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IAudioProxyDataFactory__;
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

// `scalar_deleting_destructor' @ 144531f70

void * __thiscall
USoundfieldEffectBase::_scalar_deleting_destructor_(USoundfieldEffectBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USoundfieldEffectBase__6B_;
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

// `scalar_deleting_destructor' @ 144531fd0

void * __thiscall
USoundfieldEffectSettingsBase::_scalar_deleting_destructor_
          (USoundfieldEffectSettingsBase *this,uint param_1)

{
  *(undefined ***)this = &___7USoundfieldEffectSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 144532030

void * __thiscall
USoundfieldEncodingSettingsBase::_scalar_deleting_destructor_
          (USoundfieldEncodingSettingsBase *this,uint param_1)

{
  *(undefined ***)this = &___7USoundfieldEncodingSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 144532090

void * __thiscall
USoundfieldEndpointSettingsBase::_scalar_deleting_destructor_
          (USoundfieldEndpointSettingsBase *this,uint param_1)

{
  *(undefined ***)this = &___7USoundfieldEndpointSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 1445320f0

void * __thiscall
USourceDataOverridePluginSourceSettingsBase::_scalar_deleting_destructor_
          (USourceDataOverridePluginSourceSettingsBase *this,uint param_1)

{
  *(undefined ***)this = &___7USourceDataOverridePluginSourceSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 144532150

void * __thiscall
USpatializationPluginSourceSettingsBase::_scalar_deleting_destructor_
          (USpatializationPluginSourceSettingsBase *this,uint param_1)

{
  *(undefined ***)this = &___7USpatializationPluginSourceSettingsBase__6B_;
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

// `scalar_deleting_destructor' @ 1445321b0

void * __thiscall
UWaveformTransformationBase::_scalar_deleting_destructor_
          (UWaveformTransformationBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWaveformTransformationBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTransformationRenderChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTransformationChanged);
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

// `scalar_deleting_destructor' @ 144532230

void * __thiscall
UWaveformTransformationChain::_scalar_deleting_destructor_
          (UWaveformTransformationChain *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWaveformTransformationChain__6B_;
  pFVar1 = (this->Transformations).AllocatorInstance.Data;
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

// CreateModulatorHandleId @ 144532980

uint __cdecl Audio::CreateModulatorHandleId(void)

{
  atomic<unsigned_int> aVar1;
  
  aVar1 = ModulationPrivate::NextHandleId;
  LOCK();
  ModulationPrivate::NextHandleId = (atomic<unsigned_int>)((int)ModulationPrivate::NextHandleId + 1)
  ;
  UNLOCK();
  return (int)aVar1 + 1;
}

// EmptyLinkFunctionForGeneratedCodeAudioExtensions_init @ 144533070

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioExtensions_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioParameter @ 144533080

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioParameter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioParameterControllerInterface @ 144533090

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioParameterControllerInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioPropertiesSheetAssetBase @ 1445330a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioPropertiesSheetAssetBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAudioEndpoint @ 1445330b0

void __cdecl EmptyLinkFunctionForGeneratedCodeIAudioEndpoint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAudioExtensionPlugin @ 1445330c0

void __cdecl EmptyLinkFunctionForGeneratedCodeIAudioExtensionPlugin(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAudioModulation @ 1445330d0

void __cdecl EmptyLinkFunctionForGeneratedCodeIAudioModulation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeISoundWaveCloudStreaming @ 1445330e0

void __cdecl EmptyLinkFunctionForGeneratedCodeISoundWaveCloudStreaming(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeISoundfieldEndpoint @ 1445330f0

void __cdecl EmptyLinkFunctionForGeneratedCodeISoundfieldEndpoint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeISoundfieldFormat @ 144533100

void __cdecl EmptyLinkFunctionForGeneratedCodeISoundfieldFormat(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIWaveformTransformation @ 144533110

void __cdecl EmptyLinkFunctionForGeneratedCodeIWaveformTransformation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundGeneratorOutput @ 144533120

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundGeneratorOutput(void)

{
  return;
}

// GetDefaultModulationParameter @ 144534480

FModulationParameter * __cdecl Audio::GetDefaultModulationParameter(void)

{
  return &ModulationPrivate::DefaultParameter;
}

// GetModulationParameter @ 144534880

FModulationParameter * __cdecl Audio::GetModulationParameter(FName param_1)

{
  FModulationParameter *pFVar1;
  TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_> *pTVar2;
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  pTVar2 = TMapBase<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>_>
           ::Find((TMapBase<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>_>
                   *)&ModulationInterfacePrivate::ParameterRegistry,param_1);
  if ((pTVar2 != (TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>
                  *)0x0) && (pFVar1 = pTVar2->Ptr, pFVar1 != (FModulationParameter *)0x0)) {
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)
               &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
    return pFVar1;
  }
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  return &ModulationPrivate::DefaultParameter;
}

// GetModulationParameterPtr @ 1445348f0

FModulationParameter * __cdecl Audio::GetModulationParameterPtr(FName param_1)

{
  FModulationParameter *pFVar1;
  TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_> *pTVar2;
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  pTVar2 = TMapBase<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>_>
           ::Find((TMapBase<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>_>
                   *)&ModulationInterfacePrivate::ParameterRegistry,param_1);
  if ((pTVar2 != (TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>
                  *)0x0) && (pFVar1 = pTVar2->Ptr, pFVar1 != (FModulationParameter *)0x0)) {
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)
               &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
    return pFVar1;
  }
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  return (FModulationParameter *)0x0;
}

// IsModulationParameterRegistered @ 144535b40

bool __cdecl Audio::IsModulationParameterRegistered(FName param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (ModulationInterfacePrivate::ParameterRegistry.Values._8_4_ !=
      ModulationInterfacePrivate::ParameterRegistry.Values._52_4_) {
    lVar3 = 0x154bbeea8;
    if (ModulationInterfacePrivate::ParameterRegistry.Values._64_8_ != 0) {
      lVar3 = ModulationInterfacePrivate::ParameterRegistry.Values._64_8_;
    }
    for (iVar2 = *(int *)(lVar3 + (ulonglong)
                                  (ModulationInterfacePrivate::ParameterRegistry.Values._72_4_ - 1 &
                                  param_1.Number + uVar1) * 4); iVar2 != -1;
        iVar2 = *(int *)(ModulationInterfacePrivate::ParameterRegistry.Values._0_8_ + 0x10 +
                        (longlong)iVar2 * 0x18)) {
      if (*(FName *)(ModulationInterfacePrivate::ParameterRegistry.Values._0_8_ +
                    (longlong)iVar2 * 0x18) == param_1) goto LAB_144535bcc;
    }
  }
  iVar2 = -1;
LAB_144535bcc:
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  return iVar2 != -1;
}

// RegisterModulationParameter @ 144536c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Audio::RegisterModulationParameter(FName param_1,FModulationParameter *param_2)

{
  TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_> *pTVar1;
  FModulationParameter *pFVar2;
  FModulationParameter *this;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  FName local_f8;
  FModulationParameter *local_f0;
  TPairInitializer<FName_const_&,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_&&>
  local_e8;
  FModulationParameter **local_d8;
  undefined1 local_c8 [80];
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8 = param_1;
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  pTVar1 = TMapBase<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>_>
           ::Find((TMapBase<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>_>
                   *)&ModulationInterfacePrivate::ParameterRegistry,local_f8);
  if ((pTVar1 == (TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>
                  *)0x0) || (pTVar1->Ptr == (FModulationParameter *)0x0)) {
    pFVar2 = FModulationParameter::FModulationParameter((FModulationParameter *)local_c8,param_2);
    this = ::operator_new(0xb0);
    local_f0 = (FModulationParameter *)0x0;
    if (this != (FModulationParameter *)0x0) {
      local_f0 = FModulationParameter::FModulationParameter(this,pFVar2);
    }
    local_e8.Value =
         (TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_> *)
         &local_f8;
    local_d8 = &local_f0;
    TSet<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_&&>_>
              ((TSet<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>,FDefaultSetAllocator>
                *)&ModulationInterfacePrivate::ParameterRegistry,&local_e8,(bool *)&local_e8.Value);
    pFVar2 = local_f0;
    if (local_f0 != (FModulationParameter *)0x0) {
      FModulationParameter::~FModulationParameter(local_f0);
      ::operator_delete(pFVar2,0xb0);
    }
    if (local_48 != 0) {
      plVar3 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar3 = local_20;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_78 != 0) {
      plVar3 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar3 = local_50;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_c8._32_8_ != 0) {
      plVar3 = (longlong *)(local_c8 + 0x30);
      if ((longlong *)local_c8._72_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_c8._72_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  else {
    FModulationParameter::operator=(pTVar1->Ptr,param_2);
  }
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  return;
}

// UnregisterAllModulationParameters @ 144538050

void __cdecl Audio::UnregisterAllModulationParameters(void)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  TSet<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>,FDefaultSetAllocator>
           *)&ModulationInterfacePrivate::ParameterRegistry);
                    /* WARNING: Could not recover jumptable at 0x000144538078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  return;
}

// UnregisterModulationParameter @ 144538150

bool __cdecl Audio::UnregisterModulationParameter(FName param_1)

{
  uint uVar1;
  int iVar2;
  uint uStackX_c;
  FName local_res10 [3];
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  local_res10[0] = param_1;
  if (ModulationInterfacePrivate::ParameterRegistry.Values._8_4_ ==
      ModulationInterfacePrivate::ParameterRegistry.Values._52_4_) {
    iVar2 = 0;
  }
  else {
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    uStackX_c = param_1.Number;
    iVar2 = TSet<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>,0>,FDefaultSetAllocator>
                                 *)&ModulationInterfacePrivate::ParameterRegistry,uStackX_c + uVar1,
                                local_res10);
  }
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &ModulationInterfacePrivate::ParameterRegistry.ThreadSafeValueAccessor);
  return 0 < iVar2;
}

// Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister @ 1445382c0

UClass * __cdecl Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioEndpointSettingsBase",
               &Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton,
               UAudioEndpointSettingsBase::StaticRegisterNativesUAudioEndpointSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioEndpointSettingsBase>,
               InternalVTableHelperCtorCaller<UAudioEndpointSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioEndpointSettingsBase.InnerSingleton;
}

// Z_Construct_UClass_UAudioParameterControllerInterface_NoRegister @ 144538370

UClass * __cdecl Z_Construct_UClass_UAudioParameterControllerInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioParameterControllerInterface",
               &Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton,
               UAudioParameterControllerInterface::
               StaticRegisterNativesUAudioParameterControllerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioParameterControllerInterface>,
               InternalVTableHelperCtorCaller<UAudioParameterControllerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterControllerInterface.InnerSingleton;
}

// Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister @ 144538430

UClass * __cdecl Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioPropertiesSheetAssetBase",
               &Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton,
               UAudioPropertiesSheetAssetBase::StaticRegisterNativesUAudioPropertiesSheetAssetBase,
               0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioPropertiesSheetAssetBase>,
               InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton;
}

// Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface_NoRegister @ 1445384e0

UClass * __cdecl Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioPropertiesSheetAssetUserInterface",
               &Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton,
               UAudioPropertiesSheetAssetUserInterface::
               StaticRegisterNativesUAudioPropertiesSheetAssetUserInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioPropertiesSheetAssetUserInterface>,
               InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetUserInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton;
}

// Z_Construct_UClass_UDummyEndpointSettings_NoRegister @ 1445385a0

UClass * __cdecl Z_Construct_UClass_UDummyEndpointSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"DummyEndpointSettings",
               &Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton,
               UDummyEndpointSettings::StaticRegisterNativesUDummyEndpointSettings,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDummyEndpointSettings>,
               InternalVTableHelperCtorCaller<UDummyEndpointSettings>,local_res8,
               UAudioEndpointSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton;
}

// Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister @ 144538660

UClass * __cdecl Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"OcclusionPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton,
               UOcclusionPluginSourceSettingsBase::
               StaticRegisterNativesUOcclusionPluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOcclusionPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<UOcclusionPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton;
}

// Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister @ 144538710

UClass * __cdecl Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"ReverbPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton,
               UReverbPluginSourceSettingsBase::StaticRegisterNativesUReverbPluginSourceSettingsBase
               ,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReverbPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<UReverbPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton;
}

// Z_Construct_UClass_USoundModulatorBase_NoRegister @ 1445387c0

UClass * __cdecl Z_Construct_UClass_USoundModulatorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundModulatorBase",
               &Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton,
               USoundModulatorBase::StaticRegisterNativesUSoundModulatorBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundModulatorBase>,
               InternalVTableHelperCtorCaller<USoundModulatorBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundModulatorBase.InnerSingleton;
}

// Z_Construct_UClass_USoundfieldEffectBase_NoRegister @ 144538870

UClass * __cdecl Z_Construct_UClass_USoundfieldEffectBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEffectBase",
               &Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton,
               USoundfieldEffectBase::StaticRegisterNativesUSoundfieldEffectBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEffectBase>,
               InternalVTableHelperCtorCaller<USoundfieldEffectBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEffectBase.InnerSingleton;
}

// Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister @ 144538920

UClass * __cdecl Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEncodingSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton,
               USoundfieldEncodingSettingsBase::StaticRegisterNativesUSoundfieldEncodingSettingsBase
               ,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEncodingSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEncodingSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEncodingSettingsBase.InnerSingleton;
}

// Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister @ 1445389d0

UClass * __cdecl Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SoundfieldEndpointSettingsBase",
               &Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton,
               USoundfieldEndpointSettingsBase::StaticRegisterNativesUSoundfieldEndpointSettingsBase
               ,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundfieldEndpointSettingsBase>,
               InternalVTableHelperCtorCaller<USoundfieldEndpointSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.InnerSingleton;
}

// Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_NoRegister @ 144538a80

UClass * __cdecl Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SourceDataOverridePluginSourceSettingsBase",
               &Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.
                InnerSingleton,
               USourceDataOverridePluginSourceSettingsBase::
               StaticRegisterNativesUSourceDataOverridePluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceDataOverridePluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<USourceDataOverridePluginSourceSettingsBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.InnerSingleton;
}

// Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister @ 144538b30

UClass * __cdecl Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SpatializationPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton,
               USpatializationPluginSourceSettingsBase::
               StaticRegisterNativesUSpatializationPluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USpatializationPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<USpatializationPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton;
}

// Z_Construct_UClass_UWaveformTransformationChain_NoRegister @ 144538be0

UClass * __cdecl Z_Construct_UClass_UWaveformTransformationChain_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"WaveformTransformationChain",
               &Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton,
               UWaveformTransformationChain::StaticRegisterNativesUWaveformTransformationChain,0x38,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWaveformTransformationChain>,
               InternalVTableHelperCtorCaller<UWaveformTransformationChain>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSoundGeneratorOutput @ 144538c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundGeneratorOutput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundGeneratorOutput.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundGeneratorOutput.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundGeneratorOutput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundGeneratorOutput.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSoundGeneratorOutput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings @ 144538d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings.
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

// Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings @ 144538d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings.InnerSingleton
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

// Z_Construct_UScriptStruct_FSoundWaveCuePoint @ 144538e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSoundWaveCuePoint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSoundWaveCuePoint.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSoundWaveCuePoint.InnerSingleton,
               &Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSoundWaveCuePoint.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSoundWaveCuePoint.InnerSingleton;
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

// IMPLEMENT_MODULE_AudioExtensions @ 144539950

void __cdecl IMPLEMENT_MODULE_AudioExtensions(void)

{
  return;
}

// Instance'' @ 15036c5b0

void __cdecl
`dynamic_atexit_destructor_for_'Audio::IAudioParameterInterfaceRegistry::Instance__(void)

{
  if (Audio::IAudioParameterInterfaceRegistry::Instance.Ptr !=
      (IAudioParameterInterfaceRegistry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036c5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(Audio::IAudioParameterInterfaceRegistry::Instance.Ptr)->_padding_)
              (Audio::IAudioParameterInterfaceRegistry::Instance.Ptr,1);
    return;
  }
  return;
}

// NamespaceDelimiter'' @ 15036c5d0

void __cdecl `dynamic_atexit_destructor_for_'Audio::FParameterPath::NamespaceDelimiter__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Audio::FParameterPath::NamespaceDelimiter.Data.AllocatorInstance.Data;
  if (Audio::FParameterPath::NamespaceDelimiter.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (Audio::FParameterPath::NamespaceDelimiter.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'ConversionFunction'' @ 15036c5f0

void __cdecl
`Audio::FModulationParameter::GetDefaultNormalizedConversionFunction'::__l2::
_dynamic_atexit_destructor_for__ConversionFunction__(void)

{
  longlong *plVar1;
  
  if (ConversionFunction._0_8_ != 0) {
    plVar1 = (longlong *)&ConversionFunction.field_0x10;
    if (ConversionFunction._40_8_ != 0) {
      plVar1 = (longlong *)ConversionFunction._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015036c612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ConversionFunction'' @ 15036c620

void __cdecl
`Audio::FModulationParameter::GetDefaultUnitConversionFunction'::__l2::
_dynamic_atexit_destructor_for__ConversionFunction__(void)

{
  longlong *plVar1;
  
  if (ConversionFunction._0_8_ != 0) {
    plVar1 = (longlong *)&ConversionFunction.field_0x10;
    if (ConversionFunction._40_8_ != 0) {
      plVar1 = (longlong *)ConversionFunction._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015036c642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultMixFunction'' @ 15036c650

void __cdecl
`Audio::FModulationParameter::GetDefaultMixFunction'::__l2::
_dynamic_atexit_destructor_for__DefaultMixFunction__(void)

{
  longlong *plVar1;
  
  if (DefaultMixFunction._0_8_ != 0) {
    plVar1 = (longlong *)&DefaultMixFunction.field_0x10;
    if (DefaultMixFunction._40_8_ != 0) {
      plVar1 = (longlong *)DefaultMixFunction._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015036c672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultParameter'' @ 15036c680

void __cdecl Audio::ModulationPrivate::_dynamic_atexit_destructor_for__DefaultParameter__(void)

{
  longlong *plVar1;
  
  if (DefaultParameter.NormalizedFunction._0_8_ != 0) {
    plVar1 = (longlong *)&DefaultParameter.NormalizedFunction.field_0x10;
    if (DefaultParameter.NormalizedFunction._40_8_ != 0) {
      plVar1 = (longlong *)DefaultParameter.NormalizedFunction._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DefaultParameter.UnitFunction._0_8_ != 0) {
    plVar1 = (longlong *)&DefaultParameter.UnitFunction.field_0x10;
    if (DefaultParameter.UnitFunction._40_8_ != 0) {
      plVar1 = (longlong *)DefaultParameter.UnitFunction._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DefaultParameter.MixFunction._0_8_ != 0) {
    plVar1 = (longlong *)&DefaultParameter.MixFunction.field_0x10;
    if (DefaultParameter.MixFunction._40_8_ != 0) {
      plVar1 = (longlong *)DefaultParameter.MixFunction._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015036c6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DummyFactory'' @ 15036c710

void __cdecl
`IAudioEndpointFactory::GetDummyFactory'::__l2::_dynamic_atexit_destructor_for__DummyFactory__(void)

{
  DummyFactory._padding_ = (longlong)&___7IAudioEndpointFactory__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioEndpoints'' @ 15036c730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioEndpoints__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioEndpoints);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioExtensions'' @ 15036c750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioExtensions__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioExtensions);
  return;
}

// `dynamic_atexit_destructor_for_'LoggedProxyWarnings'' @ 15036c770

void __cdecl
`IAudioProxyDataFactory::CreateProxyData'::__l2::
_dynamic_atexit_destructor_for__LoggedProxyWarnings__(void)

{
  LoggedProxyWarnings.HashSize = 0;
  if (LoggedProxyWarnings.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)LoggedProxyWarnings.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&LoggedProxyWarnings.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'ParameterRegistry'' @ 15036c7b0

void __cdecl
Audio::ModulationInterfacePrivate::_dynamic_atexit_destructor_for__ParameterRegistry__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&ParameterRegistry.ThreadSafeValueAccessor);
  ParameterRegistry.Values._72_4_ = 0;
  if (ParameterRegistry.Values._64_8_ != 0) {
    FMemory::Free((void *)ParameterRegistry.Values._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<Audio::FModulationParameter,TDefaultDelete<Audio::FModulationParameter>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ParameterRegistry);
  return;
}

