// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 147

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingEvent_h__Script_SequencerScripting_2957703497'' @ 1413adbd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingEvent_h__Script_SequencerScripting_2957703497__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingEvent_h__Script_SequencerScripting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h__Script_SequencerScripting_237986543'' @ 1413adc10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h__Script_SequencerScripting_237986543__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h__Script_SequencerScripting_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h__Script_SequencerScripting_2194969624'' @ 1413adc50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h__Script_SequencerScripting_2194969624__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingInteger_h__Script_SequencerScripting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h__Script_SequencerScripting_2528097140'' @ 1413adc90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h__Script_SequencerScripting_2528097140__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h__Script_SequencerScripting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UMovieSceneScriptingEventKey_NoRegister @ 14c680780

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingEventKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingEventKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingEventKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingEventKey.InnerSingleton,
               UMovieSceneScriptingEventKey::StaticRegisterNativesUMovieSceneScriptingEventKey,0x60,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingEventKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingEventKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingEventKey.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel @ 14c6809c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingObjectPathKey @ 14c680a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingObjectPathKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_GetTime @ 14c680b00

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_GetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_GetTime_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_GetValue @ 14c680b40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_GetValue_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_SetTime @ 14c680b80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_SetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_SetTime_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_SetValue @ 14c680bc0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathKey_SetValue_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingEventChannel @ 14c680cc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingEventChannel(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingEventChannel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingEventChannel.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingEventChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingEventChannel.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingEventKey @ 14c680d00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingEventKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingEventKey.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingEventKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingEventKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingEventKey.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventKey_GetTime @ 14c680d40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventKey_GetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventKey_GetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_AddKey @ 14c680d80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_AddKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_AddKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventKey_GetValue @ 14c680dc0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventKey_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventKey_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetDefault @ 14c680e00

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetKeys @ 14c680e40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventKey_SetTime @ 14c680e80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventKey_SetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventKey_SetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventKey_SetValue @ 14c680ec0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventKey_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventKey_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetKeysByIndex @ 14c680f00

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetKeysByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_GetKeysByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c680f40

void __cdecl
Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_HasDefault_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_HasDefault @ 14c680f50

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_HasDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_HasDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_RemoveDefault @ 14c680f90

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_RemoveDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_RemoveDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_RemoveKey @ 14c680fd0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_RemoveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_RemoveKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingActualFloatKey @ 14c681010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingActualFloatKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey @ 14c681050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingFloatChannel @ 14c681090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingFloatChannel(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingFloatKey @ 14c6810d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingFloatKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_SetDefault @ 14c681110

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_SetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_SetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent @ 14c681150

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight @ 14c681190

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_Transform @ 14c6811d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingObjectPathChannel_Transform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode @ 14c681210

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent @ 14c681250

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight @ 14c681290

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode @ 14c6812d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode @ 14c681310

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime @ 14c681350

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue @ 14c681390

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent @ 14c6813d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight @ 14c681410

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventChannel_AddKey @ 14c681450

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventChannel_AddKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventChannel_AddKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode @ 14c681490

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventChannel_GetKeys @ 14c6814d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventChannel_GetKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventChannel_GetKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent @ 14c681510

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight @ 14c681550

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventChannel_GetKeysByIndex @ 14c681590

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventChannel_GetKeysByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventChannel_GetKeysByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode @ 14c6815d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventChannel_RemoveKey @ 14c681610

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventChannel_RemoveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventChannel_RemoveKey_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode @ 14c681650

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime @ 14c681690

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingEventChannel_Transform @ 14c6816d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingEventChannel_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingEventChannel_Transform_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue @ 14c681710

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey @ 14c681750

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange @ 14c681790

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys @ 14c6817d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault @ 14c681810

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys @ 14c681850

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex @ 14c681890

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys @ 14c6818d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation @ 14c681910

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation @ 14c681950

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c681990

void __cdecl
Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault @ 14c6819a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault @ 14c6819e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey @ 14c681a20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault @ 14c681a60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation @ 14c681aa0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation @ 14c681ae0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_Transform @ 14c681b20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_Transform_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingIntegerKey_NoRegister @ 14c681b60

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingIntegerKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingIntegerKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingIntegerKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingIntegerKey.InnerSingleton,
               UMovieSceneScriptingIntegerKey::StaticRegisterNativesUMovieSceneScriptingIntegerKey,
               0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingIntegerKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingIntegerKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingIntegerKey.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingIntegerChannel @ 14c681da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingIntegerChannel(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingIntegerKey @ 14c681de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingIntegerKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingIntegerKey.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingIntegerKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingIntegerKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingIntegerKey.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_GetTime @ 14c681e20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_GetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_GetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_GetValue @ 14c681e60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_SetTime @ 14c681ea0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_SetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_SetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_SetValue @ 14c681ee0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerKey_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_AddKey @ 14c681f20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_AddKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_AddKey_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_EvaluateKeys @ 14c681f60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_EvaluateKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_EvaluateKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetDefault @ 14c681fa0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c681fe0

void __cdecl
Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetInterpolateLinearKeys_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetInterpolateLinearKeys @ 14c681ff0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetInterpolateLinearKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetInterpolateLinearKeys_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetKeys @ 14c682030

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetKeys_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetKeysByIndex @ 14c682070

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetKeysByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetKeysByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetNumKeys @ 14c6820b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetNumKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_GetNumKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c6820f0

void __cdecl
Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_HasDefault_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_HasDefault @ 14c682100

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_HasDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_HasDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_RemoveDefault @ 14c682140

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_RemoveDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_RemoveDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_RemoveKey @ 14c682180

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_RemoveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_RemoveKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_SetDefault @ 14c6821c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_SetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_SetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInInterpolateLinearKeys_SetBit @ 14c682200

void __cdecl
Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_SetInterpolateLinearKeys_Statics::
NewProp_bInInterpolateLinearKeys_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_SetInterpolateLinearKeys @ 14c682210

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_SetInterpolateLinearKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_SetInterpolateLinearKeys_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_Transform @ 14c682250

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingIntegerChannel_Transform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister @ 14c682290

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingFloatKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton,
               UMovieSceneScriptingFloatKey::StaticRegisterNativesUMovieSceneScriptingFloatKey,0x40,
               8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingFloatKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_NoRegister @ 14c682410

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingObjectPathKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton,
               UMovieSceneScriptingObjectPathKey::
               StaticRegisterNativesUMovieSceneScriptingObjectPathKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingObjectPathKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton;
}

// InternalConstructor<UMovieSceneScriptingActualFloatKey> @ 14c6831c0

void __cdecl InternalConstructor<UMovieSceneScriptingActualFloatKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatKey__6B_;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingActualFloatKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingDoubleAsFloatKey> @ 14c683210

void __cdecl InternalConstructor<UMovieSceneScriptingDoubleAsFloatKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatKey__6B_;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingDoubleAsFloatKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingEventChannel> @ 14c683260

void __cdecl InternalConstructor<UMovieSceneScriptingEventChannel>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel *this;
  
  this = (UMovieSceneScriptingChannel *)param_1->Obj;
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingEventChannel__6B_;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    this[1].ChannelName.ComparisonIndex = 0;
    this[1].ChannelName.Number = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingEventKey> @ 14c6832b0

void __cdecl InternalConstructor<UMovieSceneScriptingEventKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingEventKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingFloatChannel> @ 14c6832f0

void __cdecl InternalConstructor<UMovieSceneScriptingFloatChannel>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel *this;
  
  this = (UMovieSceneScriptingChannel *)param_1->Obj;
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 2));
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingFloatKey> @ 14c683340

void __cdecl InternalConstructor<UMovieSceneScriptingFloatKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingIntegerChannel> @ 14c683370

void __cdecl InternalConstructor<UMovieSceneScriptingIntegerChannel>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel *this;
  
  this = (UMovieSceneScriptingChannel *)param_1->Obj;
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingIntegerChannel__6B_;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    this[1].ChannelName.ComparisonIndex = 0;
    this[1].ChannelName.Number = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingIntegerKey> @ 14c6833c0

void __cdecl InternalConstructor<UMovieSceneScriptingIntegerKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingIntegerKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingObjectPathChannel> @ 14c683400

void __cdecl InternalConstructor<UMovieSceneScriptingObjectPathChannel>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel *this;
  
  this = (UMovieSceneScriptingChannel *)param_1->Obj;
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingObjectPathChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingObjectPathKey> @ 14c683450

void __cdecl InternalConstructor<UMovieSceneScriptingObjectPathKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingObjectPathKey__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingActualFloatKey> @ 14c683490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingActualFloatKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingActualFloatKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatKey__6B_;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingActualFloatKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingDoubleAsFloatKey> @ 14c683550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingDoubleAsFloatKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingDoubleAsFloatKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatKey__6B_;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingDoubleAsFloatKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingEventChannel> @ 14c683610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingEventChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingEventChannel::GetPrivateStaticClass();
  this = (UMovieSceneScriptingChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingEventChannel__6B_;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    this[1].ChannelName.ComparisonIndex = 0;
    this[1].ChannelName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingEventKey> @ 14c6836d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingEventKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingEventKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingEventKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatChannel> @ 14c683790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingFloatChannel::GetPrivateStaticClass();
  this = (UMovieSceneScriptingChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 2));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatKey> @ 14c683860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingFloatKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingIntegerChannel> @ 14c683910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingIntegerChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingIntegerChannel::GetPrivateStaticClass();
  this = (UMovieSceneScriptingChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingIntegerChannel__6B_;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    this[1].ChannelName.ComparisonIndex = 0;
    this[1].ChannelName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingIntegerKey> @ 14c6839d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingIntegerKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingIntegerKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingIntegerKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathChannel> @ 14c683a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingObjectPathChannel::GetPrivateStaticClass();
  this = (UMovieSceneScriptingChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingObjectPathChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathKey> @ 14c683b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingObjectPathKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingObjectPathKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UMovieSceneScriptingActualFloatKey> @ 14c683c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneScriptingActualFloatKey * __cdecl
NewObject<UMovieSceneScriptingActualFloatKey>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneScriptingActualFloatKey *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneScriptingActualFloatKey::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneScriptingActualFloatKey *)
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

// NewObject<UMovieSceneScriptingDoubleAsFloatKey> @ 14c683cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneScriptingDoubleAsFloatKey * __cdecl
NewObject<UMovieSceneScriptingDoubleAsFloatKey>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneScriptingDoubleAsFloatKey *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneScriptingDoubleAsFloatKey::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneScriptingDoubleAsFloatKey *)
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

// NewObject<UMovieSceneScriptingEventKey> @ 14c683d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneScriptingEventKey * __cdecl NewObject<UMovieSceneScriptingEventKey>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneScriptingEventKey *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneScriptingEventKey::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneScriptingEventKey *)
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

// NewObject<UMovieSceneScriptingIntegerKey> @ 14c683df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneScriptingIntegerKey * __cdecl NewObject<UMovieSceneScriptingIntegerKey>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneScriptingIntegerKey *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneScriptingIntegerKey::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneScriptingIntegerKey *)
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

// NewObject<UMovieSceneScriptingObjectPathKey> @ 14c683e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneScriptingObjectPathKey * __cdecl
NewObject<UMovieSceneScriptingObjectPathKey>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneScriptingObjectPathKey *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneScriptingObjectPathKey::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneScriptingObjectPathKey *)
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

// Transform<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_&,`UMovieSceneScriptingFloatChannel::EvaluateKeys'::__l7::<lambda_1>_> @ 14c683f90

void __cdecl
Algo::
Transform<TArray<double,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_&,_UMovieSceneScriptingFloatChannel::EvaluateKeys_::__l7::<lambda_1>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  float local_28 [4];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar1) break;
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_28[0] = (float)*(double *)pFVar7;
    if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar7 = pFVar7 + 8;
    *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28[0];
  }
  return;
}

// `scalar_deleting_destructor' @ 14c684950

void * __thiscall
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>::
FTransformRetiming::_scalar_deleting_destructor_(FTransformRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684990

void * __thiscall
TMovieSceneScriptingChannel<FMovieSceneEventChannel,UMovieSceneScriptingEventKey,FMovieSceneEvent>::
FTransformRetiming::_scalar_deleting_destructor_(FTransformRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6849d0

void * __thiscall
TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
FTransformRetiming::_scalar_deleting_destructor_(FTransformRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684a10

void * __thiscall
TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
FTransformRetiming::_scalar_deleting_destructor_(FTransformRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684a50

void * __thiscall
TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
::FTransformRetiming::_scalar_deleting_destructor_(FTransformRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684a90

void * __thiscall
UMovieSceneScriptingActualFloatKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingActualFloatKey *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingActualFloatKey__6B_;
  plVar3 = *(longlong **)&this->field_0x48;
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
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684b20

void * __thiscall
UMovieSceneScriptingDoubleAsFloatKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingDoubleAsFloatKey *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingDoubleAsFloatKey__6B_;
  plVar3 = *(longlong **)&this->field_0x48;
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
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684bb0

void * __thiscall
UMovieSceneScriptingEventChannel::_scalar_deleting_destructor_
          (UMovieSceneScriptingEventChannel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingEventChannel__6B_;
  plVar3 = *(longlong **)&(this->ChannelHandle).field_0x8;
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
  UMovieSceneScriptingChannel::~UMovieSceneScriptingChannel((UMovieSceneScriptingChannel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684c40

void * __thiscall
UMovieSceneScriptingEventKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingEventKey *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingEventKey__6B_;
  plVar3 = *(longlong **)&this->field_0x48;
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
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684cd0

void * __thiscall
UMovieSceneScriptingFloatChannel::_scalar_deleting_destructor_
          (UMovieSceneScriptingFloatChannel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatChannel__6B_;
  plVar3 = *(longlong **)&(this->DoubleChannelHandle).field_0x8;
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
  plVar3 = *(longlong **)&(this->FloatChannelHandle).field_0x8;
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
  UMovieSceneScriptingChannel::~UMovieSceneScriptingChannel((UMovieSceneScriptingChannel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684d80

void * __thiscall
UMovieSceneScriptingFloatKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingFloatKey *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684de0

void * __thiscall
UMovieSceneScriptingIntegerChannel::_scalar_deleting_destructor_
          (UMovieSceneScriptingIntegerChannel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingIntegerChannel__6B_;
  plVar3 = *(longlong **)&(this->ChannelHandle).field_0x8;
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
  UMovieSceneScriptingChannel::~UMovieSceneScriptingChannel((UMovieSceneScriptingChannel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684e70

void * __thiscall
UMovieSceneScriptingIntegerKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingIntegerKey *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingIntegerKey__6B_;
  plVar3 = *(longlong **)&this->field_0x48;
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
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684f00

void * __thiscall
UMovieSceneScriptingObjectPathChannel::_scalar_deleting_destructor_
          (UMovieSceneScriptingObjectPathChannel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingObjectPathChannel__6B_;
  plVar3 = *(longlong **)&(this->ChannelHandle).field_0x8;
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
  UMovieSceneScriptingChannel::~UMovieSceneScriptingChannel((UMovieSceneScriptingChannel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c684f90

void * __thiscall
UMovieSceneScriptingObjectPathKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingObjectPathKey *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingObjectPathKey__6B_;
  plVar3 = *(longlong **)&this->field_0x48;
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
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingEvent @ 14c685d50

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingEvent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingFloat @ 14c685d60

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingFloat(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingInteger @ 14c685d70

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingInteger(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingObjectPath @ 14c685d80

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingObjectPath(void)

{
  return;
}

// Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister @ 14c68d2d0

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingActualFloatKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton,
               UMovieSceneScriptingActualFloatKey::
               StaticRegisterNativesUMovieSceneScriptingActualFloatKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingActualFloatKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingActualFloatKey>,local_res8,
               UMovieSceneScriptingFloatKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister @ 14c68d390

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingDoubleAsFloatKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.InnerSingleton,
               UMovieSceneScriptingDoubleAsFloatKey::
               StaticRegisterNativesUMovieSceneScriptingDoubleAsFloatKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingDoubleAsFloatKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingDoubleAsFloatKey>,local_res8,
               UMovieSceneScriptingFloatKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingEventChannel_NoRegister @ 14c68d450

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingEventChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingEventChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingEventChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingEventChannel.InnerSingleton,
               UMovieSceneScriptingEventChannel::
               StaticRegisterNativesUMovieSceneScriptingEventChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingEventChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingEventChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingEventChannel.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister @ 14c68d510

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingFloatChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton,
               UMovieSceneScriptingFloatChannel::
               StaticRegisterNativesUMovieSceneScriptingFloatChannel,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingFloatChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_NoRegister @ 14c68d5d0

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingIntegerChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton,
               UMovieSceneScriptingIntegerChannel::
               StaticRegisterNativesUMovieSceneScriptingIntegerChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingIntegerChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingIntegerChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_NoRegister @ 14c68d690

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingObjectPathChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton,
               UMovieSceneScriptingObjectPathChannel::
               StaticRegisterNativesUMovieSceneScriptingObjectPathChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingObjectPathChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton;
}

