// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 386

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 1413adcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ApplyProperties__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ApplyProperties ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ApplyProperties>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ApplyProperties");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ApplyProperties,*pFVar1,
               L"Apply properties","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 1413add60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_AquireComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AquireComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AquireComponentAccessLocks>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_AquireComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AquireComponentAccessLocks,
               *pFVar1,L"Aquire Component Access Locks","STATGROUP_MovieSceneECS","STATCAT_Advanced"
               ,L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1413addf0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1413ade80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ReleaseComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ReleaseComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ReleaseComponentAccessLocks>)0x0)
  {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ReleaseComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ReleaseComponentAccessLocks,
               *pFVar1,L"Release Component Access Locks","STATGROUP_MovieSceneECS",
               "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingParticle_h__Script_SequencerScripting_1076810983'' @ 1413adf10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingParticle_h__Script_SequencerScripting_1076810983__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingParticle_h__Script_SequencerScripting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h__Script_SequencerScripting_1607391501'' @ 1413adf50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h__Script_SequencerScripting_1607391501__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h__Script_SequencerScripting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingText_h__Script_SequencerScripting_808706318'' @ 1413adf90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingText_h__Script_SequencerScripting_808706318__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingText_h__Script_SequencerScripting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h__Script_SequencerScripting_3507883432'' @ 1413adfd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h__Script_SequencerScripting_3507883432__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h__Script_SequencerScripting_720261400'' @ 1413ae010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h__Script_SequencerScripting_720261400__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h__Script_SequencerScripting_3229003566'' @ 1413ae050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h__Script_SequencerScripting_3229003566__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h__Script_SequencerScripting_1875550676'' @ 1413ae090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h__Script_SequencerScripting_1875550676__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h__Script_SequencerScripting_3517238282'' @ 1413ae0d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h__Script_SequencerScripting_3517238282__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h__Script_SequencerScripting_2000380410'' @ 1413ae110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h__Script_SequencerScripting_2000380410__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h__Script_SequencerScripting_2297543293'' @ 1413ae150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h__Script_SequencerScripting_2297543293__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h__Script_SequencerScripting_3271985589'' @ 1413ae190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h__Script_SequencerScripting_3271985589__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h__Script_SequencerScripting_2248956920'' @ 1413ae1d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h__Script_SequencerScripting_2248956920__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTimeWarpExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h__Script_SequencerScripting_327685186'' @ 1413ae210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h__Script_SequencerScripting_327685186__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h__Script_SequencerScripting_2384611153'' @ 1413ae250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h__Script_SequencerScripting_2384611153__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h__Script_SequencerScripting_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerScriptingRange_h__Script_SequencerScripting_3141285246'' @ 1413ae2a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerScriptingRange_h__Script_SequencerScripting_3141285246__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerScriptingRange_h__Script_SequencerScripting_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_SequencerScripting'' @ 1413ae2e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_SequencerScripting__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xacebca34;
  local_res8[0].DeclarationsHash = 0x561f9b41;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_SequencerScripting,L"/Script/SequencerScripting",
             &Z_Registration_Info_UPackage__Script_SequencerScripting,local_res8);
  return;
}

// NewStructOps @ 14c691650

void * __cdecl Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSequencerScriptingRange,&UE::CoreUObject::Private::Construct<FSequencerScriptingRange>,&UE::CoreUObject::Private::ConstructForTests<FSequencerScriptingRange>,&UE::CoreUObject::Private::Destruct<FSequencerScriptingRange>,&UE::CoreUObject::Private::Copy<FSequencerScriptingRange>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14c691690

void __cdecl
Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_UMovieSceneTimeWarpExtensions @ 14c6916a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTimeWarpExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName @ 14c6916e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp @ 14c691720

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_BreakTimeWarp_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant @ 14c691760

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_PlayRateToTimeWarpVariant_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate @ 14c6917a0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_Conv_TimeWarpVariantToPlayRate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp @ 14c6917e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_MakeTimeWarp_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// ESequenceTimeUnit_StaticEnum @ 14c691820

UEnum * __cdecl ESequenceTimeUnit_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SequencerScripting();
    Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit,(UObject *)pUVar1,
                       L"ESequenceTimeUnit");
  }
  return Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingParticleKey_NoRegister @ 14c691860

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingParticleKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingParticleKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingParticleKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingParticleKey.InnerSingleton,
               UMovieSceneScriptingParticleKey::StaticRegisterNativesUMovieSceneScriptingParticleKey
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingParticleKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingParticleKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingParticleKey.InnerSingleton;
}

// Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate @ 14c691920

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_SetFixedPlayRate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate @ 14c691960

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTimeWarpExtensions_ToFixedPlayRate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneTrackExtensions @ 14c691d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneTrackExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneTrackExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackExtensions.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneSequenceExtensions @ 14c691da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSequenceExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection @ 14c691de0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint @ 14c691e20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame @ 14c691e60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneBindingExtensions @ 14c691ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneBindingExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneBindingExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneBindingExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName @ 14c691ee0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence @ 14c691f20

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections @ 14c691f60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack @ 14c691fa0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable @ 14c691fe0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c692020

void __cdecl
Z_Construct_UFunction_UMovieSceneBindingExtensions_EqualEqual_MovieSceneBindingProxy_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence @ 14c692030

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey @ 14c692070

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_EqualEqual_MovieSceneBindingProxy @ 14c6920b0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneBindingExtensions_EqualEqual_MovieSceneBindingProxy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_EqualEqual_MovieSceneBindingProxy_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder @ 14c6920f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass @ 14c692130

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType @ 14c692170

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName @ 14c6921f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance @ 14c692230

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingParticleChannel @ 14c692270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingParticleChannel(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingParticleChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingParticleKey @ 14c6922b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingParticleKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingParticleKey.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingParticleKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingParticleKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingParticleKey.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSequencerScriptingRange @ 14c6922f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSequencerScriptingRange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSequencerScriptingRange.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSequencerScriptingRange.InnerSingleton,
               &Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSequencerScriptingRange.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSequencerScriptingRange.InnerSingleton;
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

// Z_Construct_UPackage__Script_SequencerScripting @ 14c692370

UPackage * __cdecl Z_Construct_UPackage__Script_SequencerScripting(void)

{
  if (Z_Registration_Info_UPackage__Script_SequencerScripting.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_SequencerScripting.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_SequencerScripting.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection @ 14c6923b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType @ 14c6923f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack @ 14c692430

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c692470

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleKey_GetTime @ 14c692480

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleKey_GetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleKey_GetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint @ 14c6924c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked @ 14c692500

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleKey_GetValue @ 14c692540

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleKey_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleKey_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName @ 14c692580

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame @ 14c6925c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey @ 14c692600

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames @ 14c692640

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleKey_SetTime @ 14c692680

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleKey_SetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleKey_SetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder @ 14c6926c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById @ 14c692700

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleKey_SetValue @ 14c692740

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleKey_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleKey_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName @ 14c692780

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName @ 14c6927c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber @ 14c692800

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence @ 14c692840

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel @ 14c692880

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForward_SetBit @ 14c6928c0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::
NewProp_bForward_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables @ 14c6928d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame @ 14c692910

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bForward_SetBit @ 14c692950

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::
NewProp_bForward_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName @ 14c692960

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence @ 14c6929a0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId @ 14c6929e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType @ 14c692a20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName @ 14c692a60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType @ 14c692aa0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate @ 14c692ae0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID @ 14c692b20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent @ 14c692b60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_AddKey @ 14c692ba0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_AddKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_AddKey_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings @ 14c692be0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass @ 14c692c20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_ComputeEffectiveRange @ 14c692c60

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_ComputeEffectiveRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_ComputeEffectiveRange_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder @ 14c692ca0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource @ 14c692ce0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetCustomClock @ 14c692d20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetCustomClock(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetCustomClock_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks @ 14c692d60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_EvaluateKeys @ 14c692da0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_EvaluateKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_EvaluateKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c692de0

void __cdecl
Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate @ 14c692df0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid @ 14c692e30

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetDefault @ 14c692e70

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType @ 14c692eb0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents @ 14c692ef0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c692f30

void __cdecl
Z_Construct_UFunction_UMovieSceneBindingExtensions_NotEqual_MovieSceneBindingProxy_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetKeys @ 14c692f40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames @ 14c692f80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_NotEqual_MovieSceneBindingProxy @ 14c692fc0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneBindingExtensions_NotEqual_MovieSceneBindingProxy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_NotEqual_MovieSceneBindingProxy_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove @ 14c693040

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneSectionExtensions @ 14c693090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneSectionExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetKeysByIndex @ 14c6930d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetKeysByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetKeysByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence @ 14c693150

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack @ 14c693190

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetNumKeys @ 14c6931d0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetNumKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_GetNumKeys_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene @ 14c693210

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c693250

void __cdecl
Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_HasDefault_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName @ 14c693260

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_HasDefault @ 14c6932a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_HasDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_HasDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd @ 14c6932e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_RemoveDefault @ 14c693320

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_RemoveDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_RemoveDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName @ 14c693360

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_RemoveKey @ 14c6933a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_RemoveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_RemoveKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds @ 14c6933e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent @ 14c693420

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange @ 14c693460

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_SetDefault @ 14c6934a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_SetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_SetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder @ 14c6934e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart @ 14c693520

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID @ 14c693560

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_Transform @ 14c6935a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingParticleChannel_Transform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds @ 14c6935e0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID @ 14c693620

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables @ 14c693660

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels @ 14c6936a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions @ 14c6936e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.
                OuterSingleton,
               &Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence @ 14c693720

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex @ 14c693760

UFunction * __cdecl
Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables @ 14c6937a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame @ 14c6937e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo @ 14c693820

UFunction * __cdecl
Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialInfo_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds @ 14c693860

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution @ 14c6938a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex @ 14c6938e0

UFunction * __cdecl
Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c693920

void __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame @ 14c693930

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo @ 14c693970

UFunction * __cdecl
Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialInfo_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks @ 14c6939b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c6939f0

void __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame @ 14c693a00

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd @ 14c693a40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame @ 14c693a80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart @ 14c693ac0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds @ 14c693b00

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd @ 14c693b40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart @ 14c693c40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel @ 14c693c80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c693cc0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked @ 14c693cd0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingStringKey_NoRegister @ 14c693d10

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingStringKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingStringKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton,
               UMovieSceneScriptingStringKey::StaticRegisterNativesUMovieSceneScriptingStringKey,
               0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingStringKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingStringKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14c693dd0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType @ 14c693de0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly @ 14c693e20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame @ 14c693f20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects @ 14c693f60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds @ 14c693fa0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange @ 14c693fe0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame @ 14c694020

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieScenePropertyTrackExtensions @ 14c694060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieScenePropertyTrackExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds @ 14c694160

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum @ 14c6941a0

UFunction * __cdecl Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame @ 14c6941e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence @ 14c694220

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass @ 14c694260

UFunction * __cdecl
Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds @ 14c6942a0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c6942e0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14c6942f0

void __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName @ 14c694300

UFunction * __cdecl Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack @ 14c694340

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame @ 14c694380

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c6943c0

void __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath @ 14c6943d0

UFunction * __cdecl Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID @ 14c694410

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame @ 14c694450

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingStringChannel @ 14c694490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingStringChannel(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingStringKey @ 14c6944d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingStringKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.OuterSingleton;
}

// Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName @ 14c694510

UFunction * __cdecl
Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame @ 14c694550

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource @ 14c694590

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsBounded_SetBit @ 14c6945d0

void __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::
NewProp_bIsBounded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime @ 14c6945e0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum @ 14c694620

UFunction * __cdecl Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded @ 14c694720

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate @ 14c694760

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInClassProperty_SetBit @ 14c6947a0

void __cdecl
Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::
NewProp_bInClassProperty_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue @ 14c6947b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass @ 14c6947f0

UFunction * __cdecl
Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds @ 14c694830

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType @ 14c694870

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime @ 14c6948b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange @ 14c6948f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath @ 14c694930

UFunction * __cdecl
Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame @ 14c694970

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue @ 14c6949b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds @ 14c6949f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence @ 14c694a30

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame @ 14c694a70

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bInLocked_SetBit @ 14c694ab0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::
NewProp_bInLocked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bIsBounded_SetBit @ 14c694ac0

void __cdecl
Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::
NewProp_bIsBounded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked @ 14c694ad0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded @ 14c694b10

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd @ 14c694b50

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey @ 14c694b90

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds @ 14c694bd0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneEventTrackExtensions @ 14c694c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneEventTrackExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds @ 14c694c50

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault @ 14c694c90

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInLocked_SetBit @ 14c694cd0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::
NewProp_bInLocked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection @ 14c694ce0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked @ 14c694d20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys @ 14c694d60

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection @ 14c694da0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneEventTrackExtensions_AddEventTriggerSection_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart @ 14c694de0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeysByIndex @ 14c694e20

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeysByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeysByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass @ 14c694e60

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds @ 14c694ea0

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c694ee0

void __cdecl
Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bInReadOnly_SetBit @ 14c694ef0

void __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault @ 14c694f00

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly @ 14c695000

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault @ 14c695040

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey @ 14c695080

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution @ 14c6950c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault @ 14c695100

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly @ 14c695140

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingStringChannel_Transform @ 14c695180

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingStringChannel_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_Transform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd @ 14c695280

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart @ 14c6952c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd @ 14c695300

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart @ 14c695400

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames @ 14c695440

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingTextKey_NoRegister @ 14c695480

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingTextKey_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingTextKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton,
               UMovieSceneScriptingTextKey::StaticRegisterNativesUMovieSceneScriptingTextKey,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingTextKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingTextKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneFolderExtensions @ 14c6956c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneFolderExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneFolderExtensions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneFolderExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneFolderExtensions.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14c695700

void __cdecl
Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder @ 14c695710

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c695750

void __cdecl
Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding @ 14c695760

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c6957a0

void __cdecl
Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack @ 14c6957b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMovieSceneScriptingTextChannel @ 14c6957f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingTextChannel(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingTextChannel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingTextChannel.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingTextChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingTextChannel.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingTextKey @ 14c695830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingTextKey(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneScriptingTextKey_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextKey_GetTime @ 14c695870

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextKey_GetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextKey_GetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextKey_GetValue @ 14c6958b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextKey_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextKey_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextKey_SetTime @ 14c6958f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextKey_SetTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextKey_SetTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextKey_SetValue @ 14c695930

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextKey_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextKey_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_AddKey @ 14c695970

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_AddKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_AddKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetDefault @ 14c6959b0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetDefault_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders @ 14c6959f0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetKeys @ 14c695a30

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetKeys(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetKeys_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetKeysByIndex @ 14c695a70

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetKeysByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_GetKeysByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings @ 14c695ab0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c695af0

void __cdecl
Z_Construct_UFunction_UMovieSceneScriptingTextChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UMovieSceneMaterialTrackExtensions @ 14c695b00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMaterialTrackExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_HasDefault @ 14c695b40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_HasDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_HasDefault_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex @ 14c695b80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks @ 14c695bc0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_RemoveDefault @ 14c695c00

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_RemoveDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_RemoveDefault_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_RemoveKey @ 14c695c40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_RemoveKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_RemoveKey_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo @ 14c695c80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialInfo_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor @ 14c695cc0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_SetDefault @ 14c695d00

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_SetDefault(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_SetDefault_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex @ 14c695d40

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName @ 14c695d80

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c695dc0

void __cdecl
Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo @ 14c695dd0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialInfo_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneScriptingTextChannel_Transform @ 14c695e10

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneScriptingTextChannel_Transform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneScriptingTextChannel_Transform_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder @ 14c695e50

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c695e90

void __cdecl
Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding @ 14c695ea0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c695ee0

void __cdecl
Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack @ 14c695fb0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c695ff0

void __cdecl
Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor @ 14c6960c0

UFunction * __cdecl Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bHasStart_SetBit @ 14c696100

void __cdecl
Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasStart_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// NewProp_bHasEnd_SetBit @ 14c696110

void __cdecl
Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasEnd_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 2;
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceChannel> @ 14c696d50

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneActorReferenceData::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneBoolChannel,UMovieSceneScriptingBoolChannel> @ 14c696d80

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneBoolChannel,UMovieSceneScriptingBoolChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneBoolChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneByteChannel,UMovieSceneScriptingByteChannel> @ 14c696db0

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneByteChannel,UMovieSceneScriptingByteChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneByteChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleChannel> @ 14c696de0

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneDoubleChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneEventChannel,UMovieSceneScriptingEventChannel> @ 14c696e10

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneEventChannel,UMovieSceneScriptingEventChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneEventChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneFloatChannel,UMovieSceneScriptingFloatChannel> @ 14c696e40

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneFloatChannel,UMovieSceneScriptingFloatChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneFloatChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerChannel> @ 14c696e70

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneIntegerChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathChannel> @ 14c696ea0

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneObjectPathChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleChannel> @ 14c696ed0

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneParticleChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringChannel> @ 14c696f00

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneStringChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// GetScriptingChannelsForChannel<FMovieSceneTextChannel,UMovieSceneScriptingTextChannel> @ 14c696f30

void __cdecl
GetScriptingChannelsForChannel<FMovieSceneTextChannel,UMovieSceneScriptingTextChannel>
          (FMovieSceneChannelProxy *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneTextChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar1->_padding_);
  return;
}

// InternalConstructor<UMovieSceneBindingExtensions> @ 14c696f60

void __cdecl InternalConstructor<UMovieSceneBindingExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneBindingExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneEventTrackExtensions> @ 14c696f90

void __cdecl InternalConstructor<UMovieSceneEventTrackExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneEventTrackExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneFolderExtensions> @ 14c696fc0

void __cdecl InternalConstructor<UMovieSceneFolderExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneFolderExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneMaterialTrackExtensions> @ 14c696ff0

void __cdecl InternalConstructor<UMovieSceneMaterialTrackExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneMaterialTrackExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieScenePrimitiveMaterialTrackExtensions> @ 14c697020

void __cdecl
InternalConstructor<UMovieScenePrimitiveMaterialTrackExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieScenePrimitiveMaterialTrackExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieScenePropertyTrackExtensions> @ 14c697050

void __cdecl InternalConstructor<UMovieScenePropertyTrackExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieScenePropertyTrackExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingParticleChannel> @ 14c697080

void __cdecl InternalConstructor<UMovieSceneScriptingParticleChannel>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel *this;
  
  this = (UMovieSceneScriptingChannel *)param_1->Obj;
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingParticleChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingParticleKey> @ 14c6970d0

void __cdecl InternalConstructor<UMovieSceneScriptingParticleKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingParticleKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingStringChannel> @ 14c697110

void __cdecl InternalConstructor<UMovieSceneScriptingStringChannel>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel *this;
  
  this = (UMovieSceneScriptingChannel *)param_1->Obj;
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingStringChannel__6B_;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    this[1].ChannelName.ComparisonIndex = 0;
    this[1].ChannelName.Number = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingStringKey> @ 14c697160

void __cdecl InternalConstructor<UMovieSceneScriptingStringKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingStringKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingTextChannel> @ 14c6971a0

void __cdecl InternalConstructor<UMovieSceneScriptingTextChannel>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel *this;
  
  this = (UMovieSceneScriptingChannel *)param_1->Obj;
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingTextChannel__6B_;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    this[1].ChannelName.ComparisonIndex = 0;
    this[1].ChannelName.Number = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneScriptingTextKey> @ 14c6971f0

void __cdecl InternalConstructor<UMovieSceneScriptingTextKey>(FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey *this;
  
  this = (UMovieSceneScriptingKey *)param_1->Obj;
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingTextKey__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneSectionExtensions> @ 14c697230

void __cdecl InternalConstructor<UMovieSceneSectionExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneSectionExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneSequenceExtensions> @ 14c697260

void __cdecl InternalConstructor<UMovieSceneSequenceExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneSequenceExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneTimeWarpExtensions> @ 14c697290

void __cdecl InternalConstructor<UMovieSceneTimeWarpExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneTimeWarpExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneTrackExtensions> @ 14c6972c0

void __cdecl InternalConstructor<UMovieSceneTrackExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneTrackExtensions__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneBindingExtensions> @ 14c6972f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneBindingExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneBindingExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneBindingExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneEventTrackExtensions> @ 14c6973a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneEventTrackExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneEventTrackExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneEventTrackExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneFolderExtensions> @ 14c697450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneFolderExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneFolderExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneFolderExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMaterialTrackExtensions> @ 14c697500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneMaterialTrackExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMaterialTrackExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneMaterialTrackExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrackExtensions> @ 14c6975b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrackExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScenePrimitiveMaterialTrackExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieScenePrimitiveMaterialTrackExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieScenePropertyTrackExtensions> @ 14c697660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieScenePropertyTrackExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieScenePropertyTrackExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieScenePropertyTrackExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingParticleChannel> @ 14c697710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingParticleChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingParticleChannel::GetPrivateStaticClass();
  this = (UMovieSceneScriptingChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingParticleChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingParticleKey> @ 14c6977d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingParticleKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingParticleKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingParticleKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingStringChannel> @ 14c697890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingStringChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingStringChannel::GetPrivateStaticClass();
  this = (UMovieSceneScriptingChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingStringChannel__6B_;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    this[1].ChannelName.ComparisonIndex = 0;
    this[1].ChannelName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingStringKey> @ 14c697950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingStringKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingStringKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingStringKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingTextChannel> @ 14c697a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingTextChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingTextChannel::GetPrivateStaticClass();
  this = (UMovieSceneScriptingChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingChannel *)0x0) {
    UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneScriptingTextChannel__6B_;
    this[1]._padding_ = 0;
    FMovieSceneChannelHandle::FMovieSceneChannelHandle
              ((FMovieSceneChannelHandle *)&this[1]._padding_);
    this[1].ChannelName.ComparisonIndex = 0;
    this[1].ChannelName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneScriptingTextKey> @ 14c697ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneScriptingTextKey>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneScriptingKey *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneScriptingTextKey::GetPrivateStaticClass();
  this = (UMovieSceneScriptingKey *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneScriptingKey *)0x0) {
    UMovieSceneScriptingKey::UMovieSceneScriptingKey(this,param_1);
    FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)(this + 1));
    this->_padding_ = (longlong)&___7UMovieSceneScriptingTextKey__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSectionExtensions> @ 14c697b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneSectionExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSectionExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneSectionExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneSequenceExtensions> @ 14c697c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneSequenceExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneSequenceExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneSequenceExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTimeWarpExtensions> @ 14c697cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneTimeWarpExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTimeWarpExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneTimeWarpExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneTrackExtensions> @ 14c697da0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneTrackExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneTrackExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneTrackExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UMovieSceneSequence,UMovieSceneSequence_*,0> @ 14c697e50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMovieSceneSequence,UMovieSceneSequence_*,0>
          (TObjectPtr<UMovieSceneSequence> *param_1,UMovieSceneSequence **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMovieSceneSequence *)0x0) {
    return *param_2 == (UMovieSceneSequence *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UMovieSceneEventRepeaterSection> @ 14c697e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEventRepeaterSection * __cdecl
NewObject<UMovieSceneEventRepeaterSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneEventRepeaterSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneEventRepeaterSection *)
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

// NewObject<UMovieSceneScriptingParticleKey> @ 14c697f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneScriptingParticleKey * __cdecl
NewObject<UMovieSceneScriptingParticleKey>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneScriptingParticleKey *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneScriptingParticleKey::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneScriptingParticleKey *)
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

// NewObject<UMovieSceneScriptingStringKey> @ 14c698000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneScriptingStringKey * __cdecl NewObject<UMovieSceneScriptingStringKey>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneScriptingStringKey *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneScriptingStringKey::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneScriptingStringKey *)
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

// NewObject<UMovieSceneScriptingTextKey> @ 14c6980a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneScriptingTextKey * __cdecl NewObject<UMovieSceneScriptingTextKey>(UObject *param_1)

{
  UClass *pUVar1;
  UMovieSceneScriptingTextKey *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneScriptingTextKey::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneScriptingTextKey *)
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

// SetScriptingChannelHandle<FMovieSceneDoubleChannel,UMovieSceneScriptingFloatChannel> @ 14c698280

void __cdecl
SetScriptingChannelHandle<FMovieSceneDoubleChannel,UMovieSceneScriptingFloatChannel>
          (UMovieSceneScriptingFloatChannel *param_1,FMovieSceneChannelProxy *param_2,int param_3)

{
  int *piVar1;
  atomic<int> aVar2;
  int iVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  UScriptStruct *pUVar9;
  FMovieSceneChannelHandle *this;
  atomic<int> *paVar10;
  TWeakPtr<FMovieSceneChannelProxy,1> local_58;
  FMovieSceneChannelHandle local_48;
  FMovieSceneChannelHandle local_28;
  
  pUVar9 = FMovieSceneDoubleChannel::StaticStruct();
  this = FMovieSceneChannelProxy::MakeHandle(param_2,&local_28,(FName)pUVar9->_padding_,param_3);
  pUVar9 = FMovieSceneDoubleChannel::StaticStruct();
  bVar8 = FMovieSceneChannelHandle::IsCastValidInternal(this,(UStruct *)pUVar9);
  if (!bVar8) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("IsCastValid<OtherChannelType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelHandle.h"
                       ,0xd8,L"Invalid cast between unrelated channel types");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = this->ChannelIndex;
  FVar4 = this->ChannelTypeName;
  local_58.Object = (this->WeakChannelProxy).Object;
  pTVar5 = (this->WeakChannelProxy).WeakReferenceCount.ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar10 = &pTVar5->WeakReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_58.WeakReferenceCount.ReferenceController = pTVar5;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_48,&local_58,FVar4,iVar3);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar2 = *paVar10;
    *paVar10 = (atomic<int>)((int)*paVar10 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5);
    }
    LOCK();
    paVar10 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar10;
    *paVar10 = (atomic<int>)((int)*paVar10 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5);
    }
  }
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar10 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount;
    aVar2 = *paVar10;
    *paVar10 = (atomic<int>)((int)*paVar10 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))();
    }
  }
  if ((FMovieSceneChannelHandle *)&param_1->DoubleChannelHandle != &local_48) {
    plVar6 = *(longlong **)&(param_1->DoubleChannelHandle).field_0x8;
    *(FMovieSceneChannelProxy **)&param_1->DoubleChannelHandle = local_48.WeakChannelProxy.Object;
    *(TReferenceControllerBase<1> **)&(param_1->DoubleChannelHandle).field_0x8 =
         local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController;
    local_48.WeakChannelProxy.Object = (FMovieSceneChannelProxy *)0x0;
    local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  *(uint *)&(param_1->DoubleChannelHandle).field_0x10 =
       local_48.ChannelTypeName.ComparisonIndex.Value;
  *(uint *)&(param_1->DoubleChannelHandle).field_0x14 = local_48.ChannelTypeName.Number;
  *(int *)&(param_1->DoubleChannelHandle).field_0x18 = local_48.ChannelIndex;
  if (local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar10 = &(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount;
    aVar2 = *paVar10;
    *paVar10 = (atomic<int>)((int)*paVar10 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// SetScriptingChannelHandle<FMovieSceneFloatChannel,UMovieSceneScriptingFloatChannel> @ 14c698440

void __cdecl
SetScriptingChannelHandle<FMovieSceneFloatChannel,UMovieSceneScriptingFloatChannel>
          (UMovieSceneScriptingFloatChannel *param_1,FMovieSceneChannelProxy *param_2,int param_3)

{
  int *piVar1;
  atomic<int> aVar2;
  int iVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  UScriptStruct *pUVar9;
  FMovieSceneChannelHandle *this;
  atomic<int> *paVar10;
  TWeakPtr<FMovieSceneChannelProxy,1> local_58;
  FMovieSceneChannelHandle local_48;
  FMovieSceneChannelHandle local_28;
  
  pUVar9 = FMovieSceneFloatChannel::StaticStruct();
  this = FMovieSceneChannelProxy::MakeHandle(param_2,&local_28,(FName)pUVar9->_padding_,param_3);
  pUVar9 = FMovieSceneFloatChannel::StaticStruct();
  bVar8 = FMovieSceneChannelHandle::IsCastValidInternal(this,(UStruct *)pUVar9);
  if (!bVar8) {
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("IsCastValid<OtherChannelType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelHandle.h"
                       ,0xd8,L"Invalid cast between unrelated channel types");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = this->ChannelIndex;
  FVar4 = this->ChannelTypeName;
  local_58.Object = (this->WeakChannelProxy).Object;
  pTVar5 = (this->WeakChannelProxy).WeakReferenceCount.ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar10 = &pTVar5->WeakReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_58.WeakReferenceCount.ReferenceController = pTVar5;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_48,&local_58,FVar4,iVar3);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar2 = *paVar10;
    *paVar10 = (atomic<int>)((int)*paVar10 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5);
    }
    LOCK();
    paVar10 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar10;
    *paVar10 = (atomic<int>)((int)*paVar10 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5);
    }
  }
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar10 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount;
    aVar2 = *paVar10;
    *paVar10 = (atomic<int>)((int)*paVar10 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))();
    }
  }
  if ((FMovieSceneChannelHandle *)&param_1->FloatChannelHandle != &local_48) {
    plVar6 = *(longlong **)&(param_1->FloatChannelHandle).field_0x8;
    *(FMovieSceneChannelProxy **)&param_1->FloatChannelHandle = local_48.WeakChannelProxy.Object;
    *(TReferenceControllerBase<1> **)&(param_1->FloatChannelHandle).field_0x8 =
         local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController;
    local_48.WeakChannelProxy.Object = (FMovieSceneChannelProxy *)0x0;
    local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  *(uint *)&(param_1->FloatChannelHandle).field_0x10 =
       local_48.ChannelTypeName.ComparisonIndex.Value;
  *(uint *)&(param_1->FloatChannelHandle).field_0x14 = local_48.ChannelTypeName.Number;
  *(int *)&(param_1->FloatChannelHandle).field_0x18 = local_48.ChannelIndex;
  if (local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar10 = &(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount;
    aVar2 = *paVar10;
    *paVar10 = (atomic<int>)((int)*paVar10 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// StaticEnum<enum_ESequenceTimeUnit> @ 14c698600

UEnum * __cdecl StaticEnum<enum_ESequenceTimeUnit>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SequencerScripting();
    Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit,(UObject *)pUVar1,
                       L"ESequenceTimeUnit");
  }
  return Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14c699000

void * __thiscall
TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
::FTransformRetiming::_scalar_deleting_destructor_(FTransformRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c699040

void * __thiscall
TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
FTransformRetiming::_scalar_deleting_destructor_(FTransformRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c699080

void * __thiscall
TMovieSceneScriptingChannel<FMovieSceneTextChannel,UMovieSceneScriptingTextKey,FText>::
FTransformRetiming::_scalar_deleting_destructor_(FTransformRetiming *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c6990c0

void * __thiscall
UMovieSceneBindingExtensions::_scalar_deleting_destructor_
          (UMovieSceneBindingExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneBindingExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c699120

void * __thiscall
UMovieSceneEventTrackExtensions::_scalar_deleting_destructor_
          (UMovieSceneEventTrackExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneEventTrackExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c699180

void * __thiscall
UMovieSceneFolderExtensions::_scalar_deleting_destructor_
          (UMovieSceneFolderExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneFolderExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c6991e0

void * __thiscall
UMovieSceneMaterialTrackExtensions::_scalar_deleting_destructor_
          (UMovieSceneMaterialTrackExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneMaterialTrackExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c699240

void * __thiscall
UMovieScenePrimitiveMaterialTrackExtensions::_scalar_deleting_destructor_
          (UMovieScenePrimitiveMaterialTrackExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieScenePrimitiveMaterialTrackExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c6992a0

void * __thiscall
UMovieScenePropertyTrackExtensions::_scalar_deleting_destructor_
          (UMovieScenePropertyTrackExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieScenePropertyTrackExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c699300

void * __thiscall
UMovieSceneScriptingParticleChannel::_scalar_deleting_destructor_
          (UMovieSceneScriptingParticleChannel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingParticleChannel__6B_;
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

// `scalar_deleting_destructor' @ 14c699390

void * __thiscall
UMovieSceneScriptingParticleKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingParticleKey *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingParticleKey__6B_;
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

// `scalar_deleting_destructor' @ 14c699420

void * __thiscall
UMovieSceneScriptingStringChannel::_scalar_deleting_destructor_
          (UMovieSceneScriptingStringChannel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingStringChannel__6B_;
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

// `scalar_deleting_destructor' @ 14c6994b0

void * __thiscall
UMovieSceneScriptingStringKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingStringKey *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingStringKey__6B_;
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

// `scalar_deleting_destructor' @ 14c699540

void * __thiscall
UMovieSceneScriptingTextChannel::_scalar_deleting_destructor_
          (UMovieSceneScriptingTextChannel *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingTextChannel__6B_;
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

// `scalar_deleting_destructor' @ 14c6995d0

void * __thiscall
UMovieSceneScriptingTextKey::_scalar_deleting_destructor_
          (UMovieSceneScriptingTextKey *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingTextKey__6B_;
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

// `scalar_deleting_destructor' @ 14c699660

void * __thiscall
UMovieSceneSectionExtensions::_scalar_deleting_destructor_
          (UMovieSceneSectionExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneSectionExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c6996c0

void * __thiscall
UMovieSceneSequenceExtensions::_scalar_deleting_destructor_
          (UMovieSceneSequenceExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneSequenceExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c699720

void * __thiscall
UMovieSceneTimeWarpExtensions::_scalar_deleting_destructor_
          (UMovieSceneTimeWarpExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneTimeWarpExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c699780

void * __thiscall
UMovieSceneTrackExtensions::_scalar_deleting_destructor_
          (UMovieSceneTrackExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneTrackExtensions__6B_;
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

// EmptyLinkFunctionForGeneratedCodeMovieSceneBindingExtensions @ 14c69adf0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneBindingExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneEventTrackExtensions @ 14c69ae00

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneEventTrackExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneFolderExtensions @ 14c69ae10

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneFolderExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialTrackExtensions @ 14c69ae20

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialTrackExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrackExtensions @ 14c69ae30

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrackExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTrackExtensions @ 14c69ae40

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTrackExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingParticle @ 14c69ae50

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingParticle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingString @ 14c69ae60

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingString(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingText @ 14c69ae70

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingText(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSectionExtensions @ 14c69ae80

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSectionExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceExtensions @ 14c69ae90

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpExtensions @ 14c69aea0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneTrackExtensions @ 14c69aeb0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneTrackExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequenceTimeUnit @ 14c69aec0

void __cdecl EmptyLinkFunctionForGeneratedCodeSequenceTimeUnit(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequencerScriptingRange @ 14c69aed0

void __cdecl EmptyLinkFunctionForGeneratedCodeSequencerScriptingRange(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequencerScripting_init @ 14c69aee0

void __cdecl EmptyLinkFunctionForGeneratedCodeSequencerScripting_init(void)

{
  return;
}

// GetSubSectionChain @ 14c6a2dc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
GetSubSectionChain(UMovieSceneSubSection *param_1,UMovieSceneSequence *param_2,
                  TArray<UMovieSceneSubSection_*,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong *plVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  UClass *pUVar13;
  UMovieSceneSequence *pUVar14;
  longlong *plVar15;
  UMovieSceneSubSection *this;
  undefined8 *puVar16;
  UMovieSceneSubSection *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  UMovieSceneSubSection *local_50;
  undefined8 *local_48;
  
  local_res8 = param_1;
  lVar10 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2);
  puVar16 = *(undefined8 **)(lVar10 + 0xf8);
  uVar2 = *(uint *)(lVar10 + 0x100);
  uVar11 = (ulonglong)(int)uVar2;
  local_48 = puVar16 + uVar11;
  while( true ) {
    puVar6 = local_48;
    if (*(int *)(lVar10 + 0x100) != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar16 == puVar6) break;
    plVar12 = (longlong *)(**(code **)(*(longlong *)*puVar16 + 0x360))();
    plVar15 = (longlong *)*plVar12;
    lVar5 = plVar12[1];
    plVar1 = plVar15 + (int)lVar5;
    while( true ) {
      if ((int)plVar12[1] != (int)lVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (plVar15 == plVar1) break;
      this = (UMovieSceneSubSection *)*plVar15;
      if (this == local_res8) {
        pFVar3 = (param_3->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_res8) &&
            ((FScriptContainerElement *)&local_res8 < pFVar3 + (longlong)param_3->ArrayMax * 8)) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == param_3->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar9 + 1;
        *(UMovieSceneSubSection **)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             local_res8;
        return true;
      }
      pUVar13 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
      iVar9 = (int)pUVar13->_padding_;
      if ((iVar9 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar9 * 8)
          == &pUVar13->_padding_)) {
        pUVar13 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
        iVar9 = (int)pUVar13->_padding_;
        if ((*(int *)(this->_padding_ + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar13->_padding_)) {
          this = (UMovieSceneSubSection *)0x0;
        }
        local_50 = this;
        pUVar14 = UMovieSceneSubSection::GetSequence(this);
        bVar7 = GetSubSectionChain(local_res8,pUVar14,param_3);
        if (bVar7) {
          pFVar3 = (param_3->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
              ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)param_3->ArrayMax * 8)) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar9 = param_3->ArrayNum;
          if (iVar9 == param_3->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar9 + 1;
          *(UMovieSceneSubSection **)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
               local_50;
        }
      }
      plVar15 = plVar15 + 1;
    }
    uVar11 = (ulonglong)uVar2;
    puVar16 = puVar16 + 1;
  }
  return false;
}

// Z_Construct_UClass_UMovieSceneBindingExtensions_NoRegister @ 14c6a7ec0

UClass * __cdecl Z_Construct_UClass_UMovieSceneBindingExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneBindingExtensions",
               &Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton,
               UMovieSceneBindingExtensions::StaticRegisterNativesUMovieSceneBindingExtensions,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBindingExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneEventTrackExtensions_NoRegister @ 14c6a7f80

UClass * __cdecl Z_Construct_UClass_UMovieSceneEventTrackExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneEventTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton,
               UMovieSceneEventTrackExtensions::StaticRegisterNativesUMovieSceneEventTrackExtensions
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEventTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneEventTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventTrackExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneFolderExtensions_NoRegister @ 14c6a8040

UClass * __cdecl Z_Construct_UClass_UMovieSceneFolderExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneFolderExtensions",
               &Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton,
               UMovieSceneFolderExtensions::StaticRegisterNativesUMovieSceneFolderExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneFolderExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneFolderExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFolderExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_NoRegister @ 14c6a8100

UClass * __cdecl Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneMaterialTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton,
               UMovieSceneMaterialTrackExtensions::
               StaticRegisterNativesUMovieSceneMaterialTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMaterialTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister @ 14c6a81c0

UClass * __cdecl Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieScenePrimitiveMaterialTrackExtensions",
               &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.
                InnerSingleton,
               UMovieScenePrimitiveMaterialTrackExtensions::
               StaticRegisterNativesUMovieScenePrimitiveMaterialTrackExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePrimitiveMaterialTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrackExtensions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieScenePropertyTrackExtensions_NoRegister @ 14c6a8280

UClass * __cdecl Z_Construct_UClass_UMovieScenePropertyTrackExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieScenePropertyTrackExtensions",
               &Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton,
               UMovieScenePropertyTrackExtensions::
               StaticRegisterNativesUMovieScenePropertyTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingParticleChannel_NoRegister @ 14c6a8340

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingParticleChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingParticleChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton,
               UMovieSceneScriptingParticleChannel::
               StaticRegisterNativesUMovieSceneScriptingParticleChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingParticleChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingParticleChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingStringChannel_NoRegister @ 14c6a8400

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingStringChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingStringChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton,
               UMovieSceneScriptingStringChannel::
               StaticRegisterNativesUMovieSceneScriptingStringChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingStringChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingStringChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneScriptingTextChannel_NoRegister @ 14c6a84c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneScriptingTextChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingTextChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingTextChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingTextChannel.InnerSingleton,
               UMovieSceneScriptingTextChannel::StaticRegisterNativesUMovieSceneScriptingTextChannel
               ,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingTextChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingTextChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingTextChannel.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSectionExtensions_NoRegister @ 14c6a8580

UClass * __cdecl Z_Construct_UClass_UMovieSceneSectionExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneSectionExtensions",
               &Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton,
               UMovieSceneSectionExtensions::StaticRegisterNativesUMovieSceneSectionExtensions,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneSequenceExtensions_NoRegister @ 14c6a8640

UClass * __cdecl Z_Construct_UClass_UMovieSceneSequenceExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneSequenceExtensions",
               &Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton,
               UMovieSceneSequenceExtensions::StaticRegisterNativesUMovieSceneSequenceExtensions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequenceExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneSequenceExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTimeWarpExtensions_NoRegister @ 14c6a8700

UClass * __cdecl Z_Construct_UClass_UMovieSceneTimeWarpExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneTimeWarpExtensions",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton,
               UMovieSceneTimeWarpExtensions::StaticRegisterNativesUMovieSceneTimeWarpExtensions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTimeWarpExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneTrackExtensions_NoRegister @ 14c6a87c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneTrackExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton,
               UMovieSceneTrackExtensions::StaticRegisterNativesUMovieSceneTrackExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTrackExtensions.InnerSingleton;
}

// Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit @ 14c6a8880

UEnum * __cdecl Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit(void)

{
  if (Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton,
               &Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton;
}

