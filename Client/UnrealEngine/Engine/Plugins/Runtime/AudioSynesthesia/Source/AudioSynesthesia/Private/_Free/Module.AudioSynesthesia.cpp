// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 277

// `dynamic_initializer_for_'LogAudioSynesthesia'' @ 1413e0d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioSynesthesia__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioSynesthesia,L"LogAudioSynesthesia",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioSynesthesia__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioSynesthesia'' @ 1413e0d90

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioSynesthesia__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioSynesthesia";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioSynesthesia",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Audio::FAudioSynesthesiaModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h__Script_AudioSynesthesia_3037165181'' @ 1413e0de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h__Script_AudioSynesthesia_3037165181__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h__Script_AudioSynesthesia_4014196428'' @ 1413e0e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h__Script_AudioSynesthesia_4014196428__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesia_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h__Script_AudioSynesthesia_1197495078'' @ 1413e0e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h__Script_AudioSynesthesia_1197495078__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h__Script_AudioSynesthesia_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h__Script_AudioSynesthesia_2685927443'' @ 1413e0eb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h__Script_AudioSynesthesia_2685927443__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h__Script_AudioSynesthesia_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h__Script_AudioSynesthesia_1955455323'' @ 1413e0f00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h__Script_AudioSynesthesia_1955455323__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFSNRT_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h__Script_AudioSynesthesia_576697697'' @ 1413e0f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h__Script_AudioSynesthesia_576697697__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LKFS_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h__Script_AudioSynesthesia_575664006'' @ 1413e0f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h__Script_AudioSynesthesia_575664006__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h__Script_AudioSynesthesia_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h__Script_AudioSynesthesia_1885928081'' @ 1413e0fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h__Script_AudioSynesthesia_1885928081__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h__Script_AudioSynesthesia_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h__Script_AudioSynesthesia_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h__Script_AudioSynesthesia_1696676145'' @ 1413e1020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h__Script_AudioSynesthesia_1696676145__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h__Script_AudioSynesthesia_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h__Script_AudioSynesthesia_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h__Script_AudioSynesthesia_2954857050'' @ 1413e1070

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h__Script_AudioSynesthesia_2954857050__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h__Script_AudioSynesthesia_2463304175'' @ 1413e10b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h__Script_AudioSynesthesia_2463304175__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioSynesthesia",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h__Script_AudioSynesthesia_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_SynesthesiaSpectrumAnalysis_h__Script_AudioSynesthesia_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioSynesthesia'' @ 1413e1100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioSynesthesia__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x395c836b;
  local_res8[0].DeclarationsHash = 0xd3f3434;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioSynesthesia,L"/Script/AudioSynesthesia",
             &Z_Registration_Info_UPackage__Script_AudioSynesthesia,local_res8);
  return;
}

// Z_Construct_UClass_ULKFSNRTSettings_NoRegister @ 14d811d70

UClass * __cdecl Z_Construct_UClass_ULKFSNRTSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSNRTSettings",
               &Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton,
               ULKFSNRTSettings::StaticRegisterNativesULKFSNRTSettings,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULKFSNRTSettings>,
               InternalVTableHelperCtorCaller<ULKFSNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton;
}

// Z_Construct_UClass_ULoudnessNRTSettings_NoRegister @ 14d811ef0

UClass * __cdecl Z_Construct_UClass_ULoudnessNRTSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessNRTSettings",
               &Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton,
               ULoudnessNRTSettings::StaticRegisterNativesULoudnessNRTSettings,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULoudnessNRTSettings>,
               InternalVTableHelperCtorCaller<ULoudnessNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature @ 14d8121f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnConstantQResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature @ 14d812230

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestConstantQResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLKFSResults__DelegateSignature @ 14d812270

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLKFSResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLKFSResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature @ 14d8122b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature @ 14d8122f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLKFSResults__DelegateSignature @ 14d812350

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLKFSResults__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLKFSResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature @ 14d812390

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature @ 14d8123d0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature @ 14d812410

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestSpectrumResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLKFSResults__DelegateSignature @ 14d812450

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLKFSResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLKFSResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature @ 14d812490

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature @ 14d8124f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLKFSResults__DelegateSignature @ 14d812530

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLKFSResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLKFSResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature @ 14d812570

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UConstantQSettings_NoRegister @ 14d8125b0

UClass * __cdecl Z_Construct_UClass_UConstantQSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQSettings",
               &Z_Registration_Info_UClass_UConstantQSettings.InnerSingleton,
               UConstantQSettings::StaticRegisterNativesUConstantQSettings,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstantQSettings>,
               InternalVTableHelperCtorCaller<UConstantQSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQSettings.InnerSingleton;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature @ 14d812670

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature @ 14d8126b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioSynesthesia_OnSpectrumResults__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AudioSynesthesia @ 14d8127d0

UPackage * __cdecl Z_Construct_UPackage__Script_AudioSynesthesia(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioSynesthesia.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioSynesthesia.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_AudioSynesthesia.OuterSingleton;
}

// Z_Construct_UClass_ULKFSNRT @ 14d812870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULKFSNRT(void)

{
  if (Z_Registration_Info_UClass_ULKFSNRT.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULKFSNRT.OuterSingleton,
               &Z_Construct_UClass_ULKFSNRT_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULKFSNRT.OuterSingleton;
}

// Z_Construct_UClass_ULKFSNRTSettings @ 14d8128b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULKFSNRTSettings(void)

{
  if (Z_Registration_Info_UClass_ULKFSNRTSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULKFSNRTSettings.OuterSingleton,
               &Z_Construct_UClass_ULKFSNRTSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULKFSNRTSettings.OuterSingleton;
}

// Z_Construct_UClass_ULoudnessNRT @ 14d812930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULoudnessNRT(void)

{
  if (Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton,
               &Z_Construct_UClass_ULoudnessNRT_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton;
}

// Z_Construct_UClass_ULoudnessNRTSettings @ 14d812970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULoudnessNRTSettings(void)

{
  if (Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton,
               &Z_Construct_UClass_ULoudnessNRTSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton;
}

// Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum @ 14d8129b0

UEnum * __cdecl Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton;
}

// ELoudnessNRTCurveTypeEnum_StaticEnum @ 14d8129f0

UEnum * __cdecl ELoudnessNRTCurveTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum,
                       (UObject *)pUVar1,L"ELoudnessNRTCurveTypeEnum");
  }
  return Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton;
}

// Z_Construct_UFunction_ULKFSNRT_GetChannelLoudnessAtTime @ 14d812a30

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetChannelLoudnessAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULKFSNRT_GetChannelLoudnessAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings @ 14d812a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings(void)

{
  if (Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.OuterSingleton,
               &Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.OuterSingleton;
}

// Z_Construct_UClass_USynesthesiaSpectrumAnalyzer @ 14d812ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USynesthesiaSpectrumAnalyzer(void)

{
  if (Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.OuterSingleton,
               &Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults @ 14d812af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSynesthesiaSpectrumResults.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSynesthesiaSpectrumResults.InnerSingleton,
               &Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSynesthesiaSpectrumResults.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSynesthesiaSpectrumResults.InnerSingleton;
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

// Z_Construct_UFunction_ULKFSNRT_GetGatedLoudness @ 14d812b70

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetGatedLoudness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ULKFSNRT_GetGatedLoudness_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bDownmixToMono_SetBit @ 14d812bb0

void __cdecl
Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_Statics::NewProp_bDownmixToMono_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime @ 14d812bc0

UFunction * __cdecl Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULKFSNRT_GetGatedLoudnessForChannel @ 14d812c00

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetGatedLoudnessForChannel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULKFSNRT_GetGatedLoudnessForChannel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime @ 14d812c40

UFunction * __cdecl Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULKFSNRT_GetIntegratedLoudness @ 14d812c80

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetIntegratedLoudness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULKFSNRT_GetIntegratedLoudness_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d812cc0

void * __cdecl Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSynesthesiaSpectrumResults,&UE::CoreUObject::Private::Construct<FSynesthesiaSpectrumResults>,&UE::CoreUObject::Private::ConstructForTests<FSynesthesiaSpectrumResults>,&UE::CoreUObject::Private::Destruct<FSynesthesiaSpectrumResults>,&UE::CoreUObject::Private::Copy<FSynesthesiaSpectrumResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime @ 14d812d00

UFunction * __cdecl Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULKFSNRT_GetIntegratedLoudnessForChannel @ 14d812d40

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetIntegratedLoudnessForChannel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULKFSNRT_GetIntegratedLoudnessForChannel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULKFSNRT_GetLoudnessAtTime @ 14d812d80

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetLoudnessAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ULKFSNRT_GetLoudnessAtTime_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime @ 14d812dc0

UFunction * __cdecl Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMeterAnalyzer @ 14d812e00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeterAnalyzer(void)

{
  if (Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton,
               &Z_Construct_UClass_UMeterAnalyzer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton;
}

// Z_Construct_UClass_UMeterSettings @ 14d812e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeterSettings(void)

{
  if (Z_Registration_Info_UClass_UMeterSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeterSettings.OuterSingleton,
               &Z_Construct_UClass_UMeterSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeterSettings.OuterSingleton;
}

// Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType @ 14d812e80

UEnum * __cdecl Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType(void)

{
  if (Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton,
               &Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMeterResults @ 14d812ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeterResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeterResults.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeterResults.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeterResults_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeterResults.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeterResults.InnerSingleton;
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

// Z_Construct_UFunction_ULKFSNRT_GetLoudnessData @ 14d812f40

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetLoudnessData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ULKFSNRT_GetLoudnessData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EMeterPeakType_StaticEnum @ 14d812f80

UEnum * __cdecl EMeterPeakType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType,(UObject *)pUVar1,
                       L"EMeterPeakType");
  }
  return Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton;
}

// Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataAtTime @ 14d812fc0

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataForChannel @ 14d813000

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataForChannel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataForChannel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d813040

void * __cdecl Z_Construct_UScriptStruct_FMeterResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeterResults,&UE::CoreUObject::Private::Construct<FMeterResults>,&UE::CoreUObject::Private::ConstructForTests<FMeterResults>,&UE::CoreUObject::Private::Destruct<FMeterResults>,&UE::CoreUObject::Private::Copy<FMeterResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataForChannelAtTime @ 14d813080

UFunction * __cdecl Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataForChannelAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULKFSNRT_GetLoudnessDataForChannelAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies @ 14d8130c0

UFunction * __cdecl Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies @ 14d813100

UFunction * __cdecl Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UConstantQAnalyzer @ 14d813200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConstantQAnalyzer(void)

{
  if (Z_Registration_Info_UClass_UConstantQAnalyzer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConstantQAnalyzer.OuterSingleton,
               &Z_Construct_UClass_UConstantQAnalyzer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConstantQAnalyzer.OuterSingleton;
}

// Z_Construct_UClass_UConstantQSettings @ 14d813240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConstantQSettings(void)

{
  if (Z_Registration_Info_UClass_UConstantQSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConstantQSettings.OuterSingleton,
               &Z_Construct_UClass_UConstantQSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConstantQSettings.OuterSingleton;
}

// Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum @ 14d813280

UEnum * __cdecl Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum(void)

{
  if (Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.InnerSingleton,
               &Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.InnerSingleton;
}

// Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum @ 14d8132c0

UEnum * __cdecl Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum(void)

{
  if (Z_Registration_Info_UEnum_EConstantQNormalizationEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConstantQNormalizationEnum.InnerSingleton,
               &Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConstantQNormalizationEnum.InnerSingleton;
}

// Z_Construct_UScriptStruct_FConstantQResults @ 14d813300

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstantQResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstantQResults.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstantQResults.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstantQResults_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstantQResults.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstantQResults.InnerSingleton;
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

// Z_Construct_UClass_ULKFSSettings_NoRegister @ 14d813380

UClass * __cdecl Z_Construct_UClass_ULKFSSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSSettings",
               &Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton,
               ULKFSSettings::StaticRegisterNativesULKFSSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULKFSSettings>,
               InternalVTableHelperCtorCaller<ULKFSSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton;
}

// NewProp_bDownmixToMono_SetBit @ 14d813440

void __cdecl
Z_Construct_UClass_UConstantQSettings_Statics::NewProp_bDownmixToMono_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UClass_UMeterSettings_NoRegister @ 14d813510

UClass * __cdecl Z_Construct_UClass_UMeterSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"MeterSettings",
               &Z_Registration_Info_UClass_UMeterSettings.InnerSingleton,
               UMeterSettings::StaticRegisterNativesUMeterSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeterSettings>,
               InternalVTableHelperCtorCaller<UMeterSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeterSettings.InnerSingleton;
}

// NewStructOps @ 14d8135d0

void * __cdecl Z_Construct_UScriptStruct_FConstantQResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstantQResults,&UE::CoreUObject::Private::Construct<FConstantQResults>,&UE::CoreUObject::Private::ConstructForTests<FConstantQResults>,&UE::CoreUObject::Private::Destruct<FConstantQResults>,&UE::CoreUObject::Private::Copy<FConstantQResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULoudnessSettings_NoRegister @ 14d813710

UClass * __cdecl Z_Construct_UClass_ULoudnessSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessSettings",
               &Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton,
               ULoudnessSettings::StaticRegisterNativesULoudnessSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULoudnessSettings>,
               InternalVTableHelperCtorCaller<ULoudnessSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton;
}

// Z_Construct_UClass_UOnsetNRTSettings_NoRegister @ 14d8137d0

UClass * __cdecl Z_Construct_UClass_UOnsetNRTSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"OnsetNRTSettings",
               &Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton,
               UOnsetNRTSettings::StaticRegisterNativesUOnsetNRTSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOnsetNRTSettings>,
               InternalVTableHelperCtorCaller<UOnsetNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton;
}

// Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies @ 14d813bd0

UFunction * __cdecl Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstantQAnalyzer_GetCenterFrequencies_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies @ 14d813ce0

UFunction * __cdecl Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstantQAnalyzer_GetNumCenterFrequencies_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14d813d20

void * __thiscall
Audio::FAudioSynesthesiaModule::_scalar_deleting_destructor_
          (FAudioSynesthesiaModule *this,uint param_1)

{
  this->OnsetFactory = (FOnsetNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  this->ConstantQFactory = (FConstantQNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  this->LoudnessFactory = (FLoudnessNRTFactory)&___7IAnalyzerNRTFactory_Audio__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UOnsetNRT @ 14d813d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnsetNRT(void)

{
  if (Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton,
               &Z_Construct_UClass_UOnsetNRT_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnsetNRT.OuterSingleton;
}

// Z_Construct_UClass_UOnsetNRTSettings @ 14d813db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnsetNRTSettings(void)

{
  if (Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton,
               &Z_Construct_UClass_UOnsetNRTSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnsetNRTSettings.OuterSingleton;
}

// NewProp_bDownmixToMono_SetBit @ 14d813df0

void __cdecl
Z_Construct_UClass_UOnsetNRTSettings_Statics::NewProp_bDownmixToMono_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes @ 14d813e00

UFunction * __cdecl Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOnsetNRT_GetChannelOnsetsBetweenTimes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes @ 14d813e40

UFunction * __cdecl Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioSynesthesiaNRT @ 14d8140c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioSynesthesiaNRT(void)

{
  if (Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton,
               &Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton;
}

// Z_Construct_UClass_UAudioSynesthesiaNRTSettings @ 14d814100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioSynesthesiaNRTSettings(void)

{
  if (Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton,
               &Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton;
}

// Z_Construct_UClass_ULKFSAnalyzer @ 14d814200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULKFSAnalyzer(void)

{
  if (Z_Registration_Info_UClass_ULKFSAnalyzer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULKFSAnalyzer.OuterSingleton,
               &Z_Construct_UClass_ULKFSAnalyzer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULKFSAnalyzer.OuterSingleton;
}

// Z_Construct_UClass_ULKFSSettings @ 14d814240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULKFSSettings(void)

{
  if (Z_Registration_Info_UClass_ULKFSSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULKFSSettings.OuterSingleton,
               &Z_Construct_UClass_ULKFSSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULKFSSettings.OuterSingleton;
}

// Z_Construct_UClass_UConstantQNRTSettings_NoRegister @ 14d814280

UClass * __cdecl Z_Construct_UClass_UConstantQNRTSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQNRTSettings",
               &Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton,
               UConstantQNRTSettings::StaticRegisterNativesUConstantQNRTSettings,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UConstantQNRTSettings>,
               InternalVTableHelperCtorCaller<UConstantQNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton;
}

// Z_Construct_UClass_UAudioSynesthesiaSettings @ 14d814580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioSynesthesiaSettings(void)

{
  if (Z_Registration_Info_UClass_UAudioSynesthesiaSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioSynesthesiaSettings.OuterSingleton,
               &Z_Construct_UClass_UAudioSynesthesiaSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaSettings.OuterSingleton;
}

// Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister @ 14d8145c0

UClass * __cdecl Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"SynesthesiaSpectrumAnalysisSettings",
               &Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton,
               USynesthesiaSpectrumAnalysisSettings::
               StaticRegisterNativesUSynesthesiaSpectrumAnalysisSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USynesthesiaSpectrumAnalysisSettings>,
               InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalysisSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton;
}

// Z_Construct_UClass_UConstantQNRT @ 14d814900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConstantQNRT(void)

{
  if (Z_Registration_Info_UClass_UConstantQNRT.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConstantQNRT.OuterSingleton,
               &Z_Construct_UClass_UConstantQNRT_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConstantQNRT.OuterSingleton;
}

// Z_Construct_UClass_UConstantQNRTSettings @ 14d814940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConstantQNRTSettings(void)

{
  if (Z_Registration_Info_UClass_UConstantQNRTSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConstantQNRTSettings.OuterSingleton,
               &Z_Construct_UClass_UConstantQNRTSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConstantQNRTSettings.OuterSingleton;
}

// EConstantQNormalizationEnum_StaticEnum @ 14d814980

UEnum * __cdecl EConstantQNormalizationEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum,
                       (UObject *)pUVar1,L"EConstantQNormalizationEnum");
  }
  return Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton;
}

// EConstantQFFTSizeEnum_StaticEnum @ 14d8149c0

UEnum * __cdecl EConstantQFFTSizeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum,(UObject *)pUVar1,
                       L"EConstantQFFTSizeEnum");
  }
  return Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton;
}

// NewProp_bDownmixToMono_SetBit @ 14d814a00

void __cdecl
Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_bDownmixToMono_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime @ 14d814a10

UFunction * __cdecl Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime @ 14d814a50

UFunction * __cdecl Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULoudnessAnalyzer @ 14d814b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULoudnessAnalyzer(void)

{
  if (Z_Registration_Info_UClass_ULoudnessAnalyzer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULoudnessAnalyzer.OuterSingleton,
               &Z_Construct_UClass_ULoudnessAnalyzer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULoudnessAnalyzer.OuterSingleton;
}

// Z_Construct_UClass_ULoudnessSettings @ 14d814b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULoudnessSettings(void)

{
  if (Z_Registration_Info_UClass_ULoudnessSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULoudnessSettings.OuterSingleton,
               &Z_Construct_UClass_ULoudnessSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULoudnessSettings.OuterSingleton;
}

// Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum @ 14d814ba0

UEnum * __cdecl Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum(void)

{
  if (Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.InnerSingleton,
               &Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLoudnessResults @ 14d814be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLoudnessResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLoudnessResults.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLoudnessResults.InnerSingleton,
               &Z_Construct_UScriptStruct_FLoudnessResults_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLoudnessResults.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLoudnessResults.InnerSingleton;
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

// ELoudnessCurveTypeEnum_StaticEnum @ 14d814c60

UEnum * __cdecl ELoudnessCurveTypeEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum,(UObject *)pUVar1,
                       L"ELoudnessCurveTypeEnum");
  }
  return Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton;
}

// NewStructOps @ 14d814cd0

void * __cdecl Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLoudnessResults,&UE::CoreUObject::Private::Construct<FLoudnessResults>,&UE::CoreUObject::Private::ConstructForTests<FLoudnessResults>,&UE::CoreUObject::Private::Destruct<FLoudnessResults>,&UE::CoreUObject::Private::Copy<FLoudnessResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FConstantQResults,FConstantQResults,int> @ 14d814f20

void __cdecl
ConstructItems<FConstantQResults,FConstantQResults,int>
          (void *param_1,FConstantQResults *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FConstantQResults *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->SpectrumValues;
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined4 *)((longlong)(pTVar5 + -1) + 8);
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
                  (4,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 2);
      }
      pFVar3 = (FConstantQResults *)(pTVar5 + 1);
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSynesthesiaSpectrumResults,FSynesthesiaSpectrumResults,int> @ 14d814ff0

void __cdecl
ConstructItems<FSynesthesiaSpectrumResults,FSynesthesiaSpectrumResults,int>
          (void *param_1,FSynesthesiaSpectrumResults *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FSynesthesiaSpectrumResults *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->SpectrumValues;
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined4 *)((longlong)(pTVar5 + -1) + 8);
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
                  (4,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 2);
      }
      pFVar3 = (FSynesthesiaSpectrumResults *)(pTVar5 + 1);
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConvertType<enum_EAudioSpectrumType,enum_Audio::ESpectrumType> @ 14d8150c0

ESpectrumType __cdecl
`anonymous_namespace'::ConvertType<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>
          (TMap<EAudioSpectrumType,Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioSpectrumType,Audio::ESpectrumType,0>_>
           *param_1,EAudioSpectrumType *param_2,ESpectrumType *param_3)

{
  EAudioSpectrumType EVar1;
  code *pcVar2;
  bool bVar3;
  ESpectrumType EVar4;
  ESpectrumType *pEVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)*param_2)
                              * 4);
    if (iVar7 != -1) {
      do {
        if (*(EAudioSpectrumType *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == *param_2) {
          if (iVar7 != -1) goto LAB_14d815184;
          break;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMap.Contains(InValue)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQNRT.cpp"
                     ,0x13,L"Unhandled value conversion");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
LAB_14d815184:
  EVar1 = *param_2;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)EVar1) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(EAudioSpectrumType *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == EVar1) {
          pEVar5 = TMapBase<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
                   ::FindChecked(param_1,EVar1);
          return *pEVar5;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  return *param_3;
}

// ConvertType<enum_EAudioSpectrumType,enum_Audio::ESpectrumType> @ 14d815210

ESpectrumType __cdecl
ConstantQPrivate::ConvertType<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>
          (TMap<EAudioSpectrumType,Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioSpectrumType,Audio::ESpectrumType,0>_>
           *param_1,EAudioSpectrumType *param_2,ESpectrumType *param_3)

{
  EAudioSpectrumType EVar1;
  code *pcVar2;
  bool bVar3;
  ESpectrumType EVar4;
  ESpectrumType *pEVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)*param_2)
                              * 4);
    if (iVar7 != -1) {
      do {
        if (*(EAudioSpectrumType *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == *param_2) {
          if (iVar7 != -1) goto LAB_14d8152d4;
          break;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMap.Contains(InValue)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQ.cpp"
                     ,0xf,L"Unhandled value conversion");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
LAB_14d8152d4:
  EVar1 = *param_2;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)EVar1) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(EAudioSpectrumType *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == EVar1) {
          pEVar5 = TMapBase<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
                   ::FindChecked(param_1,EVar1);
          return *pEVar5;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  return *param_3;
}

// ConvertType<enum_EConstantQFFTSizeEnum,int> @ 14d815360

int __cdecl
`anonymous_namespace'::ConvertType<enum_EConstantQFFTSizeEnum,int>
          (TMap<EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EConstantQFFTSizeEnum,int,0>_>
           *param_1,EConstantQFFTSizeEnum *param_2,int *param_3)

{
  EConstantQFFTSizeEnum EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)*param_2)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(EConstantQFFTSizeEnum *)(*(longlong *)param_1 + (longlong)iVar4 * 0x10) == *param_2) {
          if (iVar4 != -1) goto LAB_14d815423;
          break;
        }
        iVar4 = *(int *)(*(longlong *)param_1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMap.Contains(InValue)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQNRT.cpp"
                     ,0x13,L"Unhandled value conversion");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14d815423:
  EVar1 = *param_2;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)EVar1) * 4
                    );
    if (iVar4 != -1) {
      do {
        if (*(EConstantQFFTSizeEnum *)(*(longlong *)param_1 + (longlong)iVar4 * 0x10) == EVar1) {
          piVar5 = TMapBase<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
                   ::FindChecked(param_1,EVar1);
          return *piVar5;
        }
        iVar4 = *(int *)(*(longlong *)param_1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  return *param_3;
}

// ConvertType<enum_EConstantQFFTSizeEnum,int> @ 14d8154b0

int __cdecl
ConstantQPrivate::ConvertType<enum_EConstantQFFTSizeEnum,int>
          (TMap<EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EConstantQFFTSizeEnum,int,0>_>
           *param_1,EConstantQFFTSizeEnum *param_2,int *param_3)

{
  EConstantQFFTSizeEnum EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)*param_2)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(EConstantQFFTSizeEnum *)(*(longlong *)param_1 + (longlong)iVar4 * 0x10) == *param_2) {
          if (iVar4 != -1) goto LAB_14d815573;
          break;
        }
        iVar4 = *(int *)(*(longlong *)param_1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMap.Contains(InValue)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQ.cpp"
                     ,0xf,L"Unhandled value conversion");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14d815573:
  EVar1 = *param_2;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)EVar1) * 4
                    );
    if (iVar4 != -1) {
      do {
        if (*(EConstantQFFTSizeEnum *)(*(longlong *)param_1 + (longlong)iVar4 * 0x10) == EVar1) {
          piVar5 = TMapBase<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
                   ::FindChecked(param_1,EVar1);
          return *piVar5;
        }
        iVar4 = *(int *)(*(longlong *)param_1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  return *param_3;
}

// ConvertType<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization> @ 14d815600

EPseudoConstantQNormalization __cdecl
`anonymous_namespace'::
ConvertType<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>
          (TMap<EConstantQNormalizationEnum,Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EConstantQNormalizationEnum,Audio::EPseudoConstantQNormalization,0>_>
           *param_1,EConstantQNormalizationEnum *param_2,EPseudoConstantQNormalization *param_3)

{
  EConstantQNormalizationEnum EVar1;
  code *pcVar2;
  bool bVar3;
  EPseudoConstantQNormalization EVar4;
  EPseudoConstantQNormalization *pEVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)*param_2)
                              * 4);
    if (iVar7 != -1) {
      do {
        if (*(EConstantQNormalizationEnum *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) ==
            *param_2) {
          if (iVar7 != -1) goto LAB_14d8156c4;
          break;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMap.Contains(InValue)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQNRT.cpp"
                     ,0x13,L"Unhandled value conversion");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
LAB_14d8156c4:
  EVar1 = *param_2;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)EVar1) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(EConstantQNormalizationEnum *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == EVar1)
        {
          pEVar5 = TMapBase<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
                   ::FindChecked(param_1,EVar1);
          return *pEVar5;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  return *param_3;
}

// ConvertType<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization> @ 14d815750

EPseudoConstantQNormalization __cdecl
ConstantQPrivate::
ConvertType<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>
          (TMap<EConstantQNormalizationEnum,Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EConstantQNormalizationEnum,Audio::EPseudoConstantQNormalization,0>_>
           *param_1,EConstantQNormalizationEnum *param_2,EPseudoConstantQNormalization *param_3)

{
  EConstantQNormalizationEnum EVar1;
  code *pcVar2;
  bool bVar3;
  EPseudoConstantQNormalization EVar4;
  EPseudoConstantQNormalization *pEVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)*param_2)
                              * 4);
    if (iVar7 != -1) {
      do {
        if (*(EConstantQNormalizationEnum *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) ==
            *param_2) {
          if (iVar7 != -1) goto LAB_14d815814;
          break;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMap.Contains(InValue)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQ.cpp"
                     ,0xf,L"Unhandled value conversion");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
LAB_14d815814:
  EVar1 = *param_2;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)EVar1) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(EConstantQNormalizationEnum *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == EVar1)
        {
          pEVar5 = TMapBase<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
                   ::FindChecked(param_1,EVar1);
          return *pEVar5;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  return *param_3;
}

// ConvertType<enum_EFFTWindowType,enum_Audio::EWindowType> @ 14d8158a0

EWindowType __cdecl
`anonymous_namespace'::ConvertType<enum_EFFTWindowType,enum_Audio::EWindowType>
          (TMap<EFFTWindowType,Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EFFTWindowType,Audio::EWindowType,0>_>
           *param_1,EFFTWindowType *param_2,EWindowType *param_3)

{
  EFFTWindowType EVar1;
  code *pcVar2;
  bool bVar3;
  EWindowType EVar4;
  EWindowType *pEVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)*param_2)
                              * 4);
    if (iVar7 != -1) {
      do {
        if (*(EFFTWindowType *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == *param_2) {
          if (iVar7 != -1) goto LAB_14d815964;
          break;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMap.Contains(InValue)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQNRT.cpp"
                     ,0x13,L"Unhandled value conversion");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
LAB_14d815964:
  EVar1 = *param_2;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)EVar1) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(EFFTWindowType *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == EVar1) {
          pEVar5 = TMapBase<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
                   ::FindChecked(param_1,EVar1);
          return *pEVar5;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  return *param_3;
}

// ConvertType<enum_EFFTWindowType,enum_Audio::EWindowType> @ 14d8159f0

EWindowType __cdecl
ConstantQPrivate::ConvertType<enum_EFFTWindowType,enum_Audio::EWindowType>
          (TMap<EFFTWindowType,Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EFFTWindowType,Audio::EWindowType,0>_>
           *param_1,EFFTWindowType *param_2,EWindowType *param_3)

{
  EFFTWindowType EVar1;
  code *pcVar2;
  bool bVar3;
  EWindowType EVar4;
  EWindowType *pEVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)*param_2)
                              * 4);
    if (iVar7 != -1) {
      do {
        if (*(EFFTWindowType *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == *param_2) {
          if (iVar7 != -1) goto LAB_14d815ab4;
          break;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMap.Contains(InValue)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQ.cpp"
                     ,0xf,L"Unhandled value conversion");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
LAB_14d815ab4:
  EVar1 = *param_2;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_1->field_0x48 - 1) & (ulonglong)EVar1) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(EFFTWindowType *)(*(longlong *)param_1 + (longlong)iVar7 * 0xc) == EVar1) {
          pEVar5 = TMapBase<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
                   ::FindChecked(param_1,EVar1);
          return *pEVar5;
        }
        iVar7 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  return *param_3;
}

// DestructItems<FConstantQResults,int> @ 14d815b40

void __cdecl DestructItems<FConstantQResults,int>(FConstantQResults *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SpectrumValues).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FConstantQResults *)(&param_1->SpectrumValues + 1);
  }
  return;
}

// DestructItems<FSynesthesiaSpectrumResults,int> @ 14d815b80

void __cdecl
DestructItems<FSynesthesiaSpectrumResults,int>(FSynesthesiaSpectrumResults *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SpectrumValues).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FSynesthesiaSpectrumResults *)(&param_1->SpectrumValues + 1);
  }
  return;
}

// FindNearestByTimestamp<FLKFSNRTResults_const_> @ 14d816360

FLKFSNRTResults * __cdecl
Audio::FindNearestByTimestamp<FLKFSNRTResults_const_>
          (TArrayView<FLKFSNRTResults_const_,int> *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  FLKFSNRTResults *pFVar3;
  FLKFSNRTResults *pFVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar7 = uVar1;
    if (0 < (int)uVar1) {
      do {
        iVar5 = (uVar7 >> 1) + uVar6;
        uVar2 = iVar5 + (uVar7 & 1);
        if (param_2 < param_1->DataPtr[iVar5].Timestamp) {
          uVar2 = uVar6;
        }
        uVar6 = uVar2;
        uVar2 = uVar7 >> 1;
        uVar7 = uVar7 >> 1;
      } while (uVar2 != 0);
    }
    uVar7 = uVar1 - 1;
    if ((int)(uVar6 - 1) < (int)uVar7) {
      uVar1 = uVar6;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    iVar5 = 0;
    if (0 < (int)(uVar1 - 1)) {
      iVar5 = uVar1 - 1;
    }
    pFVar3 = TArrayView<FLKFSNRTResults_const_,int>::operator[](param_1,iVar5);
    uVar1 = 0;
    if (0 < (int)uVar7) {
      uVar1 = uVar7;
    }
    pFVar4 = TArrayView<FLKFSNRTResults_const_,int>::operator[](param_1,uVar1);
    if ((float)((uint)(pFVar4->Timestamp - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        (float)((uint)(pFVar3->Timestamp - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      pFVar3 = pFVar4;
    }
    return pFVar3;
  }
  return (FLKFSNRTResults *)0x0;
}

// GetInterpolationParametersAtTimestamp<Audio::FConstantQFrame> @ 14d816470

void __cdecl
Audio::GetInterpolationParametersAtTimestamp<Audio::FConstantQFrame>
          (TArrayView<Audio::FConstantQFrame_const_,int> *param_1,float param_2,int *param_3,
          int *param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FConstantQFrame *pFVar4;
  FConstantQFrame *pFVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  fVar9 = __real_3f800000;
  uVar1 = param_1->ArrayNum;
  if (uVar1 == 0) {
    *param_3 = -1;
    *param_4 = -1;
    *param_5 = fVar9;
  }
  else {
    uVar7 = 0;
    uVar8 = uVar1;
    if (0 < (int)uVar1) {
      do {
        iVar6 = (uVar8 >> 1) + uVar7;
        uVar2 = iVar6 + (uVar8 & 1);
        if (param_2 < param_1->DataPtr[iVar6].Timestamp) {
          uVar2 = uVar7;
        }
        uVar7 = uVar2;
        uVar2 = uVar8 >> 1;
        uVar8 = uVar8 >> 1;
      } while (uVar2 != 0);
    }
    *param_4 = uVar7;
    iVar6 = uVar1 - 1;
    if ((int)(uVar7 - 1) < iVar6) {
      uVar1 = uVar7;
    }
    iVar3 = 0;
    if (0 < (int)(uVar1 - 1)) {
      iVar3 = uVar1 - 1;
    }
    *param_3 = iVar3;
    if (*param_4 < iVar6) {
      iVar6 = *param_4;
    }
    iVar3 = 0;
    if (0 < iVar6) {
      iVar3 = iVar6;
    }
    *param_4 = iVar3;
    pFVar4 = TArrayView<Audio::FConstantQFrame_const_,int>::operator[](param_1,*param_3);
    pFVar5 = TArrayView<Audio::FConstantQFrame_const_,int>::operator[](param_1,*param_4);
    fVar9 = pFVar5->Timestamp - pFVar4->Timestamp;
    if (fVar9 <= __real_322bcc77) {
      fVar9 = __real_322bcc77;
    }
    fVar9 = (param_2 - pFVar4->Timestamp) / fVar9;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *param_5 = fVar9;
  }
  return;
}

// GetInterpolationParametersAtTimestamp<FLKFSNRTResults> @ 14d8165b0

void __cdecl
Audio::GetInterpolationParametersAtTimestamp<FLKFSNRTResults>
          (TArrayView<FLKFSNRTResults_const_,int> *param_1,float param_2,int *param_3,int *param_4,
          float *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FLKFSNRTResults *pFVar4;
  FLKFSNRTResults *pFVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  fVar9 = __real_3f800000;
  uVar1 = param_1->ArrayNum;
  if (uVar1 == 0) {
    *param_3 = -1;
    *param_4 = -1;
    *param_5 = fVar9;
  }
  else {
    uVar7 = 0;
    uVar8 = uVar1;
    if (0 < (int)uVar1) {
      do {
        iVar6 = (uVar8 >> 1) + uVar7;
        uVar2 = iVar6 + (uVar8 & 1);
        if (param_2 < param_1->DataPtr[iVar6].Timestamp) {
          uVar2 = uVar7;
        }
        uVar7 = uVar2;
        uVar2 = uVar8 >> 1;
        uVar8 = uVar8 >> 1;
      } while (uVar2 != 0);
    }
    *param_4 = uVar7;
    iVar6 = uVar1 - 1;
    if ((int)(uVar7 - 1) < iVar6) {
      uVar1 = uVar7;
    }
    iVar3 = 0;
    if (0 < (int)(uVar1 - 1)) {
      iVar3 = uVar1 - 1;
    }
    *param_3 = iVar3;
    if (*param_4 < iVar6) {
      iVar6 = *param_4;
    }
    iVar3 = 0;
    if (0 < iVar6) {
      iVar3 = iVar6;
    }
    *param_4 = iVar3;
    pFVar4 = TArrayView<FLKFSNRTResults_const_,int>::operator[](param_1,*param_3);
    pFVar5 = TArrayView<FLKFSNRTResults_const_,int>::operator[](param_1,*param_4);
    fVar9 = pFVar5->Timestamp - pFVar4->Timestamp;
    if (fVar9 <= __real_322bcc77) {
      fVar9 = __real_322bcc77;
    }
    fVar9 = (param_2 - pFVar4->Timestamp) / fVar9;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *param_5 = fVar9;
  }
  return;
}

// GetInterpolationParametersAtTimestamp<Audio::FLoudnessDatum> @ 14d8166f0

void __cdecl
Audio::GetInterpolationParametersAtTimestamp<Audio::FLoudnessDatum>
          (TArrayView<Audio::FLoudnessDatum_const_,int> *param_1,float param_2,int *param_3,
          int *param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FLoudnessDatum *pFVar4;
  FLoudnessDatum *pFVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  fVar9 = __real_3f800000;
  uVar1 = param_1->ArrayNum;
  if (uVar1 == 0) {
    *param_3 = -1;
    *param_4 = -1;
    *param_5 = fVar9;
  }
  else {
    uVar7 = 0;
    uVar8 = uVar1;
    if (0 < (int)uVar1) {
      do {
        iVar6 = (uVar8 >> 1) + uVar7;
        uVar2 = iVar6 + (uVar8 & 1);
        if (param_2 < param_1->DataPtr[iVar6].Timestamp) {
          uVar2 = uVar7;
        }
        uVar7 = uVar2;
        uVar2 = uVar8 >> 1;
        uVar8 = uVar8 >> 1;
      } while (uVar2 != 0);
    }
    *param_4 = uVar7;
    iVar6 = uVar1 - 1;
    if ((int)(uVar7 - 1) < iVar6) {
      uVar1 = uVar7;
    }
    iVar3 = 0;
    if (0 < (int)(uVar1 - 1)) {
      iVar3 = uVar1 - 1;
    }
    *param_3 = iVar3;
    if (*param_4 < iVar6) {
      iVar6 = *param_4;
    }
    iVar3 = 0;
    if (0 < iVar6) {
      iVar3 = iVar6;
    }
    *param_4 = iVar3;
    pFVar4 = TArrayView<Audio::FLoudnessDatum_const_,int>::operator[](param_1,*param_3);
    pFVar5 = TArrayView<Audio::FLoudnessDatum_const_,int>::operator[](param_1,*param_4);
    fVar9 = pFVar5->Timestamp - pFVar4->Timestamp;
    if (fVar9 <= __real_322bcc77) {
      fVar9 = __real_322bcc77;
    }
    fVar9 = (param_2 - pFVar4->Timestamp) / fVar9;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *param_5 = fVar9;
  }
  return;
}

// HeapSortInternal<FConstantQResults,int,FIdentityFunctor,TDereferenceWrapper<FConstantQResults,`ConvertToBlueprintResults'::__l2::<lambda_1>_>_> @ 14d816b30

void __cdecl
AlgoImpl::
HeapSortInternal<FConstantQResults,int,FIdentityFunctor,TDereferenceWrapper<FConstantQResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
          (FConstantQResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FConstantQResults,,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>___cdecl_ConvertToBlueprintResults(UConstantQSettings_*,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FConstantQResults *pFVar1;
  FConstantQResults *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FConstantQResults *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14d816c46:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar16 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar15 = param_1 + lVar16;
          do {
            uVar6 = *(undefined4 *)&pFVar15->field_0x4;
            pFVar4 = (pFVar15->SpectrumValues).AllocatorInstance.Data;
            iVar13 = (param_1->SpectrumValues).ArrayNum;
            iVar19 = (param_1->SpectrumValues).ArrayMax;
            fVar8 = param_1->TimeSeconds;
            uVar9 = *(undefined4 *)&param_1->field_0x4;
            pFVar5 = (param_1->SpectrumValues).AllocatorInstance.Data;
            param_1->TimeSeconds = pFVar15->TimeSeconds;
            *(undefined4 *)&param_1->field_0x4 = uVar6;
            (param_1->SpectrumValues).AllocatorInstance.Data = pFVar4;
            iVar18 = (pFVar15->SpectrumValues).ArrayMax;
            (param_1->SpectrumValues).ArrayNum = (pFVar15->SpectrumValues).ArrayNum;
            (param_1->SpectrumValues).ArrayMax = iVar18;
            pFVar15->TimeSeconds = fVar8;
            *(undefined4 *)&pFVar15->field_0x4 = uVar9;
            (pFVar15->SpectrumValues).AllocatorInstance.Data = pFVar5;
            (pFVar15->SpectrumValues).ArrayNum = iVar13;
            (pFVar15->SpectrumValues).ArrayMax = iVar19;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar19 = iVar18 * 2;
                iVar13 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[(longlong)iVar19 + 2].TimeSeconds <= param_1[iVar13].TimeSeconds &&
                      param_1[iVar13].TimeSeconds != param_1[(longlong)iVar19 + 2].TimeSeconds) {
                    iVar13 = iVar19;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].TimeSeconds < param_1[iVar18].TimeSeconds ||
                    param_1[iVar13].TimeSeconds == param_1[iVar18].TimeSeconds) break;
                pFVar1 = param_1 + iVar13;
                uVar6 = *(undefined4 *)&pFVar1->field_0x4;
                pFVar4 = (pFVar1->SpectrumValues).AllocatorInstance.Data;
                iVar17 = param_1[iVar18].SpectrumValues.ArrayNum;
                iVar7 = param_1[iVar18].SpectrumValues.ArrayMax;
                pFVar2 = param_1 + iVar18;
                fVar8 = pFVar2->TimeSeconds;
                uVar9 = *(undefined4 *)&pFVar2->field_0x4;
                pFVar5 = (pFVar2->SpectrumValues).AllocatorInstance.Data;
                pFVar2 = param_1 + iVar18;
                pFVar2->TimeSeconds = pFVar1->TimeSeconds;
                *(undefined4 *)&pFVar2->field_0x4 = uVar6;
                (pFVar2->SpectrumValues).AllocatorInstance.Data = pFVar4;
                iVar19 = param_1[iVar13].SpectrumValues.ArrayMax;
                param_1[iVar18].SpectrumValues.ArrayNum = param_1[iVar13].SpectrumValues.ArrayNum;
                param_1[iVar18].SpectrumValues.ArrayMax = iVar19;
                pFVar1 = param_1 + iVar13;
                pFVar1->TimeSeconds = fVar8;
                *(undefined4 *)&pFVar1->field_0x4 = uVar9;
                (pFVar1->SpectrumValues).AllocatorInstance.Data = pFVar5;
                param_1[iVar13].SpectrumValues.ArrayNum = iVar17;
                param_1[iVar13].SpectrumValues.ArrayMax = iVar7;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].TimeSeconds <= param_1[iVar17].TimeSeconds &&
          param_1[iVar17].TimeSeconds != param_1[(longlong)iVar14 + 2].TimeSeconds) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar17].TimeSeconds < param_1[iVar13].TimeSeconds ||
        param_1[iVar17].TimeSeconds == param_1[iVar13].TimeSeconds) goto LAB_14d816c46;
    pFVar15 = param_1 + iVar17;
    uVar6 = *(undefined4 *)&pFVar15->field_0x4;
    pFVar4 = (pFVar15->SpectrumValues).AllocatorInstance.Data;
    iVar14 = iVar17 * 2 + 1;
    iVar10 = param_1[iVar13].SpectrumValues.ArrayNum;
    iVar11 = param_1[iVar13].SpectrumValues.ArrayMax;
    pFVar1 = param_1 + iVar13;
    fVar8 = pFVar1->TimeSeconds;
    uVar9 = *(undefined4 *)&pFVar1->field_0x4;
    pFVar5 = (pFVar1->SpectrumValues).AllocatorInstance.Data;
    pFVar1 = param_1 + iVar13;
    pFVar1->TimeSeconds = pFVar15->TimeSeconds;
    *(undefined4 *)&pFVar1->field_0x4 = uVar6;
    (pFVar1->SpectrumValues).AllocatorInstance.Data = pFVar4;
    iVar7 = param_1[iVar17].SpectrumValues.ArrayMax;
    param_1[iVar13].SpectrumValues.ArrayNum = param_1[iVar17].SpectrumValues.ArrayNum;
    param_1[iVar13].SpectrumValues.ArrayMax = iVar7;
    pFVar15 = param_1 + iVar17;
    pFVar15->TimeSeconds = fVar8;
    *(undefined4 *)&pFVar15->field_0x4 = uVar9;
    (pFVar15->SpectrumValues).AllocatorInstance.Data = pFVar5;
    param_1[iVar17].SpectrumValues.ArrayNum = iVar10;
    param_1[iVar17].SpectrumValues.ArrayMax = iVar11;
    iVar13 = iVar17;
  } while( true );
}

// HeapSortInternal<FLoudnessResults,int,FIdentityFunctor,TDereferenceWrapper<FLoudnessResults,`ConvertToBlueprintResults'::__l2::FCompareLoudnessResults>_> @ 14d816d60

void __cdecl
AlgoImpl::
HeapSortInternal<FLoudnessResults,int,FIdentityFunctor,TDereferenceWrapper<FLoudnessResults,_ConvertToBlueprintResults_::__l2::FCompareLoudnessResults>_>
          (FLoudnessResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLoudnessResults,,TArray<FLoudnessResults,TSizedDefaultAllocator<32>_>___cdecl_ConvertToBlueprintResults(ULoudnessSettings_*,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FCompareLoudnessResults>
          param_4)

{
  FLoudnessResults *pFVar1;
  FLoudnessResults *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  FLoudnessResults *pFVar18;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar16 = iVar13;
  iVar17 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_14d816e53:
      if (iVar17 == 0) {
        iVar13 = param_2 + -1;
        lVar15 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar18 = param_1 + lVar15;
          do {
            fVar4 = pFVar18->NormalizedLoudness;
            fVar5 = pFVar18->PerceptualEnergy;
            fVar6 = pFVar18->TimeSeconds;
            iVar16 = 0;
            fVar7 = param_1->Loudness;
            fVar8 = param_1->NormalizedLoudness;
            fVar9 = param_1->PerceptualEnergy;
            fVar10 = param_1->TimeSeconds;
            param_1->Loudness = pFVar18->Loudness;
            param_1->NormalizedLoudness = fVar4;
            param_1->PerceptualEnergy = fVar5;
            param_1->TimeSeconds = fVar6;
            pFVar18->Loudness = fVar7;
            pFVar18->NormalizedLoudness = fVar8;
            pFVar18->PerceptualEnergy = fVar9;
            pFVar18->TimeSeconds = fVar10;
            if (1 < iVar13) {
              do {
                iVar17 = iVar16 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar13) {
                  if (param_1[(longlong)iVar17 + 2].TimeSeconds <= param_1[iVar12].TimeSeconds &&
                      param_1[iVar12].TimeSeconds != param_1[(longlong)iVar17 + 2].TimeSeconds) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                if (param_1[iVar12].TimeSeconds < param_1[iVar16].TimeSeconds ||
                    param_1[iVar12].TimeSeconds == param_1[iVar16].TimeSeconds) break;
                pFVar1 = param_1 + iVar16;
                fVar7 = pFVar1->Loudness;
                fVar8 = pFVar1->NormalizedLoudness;
                fVar9 = pFVar1->PerceptualEnergy;
                fVar10 = pFVar1->TimeSeconds;
                pFVar1 = param_1 + iVar12;
                fVar4 = pFVar1->NormalizedLoudness;
                fVar5 = pFVar1->PerceptualEnergy;
                fVar6 = pFVar1->TimeSeconds;
                pFVar2 = param_1 + iVar16;
                pFVar2->Loudness = pFVar1->Loudness;
                pFVar2->NormalizedLoudness = fVar4;
                pFVar2->PerceptualEnergy = fVar5;
                pFVar2->TimeSeconds = fVar6;
                pFVar1 = param_1 + iVar12;
                pFVar1->Loudness = fVar7;
                pFVar1->NormalizedLoudness = fVar8;
                pFVar1->PerceptualEnergy = fVar9;
                pFVar1->TimeSeconds = fVar10;
                iVar16 = iVar12;
              } while (iVar12 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar15 = lVar15 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar12 = iVar17 + -1;
      iVar13 = iVar16 + -2;
      iVar16 = iVar13;
      iVar17 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar14 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (param_1[(longlong)iVar13 + 2].TimeSeconds <= param_1[iVar14].TimeSeconds &&
          param_1[iVar14].TimeSeconds != param_1[(longlong)iVar13 + 2].TimeSeconds) {
        iVar14 = iVar13;
      }
      iVar14 = iVar14 + 1;
    }
    if (param_1[iVar14].TimeSeconds < param_1[iVar12].TimeSeconds ||
        param_1[iVar14].TimeSeconds == param_1[iVar12].TimeSeconds) goto LAB_14d816e53;
    pFVar18 = param_1 + iVar12;
    fVar7 = pFVar18->Loudness;
    fVar8 = pFVar18->NormalizedLoudness;
    fVar9 = pFVar18->PerceptualEnergy;
    fVar10 = pFVar18->TimeSeconds;
    pFVar18 = param_1 + iVar14;
    fVar4 = pFVar18->NormalizedLoudness;
    fVar5 = pFVar18->PerceptualEnergy;
    fVar6 = pFVar18->TimeSeconds;
    pFVar1 = param_1 + iVar12;
    pFVar1->Loudness = pFVar18->Loudness;
    pFVar1->NormalizedLoudness = fVar4;
    pFVar1->PerceptualEnergy = fVar5;
    pFVar1->TimeSeconds = fVar6;
    iVar13 = iVar14 * 2 + 1;
    pFVar18 = param_1 + iVar14;
    pFVar18->Loudness = fVar7;
    pFVar18->NormalizedLoudness = fVar8;
    pFVar18->PerceptualEnergy = fVar9;
    pFVar18->TimeSeconds = fVar10;
    iVar12 = iVar14;
  } while( true );
}

// HeapSortInternal<FMeterResults,int,FIdentityFunctor,TDereferenceWrapper<FMeterResults,`ConvertToBlueprintResults'::__l2::<lambda_1>_>_> @ 14d816f30

void __cdecl
AlgoImpl::
HeapSortInternal<FMeterResults,int,FIdentityFunctor,TDereferenceWrapper<FMeterResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
          (FMeterResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMeterResults,,TArray<FMeterResults,TSizedDefaultAllocator<32>_>___cdecl_ConvertToBlueprintResults(UMeterSettings_*,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FMeterResults *pFVar1;
  FMeterResults *pFVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FMeterResults *pFVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar17 = iVar13;
  iVar18 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_14d81703f:
      if (iVar18 == 0) {
        iVar13 = param_2 + -1;
        lVar15 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar14 = param_1 + lVar15;
          do {
            fVar5 = pFVar14->MeterValue;
            fVar6 = pFVar14->PeakValue;
            iVar17 = pFVar14->NumSamplesClipping;
            fVar3 = param_1->ClippingValue;
            iVar18 = 0;
            fVar7 = param_1->TimeSeconds;
            fVar8 = param_1->MeterValue;
            fVar9 = param_1->PeakValue;
            iVar12 = param_1->NumSamplesClipping;
            param_1->TimeSeconds = pFVar14->TimeSeconds;
            param_1->MeterValue = fVar5;
            param_1->PeakValue = fVar6;
            param_1->NumSamplesClipping = iVar17;
            param_1->ClippingValue = pFVar14->ClippingValue;
            pFVar14->TimeSeconds = fVar7;
            pFVar14->MeterValue = fVar8;
            pFVar14->PeakValue = fVar9;
            pFVar14->NumSamplesClipping = iVar12;
            pFVar14->ClippingValue = fVar3;
            if (1 < iVar13) {
              do {
                iVar12 = iVar18 * 2;
                iVar17 = iVar12 + 1;
                if (iVar12 + 2 < iVar13) {
                  if (param_1[(longlong)iVar12 + 2].TimeSeconds <= param_1[iVar17].TimeSeconds &&
                      param_1[iVar17].TimeSeconds != param_1[(longlong)iVar12 + 2].TimeSeconds) {
                    iVar17 = iVar12;
                  }
                  iVar17 = iVar17 + 1;
                }
                if (param_1[iVar17].TimeSeconds < param_1[iVar18].TimeSeconds ||
                    param_1[iVar17].TimeSeconds == param_1[iVar18].TimeSeconds) break;
                pFVar1 = param_1 + iVar17;
                fVar5 = pFVar1->MeterValue;
                fVar6 = pFVar1->PeakValue;
                iVar12 = pFVar1->NumSamplesClipping;
                fVar3 = param_1[iVar18].ClippingValue;
                pFVar2 = param_1 + iVar18;
                fVar7 = pFVar2->TimeSeconds;
                fVar8 = pFVar2->MeterValue;
                fVar9 = pFVar2->PeakValue;
                iVar16 = pFVar2->NumSamplesClipping;
                pFVar2 = param_1 + iVar18;
                pFVar2->TimeSeconds = pFVar1->TimeSeconds;
                pFVar2->MeterValue = fVar5;
                pFVar2->PeakValue = fVar6;
                pFVar2->NumSamplesClipping = iVar12;
                param_1[iVar18].ClippingValue = param_1[iVar17].ClippingValue;
                pFVar1 = param_1 + iVar17;
                pFVar1->TimeSeconds = fVar7;
                pFVar1->MeterValue = fVar8;
                pFVar1->PeakValue = fVar9;
                pFVar1->NumSamplesClipping = iVar16;
                param_1[iVar17].ClippingValue = fVar3;
                iVar18 = iVar17;
              } while (iVar17 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar15 = lVar15 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar12 = iVar18 + -1;
      iVar13 = iVar17 + -2;
      iVar17 = iVar13;
      iVar18 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar16 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (param_1[(longlong)iVar13 + 2].TimeSeconds <= param_1[iVar16].TimeSeconds &&
          param_1[iVar16].TimeSeconds != param_1[(longlong)iVar13 + 2].TimeSeconds) {
        iVar16 = iVar13;
      }
      iVar16 = iVar16 + 1;
    }
    if (param_1[iVar16].TimeSeconds < param_1[iVar12].TimeSeconds ||
        param_1[iVar16].TimeSeconds == param_1[iVar12].TimeSeconds) goto LAB_14d81703f;
    pFVar14 = param_1 + iVar16;
    fVar5 = pFVar14->MeterValue;
    fVar6 = pFVar14->PeakValue;
    iVar13 = pFVar14->NumSamplesClipping;
    fVar3 = param_1[iVar12].ClippingValue;
    pFVar1 = param_1 + iVar12;
    fVar7 = pFVar1->TimeSeconds;
    fVar8 = pFVar1->MeterValue;
    fVar9 = pFVar1->PeakValue;
    iVar10 = pFVar1->NumSamplesClipping;
    pFVar1 = param_1 + iVar12;
    pFVar1->TimeSeconds = pFVar14->TimeSeconds;
    pFVar1->MeterValue = fVar5;
    pFVar1->PeakValue = fVar6;
    pFVar1->NumSamplesClipping = iVar13;
    param_1[iVar12].ClippingValue = param_1[iVar16].ClippingValue;
    iVar13 = iVar16 * 2 + 1;
    pFVar14 = param_1 + iVar16;
    pFVar14->TimeSeconds = fVar7;
    pFVar14->MeterValue = fVar8;
    pFVar14->PeakValue = fVar9;
    pFVar14->NumSamplesClipping = iVar10;
    param_1[iVar16].ClippingValue = fVar3;
    iVar12 = iVar16;
  } while( true );
}

// HeapSortInternal<FSynesthesiaSpectrumResults,int,FIdentityFunctor,TDereferenceWrapper<FSynesthesiaSpectrumResults,`ConvertToBlueprintResults'::__l2::<lambda_1>_>_> @ 14d817150

void __cdecl
AlgoImpl::
HeapSortInternal<FSynesthesiaSpectrumResults,int,FIdentityFunctor,TDereferenceWrapper<FSynesthesiaSpectrumResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
          (FSynesthesiaSpectrumResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSynesthesiaSpectrumResults,,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>___cdecl_ConvertToBlueprintResults(USynesthesiaSpectrumAnalysisSettings_*,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FSynesthesiaSpectrumResults *pFVar1;
  FSynesthesiaSpectrumResults *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FSynesthesiaSpectrumResults *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14d817266:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar16 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar15 = param_1 + lVar16;
          do {
            uVar6 = *(undefined4 *)&pFVar15->field_0x4;
            pFVar4 = (pFVar15->SpectrumValues).AllocatorInstance.Data;
            iVar13 = (param_1->SpectrumValues).ArrayNum;
            iVar19 = (param_1->SpectrumValues).ArrayMax;
            fVar8 = param_1->TimeSeconds;
            uVar9 = *(undefined4 *)&param_1->field_0x4;
            pFVar5 = (param_1->SpectrumValues).AllocatorInstance.Data;
            param_1->TimeSeconds = pFVar15->TimeSeconds;
            *(undefined4 *)&param_1->field_0x4 = uVar6;
            (param_1->SpectrumValues).AllocatorInstance.Data = pFVar4;
            iVar18 = (pFVar15->SpectrumValues).ArrayMax;
            (param_1->SpectrumValues).ArrayNum = (pFVar15->SpectrumValues).ArrayNum;
            (param_1->SpectrumValues).ArrayMax = iVar18;
            pFVar15->TimeSeconds = fVar8;
            *(undefined4 *)&pFVar15->field_0x4 = uVar9;
            (pFVar15->SpectrumValues).AllocatorInstance.Data = pFVar5;
            (pFVar15->SpectrumValues).ArrayNum = iVar13;
            (pFVar15->SpectrumValues).ArrayMax = iVar19;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar19 = iVar18 * 2;
                iVar13 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[(longlong)iVar19 + 2].TimeSeconds <= param_1[iVar13].TimeSeconds &&
                      param_1[iVar13].TimeSeconds != param_1[(longlong)iVar19 + 2].TimeSeconds) {
                    iVar13 = iVar19;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].TimeSeconds < param_1[iVar18].TimeSeconds ||
                    param_1[iVar13].TimeSeconds == param_1[iVar18].TimeSeconds) break;
                pFVar1 = param_1 + iVar13;
                uVar6 = *(undefined4 *)&pFVar1->field_0x4;
                pFVar4 = (pFVar1->SpectrumValues).AllocatorInstance.Data;
                iVar17 = param_1[iVar18].SpectrumValues.ArrayNum;
                iVar7 = param_1[iVar18].SpectrumValues.ArrayMax;
                pFVar2 = param_1 + iVar18;
                fVar8 = pFVar2->TimeSeconds;
                uVar9 = *(undefined4 *)&pFVar2->field_0x4;
                pFVar5 = (pFVar2->SpectrumValues).AllocatorInstance.Data;
                pFVar2 = param_1 + iVar18;
                pFVar2->TimeSeconds = pFVar1->TimeSeconds;
                *(undefined4 *)&pFVar2->field_0x4 = uVar6;
                (pFVar2->SpectrumValues).AllocatorInstance.Data = pFVar4;
                iVar19 = param_1[iVar13].SpectrumValues.ArrayMax;
                param_1[iVar18].SpectrumValues.ArrayNum = param_1[iVar13].SpectrumValues.ArrayNum;
                param_1[iVar18].SpectrumValues.ArrayMax = iVar19;
                pFVar1 = param_1 + iVar13;
                pFVar1->TimeSeconds = fVar8;
                *(undefined4 *)&pFVar1->field_0x4 = uVar9;
                (pFVar1->SpectrumValues).AllocatorInstance.Data = pFVar5;
                param_1[iVar13].SpectrumValues.ArrayNum = iVar17;
                param_1[iVar13].SpectrumValues.ArrayMax = iVar7;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].TimeSeconds <= param_1[iVar17].TimeSeconds &&
          param_1[iVar17].TimeSeconds != param_1[(longlong)iVar14 + 2].TimeSeconds) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar17].TimeSeconds < param_1[iVar13].TimeSeconds ||
        param_1[iVar17].TimeSeconds == param_1[iVar13].TimeSeconds) goto LAB_14d817266;
    pFVar15 = param_1 + iVar17;
    uVar6 = *(undefined4 *)&pFVar15->field_0x4;
    pFVar4 = (pFVar15->SpectrumValues).AllocatorInstance.Data;
    iVar14 = iVar17 * 2 + 1;
    iVar10 = param_1[iVar13].SpectrumValues.ArrayNum;
    iVar11 = param_1[iVar13].SpectrumValues.ArrayMax;
    pFVar1 = param_1 + iVar13;
    fVar8 = pFVar1->TimeSeconds;
    uVar9 = *(undefined4 *)&pFVar1->field_0x4;
    pFVar5 = (pFVar1->SpectrumValues).AllocatorInstance.Data;
    pFVar1 = param_1 + iVar13;
    pFVar1->TimeSeconds = pFVar15->TimeSeconds;
    *(undefined4 *)&pFVar1->field_0x4 = uVar6;
    (pFVar1->SpectrumValues).AllocatorInstance.Data = pFVar4;
    iVar7 = param_1[iVar17].SpectrumValues.ArrayMax;
    param_1[iVar13].SpectrumValues.ArrayNum = param_1[iVar17].SpectrumValues.ArrayNum;
    param_1[iVar13].SpectrumValues.ArrayMax = iVar7;
    pFVar15 = param_1 + iVar17;
    pFVar15->TimeSeconds = fVar8;
    *(undefined4 *)&pFVar15->field_0x4 = uVar9;
    (pFVar15->SpectrumValues).AllocatorInstance.Data = pFVar5;
    param_1[iVar17].SpectrumValues.ArrayNum = iVar10;
    param_1[iVar17].SpectrumValues.ArrayMax = iVar11;
    iVar13 = iVar17;
  } while( true );
}

// InternalConstructor<UAudioSynesthesiaNRT> @ 14d817380

void __cdecl InternalConstructor<UAudioSynesthesiaNRT>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRT *this;
  
  this = (UAudioAnalyzerNRT *)param_1->Obj;
  if (this != (UAudioAnalyzerNRT *)0x0) {
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,param_1);
    this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  }
  return;
}

// InternalConstructor<UAudioSynesthesiaNRTSettings> @ 14d8173b0

void __cdecl InternalConstructor<UAudioSynesthesiaNRTSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRTSettings *this;
  
  this = (UAudioAnalyzerNRTSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerNRTSettings *)0x0) {
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings(this,param_1);
    *(undefined ***)this = &___7UAudioSynesthesiaNRTSettings__6B_;
  }
  return;
}

// InternalConstructor<UAudioSynesthesiaSettings> @ 14d8173e0

void __cdecl InternalConstructor<UAudioSynesthesiaSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerSettings *this;
  
  this = (UAudioAnalyzerSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerSettings *)0x0) {
    UAudioAnalyzerSettings::UAudioAnalyzerSettings(this,param_1);
    *(undefined ***)this = &___7UAudioSynesthesiaSettings__6B_;
  }
  return;
}

// InternalConstructor<UConstantQAnalyzer> @ 14d817410

void __cdecl InternalConstructor<UConstantQAnalyzer>(FObjectInitializer *param_1)

{
  UAudioAnalyzer *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzer *)param_1->Obj;
  if (this != (UAudioAnalyzer *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzer::UAudioAnalyzer(this,pFVar2);
    this->_padding_ = (longlong)&___7UConstantQAnalyzer__6B_;
    this[1].AudioAnalyzerSubsystem.field0_0x0 = (TObjectPtr<UAudioAnalyzerSubsystem>_u_0)0x2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    this[1].ResultsInternal.Ptr = (IAnalyzerResult *)0x0;
    this[1].AnalyzerControls.Object = (IAnalyzerControls *)0x2;
    pFVar3 = FName::FName(&local_res8,L"DefaultConstantQSettings");
    FVar1 = *pFVar3;
    pUVar4 = UConstantQSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalConstructor<UConstantQNRT> @ 14d817520

void __cdecl InternalConstructor<UConstantQNRT>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRT *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzerNRT *)param_1->Obj;
  if (this != (UAudioAnalyzerNRT *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,pFVar2);
    this->_padding_ = (longlong)&___7UConstantQNRT__6B_;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,L"DefaultConstantQNRTSettings");
    FVar1 = *pFVar3;
    pUVar4 = UConstantQNRTSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalConstructor<UConstantQNRTSettings> @ 14d8175c0

void __cdecl InternalConstructor<UConstantQNRTSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRTSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerNRTSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerNRTSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings(this,pFVar1);
    *(undefined4 *)(this + 1) = 0x42200000;
    *(undefined ***)this = &___7UConstantQNRTSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x30;
    *(undefined4 *)&this[1].field_0x8 = 0x41400000;
    *(undefined4 *)&this[1].field_0xc = 0x3c23d70a;
    *(undefined4 *)&this[1].field_0x10 = 0x1030600;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
    this[1].field_0x18 = 1;
    *(undefined4 *)&this[1].field_0x1c = 0xc2700000;
  }
  return;
}

// InternalConstructor<UConstantQSettings> @ 14d817630

void __cdecl InternalConstructor<UConstantQSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerSettings::UAudioAnalyzerSettings(this,pFVar1);
    *(undefined4 *)(this + 1) = 0x42200000;
    *(undefined ***)this = &___7UConstantQSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x30;
    *(undefined4 *)&this[1].field_0x8 = 0x41400000;
    *(undefined4 *)&this[1].field_0xc = 0x3c23d70a;
    *(undefined4 *)&this[1].field_0x10 = 0x1030600;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
    this[1].field_0x18 = 1;
    *(undefined4 *)&this[1].field_0x1c = 0xc2700000;
  }
  return;
}

// InternalConstructor<ULKFSAnalyzer> @ 14d8176a0

void __cdecl InternalConstructor<ULKFSAnalyzer>(FObjectInitializer *param_1)

{
  UAudioAnalyzer *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzer *)param_1->Obj;
  if (this != (UAudioAnalyzer *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzer::UAudioAnalyzer(this,pFVar2);
    this->_padding_ = (longlong)&___7ULKFSAnalyzer__6B_;
    this[1].AudioAnalyzerSubsystem.field0_0x0 = (TObjectPtr<UAudioAnalyzerSubsystem>_u_0)0x2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    this[1].ResultsInternal.Ptr = (IAnalyzerResult *)0x0;
    this[1].AnalyzerControls.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AnalysisBuffer.ArrayNum = 0;
    this[1].AnalysisBuffer.ArrayMax = 0;
    this[1].AudioMixerSampleRate = 0;
    this[1].NumBusChannels = 0;
    this[1].AnalyzerFactory = (IAnalyzerFactory *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[2].NumFramesPerBufferToAnalyze = 0;
    this[2].AudioAnalyzerSubsystem.field0_0x0.DebugPtr = (UAudioAnalyzerSubsystem *)0x0;
    this[1].AnalyzerControls.Object = (IAnalyzerControls *)0x2;
    this[2]._padding_ = 2;
    this[2].PatchOutputStrongPtr.Object = (FPatchOutput *)0x2;
    pFVar3 = FName::FName(&local_res8,L"DefaultLKFSSettings");
    FVar1 = *pFVar3;
    pUVar4 = ULKFSSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalConstructor<ULKFSNRT> @ 14d817820

void __cdecl InternalConstructor<ULKFSNRT>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRT *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzerNRT *)param_1->Obj;
  if (this != (UAudioAnalyzerNRT *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,pFVar2);
    this->_padding_ = (longlong)&___7ULKFSNRT__6B_;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,L"DefaultLKFSNRTSettings");
    FVar1 = *pFVar3;
    pUVar4 = ULKFSNRTSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalConstructor<ULKFSNRTSettings> @ 14d8178c0

void __cdecl InternalConstructor<ULKFSNRTSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRTSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerNRTSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerNRTSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings(this,pFVar1);
    *(undefined4 *)(this + 1) = 0x3dcccccd;
    *(undefined ***)this = &___7ULKFSNRTSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x8 = 0x40400000;
  }
  return;
}

// InternalConstructor<ULKFSSettings> @ 14d817910

void __cdecl InternalConstructor<ULKFSSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerSettings::UAudioAnalyzerSettings(this,pFVar1);
    *(undefined4 *)(this + 1) = 0x3dcccccd;
    *(undefined ***)this = &___7ULKFSSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x3ecccccd;
    *(undefined4 *)&this[1].field_0x8 = 0x40400000;
    *(undefined4 *)&this[1].field_0xc = 0x3f800000;
    *(undefined4 *)&this[1].field_0x10 = 0x42700000;
  }
  return;
}

// InternalConstructor<ULoudnessAnalyzer> @ 14d817970

void __cdecl InternalConstructor<ULoudnessAnalyzer>(FObjectInitializer *param_1)

{
  UAudioAnalyzer *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzer *)param_1->Obj;
  if (this != (UAudioAnalyzer *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzer::UAudioAnalyzer(this,pFVar2);
    this->_padding_ = (longlong)&___7ULoudnessAnalyzer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].AudioAnalyzerSubsystem.field0_0x0.DebugPtr = (UAudioAnalyzerSubsystem *)0x0;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    pFVar3 = FName::FName(&local_res8,L"DefaultLoudnessSettings");
    FVar1 = *pFVar3;
    pUVar4 = ULoudnessSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalConstructor<ULoudnessNRT> @ 14d817a70

void __cdecl InternalConstructor<ULoudnessNRT>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRT *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzerNRT *)param_1->Obj;
  if (this != (UAudioAnalyzerNRT *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,pFVar2);
    this->_padding_ = (longlong)&___7ULoudnessNRT__6B_;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,L"DefaultLoudnessNRTSettings");
    FVar1 = *pFVar3;
    pUVar4 = ULoudnessNRTSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalConstructor<ULoudnessNRTSettings> @ 14d817b10

void __cdecl InternalConstructor<ULoudnessNRTSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRTSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerNRTSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerNRTSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings(this,pFVar1);
    *(undefined4 *)(this + 1) = 0x3c23d70a;
    *(undefined ***)this = &___7ULoudnessNRTSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x41a00000;
    *(undefined4 *)&this[1].field_0x8 = 0x469c4000;
    this[1].field_0xc = 3;
    *(undefined4 *)&this[1].field_0x10 = 0xc2700000;
  }
  return;
}

// InternalConstructor<ULoudnessSettings> @ 14d817b70

void __cdecl InternalConstructor<ULoudnessSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerSettings::UAudioAnalyzerSettings(this,pFVar1);
    *(undefined4 *)(this + 1) = 0x3c23d70a;
    *(undefined ***)this = &___7ULoudnessSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x41a00000;
    *(undefined4 *)&this[1].field_0x8 = 0x469c4000;
    this[1].field_0xc = 3;
    *(undefined4 *)&this[1].field_0x10 = 0xc2700000;
    *(undefined4 *)&this[1].field_0x14 = 0;
  }
  return;
}

// InternalConstructor<UMeterAnalyzer> @ 14d817bd0

void __cdecl InternalConstructor<UMeterAnalyzer>(FObjectInitializer *param_1)

{
  UAudioAnalyzer *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzer *)param_1->Obj;
  if (this != (UAudioAnalyzer *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzer::UAudioAnalyzer(this,pFVar2);
    this->_padding_ = (longlong)&___7UMeterAnalyzer__6B_;
    this[1].AudioAnalyzerSubsystem.field0_0x0 = (TObjectPtr<UAudioAnalyzerSubsystem>_u_0)0x2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    this[1].ResultsInternal.Ptr = (IAnalyzerResult *)0x0;
    this[1].AnalyzerControls.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AnalysisBuffer.ArrayNum = 0;
    this[1].AnalysisBuffer.ArrayMax = 0;
    this[1].AudioMixerSampleRate = 0;
    this[1].NumBusChannels = 0;
    this[1].AnalyzerFactory = (IAnalyzerFactory *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[2].NumFramesPerBufferToAnalyze = 0;
    this[2].AudioAnalyzerSubsystem.field0_0x0.DebugPtr = (UAudioAnalyzerSubsystem *)0x0;
    this[1].AnalyzerControls.Object = (IAnalyzerControls *)0x2;
    this[2]._padding_ = 2;
    this[2].PatchOutputStrongPtr.Object = (FPatchOutput *)0x2;
    pFVar3 = FName::FName(&local_res8,L"DefaultMeterSettings");
    FVar1 = *pFVar3;
    pUVar4 = UMeterSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalConstructor<UMeterSettings> @ 14d817d50

void __cdecl InternalConstructor<UMeterSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerSettings::UAudioAnalyzerSettings(this,pFVar1);
    *(undefined4 *)(this + 1) = 0x3c23d70a;
    *(undefined ***)this = &___7UMeterSettings__6B_;
    this[1].field_0x4 = 1;
    *(undefined4 *)&this[1].field_0x8 = 300;
    *(undefined4 *)&this[1].field_0xc = 300;
    *(undefined4 *)&this[1].field_0x10 = 100;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UOnsetNRT> @ 14d817db0

void __cdecl InternalConstructor<UOnsetNRT>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRT *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzerNRT *)param_1->Obj;
  if (this != (UAudioAnalyzerNRT *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,pFVar2);
    this->_padding_ = (longlong)&___7UOnsetNRT__6B_;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,L"DefaultOnsetNRTSettings");
    FVar1 = *pFVar3;
    pUVar4 = UOnsetNRTSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalConstructor<UOnsetNRTSettings> @ 14d817e50

void __cdecl InternalConstructor<UOnsetNRTSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerNRTSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerNRTSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerNRTSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings(this,pFVar1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UOnsetNRTSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x3c23d70a;
    *(undefined4 *)&this[1].field_0x8 = 0x3f000000;
    *(undefined4 *)&this[1].field_0xc = 0x41a00000;
    *(undefined4 *)&this[1].field_0x10 = 0x467a0000;
  }
  return;
}

// InternalConstructor<USynesthesiaSpectrumAnalysisSettings> @ 14d817eb0

void __cdecl InternalConstructor<USynesthesiaSpectrumAnalysisSettings>(FObjectInitializer *param_1)

{
  UAudioAnalyzerSettings *this;
  FObjectInitializer *pFVar1;
  
  this = (UAudioAnalyzerSettings *)param_1->Obj;
  if (this != (UAudioAnalyzerSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAudioAnalyzerSettings::UAudioAnalyzerSettings(this,pFVar1);
    *(undefined4 *)(this + 1) = 0x3c23d70a;
    *(undefined ***)this = &___7USynesthesiaSpectrumAnalysisSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x1020100;
  }
  return;
}

// InternalConstructor<USynesthesiaSpectrumAnalyzer> @ 14d817f00

void __cdecl InternalConstructor<USynesthesiaSpectrumAnalyzer>(FObjectInitializer *param_1)

{
  UAudioAnalyzer *this;
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (UAudioAnalyzer *)param_1->Obj;
  if (this != (UAudioAnalyzer *)0x0) {
    pFVar2 = FObjectInitializer::Get();
    UAudioAnalyzer::UAudioAnalyzer(this,pFVar2);
    this->_padding_ = (longlong)&___7USynesthesiaSpectrumAnalyzer__6B_;
    this[1].AudioAnalyzerSubsystem.field0_0x0 = (TObjectPtr<UAudioAnalyzerSubsystem>_u_0)0x2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    this[1].ResultsInternal.Ptr = (IAnalyzerResult *)0x0;
    this[1].AnalyzerControls.Object = (IAnalyzerControls *)0x2;
    pFVar3 = FName::FName(&local_res8,L"DefaultSynesthesiaSpectrumSettings");
    FVar1 = *pFVar3;
    pUVar4 = USynesthesiaSpectrumAnalysisSettings::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioSynesthesiaNRT> @ 14d818010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioSynesthesiaNRT>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzerNRT *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioSynesthesiaNRT::GetPrivateStaticClass();
  this = (UAudioAnalyzerNRT *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzerNRT *)0x0) {
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,param_1);
    this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioSynesthesiaNRTSettings> @ 14d8180c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioSynesthesiaNRTSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioSynesthesiaNRTSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings
              ((UAudioAnalyzerNRTSettings *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioSynesthesiaNRTSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioSynesthesiaSettings> @ 14d818170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioSynesthesiaSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioSynesthesiaSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioSynesthesiaSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConstantQAnalyzer> @ 14d818220

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConstantQAnalyzer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConstantQAnalyzer::GetPrivateStaticClass();
  this = (UAudioAnalyzer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzer *)0x0) {
    UAudioAnalyzer::UAudioAnalyzer(this,param_1);
    this->_padding_ = (longlong)&___7UConstantQAnalyzer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].AudioAnalyzerSubsystem.field0_0x0 = (TObjectPtr<UAudioAnalyzerSubsystem>_u_0)0x2;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    this[1].ResultsInternal.Ptr = (IAnalyzerResult *)0x0;
    this[1].AnalyzerControls.Object = (IAnalyzerControls *)0x2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConstantQNRT> @ 14d818340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConstantQNRT>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzerNRT *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConstantQNRT::GetPrivateStaticClass();
  this = (UAudioAnalyzerNRT *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzerNRT *)0x0) {
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,param_1);
    this->_padding_ = (longlong)&___7UConstantQNRT__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConstantQNRTSettings> @ 14d8183f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConstantQNRTSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConstantQNRTSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings
              ((UAudioAnalyzerNRTSettings *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UConstantQNRTSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConstantQSettings> @ 14d8184a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConstantQSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConstantQSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x42200000;
    *(undefined ***)pUVar1 = &___7UConstantQSettings__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x30;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x41400000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3c23d70a;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x1030600;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0x3f800000;
    pUVar1[1].field_0x18 = 1;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0xc2700000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULKFSAnalyzer> @ 14d818580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULKFSAnalyzer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULKFSAnalyzer::GetPrivateStaticClass();
  this = (UAudioAnalyzer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzer *)0x0) {
    UAudioAnalyzer::UAudioAnalyzer(this,param_1);
    this->_padding_ = (longlong)&___7ULKFSAnalyzer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].AudioAnalyzerSubsystem.field0_0x0 = (TObjectPtr<UAudioAnalyzerSubsystem>_u_0)0x2;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    this[1].ResultsInternal.Ptr = (IAnalyzerResult *)0x0;
    this[1].AnalyzerControls.Object = (IAnalyzerControls *)0x2;
    this[1].AnalyzerControls.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AnalysisBuffer.ArrayNum = 0;
    this[1].AnalysisBuffer.ArrayMax = 0;
    this[1].AudioMixerSampleRate = 0;
    this[1].NumBusChannels = 0;
    this[1].AnalyzerFactory = (IAnalyzerFactory *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[2].NumFramesPerBufferToAnalyze = 0;
    this[2].AudioAnalyzerSubsystem.field0_0x0.DebugPtr = (UAudioAnalyzerSubsystem *)0x0;
    this[2].PatchOutputStrongPtr.Object = (FPatchOutput *)0x2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULKFSNRT> @ 14d818710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULKFSNRT>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzerNRT *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULKFSNRT::GetPrivateStaticClass();
  this = (UAudioAnalyzerNRT *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzerNRT *)0x0) {
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,param_1);
    this->_padding_ = (longlong)&___7ULKFSNRT__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULKFSNRTSettings> @ 14d8187c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULKFSNRTSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULKFSNRTSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings
              ((UAudioAnalyzerNRTSettings *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3dcccccd;
    *(undefined ***)pUVar1 = &___7ULKFSNRTSettings__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3ecccccd;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x40400000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULKFSSettings> @ 14d818880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULKFSSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULKFSSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3dcccccd;
    *(undefined ***)pUVar1 = &___7ULKFSSettings__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3ecccccd;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x40400000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x42700000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULoudnessAnalyzer> @ 14d818950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULoudnessAnalyzer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULoudnessAnalyzer::GetPrivateStaticClass();
  this = (UAudioAnalyzer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzer *)0x0) {
    UAudioAnalyzer::UAudioAnalyzer(this,param_1);
    this->_padding_ = (longlong)&___7ULoudnessAnalyzer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].AudioAnalyzerSubsystem.field0_0x0.DebugPtr = (UAudioAnalyzerSubsystem *)0x0;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULoudnessNRT> @ 14d818a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULoudnessNRT>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzerNRT *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULoudnessNRT::GetPrivateStaticClass();
  this = (UAudioAnalyzerNRT *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzerNRT *)0x0) {
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,param_1);
    this->_padding_ = (longlong)&___7ULoudnessNRT__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULoudnessNRTSettings> @ 14d818b10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULoudnessNRTSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULoudnessNRTSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings
              ((UAudioAnalyzerNRTSettings *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULoudnessNRTSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULoudnessSettings> @ 14d818bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULoudnessSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULoudnessSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3c23d70a;
    *(undefined ***)pUVar1 = &___7ULoudnessSettings__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x41a00000;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x469c4000;
    pUVar1[1].field_0xc = 3;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xc2700000;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeterAnalyzer> @ 14d818c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeterAnalyzer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeterAnalyzer::GetPrivateStaticClass();
  this = (UAudioAnalyzer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzer *)0x0) {
    UAudioAnalyzer::UAudioAnalyzer(this,param_1);
    this->_padding_ = (longlong)&___7UMeterAnalyzer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].AudioAnalyzerSubsystem.field0_0x0 = (TObjectPtr<UAudioAnalyzerSubsystem>_u_0)0x2;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    this[1].ResultsInternal.Ptr = (IAnalyzerResult *)0x0;
    this[1].AnalyzerControls.Object = (IAnalyzerControls *)0x2;
    this[1].AnalyzerControls.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AnalysisBuffer.ArrayNum = 0;
    this[1].AnalysisBuffer.ArrayMax = 0;
    this[1].AudioMixerSampleRate = 0;
    this[1].NumBusChannels = 0;
    this[1].AnalyzerFactory = (IAnalyzerFactory *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[2].NumFramesPerBufferToAnalyze = 0;
    this[2].AudioAnalyzerSubsystem.field0_0x0.DebugPtr = (UAudioAnalyzerSubsystem *)0x0;
    this[2].PatchOutputStrongPtr.Object = (FPatchOutput *)0x2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeterSettings> @ 14d818e20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeterSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeterSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3c23d70a;
    *(undefined ***)pUVar1 = &___7UMeterSettings__6B_;
    pUVar1[1].field_0x4 = 1;
    *(undefined4 *)&pUVar1[1].field_0x8 = 300;
    *(undefined4 *)&pUVar1[1].field_0xc = 300;
    *(undefined4 *)&pUVar1[1].field_0x10 = 100;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnsetNRT> @ 14d818f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOnsetNRT>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzerNRT *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnsetNRT::GetPrivateStaticClass();
  this = (UAudioAnalyzerNRT *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzerNRT *)0x0) {
    UAudioAnalyzerNRT::UAudioAnalyzerNRT(this,param_1);
    this->_padding_ = (longlong)&___7UOnsetNRT__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnsetNRTSettings> @ 14d818fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOnsetNRTSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnsetNRTSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings
              ((UAudioAnalyzerNRTSettings *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOnsetNRTSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalysisSettings> @ 14d819060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalysisSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynesthesiaSpectrumAnalysisSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3c23d70a;
    *(undefined ***)pUVar1 = &___7USynesthesiaSpectrumAnalysisSettings__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x1020100;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalyzer> @ 14d819120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalyzer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioAnalyzer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USynesthesiaSpectrumAnalyzer::GetPrivateStaticClass();
  this = (UAudioAnalyzer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioAnalyzer *)0x0) {
    UAudioAnalyzer::UAudioAnalyzer(this,param_1);
    this->_padding_ = (longlong)&___7USynesthesiaSpectrumAnalyzer__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].AudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
    *(undefined8 *)&this[1].NumFramesPerBufferToAnalyze = 0;
    this[1].AudioAnalyzerSubsystem.field0_0x0 = (TObjectPtr<UAudioAnalyzerSubsystem>_u_0)0x2;
    this[1].PatchOutputStrongPtr.Object = (FPatchOutput *)0x0;
    this[1].PatchOutputStrongPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalysisTask.Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    this[1].AnalysisTask.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].AnalyzerFacade.Ptr = (FAnalyzerFacade *)0x0;
    this[1].ResultsInternal.Ptr = (IAnalyzerResult *)0x0;
    this[1].AnalyzerControls.Object = (IAnalyzerControls *)0x2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FConstantQResults,int,FIdentityFunctor,TDereferenceWrapper<FConstantQResults,`ConvertToBlueprintResults'::__l2::<lambda_1>_>_> @ 14d819240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FConstantQResults,int,FIdentityFunctor,TDereferenceWrapper<FConstantQResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
          (FConstantQResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FConstantQResults,,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>___cdecl_ConvertToBlueprintResults(UConstantQSettings_*,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FConstantQResults *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FConstantQResults *pFVar10;
  int iVar11;
  FConstantQResults *pFVar12;
  FConstantQResults *pFVar13;
  FConstantQResults *pFVar14;
  FConstantQResults *pFVar15;
  FConstantQResults *pFVar16;
  FConstantQResults **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FConstantQResults *local_348;
  FConstantQResults *local_338;
  FConstantQResults *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar13 = ppFVar17[1];
      pFVar10 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar10) / 0x18) + 1;
      pFVar16 = pFVar10;
      if ((int)local_348 != 0) {
LAB_14d819310:
        if (8 < iVar11) {
          uVar4 = *(undefined4 *)&pFVar16->field_0x4;
          pFVar2 = (pFVar16->SpectrumValues).AllocatorInstance.Data;
          pFVar12 = pFVar13 + 1;
          iVar11 = iVar11 / 2;
          pFVar10 = pFVar16 + iVar11;
          fVar18 = pFVar10->TimeSeconds;
          uVar6 = *(undefined4 *)&pFVar10->field_0x4;
          pFVar3 = (pFVar10->SpectrumValues).AllocatorInstance.Data;
          iVar7 = pFVar16[iVar11].SpectrumValues.ArrayNum;
          iVar8 = pFVar16[iVar11].SpectrumValues.ArrayMax;
          pFVar10 = pFVar16 + iVar11;
          pFVar10->TimeSeconds = pFVar16->TimeSeconds;
          *(undefined4 *)&pFVar10->field_0x4 = uVar4;
          (pFVar10->SpectrumValues).AllocatorInstance.Data = pFVar2;
          iVar5 = (pFVar16->SpectrumValues).ArrayMax;
          pFVar16[iVar11].SpectrumValues.ArrayNum = (pFVar16->SpectrumValues).ArrayNum;
          pFVar16[iVar11].SpectrumValues.ArrayMax = iVar5;
          pFVar16->TimeSeconds = fVar18;
          *(undefined4 *)&pFVar16->field_0x4 = uVar6;
          (pFVar16->SpectrumValues).AllocatorInstance.Data = pFVar3;
          (pFVar16->SpectrumValues).ArrayNum = iVar7;
          (pFVar16->SpectrumValues).ArrayMax = iVar8;
          pFVar10 = pFVar16;
LAB_14d819360:
          pFVar14 = pFVar10;
          pFVar10 = pFVar14 + 1;
          if (pFVar10 <= pFVar13) goto code_r0x00014d819369;
          goto LAB_14d819374;
        }
        if (pFVar16 < pFVar13) {
          pFVar1 = pFVar16 + 1;
          do {
            pFVar10 = pFVar16;
            if (pFVar1 <= pFVar13) {
              pFVar12 = pFVar1;
              if (0x5f < (ulonglong)((longlong)pFVar13 + (0x18 - (longlong)pFVar1))) {
                do {
                  fVar18 = pFVar10->TimeSeconds;
                  if (pFVar10->TimeSeconds < pFVar12->TimeSeconds) {
                    pFVar10 = pFVar12;
                    fVar18 = pFVar12->TimeSeconds;
                  }
                  if (fVar18 < pFVar12[1].TimeSeconds) {
                    pFVar10 = pFVar12 + 1;
                  }
                  fVar18 = pFVar10->TimeSeconds;
                  if (pFVar10->TimeSeconds < pFVar12[2].TimeSeconds) {
                    pFVar10 = pFVar12 + 2;
                    fVar18 = pFVar12[2].TimeSeconds;
                  }
                  if (fVar18 < pFVar12[3].TimeSeconds) {
                    pFVar10 = pFVar12 + 3;
                  }
                  pFVar12 = pFVar12 + 4;
                } while (pFVar12 <= pFVar13 + -3);
              }
              for (; pFVar12 <= pFVar13; pFVar12 = pFVar12 + 1) {
                if (pFVar10->TimeSeconds < pFVar12->TimeSeconds) {
                  pFVar10 = pFVar12;
                }
              }
            }
            fVar18 = pFVar10->TimeSeconds;
            uVar6 = *(undefined4 *)&pFVar10->field_0x4;
            pFVar2 = (pFVar10->SpectrumValues).AllocatorInstance.Data;
            pFVar12 = pFVar13 + -1;
            iVar5 = (pFVar10->SpectrumValues).ArrayNum;
            iVar7 = (pFVar10->SpectrumValues).ArrayMax;
            uVar4 = *(undefined4 *)&pFVar13->field_0x4;
            pFVar3 = (pFVar13->SpectrumValues).AllocatorInstance.Data;
            pFVar10->TimeSeconds = pFVar13->TimeSeconds;
            *(undefined4 *)&pFVar10->field_0x4 = uVar4;
            (pFVar10->SpectrumValues).AllocatorInstance.Data = pFVar3;
            iVar11 = (pFVar13->SpectrumValues).ArrayMax;
            (pFVar10->SpectrumValues).ArrayNum = (pFVar13->SpectrumValues).ArrayNum;
            (pFVar10->SpectrumValues).ArrayMax = iVar11;
            pFVar13->TimeSeconds = fVar18;
            *(undefined4 *)&pFVar13->field_0x4 = uVar6;
            (pFVar13->SpectrumValues).AllocatorInstance.Data = pFVar2;
            (pFVar13->SpectrumValues).ArrayNum = iVar5;
            (pFVar13->SpectrumValues).ArrayMax = iVar7;
            pFVar13 = pFVar12;
          } while (pFVar16 < pFVar12);
        }
        goto LAB_14d819497;
      }
LAB_14d819488:
      local_348 = pFVar1;
      HeapSortInternal<FConstantQResults,int,FIdentityFunctor,TDereferenceWrapper<FConstantQResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
                (pFVar10,iVar11,param_3,param_4);
LAB_14d819497:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014d819369:
  if (pFVar10->TimeSeconds < pFVar16->TimeSeconds || pFVar10->TimeSeconds == pFVar16->TimeSeconds)
  goto LAB_14d819360;
LAB_14d819374:
  do {
    pFVar15 = pFVar12;
    pFVar12 = pFVar15 + -1;
    if (pFVar12 <= pFVar16) break;
  } while (pFVar16->TimeSeconds < pFVar12->TimeSeconds ||
           pFVar16->TimeSeconds == pFVar12->TimeSeconds);
  pFVar2 = pFVar15[-1].SpectrumValues.AllocatorInstance.Data;
  if (pFVar10 <= pFVar12) {
    fVar18 = pFVar10->TimeSeconds;
    uVar4 = *(undefined4 *)&pFVar10->field_0x4;
    pFVar3 = pFVar14[1].SpectrumValues.AllocatorInstance.Data;
    iVar5 = pFVar14[1].SpectrumValues.ArrayNum;
    iVar7 = pFVar14[1].SpectrumValues.ArrayMax;
    *(undefined8 *)pFVar10 = *(undefined8 *)pFVar12;
    pFVar14[1].SpectrumValues.AllocatorInstance.Data = pFVar2;
    iVar11 = pFVar15[-1].SpectrumValues.ArrayMax;
    pFVar14[1].SpectrumValues.ArrayNum = pFVar15[-1].SpectrumValues.ArrayNum;
    pFVar14[1].SpectrumValues.ArrayMax = iVar11;
    pFVar12->TimeSeconds = fVar18;
    *(undefined4 *)&pFVar12->field_0x4 = uVar4;
    pFVar15[-1].SpectrumValues.AllocatorInstance.Data = pFVar3;
    pFVar15[-1].SpectrumValues.ArrayNum = iVar5;
    pFVar15[-1].SpectrumValues.ArrayMax = iVar7;
    goto LAB_14d819360;
  }
  fVar18 = pFVar16->TimeSeconds;
  uVar4 = *(undefined4 *)&pFVar16->field_0x4;
  pFVar3 = (pFVar16->SpectrumValues).AllocatorInstance.Data;
  iVar5 = (pFVar16->SpectrumValues).ArrayNum;
  iVar7 = (pFVar16->SpectrumValues).ArrayMax;
  lVar9 = (longlong)pFVar12 + (-0x18 - (longlong)pFVar16);
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
  (pFVar16->SpectrumValues).AllocatorInstance.Data = pFVar2;
  iVar11 = pFVar15[-1].SpectrumValues.ArrayMax;
  (pFVar16->SpectrumValues).ArrayNum = pFVar15[-1].SpectrumValues.ArrayNum;
  (pFVar16->SpectrumValues).ArrayMax = iVar11;
  pFVar12->TimeSeconds = fVar18;
  *(undefined4 *)&pFVar12->field_0x4 = uVar4;
  pFVar15[-1].SpectrumValues.AllocatorInstance.Data = pFVar3;
  pFVar15[-1].SpectrumValues.ArrayNum = iVar5;
  pFVar15[-1].SpectrumValues.ArrayMax = iVar7;
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)pFVar13 - (longlong)pFVar10) / 0x18) {
    if (pFVar10 < pFVar13) {
      *ppFVar17 = pFVar10;
      ppFVar17[1] = pFVar13;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar12 <= pFVar16 + 1) goto LAB_14d819497;
    pFVar13 = pFVar15 + -2;
    pFVar10 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar12) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar15 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar10) goto LAB_14d819497;
  }
  iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar10) / 0x18) + 1;
  pFVar16 = pFVar10;
  if ((int)local_348 == 0) goto LAB_14d819488;
  goto LAB_14d819310;
}

// IntroSortInternal<FLoudnessResults,int,FIdentityFunctor,TDereferenceWrapper<FLoudnessResults,`ConvertToBlueprintResults'::__l2::FCompareLoudnessResults>_> @ 14d8195c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FLoudnessResults,int,FIdentityFunctor,TDereferenceWrapper<FLoudnessResults,_ConvertToBlueprintResults_::__l2::FCompareLoudnessResults>_>
          (FLoudnessResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FLoudnessResults,,TArray<FLoudnessResults,TSizedDefaultAllocator<32>_>___cdecl_ConvertToBlueprintResults(ULoudnessSettings_*,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FCompareLoudnessResults>
          param_4)

{
  FLoudnessResults *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  FLoudnessResults *pFVar13;
  FLoudnessResults *pFVar14;
  FLoudnessResults *pFVar15;
  FLoudnessResults **ppFVar16;
  FLoudnessResults *pFVar17;
  FLoudnessResults *pFVar18;
  FLoudnessResults *pFVar19;
  float fVar20;
  undefined1 auStack_368 [48];
  FLoudnessResults *local_338;
  FLoudnessResults *local_328;
  FLoudnessResults *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar20;
    memset(local_310,0,0x2e8);
    ppFVar16 = &local_328;
    do {
      pFVar18 = ppFVar16[1];
      pFVar15 = *ppFVar16;
      pFVar1 = ppFVar16[2];
      iVar12 = (int)((longlong)pFVar18 - (longlong)pFVar15 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar19 = pFVar15;
      if ((int)local_338 != 0) {
LAB_14d819670:
        if (8 < iVar12) {
          fVar20 = pFVar19->NormalizedLoudness;
          fVar6 = pFVar19->PerceptualEnergy;
          fVar7 = pFVar19->TimeSeconds;
          pFVar13 = pFVar18 + 1;
          pFVar15 = pFVar19 + iVar12 / 2;
          fVar8 = pFVar15->Loudness;
          fVar9 = pFVar15->NormalizedLoudness;
          fVar10 = pFVar15->PerceptualEnergy;
          fVar11 = pFVar15->TimeSeconds;
          pFVar15 = pFVar19 + iVar12 / 2;
          pFVar15->Loudness = pFVar19->Loudness;
          pFVar15->NormalizedLoudness = fVar20;
          pFVar15->PerceptualEnergy = fVar6;
          pFVar15->TimeSeconds = fVar7;
          pFVar19->Loudness = fVar8;
          pFVar19->NormalizedLoudness = fVar9;
          pFVar19->PerceptualEnergy = fVar10;
          pFVar19->TimeSeconds = fVar11;
          pFVar15 = pFVar19;
LAB_14d8196a0:
          pFVar14 = pFVar15;
          pFVar15 = pFVar14 + 1;
          if (pFVar15 <= pFVar18) goto code_r0x00014d8196a9;
          goto LAB_14d8196b5;
        }
        if (pFVar19 < pFVar18) {
          pFVar1 = pFVar19 + 1;
          do {
            pFVar15 = pFVar19;
            if (pFVar1 <= pFVar18) {
              pFVar13 = pFVar1;
              if (0x3f < ((longlong)pFVar18 + (0x10 - (longlong)pFVar1) & 0xfffffffffffffff0U)) {
                do {
                  if (pFVar15->TimeSeconds < pFVar13->TimeSeconds) {
                    pFVar15 = pFVar13;
                  }
                  if (pFVar15->TimeSeconds <= pFVar13[1].TimeSeconds &&
                      pFVar13[1].TimeSeconds != pFVar15->TimeSeconds) {
                    pFVar15 = pFVar13 + 1;
                  }
                  if (pFVar15->TimeSeconds <= pFVar13[2].TimeSeconds &&
                      pFVar13[2].TimeSeconds != pFVar15->TimeSeconds) {
                    pFVar15 = pFVar13 + 2;
                  }
                  if (pFVar15->TimeSeconds <= pFVar13[3].TimeSeconds &&
                      pFVar13[3].TimeSeconds != pFVar15->TimeSeconds) {
                    pFVar15 = pFVar13 + 3;
                  }
                  pFVar13 = pFVar13 + 4;
                } while (pFVar13 <= pFVar18 + -3);
              }
              for (; pFVar13 <= pFVar18; pFVar13 = pFVar13 + 1) {
                if (pFVar15->TimeSeconds < pFVar13->TimeSeconds) {
                  pFVar15 = pFVar13;
                }
              }
            }
            fVar8 = pFVar15->Loudness;
            fVar9 = pFVar15->NormalizedLoudness;
            fVar10 = pFVar15->PerceptualEnergy;
            fVar11 = pFVar15->TimeSeconds;
            pFVar13 = pFVar18 + -1;
            fVar20 = pFVar18->NormalizedLoudness;
            fVar6 = pFVar18->PerceptualEnergy;
            fVar7 = pFVar18->TimeSeconds;
            pFVar15->Loudness = pFVar18->Loudness;
            pFVar15->NormalizedLoudness = fVar20;
            pFVar15->PerceptualEnergy = fVar6;
            pFVar15->TimeSeconds = fVar7;
            pFVar18->Loudness = fVar8;
            pFVar18->NormalizedLoudness = fVar9;
            pFVar18->PerceptualEnergy = fVar10;
            pFVar18->TimeSeconds = fVar11;
            pFVar18 = pFVar13;
          } while (pFVar19 < pFVar13);
        }
        goto LAB_14d819779;
      }
LAB_14d819768:
      local_338 = pFVar1;
      HeapSortInternal<FLoudnessResults,int,FIdentityFunctor,TDereferenceWrapper<FLoudnessResults,_ConvertToBlueprintResults_::__l2::FCompareLoudnessResults>_>
                (pFVar15,iVar12,param_3,param_4);
LAB_14d819779:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_328 <= ppFVar16);
  }
  return;
code_r0x00014d8196a9:
  if (pFVar14[1].TimeSeconds < pFVar19->TimeSeconds ||
      pFVar14[1].TimeSeconds == pFVar19->TimeSeconds) goto LAB_14d8196a0;
LAB_14d8196b5:
  do {
    pFVar17 = pFVar13;
    pFVar13 = pFVar17 + -1;
    if (pFVar13 <= pFVar19) break;
  } while (pFVar19->TimeSeconds < pFVar17[-1].TimeSeconds ||
           pFVar19->TimeSeconds == pFVar17[-1].TimeSeconds);
  uVar2 = pFVar13->Loudness;
  uVar3 = pFVar13->NormalizedLoudness;
  uVar4 = pFVar17[-1].PerceptualEnergy;
  uVar5 = pFVar17[-1].TimeSeconds;
  if (pFVar15 <= pFVar13) {
    fVar20 = pFVar15->Loudness;
    fVar6 = pFVar15->NormalizedLoudness;
    fVar7 = pFVar14[1].PerceptualEnergy;
    fVar8 = pFVar14[1].TimeSeconds;
    pFVar15->Loudness = (float)uVar2;
    pFVar15->NormalizedLoudness = (float)uVar3;
    pFVar14[1].PerceptualEnergy = (float)uVar4;
    pFVar14[1].TimeSeconds = (float)uVar5;
    pFVar13->Loudness = fVar20;
    pFVar13->NormalizedLoudness = fVar6;
    pFVar17[-1].PerceptualEnergy = fVar7;
    pFVar17[-1].TimeSeconds = fVar8;
    goto LAB_14d8196a0;
  }
  fVar20 = pFVar19->Loudness;
  fVar6 = pFVar19->NormalizedLoudness;
  fVar7 = pFVar19->PerceptualEnergy;
  fVar8 = pFVar19->TimeSeconds;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar19->Loudness = (float)uVar2;
  pFVar19->NormalizedLoudness = (float)uVar3;
  pFVar19->PerceptualEnergy = (float)uVar4;
  pFVar19->TimeSeconds = (float)uVar5;
  pFVar13->Loudness = fVar20;
  pFVar13->NormalizedLoudness = fVar6;
  pFVar17[-1].PerceptualEnergy = fVar7;
  pFVar17[-1].TimeSeconds = fVar8;
  if ((longlong)((longlong)pFVar13 + (-0x10 - (longlong)pFVar19) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar18 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar18) {
      *ppFVar16 = pFVar15;
      ppFVar16[1] = pFVar18;
      *(int *)(ppFVar16 + 2) = (int)local_338;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar13 <= pFVar19 + 1) goto LAB_14d819779;
    pFVar18 = pFVar17 + -2;
    pFVar15 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar13) {
      *ppFVar16 = pFVar19;
      ppFVar16[1] = pFVar17 + -2;
      *(int *)(ppFVar16 + 2) = (int)local_338;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar18 <= pFVar15) goto LAB_14d819779;
  }
  iVar12 = (int)((longlong)pFVar18 - (longlong)pFVar15 >> 4) + 1;
  pFVar19 = pFVar15;
  if ((int)local_338 == 0) goto LAB_14d819768;
  goto LAB_14d819670;
}

// IntroSortInternal<FMeterResults,int,FIdentityFunctor,TDereferenceWrapper<FMeterResults,`ConvertToBlueprintResults'::__l2::<lambda_1>_>_> @ 14d819870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMeterResults,int,FIdentityFunctor,TDereferenceWrapper<FMeterResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
          (FMeterResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FMeterResults,,TArray<FMeterResults,TSizedDefaultAllocator<32>_>___cdecl_ConvertToBlueprintResults(UMeterSettings_*,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FMeterResults *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  FMeterResults *pFVar13;
  int iVar14;
  FMeterResults *pFVar15;
  FMeterResults *pFVar16;
  FMeterResults *pFVar17;
  FMeterResults *pFVar18;
  FMeterResults *pFVar19;
  FMeterResults **ppFVar20;
  float fVar21;
  undefined1 auStack_378 [48];
  FMeterResults *local_348;
  FMeterResults *local_338;
  FMeterResults *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar21;
    memset(local_320,0,0x2e8);
    ppFVar20 = &local_338;
    do {
      pFVar15 = ppFVar20[1];
      pFVar16 = *ppFVar20;
      pFVar1 = ppFVar20[2];
      local_348._0_4_ = (int)pFVar1;
      iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar16) / 0x14) + 1;
      pFVar19 = pFVar16;
      if ((int)local_348 != 0) {
LAB_14d819940:
        if (8 < iVar14) {
          fVar6 = pFVar19->MeterValue;
          fVar7 = pFVar19->PeakValue;
          iVar8 = pFVar19->NumSamplesClipping;
          pFVar13 = pFVar15 + 1;
          iVar14 = iVar14 / 2;
          pFVar16 = pFVar19 + iVar14;
          fVar9 = pFVar16->TimeSeconds;
          fVar10 = pFVar16->MeterValue;
          fVar11 = pFVar16->PeakValue;
          iVar12 = pFVar16->NumSamplesClipping;
          fVar21 = pFVar19[iVar14].ClippingValue;
          pFVar16 = pFVar19 + iVar14;
          pFVar16->TimeSeconds = pFVar19->TimeSeconds;
          pFVar16->MeterValue = fVar6;
          pFVar16->PeakValue = fVar7;
          pFVar16->NumSamplesClipping = iVar8;
          pFVar19[iVar14].ClippingValue = pFVar19->ClippingValue;
          pFVar19->TimeSeconds = fVar9;
          pFVar19->MeterValue = fVar10;
          pFVar19->PeakValue = fVar11;
          pFVar19->NumSamplesClipping = iVar12;
          pFVar19->ClippingValue = fVar21;
          pFVar16 = pFVar19;
LAB_14d819982:
          pFVar17 = pFVar16;
          pFVar16 = pFVar17 + 1;
          if (pFVar16 <= pFVar15) goto code_r0x00014d81998b;
          goto LAB_14d819996;
        }
        if (pFVar19 < pFVar15) {
          pFVar1 = pFVar19 + 1;
          do {
            pFVar16 = pFVar19;
            if (pFVar1 <= pFVar15) {
              pFVar13 = pFVar1;
              if (0x4f < (ulonglong)((longlong)pFVar15 + (0x14 - (longlong)pFVar1))) {
                do {
                  fVar21 = pFVar16->TimeSeconds;
                  if (pFVar16->TimeSeconds < pFVar13->TimeSeconds) {
                    pFVar16 = pFVar13;
                    fVar21 = pFVar13->TimeSeconds;
                  }
                  if (fVar21 < pFVar13[1].TimeSeconds) {
                    pFVar16 = pFVar13 + 1;
                  }
                  fVar21 = pFVar16->TimeSeconds;
                  if (pFVar16->TimeSeconds < pFVar13[2].TimeSeconds) {
                    pFVar16 = pFVar13 + 2;
                    fVar21 = pFVar13[2].TimeSeconds;
                  }
                  if (fVar21 < pFVar13[3].TimeSeconds) {
                    pFVar16 = pFVar13 + 3;
                  }
                  pFVar13 = pFVar13 + 4;
                } while (pFVar13 <= pFVar15 + -3);
              }
              for (; pFVar13 <= pFVar15; pFVar13 = pFVar13 + 1) {
                if (pFVar16->TimeSeconds < pFVar13->TimeSeconds) {
                  pFVar16 = pFVar13;
                }
              }
            }
            fVar9 = pFVar16->TimeSeconds;
            fVar10 = pFVar16->MeterValue;
            fVar11 = pFVar16->PeakValue;
            iVar8 = pFVar16->NumSamplesClipping;
            fVar21 = pFVar16->ClippingValue;
            pFVar13 = pFVar15 + -1;
            fVar6 = pFVar15->MeterValue;
            fVar7 = pFVar15->PeakValue;
            iVar14 = pFVar15->NumSamplesClipping;
            pFVar16->TimeSeconds = pFVar15->TimeSeconds;
            pFVar16->MeterValue = fVar6;
            pFVar16->PeakValue = fVar7;
            pFVar16->NumSamplesClipping = iVar14;
            pFVar16->ClippingValue = pFVar15->ClippingValue;
            pFVar15->TimeSeconds = fVar9;
            pFVar15->MeterValue = fVar10;
            pFVar15->PeakValue = fVar11;
            pFVar15->NumSamplesClipping = iVar8;
            pFVar15->ClippingValue = fVar21;
            pFVar15 = pFVar13;
          } while (pFVar19 < pFVar13);
        }
        goto LAB_14d819aa9;
      }
LAB_14d819a9a:
      local_348 = pFVar1;
      HeapSortInternal<FMeterResults,int,FIdentityFunctor,TDereferenceWrapper<FMeterResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
                (pFVar16,iVar14,param_3,param_4);
LAB_14d819aa9:
      ppFVar20 = ppFVar20 + -3;
    } while (&local_338 <= ppFVar20);
  }
  return;
code_r0x00014d81998b:
  if (pFVar16->TimeSeconds < pFVar19->TimeSeconds || pFVar16->TimeSeconds == pFVar19->TimeSeconds)
  goto LAB_14d819982;
LAB_14d819996:
  do {
    pFVar18 = pFVar13;
    pFVar13 = pFVar18 + -1;
    if (pFVar13 <= pFVar19) break;
  } while (pFVar19->TimeSeconds < pFVar13->TimeSeconds ||
           pFVar19->TimeSeconds == pFVar13->TimeSeconds);
  uVar2 = pFVar13->TimeSeconds;
  uVar3 = pFVar13->MeterValue;
  uVar4 = pFVar18[-1].PeakValue;
  uVar5 = pFVar18[-1].NumSamplesClipping;
  if (pFVar16 <= pFVar13) {
    fVar6 = pFVar16->TimeSeconds;
    fVar7 = pFVar16->MeterValue;
    fVar9 = pFVar17[1].PeakValue;
    iVar14 = pFVar17[1].NumSamplesClipping;
    fVar21 = pFVar17[1].ClippingValue;
    pFVar16->TimeSeconds = (float)uVar2;
    pFVar16->MeterValue = (float)uVar3;
    pFVar17[1].PeakValue = (float)uVar4;
    pFVar17[1].NumSamplesClipping = uVar5;
    pFVar17[1].ClippingValue = pFVar18[-1].ClippingValue;
    pFVar13->TimeSeconds = fVar6;
    pFVar13->MeterValue = fVar7;
    pFVar18[-1].PeakValue = fVar9;
    pFVar18[-1].NumSamplesClipping = iVar14;
    pFVar18[-1].ClippingValue = fVar21;
    goto LAB_14d819982;
  }
  fVar21 = pFVar19->ClippingValue;
  local_348._0_4_ = (int)local_348 + -1;
  fVar6 = pFVar19->TimeSeconds;
  fVar7 = pFVar19->MeterValue;
  fVar9 = pFVar19->PeakValue;
  iVar14 = pFVar19->NumSamplesClipping;
  pFVar19->TimeSeconds = (float)uVar2;
  pFVar19->MeterValue = (float)uVar3;
  pFVar19->PeakValue = (float)uVar4;
  pFVar19->NumSamplesClipping = uVar5;
  pFVar19->ClippingValue = pFVar18[-1].ClippingValue;
  pFVar13->TimeSeconds = fVar6;
  pFVar13->MeterValue = fVar7;
  pFVar18[-1].PeakValue = fVar9;
  pFVar18[-1].NumSamplesClipping = iVar14;
  pFVar18[-1].ClippingValue = fVar21;
  if (((longlong)pFVar13 + (-0x14 - (longlong)pFVar19)) / 0x14 <
      ((longlong)pFVar15 - (longlong)pFVar16) / 0x14) {
    if (pFVar16 < pFVar15) {
      *ppFVar20 = pFVar16;
      ppFVar20[1] = pFVar15;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar13 <= pFVar19 + 1) goto LAB_14d819aa9;
    pFVar15 = pFVar18 + -2;
    pFVar16 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar13) {
      *ppFVar20 = pFVar19;
      ppFVar20[1] = pFVar18 + -2;
      *(int *)(ppFVar20 + 2) = (int)local_348;
      ppFVar20 = ppFVar20 + 3;
    }
    if (pFVar15 <= pFVar16) goto LAB_14d819aa9;
  }
  iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar16) / 0x14) + 1;
  pFVar19 = pFVar16;
  if ((int)local_348 == 0) goto LAB_14d819a9a;
  goto LAB_14d819940;
}

// IntroSortInternal<FSynesthesiaSpectrumResults,int,FIdentityFunctor,TDereferenceWrapper<FSynesthesiaSpectrumResults,`ConvertToBlueprintResults'::__l2::<lambda_1>_>_> @ 14d819bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSynesthesiaSpectrumResults,int,FIdentityFunctor,TDereferenceWrapper<FSynesthesiaSpectrumResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
          (FSynesthesiaSpectrumResults *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSynesthesiaSpectrumResults,,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>___cdecl_ConvertToBlueprintResults(USynesthesiaSpectrumAnalysisSettings_*,TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FSynesthesiaSpectrumResults *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FSynesthesiaSpectrumResults *pFVar10;
  int iVar11;
  FSynesthesiaSpectrumResults *pFVar12;
  FSynesthesiaSpectrumResults *pFVar13;
  FSynesthesiaSpectrumResults *pFVar14;
  FSynesthesiaSpectrumResults *pFVar15;
  FSynesthesiaSpectrumResults *pFVar16;
  FSynesthesiaSpectrumResults **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FSynesthesiaSpectrumResults *local_348;
  FSynesthesiaSpectrumResults *local_338;
  FSynesthesiaSpectrumResults *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar13 = ppFVar17[1];
      pFVar10 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar10) / 0x18) + 1;
      pFVar16 = pFVar10;
      if ((int)local_348 != 0) {
LAB_14d819c90:
        if (8 < iVar11) {
          uVar4 = *(undefined4 *)&pFVar16->field_0x4;
          pFVar2 = (pFVar16->SpectrumValues).AllocatorInstance.Data;
          pFVar12 = pFVar13 + 1;
          iVar11 = iVar11 / 2;
          pFVar10 = pFVar16 + iVar11;
          fVar18 = pFVar10->TimeSeconds;
          uVar6 = *(undefined4 *)&pFVar10->field_0x4;
          pFVar3 = (pFVar10->SpectrumValues).AllocatorInstance.Data;
          iVar7 = pFVar16[iVar11].SpectrumValues.ArrayNum;
          iVar8 = pFVar16[iVar11].SpectrumValues.ArrayMax;
          pFVar10 = pFVar16 + iVar11;
          pFVar10->TimeSeconds = pFVar16->TimeSeconds;
          *(undefined4 *)&pFVar10->field_0x4 = uVar4;
          (pFVar10->SpectrumValues).AllocatorInstance.Data = pFVar2;
          iVar5 = (pFVar16->SpectrumValues).ArrayMax;
          pFVar16[iVar11].SpectrumValues.ArrayNum = (pFVar16->SpectrumValues).ArrayNum;
          pFVar16[iVar11].SpectrumValues.ArrayMax = iVar5;
          pFVar16->TimeSeconds = fVar18;
          *(undefined4 *)&pFVar16->field_0x4 = uVar6;
          (pFVar16->SpectrumValues).AllocatorInstance.Data = pFVar3;
          (pFVar16->SpectrumValues).ArrayNum = iVar7;
          (pFVar16->SpectrumValues).ArrayMax = iVar8;
          pFVar10 = pFVar16;
LAB_14d819ce0:
          pFVar14 = pFVar10;
          pFVar10 = pFVar14 + 1;
          if (pFVar10 <= pFVar13) goto code_r0x00014d819ce9;
          goto LAB_14d819cf4;
        }
        if (pFVar16 < pFVar13) {
          pFVar1 = pFVar16 + 1;
          do {
            pFVar10 = pFVar16;
            if (pFVar1 <= pFVar13) {
              pFVar12 = pFVar1;
              if (0x5f < (ulonglong)((longlong)pFVar13 + (0x18 - (longlong)pFVar1))) {
                do {
                  fVar18 = pFVar10->TimeSeconds;
                  if (pFVar10->TimeSeconds < pFVar12->TimeSeconds) {
                    pFVar10 = pFVar12;
                    fVar18 = pFVar12->TimeSeconds;
                  }
                  if (fVar18 < pFVar12[1].TimeSeconds) {
                    pFVar10 = pFVar12 + 1;
                  }
                  fVar18 = pFVar10->TimeSeconds;
                  if (pFVar10->TimeSeconds < pFVar12[2].TimeSeconds) {
                    pFVar10 = pFVar12 + 2;
                    fVar18 = pFVar12[2].TimeSeconds;
                  }
                  if (fVar18 < pFVar12[3].TimeSeconds) {
                    pFVar10 = pFVar12 + 3;
                  }
                  pFVar12 = pFVar12 + 4;
                } while (pFVar12 <= pFVar13 + -3);
              }
              for (; pFVar12 <= pFVar13; pFVar12 = pFVar12 + 1) {
                if (pFVar10->TimeSeconds < pFVar12->TimeSeconds) {
                  pFVar10 = pFVar12;
                }
              }
            }
            fVar18 = pFVar10->TimeSeconds;
            uVar6 = *(undefined4 *)&pFVar10->field_0x4;
            pFVar2 = (pFVar10->SpectrumValues).AllocatorInstance.Data;
            pFVar12 = pFVar13 + -1;
            iVar5 = (pFVar10->SpectrumValues).ArrayNum;
            iVar7 = (pFVar10->SpectrumValues).ArrayMax;
            uVar4 = *(undefined4 *)&pFVar13->field_0x4;
            pFVar3 = (pFVar13->SpectrumValues).AllocatorInstance.Data;
            pFVar10->TimeSeconds = pFVar13->TimeSeconds;
            *(undefined4 *)&pFVar10->field_0x4 = uVar4;
            (pFVar10->SpectrumValues).AllocatorInstance.Data = pFVar3;
            iVar11 = (pFVar13->SpectrumValues).ArrayMax;
            (pFVar10->SpectrumValues).ArrayNum = (pFVar13->SpectrumValues).ArrayNum;
            (pFVar10->SpectrumValues).ArrayMax = iVar11;
            pFVar13->TimeSeconds = fVar18;
            *(undefined4 *)&pFVar13->field_0x4 = uVar6;
            (pFVar13->SpectrumValues).AllocatorInstance.Data = pFVar2;
            (pFVar13->SpectrumValues).ArrayNum = iVar5;
            (pFVar13->SpectrumValues).ArrayMax = iVar7;
            pFVar13 = pFVar12;
          } while (pFVar16 < pFVar12);
        }
        goto LAB_14d819e17;
      }
LAB_14d819e08:
      local_348 = pFVar1;
      HeapSortInternal<FSynesthesiaSpectrumResults,int,FIdentityFunctor,TDereferenceWrapper<FSynesthesiaSpectrumResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
                (pFVar10,iVar11,param_3,param_4);
LAB_14d819e17:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014d819ce9:
  if (pFVar10->TimeSeconds < pFVar16->TimeSeconds || pFVar10->TimeSeconds == pFVar16->TimeSeconds)
  goto LAB_14d819ce0;
LAB_14d819cf4:
  do {
    pFVar15 = pFVar12;
    pFVar12 = pFVar15 + -1;
    if (pFVar12 <= pFVar16) break;
  } while (pFVar16->TimeSeconds < pFVar12->TimeSeconds ||
           pFVar16->TimeSeconds == pFVar12->TimeSeconds);
  pFVar2 = pFVar15[-1].SpectrumValues.AllocatorInstance.Data;
  if (pFVar10 <= pFVar12) {
    fVar18 = pFVar10->TimeSeconds;
    uVar4 = *(undefined4 *)&pFVar10->field_0x4;
    pFVar3 = pFVar14[1].SpectrumValues.AllocatorInstance.Data;
    iVar5 = pFVar14[1].SpectrumValues.ArrayNum;
    iVar7 = pFVar14[1].SpectrumValues.ArrayMax;
    *(undefined8 *)pFVar10 = *(undefined8 *)pFVar12;
    pFVar14[1].SpectrumValues.AllocatorInstance.Data = pFVar2;
    iVar11 = pFVar15[-1].SpectrumValues.ArrayMax;
    pFVar14[1].SpectrumValues.ArrayNum = pFVar15[-1].SpectrumValues.ArrayNum;
    pFVar14[1].SpectrumValues.ArrayMax = iVar11;
    pFVar12->TimeSeconds = fVar18;
    *(undefined4 *)&pFVar12->field_0x4 = uVar4;
    pFVar15[-1].SpectrumValues.AllocatorInstance.Data = pFVar3;
    pFVar15[-1].SpectrumValues.ArrayNum = iVar5;
    pFVar15[-1].SpectrumValues.ArrayMax = iVar7;
    goto LAB_14d819ce0;
  }
  fVar18 = pFVar16->TimeSeconds;
  uVar4 = *(undefined4 *)&pFVar16->field_0x4;
  pFVar3 = (pFVar16->SpectrumValues).AllocatorInstance.Data;
  iVar5 = (pFVar16->SpectrumValues).ArrayNum;
  iVar7 = (pFVar16->SpectrumValues).ArrayMax;
  lVar9 = (longlong)pFVar12 + (-0x18 - (longlong)pFVar16);
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
  (pFVar16->SpectrumValues).AllocatorInstance.Data = pFVar2;
  iVar11 = pFVar15[-1].SpectrumValues.ArrayMax;
  (pFVar16->SpectrumValues).ArrayNum = pFVar15[-1].SpectrumValues.ArrayNum;
  (pFVar16->SpectrumValues).ArrayMax = iVar11;
  pFVar12->TimeSeconds = fVar18;
  *(undefined4 *)&pFVar12->field_0x4 = uVar4;
  pFVar15[-1].SpectrumValues.AllocatorInstance.Data = pFVar3;
  pFVar15[-1].SpectrumValues.ArrayNum = iVar5;
  pFVar15[-1].SpectrumValues.ArrayMax = iVar7;
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)pFVar13 - (longlong)pFVar10) / 0x18) {
    if (pFVar10 < pFVar13) {
      *ppFVar17 = pFVar10;
      ppFVar17[1] = pFVar13;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar12 <= pFVar16 + 1) goto LAB_14d819e17;
    pFVar13 = pFVar15 + -2;
    pFVar10 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar12) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar15 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar10) goto LAB_14d819e17;
  }
  iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar10) / 0x18) + 1;
  pFVar16 = pFVar10;
  if ((int)local_348 == 0) goto LAB_14d819e08;
  goto LAB_14d819c90;
}

// StaticEnum<enum_EConstantQFFTSizeEnum> @ 14d819f40

UEnum * __cdecl StaticEnum<enum_EConstantQFFTSizeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum,(UObject *)pUVar1,
                       L"EConstantQFFTSizeEnum");
  }
  return Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton;
}

// StaticEnum<enum_EConstantQNormalizationEnum> @ 14d819f80

UEnum * __cdecl StaticEnum<enum_EConstantQNormalizationEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum,
                       (UObject *)pUVar1,L"EConstantQNormalizationEnum");
  }
  return Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton;
}

// StaticEnum<enum_ELoudnessCurveTypeEnum> @ 14d819fc0

UEnum * __cdecl StaticEnum<enum_ELoudnessCurveTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum,(UObject *)pUVar1,
                       L"ELoudnessCurveTypeEnum");
  }
  return Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton;
}

// StaticEnum<enum_ELoudnessNRTCurveTypeEnum> @ 14d81a000

UEnum * __cdecl StaticEnum<enum_ELoudnessNRTCurveTypeEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum,
                       (UObject *)pUVar1,L"ELoudnessNRTCurveTypeEnum");
  }
  return Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton;
}

// StaticEnum<enum_EMeterPeakType> @ 14d81a040

UEnum * __cdecl StaticEnum<enum_EMeterPeakType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType,(UObject *)pUVar1,
                       L"EMeterPeakType");
  }
  return Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton;
}

// UpperBoundInternal<Audio::FConstantQFrame_const_,int,float,`Audio::GetInterpolationParametersAtTimestamp<Audio::FConstantQFrame>'::__l2::<lambda_1>,TLess<void>_> @ 14d81a080

int __cdecl
AlgoImpl::
UpperBoundInternal<Audio::FConstantQFrame_const_,int,float,_Audio::GetInterpolationParametersAtTimestamp<Audio::FConstantQFrame>_::__l2::<lambda_1>,TLess<void>_>
          (FConstantQFrame *param_1,int param_2,float *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = iVar1 + (param_2 & 1U);
      if (*param_3 < param_1[iVar1].Timestamp) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// UpperBoundInternal<FLKFSNRTResults_const_,int,float,`Audio::FindNearestByTimestamp<FLKFSNRTResults_const_>'::__l2::<lambda_1>,TLess<void>_> @ 14d81a0d0

int __cdecl
AlgoImpl::
UpperBoundInternal<FLKFSNRTResults_const_,int,float,_Audio::FindNearestByTimestamp<FLKFSNRTResults_const_>_::__l2::<lambda_1>,TLess<void>_>
          (FLKFSNRTResults *param_1,int param_2,float *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = iVar1 + (param_2 & 1U);
      if (*param_3 < param_1[iVar1].Timestamp) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// UpperBoundInternal<FLKFSNRTResults_const_,int,float,`Audio::GetInterpolationParametersAtTimestamp<FLKFSNRTResults>'::__l2::<lambda_1>,TLess<void>_> @ 14d81a120

int __cdecl
AlgoImpl::
UpperBoundInternal<FLKFSNRTResults_const_,int,float,_Audio::GetInterpolationParametersAtTimestamp<FLKFSNRTResults>_::__l2::<lambda_1>,TLess<void>_>
          (FLKFSNRTResults *param_1,int param_2,float *param_3,<lambda_1> param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = iVar1 + (param_2 & 1U);
      if (*param_3 < param_1[iVar1].Timestamp) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// UpperBoundInternal<Audio::FLoudnessDatum_const_,int,float,`Audio::GetInterpolationParametersAtTimestamp<Audio::FLoudnessDatum>'::__l2::<lambda_1>,TLess<void>_> @ 14d81a170

int __cdecl
AlgoImpl::
UpperBoundInternal<Audio::FLoudnessDatum_const_,int,float,_Audio::GetInterpolationParametersAtTimestamp<Audio::FLoudnessDatum>_::__l2::<lambda_1>,TLess<void>_>
          (FLoudnessDatum *param_1,int param_2,float *param_3,<lambda_1> param_4,TLess<void> param_5
          )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = iVar1 + (param_2 & 1U);
      if (*param_3 < param_1[iVar1].Timestamp) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// ~TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,0,0> @ 14d81bf50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UOnsetNRTSettings::GetSettings_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14d81ca80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cac0

void * __thiscall
Audio::FConstantQNRTSettings::_scalar_deleting_destructor_(FConstantQNRTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerNRTSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cb00

void * __thiscall
Audio::FConstantQSettings::_scalar_deleting_destructor_(FConstantQSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cb40

void * __thiscall
Audio::FLKFSNRTSettings::_scalar_deleting_destructor_(FLKFSNRTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerNRTSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cb80

void * __thiscall
Audio::FLKFSSettings::_scalar_deleting_destructor_(FLKFSSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cbc0

void * __thiscall
Audio::FLoudnessNRTSettings::_scalar_deleting_destructor_(FLoudnessNRTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerNRTSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cc00

void * __thiscall
Audio::FLoudnessSettings::_scalar_deleting_destructor_(FLoudnessSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cc40

void * __thiscall
Audio::FMeterSettings::_scalar_deleting_destructor_(FMeterSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cc80

void * __thiscall
Audio::FSynesthesiaSpectrumAnalysisSettings::_scalar_deleting_destructor_
          (FSynesthesiaSpectrumAnalysisSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnalyzerSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81ccc0

void * __thiscall
UAudioSynesthesiaNRT::_scalar_deleting_destructor_(UAudioSynesthesiaNRT *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cd20

void * __thiscall
UAudioSynesthesiaNRTSettings::_scalar_deleting_destructor_
          (UAudioSynesthesiaNRTSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cd80

void * __thiscall
UAudioSynesthesiaSettings::_scalar_deleting_destructor_
          (UAudioSynesthesiaSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cde0

void * __thiscall
UConstantQAnalyzer::_scalar_deleting_destructor_(UConstantQAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UConstantQAnalyzer__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestConstantQResultsNative).field_0x8,
             *(int *)&(this->OnLatestConstantQResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestConstantQResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestConstantQResultsNative);
  pvVar1 = *(void **)&(this->OnLatestConstantQResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestConstantQResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnConstantQResultsNative).field_0x8,
             *(int *)&(this->OnConstantQResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnConstantQResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConstantQResultsNative);
  pvVar1 = *(void **)&(this->OnConstantQResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConstantQResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cef0

void * __thiscall UConstantQNRT::_scalar_deleting_destructor_(UConstantQNRT *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cf50

void * __thiscall
UConstantQNRTSettings::_scalar_deleting_destructor_(UConstantQNRTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81cfb0

void * __thiscall
UConstantQSettings::_scalar_deleting_destructor_(UConstantQSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d010

void * __thiscall ULKFSAnalyzer::_scalar_deleting_destructor_(ULKFSAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULKFSAnalyzer__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestPerChannelLKFSResultsNative).field_0x8,
             *(int *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestPerChannelLKFSResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelLKFSResultsNative);
  pvVar1 = *(void **)&(this->OnLatestPerChannelLKFSResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelLKFSResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestOverallLKFSResultsNative).field_0x8,
             *(int *)&(this->OnLatestOverallLKFSResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestOverallLKFSResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallLKFSResultsNative);
  pvVar1 = *(void **)&(this->OnLatestOverallLKFSResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallLKFSResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPerChannelLKFSResultsNative).field_0x8,
             *(int *)&(this->OnPerChannelLKFSResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnPerChannelLKFSResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelLKFSResultsNative);
  pvVar1 = *(void **)&(this->OnPerChannelLKFSResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelLKFSResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOverallLKFSResultsNative).field_0x8,
             *(int *)&(this->OnOverallLKFSResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnOverallLKFSResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallLKFSResultsNative);
  pvVar1 = *(void **)&(this->OnOverallLKFSResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallLKFSResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d1b0

void * __thiscall ULKFSNRT::_scalar_deleting_destructor_(ULKFSNRT *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d210

void * __thiscall
ULKFSNRTSettings::_scalar_deleting_destructor_(ULKFSNRTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d270

void * __thiscall ULKFSSettings::_scalar_deleting_destructor_(ULKFSSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d2d0

void * __thiscall
ULoudnessAnalyzer::_scalar_deleting_destructor_(ULoudnessAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULoudnessAnalyzer__6B_;
  pvVar1 = *(void **)&(this->OnLatestPerChannelLoudnessResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelLoudnessResults);
  pvVar1 = *(void **)&(this->OnLatestOverallLoudnessResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallLoudnessResults);
  pvVar1 = *(void **)&(this->OnPerChannelLoudnessResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelLoudnessResults);
  pvVar1 = *(void **)&(this->OnOverallLoudnessResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallLoudnessResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d3c0

void * __thiscall ULoudnessNRT::_scalar_deleting_destructor_(ULoudnessNRT *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d420

void * __thiscall
ULoudnessNRTSettings::_scalar_deleting_destructor_(ULoudnessNRTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d480

void * __thiscall
ULoudnessSettings::_scalar_deleting_destructor_(ULoudnessSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d4e0

void * __thiscall UMeterAnalyzer::_scalar_deleting_destructor_(UMeterAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMeterAnalyzer__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestPerChannelMeterResultsNative).field_0x8,
             *(int *)&(this->OnLatestPerChannelMeterResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestPerChannelMeterResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelMeterResultsNative);
  pvVar1 = *(void **)&(this->OnLatestPerChannelMeterResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelMeterResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestOverallMeterResultsNative).field_0x8,
             *(int *)&(this->OnLatestOverallMeterResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestOverallMeterResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallMeterResultsNative);
  pvVar1 = *(void **)&(this->OnLatestOverallMeterResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallMeterResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPerChannelMeterResultsNative).field_0x8,
             *(int *)&(this->OnPerChannelMeterResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnPerChannelMeterResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelMeterResultsNative);
  pvVar1 = *(void **)&(this->OnPerChannelMeterResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelMeterResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOverallMeterResultsNative).field_0x8,
             *(int *)&(this->OnOverallMeterResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnOverallMeterResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallMeterResultsNative);
  pvVar1 = *(void **)&(this->OnOverallMeterResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallMeterResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d680

void * __thiscall UMeterSettings::_scalar_deleting_destructor_(UMeterSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d6e0

void * __thiscall UOnsetNRT::_scalar_deleting_destructor_(UOnsetNRT *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d740

void * __thiscall
UOnsetNRTSettings::_scalar_deleting_destructor_(UOnsetNRTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d7a0

void * __thiscall
USynesthesiaSpectrumAnalysisSettings::_scalar_deleting_destructor_
          (USynesthesiaSpectrumAnalysisSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d81d800

void * __thiscall
USynesthesiaSpectrumAnalyzer::_scalar_deleting_destructor_
          (USynesthesiaSpectrumAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USynesthesiaSpectrumAnalyzer__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestSpectrumResultsNative).field_0x8,
             *(int *)&(this->OnLatestSpectrumResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestSpectrumResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestSpectrumResultsNative);
  pvVar1 = *(void **)&(this->OnLatestSpectrumResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestSpectrumResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSpectrumResultsNative).field_0x8,
             *(int *)&(this->OnSpectrumResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnSpectrumResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpectrumResultsNative);
  pvVar1 = *(void **)&(this->OnSpectrumResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpectrumResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// AddOnsetsInRange @ 14d81d910

void __cdecl
`anonymous_namespace'::AddOnsetsInRange
          (FOnsetNRTResult *param_1,float param_2,float param_3,int param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TArray<Audio::FOnset,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong local_58;
  
  bVar4 = Audio::FOnsetNRTResult::IsSortedChronologically(param_1);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnsetResult.IsSortedChronologically()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\OnsetNRT.cpp"
                         ,0xf,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar6 = Audio::FOnsetNRTResult::GetOnsetsForChannel(param_1,param_4);
  uVar7 = 0;
  uVar10 = pTVar6->ArrayNum;
  pFVar9 = (pTVar6->AllocatorInstance).Data;
  uVar11 = uVar10;
  if ((int)uVar10 < 1) {
    uVar12 = 0;
    uVar7 = 0;
  }
  else {
    do {
      uVar12 = uVar11 >> 1;
      uVar3 = uVar12 + uVar7 + (uVar11 & 1);
      if (param_2 < *(float *)(pFVar9 + (longlong)(int)(uVar12 + uVar7) * 0xc + 4)) {
        uVar3 = uVar7;
      }
      uVar7 = uVar3;
      uVar3 = uVar11 >> 1;
      uVar11 = uVar12;
    } while (uVar3 != 0);
    do {
      iVar5 = (uVar10 >> 1) + uVar12;
      uVar11 = iVar5 + (uVar10 & 1);
      if (param_3 < *(float *)(pFVar9 + (longlong)iVar5 * 0xc + 4)) {
        uVar11 = uVar12;
      }
      uVar12 = uVar11;
      uVar11 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar11 != 0);
  }
  local_58 = (longlong)(int)uVar7;
  if (local_58 < (int)uVar12) {
    lVar13 = local_58 * 0xc;
    local_58 = (int)uVar12 - local_58;
    do {
      uVar10 = 0;
      if ((int)uVar7 < pTVar6->ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (pTVar6->AllocatorInstance).Data;
      pFVar1 = (param_5->AllocatorInstance).Data;
      pFVar8 = pFVar9 + lVar13 + 4;
      if (((pFVar1 <= pFVar8) && (pFVar8 < pFVar1 + (longlong)param_5->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_5->ArrayNum;
      if (iVar5 == param_5->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar5 + 1;
      pFVar9 = pFVar9 + lVar13 + 8;
      *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar5 * 4) =
           *(undefined4 *)pFVar8;
      pFVar1 = (param_6->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar9) && (pFVar9 < pFVar1 + (longlong)param_6->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_6->ArrayNum;
      if (iVar5 == param_6->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar5 + 1;
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + 0xc;
      local_58 = local_58 + -1;
      *(undefined4 *)((param_6->AllocatorInstance).Data + (longlong)iVar5 * 4) =
           *(undefined4 *)pFVar9;
    } while (local_58 != 0);
  }
  return;
}

// BPCQTNormalizationToAudioCQTNormalization @ 14d81dc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EPseudoConstantQNormalization __cdecl
ConstantQPrivate::BPCQTNormalizationToAudioCQTNormalization(EConstantQNormalizationEnum param_1)

{
  EPseudoConstantQNormalization EVar1;
  undefined1 auStack_88 [32];
  EPseudoConstantQNormalization local_68;
  EConstantQNormalizationEnum local_67;
  EPseudoConstantQNormalization local_66 [6];
  EConstantQNormalizationEnum local_60 [8];
  initializer_list<TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>_>
  local_58;
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  local_48;
  EPseudoConstantQNormalization *local_38;
  EPseudoConstantQNormalization *local_30;
  EPseudoConstantQNormalization *local_28;
  EPseudoConstantQNormalization *local_20;
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  local_18;
  
  local_18.Key = (EConstantQNormalizationEnum *)(__security_cookie.value ^ (ulonglong)auStack_88);
  local_60[0] = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_48.Key = &local_67;
      local_67 = EqualAmplitude;
      local_48.Value = local_66;
      local_66[0] = EqualAmplitude;
      local_38 = local_66 + 1;
      local_66[1] = 0;
      local_30 = local_66 + 2;
      local_28 = local_66 + 3;
      local_20 = &local_68;
      local_58._First = &local_48;
      local_58._Last = &local_18;
      local_66[2] = 1;
      local_66[3] = 1;
      local_68 = EqualEnergy;
      TMap<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
      ::
      TMap<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
                (&NormalizationMap,&local_58);
      atexit(`ConstantQPrivate::BPCQTNormalizationToAudioCQTNormalization'::__l2::
             _dynamic_atexit_destructor_for__NormalizationMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_68 = EqualEnergy;
  EVar1 = ConvertType<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>
                    (&NormalizationMap,local_60,&local_68);
  return EVar1;
}

// BPConstantQFFTSizeEnumToInt @ 14d81dd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl ConstantQPrivate::BPConstantQFFTSizeEnumToInt(EConstantQFFTSizeEnum param_1)

{
  int iVar1;
  undefined1 auStack_118 [32];
  EConstantQFFTSizeEnum local_f8 [16];
  EConstantQFFTSizeEnum local_e8 [8];
  int local_e0 [10];
  initializer_list<TPairInitializer<EConstantQFFTSizeEnum_const_&,int_const_&>_> local_b8;
  TPairInitializer<EConstantQFFTSizeEnum_const_&,int_const_&> local_a8;
  EConstantQFFTSizeEnum *local_98;
  int *local_90;
  EConstantQFFTSizeEnum *local_88;
  int *local_80;
  EConstantQFFTSizeEnum *local_78;
  int *local_70;
  EConstantQFFTSizeEnum *local_68;
  int *local_60;
  EConstantQFFTSizeEnum *local_58;
  int *local_50;
  EConstantQFFTSizeEnum *local_48;
  int *local_40;
  EConstantQFFTSizeEnum *local_38;
  int *local_30;
  EConstantQFFTSizeEnum *local_28;
  int *local_20;
  TPairInitializer<EConstantQFFTSizeEnum_const_&,int_const_&> local_18;
  
  local_18.Key = (EConstantQFFTSizeEnum *)(__security_cookie.value ^ (ulonglong)auStack_118);
  local_e8[0] = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_a8.Key = local_f8;
      local_f8[0] = Min;
      local_a8.Value = local_e0 + 1;
      local_e0[1] = 0x40;
      local_98 = local_f8 + 1;
      local_f8[1] = 1;
      local_90 = local_e0 + 2;
      local_88 = local_f8 + 2;
      local_80 = local_e0 + 3;
      local_78 = local_f8 + 3;
      local_70 = local_e0 + 4;
      local_68 = local_f8 + 4;
      local_60 = local_e0 + 5;
      local_58 = local_f8 + 5;
      local_50 = local_e0 + 6;
      local_48 = local_f8 + 6;
      local_40 = local_e0 + 7;
      local_38 = local_f8 + 7;
      local_30 = local_e0 + 8;
      local_28 = local_f8 + 8;
      local_20 = local_e0;
      local_b8._First = &local_a8;
      local_e0[2] = 0x80;
      local_f8[2] = 2;
      local_e0[3] = 0x100;
      local_f8[3] = 3;
      local_e0[4] = 0x200;
      local_f8[4] = 4;
      local_e0[5] = 0x400;
      local_f8[5] = 5;
      local_e0[6] = 0x800;
      local_f8[6] = 6;
      local_e0[7] = 0x1000;
      local_f8[7] = 7;
      local_e0[8] = 0x2000;
      local_f8[8] = 8;
      local_e0[0] = 0x4000;
      local_b8._Last = &local_18;
      TMap<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
      ::
      TMap<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
                (&FFTSizeMap,&local_b8);
      atexit(`ConstantQPrivate::BPConstantQFFTSizeEnumToInt'::__l2::
             _dynamic_atexit_destructor_for__FFTSizeMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_e0[0] = 0x800;
  iVar1 = ConvertType<enum_EConstantQFFTSizeEnum,int>(&FFTSizeMap,local_e8,local_e0);
  return iVar1;
}

// BPFFTSizeEnumToInt @ 14d81df10

int __cdecl `anonymous_namespace'::BPFFTSizeEnumToInt(EFFTSize param_1)

{
  switch(param_1) {
  default:
    return 0x200;
  case Min:
    return 0x40;
  case Small:
    return 0x100;
  case Large:
    return 0x400;
  case VeryLarge:
    return 0x800;
  case Max:
    return 0x1000;
  }
}

// BPSpectrumTypeToAudioSpectrumType @ 14d81df80

ESpectrumType __cdecl
ConstantQPrivate::BPSpectrumTypeToAudioSpectrumType(EAudioSpectrumType param_1)

{
  ESpectrumType EVar1;
  EAudioSpectrumType local_res8 [8];
  ESpectrumType local_res10 [8];
  ESpectrumType local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  initializer_list<TPairInitializer<EAudioSpectrumType_const_&,Audio::ESpectrumType_const_&>_>
  local_38;
  TPairInitializer<EAudioSpectrumType_const_&,Audio::ESpectrumType_const_&> local_28;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_res8[0] = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28.Key = local_res10;
      local_res10[0] = MagnitudeSpectrum;
      local_28.Value = local_res18;
      local_res18[0] = MagnitudeSpectrum;
      local_18 = local_res20;
      local_res20[0] = 1;
      local_10 = local_48;
      local_38._First = &local_28;
      local_38._Last =
           (TPairInitializer<EAudioSpectrumType_const_&,Audio::ESpectrumType_const_&> *)
           &stack0xfffffffffffffff8;
      local_48[0] = 1;
      TMap<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
      ::
      TMap<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
                (&SpectrumTypeMap,&local_38);
      atexit(`ConstantQPrivate::BPSpectrumTypeToAudioSpectrumType'::__l2::
             _dynamic_atexit_destructor_for__SpectrumTypeMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res10[0] = PowerSpectrum;
  EVar1 = ConvertType<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>
                    (&SpectrumTypeMap,local_res8,local_res10);
  return EVar1;
}

// BPWindowTypeToAudioWindowType @ 14d81e070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EWindowType __cdecl ConstantQPrivate::BPWindowTypeToAudioWindowType(EFFTWindowType param_1)

{
  EWindowType EVar1;
  undefined1 auStack_98 [32];
  EWindowType local_78;
  EFFTWindowType local_77;
  EWindowType local_76 [6];
  EFFTWindowType local_70 [8];
  initializer_list<TPairInitializer<EFFTWindowType_const_&,Audio::EWindowType_const_&>_> local_68;
  TPairInitializer<EFFTWindowType_const_&,Audio::EWindowType_const_&> local_58;
  EWindowType *local_48;
  EWindowType *local_40;
  EWindowType *local_38;
  EWindowType *local_30;
  EWindowType *local_28;
  EWindowType *local_20;
  TPairInitializer<EFFTWindowType_const_&,Audio::EWindowType_const_&> local_18;
  
  local_18.Key = (EFFTWindowType *)(__security_cookie.value ^ (ulonglong)auStack_98);
  local_70[0] = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_58.Key = &local_77;
      local_77 = None;
      local_58.Value = local_76;
      local_76[0] = None;
      local_48 = local_76 + 1;
      local_76[1] = 1;
      local_40 = local_76 + 2;
      local_38 = local_76 + 3;
      local_30 = local_76 + 4;
      local_28 = local_76 + 5;
      local_20 = &local_78;
      local_68._First = &local_58;
      local_68._Last = &local_18;
      local_76[2] = 1;
      local_76[3] = 2;
      local_76[4] = 2;
      local_76[5] = 3;
      local_78 = Blackman;
      TMap<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
      ::
      TMap<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
                (&WindowTypeMap,&local_68);
      atexit(`ConstantQPrivate::BPWindowTypeToAudioWindowType'::__l2::
             _dynamic_atexit_destructor_for__WindowTypeMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_78 = None;
  EVar1 = ConvertType<enum_EFFTWindowType,enum_Audio::EWindowType>
                    (&WindowTypeMap,local_70,&local_78);
  return EVar1;
}

// ConvertToBlueprintResults @ 14d820210

TArray<FConstantQResults,TSizedDefaultAllocator<32>_> * __cdecl
ConvertToBlueprintResults
          (TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UConstantQSettings *param_1,
          TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  iVar3 = param_2->ArrayNum;
  pFVar11 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar11 + (longlong)iVar3 * 0x18;
  local_60.Data = (FScriptContainerElement *)0x0;
  pFVar10 = pFVar11 + 8;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Audio::FConstantQFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar11 == pFVar1) break;
    local_50._0_4_ = 0.0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    if ((FScriptContainerElement *)(local_50 + 8) != pFVar10) {
      uVar4 = *(uint *)(pFVar10 + 8);
      _Src = *(void **)pFVar10;
      local_40 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar4,0,(ForAnyElementType *)(local_50 + 8),uVar4,(int *)(local_50 + 0x14));
        memcpy(local_48.Data,_Src,(longlong)(int)uVar4 << 2);
      }
    }
    local_50._0_4_ = *(undefined4 *)(pFVar10 + -4);
    if ((local_60.Data <= (FConstantQResults *)local_50) &&
       ((FScriptContainerElement *)local_50 < local_60.Data + (longlong)local_58._4_4_ * 0x18)) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
    }
    if ((int)local_58 == local_58._4_4_) {
      local_58._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_60,(int *)((longlong)&local_58 + 4));
    }
    FVar6.Data = local_48.Data;
    lVar9 = (longlong)(int)local_58;
    local_58._0_4_ = (int)local_58 + 1;
    *(undefined4 *)&local_60.Data[lVar9 * 0x18].field_0x0 = local_50._0_4_;
    *(undefined8 *)(local_60.Data + lVar9 * 0x18 + 8) = 0;
    pFVar2 = local_60.Data + lVar9 * 0x18 + 8;
    lVar12 = (longlong)(int)local_40;
    *(int *)(pFVar2 + 8) = (int)local_40;
    if ((int)local_40 == 0) {
      *(int *)(local_60.Data + lVar9 * 0x18 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_40,0,(ForAnyElementType *)pFVar2,(int)local_40,
                 (int *)(local_60.Data + lVar9 * 0x18 + 0x14));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar2,FVar6.Data,lVar12 << 2);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    pFVar11 = pFVar11 + 0x18;
    pFVar10 = pFVar10 + 0x18;
  }
  local_res8 = SUB81(__return_storage_ptr__,0);
  AlgoImpl::
  IntroSortInternal<FConstantQResults,int,FIdentityFunctor,TDereferenceWrapper<FConstantQResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
            ((FConstantQResults *)local_60.Data,(int)local_58,local_res8,(<lambda_1> *)local_res20);
  FVar6.Data = local_60.Data;
  local_60.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = FVar6.Data;
  __return_storage_ptr__->ArrayNum = (int)local_58;
  __return_storage_ptr__->ArrayMax = local_58._4_4_;
  local_58 = 0;
  DestructItems<FConstantQResults,int>((FConstantQResults *)0x0,0);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return __return_storage_ptr__;
}

// ConvertToBlueprintResults @ 14d8204b0

TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> * __cdecl
ConvertToBlueprintResults
          (TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ULoudnessSettings *param_1,
          TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_78;
  undefined8 local_70;
  FLoudnessResults local_68 [4];
  
  fVar3 = __real_3f800000;
  iVar1 = param_2->ArrayNum;
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar7 = 0;
  fVar10 = param_1->ExpectedMaxLoudness - param_1->NoiseFloorDb;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (fVar10 <= __real_3a83126f) {
    fVar10 = __real_3a83126f;
  }
  local_70 = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<Audio::FLoudnessEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      iVar7 = (int)local_70;
    }
    if (pFVar8 == pFVar9) break;
    local_68[0].Loudness = *(float *)(pFVar8 + 0xc);
    local_68[0].TimeSeconds = *(float *)(pFVar8 + 4);
    local_68[0].NormalizedLoudness = (local_68[0].Loudness - param_1->NoiseFloorDb) / fVar10;
    if (fVar3 <= local_68[0].NormalizedLoudness) {
      local_68[0].NormalizedLoudness = fVar3;
    }
    if (local_68[0].NormalizedLoudness <= 0.0) {
      local_68[0].NormalizedLoudness = 0.0;
    }
    local_68[0].PerceptualEnergy = *(float *)(pFVar8 + 8);
    iVar5 = iVar7;
    if ((local_78.Data <= local_68) &&
       (local_68 < (FLoudnessResults *)(local_78.Data + (longlong)local_70._4_4_ * 0x10))) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = (int)local_70;
    }
    if (iVar5 == local_70._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_78,(int *)((longlong)&local_70 + 4));
    }
    iVar7 = iVar5 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar7);
    pFVar8 = pFVar8 + 0x10;
    *(ulonglong *)(local_78.Data + (longlong)iVar5 * 0x10) =
         CONCAT44(local_68[0].NormalizedLoudness,local_68[0].Loudness);
    *(ulonglong *)(local_78.Data + (longlong)iVar5 * 0x10 + 8) =
         CONCAT44(local_68[0].TimeSeconds,local_68[0].PerceptualEnergy);
  }
  AlgoImpl::
  IntroSortInternal<FLoudnessResults,int,FIdentityFunctor,TDereferenceWrapper<FLoudnessResults,_ConvertToBlueprintResults_::__l2::FCompareLoudnessResults>_>
            ((FLoudnessResults *)local_78.Data,iVar7,local_res8[0],
             (FCompareLoudnessResults *)local_res10);
  (__return_storage_ptr__->AllocatorInstance).Data = local_78.Data;
  __return_storage_ptr__->ArrayNum = (int)local_70;
  __return_storage_ptr__->ArrayMax = local_70._4_4_;
  return __return_storage_ptr__;
}

// ConvertToBlueprintResults @ 14d820680

TArray<FMeterResults,TSizedDefaultAllocator<32>_> * __cdecl
ConvertToBlueprintResults
          (TArray<FMeterResults,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMeterSettings *param_1,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  TArray<FMeterResults,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_78;
  undefined8 local_70;
  FMeterResults local_68 [3];
  
  fVar5 = __real_410af967;
  fVar4 = __real_322bcc77;
  iVar2 = param_2->ArrayNum;
  iVar9 = 0;
  pFVar10 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<Audio::FMeterEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      iVar9 = (int)local_70;
    }
    if (pFVar10 == pFVar1) break;
    fVar11 = *(float *)(pFVar10 + 8);
    if (*(float *)(pFVar10 + 8) <= fVar4) {
      fVar11 = fVar4;
    }
    local_68[0].MeterValue = logf(fVar11);
    local_68[0].MeterValue = local_68[0].MeterValue * fVar5;
    fVar11 = *(float *)(pFVar10 + 0xc);
    if (*(float *)(pFVar10 + 0xc) <= fVar4) {
      fVar11 = fVar4;
    }
    local_68[0].PeakValue = logf(fVar11);
    local_68[0].PeakValue = local_68[0].PeakValue * fVar5;
    fVar11 = *(float *)(pFVar10 + 0x10);
    if (*(float *)(pFVar10 + 0x10) <= fVar4) {
      fVar11 = fVar4;
    }
    local_68[0].ClippingValue = logf(fVar11);
    local_68[0].NumSamplesClipping = *(int *)(pFVar10 + 0x14);
    local_68[0].ClippingValue = local_68[0].ClippingValue * fVar5;
    local_68[0].TimeSeconds = *(float *)(pFVar10 + 4);
    iVar7 = iVar9;
    if ((local_78.Data <= local_68) &&
       (local_68 < (FMeterResults *)(local_78.Data + (longlong)local_70._4_4_ * 0x14))) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FMeterResults,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      iVar7 = (int)local_70;
    }
    if (iVar7 == local_70._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,&local_78,(int *)((longlong)&local_70 + 4));
    }
    iVar9 = iVar7 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar9);
    pFVar10 = pFVar10 + 0x18;
    *(ulonglong *)(local_78.Data + (longlong)iVar7 * 0x14) =
         CONCAT44(local_68[0].MeterValue,local_68[0].TimeSeconds);
    *(ulonglong *)(local_78.Data + (longlong)iVar7 * 0x14 + 8) =
         CONCAT44(local_68[0].NumSamplesClipping,local_68[0].PeakValue);
    *(float *)(local_78.Data + (longlong)iVar7 * 0x14 + 0x10) = local_68[0].ClippingValue;
  }
  AlgoImpl::
  IntroSortInternal<FMeterResults,int,FIdentityFunctor,TDereferenceWrapper<FMeterResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
            ((FMeterResults *)local_78.Data,iVar9,local_res8[0],(<lambda_1> *)local_res18);
  (__return_storage_ptr__->AllocatorInstance).Data = local_78.Data;
  __return_storage_ptr__->ArrayNum = (int)local_70;
  __return_storage_ptr__->ArrayMax = local_70._4_4_;
  return __return_storage_ptr__;
}

// ConvertToBlueprintResults @ 14d820860

TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> * __cdecl
ConvertToBlueprintResults
          (TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          USynesthesiaSpectrumAnalysisSettings *param_1,
          TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  iVar3 = param_2->ArrayNum;
  pFVar11 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar11 + (longlong)iVar3 * 0x18;
  local_60.Data = (FScriptContainerElement *)0x0;
  pFVar10 = pFVar11 + 8;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Audio::FSynesthesiaSpectrumEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar1) break;
    local_50._0_4_ = 0.0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    if ((FScriptContainerElement *)(local_50 + 8) != pFVar10) {
      uVar4 = *(uint *)(pFVar10 + 8);
      _Src = *(void **)pFVar10;
      local_40 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar4,0,(ForAnyElementType *)(local_50 + 8),uVar4,(int *)(local_50 + 0x14));
        memcpy(local_48.Data,_Src,(longlong)(int)uVar4 << 2);
      }
    }
    local_50._0_4_ = *(undefined4 *)(pFVar10 + -4);
    if ((local_60.Data <= (FSynesthesiaSpectrumResults *)local_50) &&
       ((FScriptContainerElement *)local_50 < local_60.Data + (longlong)local_58._4_4_ * 0x18)) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
    }
    if ((int)local_58 == local_58._4_4_) {
      local_58._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_60,(int *)((longlong)&local_58 + 4));
    }
    FVar6.Data = local_48.Data;
    lVar9 = (longlong)(int)local_58;
    local_58._0_4_ = (int)local_58 + 1;
    *(undefined4 *)&local_60.Data[lVar9 * 0x18].field_0x0 = local_50._0_4_;
    *(undefined8 *)(local_60.Data + lVar9 * 0x18 + 8) = 0;
    pFVar2 = local_60.Data + lVar9 * 0x18 + 8;
    lVar12 = (longlong)(int)local_40;
    *(int *)(pFVar2 + 8) = (int)local_40;
    if ((int)local_40 == 0) {
      *(int *)(local_60.Data + lVar9 * 0x18 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_40,0,(ForAnyElementType *)pFVar2,(int)local_40,
                 (int *)(local_60.Data + lVar9 * 0x18 + 0x14));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar2,FVar6.Data,lVar12 << 2);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    pFVar11 = pFVar11 + 0x18;
    pFVar10 = pFVar10 + 0x18;
  }
  local_res8 = SUB81(__return_storage_ptr__,0);
  AlgoImpl::
  IntroSortInternal<FSynesthesiaSpectrumResults,int,FIdentityFunctor,TDereferenceWrapper<FSynesthesiaSpectrumResults,_ConvertToBlueprintResults_::__l2::<lambda_1>_>_>
            ((FSynesthesiaSpectrumResults *)local_60.Data,(int)local_58,local_res8,
             (<lambda_1> *)local_res20);
  FVar6.Data = local_60.Data;
  local_60.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = FVar6.Data;
  __return_storage_ptr__->ArrayNum = (int)local_58;
  __return_storage_ptr__->ArrayMax = local_58._4_4_;
  local_58 = 0;
  DestructItems<FSynesthesiaSpectrumResults,int>((FSynesthesiaSpectrumResults *)0x0,0);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeAudioSynesthesia @ 14d820b10

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSynesthesia(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaNRT @ 14d820b20

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaNRT(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioSynesthesia_init @ 14d820b30

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSynesthesia_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConstantQ @ 14d820b40

void __cdecl EmptyLinkFunctionForGeneratedCodeConstantQ(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConstantQNRT @ 14d820b50

void __cdecl EmptyLinkFunctionForGeneratedCodeConstantQNRT(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLKFS @ 14d820b60

void __cdecl EmptyLinkFunctionForGeneratedCodeLKFS(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLKFSNRT @ 14d820b70

void __cdecl EmptyLinkFunctionForGeneratedCodeLKFSNRT(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLoudness @ 14d820b80

void __cdecl EmptyLinkFunctionForGeneratedCodeLoudness(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLoudnessNRT @ 14d820b90

void __cdecl EmptyLinkFunctionForGeneratedCodeLoudnessNRT(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeter @ 14d820ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnsetNRT @ 14d820bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnsetNRT(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSynesthesiaSpectrumAnalysis @ 14d820bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeSynesthesiaSpectrumAnalysis(void)

{
  return;
}

// FOnConstantQResults_DelegateWrapper @ 14d820bd0

void __cdecl
FOnConstantQResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FConstantQResults *pFVar2;
  int local_28 [2];
  TArray<FConstantQResults,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    DestructItems<FConstantQResults,int>((FConstantQResults *)0x0,0);
    iVar1 = param_3->ArrayNum;
    pFVar2 = (FConstantQResults *)(param_3->AllocatorInstance).Data;
    local_20.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_20.ArrayMax == 0)) {
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar1,local_20.ArrayMax,&local_20.AllocatorInstance,iVar1,&local_20.ArrayMax
                );
      ConstructItems<FConstantQResults,FConstantQResults,int>
                (local_20.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  DestructItems<FConstantQResults,int>
            ((FConstantQResults *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
  if ((FConstantQResults *)local_20.AllocatorInstance.Data != (FConstantQResults *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// FOnLatestConstantQResults_DelegateWrapper @ 14d820cc0

void __cdecl
FOnLatestConstantQResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          FConstantQResults *param_3)

{
  int local_28 [2];
  float local_20;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = param_3->TimeSeconds;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28[0] = param_2;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&local_18,&param_3->SpectrumValues);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnLatestOverallLKFSResults_DelegateWrapper @ 14d820d20

void __cdecl
FOnLatestOverallLKFSResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FLKFSResults *param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  float local_10;
  
  local_28._0_4_ = param_2->Channel;
  local_28._4_4_ = param_2->Timestamp;
  uStack_20._0_4_ = param_2->Energy;
  uStack_20._4_4_ = param_2->Loudness;
  local_10 = param_2->GatedLoudness;
  local_18._0_4_ = param_2->ShortTermLoudness;
  local_18._4_4_ = param_2->IntegratedLoudness;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FOnLatestOverallLoudnessResults_DelegateWrapper @ 14d820d60

void __cdecl
FOnLatestOverallLoudnessResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FLoudnessResults *param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = param_2->Loudness;
  local_18._4_4_ = param_2->NormalizedLoudness;
  uStack_10._0_4_ = param_2->PerceptualEnergy;
  uStack_10._4_4_ = param_2->TimeSeconds;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnLatestOverallMeterResults_DelegateWrapper @ 14d820d90

void __cdecl
FOnLatestOverallMeterResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FMeterResults *param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  
  local_28._0_4_ = param_2->TimeSeconds;
  local_28._4_4_ = param_2->MeterValue;
  uStack_20._0_4_ = param_2->PeakValue;
  uStack_20._4_4_ = param_2->NumSamplesClipping;
  local_18 = param_2->ClippingValue;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FOnLatestPerChannelLKFSResults_DelegateWrapper @ 14d820dc0

void __cdecl
FOnLatestPerChannelLKFSResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          FLKFSResults *param_3)

{
  int local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined8 local_14;
  float local_c;
  
  local_24._0_4_ = param_3->Channel;
  local_24._4_4_ = param_3->Timestamp;
  uStack_1c._0_4_ = param_3->Energy;
  uStack_1c._4_4_ = param_3->Loudness;
  local_c = param_3->GatedLoudness;
  local_14._0_4_ = param_3->ShortTermLoudness;
  local_14._4_4_ = param_3->IntegratedLoudness;
  local_28 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FOnLatestPerChannelLoudnessResults_DelegateWrapper @ 14d820e00

void __cdecl
FOnLatestPerChannelLoudnessResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          FLoudnessResults *param_3)

{
  int local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  
  local_24._0_4_ = param_3->Loudness;
  local_24._4_4_ = param_3->NormalizedLoudness;
  uStack_1c._0_4_ = param_3->PerceptualEnergy;
  uStack_1c._4_4_ = param_3->TimeSeconds;
  local_28 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FOnLatestPerChannelMeterResults_DelegateWrapper @ 14d820e30

void __cdecl
FOnLatestPerChannelMeterResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          FMeterResults *param_3)

{
  int local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  float local_14;
  
  local_24._0_4_ = param_3->TimeSeconds;
  local_24._4_4_ = param_3->MeterValue;
  uStack_1c._0_4_ = param_3->PeakValue;
  uStack_1c._4_4_ = param_3->NumSamplesClipping;
  local_14 = param_3->ClippingValue;
  local_28 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// FOnLatestSpectrumResults_DelegateWrapper @ 14d820e60

void __cdecl
FOnLatestSpectrumResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          FSynesthesiaSpectrumResults *param_3)

{
  int local_28 [2];
  float local_20;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = param_3->TimeSeconds;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28[0] = param_2;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&local_18,&param_3->SpectrumValues);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnOverallLKFSResults_DelegateWrapper @ 14d820ec0

void __cdecl
FOnOverallLKFSResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> local_18;
  
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
                (0x1c,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 0x1c);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnOverallLoudnessResults_DelegateWrapper @ 14d820f70

void __cdecl
FOnOverallLoudnessResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> local_18;
  
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
                (0x10,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 4);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnOverallMeterResults_DelegateWrapper @ 14d821020

void __cdecl
FOnOverallMeterResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FMeterResults,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<FMeterResults,TSizedDefaultAllocator<32>_> local_18;
  
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
                (0x14,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 0x14);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnPerChannelLKFSResults_DelegateWrapper @ 14d8210d0

void __cdecl
FOnPerChannelLKFSResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  int local_28 [2];
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    uVar1 = param_3->ArrayNum;
    _Src = (param_3->AllocatorInstance).Data;
    local_20.ArrayMax = 0;
    local_20.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,uVar1,0,&local_20.AllocatorInstance,uVar1,&local_20.ArrayMax);
      memcpy(local_20.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 0x1c);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// FOnPerChannelLoudnessResults_DelegateWrapper @ 14d821180

void __cdecl
FOnPerChannelLoudnessResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  int local_28 [2];
  TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    uVar1 = param_3->ArrayNum;
    _Src = (param_3->AllocatorInstance).Data;
    local_20.ArrayMax = 0;
    local_20.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar1,0,&local_20.AllocatorInstance,uVar1,&local_20.ArrayMax);
      memcpy(local_20.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 4);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// FOnPerChannelMeterResults_DelegateWrapper @ 14d821230

void __cdecl
FOnPerChannelMeterResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          TArray<FMeterResults,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  int local_28 [2];
  TArray<FMeterResults,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    uVar1 = param_3->ArrayNum;
    _Src = (param_3->AllocatorInstance).Data;
    local_20.ArrayMax = 0;
    local_20.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,uVar1,0,&local_20.AllocatorInstance,uVar1,&local_20.ArrayMax);
      memcpy(local_20.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 0x14);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// FOnSpectrumResults_DelegateWrapper @ 14d8212e0

void __cdecl
FOnSpectrumResults_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FSynesthesiaSpectrumResults *pFVar2;
  int local_28 [2];
  TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    DestructItems<FSynesthesiaSpectrumResults,int>((FSynesthesiaSpectrumResults *)0x0,0);
    iVar1 = param_3->ArrayNum;
    pFVar2 = (FSynesthesiaSpectrumResults *)(param_3->AllocatorInstance).Data;
    local_20.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_20.ArrayMax == 0)) {
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar1,local_20.ArrayMax,&local_20.AllocatorInstance,iVar1,&local_20.ArrayMax
                );
      ConstructItems<FSynesthesiaSpectrumResults,FSynesthesiaSpectrumResults,int>
                (local_20.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  DestructItems<FSynesthesiaSpectrumResults,int>
            ((FSynesthesiaSpectrumResults *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
  if ((FSynesthesiaSpectrumResults *)local_20.AllocatorInstance.Data !=
      (FSynesthesiaSpectrumResults *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// InterpolateLoudness @ 14d8262f0

float __cdecl
LKFSNRTPrivate::InterpolateLoudness(TArrayView<FLKFSNRTResults_const_,int> *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FLKFSNRTResults *pFVar6;
  FLKFSNRTResults *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  pFVar6 = param_1->DataPtr;
  lVar1 = *(longlong *)&param_1->ArrayNum;
  iVar11 = (int)lVar1;
  if (iVar11 != 0) {
    uVar9 = 0;
    iVar5 = iVar11;
    while (uVar10 = uVar9, 0 < iVar5) {
      iVar3 = (int)lVar1;
      lVar1 = (longlong)iVar3 / 2;
      iVar5 = (int)lVar1;
      uVar9 = iVar5 + uVar10 + iVar3 % 2;
      if (param_2 < pFVar6[(int)(iVar5 + uVar10)].Timestamp) {
        uVar9 = uVar10;
      }
    }
    uVar9 = iVar11 - 1;
    uVar8 = uVar9;
    if ((int)(uVar10 - 1) < (int)uVar9) {
      uVar8 = uVar10 - 1;
    }
    uVar12 = 0;
    if (0 < (int)uVar8) {
      uVar12 = uVar8;
    }
    if ((int)uVar10 < (int)uVar9) {
      uVar9 = uVar10;
    }
    uVar10 = 0;
    if (0 < (int)uVar9) {
      uVar10 = uVar9;
    }
    uVar9 = 0;
    if ((int)uVar12 < iVar11) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar13 = (float)(*pcVar2)();
      return fVar13;
    }
    uVar9 = 0;
    if ((int)uVar10 < iVar11) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar13 = (float)(*pcVar2)();
      return fVar13;
    }
    fVar13 = pFVar6[(int)uVar10].Timestamp - pFVar6[(int)uVar12].Timestamp;
    if (fVar13 <= __real_322bcc77) {
      fVar13 = __real_322bcc77;
    }
    fVar13 = (param_2 - pFVar6[(int)uVar12].Timestamp) / fVar13;
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if ((uVar12 != 0xffffffff) && (uVar10 != 0xffffffff)) {
      pFVar6 = TArrayView<FLKFSNRTResults_const_,int>::operator[](param_1,uVar10);
      pFVar7 = TArrayView<FLKFSNRTResults_const_,int>::operator[](param_1,uVar12);
      return (pFVar6->Loudness - pFVar7->Loudness) * fVar13 + pFVar7->Loudness;
    }
  }
  return 0.0;
}

// InterpolateLoudness @ 14d826500

float __cdecl
LoudnessNRTPrivate::InterpolateLoudness
          (TArrayView<Audio::FLoudnessDatum_const_,int> *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FLoudnessDatum *pFVar6;
  FLoudnessDatum *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  pFVar6 = param_1->DataPtr;
  lVar1 = *(longlong *)&param_1->ArrayNum;
  iVar11 = (int)lVar1;
  if (iVar11 != 0) {
    uVar9 = 0;
    iVar5 = iVar11;
    while (uVar10 = uVar9, 0 < iVar5) {
      iVar3 = (int)lVar1;
      lVar1 = (longlong)iVar3 / 2;
      iVar5 = (int)lVar1;
      uVar9 = iVar5 + uVar10 + iVar3 % 2;
      if (param_2 < pFVar6[(int)(iVar5 + uVar10)].Timestamp) {
        uVar9 = uVar10;
      }
    }
    uVar9 = iVar11 - 1;
    uVar8 = uVar9;
    if ((int)(uVar10 - 1) < (int)uVar9) {
      uVar8 = uVar10 - 1;
    }
    uVar12 = 0;
    if (0 < (int)uVar8) {
      uVar12 = uVar8;
    }
    if ((int)uVar10 < (int)uVar9) {
      uVar9 = uVar10;
    }
    uVar10 = 0;
    if (0 < (int)uVar9) {
      uVar10 = uVar9;
    }
    uVar9 = 0;
    if ((int)uVar12 < iVar11) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar13 = (float)(*pcVar2)();
      return fVar13;
    }
    uVar9 = 0;
    if ((int)uVar10 < iVar11) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar13 = (float)(*pcVar2)();
      return fVar13;
    }
    fVar13 = pFVar6[(int)uVar10].Timestamp - pFVar6[(int)uVar12].Timestamp;
    if (fVar13 <= __real_322bcc77) {
      fVar13 = __real_322bcc77;
    }
    fVar13 = (param_2 - pFVar6[(int)uVar12].Timestamp) / fVar13;
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if ((uVar12 != 0xffffffff) && (uVar10 != 0xffffffff)) {
      pFVar6 = TArrayView<Audio::FLoudnessDatum_const_,int>::operator[](param_1,uVar10);
      pFVar7 = TArrayView<Audio::FLoudnessDatum_const_,int>::operator[](param_1,uVar12);
      return (pFVar6->Loudness - pFVar7->Loudness) * fVar13 + pFVar7->Loudness;
    }
  }
  return 0.0;
}

// InterpolateSpectrumAtTimestamp @ 14d826700

void __cdecl
`anonymous_namespace'::InterpolateSpectrumAtTimestamp
          (TArrayView<Audio::FConstantQFrame_const_,int> *param_1,float param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
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
  bool bVar18;
  FConstantQFrame *pFVar19;
  FConstantQFrame *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  float fVar36;
  ulonglong uVar29;
  
  uVar26 = 0;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  pFVar19 = param_1->DataPtr;
  iVar27 = (int)*(ulonglong *)&param_1->ArrayNum;
  if (iVar27 != 0) {
    uVar33 = *(ulonglong *)&param_1->ArrayNum & 0xffffffff;
    uVar29 = uVar26;
    uVar31 = 0;
    if (0 < iVar27) {
      do {
        uVar31 = (uint)uVar33;
        uVar32 = uVar31 >> 1;
        uVar33 = (ulonglong)uVar32;
        iVar23 = uVar32 + (uint)uVar29;
        uVar31 = iVar23 + (uVar31 & 1);
        if (param_2 < pFVar19[iVar23].Timestamp) {
          uVar31 = (uint)uVar29;
        }
        uVar29 = (ulonglong)uVar31;
      } while (uVar32 != 0);
    }
    uVar32 = iVar27 - 1;
    uVar28 = uVar32;
    if ((int)(uVar31 - 1) < (int)uVar32) {
      uVar28 = uVar31 - 1;
    }
    uVar35 = 0;
    if (0 < (int)uVar28) {
      uVar35 = uVar28;
    }
    if ((int)uVar31 < (int)uVar32) {
      uVar32 = uVar31;
    }
    uVar31 = 0;
    if (0 < (int)uVar32) {
      uVar31 = uVar32;
    }
    uVar32 = 0;
    if ((int)uVar35 < iVar27) {
      uVar32 = ~uVar35 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar28 = 0;
    uVar32 = uVar28;
    if ((int)uVar31 < iVar27) {
      uVar32 = ~uVar31 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar36 = pFVar19[(int)uVar31].Timestamp - pFVar19[(int)uVar35].Timestamp;
    if (fVar36 <= __real_322bcc77) {
      fVar36 = __real_322bcc77;
    }
    fVar36 = (param_2 - pFVar19[(int)uVar35].Timestamp) / fVar36;
    if (__real_3f800000 <= fVar36) {
      fVar36 = __real_3f800000;
    }
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
    if ((uVar35 != 0xffffffff) && (uVar31 != 0xffffffff)) {
      pFVar19 = TArrayView<Audio::FConstantQFrame_const_,int>::operator[](param_1,uVar35);
      pFVar20 = TArrayView<Audio::FConstantQFrame_const_,int>::operator[](param_1,uVar31);
      uVar31 = (pFVar19->Spectrum).ArrayNum;
      lVar25 = (longlong)(int)uVar31;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar31,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
      pFVar3 = (pFVar19->Spectrum).AllocatorInstance.Data;
      pFVar4 = (pFVar20->Spectrum).AllocatorInstance.Data;
      pFVar5 = (param_3->AllocatorInstance).Data;
      if ((0 < (int)uVar31) && (0xf < uVar31)) {
        lVar22 = (longlong)(int)(uVar31 - 1);
        if (((pFVar4 + lVar22 * 4 < pFVar5) || (pFVar5 + lVar22 * 4 < pFVar4)) &&
           ((pFVar3 + lVar22 * 4 < pFVar5 || (pFVar5 + lVar22 * 4 < pFVar3)))) {
          uVar32 = uVar31 & 0x8000000f;
          if ((int)uVar32 < 0) {
            uVar32 = (uVar32 - 1 | 0xfffffff0) + 1;
          }
          lVar22 = (longlong)pFVar3 - (longlong)pFVar4;
          pFVar21 = pFVar4 + 0x10;
          lVar24 = (longlong)pFVar5 - (longlong)pFVar4;
          uVar29 = uVar26;
          do {
            pFVar2 = pFVar21 + lVar22 + -0x10;
            fVar7 = *(float *)(pFVar2 + 4);
            fVar8 = *(float *)(pFVar2 + 8);
            fVar9 = *(float *)(pFVar2 + 0xc);
            uVar28 = (int)uVar29 + 0x10;
            uVar29 = (ulonglong)uVar28;
            uVar26 = uVar26 + 0x10;
            fVar10 = *(float *)(pFVar21 + -0xc);
            fVar11 = *(float *)(pFVar21 + -8);
            fVar12 = *(float *)(pFVar21 + -4);
            pFVar1 = pFVar21 + lVar22;
            fVar13 = *(float *)pFVar1;
            fVar14 = *(float *)(pFVar1 + 4);
            fVar15 = *(float *)(pFVar1 + 8);
            fVar16 = *(float *)(pFVar1 + 0xc);
            pFVar1 = pFVar21 + lVar24 + -0x10;
            *(float *)pFVar1 =
                 (*(float *)(pFVar21 + -0x10) - *(float *)pFVar2) * fVar36 + *(float *)pFVar2;
            *(float *)(pFVar1 + 4) = (fVar10 - fVar7) * fVar36 + fVar7;
            *(float *)(pFVar1 + 8) = (fVar11 - fVar8) * fVar36 + fVar8;
            *(float *)(pFVar1 + 0xc) = (fVar12 - fVar9) * fVar36 + fVar9;
            fVar7 = *(float *)(pFVar21 + 4);
            fVar8 = *(float *)(pFVar21 + 8);
            fVar9 = *(float *)(pFVar21 + 0xc);
            pFVar1 = pFVar21 + lVar22 + 0x10;
            fVar10 = *(float *)pFVar1;
            fVar11 = *(float *)(pFVar1 + 4);
            fVar12 = *(float *)(pFVar1 + 8);
            fVar17 = *(float *)(pFVar1 + 0xc);
            pFVar1 = pFVar21 + lVar24;
            *(float *)pFVar1 = (*(float *)pFVar21 - fVar13) * fVar36 + fVar13;
            *(float *)(pFVar1 + 4) = (fVar7 - fVar14) * fVar36 + fVar14;
            *(float *)(pFVar1 + 8) = (fVar8 - fVar15) * fVar36 + fVar15;
            *(float *)(pFVar1 + 0xc) = (fVar9 - fVar16) * fVar36 + fVar16;
            fVar7 = *(float *)(pFVar21 + 0x14);
            fVar8 = *(float *)(pFVar21 + 0x18);
            fVar9 = *(float *)(pFVar21 + 0x1c);
            pFVar1 = pFVar21 + lVar22 + 0x20;
            fVar13 = *(float *)pFVar1;
            fVar14 = *(float *)(pFVar1 + 4);
            fVar15 = *(float *)(pFVar1 + 8);
            fVar16 = *(float *)(pFVar1 + 0xc);
            pFVar1 = pFVar21 + lVar24 + 0x10;
            *(float *)pFVar1 = (*(float *)(pFVar21 + 0x10) - fVar10) * fVar36 + fVar10;
            *(float *)(pFVar1 + 4) = (fVar7 - fVar11) * fVar36 + fVar11;
            *(float *)(pFVar1 + 8) = (fVar8 - fVar12) * fVar36 + fVar12;
            *(float *)(pFVar1 + 0xc) = (fVar9 - fVar17) * fVar36 + fVar17;
            fVar7 = *(float *)(pFVar21 + 0x24);
            fVar8 = *(float *)(pFVar21 + 0x28);
            fVar9 = *(float *)(pFVar21 + 0x2c);
            pFVar1 = pFVar21 + lVar24 + 0x20;
            *(float *)pFVar1 = (*(float *)(pFVar21 + 0x20) - fVar13) * fVar36 + fVar13;
            *(float *)(pFVar1 + 4) = (fVar7 - fVar14) * fVar36 + fVar14;
            *(float *)(pFVar1 + 8) = (fVar8 - fVar15) * fVar36 + fVar15;
            *(float *)(pFVar1 + 0xc) = (fVar9 - fVar16) * fVar36 + fVar16;
            pFVar21 = pFVar21 + 0x40;
          } while ((longlong)uVar26 < (longlong)(int)(uVar31 - uVar32));
        }
      }
      lVar22 = (longlong)(int)uVar28;
      if (lVar22 < lVar25) {
        if (3 < lVar25 - lVar22) {
          pFVar21 = pFVar4 + (lVar22 + 1) * 4;
          lVar30 = (longlong)pFVar3 - (longlong)pFVar4;
          lVar34 = (longlong)pFVar5 - (longlong)pFVar4;
          lVar24 = ((lVar25 - lVar22) - 4U >> 2) + 1;
          lVar22 = lVar22 + lVar24 * 4;
          do {
            *(float *)(pFVar21 + lVar34 + -4) =
                 (*(float *)(pFVar21 + -4) - *(float *)(pFVar21 + lVar30 + -4)) * fVar36 +
                 *(float *)(pFVar21 + lVar30 + -4);
            *(float *)(pFVar21 + lVar34) =
                 (*(float *)pFVar21 - *(float *)(pFVar21 + lVar30)) * fVar36 +
                 *(float *)(pFVar21 + lVar30);
            *(float *)(pFVar21 + lVar34 + 4) =
                 (*(float *)(pFVar21 + 4) - *(float *)(pFVar21 + lVar30 + 4)) * fVar36 +
                 *(float *)(pFVar21 + lVar30 + 4);
            *(float *)(pFVar21 + lVar34 + 8) =
                 (*(float *)(pFVar21 + 8) - *(float *)(pFVar21 + lVar30 + 8)) * fVar36 +
                 *(float *)(pFVar21 + lVar30 + 8);
            pFVar21 = pFVar21 + 0x10;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          if (lVar25 <= lVar22) {
            return;
          }
        }
        pFVar21 = pFVar4 + lVar22 * 4;
        lVar25 = lVar25 - lVar22;
        do {
          *(float *)(pFVar21 + ((longlong)pFVar5 - (longlong)pFVar4)) =
               (*(float *)pFVar21 - *(float *)(pFVar21 + ((longlong)pFVar3 - (longlong)pFVar4))) *
               fVar36 + *(float *)(pFVar21 + ((longlong)pFVar3 - (longlong)pFVar4));
          pFVar21 = pFVar21 + 4;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
    }
  }
  return;
}

// Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister @ 14d827650

UClass * __cdecl Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaNRTSettings",
               &Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton,
               UAudioSynesthesiaNRTSettings::StaticRegisterNativesUAudioSynesthesiaNRTSettings,0x28,
               8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioSynesthesiaNRTSettings>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaNRTSettings>,local_res8,
               UAudioAnalyzerNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.InnerSingleton;
}

// Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister @ 14d827710

UClass * __cdecl Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaNRT",
               &Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton,
               UAudioSynesthesiaNRT::StaticRegisterNativesUAudioSynesthesiaNRT,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioSynesthesiaNRT>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaNRT>,local_res8,
               UAudioAnalyzerNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaNRT.InnerSingleton;
}

// Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister @ 14d8277d0

UClass * __cdecl Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaSettings",
               &Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton,
               UAudioSynesthesiaSettings::StaticRegisterNativesUAudioSynesthesiaSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioSynesthesiaSettings>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaSettings>,local_res8,
               UAudioAnalyzerSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton;
}

// Z_Construct_UClass_UConstantQAnalyzer_NoRegister @ 14d827890

UClass * __cdecl Z_Construct_UClass_UConstantQAnalyzer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQAnalyzer",
               &Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton,
               UConstantQAnalyzer::StaticRegisterNativesUConstantQAnalyzer,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstantQAnalyzer>,
               InternalVTableHelperCtorCaller<UConstantQAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton;
}

// Z_Construct_UClass_UConstantQNRT_NoRegister @ 14d827950

UClass * __cdecl Z_Construct_UClass_UConstantQNRT_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQNRT",
               &Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton,
               UConstantQNRT::StaticRegisterNativesUConstantQNRT,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstantQNRT>,
               InternalVTableHelperCtorCaller<UConstantQNRT>,local_res8,
               UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton;
}

// Z_Construct_UClass_ULKFSAnalyzer_NoRegister @ 14d827a10

UClass * __cdecl Z_Construct_UClass_ULKFSAnalyzer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSAnalyzer",
               &Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton,
               ULKFSAnalyzer::StaticRegisterNativesULKFSAnalyzer,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULKFSAnalyzer>,
               InternalVTableHelperCtorCaller<ULKFSAnalyzer>,local_res8,UAudioAnalyzer::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton;
}

// Z_Construct_UClass_ULKFSNRT_NoRegister @ 14d827ad0

UClass * __cdecl Z_Construct_UClass_ULKFSNRT_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSNRT",
               &Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton,
               ULKFSNRT::StaticRegisterNativesULKFSNRT,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULKFSNRT>,InternalVTableHelperCtorCaller<ULKFSNRT>,
               local_res8,UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton;
}

// Z_Construct_UClass_ULoudnessAnalyzer_NoRegister @ 14d827b90

UClass * __cdecl Z_Construct_UClass_ULoudnessAnalyzer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessAnalyzer",
               &Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton,
               ULoudnessAnalyzer::StaticRegisterNativesULoudnessAnalyzer,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULoudnessAnalyzer>,
               InternalVTableHelperCtorCaller<ULoudnessAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton;
}

// Z_Construct_UClass_ULoudnessNRT_NoRegister @ 14d827c50

UClass * __cdecl Z_Construct_UClass_ULoudnessNRT_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessNRT",
               &Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton,
               ULoudnessNRT::StaticRegisterNativesULoudnessNRT,0x80,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULoudnessNRT>,
               InternalVTableHelperCtorCaller<ULoudnessNRT>,local_res8,
               UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton;
}

// Z_Construct_UClass_UMeterAnalyzer_NoRegister @ 14d827d10

UClass * __cdecl Z_Construct_UClass_UMeterAnalyzer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"MeterAnalyzer",
               &Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton,
               UMeterAnalyzer::StaticRegisterNativesUMeterAnalyzer,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeterAnalyzer>,
               InternalVTableHelperCtorCaller<UMeterAnalyzer>,local_res8,UAudioAnalyzer::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton;
}

// Z_Construct_UClass_UOnsetNRT_NoRegister @ 14d827dd0

UClass * __cdecl Z_Construct_UClass_UOnsetNRT_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"OnsetNRT",
               &Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton,
               UOnsetNRT::StaticRegisterNativesUOnsetNRT,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOnsetNRT>,InternalVTableHelperCtorCaller<UOnsetNRT>,
               local_res8,UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton;
}

// Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_NoRegister @ 14d827e90

UClass * __cdecl Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"SynesthesiaSpectrumAnalyzer",
               &Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton,
               USynesthesiaSpectrumAnalyzer::StaticRegisterNativesUSynesthesiaSpectrumAnalyzer,0x118
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USynesthesiaSpectrumAnalyzer>,
               InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton;
}

// IMPLEMENT_MODULE_AudioSynesthesia @ 14d829750

void __cdecl IMPLEMENT_MODULE_AudioSynesthesia(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FFTSizeMap'' @ 15045a4e0

void __cdecl
``anonymous_namespace'::BPConstantQFFTSizeEnumToInt'::__l2::
_dynamic_atexit_destructor_for__FFTSizeMap__(void)

{
  `BPConstantQFFTSizeEnumToInt'::`2'::FFTSizeMap._72_4_ = 0;
  if (`BPConstantQFFTSizeEnumToInt'::`2'::FFTSizeMap._64_8_ != 0) {
    FMemory::Free((void *)`BPConstantQFFTSizeEnumToInt'::`2'::FFTSizeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EConstantQFFTSizeEnum,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EConstantQFFTSizeEnum,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`BPConstantQFFTSizeEnumToInt'::`2'::FFTSizeMap);
  return;
}

// `dynamic_atexit_destructor_for_'FFTSizeMap'' @ 15045a520

void __cdecl
`ConstantQPrivate::BPConstantQFFTSizeEnumToInt'::__l2::_dynamic_atexit_destructor_for__FFTSizeMap__
          (void)

{
  FFTSizeMap._72_4_ = 0;
  if (FFTSizeMap._64_8_ != 0) {
    FMemory::Free((void *)FFTSizeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EConstantQFFTSizeEnum,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EConstantQFFTSizeEnum,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FFTSizeMap);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioSynesthesia'' @ 15045a560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioSynesthesia__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioSynesthesia);
  return;
}

// `dynamic_atexit_destructor_for_'NormalizationMap'' @ 15045a580

void __cdecl
``anonymous_namespace'::BPCQTNormalizationToAudioCQTNormalization'::__l2::
_dynamic_atexit_destructor_for__NormalizationMap__(void)

{
  `BPCQTNormalizationToAudioCQTNormalization'::`2'::NormalizationMap._72_4_ = 0;
  if (`BPCQTNormalizationToAudioCQTNormalization'::`2'::NormalizationMap._64_8_ != 0) {
    FMemory::Free((void *)`BPCQTNormalizationToAudioCQTNormalization'::`2'::NormalizationMap._64_8_)
    ;
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`BPCQTNormalizationToAudioCQTNormalization'::`2'::NormalizationMap);
  return;
}

// `dynamic_atexit_destructor_for_'NormalizationMap'' @ 15045a5c0

void __cdecl
`ConstantQPrivate::BPCQTNormalizationToAudioCQTNormalization'::__l2::
_dynamic_atexit_destructor_for__NormalizationMap__(void)

{
  NormalizationMap._72_4_ = 0;
  if (NormalizationMap._64_8_ != 0) {
    FMemory::Free((void *)NormalizationMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&NormalizationMap);
  return;
}

// `dynamic_atexit_destructor_for_'SpectrumTypeMap'' @ 15045a600

void __cdecl
``anonymous_namespace'::BPSpectrumTypeToAudioSpectrumType'::__l2::
_dynamic_atexit_destructor_for__SpectrumTypeMap__(void)

{
  `BPSpectrumTypeToAudioSpectrumType'::`2'::SpectrumTypeMap._72_4_ = 0;
  if (`BPSpectrumTypeToAudioSpectrumType'::`2'::SpectrumTypeMap._64_8_ != 0) {
    FMemory::Free((void *)`BPSpectrumTypeToAudioSpectrumType'::`2'::SpectrumTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`BPSpectrumTypeToAudioSpectrumType'::`2'::SpectrumTypeMap);
  return;
}

// `dynamic_atexit_destructor_for_'SpectrumTypeMap'' @ 15045a640

void __cdecl
`ConstantQPrivate::BPSpectrumTypeToAudioSpectrumType'::__l2::
_dynamic_atexit_destructor_for__SpectrumTypeMap__(void)

{
  SpectrumTypeMap._72_4_ = 0;
  if (SpectrumTypeMap._64_8_ != 0) {
    FMemory::Free((void *)SpectrumTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&SpectrumTypeMap);
  return;
}

// `dynamic_atexit_destructor_for_'SubMenus'' @ 15045a680

void __cdecl
`UAudioSynesthesiaNRT::GetAssetActionSubmenus'::__l2::_dynamic_atexit_destructor_for__SubMenus__
          (void)

{
  DestructItems<FText,int>((FText *)SubMenus.AllocatorInstance.Data,SubMenus.ArrayNum);
  if (SubMenus.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(SubMenus.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SubMenus'' @ 15045a6c0

void __cdecl
`UAudioSynesthesiaNRTSettings::GetAssetActionSubmenus'::__l2::
_dynamic_atexit_destructor_for__SubMenus__(void)

{
  DestructItems<FText,int>((FText *)SubMenus.AllocatorInstance.Data,SubMenus.ArrayNum);
  if (SubMenus.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(SubMenus.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WindowTypeMap'' @ 15045a700

void __cdecl
``anonymous_namespace'::BPWindowTypeToAudioWindowType'::__l2::
_dynamic_atexit_destructor_for__WindowTypeMap__(void)

{
  `BPWindowTypeToAudioWindowType'::`2'::WindowTypeMap._72_4_ = 0;
  if (`BPWindowTypeToAudioWindowType'::`2'::WindowTypeMap._64_8_ != 0) {
    FMemory::Free((void *)`BPWindowTypeToAudioWindowType'::`2'::WindowTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EFFTWindowType,enum_Audio::EWindowType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EFFTWindowType,enum_Audio::EWindowType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`BPWindowTypeToAudioWindowType'::`2'::WindowTypeMap);
  return;
}

// `dynamic_atexit_destructor_for_'WindowTypeMap'' @ 15045a740

void __cdecl
`ConstantQPrivate::BPWindowTypeToAudioWindowType'::__l2::
_dynamic_atexit_destructor_for__WindowTypeMap__(void)

{
  WindowTypeMap._72_4_ = 0;
  if (WindowTypeMap._64_8_ != 0) {
    FMemory::Free((void *)WindowTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EFFTWindowType,enum_Audio::EWindowType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EFFTWindowType,enum_Audio::EWindowType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&WindowTypeMap);
  return;
}

