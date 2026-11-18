// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 207

// `dynamic_initializer_for_'LogTemplateSequence'' @ 1411dc020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTemplateSequence__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTemplateSequence,L"LogTemplateSequence",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTemplateSequence__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantTemplateSequence'' @ 1411dc060

void __cdecl _dynamic_initializer_for__ModuleRegistrantTemplateSequence__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TemplateSequence";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TemplateSequence",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FTemplateSequenceModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 1411dc0b0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 1411dc140

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1411dc1d0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1411dc260

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Systems_TemplateSequenceSystem_h__Script_TemplateSequence_1676766434'' @ 1411dc2f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Systems_TemplateSequenceSystem_h__Script_TemplateSequence_1676766434__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Systems_TemplateSequenceSystem_h__Script_TemplateSequence_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h__Script_TemplateSequence_3318941869'' @ 1411dc330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h__Script_TemplateSequence_3318941869__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h__Script_TemplateSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequencePlayer_h__Script_TemplateSequence_3023014517'' @ 1411dc370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequencePlayer_h__Script_TemplateSequence_3023014517__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequencePlayer_h__Script_TemplateSequence_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h__Script_TemplateSequence_4119434547'' @ 1411dc3b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h__Script_TemplateSequence_4119434547__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h__Script_TemplateSequence_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequence_h__Script_TemplateSequence_106784209'' @ 1411dc3f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequence_h__Script_TemplateSequence_106784209__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequence_h__Script_TemplateSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h__Script_TemplateSequence_921570231'' @ 1411dc430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h__Script_TemplateSequence_921570231__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h__Script_TemplateSequence_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h__Script_TemplateSequence_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h__Script_TemplateSequence_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h__Script_TemplateSequence_1215194215'' @ 1411dc480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h__Script_TemplateSequence_1215194215__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h__Script_TemplateSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h__Script_TemplateSequence_3713185069'' @ 1411dc4c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h__Script_TemplateSequence_3713185069__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h__Script_TemplateSequence_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h__Script_TemplateSequence_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h__Script_TemplateSequence_3325858265'' @ 1411dc510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h__Script_TemplateSequence_3325858265__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h__Script_TemplateSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h__Script_TemplateSequence_230806313'' @ 1411dc550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h__Script_TemplateSequence_230806313__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h__Script_TemplateSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h__Script_TemplateSequence_1589410512'' @ 1411dc590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h__Script_TemplateSequence_1589410512__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TemplateSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h__Script_TemplateSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_TemplateSequence'' @ 1411dc5d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_TemplateSequence__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x8c7b4aca;
  local_res8[0].DeclarationsHash = 0xb4d7770;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_TemplateSequence,L"/Script/TemplateSequence",
             &Z_Registration_Info_UPackage__Script_TemplateSequence,local_res8);
  return;
}

// Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV @ 14ac62d20

UFunction * __cdecl Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV @ 14ac62d60

UFunction * __cdecl
Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14ac62da0

void __cdecl
Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x784) = 1;
  return;
}

// Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache @ 14ac62db0

UFunction * __cdecl
Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator @ 14ac62df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator(void)

{
  if (Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton,
               &Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton;
}

// Z_Construct_UClass_UCameraAnimationEntitySystemLinker @ 14ac62e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraAnimationEntitySystemLinker(void)

{
  if (Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton,
               &Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton;
}

// Z_Construct_UClass_UCameraAnimationSequenceSubsystem @ 14ac62e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSequenceSubsystem(void)

{
  if (Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton,
               &Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UCameraAnimationSpawnableSystem @ 14ac62eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSpawnableSystem(void)

{
  if (Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton,
               &Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton;
}

// Z_Construct_UClass_UTemplateSequenceTrack @ 14ac631e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTemplateSequenceTrack(void)

{
  if (Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton,
               &Z_Construct_UClass_UTemplateSequenceTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton;
}

// Z_Construct_UPackage__Script_TemplateSequence @ 14ac63220

UPackage * __cdecl Z_Construct_UPackage__Script_TemplateSequence(void)

{
  if (Z_Registration_Info_UPackage__Script_TemplateSequence.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_TemplateSequence.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_TemplateSequence.OuterSingleton;
}

// Z_Construct_UClass_UCameraAnimationSequence_NoRegister @ 14ac63260

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSequence_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequence",
               &Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton,
               UCameraAnimationSequence::StaticRegisterNativesUCameraAnimationSequence,0xf0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraAnimationSequence>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequence>,local_res8,
               UTemplateSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton;
}

// Z_Construct_UClass_UCameraAnimationSequence @ 14ac633e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSequence(void)

{
  if (Z_Registration_Info_UClass_UCameraAnimationSequence.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraAnimationSequence.OuterSingleton,
               &Z_Construct_UClass_UCameraAnimationSequence_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequence.OuterSingleton;
}

// Z_Construct_UClass_UTemplateSequence @ 14ac63420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTemplateSequence(void)

{
  if (Z_Registration_Info_UClass_UTemplateSequence.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTemplateSequence.OuterSingleton,
               &Z_Construct_UClass_UTemplateSequence_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTemplateSequence.OuterSingleton;
}

// Z_Construct_UClass_UTemplateSequenceSection @ 14ac63460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTemplateSequenceSection(void)

{
  if (Z_Registration_Info_UClass_UTemplateSequenceSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTemplateSequenceSection.OuterSingleton,
               &Z_Construct_UClass_UTemplateSequenceSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceSection.OuterSingleton;
}

// Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType @ 14ac634a0

UEnum * __cdecl Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType(void)

{
  if (Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.InnerSingleton,
               &Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FTemplateSectionPropertyScale @ 14ac634e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTemplateSectionPropertyScale(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTemplateSectionPropertyScale.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTemplateSectionPropertyScale.InnerSingleton,
               &Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTemplateSectionPropertyScale.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTemplateSectionPropertyScale.InnerSingleton;
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

// ETemplateSectionPropertyScaleType_StaticEnum @ 14ac63560

UEnum * __cdecl ETemplateSectionPropertyScaleType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TemplateSequence();
    Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType,
                       (UObject *)pUVar1,L"ETemplateSectionPropertyScaleType");
  }
  return Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton;
}

// NewStructOps @ 14ac635a0

void * __cdecl Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTemplateSectionPropertyScale,&UE::CoreUObject::Private::Construct<FTemplateSectionPropertyScale>,&UE::CoreUObject::Private::ConstructForTests<FTemplateSectionPropertyScale>,&UE::CoreUObject::Private::Destruct<FTemplateSectionPropertyScale>,&UE::CoreUObject::Private::Copy<FTemplateSectionPropertyScale>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ATemplateSequenceActor_NoRegister @ 14ac635e0

UClass * __cdecl Z_Construct_UClass_ATemplateSequenceActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceActor",
               &Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton,
               ATemplateSequenceActor::StaticRegisterNativesATemplateSequenceActor,0x328,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATemplateSequenceActor>,
               InternalVTableHelperCtorCaller<ATemplateSequenceActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATemplateSequenceActor.InnerSingleton;
}

// Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn @ 14ac636e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn(void)

{
  if (Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.OuterSingleton,
               &Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.OuterSingleton;
}

// Z_Construct_UClass_UCameraAnimationSequencePlayer @ 14ac63720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSequencePlayer(void)

{
  if (Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.OuterSingleton,
               &Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.OuterSingleton;
}

// NewProp_bConstrainAspectRatio_SetBit @ 14ac63760

void __cdecl
Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::
NewProp_bConstrainAspectRatio_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) | 1;
  return;
}

// Z_Construct_UClass_USequenceCameraShakePattern @ 14ac63ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USequenceCameraShakePattern(void)

{
  if (Z_Registration_Info_UClass_USequenceCameraShakePattern.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USequenceCameraShakePattern.OuterSingleton,
               &Z_Construct_UClass_USequenceCameraShakePattern_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USequenceCameraShakePattern.OuterSingleton;
}

// NewProp_bRandomSegment_SetBit @ 14ac63b20

void __cdecl
Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_bRandomSegment_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// Z_Construct_UClass_UTemplateSequencePlayer_NoRegister @ 14ac63d70

UClass * __cdecl Z_Construct_UClass_UTemplateSequencePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePlayer",
               &Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton,
               UTemplateSequencePlayer::StaticRegisterNativesUTemplateSequencePlayer,0x4b8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTemplateSequencePlayer>
               ,InternalVTableHelperCtorCaller<UTemplateSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePlayer.InnerSingleton;
}

// Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister @ 14ac63ef0

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequenceCameraStandIn",
               &Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton,
               UCameraAnimationSequenceCameraStandIn::
               StaticRegisterNativesUCameraAnimationSequenceCameraStandIn,0x8d0,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequenceCameraStandIn>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequenceCameraStandIn>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton;
}

// Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister @ 14ac63fa0

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequencePlayer",
               &Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton,
               UCameraAnimationSequencePlayer::StaticRegisterNativesUCameraAnimationSequencePlayer,
               0x330,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraAnimationSequencePlayer>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequencePlayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton;
}

// Z_Construct_UClass_ATemplateSequenceActor @ 14ac64330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ATemplateSequenceActor(void)

{
  if (Z_Registration_Info_UClass_ATemplateSequenceActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ATemplateSequenceActor.OuterSingleton,
               &Z_Construct_UClass_ATemplateSequenceActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ATemplateSequenceActor.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData @ 14ac64370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTemplateSequenceBindingOverrideData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTemplateSequenceBindingOverrideData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FTemplateSequenceBindingOverrideData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTemplateSequenceBindingOverrideData.InnerSingleton;
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

// NewProp_bOverridesDefault_SetBit @ 14ac643f0

void __cdecl
Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::
NewProp_bOverridesDefault_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14ac64400

void * __cdecl
Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTemplateSequenceBindingOverrideData,&UE::CoreUObject::Private::Construct<FTemplateSequenceBindingOverrideData>,&UE::CoreUObject::Private::ConstructForTests<FTemplateSequenceBindingOverrideData>,&UE::CoreUObject::Private::Destruct<FTemplateSequenceBindingOverrideData>,&UE::CoreUObject::Private::Copy<FTemplateSequenceBindingOverrideData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ac64770

void * __thiscall
FTemplateSequenceModule::_scalar_deleting_destructor_(FTemplateSequenceModule *this,uint param_1)

{
  *this = (FTemplateSequenceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_ATemplateSequenceActor_GetSequence @ 14ac647b0

UFunction * __cdecl Z_Construct_UFunction_ATemplateSequenceActor_GetSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer @ 14ac647f0

UFunction * __cdecl Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence @ 14ac64830

UFunction * __cdecl Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverridesDefault_SetBit @ 14ac64870

void __cdecl
Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ATemplateSequenceActor_SetBinding @ 14ac64880

UFunction * __cdecl Z_Construct_UFunction_ATemplateSequenceActor_SetBinding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ATemplateSequenceActor_SetSequence @ 14ac648c0

UFunction * __cdecl Z_Construct_UFunction_ATemplateSequenceActor_SetSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem @ 14ac64900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem(void)

{
  if (Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.
                OuterSingleton,
               &Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.OuterSingleton;
}

// Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem @ 14ac64940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem(void)

{
  if (Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.OuterSingleton
      == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.
                OuterSingleton,
               &Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.
         OuterSingleton;
}

// Z_Construct_UClass_UTemplateSequenceSystem @ 14ac64980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTemplateSequenceSystem(void)

{
  if (Z_Registration_Info_UClass_UTemplateSequenceSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTemplateSequenceSystem.OuterSingleton,
               &Z_Construct_UClass_UTemplateSequenceSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceSystem.OuterSingleton;
}

// Z_Construct_UClass_UTemplateSequencePlayer @ 14ac649c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTemplateSequencePlayer(void)

{
  if (Z_Registration_Info_UClass_UTemplateSequencePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTemplateSequencePlayer.OuterSingleton,
               &Z_Construct_UClass_UTemplateSequencePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePlayer.OuterSingleton;
}

// Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer @ 14ac64a00

UFunction * __cdecl Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTemplateSequence_NoRegister @ 14ac64a40

UClass * __cdecl Z_Construct_UClass_UTemplateSequence_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequence",
               &Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton,
               UTemplateSequence::StaticRegisterNativesUTemplateSequence,0xf0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UTemplateSequence>,
               InternalVTableHelperCtorCaller<UTemplateSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequence.InnerSingleton;
}

// Z_Construct_UClass_USequenceCameraShakeTestUtil @ 14ac64c80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USequenceCameraShakeTestUtil(void)

{
  if (Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton,
               &Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton;
}

// ??$?0U?$TComponentLock@U?$TRead@UFRootInstanceHandle@MovieScene@UE@@@MovieScene@UE@@@MovieScene@UE@@U?$TComponentLock@U?$TReadOptional@UFMovieSceneSequenceID@@@MovieScene@UE@@@12@U?$TComponentLock@U?$TRead@UFMovieScenePropertyBinding@@@MovieScene@UE@@@12@U?$TComponentLock@U?$TRead@UFGuid@@@MovieScene@UE@@@12@U?$TComponentLock@U?$TReadOptional@N@MovieScene@UE@@@12@U612@U612@U612@U612@U612@U?$TComponentLock@U?$TWriteOptional@N@MovieScene@UE@@@12@U712@U712@U712@U712@U712@@?$TTuple@U?$TComponentLock@U?$TRead@UFRootInstanceHandle@MovieScene@UE@@@MovieScene@UE@@@MovieScene@UE@@U?$TComponentLock@U?$TReadOptional@UFMovieSceneSequenceID@@@MovieScene@UE@@@23@U?$TComponentLock@U?$TRead@UFMovieScenePropertyBinding@@@MovieScene@UE@@@23@U?$TComponentLock@U?$TRead@UFGuid@@@MovieScene@UE@@@23@U?$TComponentLock@U?$TReadOptional@N@MovieScene@UE@@@23@U723@U723@U723@U723@U723@U?$TComponentLock@U?$TWriteOptional@N@MovieScene@UE@@@23@U823@U823@U823@U823@U823@@@QEAA@$$QEAU?$TComponentLock@U?$TRead@UFRootInstanceHandle@MovieScene@UE@@@MovieScene@UE@@@MovieScene@UE@@$$QEAU?$TComponentLock@U?$TReadOptional@UFMovieSceneSequenceID@@@MovieScene@UE@@@23@$$QEAU?$TComponentLock@U?$TRead@UFMovieScenePropertyBinding@@@MovieScene@UE@@@23@$$QEAU?$TComponentLock@U?$TRead@UFGuid@@@MovieScene@UE@@@23@$$QEAU?$TComponentLock@U?$TReadOptional@N@MovieScene@UE@@@23@44444$$QEAU?$TComponentLock@U?$TWriteOptional@N@MovieScene@UE@@@23@55555@Z @ 14ac64cc0

TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
* __thiscall
____0U__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__U__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___12_U__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___12_U__TComponentLock_U__TRead_UFGuid___MovieScene_UE___12_U__TComponentLock_U__TReadOptional_N_MovieScene_UE___12_U612_U612_U612_U612_U612_U__TComponentLock_U__TWriteOptional_N_MovieScene_UE___12_U712_U712_U712_U712_U712____TTuple_U__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__U__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___23_U__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___23_U__TComponentLock_U__TRead_UFGuid___MovieScene_UE___23_U__TComponentLock_U__TReadOptional_N_MovieScene_UE___23_U723_U723_U723_U723_U723_U__TComponentLock_U__TWriteOptional_N_MovieScene_UE___23_U823_U823_U823_U823_U823___QEAA___QEAU__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE____QEAU__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___23___QEAU__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___23___QEAU__TComponentLock_U__TRead_UFGuid___MovieScene_UE___23___QEAU__TComponentLock_U__TReadOptional_N_MovieScene_UE___23_44444__QEAU__TComponentLock_U__TWriteOptional_N_MovieScene_UE___23_55555_Z
          (void *this,
          TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_> *param_1,
          TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_> *param_2,
          TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_> *param_3,
          TComponentLock<UE::MovieScene::TRead<FGuid>_> *param_4,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_5,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_6,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_7,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_8,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_9,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_10,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_11,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_12,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_13,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_14,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_15,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_16)

{
  ____0U__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__U__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___12_U__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___12_U__TComponentLock_U__TRead_UFGuid___MovieScene_UE___12_U__TComponentLock_U__TReadOptional_N_MovieScene_UE___12_U612_U612_U612_U612_U612_U__TComponentLock_U__TWriteOptional_N_MovieScene_UE___12_U712_U712_U712_U712_U712____TTupleBase_U__TIntegerSequence_I_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N__0O__0P___U__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__U__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___34_U__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___34_U__TComponentLock_U__TRead_UFGuid___MovieScene_UE___34_U__TComponentLock_U__TReadOptional_N_MovieScene_UE___34_U834_U834_U834_U834_U834_U__TComponentLock_U__TWriteOptional_N_MovieScene_UE___34_U934_U934_U934_U934_U934__Tuple_Private_Core_UE__QEAA_W4EForwardingConstructor_1234___QEAU__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_4___QEAU__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___74___QEAU__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___74___QEAU__TComponentLock_U__TRead_UFGuid___MovieScene_UE___74___QEAU__TComponentLock_U__TReadOptional_N_MovieScene_UE___74_55555__QEAU__TComponentLock_U__TWriteOptional_N_MovieScene_UE___74_66666_Z
            (this,ForwardingConstructor,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  return this;
}

// ??$?0U?$TComponentLock@U?$TRead@UFRootInstanceHandle@MovieScene@UE@@@MovieScene@UE@@@MovieScene@UE@@U?$TComponentLock@U?$TReadOptional@UFMovieSceneSequenceID@@@MovieScene@UE@@@12@U?$TComponentLock@U?$TRead@UFMovieScenePropertyBinding@@@MovieScene@UE@@@12@U?$TComponentLock@U?$TRead@UFGuid@@@MovieScene@UE@@@12@U?$TComponentLock@U?$TReadOptional@N@MovieScene@UE@@@12@U612@U612@U612@U612@U612@U?$TComponentLock@U?$TWriteOptional@N@MovieScene@UE@@@12@U712@U712@U712@U712@U712@@?$TTupleBase@U?$TIntegerSequence@I$0A@$00$01$02$03$04$05$06$07$08$09$0L@$0M@$0N@$0O@$0P@@@U?$TComponentLock@U?$TRead@UFRootInstanceHandle@MovieScene@UE@@@MovieScene@UE@@@MovieScene@UE@@U?$TComponentLock@U?$TReadOptional@UFMovieSceneSequenceID@@@MovieScene@UE@@@34@U?$TComponentLock@U?$TRead@UFMovieScenePropertyBinding@@@MovieScene@UE@@@34@U?$TComponentLock@U?$TRead@UFGuid@@@MovieScene@UE@@@34@U?$TComponentLock@U?$TReadOptional@N@MovieScene@UE@@@34@U834@U834@U834@U834@U834@U?$TComponentLock@U?$TWriteOptional@N@MovieScene@UE@@@34@U934@U934@U934@U934@U934@@Tuple@Private@Core@UE@@QEAA@W4EForwardingConstructor@1234@$$QEAU?$TComponentLock@U?$TRead@UFRootInstanceHandle@MovieScene@UE@@@MovieScene@UE@@@MovieScene@4@$$QEAU?$TComponentLock@U?$TReadOptional@UFMovieSceneSequenceID@@@MovieScene@UE@@@74@$$QEAU?$TComponentLock@U?$TRead@UFMovieScenePropertyBinding@@@MovieScene@UE@@@74@$$QEAU?$TComponentLock@U?$TRead@UFGuid@@@MovieScene@UE@@@74@$$QEAU?$TComponentLock@U?$TReadOptional@N@MovieScene@UE@@@74@55555$$QEAU?$TComponentLock@U?$TWriteOptional@N@MovieScene@UE@@@74@66666@Z @ 14ac64d90

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
* __thiscall
____0U__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__U__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___12_U__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___12_U__TComponentLock_U__TRead_UFGuid___MovieScene_UE___12_U__TComponentLock_U__TReadOptional_N_MovieScene_UE___12_U612_U612_U612_U612_U612_U__TComponentLock_U__TWriteOptional_N_MovieScene_UE___12_U712_U712_U712_U712_U712____TTupleBase_U__TIntegerSequence_I_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N__0O__0P___U__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__U__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___34_U__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___34_U__TComponentLock_U__TRead_UFGuid___MovieScene_UE___34_U__TComponentLock_U__TReadOptional_N_MovieScene_UE___34_U834_U834_U834_U834_U834_U__TComponentLock_U__TWriteOptional_N_MovieScene_UE___34_U934_U934_U934_U934_U934__Tuple_Private_Core_UE__QEAA_W4EForwardingConstructor_1234___QEAU__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_4___QEAU__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___74___QEAU__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___74___QEAU__TComponentLock_U__TRead_UFGuid___MovieScene_UE___74___QEAU__TComponentLock_U__TReadOptional_N_MovieScene_UE___74_55555__QEAU__TComponentLock_U__TWriteOptional_N_MovieScene_UE___74_66666_Z
          (void *this,EForwardingConstructor param_1,
          TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_> *param_2,
          TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_> *param_3,
          TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_> *param_4,
          TComponentLock<UE::MovieScene::TRead<FGuid>_> *param_5,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_6,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_7,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_8,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_9,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_10,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_11,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_12,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_13,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_14,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_15,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_16,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *param_17)

{
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(undefined4 *)((longlong)this + 8) = *(undefined4 *)&param_2->field_0x8;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&param_2->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0x18) = *(undefined8 *)param_3;
  *(undefined4 *)((longlong)this + 0x20) = *(undefined4 *)&param_3->field_0x8;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&param_3->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)param_4;
  *(undefined4 *)((longlong)this + 0x38) = *(undefined4 *)&param_4->field_0x8;
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&param_4->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)param_5;
  *(undefined4 *)((longlong)this + 0x50) = *(undefined4 *)&param_5->field_0x8;
  *(undefined8 *)param_5 = 0;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&param_5->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)param_6;
  *(undefined4 *)((longlong)this + 0x68) = *(undefined4 *)&param_6->field_0x8;
  *(undefined8 *)param_6 = 0;
  *(undefined8 *)((longlong)this + 0x70) = *(undefined8 *)&param_6->field_0x10;
  *(undefined8 *)&param_6->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0x78) = *(undefined8 *)param_7;
  *(undefined4 *)((longlong)this + 0x80) = *(undefined4 *)&param_7->field_0x8;
  *(undefined8 *)param_7 = 0;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&param_7->field_0x10;
  *(undefined8 *)&param_7->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0x90) = *(undefined8 *)param_8;
  *(undefined4 *)((longlong)this + 0x98) = *(undefined4 *)&param_8->field_0x8;
  *(undefined8 *)param_8 = 0;
  *(undefined8 *)((longlong)this + 0xa0) = *(undefined8 *)&param_8->field_0x10;
  *(undefined8 *)&param_8->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)param_9;
  *(undefined4 *)((longlong)this + 0xb0) = *(undefined4 *)&param_9->field_0x8;
  *(undefined8 *)param_9 = 0;
  *(undefined8 *)((longlong)this + 0xb8) = *(undefined8 *)&param_9->field_0x10;
  *(undefined8 *)&param_9->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0xc0) = *(undefined8 *)param_10;
  *(undefined4 *)((longlong)this + 200) = *(undefined4 *)&param_10->field_0x8;
  *(undefined8 *)param_10 = 0;
  *(undefined8 *)((longlong)this + 0xd0) = *(undefined8 *)&param_10->field_0x10;
  *(undefined8 *)&param_10->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0xd8) = *(undefined8 *)param_11;
  *(undefined4 *)((longlong)this + 0xe0) = *(undefined4 *)&param_11->field_0x8;
  *(undefined8 *)param_11 = 0;
  *(undefined8 *)((longlong)this + 0xe8) = *(undefined8 *)&param_11->field_0x10;
  *(undefined8 *)&param_11->field_0x10 = 0;
  *(undefined8 *)((longlong)this + 0xf0) = *(undefined8 *)param_12;
  *(undefined8 *)((longlong)this + 0xf8) = *(undefined8 *)&param_12->field_0x8;
  *(undefined4 *)((longlong)this + 0x100) = *(undefined4 *)&param_12->field_0x10;
  *(undefined8 *)param_12 = 0;
  *(undefined8 *)((longlong)this + 0x108) = *(undefined8 *)&param_12->field_0x18;
  *(undefined8 *)&param_12->field_0x18 = 0;
  *(undefined8 *)((longlong)this + 0x110) = *(undefined8 *)param_13;
  *(undefined8 *)((longlong)this + 0x118) = *(undefined8 *)&param_13->field_0x8;
  *(undefined4 *)((longlong)this + 0x120) = *(undefined4 *)&param_13->field_0x10;
  *(undefined8 *)param_13 = 0;
  *(undefined8 *)((longlong)this + 0x128) = *(undefined8 *)&param_13->field_0x18;
  *(undefined8 *)&param_13->field_0x18 = 0;
  *(undefined8 *)((longlong)this + 0x130) = *(undefined8 *)param_14;
  *(undefined8 *)((longlong)this + 0x138) = *(undefined8 *)&param_14->field_0x8;
  *(undefined4 *)((longlong)this + 0x140) = *(undefined4 *)&param_14->field_0x10;
  *(undefined8 *)param_14 = 0;
  *(undefined8 *)((longlong)this + 0x148) = *(undefined8 *)&param_14->field_0x18;
  *(undefined8 *)&param_14->field_0x18 = 0;
  *(undefined8 *)((longlong)this + 0x150) = *(undefined8 *)param_15;
  *(undefined8 *)((longlong)this + 0x158) = *(undefined8 *)&param_15->field_0x8;
  *(undefined4 *)((longlong)this + 0x160) = *(undefined4 *)&param_15->field_0x10;
  *(undefined8 *)param_15 = 0;
  *(undefined8 *)((longlong)this + 0x168) = *(undefined8 *)&param_15->field_0x18;
  *(undefined8 *)&param_15->field_0x18 = 0;
  *(undefined8 *)((longlong)this + 0x170) = *(undefined8 *)param_16;
  *(undefined8 *)((longlong)this + 0x178) = *(undefined8 *)&param_16->field_0x8;
  *(undefined4 *)((longlong)this + 0x180) = *(undefined4 *)&param_16->field_0x10;
  *(undefined8 *)param_16 = 0;
  *(undefined8 *)((longlong)this + 0x188) = *(undefined8 *)&param_16->field_0x18;
  *(undefined8 *)&param_16->field_0x18 = 0;
  *(undefined8 *)((longlong)this + 400) = *(undefined8 *)param_17;
  *(undefined8 *)((longlong)this + 0x198) = *(undefined8 *)&param_17->field_0x8;
  *(undefined4 *)((longlong)this + 0x1a0) = *(undefined4 *)&param_17->field_0x10;
  *(undefined8 *)param_17 = 0;
  *(undefined8 *)((longlong)this + 0x1a8) = *(undefined8 *)&param_17->field_0x18;
  *(undefined8 *)&param_17->field_0x18 = 0;
  return this;
}

// CastChecked<UCameraAnimationSequenceCameraStandIn_const_,UObject_const_> @ 14ac65ff0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAnimationSequenceCameraStandIn * __cdecl
CastChecked<UCameraAnimationSequenceCameraStandIn_const_,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCameraAnimationSequenceCameraStandIn_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCameraAnimationSequenceCameraStandIn::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCameraAnimationSequenceCameraStandIn *)param_1;
  }
  pFVar3 = GetTypeName<UCameraAnimationSequenceCameraStandIn_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ATemplateSequenceActor,AActor> @ 14ac660b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ATemplateSequenceActor * __cdecl
CastChecked<ATemplateSequenceActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (ATemplateSequenceActor *)0x0;
    }
    pFVar3 = GetTypeName<ATemplateSequenceActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ATemplateSequenceActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ATemplateSequenceActor *)param_1;
  }
  pFVar3 = GetTypeName<ATemplateSequenceActor>(&local_28);
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

// CastChecked<UCameraAnimationSequenceCameraStandIn,UObject> @ 14ac66190

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAnimationSequenceCameraStandIn * __cdecl
CastChecked<UCameraAnimationSequenceCameraStandIn,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCameraAnimationSequenceCameraStandIn>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCameraAnimationSequenceCameraStandIn::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCameraAnimationSequenceCameraStandIn *)param_1;
  }
  pFVar3 = GetTypeName<UCameraAnimationSequenceCameraStandIn>(&local_28);
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

// CastChecked<UTemplateSequencePropertyScalingInstantiatorSystem,UMovieSceneEntitySystem> @ 14ac66250

/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequencePropertyScalingInstantiatorSystem * __cdecl
CastChecked<UTemplateSequencePropertyScalingInstantiatorSystem,UMovieSceneEntitySystem>
          (UMovieSceneEntitySystem *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneEntitySystem *)0x0) {
    if (param_2 != NullChecked) {
      return (UTemplateSequencePropertyScalingInstantiatorSystem *)0x0;
    }
    pFVar3 = GetTypeName<UTemplateSequencePropertyScalingInstantiatorSystem>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UTemplateSequencePropertyScalingInstantiatorSystem *)param_1;
  }
  pFVar3 = GetTypeName<UTemplateSequencePropertyScalingInstantiatorSystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// DefaultConstructItems<UE::MovieScene::FTemplateSequenceComponentData,int> @ 14ac66340

void __cdecl
DefaultConstructItems<UE::MovieScene::FTemplateSequenceComponentData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::MovieScene::FTemplateSequencePropertyScaleComponentData,int> @ 14ac66370

void __cdecl
DefaultConstructItems<UE::MovieScene::FTemplateSequencePropertyScaleComponentData,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined4 *)(lVar1 + -8) = 0xffffffff;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined1 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x2c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTemplateSectionPropertyScale,int> @ 14ac663f0

void __cdecl
DestructItems<FTemplateSectionPropertyScale,int>(FTemplateSectionPropertyScale *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&param_1->FloatChannel);
    param_1 = (FTemplateSectionPropertyScale *)(&param_1->FloatChannel + 1);
  }
  return;
}

// GetTypeName<UCameraAnimationSequenceCameraStandIn_const_> @ 14ac69cc0

FString * __cdecl
GetTypeName<UCameraAnimationSequenceCameraStandIn_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCameraAnimationSequenceCameraStandIn::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ATemplateSequenceActor> @ 14ac69d00

FString * __cdecl GetTypeName<ATemplateSequenceActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ATemplateSequenceActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UCameraAnimationSequenceCameraStandIn> @ 14ac69d40

FString * __cdecl
GetTypeName<UCameraAnimationSequenceCameraStandIn>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCameraAnimationSequenceCameraStandIn::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UTemplateSequencePropertyScalingInstantiatorSystem> @ 14ac69d80

FString * __cdecl
GetTypeName<UTemplateSequencePropertyScalingInstantiatorSystem>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<ATemplateSequenceActor> @ 14ac69dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ATemplateSequenceActor>(FObjectInitializer *param_1)

{
  uint *puVar1;
  uint uVar2;
  AActor *this;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  USceneComponent *pUVar6;
  UObject *pUVar7;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xffffffc0;
    this->_padding_ = (longlong)&ATemplateSequenceActor::_vftable__for__AActor__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ =
         (longlong)&ATemplateSequenceActor::_vftable__for__IMovieScenePlaybackClient__;
    uVar2 = *(uint *)((longlong)&this[1].PrimaryActorTick._padding_ + 4);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    *(uint *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = uVar2 & 0xfffffffa | 2;
    *(undefined2 *)&this[1]._padding_ = 0x100;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    this[1].RemoteRole.Value = '\x01';
    pFVar4 = FName::FName(&local_res8,L"SceneComp");
    FVar3 = *pFVar4;
    pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar6 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar5,pUVar5,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar6;
    pFVar4 = FName::FName(&local_res8,"AnimationPlayer");
    FVar3 = *pFVar4;
    pUVar5 = UTemplateSequencePlayer::StaticClass();
    pUVar7 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar3,pUVar5,pUVar5,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    this[1].PrimaryActorTick._padding_ = (longlong)pUVar7;
  }
  return;
}

// InternalConstructor<UCameraAnimationBoundObjectInstantiator> @ 14ac69f40

void __cdecl
InternalConstructor<UCameraAnimationBoundObjectInstantiator>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntityInstantiatorSystem *this;
  EEntitySystemCategory EVar2;
  FBuiltInComponentTypes *pFVar3;
  UObject *local_res8;
  
  this = (UMovieSceneEntityInstantiatorSystem *)param_1->Obj;
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    this->field_0x32 = 4;
    *(undefined ***)this = &___7UCameraAnimationBoundObjectInstantiator__6B_;
    EVar2 = UCameraAnimationSequenceSubsystem::GetCameraAnimationSystemCategory();
    *(EEntitySystemCategory *)&this->field_0x38 = EVar2;
    if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
      pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_res8 = *(UObject **)&this->field_0x10;
      FVar1.Value = *(ushort *)&pFVar3->BoundObject;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalConstructor<UCameraAnimationEntitySystemLinker> @ 14ac69fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UCameraAnimationEntitySystemLinker>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystemLinker *this;
  EEntitySystemCategory EVar1;
  UClass *local_res8 [4];
  
  this = (UMovieSceneEntitySystemLinker *)param_1->Obj;
  if (this != (UMovieSceneEntitySystemLinker *)0x0) {
    UMovieSceneEntitySystemLinker::UMovieSceneEntitySystemLinker(this,param_1);
    this->Role = CameraAnimations;
    this->_padding_ = (longlong)&___7UCameraAnimationEntitySystemLinker__6B_;
    EVar1 = UCameraAnimationSequenceSubsystem::GetCameraAnimationSystemCategory();
    UE::MovieScene::FSystemFilter::SetAllowedCategories
              (&this->SystemFilter,EVar1 | (PropertySystems|BlenderSystems|ChannelEvaluators|Core));
    local_res8[0] = Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    UE::MovieScene::FSystemFilter::AllowSystem
              (&this->SystemFilter,(TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return;
}

// InternalConstructor<UCameraAnimationSequence> @ 14ac6a040

void __cdecl InternalConstructor<UCameraAnimationSequence>(FObjectInitializer *param_1)

{
  UTemplateSequence *this;
  
  this = (UTemplateSequence *)param_1->Obj;
  if (this != (UTemplateSequence *)0x0) {
    UTemplateSequence::UTemplateSequence(this,param_1);
    this->_padding_ = (longlong)&___7UCameraAnimationSequence__6B_;
  }
  return;
}

// InternalConstructor<UCameraAnimationSequenceCameraStandIn> @ 14ac6a070

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl InternalConstructor<UCameraAnimationSequenceCameraStandIn>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCameraAnimationSequenceCameraStandIn__6B_;
    FPostProcessSettings::FPostProcessSettings((FPostProcessSettings *)&this[1].field_0x18);
    *(undefined4 *)&this[0x31].field_0xc = 0x41c71eb8;
    *(undefined8 *)&this[0x31].field_0x10 = 0x41955c29;
    *(undefined4 *)&this[0x31].field_0x18 = 0;
    *(undefined4 *)&this[0x31].field_0x1c = 0x3faa3d71;
    *(undefined4 *)&this[0x31].field_0x20 = 0x42480000;
    *(undefined4 *)&this[0x31].field_0x24 = 0x42480000;
    *(undefined4 *)(this + 0x32) = 0x40000000;
    *(undefined4 *)&this[0x32].field_0x4 = 0x40000000;
    *(undefined4 *)&this[0x32].field_0x8 = 0x41700000;
    *(undefined4 *)&this[0x32].field_0xc = 0x3f800000;
    *(undefined4 *)&this[0x32].field_0x10 = 5;
    FCameraFocusSettings::FCameraFocusSettings((FCameraFocusSettings *)&this[0x32].field_0x18);
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[0x35].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[0x35].field_0x20 = (double)fVar1;
    *(double *)(this + 0x36) = (double)fVar2;
    *(double *)&this[0x36].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[0x36].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[0x36].field_0x18 = (double)fVar1;
    *(double *)&this[0x36].field_0x20 = (double)fVar2;
    *(double *)(this + 0x37) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[0x37].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[0x37].field_0x10 = (double)fVar1;
    *(double *)&this[0x37].field_0x18 = (double)fVar2;
    *(double *)&this[0x37].field_0x20 = (double)fVar3;
    *(undefined1 *)(this + 0x38) = 0;
    *(undefined4 *)&this[0x38].field_0x4 = 0;
  }
  return;
}

// InternalConstructor<UCameraAnimationSequencePlayer> @ 14ac6a1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UCameraAnimationSequencePlayer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)(this + 1));
    *(undefined ***)this = &UCameraAnimationSequencePlayer::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UCameraAnimationSequencePlayer::_vftable__for__IMovieScenePlayer__
    ;
    FMovieSceneSpawnRegister::FMovieSceneSpawnRegister
              ((FMovieSceneSpawnRegister *)&this[0xd].field_0x10);
    *(undefined ***)&this[0xd].field_0x10 = &___7FSequenceCameraShakeSpawnRegister__6B_;
    *(undefined8 *)&this[0x10].field_0x8 = 0;
    *(undefined8 *)&this[0x10].field_0x10 = 0;
    *(undefined8 *)&this[0x10].field_0x18 = 0;
    FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
              ((FMovieSceneRootEvaluationTemplateInstance *)&this[0x10].field_0x20);
    *(undefined8 *)&this[0x13].field_0x1c = 0;
    *(undefined8 *)&this[0x11].field_0x18 = 0;
    *(undefined8 *)&this[0x11].field_0x20 = 0;
    *(undefined1 *)(this + 0x12) = 1;
    *(undefined8 *)&this[0x12].field_0x4 = 0;
    this[0x12].field_0x14 = 0;
    this[0x13].field_0x18 = 0;
    *(undefined8 *)&this[0x13].field_0x24 = 0;
    *(undefined8 *)&this[0x14].field_0x4 = 0;
    this[0x14].field_0xc = 0;
    FMovieScenePlaybackPosition::Reset
              ((FMovieScenePlaybackPosition *)&this[0x11].field_0x18,(FFrameTime)0x0);
  }
  return;
}

// InternalConstructor<UCameraAnimationSequenceSubsystem> @ 14ac6a280

void __cdecl InternalConstructor<UCameraAnimationSequenceSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UCameraAnimationSequenceSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UCameraAnimationSpawnableSystem> @ 14ac6a2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UCameraAnimationSpawnableSystem>(FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem *this;
  EEntitySystemCategory EVar1;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->Phase = Spawn;
    this->_padding_ = (longlong)&___7UCameraAnimationSpawnableSystem__6B_;
    EVar1 = UCameraAnimationSequenceSubsystem::GetCameraAnimationSystemCategory();
    this->SystemCategories = EVar1;
  }
  return;
}

// InternalConstructor<USequenceCameraShakePattern> @ 14ac6a300

void __cdecl InternalConstructor<USequenceCameraShakePattern>(FObjectInitializer *param_1)

{
  UCameraShakePattern *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UCameraShakePattern *)param_1->Obj;
  if (this != (UCameraShakePattern *)0x0) {
    UCameraShakePattern::UCameraShakePattern(this,param_1);
    *(undefined4 *)&this[1].field_0x8 = 0x3f800000;
    *(undefined ***)this = &___7USequenceCameraShakePattern__6B_;
    *(undefined4 *)&this[1].field_0xc = 0x3f800000;
    *(undefined8 *)(this + 1) = 0;
    this[1].field_0x1c = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x3e4ccccd;
    *(undefined8 *)&this[1].field_0x14 = 0x3ecccccd;
    FCameraShakeState::FCameraShakeState((FCameraShakeState *)&this[2].field_0x8);
    pFVar2 = FName::FName(&local_res8,L"CameraStandIn");
    FVar1 = *pFVar2;
    pUVar3 = UCameraAnimationSequenceCameraStandIn::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,true);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)(this + 2) = pUVar4;
    pFVar2 = FName::FName(&local_res8,L"CameraShakePlayer");
    FVar1 = *pFVar2;
    pUVar3 = UCameraAnimationSequencePlayer::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,true);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&this[1].field_0x20 = pUVar4;
  }
  return;
}

// InternalConstructor<USequenceCameraShakeTestUtil> @ 14ac6a420

void __cdecl InternalConstructor<USequenceCameraShakeTestUtil>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7USequenceCameraShakeTestUtil__6B_;
  }
  return;
}

// InternalConstructor<UTemplateSequence> @ 14ac6a450

void __cdecl InternalConstructor<UTemplateSequence>(FObjectInitializer *param_1)

{
  if ((UTemplateSequence *)param_1->Obj != (UTemplateSequence *)0x0) {
    UTemplateSequence::UTemplateSequence((UTemplateSequence *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UTemplateSequencePlayer> @ 14ac6a470

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UTemplateSequencePlayer>(FObjectInitializer *param_1)

{
  UMovieSceneSequencePlayer *this;
  
  this = (UMovieSceneSequencePlayer *)param_1->Obj;
  if (this != (UMovieSceneSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::UMovieSceneSequencePlayer(this,param_1);
    this->_padding_ = (longlong)&UTemplateSequencePlayer::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UTemplateSequencePlayer::_vftable__for__IMovieScenePlayer__;
    this->_padding_ =
         (longlong)&UTemplateSequencePlayer::_vftable__for__IMovieSceneSequenceTickManagerClient__;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UTemplateSequencePropertyScalingEvaluatorSystem> @ 14ac6a4d0

void __cdecl
InternalConstructor<UTemplateSequencePropertyScalingEvaluatorSystem>(FObjectInitializer *param_1)

{
  if ((UTemplateSequencePropertyScalingEvaluatorSystem *)param_1->Obj !=
      (UTemplateSequencePropertyScalingEvaluatorSystem *)0x0) {
    UTemplateSequencePropertyScalingEvaluatorSystem::UTemplateSequencePropertyScalingEvaluatorSystem
              ((UTemplateSequencePropertyScalingEvaluatorSystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UTemplateSequencePropertyScalingInstantiatorSystem> @ 14ac6a4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
InternalConstructor<UTemplateSequencePropertyScalingInstantiatorSystem>(FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  UMovieSceneEntitySystem *this;
  FBuiltInComponentTypes *pFVar2;
  FTemplateSequenceComponentTypes *pFVar3;
  UObject *local_res8;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingInstantiatorSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Linker.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].Linker.field0_0x0 + 4) = 0x80;
    this[1].RelevantComponent = 0xffff;
    this[1].Phase = ~None;
    this[1].field_0x33 = 0xff;
    this[1].GraphID = 0;
    this[1].GlobalDependencyGraphID = 0;
    this[1].StatID.StatIdPtr = (TStatIdData *)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar3 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
    this->Phase = Instantiation;
    (this->RelevantComponent).Value = (ushort)pFVar3->PropertyScale;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)&pFVar2->BoundObject;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    }
  }
  return;
}

// InternalConstructor<UTemplateSequenceSection> @ 14ac6a5c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UTemplateSequenceSection>(FObjectInitializer *param_1)

{
  UMovieSceneSubSection *this;
  FMovieSceneBlendTypeField FVar1;
  bool bVar2;
  undefined7 extraout_var;
  
  this = (UMovieSceneSubSection *)param_1->Obj;
  if (this != (UMovieSceneSubSection *)0x0) {
    UMovieSceneSubSection::UMovieSceneSubSection(this,param_1);
    this->_padding_ = (longlong)&UTemplateSequenceSection::_vftable__for__UMovieSceneSection__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UTemplateSequenceSection::_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ = 0;
    FVar1 = UMovieSceneSection::GetSupportedBlendTypes((UMovieSceneSection *)this);
    bVar2 = FMovieSceneBlendTypeField::Contains
                      ((FMovieSceneBlendTypeField *)CONCAT71(extraout_var,FVar1.BlendTypeField),
                       Absolute);
    if (bVar2) {
      *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
    }
    (this->Parameters).HierarchicalBias = 0;
  }
  return;
}

// InternalConstructor<UTemplateSequenceSystem> @ 14ac6a650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UTemplateSequenceSystem>(FObjectInitializer *param_1)

{
  int iVar1;
  UMovieSceneEntitySystem *this;
  undefined4 uVar2;
  int iVar3;
  FBuiltInComponentTypes *pFVar4;
  FTemplateSequenceComponentTypes *pFVar5;
  FComponentMask *this_00;
  undefined8 local_res8;
  UObject *local_res10;
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  this = (UMovieSceneEntitySystem *)param_1->Obj;
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UTemplateSequenceSystem__6B_;
    this[1].RelevantComponent = 0;
    this[1].Phase = None;
    this[1].field_0x33 = 0;
    this[1].GraphID = 0x180;
    this[1].GlobalDependencyGraphID = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x180;
    this[2].Linker.field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
    this[2].RelevantComponent = 0;
    this[2].Phase = None;
    this[2].field_0x33 = 0;
    this[2].GraphID = 0;
    this[2].GlobalDependencyGraphID = 0;
    this[2].SystemCategories = None;
    this[2].bSystemIsEnabled = false;
    *(undefined3 *)&this[2].field_0x3d = 0;
    *(undefined1 *)&this[2].StatID.StatIdPtr = 0;
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar5 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
    this->Phase = Spawn;
    (this->RelevantComponent).Value = (ushort)pFVar5->TemplateSequence;
    if ((this->_padding_ & 0x10) != 0) {
      local_res8 = Z_Construct_UClass_UMovieSceneSpawnablesSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      local_res10 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      UMovieSceneEntitySystem::DefineImplicitPrerequisite
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res10,
                 (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    }
    local_28._First = (FComponentTypeID *)&local_res8;
    local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 2);
    local_res8._0_2_ = (ushort)pFVar5->TemplateSequence;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(this + 1),&local_28);
    uVar2._0_2_ = (pFVar4->Tags).NeedsLink;
    uVar2._2_2_ = (pFVar4->Tags).NeedsUnlink;
    local_res8 = (UClass *)CONCAT44(local_res8._4_4_,uVar2);
    iVar3._0_2_ = this[2].RelevantComponent;
    iVar3._2_1_ = this[2].Phase;
    iVar3._3_1_ = this[2].field_0x33;
    iVar1._0_2_ = this[2].GraphID;
    iVar1._2_2_ = this[2].GlobalDependencyGraphID;
    if (iVar3 == iVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,(ForAnyElementType *)&this[2].Linker,(int *)&this[2].GraphID);
    }
    *(int *)&this[2].RelevantComponent = iVar3 + 1;
    local_28._First = (FComponentTypeID *)&local_res8;
    this_00 = (FComponentMask *)
              ((longlong)
               &((this[2].Linker.field0_0x0.DebugPtr)->EntityManager).AllocationsWithCapacity +
              (longlong)iVar3 * 0x3c + -0x68);
    local_28._Last = (FComponentTypeID *)((longlong)&local_res8 + 4);
    (this_00->Bits).NumBits = 0;
    (this_00->Bits).MaxBits = 0x180;
    this_00[1].Bits.AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    UE::MovieScene::FComponentMask::SetAll(this_00,&local_28);
  }
  return;
}

// InternalConstructor<UTemplateSequenceTrack> @ 14ac6a800

void __cdecl InternalConstructor<UTemplateSequenceTrack>(FObjectInitializer *param_1)

{
  UMovieSceneSubTrack *this;
  
  this = (UMovieSceneSubTrack *)param_1->Obj;
  if (this != (UMovieSceneSubTrack *)0x0) {
    UMovieSceneSubTrack::UMovieSceneSubTrack(this,param_1);
    this->_padding_ =
         (longlong)&UTemplateSequenceTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ = (longlong)&UTemplateSequenceTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
    ;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ATemplateSequenceActor> @ 14ac6a850

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

UObject * __cdecl InternalVTableHelperCtorCaller<ATemplateSequenceActor>(FVTableHelper *param_1)

{
  uint *puVar1;
  uint uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  AActor *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = ATemplateSequenceActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xffffffc0;
    this->_padding_ = (longlong)&ATemplateSequenceActor::_vftable__for__AActor__;
    this[1]._padding_ =
         (longlong)&ATemplateSequenceActor::_vftable__for__IMovieScenePlaybackClient__;
    uVar2 = *(uint *)((longlong)&this[1].PrimaryActorTick._padding_ + 4);
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(uint *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = uVar2 & 0xfffffffa | 2;
    *(undefined2 *)&this[1]._padding_ = 0x100;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined1 *)&this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    *(undefined8 *)&this[1].field_0x58 = 0;
    this[1].RemoteRole.Value = '\x01';
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraAnimationBoundObjectInstantiator> @ 14ac6a990

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraAnimationBoundObjectInstantiator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntityInstantiatorSystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraAnimationBoundObjectInstantiator::GetPrivateStaticClass();
  this = (UMovieSceneEntityInstantiatorSystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntityInstantiatorSystem *)0x0) {
    UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem(this,param_1);
    *(undefined ***)this = &___7UCameraAnimationBoundObjectInstantiator__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraAnimationEntitySystemLinker> @ 14ac6aa40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraAnimationEntitySystemLinker>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystemLinker *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraAnimationEntitySystemLinker::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystemLinker *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystemLinker *)0x0) {
    UMovieSceneEntitySystemLinker::UMovieSceneEntitySystemLinker(this,param_1);
    this->_padding_ = (longlong)&___7UCameraAnimationEntitySystemLinker__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraAnimationSequence> @ 14ac6aaf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraAnimationSequence>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTemplateSequence *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraAnimationSequence::GetPrivateStaticClass();
  this = (UTemplateSequence *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTemplateSequence *)0x0) {
    UTemplateSequence::UTemplateSequence(this,param_1);
    this->_padding_ = (longlong)&___7UCameraAnimationSequence__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraAnimationSequenceCameraStandIn> @ 14ac6aba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraAnimationSequenceCameraStandIn>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UCameraAnimationSequenceCameraStandIn::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined ***)pUVar4 = &___7UCameraAnimationSequenceCameraStandIn__6B_;
    FPostProcessSettings::FPostProcessSettings((FPostProcessSettings *)&pUVar4[1].field_0x18);
    *(undefined4 *)&pUVar4[0x31].field_0xc = 0x41c71eb8;
    *(undefined8 *)&pUVar4[0x31].field_0x10 = 0x41955c29;
    *(undefined4 *)&pUVar4[0x31].field_0x18 = 0;
    *(undefined4 *)&pUVar4[0x31].field_0x1c = 0x3faa3d71;
    *(undefined4 *)&pUVar4[0x31].field_0x20 = 0x42480000;
    *(undefined4 *)&pUVar4[0x31].field_0x24 = 0x42480000;
    *(undefined4 *)(pUVar4 + 0x32) = 0x40000000;
    *(undefined4 *)&pUVar4[0x32].field_0x4 = 0x40000000;
    *(undefined4 *)&pUVar4[0x32].field_0x8 = 0x41700000;
    *(undefined4 *)&pUVar4[0x32].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar4[0x32].field_0x10 = 5;
    FCameraFocusSettings::FCameraFocusSettings((FCameraFocusSettings *)&pUVar4[0x32].field_0x18);
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[0x35].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[0x35].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 0x36) = (double)fVar2;
    *(double *)&pUVar4[0x36].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[0x36].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[0x36].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[0x36].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 0x37) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[0x37].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[0x37].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[0x37].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[0x37].field_0x20 = (double)fVar3;
    *(undefined1 *)(pUVar4 + 0x38) = 0;
    *(undefined4 *)&pUVar4[0x38].field_0x4 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraAnimationSequencePlayer> @ 14ac6ad40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraAnimationSequencePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraAnimationSequencePlayer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)(pUVar1 + 1));
    *(undefined ***)pUVar1 = &UCameraAnimationSequencePlayer::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UCameraAnimationSequencePlayer::_vftable__for__IMovieScenePlayer__;
    FMovieSceneSpawnRegister::FMovieSceneSpawnRegister
              ((FMovieSceneSpawnRegister *)&pUVar1[0xd].field_0x10);
    *(undefined ***)&pUVar1[0xd].field_0x10 = &___7FSequenceCameraShakeSpawnRegister__6B_;
    *(undefined8 *)&pUVar1[0x10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x18 = 0;
    FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
              ((FMovieSceneRootEvaluationTemplateInstance *)&pUVar1[0x10].field_0x20);
    *(undefined8 *)&pUVar1[0x11].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 0x12) = 1;
    *(undefined8 *)&pUVar1[0x12].field_0x4 = 0;
    pUVar1[0x12].field_0x14 = 0;
    pUVar1[0x13].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x13].field_0x1c = 0;
    *(undefined8 *)&pUVar1[0x13].field_0x24 = 0;
    *(undefined8 *)&pUVar1[0x14].field_0x4 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UCameraAnimationSequenceSubsystem> @ 14ac6ae80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraAnimationSequenceSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraAnimationSequenceSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UCameraAnimationSequenceSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraAnimationSpawnableSystem> @ 14ac6af40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraAnimationSpawnableSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraAnimationSpawnableSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UCameraAnimationSpawnableSystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USequenceCameraShakePattern> @ 14ac6aff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USequenceCameraShakePattern>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USequenceCameraShakePattern::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USequenceCameraShakePattern__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    FCameraShakeState::FCameraShakeState((FCameraShakeState *)&pUVar1[2].field_0x8);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USequenceCameraShakeTestUtil> @ 14ac6b0b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USequenceCameraShakeTestUtil>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USequenceCameraShakeTestUtil::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USequenceCameraShakeTestUtil__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTemplateSequence> @ 14ac6b160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTemplateSequence>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTemplateSequence *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTemplateSequence::GetPrivateStaticClass();
  pUVar3 = (UTemplateSequence *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UTemplateSequence *)0x0) {
    pUVar3 = UTemplateSequence::UTemplateSequence(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTemplateSequencePlayer> @ 14ac6b200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTemplateSequencePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSequencePlayer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTemplateSequencePlayer::GetPrivateStaticClass();
  this = (UMovieSceneSequencePlayer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::UMovieSceneSequencePlayer(this,param_1);
    this->_padding_ = (longlong)&UTemplateSequencePlayer::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UTemplateSequencePlayer::_vftable__for__IMovieScenePlayer__;
    this->_padding_ =
         (longlong)&UTemplateSequencePlayer::_vftable__for__IMovieSceneSequenceTickManagerClient__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingEvaluatorSystem> @ 14ac6b2d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingEvaluatorSystem>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTemplateSequencePropertyScalingEvaluatorSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingEvaluatorSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Linker.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].Linker.field0_0x0 + 4) = 0x80;
    this[1].RelevantComponent = 0xffff;
    this[1].Phase = ~None;
    this[1].field_0x33 = 0xff;
    this[1].GraphID = 0;
    this[1].GlobalDependencyGraphID = 0;
    this[1].StatID.StatIdPtr = (TStatIdData *)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingInstantiatorSystem> @ 14ac6b3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingInstantiatorSystem>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTemplateSequencePropertyScalingInstantiatorSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingInstantiatorSystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Linker.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].Linker.field0_0x0 + 4) = 0x80;
    this[1].RelevantComponent = 0xffff;
    this[1].Phase = ~None;
    this[1].field_0x33 = 0xff;
    this[1].GraphID = 0;
    this[1].GlobalDependencyGraphID = 0;
    this[1].StatID.StatIdPtr = (TStatIdData *)0x0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTemplateSequenceSection> @ 14ac6b490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTemplateSequenceSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSubSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTemplateSequenceSection::GetPrivateStaticClass();
  this = (UMovieSceneSubSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSubSection *)0x0) {
    UMovieSceneSubSection::UMovieSceneSubSection(this,param_1);
    this->_padding_ = (longlong)&UTemplateSequenceSection::_vftable__for__UMovieSceneSection__;
    this->_padding_ =
         (longlong)&UTemplateSequenceSection::_vftable__for__IMovieSceneEntityProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTemplateSequenceSystem> @ 14ac6b560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTemplateSequenceSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneEntitySystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTemplateSequenceSystem::GetPrivateStaticClass();
  this = (UMovieSceneEntitySystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneEntitySystem *)0x0) {
    UMovieSceneEntitySystem::UMovieSceneEntitySystem(this,param_1);
    this->_padding_ = (longlong)&___7UTemplateSequenceSystem__6B_;
    this[1].RelevantComponent = 0;
    this[1].Phase = None;
    this[1].field_0x33 = 0;
    this[1].GraphID = 0x180;
    this[1].GlobalDependencyGraphID = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x180;
    this[2].Linker.field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
    this[2].RelevantComponent = 0;
    this[2].Phase = None;
    this[2].field_0x33 = 0;
    this[2].GraphID = 0;
    this[2].GlobalDependencyGraphID = 0;
    this[2].SystemCategories = None;
    this[2].bSystemIsEnabled = false;
    *(undefined3 *)&this[2].field_0x3d = 0;
    *(undefined1 *)&this[2].StatID.StatIdPtr = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTemplateSequenceTrack> @ 14ac6b640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTemplateSequenceTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSubTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTemplateSequenceTrack::GetPrivateStaticClass();
  this = (UMovieSceneSubTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSubTrack *)0x0) {
    UMovieSceneSubTrack::UMovieSceneSubTrack(this,param_1);
    this->_padding_ =
         (longlong)&UTemplateSequenceTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ = (longlong)&UTemplateSequenceTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
    ;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// Iterate_PerAllocationImpl<`UTemplateSequenceSystem::OnRun'::__l2::<lambda_1>_&> @ 14ac6b700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequenceComponentData>_>
::Iterate_PerAllocationImpl<_UTemplateSequenceSystem::OnRun_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequenceComponentData>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  EComponentHeaderLockMode EVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  TRead<FGuid> TVar4;
  code *pcVar5;
  EEntityThreadingModel EVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  FEntityAllocation *pFVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  FComponentHeader *pFVar12;
  FComponentHeader *pFVar13;
  FEntityAllocationProxy local_a8;
  TRead<UE::MovieScene::FTemplateSequenceComponentData> local_98;
  FEntityAllocationIteratorProxy local_90;
  FEntityAllocationIterator local_80;
  FEntityAllocationIterator local_68;
  FEntityAllocationWriteContext local_50;
  FEntityAllocationProxy local_48;
  
  if (*(short *)&this->Accessors != -1 &&
      (*(short *)&(this->Accessors).field_0x4 != -1 && *(short *)&(this->Accessors).field_0x2 != -1)
     ) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_50,param_1);
    EVar6 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_90,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_80,local_90.Manager,local_90.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_68,local_90.Manager);
    bVar7 = FEntityAllocationIterator::operator!=(&local_80,&local_68);
    if (bVar7) {
      do {
        FEntityAllocationIterator::operator*(&local_80,&local_a8);
        pFVar8 = FEntityAllocationProxy::GetAllocation(&local_a8);
        if (EVar6 == NoThreading) {
          pFVar8->LockMode = LockFree;
        }
        else {
          pFVar8 = (FEntityAllocation *)0x0;
        }
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_a8);
        pFVar13 = pFVar9->ComponentHeaders;
        pFVar12 = pFVar13 + pFVar9->NumComponents;
        for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 1) {
          if ((pFVar13->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4)
          goto LAB_14ac6b86a;
        }
        pFVar13 = (FComponentHeader *)0x0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_14ac6b86a:
        EVar1 = pFVar9->LockMode;
        if (EVar1 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        local_98 = (TRead<UE::MovieScene::FTemplateSequenceComponentData>)pFVar13->Components;
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_a8);
        pFVar12 = pFVar9->ComponentHeaders;
        pFVar11 = pFVar12 + pFVar9->NumComponents;
        for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 1) {
          if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_14ac6b8e9;
        }
        pFVar12 = (FComponentHeader *)0x0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_14ac6b8e9:
        EVar2 = pFVar9->LockMode;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        LOCK();
        pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
        UNLOCK();
        TVar4 = (TRead<FGuid>)pFVar12->Components;
        pFVar9 = FEntityAllocationProxy::GetAllocation(&local_a8);
        pFVar11 = pFVar9->ComponentHeaders;
        pFVar10 = pFVar11 + pFVar9->NumComponents;
        for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 1) {
          if ((pFVar11->ComponentType).Value == *(ushort *)&this->Accessors) goto LAB_14ac6b96a;
        }
        pFVar11 = (FComponentHeader *)0x0;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_14ac6b96a:
        EVar3 = pFVar9->LockMode;
        if (EVar3 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
        }
        LOCK();
        pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + 1);
        UNLOCK();
        local_48.Manager = local_a8.Manager;
        local_48.AllocationIndex = local_a8.AllocationIndex;
        local_48._12_4_ = local_a8._12_4_;
        `UTemplateSequenceSystem::OnRun'::__l2::<lambda_1>::operator()
                  (param_3,&local_48,(TRead<UE::MovieScene::FInstanceHandle>)pFVar11->Components,
                   TVar4,local_98);
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar1 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        LOCK();
        pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar3 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
        }
        if (pFVar8 != (FEntityAllocation *)0x0) {
          pFVar8->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_80);
        bVar7 = FEntityAllocationIterator::operator!=(&local_80,&local_68);
      } while (bVar7);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_80);
  }
  return;
}

// Iterate_PerEntityImpl<`UTemplateSequencePropertyScalingInstantiatorSystem::OnRun'::__l2::<lambda_1>_&> @ 14ac6ba80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
::
Iterate_PerEntityImpl<_UTemplateSequencePropertyScalingInstantiatorSystem::OnRun_::__l2::<lambda_1>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  UTemplateSequencePropertyScalingInstantiatorSystem *pUVar4;
  undefined1 *puVar5;
  code *pcVar6;
  EEntityThreadingModel EVar7;
  bool bVar8;
  int iVar9;
  FEntityAllocation *pFVar10;
  FEntityAllocation *pFVar11;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> *pFVar12;
  FComponentHeader *pFVar13;
  FEntityAllocation *pFVar14;
  longlong lVar15;
  EComponentHeaderLockMode EVar16;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> *pFVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> *pFVar21;
  uchar *puVar22;
  FComponentHeader *pFVar23;
  FComponentHeader *pFVar24;
  int *piVar25;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> local_f8;
  EComponentHeaderLockMode local_e8;
  EComponentHeaderLockMode local_e4;
  uint local_e0;
  int local_dc;
  FComponentHeader *local_d8;
  FComponentHeader *local_d0;
  FEntityAllocation *local_c8;
  FEntityAllocationProxy local_c0;
  undefined8 local_b0;
  int *local_a8;
  uint *local_98;
  FMovieSceneEntityID *local_90;
  uchar *local_88;
  FEntityAllocationIteratorProxy local_80;
  FEntityAllocationIterator local_70;
  FEntityAllocationIterator local_58;
  FEntityAllocationWriteContext local_40;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_40,param_1);
    EVar7 = FEntityManager::GetThreadingModel(param_1);
    local_f8.SecondaryData._0_1_ = EVar7;
    FEntityManager::Iterate(param_1,&local_80,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_70,local_80.Manager,local_80.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_80.Manager);
    bVar8 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
    if (bVar8) {
      do {
        FEntityAllocationIterator::operator*(&local_70,&local_c0);
        pFVar10 = FEntityAllocationProxy::GetAllocation(&local_c0);
        if (EVar7 == NoThreading) {
          pFVar10->LockMode = LockFree;
          pFVar14 = pFVar10;
        }
        else {
          pFVar14 = (FEntityAllocation *)0x0;
        }
        local_c8 = pFVar14;
        pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c0);
        pFVar24 = pFVar11->ComponentHeaders;
        pFVar23 = pFVar24 + pFVar11->NumComponents;
        for (; pFVar24 != pFVar23; pFVar24 = pFVar24 + 1) {
          local_d8 = pFVar24;
          if ((pFVar24->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4)
          goto LAB_14ac6bbe3;
        }
        pFVar24 = (FComponentHeader *)0x0;
        local_d8 = (FComponentHeader *)0x0;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_14ac6bbe3:
        local_e4 = pFVar11->LockMode;
        if (local_e4 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar24->ReadWriteLock);
        }
        LOCK();
        pFVar24->ScheduledAccessCount = (atomic<int>)((int)pFVar24->ScheduledAccessCount + 1);
        UNLOCK();
        local_a8 = (int *)pFVar24->Components;
        pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c0);
        pFVar23 = pFVar11->ComponentHeaders;
        pFVar13 = pFVar23 + pFVar11->NumComponents;
        for (; pFVar23 != pFVar13; pFVar23 = pFVar23 + 1) {
          local_d0 = pFVar23;
          if ((pFVar23->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_14ac6bc73;
        }
        pFVar23 = (FComponentHeader *)0x0;
        local_d0 = (FComponentHeader *)0x0;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_14ac6bc73:
        EVar16 = pFVar11->LockMode;
        local_e8 = EVar16;
        if (EVar16 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
        }
        LOCK();
        pFVar23->ScheduledAccessCount = (atomic<int>)((int)pFVar23->ScheduledAccessCount + 1);
        UNLOCK();
        puVar22 = pFVar23->Components;
        local_88 = puVar22;
        pFVar11 = FEntityAllocationProxy::GetAllocation(&local_c0);
        local_b0 = 0;
        local_90 = pFVar11->EntityIDs;
        uVar2 = pFVar10->Size;
        if (uVar2 != 0) {
          lVar15 = 0;
          piVar25 = local_a8;
          do {
            local_e0 = *(uint *)(puVar22 + lVar15 * 4);
            local_dc = *piVar25;
            pUVar4 = param_3->__this;
            local_f8.InlineData._0_2_ = local_90[lVar15].Value;
            uVar18 = local_e0 & 0xffff;
            uVar18 = uVar18 * 0x40 + -0x61c88647 + local_dc + (uVar18 >> 2) ^ uVar18;
            if (*(int *)&(pUVar4->PropertyScaledInstances).field_0x8 !=
                *(int *)&(pUVar4->PropertyScaledInstances).field_0x34) {
              puVar5 = *(undefined1 **)&(pUVar4->PropertyScaledInstances).field_0x40;
              puVar19 = &(pUVar4->PropertyScaledInstances).field_0x38;
              if (puVar5 != (undefined1 *)0x0) {
                puVar19 = puVar5;
              }
              iVar9 = *(int *)(puVar19 +
                              (ulonglong)
                              (*(int *)&(pUVar4->PropertyScaledInstances).field_0x48 - 1U & uVar18)
                              * 4);
              if (iVar9 != -1) {
                do {
                  lVar20 = *(longlong *)&pUVar4->PropertyScaledInstances + (longlong)iVar9 * 0x28;
                  uVar3 = *(undefined4 *)
                           (*(longlong *)&pUVar4->PropertyScaledInstances + (longlong)iVar9 * 0x28);
                  if ((((short)uVar3 == (short)local_e0) &&
                      ((short)((uint)uVar3 >> 0x10) == (short)(local_e0 >> 0x10))) &&
                     (*(int *)(lVar20 + 4) == local_dc)) {
                    if ((iVar9 != -1) && (lVar20 != 0)) goto LAB_14ac6bdce;
                    break;
                  }
                  iVar9 = *(int *)(lVar20 + 0x20);
                } while (iVar9 != -1);
              }
            }
            local_98 = &local_e0;
            TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
            ::
            EmplaceByHash<TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_const_&>_>
                      ((TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                        *)&pUVar4->PropertyScaledInstances,(int)&local_f8 + 0xc,
                       (TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_const_&>
                        *)(ulonglong)uVar18,(bool *)&local_98);
            lVar20 = *(longlong *)&pUVar4->PropertyScaledInstances +
                     (longlong)(int)local_f8.SecondaryData._4_4_ * 0x28;
LAB_14ac6bdce:
            pFVar17 = (ForElementType<UE::MovieScene::FMovieSceneEntityID> *)(lVar20 + 8);
            pFVar21 = *(ForElementType<UE::MovieScene::FMovieSceneEntityID> **)(lVar20 + 0x10);
            if (*(ForElementType<UE::MovieScene::FMovieSceneEntityID> **)(lVar20 + 0x10) ==
                (ForElementType<UE::MovieScene::FMovieSceneEntityID> *)0x0) {
              pFVar21 = pFVar17;
            }
            for (pFVar12 = pFVar21;
                pFVar12 !=
                (ForElementType<UE::MovieScene::FMovieSceneEntityID> *)
                (pFVar21->InlineData + (longlong)*(int *)(lVar20 + 0x18) * 2);
                pFVar12 = (ForElementType<UE::MovieScene::FMovieSceneEntityID> *)
                          (pFVar12->InlineData + 2)) {
              if (*(ushort *)pFVar12->InlineData == local_f8.InlineData._0_2_) goto LAB_14ac6bed2;
            }
            if (((pFVar21 <= &local_f8) &&
                (&local_f8 <
                 (ForElementType<UE::MovieScene::FMovieSceneEntityID> *)
                 (pFVar21->InlineData + (longlong)*(int *)(lVar20 + 0x1c) * 2))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = *(int *)(lVar20 + 0x18);
            if (iVar9 == *(int *)(lVar20 + 0x1c)) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                                (0x202,pFVar17,(int *)(lVar20 + 0x1c));
            }
            *(int *)(lVar20 + 0x18) = iVar9 + 1;
            if (*(ForElementType<UE::MovieScene::FMovieSceneEntityID> **)(lVar20 + 0x10) !=
                (ForElementType<UE::MovieScene::FMovieSceneEntityID> *)0x0) {
              pFVar17 = *(ForElementType<UE::MovieScene::FMovieSceneEntityID> **)(lVar20 + 0x10);
            }
            *(undefined2 *)(pFVar17->InlineData + (longlong)iVar9 * 2) = local_f8.InlineData._0_2_;
            iVar9 = piVar25[10];
            if (iVar9 == 0) {
              piVar1 = &param_3->__this->FloatScaleUseCount;
              *piVar1 = *piVar1 + 1;
            }
            else if ((iVar9 == 1) || (iVar9 == 2)) {
              piVar1 = &param_3->__this->TransformScaleUseCount;
              *piVar1 = *piVar1 + 1;
            }
LAB_14ac6bed2:
            lVar15 = lVar15 + 1;
            piVar25 = piVar25 + 0xb;
            pFVar14 = local_c8;
            puVar22 = local_88;
            pFVar23 = local_d0;
            pFVar24 = local_d8;
            EVar16 = local_e8;
          } while (lVar15 < (longlong)(ulonglong)uVar2);
        }
        LOCK();
        pFVar24->ScheduledAccessCount = (atomic<int>)((int)pFVar24->ScheduledAccessCount + -1);
        UNLOCK();
        if (local_e4 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar24->ReadWriteLock);
        }
        LOCK();
        pFVar23->ScheduledAccessCount = (atomic<int>)((int)pFVar23->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar16 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
        }
        if (pFVar14 != (FEntityAllocation *)0x0) {
          pFVar14->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_70);
        bVar8 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
        EVar7 = local_f8.SecondaryData._0_1_;
      } while (bVar8);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
  }
  return;
}

// Iterate_PerEntityImpl<`UTemplateSequencePropertyScalingInstantiatorSystem::OnRun'::__l2::<lambda_2>_&> @ 14ac6bfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
::
Iterate_PerEntityImpl<_UTemplateSequencePropertyScalingInstantiatorSystem::OnRun_::__l2::<lambda_2>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_2> *param_3)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  FMovieSceneEntityID *pFVar7;
  UTemplateSequencePropertyScalingInstantiatorSystem *pUVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined2 uVar11;
  uint uVar12;
  EEntityThreadingModel EVar13;
  bool bVar14;
  int iVar15;
  FComponentHeader *pFVar16;
  FEntityAllocation *pFVar17;
  FComponentHeader *pFVar18;
  FMovieSceneEntityID *pFVar19;
  FComponentHeader *pFVar20;
  FComponentHeader *pFVar21;
  EComponentHeaderLockMode EVar22;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  uint uVar23;
  undefined1 *puVar24;
  FComponentHeader *pFVar25;
  FComponentHeader *pFVar26;
  FMovieSceneEntityID local_e0 [4];
  EComponentHeaderLockMode local_d8;
  EComponentHeaderLockMode local_d4;
  TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID> local_d0;
  FComponentHeader *local_c8;
  FComponentHeader *local_c0;
  FComponentHeader *local_b8;
  FEntityAllocationProxy local_b0;
  FMovieSceneEntityID *local_a0;
  FMovieSceneEntityID *local_88;
  FEntityAllocationIteratorProxy local_80;
  FEntityAllocationIterator local_70;
  FEntityAllocationIterator local_58;
  FEntityAllocationWriteContext local_40;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 && *(short *)&(this->Accessors).field_0x4 != -1)
  {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_40,param_1);
    EVar13 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_80,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_70,local_80.Manager,local_80.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_80.Manager);
    bVar14 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
    if (bVar14) {
      do {
        pFVar25 = (FComponentHeader *)0x0;
        FEntityAllocationIterator::operator*(&local_70,&local_b0);
        pFVar16 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_b0);
        pFVar20 = pFVar25;
        if (EVar13 == NoThreading) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar16->Size + 4) = LockFree;
          pFVar20 = pFVar16;
        }
        local_b8 = pFVar20;
        pFVar17 = FEntityAllocationProxy::GetAllocation(&local_b0);
        local_c8 = pFVar17->ComponentHeaders;
        pFVar18 = local_c8 + pFVar17->NumComponents;
        for (; local_c8 != pFVar18; local_c8 = local_c8 + 1) {
          pFVar21 = local_c8;
          if ((local_c8->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4)
          goto LAB_14ac6c0f8;
        }
        local_c8 = (FComponentHeader *)0x0;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        pFVar21 = pFVar25;
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14ac6c0f8:
        local_d4 = pFVar17->LockMode;
        if (local_d4 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar21->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar21->ScheduledAccessCount).field_0x0 + 1;
        UNLOCK();
        local_a0 = (FMovieSceneEntityID *)pFVar21->Components;
        pFVar17 = FEntityAllocationProxy::GetAllocation(&local_b0);
        local_c0 = pFVar17->ComponentHeaders;
        pFVar18 = local_c0 + pFVar17->NumComponents;
        for (; local_c0 != pFVar18; local_c0 = local_c0 + 1) {
          pFVar26 = local_c0;
          if ((local_c0->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_14ac6c183;
        }
        local_c0 = (FComponentHeader *)0x0;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        pFVar26 = pFVar25;
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14ac6c183:
        EVar22 = pFVar17->LockMode;
        local_d8 = EVar22;
        if (EVar22 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar26->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar26->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar26->ScheduledAccessCount).field_0x0 + 1;
        UNLOCK();
        local_88 = (FMovieSceneEntityID *)pFVar26->Components;
        pFVar17 = FEntityAllocationProxy::GetAllocation(&local_b0);
        pFVar7 = pFVar17->EntityIDs;
        uVar3 = *(ushort *)((longlong)&pFVar16->DebugComponents + 6);
        if (uVar3 != 0) {
          pFVar19 = local_a0;
          do {
            local_e0[0].Value = pFVar7[(longlong)pFVar25].Value;
            iVar4 = *(int *)pFVar19;
            pUVar8 = param_3->__this;
            uVar5 = *(uint *)(local_88 + (longlong)pFVar25 * 2);
            uVar23 = uVar5 & 0xffff;
            uVar12 = uVar5;
            local_d0._4_4_ = iVar4;
            if (*(int *)&(pUVar8->PropertyScaledInstances).field_0x8 !=
                *(int *)&(pUVar8->PropertyScaledInstances).field_0x34) {
              puVar9 = *(undefined1 **)&(pUVar8->PropertyScaledInstances).field_0x40;
              puVar24 = &(pUVar8->PropertyScaledInstances).field_0x38;
              if (puVar9 != (undefined1 *)0x0) {
                puVar24 = puVar9;
              }
              iVar15 = *(int *)(puVar24 +
                               (ulonglong)
                               (*(int *)&(pUVar8->PropertyScaledInstances).field_0x48 - 1U &
                               (uVar23 * 0x40 + -0x61c88647 + iVar4 + (uVar23 >> 2) ^ uVar23)) * 4);
              if (iVar15 != -1) {
                local_d0._0_2_ = SUB42(uVar5,0);
                uVar11 = local_d0._0_2_;
                do {
                  uVar6 = *(undefined4 *)
                           (*(longlong *)&pUVar8->PropertyScaledInstances + (longlong)iVar15 * 0x28)
                  ;
                  lVar2 = *(longlong *)&pUVar8->PropertyScaledInstances + (longlong)iVar15 * 0x28;
                  if ((((ushort)uVar6 == local_d0._0_2_) &&
                      ((short)((uint)uVar6 >> 0x10) == (short)(uVar5 >> 0x10))) &&
                     (*(int *)(lVar2 + 4) == iVar4)) {
                    if (iVar15 != -1) {
                      this_00 = (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                                 *)(lVar2 + 8);
                      if (lVar2 == 0) {
                        this_00 = (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                                   *)0x0;
                      }
                      if (this_00 !=
                          (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                           *)0x0) {
                        local_d0._0_4_ = uVar5;
                        iVar15 = TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                                 ::Remove(this_00,local_e0);
                        if (0 < iVar15) {
                          iVar15 = *(int *)(pFVar19 + 0x14);
                          if (iVar15 == 0) {
                            piVar1 = &param_3->__this->FloatScaleUseCount;
                            *piVar1 = *piVar1 + -1;
                          }
                          else if ((iVar15 == 1) || (iVar15 == 2)) {
                            piVar1 = &param_3->__this->TransformScaleUseCount;
                            *piVar1 = *piVar1 + -1;
                          }
                        }
                        uVar12 = local_d0._0_4_;
                        if (this_00->ArrayNum == 0) {
                          pUVar8 = param_3->__this;
                          if (*(int *)&(pUVar8->PropertyScaledInstances).field_0x8 !=
                              *(int *)&(pUVar8->PropertyScaledInstances).field_0x34) {
                            TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                            ::
                            RemoveImpl<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_>
                                      ((TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                                        *)&pUVar8->PropertyScaledInstances,
                                       ((ushort)uVar11 >> 2) + 0x9e3779b9 +
                                       (uVar5 & 0xffff) * 0x40 + iVar4 ^ uVar5 & 0xffff,&local_d0);
                            uVar12 = local_d0._0_4_;
                          }
                        }
                      }
                    }
                    break;
                  }
                  iVar15 = *(int *)(lVar2 + 0x20);
                } while (iVar15 != -1);
              }
            }
            local_d0._0_4_ = uVar12;
            pFVar25 = (FComponentHeader *)((longlong)&pFVar25->_padding_ + 1);
            pFVar19 = pFVar19 + 0x16;
            pFVar20 = local_b8;
            pFVar21 = local_c8;
            pFVar26 = local_c0;
            EVar22 = local_d8;
          } while ((longlong)pFVar25 < (longlong)(ulonglong)uVar3);
        }
        LOCK();
        *(int *)&(pFVar21->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar21->ScheduledAccessCount).field_0x0 + -1;
        UNLOCK();
        if (local_d4 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar26->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar26->ScheduledAccessCount).field_0x0 + -1;
        UNLOCK();
        if (EVar22 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar26->ReadWriteLock);
        }
        if (pFVar20 != (FComponentHeader *)0x0) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar20->Size + 4) = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_70);
        bVar14 = FEntityAllocationIterator::operator!=(&local_70,&local_58);
      } while (bVar14);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
  }
  return;
}

// Iterate_PerEntityImpl<`UTemplateSequencePropertyScalingInstantiatorSystem::OnRun'::__l2::<lambda_3>_&> @ 14ac6c400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<UObject_*>_>
::
Iterate_PerEntityImpl<_UTemplateSequencePropertyScalingInstantiatorSystem::OnRun_::__l2::<lambda_3>_&>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TReadAccess<UObject_*>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_3> *param_3)

{
  FMovieSceneEntityID FVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  uchar *puVar7;
  TArray<TTuple<UE::MovieScene::FMovieSceneEntityID,FGuid>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  uchar *puVar11;
  EEntityThreadingModel EVar12;
  bool bVar13;
  int iVar14;
  FEntityAllocation *pFVar15;
  FEntityAllocation *pFVar16;
  longlong lVar17;
  FMovieSceneSequenceID *pFVar18;
  FComponentHeader *pFVar19;
  FMovieSceneSequenceID *pFVar20;
  FEntityAllocation *pFVar21;
  FMovieSceneEntityID *pFVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  FComponentHeader *local_140;
  FComponentHeader *local_138;
  uchar *local_120;
  FComponentHeader *local_110;
  FComponentHeader *local_108;
  FEntityAllocationProxy local_e0;
  TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID> local_d0;
  FEntityAllocation *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  FEntityAllocationIteratorProxy local_98;
  FEntityAllocationIterator local_88;
  undefined1 local_70 [24];
  FEntityAllocationIterator local_58;
  FEntityAllocationWriteContext local_40;
  
  if (*(short *)&(this->Accessors).field_0x2 != -1 &&
      (*(short *)&(this->Accessors).field_0xa != -1 && *(short *)&(this->Accessors).field_0x8 != -1)
     ) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_40,param_1);
    EVar12 = FEntityManager::GetThreadingModel(param_1);
    FEntityManager::Iterate(param_1,&local_98,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_88,local_98.Manager,local_98.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_98.Manager);
    bVar13 = FEntityAllocationIterator::operator!=(&local_88,&local_58);
    if (bVar13) {
      do {
        FEntityAllocationIterator::operator*(&local_88,&local_e0);
        pFVar15 = FEntityAllocationProxy::GetAllocation(&local_e0);
        if (EVar12 == NoThreading) {
          pFVar15->LockMode = LockFree;
          pFVar21 = pFVar15;
        }
        else {
          pFVar21 = (FEntityAllocation *)0x0;
        }
        local_c8 = pFVar21;
        pFVar16 = FEntityAllocationProxy::GetAllocation(&local_e0);
        local_108 = pFVar16->ComponentHeaders;
        pFVar19 = local_108 + pFVar16->NumComponents;
        for (; local_108 != pFVar19; local_108 = local_108 + 1) {
          if ((local_108->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xa)
          goto LAB_14ac6c573;
        }
        local_108 = (FComponentHeader *)0x0;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14ac6c573:
        EVar3 = pFVar16->LockMode;
        if (EVar3 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&local_108->ReadWriteLock);
        }
        LOCK();
        local_108->ScheduledAccessCount = (atomic<int>)((int)local_108->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar16 = FEntityAllocationProxy::GetAllocation(&local_e0);
        local_110 = pFVar16->ComponentHeaders;
        pFVar19 = local_110 + pFVar16->NumComponents;
        for (; local_110 != pFVar19; local_110 = local_110 + 1) {
          if ((local_110->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x8)
          goto LAB_14ac6c5fb;
        }
        local_110 = (FComponentHeader *)0x0;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14ac6c5fb:
        EVar4 = pFVar16->LockMode;
        if (EVar4 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&local_110->ReadWriteLock);
        }
        LOCK();
        local_110->ScheduledAccessCount = (atomic<int>)((int)local_110->ScheduledAccessCount + 1);
        UNLOCK();
        puVar7 = local_110->Components;
        pFVar16 = FEntityAllocationProxy::GetAllocation(&local_e0);
        local_138 = pFVar16->ComponentHeaders;
        pFVar19 = local_138 + pFVar16->NumComponents;
        for (; local_138 != pFVar19; local_138 = local_138 + 1) {
          if ((local_138->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
            EVar6 = pFVar16->LockMode;
            if (EVar6 == Mutex) {
              AcquireSRWLockShared((PSRWLOCK)&local_138->ReadWriteLock);
            }
            LOCK();
            local_138->ScheduledAccessCount =
                 (atomic<int>)((int)local_138->ScheduledAccessCount + 1);
            UNLOCK();
            local_120 = local_138->Components;
            goto LAB_14ac6c688;
          }
        }
        local_138 = (FComponentHeader *)0x0;
        local_120 = (uchar *)0x0;
        EVar6 = LockFree;
LAB_14ac6c688:
        pFVar16 = FEntityAllocationProxy::GetAllocation(&local_e0);
        local_140 = pFVar16->ComponentHeaders;
        pFVar19 = local_140 + pFVar16->NumComponents;
        for (; local_140 != pFVar19; local_140 = local_140 + 1) {
          if ((local_140->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_14ac6c70f;
        }
        local_140 = (FComponentHeader *)0x0;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14ac6c70f:
        EVar5 = pFVar16->LockMode;
        if (EVar5 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&local_140->ReadWriteLock);
        }
        LOCK();
        local_140->ScheduledAccessCount = (atomic<int>)((int)local_140->ScheduledAccessCount + 1);
        UNLOCK();
        local_b0 = local_140->Components;
        pFVar16 = FEntityAllocationProxy::GetAllocation(&local_e0);
        puVar11 = local_b0;
        local_b8 = 0;
        pFVar22 = pFVar16->EntityIDs;
        local_a0 = (ulonglong)pFVar15->Size;
        if (local_a0 != 0) {
          lVar25 = 0;
          lVar17 = (longlong)puVar7 - (longlong)pFVar22;
          iVar24 = 0;
          do {
            FVar1.Value = *(ushort *)(lVar17 + (longlong)pFVar22);
            if (local_120 == (uchar *)0x0) {
              pFVar20 = (FMovieSceneSequenceID *)0x0;
            }
            else {
              pFVar20 = (FMovieSceneSequenceID *)(local_120 + (longlong)iVar24 * 4);
            }
            local_d0._0_4_ = *(undefined4 *)(puVar11 + lVar25 * 4);
            uVar2 = pFVar22->Value;
            uVar23 = local_d0._0_4_ & 0xffff;
            pFVar18 = &MovieSceneSequenceID::Root;
            if (pFVar20 != (FMovieSceneSequenceID *)0x0) {
              pFVar18 = pFVar20;
            }
            local_d0._4_4_ = pFVar18->Value;
            iVar14 = TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                     ::
                     FindIndexByHash<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>_>
                               ((TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                                 *)&param_3->__this->PropertyScaledInstances,
                                local_d0._4_4_ + uVar23 * 0x40 + (uVar23 >> 2) + 0x9e3779b9 ^ uVar23
                                ,&local_d0);
            if ((iVar14 != -1) && (FVar1.Value != 0xffff)) {
              FEntityManager::ReadComponent<FGuid>
                        ((FEntityManager *)(param_3->__this->_padding_ + 0x28),
                         (TComponentLock<UE::MovieScene::TReadOptional<FGuid>_> *)local_70,FVar1,
                         param_3->BuiltInComponents->GenericObjectBinding);
              if ((undefined8 *)local_70._16_8_ == (undefined8 *)0x0) {
                bVar13 = Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_313004018097979170>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                                    ,0xde,"Reader.IsValid()");
                if (bVar13) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              else {
                local_b0 = *(uchar **)local_70._16_8_;
                uStack_a8 = *(undefined4 *)(local_70._16_8_ + 8);
                uStack_a4 = *(undefined4 *)(local_70._16_8_ + 0xc);
                pTVar8 = param_3->PropertyScaledEntities;
                iVar14 = pTVar8->ArrayNum;
                uVar26 = *(undefined4 *)local_70._16_8_;
                uVar27 = *(undefined4 *)(local_70._16_8_ + 4);
                if (iVar14 == pTVar8->ArrayMax) {
                  iVar14 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x414,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
                  uVar26 = (undefined4)local_b0;
                  uVar27 = local_b0._4_4_;
                }
                pTVar8->ArrayNum = iVar14 + 1;
                pFVar9 = (pTVar8->AllocatorInstance).Data;
                *(ushort *)(pFVar9 + (longlong)iVar14 * 0x14) = uVar2;
                pFVar9 = pFVar9 + (longlong)iVar14 * 0x14 + 4;
                *(undefined4 *)pFVar9 = uVar26;
                *(undefined4 *)(pFVar9 + 4) = uVar27;
                *(undefined4 *)(pFVar9 + 8) = uStack_a8;
                *(undefined4 *)(pFVar9 + 0xc) = uStack_a4;
              }
              if (local_70._0_8_ != 0) {
                LOCK();
                *(int *)(local_70._0_8_ + 0x30) = *(int *)(local_70._0_8_ + 0x30) + -1;
                UNLOCK();
                if (local_70._8_4_ == 1) {
                  ReleaseSRWLockShared((PSRWLOCK)(local_70._0_8_ + 0x20));
                }
              }
            }
            iVar24 = iVar24 + 1;
            lVar25 = lVar25 + 1;
            pFVar22 = pFVar22 + 1;
            pFVar21 = local_c8;
          } while (lVar25 < (longlong)local_a0);
        }
        LOCK();
        local_108->ScheduledAccessCount = (atomic<int>)((int)local_108->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar3 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&local_108->ReadWriteLock);
        }
        LOCK();
        local_110->ScheduledAccessCount = (atomic<int>)((int)local_110->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar4 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&local_110->ReadWriteLock);
        }
        if (local_138 != (FComponentHeader *)0x0) {
          LOCK();
          local_138->ScheduledAccessCount = (atomic<int>)((int)local_138->ScheduledAccessCount + -1)
          ;
          UNLOCK();
          if (EVar6 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)&local_138->ReadWriteLock);
          }
        }
        LOCK();
        local_140->ScheduledAccessCount = (atomic<int>)((int)local_140->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar5 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&local_140->ReadWriteLock);
        }
        if (pFVar21 != (FEntityAllocation *)0x0) {
          pFVar21->LockMode = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_88);
        bVar13 = FEntityAllocationIterator::operator!=(&local_88,&local_58);
      } while (bVar13);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_88);
  }
  return;
}

// Iterate_PerEntityImpl<`UCameraAnimationSpawnableSystem::OnRun'::__l2::<lambda_1>_> @ 14ac6ca30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
::Iterate_PerEntityImpl<_UCameraAnimationSpawnableSystem::OnRun_::__l2::<lambda_1>_>
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
           *this,FEntityManager *param_1,FEntityComponentFilter *param_2,<lambda_1> *param_3)

{
  ushort uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *this_00;
  code *pcVar3;
  EEntityThreadingModel EVar4;
  bool bVar5;
  FComponentHeader *pFVar6;
  FEntityAllocation *pFVar7;
  undefined8 uVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  EComponentHeaderLockMode EVar12;
  longlong lVar13;
  longlong *plVar14;
  FComponentHeader *pFVar15;
  FComponentHeader *pFVar16;
  undefined1 local_108;
  EEntityThreadingModel local_107;
  FMovieSceneSequenceID local_100 [2];
  undefined4 local_f8;
  EComponentHeaderLockMode local_f4;
  EComponentHeaderLockMode local_f0;
  FComponentHeader *local_e8;
  FComponentHeader *local_e0;
  UMovieSceneSequence *local_d8;
  longlong local_d0;
  FComponentHeader *local_c8;
  FMovieSceneEntityID *local_c0;
  FMovieSceneEntityID *local_b8;
  FEntityAllocationIteratorProxy local_b0;
  FEntityAllocationProxy local_a0;
  FEntityAllocationIterator local_90;
  FPlaybackCapabilityPtr local_78;
  FSharedPlaybackState *local_68;
  TReferenceControllerBase<1> *local_60;
  FEntityAllocationIterator local_58;
  FEntityAllocationWriteContext local_40;
  
  if (*(short *)&this->Accessors != -1 && *(short *)&(this->Accessors).field_0x2 != -1) {
    FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_40,param_1);
    EVar4 = FEntityManager::GetThreadingModel(param_1);
    local_107 = EVar4;
    FEntityManager::Iterate(param_1,&local_b0,param_2);
    FEntityAllocationIterator::FEntityAllocationIterator(&local_90,local_b0.Manager,local_b0.Filter)
    ;
    FEntityAllocationIterator::FEntityAllocationIterator(&local_58,local_b0.Manager);
    bVar5 = FEntityAllocationIterator::operator!=(&local_90,&local_58);
    if (bVar5) {
      do {
        pFVar10 = (FComponentHeader *)0x0;
        FEntityAllocationIterator::operator*(&local_90,&local_a0);
        pFVar6 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(&local_a0);
        pFVar11 = pFVar10;
        if (EVar4 == NoThreading) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar6->Size + 4) = LockFree;
          pFVar11 = pFVar6;
        }
        local_c8 = pFVar11;
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_a0);
        local_e8 = pFVar7->ComponentHeaders;
        pFVar9 = local_e8 + pFVar7->NumComponents;
        for (; local_e8 != pFVar9; local_e8 = local_e8 + 1) {
          pFVar15 = local_e8;
          if ((local_e8->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2)
          goto LAB_14ac6cb93;
        }
        local_e8 = (FComponentHeader *)0x0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        pFVar15 = pFVar10;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14ac6cb93:
        local_f0 = pFVar7->LockMode;
        if (local_f0 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar15->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar15->ScheduledAccessCount).field_0x0 + 1;
        UNLOCK();
        local_c0 = (FMovieSceneEntityID *)pFVar15->Components;
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_a0);
        local_e0 = pFVar7->ComponentHeaders;
        pFVar9 = local_e0 + pFVar7->NumComponents;
        for (; local_e0 != pFVar9; local_e0 = local_e0 + 1) {
          pFVar16 = local_e0;
          if ((local_e0->ComponentType).Value == *(ushort *)&this->Accessors) goto LAB_14ac6cc23;
        }
        local_e0 = (FComponentHeader *)0x0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        pFVar16 = pFVar10;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14ac6cc23:
        EVar12 = pFVar7->LockMode;
        local_f4 = EVar12;
        if (EVar12 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar16->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar16->ScheduledAccessCount).field_0x0 + 1;
        UNLOCK();
        uVar1 = *(ushort *)((longlong)&pFVar6->DebugComponents + 6);
        local_b8 = (FMovieSceneEntityID *)pFVar16->Components;
        if (uVar1 != 0) {
          pFVar6 = pFVar10;
          do {
            lVar13 = (ulonglong)local_b8[(longlong)pFVar10 * 2].Value * 0x140 +
                     *(longlong *)&param_3->InstanceRegistry->Instances;
            pTVar2 = *(TReferenceControllerBase<1> **)(lVar13 + 0x120);
            this_00 = *(FSharedPlaybackState **)(lVar13 + 0x118);
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_d0 = lVar13;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            local_100[0].Value = *(uint *)(lVar13 + 0x128);
            local_d8 = FSharedPlaybackState::GetSequence(this_00,local_100);
            bVar5 = IsInGameThread();
            if (!bVar5) {
              local_108 = bVar5;
              `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>'::__l2
              ::<lambda_1>::operator()(&local_108);
            }
            FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
            FPlaybackCapabilitiesImpl::FindCapability
                      ((FPlaybackCapabilitiesImpl *)&this_00->Capabilities,&local_78,
                       1 << ((byte)local_100[1].Value & 0x1f));
            if (local_78.Ptr == (longlong *)0x0) {
LAB_14ac6cd3c:
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = local_78.Ptr;
              if (local_78.StorageMode != Inline) {
                if ((local_78.StorageMode != RawPointer) && (local_78.StorageMode != SharedPointer))
                {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                     ,0x30,L"Unexpected playback capability storage mode");
                  if (bVar5) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  goto LAB_14ac6cd3c;
                }
                plVar14 = *(longlong **)local_78.Ptr;
              }
            }
            pcVar3 = *(code **)(*plVar14 + 0x10);
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_f8 = *(undefined4 *)(local_d0 + 0x128);
            local_68 = this_00;
            local_60 = pTVar2;
            uVar8 = (**(code **)(local_d8->_padding_ + 0x2f8))();
            lVar13 = (*pcVar3)(plVar14,local_c0 + (longlong)(int)pFVar6 * 8,uVar8,&local_f8,
                               &local_68);
            if ((lVar13 == 0) &&
               (bVar5 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6990050907643707506>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequenceSubsystem.cpp"
                                   ,0x72,"SpawnedObject"), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            pFVar6 = (FComponentHeader *)(ulonglong)((int)pFVar6 + 1);
            pFVar10 = (FComponentHeader *)((longlong)&pFVar10->_padding_ + 1);
            pFVar11 = local_c8;
            pFVar15 = local_e8;
            pFVar16 = local_e0;
            EVar12 = local_f4;
          } while ((longlong)pFVar10 < (longlong)(ulonglong)uVar1);
        }
        LOCK();
        *(int *)&(pFVar15->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar15->ScheduledAccessCount).field_0x0 + -1;
        UNLOCK();
        if (local_f0 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
        }
        LOCK();
        *(int *)&(pFVar16->ScheduledAccessCount).field_0x0 =
             *(int *)&(pFVar16->ScheduledAccessCount).field_0x0 + -1;
        UNLOCK();
        if (EVar12 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
        }
        if (pFVar11 != (FComponentHeader *)0x0) {
          *(EComponentHeaderLockMode *)((longlong)&pFVar11->Size + 4) = Mutex;
        }
        FEntityAllocationIterator::operator++(&local_90);
        bVar5 = FEntityAllocationIterator::operator!=(&local_90,&local_58);
        EVar4 = local_107;
      } while (bVar5);
    }
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_58);
    FEntityAllocationIterator::~FEntityAllocationIterator(&local_90);
  }
  return;
}

// MutableView<TObjectPtr<ATemplateSequenceActor>_> @ 14ac6d070

TMutableView<TObjectPtr<ATemplateSequenceActor>_> __cdecl
MutableView<TObjectPtr<ATemplateSequenceActor>_>(TObjectPtr<ATemplateSequenceActor> *param_1)

{
  TObjectPtr<ATemplateSequenceActor>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<ATemplateSequenceActor>_>)(ATemplateSequenceActor **)param_1;
}

// NewObject<UCameraAnimationEntitySystemLinker> @ 14ac6d4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraAnimationEntitySystemLinker * __cdecl
NewObject<UCameraAnimationEntitySystemLinker>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UCameraAnimationEntitySystemLinker *pUVar2;
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
  pUVar1 = UCameraAnimationEntitySystemLinker::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UCameraAnimationEntitySystemLinker *)
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

// NewObject<UTemplateSequenceSection> @ 14ac6d590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTemplateSequenceSection * __cdecl
NewObject<UTemplateSequenceSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTemplateSequenceSection *pUVar2;
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
  pUVar1 = UTemplateSequenceSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTemplateSequenceSection *)
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

// ObjectPtrWrap<ATemplateSequenceActor_*,TObjectPtr<ATemplateSequenceActor>_> @ 14ac6d680

TObjectPtr<ATemplateSequenceActor> * __cdecl
ObjectPtrWrap<ATemplateSequenceActor_*,TObjectPtr<ATemplateSequenceActor>_>
          (ATemplateSequenceActor **param_1)

{
  return (TObjectPtr<ATemplateSequenceActor> *)param_1;
}

// StaticEnum<enum_ETemplateSectionPropertyScaleType> @ 14ac6f640

UEnum * __cdecl StaticEnum<enum_ETemplateSectionPropertyScaleType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TemplateSequence();
    Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType,
                       (UObject *)pUVar1,L"ETemplateSectionPropertyScaleType");
  }
  return Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton;
}

// TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_> @ 14ac6f790

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x38;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x48;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x40 =
       *(undefined8 *)&(param_2->Components).field_0x40;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x48 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x58;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x50 =
       *(undefined8 *)&(param_2->Components).field_0x50;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x58 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_> @ 14ac71150

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0x190;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x198;
    if (*(ulonglong *)&this->field_0x198 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x190 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x1a0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x190 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x170;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x178;
    if (*(ulonglong *)&this->field_0x178 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x170 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x180 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x170 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x150;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x158;
    if (*(ulonglong *)&this->field_0x158 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x150 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x160 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x150 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x130;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x138;
    if (*(ulonglong *)&this->field_0x138 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x130 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x140 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x130 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x110;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x118;
    if (*(ulonglong *)&this->field_0x118 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x110 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x120 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x110 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0xf0;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0xf8;
    if (*(ulonglong *)&this->field_0xf8 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xf0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x100 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0xf0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xd8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xd8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xe0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xd8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xc0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xc0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xc0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x48 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x50 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ac71465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// `vector_deleting_destructor' @ 14ac71d00

void * __thiscall
UE::MovieScene::TComponentDebuggingTypedPtr<UE::MovieScene::FTemplateSequenceComponentData>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FTemplateSequenceComponentData> *this,
          uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FTemplateSequenceComponentData> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor' @ 14ac71da0

void * __thiscall
UE::MovieScene::
TComponentDebuggingTypedPtr<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::
_vector_deleting_destructor_
          (TComponentDebuggingTypedPtr<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,uint param_1)

{
  TComponentDebuggingTypedPtr<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *pTVar1;
  longlong lVar2;
  
  if ((param_1 & 2) != 0) {
    lVar2 = *(longlong *)&this[-1].field_0x8;
    pTVar1 = this + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined ***)(pTVar1 + -1) = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
      pTVar1 = pTVar1 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].field_0x8,*(longlong *)&this[-1].field_0x8 * 0x10 + 8);
    }
    return &this[-1].field_0x8;
  }
  *(undefined ***)this = &___7IComponentDebuggingTypedPtr_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{704}' @ 14ac71e34

/* [thunk]:public: virtual void * __ptr64 __cdecl ATemplateSequenceActor::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
ATemplateSequenceActor::_vector_deleting_destructor__adjustor_704__
          (ATemplateSequenceActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ATemplateSequenceActor *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ac71e48

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraAnimationSequencePlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraAnimationSequencePlayer::_vector_deleting_destructor__adjustor_40__
          (UCameraAnimationSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraAnimationSequencePlayer *)
                      &this[-1].PlayPosition.LastRange.TypedValue.Direction,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{536}' @ 14ac71e58

/* [thunk]:public: virtual void * __ptr64 __cdecl UTemplateSequencePlayer::`vector deleting
   destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
UTemplateSequencePlayer::_vector_deleting_destructor__adjustor_536__
          (UTemplateSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTemplateSequencePlayer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ac71e6c

/* [thunk]:public: virtual void * __ptr64 __cdecl UTemplateSequencePlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UTemplateSequencePlayer::_vector_deleting_destructor__adjustor_40__
          (UTemplateSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTemplateSequencePlayer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{272}' @ 14ac71e7c

/* [thunk]:public: virtual void * __ptr64 __cdecl UTemplateSequenceSection::`vector deleting
   destructor'`adjustor{272}' (unsigned int) __ptr64 */

void * __thiscall
UTemplateSequenceSection::_vector_deleting_destructor__adjustor_272__
          (UTemplateSequenceSection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTemplateSequenceSection *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ac71e90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ATemplateSequenceActor,void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac71ec0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCameraAnimationSequencePlayer,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UCameraAnimationSequencePlayer,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac71ef0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FTemplateSequenceComponentData>::_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FTemplateSequenceComponentData> *this,uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FTemplateSequenceComponentData>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac71f30

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::
_scalar_deleting_destructor_
          (TComplexComponentOps<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *this,
          uint param_1)

{
  *this = (TComplexComponentOps<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac71f70

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData> *this,
          uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequenceComponentData>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac71fb0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::
_scalar_deleting_destructor_
          (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,uint param_1)

{
  *this = (TComplexComponentOpsBase<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>)
          &___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac71ff0

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FTemplateSequenceComponentData>::
_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FTemplateSequenceComponentData>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72030

void * __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOpsCustomRefCollection<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
::_scalar_deleting_destructor_
          (TComplexComponentOpsCustomRefCollection<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IComplexComponentOps_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72070

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FTemplateSequenceComponentData>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FTemplateSequenceComponentData> *this,uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac720b0

void * __thiscall
UE::MovieScene::TComponentHeader<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::
_scalar_deleting_destructor_
          (TComponentHeader<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *this,
          uint param_1)

{
  FComponentHeader::~FComponentHeader((FComponentHeader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac720f0

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FTemplateSequenceComponentData>::
_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FTemplateSequenceComponentData> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72140

void * __thiscall
UE::MovieScene::TComponentTypeDebugInfo<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
::_scalar_deleting_destructor_
          (TComponentTypeDebugInfo<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,uint param_1)

{
  *(undefined ***)this = &___7FComponentTypeDebugInfo_MovieScene_UE__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72190

void * __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac721d0

void * __thiscall
UE::MovieScene::
TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::
_scalar_deleting_destructor_
          (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,uint param_1)

{
  *(undefined ***)this = &___7FChildEntityInitializer_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72210

void * __thiscall
UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd> *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72250

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>::
_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72290

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac722d0

void * __thiscall
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72310

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>::
_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAdd>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72350

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72390

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequenceComponentData>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac723d0

void * __thiscall
UE::MovieScene::
TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
::_scalar_deleting_destructor_
          (TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72410

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72470

void * __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac724d0

void * __thiscall
TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<UE::MovieScene::TEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72530

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72570

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac725b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac725f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTemplateSequenceSpawnRegister,SharedPointerInternals::DefaultDeleter<FTemplateSequenceSpawnRegister>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTemplateSequenceSpawnRegister,SharedPointerInternals::DefaultDeleter<FTemplateSequenceSpawnRegister>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72630

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72670

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac726b0

void * __thiscall
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::_scalar_deleting_destructor_
          (TScheduledEntityTask<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITaskContext_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac726f0

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
ATemplateSequenceActor::_scalar_deleting_destructor_(ATemplateSequenceActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlaybackClient__;
  pFVar1 = (this->TemplateSequence).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieScenePlaybackClient__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72780

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::MovieScene::FCameraAnimationInstantiationMutation::_scalar_deleting_destructor_
          (FCameraAnimationInstantiationMutation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac727c0

void * __thiscall
FSequenceCameraShakeSpawnRegister::_scalar_deleting_destructor_
          (FSequenceCameraShakeSpawnRegister *this,uint param_1)

{
  FMovieSceneSpawnRegister::~FMovieSceneSpawnRegister((FMovieSceneSpawnRegister *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72800

void * __thiscall
FTemplateSequenceSpawnRegister::_scalar_deleting_destructor_
          (FTemplateSequenceSpawnRegister *this,uint param_1)

{
  FLevelSequenceSpawnRegister::~FLevelSequenceSpawnRegister((FLevelSequenceSpawnRegister *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72840

void * __thiscall
UCameraAnimationBoundObjectInstantiator::_scalar_deleting_destructor_
          (UCameraAnimationBoundObjectInstantiator *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraAnimationBoundObjectInstantiator__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac728a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UCameraAnimationEntitySystemLinker::_scalar_deleting_destructor_
          (UCameraAnimationEntitySystemLinker *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraAnimationEntitySystemLinker__6B_;
  UMovieSceneEntitySystemLinker::~UMovieSceneEntitySystemLinker
            ((UMovieSceneEntitySystemLinker *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x798);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72900

void * __thiscall
UCameraAnimationSequence::_scalar_deleting_destructor_(UCameraAnimationSequence *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraAnimationSequence__6B_;
  UTemplateSequence::~UTemplateSequence((UTemplateSequence *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72960

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UCameraAnimationSequenceCameraStandIn::_scalar_deleting_destructor_
          (UCameraAnimationSequenceCameraStandIn *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7UCameraAnimationSequenceCameraStandIn__6B_;
  pvVar1 = *(void **)&(this->FocusSettings).TrackingFocusSettings.ActorToTrack.SoftObjectPtr.
                      field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x8d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac729f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UCameraAnimationSequencePlayer::_scalar_deleting_destructor_
          (UCameraAnimationSequencePlayer *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  FMovieSceneSpawnRegister::~FMovieSceneSpawnRegister
            ((FMovieSceneSpawnRegister *)&this->SpawnRegister);
  IMovieScenePlayer::~IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x330);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72a90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UCameraAnimationSequenceSubsystem::_scalar_deleting_destructor_
          (UCameraAnimationSequenceSubsystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraAnimationSequenceSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Runner).SharedReferenceCount.ReferenceController);
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

// `scalar_deleting_destructor' @ 14ac72b00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UCameraAnimationSpawnableSystem::_scalar_deleting_destructor_
          (UCameraAnimationSpawnableSystem *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraAnimationSpawnableSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72b60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
USequenceCameraShakePattern::_scalar_deleting_destructor_
          (USequenceCameraShakePattern *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USequenceCameraShakePattern__6B_;
  UCameraShakePattern::~UCameraShakePattern((UCameraShakePattern *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72bc0

void * __thiscall
USequenceCameraShakeTestUtil::_scalar_deleting_destructor_
          (USequenceCameraShakeTestUtil *this,uint param_1)

{
  *(undefined ***)this = &___7USequenceCameraShakeTestUtil__6B_;
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

// `scalar_deleting_destructor' @ 14ac72c20

void * __thiscall
UTemplateSequence::_scalar_deleting_destructor_(UTemplateSequence *this,uint param_1)

{
  ~UTemplateSequence(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72c80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UTemplateSequencePlayer::_scalar_deleting_destructor_(UTemplateSequencePlayer *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  UMovieSceneSequencePlayer::~UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72d00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::_scalar_deleting_destructor_
          (UTemplateSequencePropertyScalingEvaluatorSystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingEvaluatorSystem__6B_;
  *(undefined4 *)&(this->PropertyScales).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PropertyScales).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyScales);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72da0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UTemplateSequencePropertyScalingInstantiatorSystem::_scalar_deleting_destructor_
          (UTemplateSequencePropertyScalingInstantiatorSystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingInstantiatorSystem__6B_;
  *(undefined4 *)&(this->PropertyScaledInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PropertyScaledInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID>,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyScaledInstances);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72e40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UTemplateSequenceSection::_scalar_deleting_destructor_(UTemplateSequenceSection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  DestructItems<FTemplateSectionPropertyScale,int>
            ((FTemplateSectionPropertyScale *)(this->PropertyScales).AllocatorInstance.Data,
             (this->PropertyScales).ArrayNum);
  pFVar1 = (this->PropertyScales).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSubSection::~UMovieSceneSubSection((UMovieSceneSubSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x8a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UTemplateSequenceSystem::_scalar_deleting_destructor_(UTemplateSequenceSystem *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTemplateSequenceSystem__6B_;
  pFVar1 = (this->ApplicableFilter).Filter.ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ac72f60

void * __thiscall
UTemplateSequenceTrack::_scalar_deleting_destructor_(UTemplateSequenceTrack *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieSceneSubTrack::~UMovieSceneSubTrack((UMovieSceneSubTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCameraAnimationSequence @ 14ac74b50

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraAnimationSequence(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraAnimationSequencePlayer @ 14ac74b60

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraAnimationSequencePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraAnimationSequenceSubsystem @ 14ac74b70

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraAnimationSequenceSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequenceCameraShake @ 14ac74b80

void __cdecl EmptyLinkFunctionForGeneratedCodeSequenceCameraShake(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequenceCameraShakeTestUtil @ 14ac74b90

void __cdecl EmptyLinkFunctionForGeneratedCodeSequenceCameraShakeTestUtil(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTemplateSequence @ 14ac74ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeTemplateSequence(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTemplateSequenceActor @ 14ac74bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeTemplateSequenceActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTemplateSequencePlayer @ 14ac74bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeTemplateSequencePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTemplateSequenceSection @ 14ac74bd0

void __cdecl EmptyLinkFunctionForGeneratedCodeTemplateSequenceSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTemplateSequenceSystem @ 14ac74be0

void __cdecl EmptyLinkFunctionForGeneratedCodeTemplateSequenceSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTemplateSequenceTrack @ 14ac74bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeTemplateSequenceTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTemplateSequence_init @ 14ac74c00

void __cdecl EmptyLinkFunctionForGeneratedCodeTemplateSequence_init(void)

{
  return;
}

// Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_NoRegister @ 14ac81dc0

UClass * __cdecl Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationBoundObjectInstantiator",
               &Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton,
               UCameraAnimationBoundObjectInstantiator::
               StaticRegisterNativesUCameraAnimationBoundObjectInstantiator,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationBoundObjectInstantiator>
               ,InternalVTableHelperCtorCaller<UCameraAnimationBoundObjectInstantiator>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.InnerSingleton;
}

// Z_Construct_UClass_UCameraAnimationEntitySystemLinker_NoRegister @ 14ac81e80

UClass * __cdecl Z_Construct_UClass_UCameraAnimationEntitySystemLinker_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UMovieSceneEntitySystemLinker::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationEntitySystemLinker",
               &Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton,
               UCameraAnimationEntitySystemLinker::
               StaticRegisterNativesUCameraAnimationEntitySystemLinker,0x798,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationEntitySystemLinker>,
               InternalVTableHelperCtorCaller<UCameraAnimationEntitySystemLinker>,local_res8,
               UMovieSceneEntitySystemLinker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.InnerSingleton;
}

// Z_Construct_UClass_UCameraAnimationSequenceSubsystem_NoRegister @ 14ac81f40

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSequenceSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequenceSubsystem",
               &Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton,
               UCameraAnimationSequenceSubsystem::
               StaticRegisterNativesUCameraAnimationSequenceSubsystem,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequenceSubsystem>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequenceSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UCameraAnimationSpawnableSystem_NoRegister @ 14ac82000

UClass * __cdecl Z_Construct_UClass_UCameraAnimationSpawnableSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSpawnableSystem",
               &Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton,
               UCameraAnimationSpawnableSystem::StaticRegisterNativesUCameraAnimationSpawnableSystem
               ,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraAnimationSpawnableSystem>,
               InternalVTableHelperCtorCaller<UCameraAnimationSpawnableSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.InnerSingleton;
}

// Z_Construct_UClass_USequenceCameraShakePattern_NoRegister @ 14ac820c0

UClass * __cdecl Z_Construct_UClass_USequenceCameraShakePattern_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"SequenceCameraShakePattern",
               &Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton,
               USequenceCameraShakePattern::StaticRegisterNativesUSequenceCameraShakePattern,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USequenceCameraShakePattern>,
               InternalVTableHelperCtorCaller<USequenceCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton;
}

// Z_Construct_UClass_USequenceCameraShakeTestUtil_NoRegister @ 14ac82180

UClass * __cdecl Z_Construct_UClass_USequenceCameraShakeTestUtil_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"SequenceCameraShakeTestUtil",
               &Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton,
               USequenceCameraShakeTestUtil::StaticRegisterNativesUSequenceCameraShakeTestUtil,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USequenceCameraShakeTestUtil>,
               InternalVTableHelperCtorCaller<USequenceCameraShakeTestUtil>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.InnerSingleton;
}

// Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_NoRegister @ 14ac82240

UClass * __cdecl Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePropertyScalingEvaluatorSystem",
               &Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.
                InnerSingleton,
               UTemplateSequencePropertyScalingEvaluatorSystem::
               StaticRegisterNativesUTemplateSequencePropertyScalingEvaluatorSystem,0x98,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTemplateSequencePropertyScalingEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingEvaluatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.InnerSingleton;
}

// Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_NoRegister @ 14ac82300

UClass * __cdecl
Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePropertyScalingInstantiatorSystem",
               &Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.
                InnerSingleton,
               UTemplateSequencePropertyScalingInstantiatorSystem::
               StaticRegisterNativesUTemplateSequencePropertyScalingInstantiatorSystem,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTemplateSequencePropertyScalingInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingInstantiatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingInstantiatorSystem.
         InnerSingleton;
}

// Z_Construct_UClass_UTemplateSequenceSection_NoRegister @ 14ac823c0

UClass * __cdecl Z_Construct_UClass_UTemplateSequenceSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceSection",
               &Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton,
               UTemplateSequenceSection::StaticRegisterNativesUTemplateSequenceSection,0x8a0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UTemplateSequenceSection>,
               InternalVTableHelperCtorCaller<UTemplateSequenceSection>,local_res8,
               UMovieSceneSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceSection.InnerSingleton;
}

// Z_Construct_UClass_UTemplateSequenceSystem_NoRegister @ 14ac82480

UClass * __cdecl Z_Construct_UClass_UTemplateSequenceSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceSystem",
               &Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton,
               UTemplateSequenceSystem::StaticRegisterNativesUTemplateSequenceSystem,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTemplateSequenceSystem>
               ,InternalVTableHelperCtorCaller<UTemplateSequenceSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceSystem.InnerSingleton;
}

// Z_Construct_UClass_UTemplateSequenceTrack_NoRegister @ 14ac82540

UClass * __cdecl Z_Construct_UClass_UTemplateSequenceTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequenceTrack",
               &Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton,
               UTemplateSequenceTrack::StaticRegisterNativesUTemplateSequenceTrack,0x128,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTemplateSequenceTrack>,
               InternalVTableHelperCtorCaller<UTemplateSequenceTrack>,local_res8,
               UMovieSceneSubTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequenceTrack.InnerSingleton;
}

// IMPLEMENT_MODULE_TemplateSequence @ 14ac83320

void __cdecl IMPLEMENT_MODULE_TemplateSequence(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GTemplateSequenceComponentTypes'' @ 1504229d0

void __cdecl
`UE::MovieScene::FTemplateSequenceComponentTypes::Get'::__l2::
_dynamic_atexit_destructor_for__GTemplateSequenceComponentTypes__(void)

{
  ::operator_delete(GTemplateSequenceComponentTypes.Ptr,8);
  return;
}

// `dynamic_atexit_destructor_for_'LogTemplateSequence'' @ 1504229f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTemplateSequence__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTemplateSequence);
  return;
}

