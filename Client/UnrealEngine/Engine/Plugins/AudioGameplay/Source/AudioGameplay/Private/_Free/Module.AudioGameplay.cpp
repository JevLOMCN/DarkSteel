// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 194

// `dynamic_initializer_for_'AudioGameplayLog'' @ 1413e2740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__AudioGameplayLog__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&AudioGameplayLog,L"AudioGameplayLog",Log,All);
  atexit(_dynamic_atexit_destructor_for__AudioGameplayLog__);
  return;
}

// `dynamic_initializer_for_'CVarEnabled'' @ 1413e2780

void __cdecl AudioGameplayTagCacheConsoleVariables::_dynamic_initializer_for__CVarEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnabled,L"au.GameplayTagCache.Enabled",&bEnabled,
             L"Cache any string concatenations used to build Gameplay Tags at runtime.\n0: Disable, 1: Enable (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPrintActiveSounds'' @ 1413e27d0

void __cdecl AudioComponentGroupCVars::_dynamic_initializer_for__CVarPrintActiveSounds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrintActiveSounds,L"au.AudioComponentGroup.debug.PrintActiveSounds",
             &PrintActiveSounds,
             L"Display the active sounds on each actor.\n0: Disable (default), 1: Enable",1);
  atexit(_dynamic_atexit_destructor_for__CVarPrintActiveSounds__);
  return;
}

// `dynamic_initializer_for_'CVarPrintSoundParams'' @ 1413e2820

void __cdecl AudioComponentGroupCVars::_dynamic_initializer_for__CVarPrintSoundParams__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrintSoundParams,L"au.AudioComponentGroup.debug.PrintSoundParams",
             &PrintSoundParams,
             L"Set to 1 to print sound parameters for each actor.\n0: Disable (default), 1: Enable",
             1);
  atexit(_dynamic_atexit_destructor_for__CVarPrintSoundParams__);
  return;
}

// `dynamic_initializer_for_'CVarPrintSoundParamsActorFilter'' @ 1413e2870

void __cdecl
AudioComponentGroupCVars::_dynamic_initializer_for__CVarPrintSoundParamsActorFilter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrintSoundParamsActorFilter,L"au.AudioComponentGroup.debug.ActorFilter",
             &PrintSoundParamsActorFilter,
             L"Only display params on actors that contain this string. Disable filtering with All",1
            );
  atexit(_dynamic_atexit_destructor_for__CVarPrintSoundParamsActorFilter__);
  return;
}

// `dynamic_initializer_for_'CVarPrintSoundParamsParamFilter'' @ 1413e28c0

void __cdecl
AudioComponentGroupCVars::_dynamic_initializer_for__CVarPrintSoundParamsParamFilter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrintSoundParamsParamFilter,L"au.AudioComponentGroup.debug.ParamFilter",
             &PrintSoundParamsParamFilter,
             L"Only display params with names that contain this string. Disable filtering with All",
             1);
  atexit(_dynamic_atexit_destructor_for__CVarPrintSoundParamsParamFilter__);
  return;
}

// `dynamic_initializer_for_'CVarPrintZOffset'' @ 1413e2910

void __cdecl AudioComponentGroupCVars::_dynamic_initializer_for__CVarPrintZOffset__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrintZOffset,L"au.AudioComponentGroup.debug.ActorZOffset",&ZOffset,
             L"How High above an actor to print debug info. Default: 150",1);
  atexit(_dynamic_atexit_destructor_for__CVarPrintZOffset__);
  return;
}

// `dynamic_initializer_for_'CVarSetParamOnlyOnValueChange'' @ 1413e2960

void __cdecl
AudioParameterComponentConsoleVariables::_dynamic_initializer_for__CVarSetParamOnlyOnValueChange__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSetParamOnlyOnValueChange,L"au.AudioParameterComponent.SetParamOnlyOnValueChange",
             &bSetParamOnlyOnValueChange,
             L"Only sets parameters when the underlying value has changed.\n0: Disable, 1: Enable (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSetParamOnlyOnValueChange__);
  return;
}

// `dynamic_initializer_for_'LogAudioParameterComponent'' @ 1413e29b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioParameterComponent__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioParameterComponent,L"LogAudioParameterComponent",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioParameterComponent__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioGameplay'' @ 1413e29f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioGameplay__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioGameplay";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioGameplay",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioGameplayModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UAudioGameplayCondition_ConditionMet'' @ 1413e2a40

void __cdecl _dynamic_initializer_for__NAME_UAudioGameplayCondition_ConditionMet__(void)

{
  FName::FName(&NAME_UAudioGameplayCondition_ConditionMet,L"ConditionMet");
  return;
}

// `dynamic_initializer_for_'NAME_UAudioGameplayCondition_ConditionMet_Position'' @ 1413e2a60

void __cdecl _dynamic_initializer_for__NAME_UAudioGameplayCondition_ConditionMet_Position__(void)

{
  FName::FName(&NAME_UAudioGameplayCondition_ConditionMet_Position,L"ConditionMet_Position");
  return;
}

// `dynamic_initializer_for_'NAME_UAudioGameplayVolumeInteraction_OnListenerEnter'' @ 1413e2a80

void __cdecl _dynamic_initializer_for__NAME_UAudioGameplayVolumeInteraction_OnListenerEnter__(void)

{
  FName::FName(&NAME_UAudioGameplayVolumeInteraction_OnListenerEnter,L"OnListenerEnter");
  return;
}

// `dynamic_initializer_for_'NAME_UAudioGameplayVolumeInteraction_OnListenerExit'' @ 1413e2aa0

void __cdecl _dynamic_initializer_for__NAME_UAudioGameplayVolumeInteraction_OnListenerExit__(void)

{
  FName::FName(&NAME_UAudioGameplayVolumeInteraction_OnListenerExit,L"OnListenerExit");
  return;
}

// `dynamic_initializer_for_'PrintSoundParamsActorFilter'' @ 1413e2ac0

void __cdecl AudioComponentGroupCVars::_dynamic_initializer_for__PrintSoundParamsActorFilter__(void)

{
  ::FString::FString(&PrintSoundParamsActorFilter,L"All");
  atexit(_dynamic_atexit_destructor_for__PrintSoundParamsActorFilter__);
  return;
}

// `dynamic_initializer_for_'PrintSoundParamsParamFilter'' @ 1413e2af0

void __cdecl AudioComponentGroupCVars::_dynamic_initializer_for__PrintSoundParamsParamFilter__(void)

{
  ::FString::FString(&PrintSoundParamsParamFilter,L"All");
  atexit(_dynamic_atexit_destructor_for__PrintSoundParamsParamFilter__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h__Script_AudioGameplay_3106815571'' @ 1413e2b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h__Script_AudioGameplay_3106815571__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h__Script_AudioGameplay_375165249'' @ 1413e2b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h__Script_AudioGameplay_375165249__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h__Script_AudioGameplay_998823259'' @ 1413e2ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h__Script_AudioGameplay_998823259__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h__Script_AudioGameplay_565066788'' @ 1413e2be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h__Script_AudioGameplay_565066788__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayComponent_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h__Script_AudioGameplay_444987886'' @ 1413e2c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h__Script_AudioGameplay_444987886__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h__Script_AudioGameplay_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayTagCacheSubsystem_h__Script_AudioGameplay_1303702311'' @ 1413e2c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayTagCacheSubsystem_h__Script_AudioGameplay_1303702311__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayTagCacheSubsystem_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h__Script_AudioGameplay_1241506531'' @ 1413e2cb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h__Script_AudioGameplay_1241506531__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h__Script_AudioGameplay_2308452664'' @ 1413e2cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h__Script_AudioGameplay_2308452664__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h__Script_AudioGameplay_4276976377'' @ 1413e2d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h__Script_AudioGameplay_4276976377__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h__Script_AudioGameplay_2373916550'' @ 1413e2d70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h__Script_AudioGameplay_2373916550__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplay",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h__Script_AudioGameplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioGameplay'' @ 1413e2db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioGameplay__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xb1a240b;
  local_res8[0].DeclarationsHash = 0x12b54454;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioGameplay,L"/Script/AudioGameplay",
             &Z_Registration_Info_UPackage__Script_AudioGameplay,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_AudioGameplay'' @ 1413e2df0

void __cdecl _dynamic_initializer_for___GCsvCategory_AudioGameplay__(void)

{
  FString::operator=(&_GCsvCategory_AudioGameplay.Name,L"AudioGameplay");
  _GCsvCategory_AudioGameplay.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_AudioGameplay.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_AudioGameplay__);
  return;
}

// Z_Construct_UClass_UAudioAssetUserData @ 14d981560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioAssetUserData(void)

{
  if (Z_Registration_Info_UClass_UAudioAssetUserData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioAssetUserData.OuterSingleton,
               &Z_Construct_UClass_UAudioAssetUserData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioAssetUserData.OuterSingleton;
}

// Z_Construct_UFunction_UAudioAssetUserData_GetAllTags @ 14d9815a0

UFunction * __cdecl Z_Construct_UFunction_UAudioAssetUserData_GetAllTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioAssetUserData_GetAllTags_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioAssetUserData_GetFilteredTags @ 14d9815e0

UFunction * __cdecl Z_Construct_UFunction_UAudioAssetUserData_GetFilteredTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioAssetUserData_GetFilteredTags_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 14d981620

void __cdecl
Z_Construct_UFunction_UAudioAssetUserData_HasTag_Statics::NewProp_bExactMatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d981630

void __cdecl
Z_Construct_UFunction_UAudioAssetUserData_HasTag_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UAudioAssetUserData_HasTag @ 14d981640

UFunction * __cdecl Z_Construct_UFunction_UAudioAssetUserData_HasTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAudioAssetUserData_HasTag_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioComponentGroup_NoRegister @ 14d981680

UClass * __cdecl Z_Construct_UClass_UAudioComponentGroup_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioComponentGroup",
               &Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton,
               UAudioComponentGroup::StaticRegisterNativesUAudioComponentGroup,0x420,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioComponentGroup>,
               InternalVTableHelperCtorCaller<UAudioComponentGroup>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton;
}

// Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister @ 14d981740

UClass * __cdecl Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioComponentGroupExtension",
               &Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton,
               UAudioComponentGroupExtension::StaticRegisterNativesUAudioComponentGroupExtension,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioComponentGroupExtension>,
               InternalVTableHelperCtorCaller<UAudioComponentGroupExtension>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioComponentGroupExtension.InnerSingleton;
}

// Z_Construct_UClass_UAudioComponentGroupExtension @ 14d9818c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioComponentGroupExtension(void)

{
  if (Z_Registration_Info_UClass_UAudioComponentGroupExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioComponentGroupExtension.OuterSingleton,
               &Z_Construct_UClass_UAudioComponentGroupExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioComponentGroupExtension.OuterSingleton;
}

// Z_Construct_UPackage__Script_AudioGameplay @ 14d981900

UPackage * __cdecl Z_Construct_UPackage__Script_AudioGameplay(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioGameplay.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioGameplay.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioGameplay.OuterSingleton;
}

// Z_Construct_UClass_UAudioParameterComponent @ 14d981a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioParameterComponent(void)

{
  if (Z_Registration_Info_UClass_UAudioParameterComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioParameterComponent.OuterSingleton,
               &Z_Construct_UClass_UAudioParameterComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioParameterComponent.OuterSingleton;
}

// Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature @ 14d981a40

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature @ 14d981a80

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature @ 14d981ac0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature @ 14d981b00

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioParameterComponent_GetParameters @ 14d981c00

UFunction * __cdecl Z_Construct_UFunction_UAudioParameterComponent_GetParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioGameplayCondition @ 14d981c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayCondition(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayCondition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayCondition.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayCondition.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d981c80

void __cdecl
Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet @ 14d981c90

UFunction * __cdecl Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d981cd0

void __cdecl
Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position @ 14d981ce0

UFunction * __cdecl Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USoundHandleSubsystem @ 14d981d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoundHandleSubsystem(void)

{
  if (Z_Registration_Info_UClass_USoundHandleSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoundHandleSubsystem.OuterSingleton,
               &Z_Construct_UClass_USoundHandleSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoundHandleSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeInteraction @ 14d981e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeInteraction(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.OuterSingleton;
}

// Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter @ 14d981e60

UFunction * __cdecl Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit @ 14d981ea0

UFunction * __cdecl Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioGameplayComponent @ 14d981fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayComponent(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayComponent.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayComponent.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d982090

void * __thiscall
FAudioGameplayModule::_scalar_deleting_destructor_(FAudioGameplayModule *this,uint param_1)

{
  *this = (FAudioGameplayModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAudioRequirementPreset_NoRegister @ 14d9820d0

UClass * __cdecl Z_Construct_UClass_UAudioRequirementPreset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioRequirementPreset",
               &Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton,
               UAudioRequirementPreset::StaticRegisterNativesUAudioRequirementPreset,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioRequirementPreset>
               ,InternalVTableHelperCtorCaller<UAudioRequirementPreset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton;
}

// Z_Construct_UClass_UAudioRequirementPreset @ 14d982290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioRequirementPreset(void)

{
  if (Z_Registration_Info_UClass_UAudioRequirementPreset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioRequirementPreset.OuterSingleton,
               &Z_Construct_UClass_UAudioRequirementPreset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioRequirementPreset.OuterSingleton;
}

// NewStructOps @ 14d9822d0

void * __cdecl Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioGameplayRequirements,&UE::CoreUObject::Private::Construct<FAudioGameplayRequirements>,&UE::CoreUObject::Private::ConstructForTests<FAudioGameplayRequirements>,&UE::CoreUObject::Private::Destruct<FAudioGameplayRequirements>,&UE::CoreUObject::Private::Copy<FAudioGameplayRequirements>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioComponentGroup @ 14d9823d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioComponentGroup(void)

{
  if (Z_Registration_Info_UClass_UAudioComponentGroup.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioComponentGroup.OuterSingleton,
               &Z_Construct_UClass_UAudioComponentGroup_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioComponentGroup.OuterSingleton;
}

// NewProp_ParamValue_SetBit @ 14d982410

void __cdecl
Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::
NewProp_ParamValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioComponentGroup_AddExtension @ 14d9824e0

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_AddExtension(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent @ 14d982520

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent @ 14d982560

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill @ 14d9825a0

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll @ 14d9825e0

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization @ 14d982620

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization @ 14d982660

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9826a0

void __cdecl
Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue @ 14d9826b0

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue @ 14d9826f0

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue @ 14d982730

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d982770

void __cdecl
Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny @ 14d982780

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d9827c0

void __cdecl
Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized @ 14d9827d0

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension @ 14d982810

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_RemoveExternalComponent @ 14d982850

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_RemoveExternalComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_RemoveExternalComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter @ 14d982890

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier @ 14d9828d0

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier @ 14d982910

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup @ 14d982950

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_StopSound @ 14d982990

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_StopSound(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioGameplayTagCacheSubsystem @ 14d9829d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayTagCacheSubsystem(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayTagCacheSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool @ 14d982a10

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent @ 14d982a50

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam @ 14d982a90

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject @ 14d982ad0

UFunction * __cdecl Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<FBoolParamCallback,FBoolParamCallback,int> @ 14d983220

void __cdecl
ConstructItems<FBoolParamCallback,FBoolParamCallback,int>
          (void *param_1,FBoolParamCallback *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FReadAccessScope local_28;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    puVar2 = (undefined8 *)&param_2->field_0x10;
    do {
      *(undefined8 *)((longlong)puVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar2 + -2),&local_28);
      *puVar1 = puVar2[-1];
      puVar1[1] = *puVar2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSoundCallback,FSoundCallback,int> @ 14d9832c0

void __cdecl
ConstructItems<FSoundCallback,FSoundCallback,int>(void *param_1,FSoundCallback *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FReadAccessScope local_28;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    puVar2 = (undefined8 *)&param_2->field_0x10;
    do {
      *(undefined8 *)((longlong)puVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar2 + -2),&local_28);
      *puVar1 = puVar2[-1];
      puVar1[1] = *puVar2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FStringParamCallback,FStringParamCallback,int> @ 14d983360

void __cdecl
ConstructItems<FStringParamCallback,FStringParamCallback,int>
          (void *param_1,FStringParamCallback *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FReadAccessScope local_28;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    puVar2 = (undefined8 *)&param_2->field_0x10;
    do {
      *(undefined8 *)((longlong)puVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar2 + -2),&local_28);
      *puVar1 = puVar2[-1];
      puVar1[1] = *puVar2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FAudioParameter,int> @ 14d983460

void __cdecl DefaultConstructItems<FAudioParameter,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x1a) = 0;
      *(undefined8 *)(puVar1 + 0x1c) = 0;
      *(undefined1 *)(puVar1 + 0x1e) = 0;
      *(undefined8 *)(puVar1 + 0x1f) = 0;
      *(undefined8 *)(puVar1 + 0x22) = 0;
      *(undefined8 *)(puVar1 + 0x24) = 0;
      puVar1 = puVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBoolParamCallback,int> @ 14d9834e0

void __cdecl DestructItems<FBoolParamCallback,int>(FBoolParamCallback *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSoundCallback,int> @ 14d983520

void __cdecl DestructItems<FSoundCallback,int>(FSoundCallback *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FStringParamCallback,int> @ 14d983560

void __cdecl DestructItems<FStringParamCallback,int>(FStringParamCallback *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// ForEachComponent_Internal<UAudioComponent,1,1,`AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d9840e0

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
ForEachComponent_Internal<UAudioComponent,1,1,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
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
  UAudioComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UAudioComponent_NoRegister();
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
    if (bVar12) goto LAB_14d984203;
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
LAB_14d984203:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14d98429d;
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
LAB_14d98429d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14d9843a0;
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
LAB_14d9843a0:
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
        ForEachComponent_Internal<UAudioComponent,1,1,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UAudioComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UAudioComponent *)0x0) {
      `AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UAudioComponent,1,0,`AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d984610

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
ForEachComponent_Internal<UAudioComponent,1,0,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UAudioComponent *pUVar4;
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
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
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
  pUVar10 = Z_Construct_UClass_UAudioComponent_NoRegister();
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
    if (bVar6) goto LAB_14d984716;
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
LAB_14d984716:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d98479d;
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
LAB_14d98479d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d9848a1;
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
LAB_14d9848a1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UAudioComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UAudioComponent *)0x0) {
      `AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UAudioComponent,0,1,`AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d984920

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
ForEachComponent_Internal<UAudioComponent,0,1,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UAudioComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UAudioComponent_NoRegister();
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
    if (bVar13) goto LAB_14d984a13;
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
LAB_14d984a13:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14d984ac0;
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
LAB_14d984ac0:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14d984bd0;
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
LAB_14d984bd0:
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
        ForEachComponent_Internal<UAudioComponent,0,1,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UAudioComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UAudioComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UAudioComponent,0,0,`AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 14d984e60

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
ForEachComponent_Internal<UAudioComponent,0,0,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UAudioComponent *pUVar6;
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
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
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
  pUVar12 = Z_Construct_UClass_UAudioComponent_NoRegister();
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
    if (bVar9) goto LAB_14d984f3e;
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
LAB_14d984f3e:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14d984fcf;
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
LAB_14d984fcf:
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
      goto LAB_14d9850e0;
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
LAB_14d9850e0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UAudioComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UAudioComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UAudioComponentGroup,1,1,`AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d985180

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
ForEachComponent_Internal<UAudioComponentGroup,1,1,_AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
  UAudioComponentGroup *pUVar8;
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
  pUVar14 = UAudioComponentGroup::StaticClass();
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
    if (bVar12) goto LAB_14d9852a3;
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
LAB_14d9852a3:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14d98533d;
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
LAB_14d98533d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14d985440;
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
LAB_14d985440:
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
        ForEachComponent_Internal<UAudioComponentGroup,1,1,_AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UAudioComponentGroup **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UAudioComponentGroup *)0x0) {
      `AActor::
      GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->OnStopped, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UAudioComponentGroup,1,0,`AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d9856b0

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
ForEachComponent_Internal<UAudioComponentGroup,1,0,_AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UAudioComponentGroup *pUVar4;
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
  TArray<UAudioComponentGroup_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
  *local_res18;
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
  pUVar10 = UAudioComponentGroup::StaticClass();
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
    if (bVar6) goto LAB_14d9857b6;
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
LAB_14d9857b6:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d98583d;
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
LAB_14d98583d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d985941;
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
LAB_14d985941:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UAudioComponentGroup **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UAudioComponentGroup *)0x0) {
      `AActor::
      GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UAudioComponentGroup,0,1,`AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d9859c0

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
ForEachComponent_Internal<UAudioComponentGroup,0,1,_AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UAudioComponentGroup *pUVar8;
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
  pUVar14 = UAudioComponentGroup::StaticClass();
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
    if (bVar13) goto LAB_14d985ab3;
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
LAB_14d985ab3:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14d985b60;
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
LAB_14d985b60:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14d985c70;
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
LAB_14d985c70:
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
        ForEachComponent_Internal<UAudioComponentGroup,0,1,_AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UAudioComponentGroup **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UAudioComponentGroup *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::
        GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->OnStopped, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UAudioComponentGroup,0,0,`AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d985f00

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
ForEachComponent_Internal<UAudioComponentGroup,0,0,_AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UAudioComponentGroup *pUVar6;
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
  TArray<UAudioComponentGroup_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
  *local_res18;
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
  pUVar12 = UAudioComponentGroup::StaticClass();
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
    if (bVar9) goto LAB_14d985fde;
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
LAB_14d985fde:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14d98606f;
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
LAB_14d98606f:
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
      goto LAB_14d986180;
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
LAB_14d986180:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UAudioComponentGroup **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UAudioComponentGroup *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `AActor::
        GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// InternalConstructor<UAudioAssetUserData> @ 14d986220

void __cdecl InternalConstructor<UAudioAssetUserData>(FObjectInitializer *param_1)

{
  UAssetUserData *this;
  
  this = (UAssetUserData *)param_1->Obj;
  if (this != (UAssetUserData *)0x0) {
    UAssetUserData::UAssetUserData(this,param_1);
    *(undefined ***)this = &___7UAudioAssetUserData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UAudioComponentGroup> @ 14d986270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioComponentGroup>(FObjectInitializer *param_1)

{
  byte bVar1;
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    this->_padding_ = (longlong)&UAudioComponentGroup::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioComponentGroup::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAudioComponentGroup::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UAudioComponentGroup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CachedLevelCollection = (FLevelCollection *)0x0;
    this[1].PhysicsVolume.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].AttachParent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[1].AttachSocketName.ComparisonIndex = 0;
    this[1].AttachSocketName.Number = 0;
    this[1].AttachChildren.ArrayNum = 0;
    this[1].AttachChildren.ArrayMax = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x469c4000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x469c4000;
    *(undefined4 *)&this[1].ClientAttachedChildren.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].ClientAttachedChildren.AllocatorInstance.Data + 4) = 0x80;
    this[1].ClientAttachedChildren.ArrayMax = 0;
    this[1].ClientAttachedChildren.ArrayNum = -1;
    this[1].Bounds.Origin.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Origin.field0_0x0 + 8) = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
    this[1].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
    this[1].Bounds.SphereRadius = 0.0;
    *(undefined4 *)&this[1].RelativeLocation.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 0xc) = 0;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 8) = 0xffffffff;
    this[1].RelativeRotation.Pitch = 0.0;
    *(undefined4 *)&this[1].RelativeRotation.Yaw = 0;
    this[1].RelativeRotation.Roll = 0.0;
    this[1].RelativeScale3D.field0_0x0._s_0.X = 0.0;
    this[1].ComponentVelocity.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0xc) = 0x80;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0x14) = 0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0x10) = 0xffffffff;
    *(undefined8 *)&this[1].TransformUpdated = 0;
    *(undefined4 *)&this[1].TransformUpdated.field_0x8 = 0;
    this[1].TransformUpdated.field_0x10 = 0;
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    *(undefined1 *)&this->_padding_ = 6;
    *(byte *)((longlong)&this->_padding_ + 2) = bVar1 & 0xf7 | 6;
  }
  return;
}

// InternalConstructor<UAudioComponentGroupExtension> @ 14d986280

void __cdecl InternalConstructor<UAudioComponentGroupExtension>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAudioComponentGroupExtension__6B_;
  }
  return;
}

// InternalConstructor<UAudioGameplayComponent> @ 14d9862b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioGameplayComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2) =
         *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2) & 0xf1;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->PrimaryComponentTick,false);
    return;
  }
  return;
}

// InternalConstructor<UAudioGameplayCondition> @ 14d986320

void __cdecl InternalConstructor<UAudioGameplayCondition>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAudioGameplayCondition__6B_;
  }
  return;
}

// InternalConstructor<UAudioGameplayTagCacheSubsystem> @ 14d986350

void __cdecl InternalConstructor<UAudioGameplayTagCacheSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UAudioGameplayTagCacheSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAudioGameplayVolumeInteraction> @ 14d9863b0

void __cdecl InternalConstructor<UAudioGameplayVolumeInteraction>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAudioGameplayVolumeInteraction__6B_;
  }
  return;
}

// InternalConstructor<UAudioParameterComponent> @ 14d9863e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioParameterComponent>(FObjectInitializer *param_1)

{
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2) =
         *(byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2) & 0xf1;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->PrimaryComponentTick,false);
    this->_padding_ = (longlong)&UAudioParameterComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioParameterComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UAudioParameterComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ =
         (longlong)&UAudioParameterComponent::_vftable__for__IAudioParameterControllerInterface__;
    this[1]._padding_ =
         (longlong)&UAudioParameterComponent::_vftable__for__IActorSoundParameterInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAudioRequirementPreset> @ 14d9864a0

void __cdecl InternalConstructor<UAudioRequirementPreset>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UAudioRequirementPreset__6B_;
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<USoundHandleSubsystem> @ 14d9864e0

void __cdecl InternalConstructor<USoundHandleSubsystem>(FObjectInitializer *param_1)

{
  UAudioEngineSubsystem *this;
  
  this = (UAudioEngineSubsystem *)param_1->Obj;
  if (this != (UAudioEngineSubsystem *)0x0) {
    UAudioEngineSubsystem::UAudioEngineSubsystem(this);
    *(undefined ***)this = &USoundHandleSubsystem::_vftable__for__UAudioEngineSubsystem__;
    *(undefined ***)(this + 1) =
         &USoundHandleSubsystem::_vftable__for__IActiveSoundUpdateInterface__;
    *(undefined ***)&this[1].field_0x8 = &USoundHandleSubsystem::_vftable__for__ISoundHandleSystem__
    ;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x28 = 0;
    *(undefined4 *)&this[3].field_0x2c = 0x80;
    *(undefined4 *)(this + 4) = 0xffffffff;
    *(undefined4 *)&this[4].field_0x4 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioAssetUserData> @ 14d9865a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioAssetUserData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioAssetUserData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UAssetUserData::UAssetUserData((UAssetUserData *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioAssetUserData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioComponentGroup> @ 14d986660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioComponentGroup>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioComponentGroup::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioComponentGroup::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioComponentGroup::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAudioComponentGroup::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UAudioComponentGroup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CachedLevelCollection = (FLevelCollection *)0x0;
    this[1].PhysicsVolume.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].AttachParent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[1].AttachSocketName.ComparisonIndex = 0;
    this[1].AttachSocketName.Number = 0;
    this[1].AttachChildren.ArrayNum = 0;
    this[1].AttachChildren.ArrayMax = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x469c4000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x469c4000;
    *(undefined4 *)&this[1].ClientAttachedChildren.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].ClientAttachedChildren.AllocatorInstance.Data + 4) = 0x80;
    this[1].ClientAttachedChildren.ArrayNum = -1;
    this[1].ClientAttachedChildren.ArrayMax = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Origin.field0_0x0 + 8) = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
    this[1].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
    this[1].Bounds.SphereRadius = 0.0;
    *(undefined4 *)&this[1].RelativeLocation.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 0xc) = 0;
    this[1].RelativeRotation.Pitch = 0.0;
    *(undefined4 *)&this[1].RelativeRotation.Yaw = 0;
    this[1].RelativeRotation.Roll = 0.0;
    this[1].RelativeScale3D.field0_0x0._s_0.X = 0.0;
    this[1].ComponentVelocity.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0xc) = 0x80;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0x14) = 0;
    *(undefined8 *)&this[1].TransformUpdated = 0;
    *(undefined4 *)&this[1].TransformUpdated.field_0x8 = 0;
    this[1].TransformUpdated.field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioComponentGroupExtension> @ 14d986670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioComponentGroupExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioComponentGroupExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioComponentGroupExtension__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayComponent> @ 14d986720

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

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioGameplayComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayCondition> @ 14d9867f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioGameplayCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayCondition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioGameplayCondition__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayTagCacheSubsystem> @ 14d9868a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioGameplayTagCacheSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayTagCacheSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UAudioGameplayTagCacheSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayVolumeInteraction> @ 14d986980

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioGameplayVolumeInteraction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayVolumeInteraction::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioGameplayVolumeInteraction__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioParameterComponent> @ 14d986a30

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

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioParameterComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioParameterComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioParameterComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioParameterComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UAudioParameterComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ =
         (longlong)&UAudioParameterComponent::_vftable__for__IAudioParameterControllerInterface__;
    this[1]._padding_ =
         (longlong)&UAudioParameterComponent::_vftable__for__IActorSoundParameterInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioRequirementPreset> @ 14d986b40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioRequirementPreset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioRequirementPreset::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UAudioRequirementPreset__6B_;
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoundHandleSubsystem> @ 14d986c00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoundHandleSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoundHandleSubsystem::GetPrivateStaticClass();
  this = (UAudioEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioEngineSubsystem *)0x0) {
    UAudioEngineSubsystem::UAudioEngineSubsystem(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &USoundHandleSubsystem::_vftable__for__UAudioEngineSubsystem__;
    *(undefined ***)(this + 1) =
         &USoundHandleSubsystem::_vftable__for__IActiveSoundUpdateInterface__;
    *(undefined ***)&this[1].field_0x8 = &USoundHandleSubsystem::_vftable__for__ISoundHandleSystem__
    ;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[3].field_0x28 = 0;
    *(undefined4 *)&this[3].field_0x2c = 0x80;
    *(undefined4 *)(this + 4) = 0xffffffff;
    *(undefined4 *)&this[4].field_0x4 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UAudioComponent,UAudioComponent_const_*,0> @ 14d986d40

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAudioComponent,UAudioComponent_const_*,0>
          (TObjectPtr<UAudioComponent> *param_1,UAudioComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UAudioComponent *)0x0) {
    return *param_2 == (UAudioComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MutableView<TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_>_> @ 14d986d60

TMutableView<TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_>_> __cdecl
MutableView<TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_> *param_1)

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
      `TCheckedPointerIterator<TObjectPtr<UAudioComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 8;
  }
  (param_1->AllocatorInstance).Data = in_RDX;
  return (TMutableView<TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_>_>)
         (TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// NewObject<UAudioComponentGroup> @ 14d986dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAudioComponentGroup * __cdecl NewObject<UAudioComponentGroup>(UObject *param_1)

{
  UClass *pUVar1;
  UAudioComponentGroup *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAudioComponentGroup::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAudioComponentGroup *)
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

// RemoveAll<`TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14d986fb0

int __thiscall
TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_> *this
          ,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  
  iVar1 = this->ArrayNum;
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar13 = 0;
  if (*(longlong *)pFVar2 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(pFVar2 + 8);
  }
  lVar3 = **(longlong **)param_1;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (*(longlong **)param_1)[1];
  }
  if ((lVar8 == lVar5) && (*(longlong *)pFVar2 == lVar3)) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  lVar8 = 0;
  iVar9 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar10 = iVar9 + 1;
    if (lVar8 < lVar11) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      lVar3 = **(longlong **)param_1;
      do {
        if (*(longlong *)pFVar7 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(pFVar7 + 8);
        }
        if (lVar3 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (*(longlong **)param_1)[1];
        }
        if ((lVar5 == lVar6) && (*(longlong *)pFVar7 == lVar3)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar12 != bVar4) break;
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar11);
    }
    if (bVar12 != 0) {
      if (iVar13 != iVar9) {
        memmove(pFVar2 + (longlong)iVar13 * 0x10,pFVar2 + (longlong)iVar9 * 0x10,
                (longlong)(iVar10 - iVar9) << 4);
      }
      iVar13 = iVar13 + (iVar10 - iVar9);
    }
    bVar12 = bVar12 ^ 1;
    iVar9 = iVar10;
    if (lVar11 <= lVar8) {
      this->ArrayNum = iVar13;
      return iVar1 - iVar13;
    }
  } while( true );
}

// ~TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::__l2::<lambda_1>,0,0> @ 14d988080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UAudioComponentGroup::SetTriggerParameter_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,0,0> @ 14d9880a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UAudioComponentGroup::UpdateComponentParameters_::__l8::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>,1,1> @ 14d9880c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UAudioParameterComponent::SetParameterInternal_::__l36::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::`36'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FAudioParameter,int>
            (*(FAudioParameter **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,0,0> @ 14d988100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UAudioComponentGroup::UpdateExtensions_::__l12::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::`12'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14d988f1c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioComponentGroup::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UAudioComponentGroup::_vector_deleting_destructor__adjustor_592__
          (UAudioComponentGroup *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioComponentGroup *)&this[-1].field_0x1d0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d988f30

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioComponentGroup::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioComponentGroup::_vector_deleting_destructor__adjustor_40__
          (UAudioComponentGroup *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioComponentGroup *)&this[-1].BoolSubscriptions.field_0x38,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d988f40

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioGameplayComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioGameplayComponent::_vector_deleting_destructor__adjustor_40__
          (UAudioGameplayComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioGameplayComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d988f50

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioParameterComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioParameterComponent::_vector_deleting_destructor__adjustor_40__
          (UAudioParameterComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioParameterComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14d988f60

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioParameterComponent::`vector deleting
   destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAudioParameterComponent::_vector_deleting_destructor__adjustor_200__
          (UAudioParameterComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioParameterComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{208}' @ 14d988f74

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioParameterComponent::`vector deleting
   destructor'`adjustor{208}' (unsigned int) __ptr64 */

void * __thiscall
UAudioParameterComponent::_vector_deleting_destructor__adjustor_208__
          (UAudioParameterComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioParameterComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14d988f88

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundHandleSubsystem::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
USoundHandleSubsystem::_vector_deleting_destructor__adjustor_48__
          (USoundHandleSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USoundHandleSubsystem *)&this[-1].Owners.field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14d988f98

/* [thunk]:public: virtual void * __ptr64 __cdecl USoundHandleSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
USoundHandleSubsystem::_vector_deleting_destructor__adjustor_56__
          (USoundHandleSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USoundHandleSubsystem *)&this[-1].Owners.field_0x18,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d988fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d988ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::`36'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FAudioParameter,int>
            (*(FAudioParameter **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::`12'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9890d0

void * __thiscall
IActiveSoundUpdateInterface::_scalar_deleting_destructor_
          (IActiveSoundUpdateInterface *this,uint param_1)

{
  *this = (IActiveSoundUpdateInterface)&___7IActiveSoundUpdateInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989110

void * __thiscall
IActorSoundParameterInterface::_scalar_deleting_destructor_
          (IActorSoundParameterInterface *this,uint param_1)

{
  *this = (IActorSoundParameterInterface)&___7IInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989150

void * __thiscall
ISoundHandleSystem::_scalar_deleting_destructor_(ISoundHandleSystem *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989180

void * __thiscall
UAudioAssetUserData::_scalar_deleting_destructor_(UAudioAssetUserData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAudioAssetUserData__6B_;
  pFVar1 = (this->MetadataTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MetadataTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989200

void * __thiscall
UAudioComponentGroup::_scalar_deleting_destructor_(UAudioComponentGroup *this,uint param_1)

{
  ~UAudioComponentGroup(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x420);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989260

void * __thiscall
UAudioComponentGroupExtension::_scalar_deleting_destructor_
          (UAudioComponentGroupExtension *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d9892c0

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
UAudioGameplayComponent::_scalar_deleting_destructor_(UAudioGameplayComponent *this,uint param_1)

{
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989320

void * __thiscall
UAudioGameplayCondition::_scalar_deleting_destructor_(UAudioGameplayCondition *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d989380

void * __thiscall
UAudioGameplayTagCacheSubsystem::_scalar_deleting_destructor_
          (UAudioGameplayTagCacheSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->GameplayTagCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GameplayTagCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GameplayTagCache);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989410

void * __thiscall
UAudioGameplayVolumeInteraction::_scalar_deleting_destructor_
          (UAudioGameplayVolumeInteraction *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d989470

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
UAudioParameterComponent::_scalar_deleting_destructor_(UAudioParameterComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAudioParameterControllerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IActorSoundParameterInterface__;
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->Parameters).AllocatorInstance.Data,
             (this->Parameters).ArrayNum);
  pFVar1 = (this->Parameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d989550

void * __thiscall
UAudioRequirementPreset::_scalar_deleting_destructor_(UAudioRequirementPreset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Query).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Query).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Query).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Query).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9895e0

void * __thiscall
USoundHandleSubsystem::_scalar_deleting_destructor_(USoundHandleSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Owners).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Owners).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,ISoundHandleOwner_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,ISoundHandleOwner_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,ISoundHandleOwner_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Owners);
  *(undefined4 *)&(this->ActiveHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveHandles);
  this->_padding_ = (longlong)&___7IActiveSoundUpdateInterface__6B_;
  UAudioEngineSubsystem::~UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAudioAssetUserData @ 14d98b840

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioAssetUserData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioComponentGroup @ 14d98b850

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioComponentGroup(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioComponentGroupExtension @ 14d98b860

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioComponentGroupExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayComponent @ 14d98b870

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayRequirements @ 14d98b880

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayRequirements(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayTagCacheSubsystem @ 14d98b890

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayTagCacheSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplay_init @ 14d98b8a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplay_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioParameterComponent @ 14d98b8b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioParameterComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAudioGameplayCondition @ 14d98b8c0

void __cdecl EmptyLinkFunctionForGeneratedCodeIAudioGameplayCondition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAudioGameplayVolumeInteraction @ 14d98b8d0

void __cdecl EmptyLinkFunctionForGeneratedCodeIAudioGameplayVolumeInteraction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSoundHandleSubsystem @ 14d98b8e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSoundHandleSubsystem(void)

{
  return;
}

// FBoolParamCallback_DelegateWrapper @ 14d98c3d0

void __cdecl
FBoolParamCallback_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,bool param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return;
}

// FOnParameterChanged_DelegateWrapper @ 14d98c3f0

void __cdecl
FOnParameterChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FAudioParameter *param_2)

{
  FAudioParameter local_a8;
  
  local_a8.ParamName.ComparisonIndex.Value = 0;
  local_a8.ParamName.Number = 0;
  local_a8.FloatParam = 0.0;
  local_a8.BoolParam = false;
  local_a8.IntParam = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.ParamType = None;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  FAudioParameter::operator=(&local_a8,param_2);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_a8);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// FSoundCallback_DelegateWrapper @ 14d98c500

void __cdecl
FSoundCallback_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName *param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = *param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return;
}

// FSoundGroupChanged_DelegateWrapper @ 14d98c530

void __cdecl
FSoundGroupChanged_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FStringParamCallback_DelegateWrapper @ 14d98c540

void __cdecl
FStringParamCallback_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// TestEquivalence @ 14d993e30

bool __cdecl
AudioParameterComponentUtils::TestEquivalence(FAudioParameter *param_1,FAudioParameter *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1->ParamType != param_2->ParamType) {
    return false;
  }
  switch(param_2->ParamType) {
  case None:
    if (__real_322bcc77 <
        (float)((uint)(param_1->FloatParam - param_2->FloatParam) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    if (param_1->BoolParam != param_2->BoolParam) {
      return false;
    }
    if (param_1->IntParam != param_2->IntParam) {
      return false;
    }
    if ((param_1->ObjectParam).field0_0x0.DebugPtr != (param_2->ObjectParam).field0_0x0.DebugPtr) {
      return false;
    }
    bVar2 = TArray<float,TSizedDefaultAllocator<32>_>::operator==
                      (&param_1->ArrayFloatParam,&param_2->ArrayFloatParam);
    if (!bVar2) {
      return false;
    }
    bVar2 = TArray<bool,TSizedDefaultAllocator<32>_>::operator==
                      (&param_1->ArrayBoolParam,&param_2->ArrayBoolParam);
    if (!bVar2) {
      return false;
    }
    bVar2 = TArray<int,TSizedDefaultAllocator<32>_>::operator==
                      (&param_1->ArrayIntParam,&param_2->ArrayIntParam);
    if (!bVar2) {
      return false;
    }
    iVar3 = (param_1->ArrayObjectParam).ArrayNum;
    if (iVar3 != (param_2->ArrayObjectParam).ArrayNum) {
      return false;
    }
    bVar2 = CompareItems<TObjectPtr<UObject>,int>
                      ((TObjectPtr<UObject> *)(param_1->ArrayObjectParam).AllocatorInstance.Data,
                       (TObjectPtr<UObject> *)(param_2->ArrayObjectParam).AllocatorInstance.Data,
                       iVar3);
    if (!bVar2) {
      return false;
    }
    iVar3 = (param_1->StringParam).Data.ArrayNum;
    iVar1 = (param_2->StringParam).Data.ArrayNum;
    if (iVar3 == iVar1) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->StringParam).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_2->StringParam).Data.AllocatorInstance.Data);
        bVar2 = iVar3 == 0;
        goto LAB_14d993fce;
      }
    }
    else {
      bVar2 = iVar3 + iVar1 == 1;
LAB_14d993fce:
      if (!bVar2) {
        return false;
      }
    }
    iVar3 = (param_1->ArrayStringParam).ArrayNum;
    if ((iVar3 == (param_2->ArrayStringParam).ArrayNum) &&
       (bVar2 = CompareItems<FString,int>
                          ((FString *)(param_1->ArrayStringParam).AllocatorInstance.Data,
                           (FString *)(param_2->ArrayStringParam).AllocatorInstance.Data,iVar3),
       bVar2)) {
      return true;
    }
    break;
  case Boolean:
    return param_1->BoolParam == param_2->BoolParam;
  case Integer:
  case NoneArray:
    return param_1->IntParam == param_2->IntParam;
  case Float:
    return (float)((uint)(param_1->FloatParam - param_2->FloatParam) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77;
  case String:
    iVar3 = (param_1->StringParam).Data.ArrayNum;
    iVar1 = (param_2->StringParam).Data.ArrayNum;
    if (iVar3 != iVar1) {
      return iVar3 + iVar1 == 1;
    }
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->StringParam).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->StringParam).Data.AllocatorInstance.Data);
    return iVar3 == 0;
  case Object:
    return (param_1->ObjectParam).field0_0x0.DebugPtr == (param_2->ObjectParam).field0_0x0.DebugPtr;
  case BooleanArray:
    bVar2 = TArray<bool,TSizedDefaultAllocator<32>_>::operator==
                      (&param_1->ArrayBoolParam,&param_2->ArrayBoolParam);
    return bVar2;
  case IntegerArray:
    bVar2 = TArray<int,TSizedDefaultAllocator<32>_>::operator==
                      (&param_1->ArrayIntParam,&param_2->ArrayIntParam);
    return bVar2;
  case FloatArray:
    bVar2 = TArray<float,TSizedDefaultAllocator<32>_>::operator==
                      (&param_1->ArrayFloatParam,&param_2->ArrayFloatParam);
    return bVar2;
  case StringArray:
    iVar3 = (param_1->ArrayStringParam).ArrayNum;
    if ((iVar3 == (param_2->ArrayStringParam).ArrayNum) &&
       (bVar2 = CompareItems<FString,int>
                          ((FString *)(param_1->ArrayStringParam).AllocatorInstance.Data,
                           (FString *)(param_2->ArrayStringParam).AllocatorInstance.Data,iVar3),
       bVar2)) {
      return true;
    }
    break;
  case ObjectArray:
    iVar3 = (param_1->ArrayObjectParam).ArrayNum;
    if ((iVar3 == (param_2->ArrayObjectParam).ArrayNum) &&
       (bVar2 = CompareItems<TObjectPtr<UObject>,int>
                          ((TObjectPtr<UObject> *)(param_1->ArrayObjectParam).AllocatorInstance.Data
                           ,(TObjectPtr<UObject> *)
                            (param_2->ArrayObjectParam).AllocatorInstance.Data,iVar3), bVar2)) {
      return true;
    }
  }
  return false;
}

// Z_Construct_UClass_UAudioAssetUserData_NoRegister @ 14d995810

UClass * __cdecl Z_Construct_UClass_UAudioAssetUserData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioAssetUserData",
               &Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton,
               UAudioAssetUserData::StaticRegisterNativesUAudioAssetUserData,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAssetUserData>,
               InternalVTableHelperCtorCaller<UAudioAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton;
}

// Z_Construct_UClass_UAudioGameplayComponent_NoRegister @ 14d9958d0

UClass * __cdecl Z_Construct_UClass_UAudioGameplayComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayComponent",
               &Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton,
               UAudioGameplayComponent::StaticRegisterNativesUAudioGameplayComponent,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayComponent>,
               InternalVTableHelperCtorCaller<UAudioGameplayComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton;
}

// Z_Construct_UClass_UAudioGameplayCondition_NoRegister @ 14d995990

UClass * __cdecl Z_Construct_UClass_UAudioGameplayCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayCondition",
               &Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton,
               UAudioGameplayCondition::StaticRegisterNativesUAudioGameplayCondition,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayCondition>,
               InternalVTableHelperCtorCaller<UAudioGameplayCondition>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayCondition.InnerSingleton;
}

// Z_Construct_UClass_UAudioGameplayTagCacheSubsystem_NoRegister @ 14d995a50

UClass * __cdecl Z_Construct_UClass_UAudioGameplayTagCacheSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayTagCacheSubsystem",
               &Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton,
               UAudioGameplayTagCacheSubsystem::StaticRegisterNativesUAudioGameplayTagCacheSubsystem
               ,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayTagCacheSubsystem>,
               InternalVTableHelperCtorCaller<UAudioGameplayTagCacheSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayTagCacheSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister @ 14d995b10

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayVolumeInteraction",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton,
               UAudioGameplayVolumeInteraction::StaticRegisterNativesUAudioGameplayVolumeInteraction
               ,0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayVolumeInteraction>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeInteraction>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.InnerSingleton;
}

// Z_Construct_UClass_UAudioParameterComponent_NoRegister @ 14d995bd0

UClass * __cdecl Z_Construct_UClass_UAudioParameterComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioParameterComponent",
               &Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton,
               UAudioParameterComponent::StaticRegisterNativesUAudioParameterComponent,0xf8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioParameterComponent>,
               InternalVTableHelperCtorCaller<UAudioParameterComponent>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton;
}

// Z_Construct_UClass_USoundHandleSubsystem_NoRegister @ 14d995c90

UClass * __cdecl Z_Construct_UClass_USoundHandleSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"SoundHandleSubsystem",
               &Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton,
               USoundHandleSubsystem::StaticRegisterNativesUSoundHandleSubsystem,0xe0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USoundHandleSubsystem>,
               InternalVTableHelperCtorCaller<USoundHandleSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton;
}

// Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature @ 14d995d50

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FAudioGameplayRequirements @ 14d995d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioGameplayRequirements(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioGameplayRequirements.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioGameplayRequirements.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioGameplayRequirements.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioGameplayRequirements.InnerSingleton;
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

// IMPLEMENT_MODULE_AudioGameplay @ 14d998160

void __cdecl IMPLEMENT_MODULE_AudioGameplay(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AudioGameplayLog'' @ 15045b390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__AudioGameplayLog__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&AudioGameplayLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnabled'' @ 15045b3b0

void __cdecl
AudioGameplayTagCacheConsoleVariables::_dynamic_atexit_destructor_for__CVarEnabled__(void)

{
  CVarEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrintActiveSounds'' @ 15045b3d0

void __cdecl AudioComponentGroupCVars::_dynamic_atexit_destructor_for__CVarPrintActiveSounds__(void)

{
  CVarPrintActiveSounds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrintActiveSounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrintSoundParams'' @ 15045b3f0

void __cdecl AudioComponentGroupCVars::_dynamic_atexit_destructor_for__CVarPrintSoundParams__(void)

{
  CVarPrintSoundParams._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrintSoundParams);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrintSoundParamsActorFilter'' @ 15045b410

void __cdecl
AudioComponentGroupCVars::_dynamic_atexit_destructor_for__CVarPrintSoundParamsActorFilter__(void)

{
  CVarPrintSoundParamsActorFilter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrintSoundParamsActorFilter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrintSoundParamsParamFilter'' @ 15045b430

void __cdecl
AudioComponentGroupCVars::_dynamic_atexit_destructor_for__CVarPrintSoundParamsParamFilter__(void)

{
  CVarPrintSoundParamsParamFilter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrintSoundParamsParamFilter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrintZOffset'' @ 15045b450

void __cdecl AudioComponentGroupCVars::_dynamic_atexit_destructor_for__CVarPrintZOffset__(void)

{
  CVarPrintZOffset._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrintZOffset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetParamOnlyOnValueChange'' @ 15045b470

void __cdecl
AudioParameterComponentConsoleVariables::
_dynamic_atexit_destructor_for__CVarSetParamOnlyOnValueChange__(void)

{
  CVarSetParamOnlyOnValueChange._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSetParamOnlyOnValueChange);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioParameterComponent'' @ 15045b490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioParameterComponent__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioParameterComponent);
  return;
}

// `dynamic_atexit_destructor_for_'PrintSoundParamsActorFilter'' @ 15045b4b0

void __cdecl
AudioComponentGroupCVars::_dynamic_atexit_destructor_for__PrintSoundParamsActorFilter__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PrintSoundParamsActorFilter.Data.AllocatorInstance.Data;
  if (PrintSoundParamsActorFilter.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PrintSoundParamsActorFilter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PrintSoundParamsParamFilter'' @ 15045b4d0

void __cdecl
AudioComponentGroupCVars::_dynamic_atexit_destructor_for__PrintSoundParamsParamFilter__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PrintSoundParamsParamFilter.Data.AllocatorInstance.Data;
  if (PrintSoundParamsParamFilter.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PrintSoundParamsParamFilter.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_AudioGameplay'' @ 15045b4f0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_AudioGameplay__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_AudioGameplay.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_AudioGameplay.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (_GCsvCategory_AudioGameplay.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

