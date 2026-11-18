// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 186

// `dynamic_initializer_for_'AudioGameplayVolumeLog'' @ 1413e2e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__AudioGameplayVolumeLog__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&AudioGameplayVolumeLog,L"AudioGameplayVolumeLog",Log,All);
  atexit(_dynamic_atexit_destructor_for__AudioGameplayVolumeLog__);
  return;
}

// `dynamic_initializer_for_'CVarAllowMultiplePrimitives'' @ 1413e2e80

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_initializer_for__CVarAllowMultiplePrimitives__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowMultiplePrimitives,L"au.AudioGameplayVolumes.AllowMultiplePrimitives",
             &bAllowMultiplePrimitives,
             L"Allows consideration of all the primitives on an actor for intersection tests.\nNOTE: The option to turn this off will be removed in the future. Use with caution!\n0: Off, 1: On (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowMultiplePrimitives__);
  return;
}

// `dynamic_initializer_for_'CVarAudioThreadCmdRollback'' @ 1413e2ed0

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_initializer_for__CVarAudioThreadCmdRollback__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAudioThreadCmdRollback,L"au.AudioGameplayVolumes.AudioThreadCmdRollback",
             &bAudioThreadCmdRollback,
             L"When non-zero, uses old code to rollback late thread command change.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAudioThreadCmdRollback__);
  return;
}

// `dynamic_initializer_for_'CVarEnabled'' @ 1413e2f20

void __cdecl AudioGameplayVolumeConsoleVariables::_dynamic_initializer_for__CVarEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnabled,L"au.AudioGameplayVolumes.Enabled",&bEnabled,
             L"Toggles the Audio Gameplay Volume System on or off.\n0: Disable, 1: Enable (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPreventDuplicateSubmixSends'' @ 1413e2f70

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_initializer_for__CVarPreventDuplicateSubmixSends__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPreventDuplicateSubmixSends,L"au.AudioGameplayVolumes.PreventDuplicateSubmixSends"
             ,&bPreventDuplicateSubmixSends,
             L"When non-zero, will not add a Submix Sends if one already is there sending to the same Submix."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPreventDuplicateSubmixSends__);
  return;
}

// `dynamic_initializer_for_'CVarProxyDistanceCulling'' @ 1413e2fc0

void __cdecl
AudioGameplayVolumeComponentVariables::_dynamic_initializer_for__CVarProxyDistanceCulling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarProxyDistanceCulling,L"au.AudioGameplayVolumes.DuplicateProxy",&bDuplicateProxy,
             L"Prevent cluster verification to fail by duplicating volume proxy if spawned actor references an existing volume proxy - 0: Disable, 1: Enable (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarProxyDistanceCulling__);
  return;
}

// `dynamic_initializer_for_'CVarProxyDistanceCulling'' @ 1413e3010

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_initializer_for__CVarProxyDistanceCulling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarProxyDistanceCulling,L"au.AudioGameplayVolumes.PrimitiveProxy.DistanceCulling",
             &bProxyDistanceCulling,
             L"Skips physics body queries for proxies that are not close to the listener.\n0: Disable, 1: Enable (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarProxyDistanceCulling__);
  return;
}

// `dynamic_initializer_for_'CVarUpdateInterval'' @ 1413e3060

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_initializer_for__CVarUpdateInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUpdateInterval,L"au.AudioGameplayVolume.UpdateRate",&UpdateRate,
             L"How frequently we check for listener changes with respect to audio gameplay volumes, in seconds."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUpdateInterval__);
  return;
}

// `dynamic_initializer_for_'CVarUpdateListeners'' @ 1413e30b0

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_initializer_for__CVarUpdateListeners__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUpdateListeners,L"au.AudioGameplayVolumes.Listeners.AllowUpdate",&bUpdateListeners
             ,L"Allows updating of listeners.\n0: Disable, 1: Enable (default)",0);
  atexit(_dynamic_atexit_destructor_for__CVarUpdateListeners__);
  return;
}

// `dynamic_initializer_for_'CVarUpdateRateJitterDelta'' @ 1413e3100

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_initializer_for__CVarUpdateRateJitterDelta__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUpdateRateJitterDelta,L"au.AudioGameplayVolume.UpdateRate.JitterDelta",
             &UpdateRateJitterDelta,
             L"A random delta to add to update rate to avoid performance heartbeats.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUpdateRateJitterDelta__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioGameplayVolume'' @ 1413e3150

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioGameplayVolume__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioGameplayVolume";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioGameplayVolume",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAudioGameplayVolumeModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_AAudioGameplayVolume_OnListenerEnter'' @ 1413e31a0

void __cdecl _dynamic_initializer_for__NAME_AAudioGameplayVolume_OnListenerEnter__(void)

{
  FName::FName(&NAME_AAudioGameplayVolume_OnListenerEnter,L"OnListenerEnter");
  return;
}

// `dynamic_initializer_for_'NAME_AAudioGameplayVolume_OnListenerExit'' @ 1413e31c0

void __cdecl _dynamic_initializer_for__NAME_AAudioGameplayVolume_OnListenerExit__(void)

{
  FName::FName(&NAME_AAudioGameplayVolume_OnListenerExit,L"OnListenerExit");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h__Script_AudioGameplayVolume_183635509'' @ 1413e31e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h__Script_AudioGameplayVolume_183635509__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h__Script_AudioGameplayVolume_3983312923'' @ 1413e3220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h__Script_AudioGameplayVolume_3983312923__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeComponent_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h__Script_AudioGameplayVolume_2458839060'' @ 1413e3260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h__Script_AudioGameplayVolume_2458839060__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeProxy_h__Script_AudioGameplayVolume_2424195825'' @ 1413e32a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeProxy_h__Script_AudioGameplayVolume_2424195825__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeProxy_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h__Script_AudioGameplayVolume_523600058'' @ 1413e32e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h__Script_AudioGameplayVolume_523600058__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h__Script_AudioGameplayVolume_3158514990'' @ 1413e3320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h__Script_AudioGameplayVolume_3158514990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h__Script_AudioGameplayVolume_4257701993'' @ 1413e3360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h__Script_AudioGameplayVolume_4257701993__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_FilterVolumeComponent_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h__Script_AudioGameplayVolume_3985479432'' @ 1413e33a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h__Script_AudioGameplayVolume_3985479432__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h__Script_AudioGameplayVolume_2744107336'' @ 1413e33e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h__Script_AudioGameplayVolume_2744107336__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h__Script_AudioGameplayVolume_1985332561'' @ 1413e3420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h__Script_AudioGameplayVolume_1985332561__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioGameplayVolume",
             Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixSendVolumeComponent_h__Script_AudioGameplayVolume_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioGameplayVolume'' @ 1413e3460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioGameplayVolume__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x209458d1;
  local_res8[0].DeclarationsHash = 0x821fee99;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioGameplayVolume,L"/Script/AudioGameplayVolume",
             &Z_Registration_Info_UPackage__Script_AudioGameplayVolume,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14d998190

void * __thiscall
FAudioGameplayVolumeModule::_scalar_deleting_destructor_
          (FAudioGameplayVolumeModule *this,uint param_1)

{
  *this = (FAudioGameplayVolumeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority @ 14d9981d0

UFunction * __cdecl Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioGameplayVolumeMutator_SetPriority_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UFilterVolumeComponent @ 14d9982d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFilterVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UFilterVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFilterVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UFilterVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFilterVolumeComponent.OuterSingleton;
}

// Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature @ 14d998310

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature @ 14d998350

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF @ 14d998390

UFunction * __cdecl Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFilterVolumeComponent_SetExteriorLPF_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AudioGameplayVolume @ 14d9983d0

UPackage * __cdecl Z_Construct_UPackage__Script_AudioGameplayVolume(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioGameplayVolume.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioGameplayVolume.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioGameplayVolume.OuterSingleton;
}

// Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF @ 14d998410

UFunction * __cdecl Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFilterVolumeComponent_SetInteriorLPF_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UReverbVolumeComponent @ 14d998690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReverbVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UReverbVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReverbVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UReverbVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReverbVolumeComponent.OuterSingleton;
}

// Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings @ 14d9986d0

UFunction * __cdecl Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReverbVolumeComponent_SetReverbSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAttenuationVolumeComponent @ 14d998710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAttenuationVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UAttenuationVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAttenuationVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UAttenuationVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAttenuationVolumeComponent.OuterSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeMutator @ 14d998750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeMutator(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.OuterSingleton;
}

// Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume @ 14d998850

UFunction * __cdecl Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAttenuationVolumeComponent_SetExteriorVolume_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume @ 14d998890

UFunction * __cdecl Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAttenuationVolumeComponent_SetInteriorVolume_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USubmixOverrideVolumeComponent @ 14d9988d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixOverrideVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.OuterSingleton;
}

// Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings @ 14d998910

UFunction * __cdecl
Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixOverrideVolumeComponent_SetSubmixOverrideSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioGameplayVolumeProxy_NoRegister @ 14d998ad0

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeProxy",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton,
               UAudioGameplayVolumeProxy::StaticRegisterNativesUAudioGameplayVolumeProxy,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayVolumeProxy>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton;
}

// Z_Construct_UClass_UAGVConditionProxy @ 14d998c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAGVConditionProxy(void)

{
  if (Z_Registration_Info_UClass_UAGVConditionProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAGVConditionProxy.OuterSingleton,
               &Z_Construct_UClass_UAGVConditionProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAGVConditionProxy.OuterSingleton;
}

// Z_Construct_UClass_UAGVPrimitiveComponentProxy @ 14d998c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAGVPrimitiveComponentProxy(void)

{
  if (Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.OuterSingleton,
               &Z_Construct_UClass_UAGVPrimitiveComponentProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.OuterSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeProxy @ 14d998cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeProxy(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayVolumeProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.OuterSingleton;
}

// Z_Construct_UClass_USubmixSendVolumeComponent @ 14d998db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USubmixSendVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_USubmixSendVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USubmixSendVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_USubmixSendVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USubmixSendVolumeComponent.OuterSingleton;
}

// Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings @ 14d998eb0

UFunction * __cdecl Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USubmixSendVolumeComponent_SetSubmixSendSettings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister @ 14d998fb0

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeComponent",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton,
               UAudioGameplayVolumeComponent::StaticRegisterNativesUAudioGameplayVolumeComponent,
               0x100,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeComponent>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponent>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.InnerSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeSubsystem @ 14d9991f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeSubsystem(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeComponent @ 14d999230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeComponent.OuterSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeComponentBase @ 14d999270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeComponentBase(void)

{
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.OuterSingleton,
               &Z_Construct_UClass_UAudioGameplayVolumeComponentBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.OuterSingleton;
}

// Z_Construct_UClass_AAudioGameplayVolume @ 14d9992b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AAudioGameplayVolume(void)

{
  if (Z_Registration_Info_UClass_AAudioGameplayVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AAudioGameplayVolume.OuterSingleton,
               &Z_Construct_UClass_AAudioGameplayVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AAudioGameplayVolume.OuterSingleton;
}

// Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter @ 14d9992f0

UFunction * __cdecl Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit @ 14d999330

UFunction * __cdecl Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled @ 14d999370

UFunction * __cdecl Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnable_SetBit @ 14d9993b0

void __cdecl
Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::NewProp_bEnable_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled @ 14d9993c0

UFunction * __cdecl Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14d999400

void __cdecl Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x300) = 1;
  return;
}

// ConstructItems<TSharedPtr<FProxyVolumeMutator,1>,TSharedPtr<FProxyVolumeMutator,1>,int> @ 14d999aa0

void __cdecl
ConstructItems<TSharedPtr<FProxyVolumeMutator,1>,TSharedPtr<FProxyVolumeMutator,1>,int>
          (void *param_1,TSharedPtr<FProxyVolumeMutator,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FProxyVolumeMutator **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// Copy<TInlineComponentArray<UPrimitiveComponent_*,24>,TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>_> @ 14d999ae0

void __cdecl
Algo::
Copy<TInlineComponentArray<UPrimitiveComponent_*,24>,TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>_>
          (TInlineComponentArray<UPrimitiveComponent_*,24> *param_1,
          TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  UObject *local_38 [2];
  
  puVar1 = &param_1->field_0xc8;
  iVar2 = *(int *)puVar1;
  if (*(TInlineComponentArray<UPrimitiveComponent_*,24> **)&param_1->field_0xc0 !=
      (TInlineComponentArray<UPrimitiveComponent_*,24> *)0x0) {
    param_1 = *(TInlineComponentArray<UPrimitiveComponent_*,24> **)&param_1->field_0xc0;
  }
  puVar5 = (undefined8 *)&param_1->field_0x0;
  while( true ) {
    if (*(int *)puVar1 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (param_1 == (TInlineComponentArray<UPrimitiveComponent_*,24> *)(puVar5 + iVar2)) break;
    local_38[0] = *(UObject **)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38[0]);
    }
    piVar8 = &param_2->ArrayMax;
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar8 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == *piVar8) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,piVar8);
    }
    param_2->ArrayNum = iVar7 + 1;
    *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38[0]);
    }
    param_1 = (TInlineComponentArray<UPrimitiveComponent_*,24> *)&param_1->field_0x8;
  }
  return;
}

// DefaultConstructItems<FAudioGameplayVolumeListener,int> @ 14d999c50

void __cdecl DefaultConstructItems<FAudioGameplayVolumeListener,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      FInteriorSettings::FInteriorSettings((FInteriorSettings *)(puVar2 + 5));
      *(undefined4 *)(puVar2 + 10) = 0xffffffff;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar2[0xb] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar2[0xc] = uVar1;
      puVar2[0xd] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x13] = 0;
      *(undefined1 *)(puVar2 + 0xe) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xa4) = 0x80;
      *(undefined4 *)(puVar2 + 0x15) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0xac) = 0;
      puVar2[0x17] = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1d] = 0;
      *(undefined4 *)(puVar2 + 0x1e) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xf4) = 0x80;
      *(undefined4 *)(puVar2 + 0x1f) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0xfc) = 0;
      puVar2[0x21] = 0;
      *(undefined4 *)(puVar2 + 0x22) = 0;
      puVar2[0x23] = 0;
      puVar2[0x24] = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x27;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAudioGameplayProxyUpdateResult,int> @ 14d999d80

void __cdecl
DestructItems<FAudioGameplayProxyUpdateResult,int>
          (FAudioGameplayProxyUpdateResult *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ExitedProxies).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      pFVar1 = pFVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int> @ 14d999e00

void __cdecl
DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
          (TSharedPtr<FProxyVolumeMutator,1> *param_1,int param_2)

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

// DestructItems<FAudioGameplayVolumeListener,int> @ 14d999e40

void __cdecl
DestructItems<FAudioGameplayVolumeListener,int>(FAudioGameplayVolumeListener *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->PreviousProxies).Hash.SecondaryData;
    do {
      DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
                ((TSharedPtr<FProxyVolumeMutator,1> *)pFVar1[2],*(int *)(pFVar1 + 3));
      if (pFVar1[2] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[2]);
      }
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      pFVar1 = pFVar1 + 0x27;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DuplicateObject<UAudioGameplayVolumeProxy> @ 14d999ee0

UAudioGameplayVolumeProxy * __cdecl
DuplicateObject<UAudioGameplayVolumeProxy>
          (TObjectPtr<UAudioGameplayVolumeProxy> *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UAudioGameplayVolumeProxy *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  pUVar1 = UAudioGameplayVolumeProxy::StaticClass();
  pUVar2 = (UAudioGameplayVolumeProxy *)
           DuplicateObject_Internal(pUVar1,(UObject *)pUVar2,param_2,param_3);
  return pUVar2;
}

// ForEachComponent_Internal<UAudioGameplayVolumeComponent,1,1,`AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d99a870

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
ForEachComponent_Internal<UAudioGameplayVolumeComponent,1,1,_AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
  UAudioGameplayVolumeComponent *pUVar8;
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
  pUVar14 = UAudioGameplayVolumeComponent::StaticClass();
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
    if (bVar12) goto LAB_14d99a993;
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
LAB_14d99a993:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14d99aa2d;
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
LAB_14d99aa2d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14d99ab30;
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
LAB_14d99ab30:
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
        ForEachComponent_Internal<UAudioGameplayVolumeComponent,1,1,_AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UAudioGameplayVolumeComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UAudioGameplayVolumeComponent *)0x0) {
      `AActor::
      GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[2]._padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UAudioGameplayVolumeComponent,1,0,`AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d99ada0

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
ForEachComponent_Internal<UAudioGameplayVolumeComponent,1,0,_AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UAudioGameplayVolumeComponent *pUVar4;
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
  TArray<UAudioGameplayVolumeComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
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
  pUVar10 = UAudioGameplayVolumeComponent::StaticClass();
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
    if (bVar6) goto LAB_14d99aea6;
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
LAB_14d99aea6:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d99af2d;
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
LAB_14d99af2d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d99b031;
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
LAB_14d99b031:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UAudioGameplayVolumeComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UAudioGameplayVolumeComponent *)0x0) {
      `AActor::
      GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UAudioGameplayVolumeComponent,0,1,`AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d99b0b0

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
ForEachComponent_Internal<UAudioGameplayVolumeComponent,0,1,_AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UAudioGameplayVolumeComponent *pUVar8;
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
  pUVar14 = UAudioGameplayVolumeComponent::StaticClass();
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
    if (bVar13) goto LAB_14d99b1a3;
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
LAB_14d99b1a3:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14d99b250;
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
LAB_14d99b250:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14d99b360;
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
LAB_14d99b360:
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
        ForEachComponent_Internal<UAudioGameplayVolumeComponent,0,1,_AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UAudioGameplayVolumeComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UAudioGameplayVolumeComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[2]._padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UAudioGameplayVolumeComponent,0,0,`AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d99b5f0

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
ForEachComponent_Internal<UAudioGameplayVolumeComponent,0,0,_AActor::GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UAudioGameplayVolumeComponent *pUVar6;
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
  TArray<UAudioGameplayVolumeComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
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
  pUVar12 = UAudioGameplayVolumeComponent::StaticClass();
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
    if (bVar9) goto LAB_14d99b6ce;
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
LAB_14d99b6ce:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14d99b75f;
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
LAB_14d99b75f:
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
      goto LAB_14d99b870;
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
LAB_14d99b870:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UAudioGameplayVolumeComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UAudioGameplayVolumeComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<UAudioGameplayVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UAudioGameplayVolumeMutator,1,1,`AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d99b910

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
ForEachComponent_Internal<UAudioGameplayVolumeMutator,1,1,_AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
  UAudioGameplayVolumeMutator *pUVar8;
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
  pUVar14 = UAudioGameplayVolumeMutator::StaticClass();
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
    if (bVar12) goto LAB_14d99ba33;
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
LAB_14d99ba33:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14d99bacd;
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
LAB_14d99bacd:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14d99bbd0;
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
LAB_14d99bbd0:
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
        ForEachComponent_Internal<UAudioGameplayVolumeMutator,1,1,_AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UAudioGameplayVolumeMutator **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UAudioGameplayVolumeMutator *)0x0) {
      `AActor::
      GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[2]._padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UAudioGameplayVolumeMutator,1,0,`AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d99be40

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
ForEachComponent_Internal<UAudioGameplayVolumeMutator,1,0,_AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UAudioGameplayVolumeMutator *pUVar4;
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
  TArray<UAudioGameplayVolumeMutator_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
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
  pUVar10 = UAudioGameplayVolumeMutator::StaticClass();
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
    if (bVar6) goto LAB_14d99bf46;
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
LAB_14d99bf46:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d99bfcd;
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
LAB_14d99bfcd:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d99c0d1;
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
LAB_14d99c0d1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UAudioGameplayVolumeMutator **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UAudioGameplayVolumeMutator *)0x0) {
      `AActor::
      GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UAudioGameplayVolumeMutator,0,1,`AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d99c150

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
ForEachComponent_Internal<UAudioGameplayVolumeMutator,0,1,_AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UAudioGameplayVolumeMutator *pUVar8;
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
  pUVar14 = UAudioGameplayVolumeMutator::StaticClass();
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
    if (bVar13) goto LAB_14d99c243;
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
LAB_14d99c243:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14d99c2f0;
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
LAB_14d99c2f0:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14d99c400;
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
LAB_14d99c400:
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
        ForEachComponent_Internal<UAudioGameplayVolumeMutator,0,1,_AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UAudioGameplayVolumeMutator **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UAudioGameplayVolumeMutator *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[2]._padding_, local_1a0 != 0)) {
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

// ForEachComponent_Internal<UAudioGameplayVolumeMutator,0,0,`AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14d99c690

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
ForEachComponent_Internal<UAudioGameplayVolumeMutator,0,0,_AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UAudioGameplayVolumeMutator *pUVar6;
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
  TArray<UAudioGameplayVolumeMutator_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
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
  pUVar12 = UAudioGameplayVolumeMutator::StaticClass();
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
    if (bVar9) goto LAB_14d99c76e;
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
LAB_14d99c76e:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14d99c7ff;
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
LAB_14d99c7ff:
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
      goto LAB_14d99c910;
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
LAB_14d99c910:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UAudioGameplayVolumeMutator **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UAudioGameplayVolumeMutator *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// InternalConstructor<AAudioGameplayVolume> @ 14d99cdc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<AAudioGameplayVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  UPrimitiveComponent *this_00;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    this_00 = *(UPrimitiveComponent **)&this->field_0x2d8;
    *(undefined ***)this = &___7AAudioGameplayVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x8 = 1;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    if (this_00 != (UPrimitiveComponent *)0x0) {
      (**(code **)(*(longlong *)this_00 + 0x788))
                (this_00,UCollisionProfile::NoCollision_ProfileName,1);
      UPrimitiveComponent::SetGenerateOverlapEvents(this_00,false);
      this_00->bAlwaysCreatePhysicsState = '\x01';
    }
    pFVar2 = FName::FName(&local_res8,L"AGVComponent");
    FVar1 = *pFVar2;
    pUVar3 = UAudioGameplayVolumeComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)(this + 1) = pUVar4;
  }
  return;
}

// InternalConstructor<UAGVConditionProxy> @ 14d99cec0

void __cdecl InternalConstructor<UAGVConditionProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UAGVConditionProxy__6B_;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UAGVPrimitiveComponentProxy> @ 14d99cf10

void __cdecl InternalConstructor<UAGVPrimitiveComponentProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UAGVPrimitiveComponentProxy__6B_;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UAttenuationVolumeComponent> @ 14d99cf60

void __cdecl InternalConstructor<UAttenuationVolumeComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UAudioGameplayComponent *this;
  
  this = (UAudioGameplayComponent *)param_1->Obj;
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    this->_padding_ = (longlong)&UAttenuationVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAttenuationVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAttenuationVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    this->PayloadType = AGCP_ActiveSound|AGCP_Listener;
  }
  return;
}

// InternalConstructor<UAudioGameplayVolumeComponent> @ 14d99cff0

void __cdecl InternalConstructor<UAudioGameplayVolumeComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UAudioGameplayComponent *this;
  
  this = (UAudioGameplayComponent *)param_1->Obj;
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    this->_padding_ = (longlong)&UAudioGameplayVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAudioGameplayVolumeComponentBase> @ 14d99d070

void __cdecl InternalConstructor<UAudioGameplayVolumeComponentBase>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UAudioGameplayComponent *this;
  
  this = (UAudioGameplayComponent *)param_1->Obj;
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    this->_padding_ = (longlong)&UAudioGameplayVolumeComponentBase::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeComponentBase::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeComponentBase::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UAudioGameplayVolumeComponentBase__6B_;
  }
  return;
}

// InternalConstructor<UAudioGameplayVolumeMutator> @ 14d99d0d0

void __cdecl InternalConstructor<UAudioGameplayVolumeMutator>(FObjectInitializer *param_1)

{
  UAudioGameplayComponent *this;
  
  this = (UAudioGameplayComponent *)param_1->Obj;
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioGameplayVolumeMutator::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeMutator::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeMutator::_vftable__for__IAsyncPhysicsStateProcessor__;
  }
  return;
}

// InternalConstructor<UAudioGameplayVolumeProxy> @ 14d99d120

void __cdecl InternalConstructor<UAudioGameplayVolumeProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)this = &___7UAudioGameplayVolumeProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UAudioGameplayVolumeSubsystem> @ 14d99d170

void __cdecl InternalConstructor<UAudioGameplayVolumeSubsystem>(FObjectInitializer *param_1)

{
  UAudioEngineSubsystem *this;
  
  this = (UAudioEngineSubsystem *)param_1->Obj;
  if (this != (UAudioEngineSubsystem *)0x0) {
    UAudioEngineSubsystem::UAudioEngineSubsystem(this);
    *(undefined ***)this = &UAudioGameplayVolumeSubsystem::_vftable__for__UAudioEngineSubsystem__;
    *(undefined ***)(this + 1) =
         &UAudioGameplayVolumeSubsystem::_vftable__for__IActiveSoundUpdateInterface__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    *(undefined4 *)&this[4].field_0x24 = 0x80;
    *(undefined4 *)&this[4].field_0x28 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x2c = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined4 *)&this[6].field_0x10 = 0;
    *(undefined4 *)&this[6].field_0x14 = 0x80;
    *(undefined4 *)&this[6].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[6].field_0x1c = 0;
    *(undefined8 *)&this[6].field_0x28 = 0;
    *(undefined4 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined4 *)&this[7].field_0x10 = 0;
    this[7].field_0x14 = 0;
  }
  return;
}

// InternalConstructor<UFilterVolumeComponent> @ 14d99d2a0

void __cdecl InternalConstructor<UFilterVolumeComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UAudioGameplayComponent *this;
  
  this = (UAudioGameplayComponent *)param_1->Obj;
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    this->_padding_ = (longlong)&UFilterVolumeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UFilterVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UFilterVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x469c4000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined4 *)&this[1]._padding_ = 0x469c4000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    this->PayloadType = AGCP_ActiveSound|AGCP_Listener;
  }
  return;
}

// InternalConstructor<UReverbVolumeComponent> @ 14d99d330

void __cdecl InternalConstructor<UReverbVolumeComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UAudioGameplayComponent *this;
  
  this = (UAudioGameplayComponent *)param_1->Obj;
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    this->_padding_ = (longlong)&UReverbVolumeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UReverbVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UReverbVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    this->PayloadType = AGCP_Listener;
  }
  return;
}

// InternalConstructor<USubmixOverrideVolumeComponent> @ 14d99d3c0

void __cdecl InternalConstructor<USubmixOverrideVolumeComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UAudioGameplayComponent *this;
  
  this = (UAudioGameplayComponent *)param_1->Obj;
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    this->PayloadType = AGCP_Listener;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    this->_padding_ = (longlong)&USubmixOverrideVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USubmixOverrideVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USubmixOverrideVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USubmixSendVolumeComponent> @ 14d99d430

void __cdecl InternalConstructor<USubmixSendVolumeComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UAudioGameplayComponent *this;
  
  this = (UAudioGameplayComponent *)param_1->Obj;
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    this->PayloadType = AGCP_ActiveSound;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 8;
    this->_padding_ = (longlong)&USubmixSendVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USubmixSendVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USubmixSendVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AAudioGameplayVolume> @ 14d99d4a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AAudioGameplayVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AAudioGameplayVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    this[1].field_0x8 = 1;
    *(undefined ***)this = &___7AAudioGameplayVolume__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAGVConditionProxy> @ 14d99d590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAGVConditionProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAGVConditionProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UAGVConditionProxy__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xffffffffffffffff;
    pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAGVPrimitiveComponentProxy> @ 14d99d660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAGVPrimitiveComponentProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAGVPrimitiveComponentProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UAGVPrimitiveComponentProxy__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xffffffffffffffff;
    pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAttenuationVolumeComponent> @ 14d99d730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAttenuationVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGameplayComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAttenuationVolumeComponent::GetPrivateStaticClass();
  this = (UAudioGameplayComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAttenuationVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAttenuationVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAttenuationVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponent> @ 14d99d820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGameplayComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayVolumeComponent::GetPrivateStaticClass();
  this = (UAudioGameplayComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    this->_padding_ = (longlong)&UAudioGameplayVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponentBase> @ 14d99d920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponentBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGameplayComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayVolumeComponentBase::GetPrivateStaticClass();
  this = (UAudioGameplayComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    this->_padding_ = (longlong)&UAudioGameplayVolumeComponentBase::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeComponentBase::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeComponentBase::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UAudioGameplayVolumeComponentBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayVolumeMutator> @ 14d99d9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioGameplayVolumeMutator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGameplayComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayVolumeMutator::GetPrivateStaticClass();
  this = (UAudioGameplayComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioGameplayVolumeMutator::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeMutator::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioGameplayVolumeMutator::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayVolumeProxy> @ 14d99dac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioGameplayVolumeProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayVolumeProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0xffffffffffffffff;
    *(undefined ***)pUVar1 = &___7UAudioGameplayVolumeProxy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioGameplayVolumeSubsystem> @ 14d99db80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioGameplayVolumeSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioGameplayVolumeSubsystem::GetPrivateStaticClass();
  this = (UAudioEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioEngineSubsystem *)0x0) {
    UAudioEngineSubsystem::UAudioEngineSubsystem(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined ***)this = &UAudioGameplayVolumeSubsystem::_vftable__for__UAudioEngineSubsystem__;
    *(undefined ***)(this + 1) =
         &UAudioGameplayVolumeSubsystem::_vftable__for__IActiveSoundUpdateInterface__;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    *(undefined4 *)&this[4].field_0x24 = 0x80;
    *(undefined4 *)&this[4].field_0x28 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x2c = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined4 *)&this[6].field_0x10 = 0;
    *(undefined4 *)&this[6].field_0x14 = 0x80;
    *(undefined4 *)&this[6].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[6].field_0x1c = 0;
    *(undefined8 *)&this[6].field_0x28 = 0;
    *(undefined4 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined4 *)&this[7].field_0x10 = 0;
    this[7].field_0x14 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFilterVolumeComponent> @ 14d99dd30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFilterVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGameplayComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFilterVolumeComponent::GetPrivateStaticClass();
  this = (UAudioGameplayComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UFilterVolumeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UFilterVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UFilterVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0x469c4000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined4 *)&this[1]._padding_ = 0x469c4000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UReverbVolumeComponent> @ 14d99de20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UReverbVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGameplayComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReverbVolumeComponent::GetPrivateStaticClass();
  this = (UAudioGameplayComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UReverbVolumeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UReverbVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UReverbVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixOverrideVolumeComponent> @ 14d99df10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USubmixOverrideVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGameplayComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixOverrideVolumeComponent::GetPrivateStaticClass();
  this = (UAudioGameplayComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USubmixOverrideVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USubmixOverrideVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USubmixOverrideVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USubmixSendVolumeComponent> @ 14d99dff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USubmixSendVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGameplayComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USubmixSendVolumeComponent::GetPrivateStaticClass();
  this = (UAudioGameplayComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGameplayComponent *)0x0) {
    UAudioGameplayComponent::UAudioGameplayComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&USubmixSendVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&USubmixSendVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&USubmixSendVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UAGVPrimitiveComponentProxy> @ 14d99e0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAGVPrimitiveComponentProxy * __cdecl NewObject<UAGVPrimitiveComponentProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UAGVPrimitiveComponentProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAGVPrimitiveComponentProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAGVPrimitiveComponentProxy *)
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

// Transform<TMap<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>,TArray<TObjectPtr<UAudioGameplayVolumeProxy>,TSizedDefaultAllocator<32>_>_&,`UAudioGameplayVolumeSubsystem::GenerateVolumeProxyList'::__l2::<lambda_1>_> @ 14d99e730

void __cdecl
Algo::
Transform<TMap<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>,TArray<TObjectPtr<UAudioGameplayVolumeProxy>,TSizedDefaultAllocator<32>_>_&,_UAudioGameplayVolumeSubsystem::GenerateVolumeProxyList_::__l2::<lambda_1>_>
          (TMap<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
           *param_1,
          TArray<TObjectPtr<UAudioGameplayVolumeProxy>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  UObject *local_a0;
  TMap<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar8 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar8 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14d99e7ce;
      uVar10 = puVar13[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar9;
    if (iVar8 < iStack_7c) {
      iStack_7c = iVar8;
    }
  }
LAB_14d99e7ce:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar10 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar8 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar3) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d99e8d0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
    }
  }
LAB_14d99e8d0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      return;
    }
    lVar9 = *(longlong *)(*(longlong *)pTVar6 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    local_a0 = (UObject *)0x0;
    if (lVar9 != 0) {
      local_a0 = *(UObject **)(lVar9 + 0xf8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a0);
    }
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 < pFVar4 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a0);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ~TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,1,0> @ 14d99fda0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UAudioGameplayVolumeSubsystem::UpdateVolumeComponent_::__l26::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::`26'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::__l29::<lambda_1>,1,0> @ 14d99fdc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::__l29::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UAudioGameplayVolumeSubsystem::AddVolumeComponent_::__l29::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::`29'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::__l40::<lambda_1>,1,1> @ 14d99fde0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::__l40::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UAudioGameplayVolumeSubsystem::UpdateFromListeners_::__l40::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::`40'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FAudioGameplayProxyUpdateResult,int>
            (*(FAudioGameplayProxyUpdateResult **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l47::<lambda_1>,1,0> @ 14d99fe20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l47::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UAudioGameplayVolumeSubsystem::RemoveVolumeComponent_::__l47::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::`47'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FProxyMutator_Reverb::Apply'::__l12::<lambda_1>,1,1> @ 14d99fe40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProxyMutator_Reverb::Apply'::__l12::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FProxyMutator_Reverb::Apply_::__l12::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FProxyMutator_Reverb::Apply'::`12'::<lambda_1>,1,1>::_vftable_;
  FAudioDeviceHandle::~FAudioDeviceHandle((FAudioDeviceHandle *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`FProxyMutator_Reverb::Remove'::__l12::<lambda_1>,1,1> @ 14d99fe60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProxyMutator_Reverb::Remove'::__l12::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FProxyMutator_Reverb::Remove_::__l12::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FProxyMutator_Reverb::Remove'::`12'::<lambda_1>,1,1>::_vftable_;
  FAudioDeviceHandle::~FAudioDeviceHandle((FAudioDeviceHandle *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l49::<lambda_2>,1,0> @ 14d99fe80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l49::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_UAudioGameplayVolumeSubsystem::RemoveVolumeComponent_::__l49::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::`49'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9a0f58

/* [thunk]:public: virtual void * __ptr64 __cdecl UAttenuationVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAttenuationVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UAttenuationVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAttenuationVolumeComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9a0f68

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioGameplayVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioGameplayVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UAudioGameplayVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioGameplayVolumeComponent *)&this[-1].OnProxyEnter.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9a0f78

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioGameplayVolumeComponentBase::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioGameplayVolumeComponentBase::_vector_deleting_destructor__adjustor_40__
          (UAudioGameplayVolumeComponentBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioGameplayVolumeComponentBase *)&this[-1].field_0xa8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{200}' @ 14d9a0f88

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioGameplayVolumeComponentBase::`vector
   deleting destructor'`adjustor{200}' (unsigned int) __ptr64 */

void * __thiscall
UAudioGameplayVolumeComponentBase::_vector_deleting_destructor__adjustor_200__
          (UAudioGameplayVolumeComponentBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioGameplayVolumeComponentBase *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9a0f9c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioGameplayVolumeMutator::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioGameplayVolumeMutator::_vector_deleting_destructor__adjustor_40__
          (UAudioGameplayVolumeMutator *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioGameplayVolumeMutator *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14d9a0fac

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioGameplayVolumeSubsystem::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAudioGameplayVolumeSubsystem::_vector_deleting_destructor__adjustor_48__
          (UAudioGameplayVolumeSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioGameplayVolumeSubsystem *)&this[-1].WorldProxyLists.field_0x30,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9a0fbc

/* [thunk]:public: virtual void * __ptr64 __cdecl UFilterVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UFilterVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UFilterVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UFilterVolumeComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9a0fcc

/* [thunk]:public: virtual void * __ptr64 __cdecl UReverbVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UReverbVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UReverbVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UReverbVolumeComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9a0fdc

/* [thunk]:public: virtual void * __ptr64 __cdecl USubmixOverrideVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USubmixOverrideVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (USubmixOverrideVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USubmixOverrideVolumeComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d9a0fec

/* [thunk]:public: virtual void * __ptr64 __cdecl USubmixSendVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USubmixSendVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (USubmixSendVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((USubmixSendVolumeComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d9a1000

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AAudioGameplayVolume,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::__l26::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateVolumeComponent'::`26'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::__l29::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::AddVolumeComponent'::`29'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a10b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::__l40::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::UpdateFromListeners'::`40'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FAudioGameplayProxyUpdateResult,int>
            (*(FAudioGameplayProxyUpdateResult **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l47::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::`47'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProxyMutator_Reverb::Apply'::__l12::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FProxyMutator_Reverb::Apply'::`12'::<lambda_1>,1,1>::_vftable_;
  FAudioDeviceHandle::~FAudioDeviceHandle((FAudioDeviceHandle *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a11a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProxyMutator_Reverb::Remove'::__l12::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FProxyMutator_Reverb::Remove'::`12'::<lambda_1>,1,1>::_vftable_;
  FAudioDeviceHandle::~FAudioDeviceHandle((FAudioDeviceHandle *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a11f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::__l49::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioGameplayVolumeSubsystem::RemoveVolumeComponent'::`49'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1230

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_Attenuation,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FProxyMutator_Attenuation,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1270

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_Filter,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FProxyMutator_Filter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a12b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_Reverb,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FProxyMutator_Reverb,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a12f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_SubmixOverride,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FProxyMutator_SubmixOverride,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1330

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyMutator_SubmixSend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FProxyMutator_SubmixSend,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1370

void * __thiscall
AAudioGameplayVolume::_scalar_deleting_destructor_(AAudioGameplayVolume *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7AAudioGameplayVolume__6B_;
  pvVar1 = *(void **)&(this->OnListenerExitEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnListenerExitEvent);
  pvVar1 = *(void **)&(this->OnListenerEnterEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnListenerEnterEvent);
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1420

void * __thiscall
FProxyMutator_Attenuation::_scalar_deleting_destructor_
          (FProxyMutator_Attenuation *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1480

void * __thiscall
FProxyMutator_Filter::_scalar_deleting_destructor_(FProxyMutator_Filter *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a14e0

void * __thiscall
FProxyMutator_Reverb::_scalar_deleting_destructor_(FProxyMutator_Reverb *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1540

void * __thiscall
FProxyMutator_SubmixOverride::_scalar_deleting_destructor_
          (FProxyMutator_SubmixOverride *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            ((FAudioVolumeSubmixOverrideSettings *)
             (this->SubmixOverrideSettings).AllocatorInstance.Data,
             (this->SubmixOverrideSettings).ArrayNum);
  pFVar3 = (this->SubmixOverrideSettings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a15c0

void * __thiscall
FProxyMutator_SubmixSend::_scalar_deleting_destructor_(FProxyMutator_SubmixSend *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)(this->SubmixSendSettings).AllocatorInstance.Data,
             (this->SubmixSendSettings).ArrayNum);
  pFVar3 = (this->SubmixSendSettings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1640

void * __thiscall
FProxyVolumeMutator::_scalar_deleting_destructor_(FProxyVolumeMutator *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a16a0

void * __thiscall
IAudioGameplayVolumeInteraction::_scalar_deleting_destructor_
          (IAudioGameplayVolumeInteraction *this,uint param_1)

{
  *this = (IAudioGameplayVolumeInteraction)&___7IAudioGameplayVolumeInteraction__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a16e0

void * __thiscall
UAGVConditionProxy::_scalar_deleting_destructor_(UAGVConditionProxy *this,uint param_1)

{
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
            ((TSharedPtr<FProxyVolumeMutator,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
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

// `scalar_deleting_destructor' @ 14d9a1760

void * __thiscall
UAGVPrimitiveComponentProxy::_scalar_deleting_destructor_
          (UAGVPrimitiveComponentProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Primitives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
            ((TSharedPtr<FProxyVolumeMutator,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// `scalar_deleting_destructor' @ 14d9a17e0

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
UAttenuationVolumeComponent::_scalar_deleting_destructor_
          (UAttenuationVolumeComponent *this,uint param_1)

{
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1840

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
UAudioGameplayVolumeComponent::_scalar_deleting_destructor_
          (UAudioGameplayVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->OnProxyExit).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnProxyExit);
  pvVar1 = *(void **)&(this->OnProxyEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnProxyEnter);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a18e0

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
UAudioGameplayVolumeComponentBase::_scalar_deleting_destructor_
          (UAudioGameplayVolumeComponentBase *this,uint param_1)

{
  *(undefined ***)&this->field_0xc8 = &___7IAudioGameplayVolumeInteraction__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1950

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
UAudioGameplayVolumeMutator::_scalar_deleting_destructor_
          (UAudioGameplayVolumeMutator *this,uint param_1)

{
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a19b0

void * __thiscall
UAudioGameplayVolumeProxy::_scalar_deleting_destructor_
          (UAudioGameplayVolumeProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
            ((TSharedPtr<FProxyVolumeMutator,1> *)(this->ProxyVolumeMutators).AllocatorInstance.Data
             ,(this->ProxyVolumeMutators).ArrayNum);
  pFVar1 = (this->ProxyVolumeMutators).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d9a1a30

void * __thiscall
UAudioGameplayVolumeSubsystem::_scalar_deleting_destructor_
          (UAudioGameplayVolumeSubsystem *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->WorldProxyLists).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldProxyLists).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldProxyLists);
  *(undefined4 *)&(this->ActiveSoundData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveSoundData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveSoundData);
  DestructItems<FAudioGameplayVolumeListener,int>
            ((FAudioGameplayVolumeListener *)(this->AGVListeners).AllocatorInstance.Data,
             (this->AGVListeners).ArrayNum);
  pFVar2 = (this->AGVListeners).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->KnownProxyIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AGVComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AGVComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<UAudioGameplayVolumeComponent_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AGVComponents);
  pFVar2 = (this->TransientProxyList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IActiveSoundUpdateInterface__6B_;
  UAudioEngineSubsystem::~UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1b60

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
UFilterVolumeComponent::_scalar_deleting_destructor_(UFilterVolumeComponent *this,uint param_1)

{
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1bc0

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
UReverbVolumeComponent::_scalar_deleting_destructor_(UReverbVolumeComponent *this,uint param_1)

{
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1c20

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
USubmixOverrideVolumeComponent::_scalar_deleting_destructor_
          (USubmixOverrideVolumeComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            ((FAudioVolumeSubmixOverrideSettings *)
             (this->SubmixOverrideSettings).AllocatorInstance.Data,
             (this->SubmixOverrideSettings).ArrayNum);
  pFVar1 = (this->SubmixOverrideSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d9a1ca0

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
USubmixSendVolumeComponent::_scalar_deleting_destructor_
          (USubmixSendVolumeComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAudioVolumeSubmixSendSettings,int>
            ((FAudioVolumeSubmixSendSettings *)(this->SubmixSendSettings).AllocatorInstance.Data,
             (this->SubmixSendSettings).ArrayNum);
  pFVar1 = (this->SubmixSendSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAttenuationVolumeComponent @ 14d9a4cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAttenuationVolumeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayVolume @ 14d9a4cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeComponent @ 14d9a4cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeMutator @ 14d9a4ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeMutator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeProxy @ 14d9a4cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeSubsystem @ 14d9a4d00

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioGameplayVolume_init @ 14d9a4d10

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioGameplayVolume_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFilterVolumeComponent @ 14d9a4d20

void __cdecl EmptyLinkFunctionForGeneratedCodeFilterVolumeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReverbVolumeComponent @ 14d9a4d30

void __cdecl EmptyLinkFunctionForGeneratedCodeReverbVolumeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixOverrideVolumeComponent @ 14d9a4d40

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixOverrideVolumeComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSubmixSendVolumeComponent @ 14d9a4d50

void __cdecl EmptyLinkFunctionForGeneratedCodeSubmixSendVolumeComponent(void)

{
  return;
}

// FAudioGameplayVolumeEvent_DelegateWrapper @ 14d9a52f0

void __cdecl
FAudioGameplayVolumeEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnAudioGameplayVolumeProxyStateChange_DelegateWrapper @ 14d9a5300

void __cdecl
FOnAudioGameplayVolumeProxyStateChange_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// NeedsPhysicsQuery @ 14d9a7a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
AudioGameplayVolumeUtils::NeedsPhysicsQuery(UPrimitiveComponent *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimitiveComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeProxy.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_1->field_0x98 & 8) != 0) {
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x3c8))(param_1);
    if (cVar4 != '\0') {
      if (AudioGameplayVolumeConsoleVariables::bProxyDistanceCulling == 0) {
        return true;
      }
      dVar7 = (param_2->field0_0x0)._s_0.Y - *(double *)&param_1->field_0x118;
      dVar6 = (param_2->field0_0x0)._s_0.X - *(double *)&param_1->field_0x110;
      dVar5 = (param_2->field0_0x0)._s_0.Z - *(double *)&param_1->field_0x120;
      return (float)(dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5) <=
             (float)(*(double *)&param_1->field_0x140 * *(double *)&param_1->field_0x140);
    }
  }
  return false;
}

// Z_Construct_UClass_AAudioGameplayVolume_NoRegister @ 14d9ac830

UClass * __cdecl Z_Construct_UClass_AAudioGameplayVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolume",
               &Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton,
               AAudioGameplayVolume::StaticRegisterNativesAAudioGameplayVolume,0x338,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AAudioGameplayVolume>,
               InternalVTableHelperCtorCaller<AAudioGameplayVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAudioGameplayVolume.InnerSingleton;
}

// Z_Construct_UClass_UAGVConditionProxy_NoRegister @ 14d9ac8f0

UClass * __cdecl Z_Construct_UClass_UAGVConditionProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AGVConditionProxy",
               &Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton,
               UAGVConditionProxy::StaticRegisterNativesUAGVConditionProxy,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAGVConditionProxy>,
               InternalVTableHelperCtorCaller<UAGVConditionProxy>,local_res8,
               UAudioGameplayVolumeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton;
}

// Z_Construct_UClass_UAGVPrimitiveComponentProxy_NoRegister @ 14d9ac9b0

UClass * __cdecl Z_Construct_UClass_UAGVPrimitiveComponentProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AGVPrimitiveComponentProxy",
               &Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton,
               UAGVPrimitiveComponentProxy::StaticRegisterNativesUAGVPrimitiveComponentProxy,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAGVPrimitiveComponentProxy>,
               InternalVTableHelperCtorCaller<UAGVPrimitiveComponentProxy>,local_res8,
               UAudioGameplayVolumeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton;
}

// Z_Construct_UClass_UAttenuationVolumeComponent_NoRegister @ 14d9aca70

UClass * __cdecl Z_Construct_UClass_UAttenuationVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AttenuationVolumeComponent",
               &Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton,
               UAttenuationVolumeComponent::StaticRegisterNativesUAttenuationVolumeComponent,0xe0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAttenuationVolumeComponent>,
               InternalVTableHelperCtorCaller<UAttenuationVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttenuationVolumeComponent.InnerSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeComponentBase_NoRegister @ 14d9acb30

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeComponentBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeComponentBase",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton,
               UAudioGameplayVolumeComponentBase::
               StaticRegisterNativesUAudioGameplayVolumeComponentBase,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeComponentBase>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponentBase>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeMutator_NoRegister @ 14d9acbf0

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeMutator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeMutator",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton,
               UAudioGameplayVolumeMutator::StaticRegisterNativesUAudioGameplayVolumeMutator,0xd0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeMutator>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeMutator>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeMutator.InnerSingleton;
}

// Z_Construct_UClass_UAudioGameplayVolumeSubsystem_NoRegister @ 14d9accb0

UClass * __cdecl Z_Construct_UClass_UAudioGameplayVolumeSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeSubsystem",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton,
               UAudioGameplayVolumeSubsystem::StaticRegisterNativesUAudioGameplayVolumeSubsystem,
               0x168,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGameplayVolumeSubsystem>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UFilterVolumeComponent_NoRegister @ 14d9acd70

UClass * __cdecl Z_Construct_UClass_UFilterVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"FilterVolumeComponent",
               &Z_Registration_Info_UClass_UFilterVolumeComponent.InnerSingleton,
               UFilterVolumeComponent::StaticRegisterNativesUFilterVolumeComponent,0xe0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UFilterVolumeComponent>,
               InternalVTableHelperCtorCaller<UFilterVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterVolumeComponent.InnerSingleton;
}

// Z_Construct_UClass_UReverbVolumeComponent_NoRegister @ 14d9ace30

UClass * __cdecl Z_Construct_UClass_UReverbVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"ReverbVolumeComponent",
               &Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton,
               UReverbVolumeComponent::StaticRegisterNativesUReverbVolumeComponent,0xf0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UReverbVolumeComponent>,
               InternalVTableHelperCtorCaller<UReverbVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReverbVolumeComponent.InnerSingleton;
}

// Z_Construct_UClass_USubmixOverrideVolumeComponent_NoRegister @ 14d9acef0

UClass * __cdecl Z_Construct_UClass_USubmixOverrideVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"SubmixOverrideVolumeComponent",
               &Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.InnerSingleton,
               USubmixOverrideVolumeComponent::StaticRegisterNativesUSubmixOverrideVolumeComponent,
               0xe0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<USubmixOverrideVolumeComponent>,
               InternalVTableHelperCtorCaller<USubmixOverrideVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixOverrideVolumeComponent.InnerSingleton;
}

// Z_Construct_UClass_USubmixSendVolumeComponent_NoRegister @ 14d9acfb0

UClass * __cdecl Z_Construct_UClass_USubmixSendVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"SubmixSendVolumeComponent",
               &Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton,
               USubmixSendVolumeComponent::StaticRegisterNativesUSubmixSendVolumeComponent,0xe0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<USubmixSendVolumeComponent>,
               InternalVTableHelperCtorCaller<USubmixSendVolumeComponent>,local_res8,
               UAudioGameplayVolumeMutator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixSendVolumeComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_AudioGameplayVolume @ 14d9ad8d0

void __cdecl IMPLEMENT_MODULE_AudioGameplayVolume(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AudioGameplayVolumeLog'' @ 15045b510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__AudioGameplayVolumeLog__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&AudioGameplayVolumeLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowMultiplePrimitives'' @ 15045b530

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_atexit_destructor_for__CVarAllowMultiplePrimitives__
          (void)

{
  CVarAllowMultiplePrimitives._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowMultiplePrimitives);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAudioThreadCmdRollback'' @ 15045b550

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_atexit_destructor_for__CVarAudioThreadCmdRollback__
          (void)

{
  CVarAudioThreadCmdRollback._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAudioThreadCmdRollback);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnabled'' @ 15045b570

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_atexit_destructor_for__CVarEnabled__(void)

{
  CVarEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPreventDuplicateSubmixSends'' @ 15045b590

void __cdecl
AudioGameplayVolumeConsoleVariables::
_dynamic_atexit_destructor_for__CVarPreventDuplicateSubmixSends__(void)

{
  CVarPreventDuplicateSubmixSends._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPreventDuplicateSubmixSends);
  return;
}

// `dynamic_atexit_destructor_for_'CVarProxyDistanceCulling'' @ 15045b5b0

void __cdecl
AudioGameplayVolumeComponentVariables::_dynamic_atexit_destructor_for__CVarProxyDistanceCulling__
          (void)

{
  CVarProxyDistanceCulling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarProxyDistanceCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarProxyDistanceCulling'' @ 15045b5d0

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_atexit_destructor_for__CVarProxyDistanceCulling__
          (void)

{
  CVarProxyDistanceCulling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarProxyDistanceCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUpdateInterval'' @ 15045b5f0

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_atexit_destructor_for__CVarUpdateInterval__(void)

{
  CVarUpdateInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUpdateInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUpdateListeners'' @ 15045b610

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_atexit_destructor_for__CVarUpdateListeners__(void)

{
  CVarUpdateListeners._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUpdateListeners);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUpdateRateJitterDelta'' @ 15045b630

void __cdecl
AudioGameplayVolumeConsoleVariables::_dynamic_atexit_destructor_for__CVarUpdateRateJitterDelta__
          (void)

{
  CVarUpdateRateJitterDelta._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUpdateRateJitterDelta);
  return;
}

