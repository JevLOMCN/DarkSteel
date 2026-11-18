// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 139

// CineCameraConfigSection'' @ 1410a5dc0

void __cdecl `dynamic_initializer_for_'UCineCameraSettings::CineCameraConfigSection__(void)

{
  ::FString::FString(&UCineCameraSettings::CineCameraConfigSection,
                     L"/Script/CinematicCamera.CineCameraComponent");
  atexit(`dynamic_atexit_destructor_for_'UCineCameraSettings::CineCameraConfigSection__);
  return;
}

// PositionCurve'' @ 1410a5df0

void __cdecl `dynamic_initializer_for_'FSpline::PositionCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::PositionCurve__);
  return;
}

// RotationCurve'' @ 1410a5e10

void __cdecl `dynamic_initializer_for_'FSpline::RotationCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::RotationCurve__);
  return;
}

// ScaleCurve'' @ 1410a5e30

void __cdecl `dynamic_initializer_for_'FSpline::ScaleCurve__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSpline::ScaleCurve__);
  return;
}

// `dynamic_initializer_for_'DebugFocusPointOutlineColor'' @ 1410a5e50

void __cdecl _dynamic_initializer_for__DebugFocusPointOutlineColor__(void)

{
  DebugFocusPointOutlineColor = FColor::Black;
  return;
}

// `dynamic_initializer_for_'DebugLookatTrackingPointOutlineColor'' @ 1410a5e70

void __cdecl _dynamic_initializer_for__DebugLookatTrackingPointOutlineColor__(void)

{
  DebugLookatTrackingPointOutlineColor = FColor::Black;
  return;
}

// `dynamic_initializer_for_'LogSpline'' @ 1410a5e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_initializer_for__LogSpline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSpline,L"LogSpline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpline__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCinematicCamera'' @ 1410a5ed0

void __cdecl _dynamic_initializer_for__ModuleRegistrantCinematicCamera__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CinematicCamera";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CinematicCamera",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCinematicCameraModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 1410a5f20

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h__Script_CinematicCamera_4241123208'' @ 1410a5fb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h__Script_CinematicCamera_4241123208__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CinematicCamera",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h__Script_CinematicCamera_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h__Script_CinematicCamera_2427840110'' @ 1410a5ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h__Script_CinematicCamera_2427840110__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CinematicCamera",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h__Script_CinematicCamera_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h__Script_CinematicCamera_3139255484'' @ 1410a6030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h__Script_CinematicCamera_3139255484__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CinematicCamera",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h__Script_CinematicCamera_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h__Script_CinematicCamera_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h__Script_CinematicCamera_1915367303'' @ 1410a6080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h__Script_CinematicCamera_1915367303__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CinematicCamera",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h__Script_CinematicCamera_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h__Script_CinematicCamera_3045263282'' @ 1410a60c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h__Script_CinematicCamera_3045263282__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CinematicCamera",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h__Script_CinematicCamera_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h__Script_CinematicCamera_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h__Script_CinematicCamera_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CinematicCamera'' @ 1410a6110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CinematicCamera__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x6fc6b3f8;
  local_res8[0].DeclarationsHash = 0x8b102b21;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CinematicCamera,L"/Script/CinematicCamera",
             &Z_Registration_Info_UPackage__Script_CinematicCamera,local_res8);
  return;
}

// Z_Construct_UClass_UCineCameraSettings_NoRegister @ 146ab1800

UClass * __cdecl Z_Construct_UClass_UCineCameraSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraSettings",
               &Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton,
               UCineCameraSettings::StaticRegisterNativesUCineCameraSettings,0xb0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UCineCameraSettings>,
               InternalVTableHelperCtorCaller<UCineCameraSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCineCameraSettings.InnerSingleton;
}

// Z_Construct_UPackage__Script_CinematicCamera @ 146ab1ce0

UPackage * __cdecl Z_Construct_UPackage__Script_CinematicCamera(void)

{
  if (Z_Registration_Info_UPackage__Script_CinematicCamera.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CinematicCamera.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CinematicCamera.OuterSingleton;
}

// Z_Construct_UClass_ACameraRig_Crane @ 146ab1de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ACameraRig_Crane(void)

{
  if (Z_Registration_Info_UClass_ACameraRig_Crane.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ACameraRig_Crane.OuterSingleton,
               &Z_Construct_UClass_ACameraRig_Crane_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ACameraRig_Crane.OuterSingleton;
}

// NewProp_bLockMountPitch_SetBit @ 146ab1e20

void __cdecl
Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 1;
  return;
}

// NewProp_bLockMountYaw_SetBit @ 146ab1e30

void __cdecl
Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2cd) = 1;
  return;
}

// Z_Construct_UClass_UCineCameraSettings @ 146ab2040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCineCameraSettings(void)

{
  if (Z_Registration_Info_UClass_UCineCameraSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCineCameraSettings.OuterSingleton,
               &Z_Construct_UClass_UCineCameraSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCineCameraSettings.OuterSingleton;
}

// Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod @ 146ab2080

UEnum * __cdecl Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod(void)

{
  if (Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton,
               &Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCameraTrackingFocusSettings @ 146ab20c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraTrackingFocusSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraTrackingFocusSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraTrackingFocusSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraTrackingFocusSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraTrackingFocusSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNamedPlateCropPreset @ 146ab2140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamedPlateCropPreset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamedPlateCropPreset.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamedPlateCropPreset.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamedPlateCropPreset.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FNamedPlateCropPreset.InnerSingleton;
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

// NewStructOps @ 146ab21c0

void * __cdecl Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraFilmbackSettings,&UE::CoreUObject::Private::Construct<FCameraFilmbackSettings>,&UE::CoreUObject::Private::ConstructForTests<FCameraFilmbackSettings>,&UE::CoreUObject::Private::Destruct<FCameraFilmbackSettings>,&UE::CoreUObject::Private::Copy<FCameraFilmbackSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146ab2200

void * __cdecl Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamedFilmbackPreset,&UE::CoreUObject::Private::Construct<FNamedFilmbackPreset>,&UE::CoreUObject::Private::ConstructForTests<FNamedFilmbackPreset>,&UE::CoreUObject::Private::Destruct<FNamedFilmbackPreset>,&UE::CoreUObject::Private::Copy<FNamedFilmbackPreset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146ab2300

void * __cdecl Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraLensSettings,&UE::CoreUObject::Private::Construct<FCameraLensSettings>,&UE::CoreUObject::Private::ConstructForTests<FCameraLensSettings>,&UE::CoreUObject::Private::Destruct<FCameraLensSettings>,&UE::CoreUObject::Private::Copy<FCameraLensSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCineCameraComponent_NoRegister @ 146ab23d0

UClass * __cdecl Z_Construct_UClass_UCineCameraComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraComponent",
               &Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton,
               UCineCameraComponent::StaticRegisterNativesUCineCameraComponent,0xbd0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCineCameraComponent>,
               InternalVTableHelperCtorCaller<UCineCameraComponent>,local_res8,
               UCameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton;
}

// NewStructOps @ 146ab2490

void * __cdecl Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamedLensPreset,&UE::CoreUObject::Private::Construct<FNamedLensPreset>,&UE::CoreUObject::Private::ConstructForTests<FNamedLensPreset>,&UE::CoreUObject::Private::Destruct<FNamedLensPreset>,&UE::CoreUObject::Private::Copy<FNamedLensPreset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146ab2590

void * __cdecl Z_Construct_UScriptStruct_FPlateCropSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPlateCropSettings,&UE::CoreUObject::Private::Construct<FPlateCropSettings>,&UE::CoreUObject::Private::ConstructForTests<FPlateCropSettings>,&UE::CoreUObject::Private::Destruct<FPlateCropSettings>,&UE::CoreUObject::Private::Copy<FPlateCropSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146ab25d0

void * __cdecl Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamedPlateCropPreset,&UE::CoreUObject::Private::Construct<FNamedPlateCropPreset>,&UE::CoreUObject::Private::ConstructForTests<FNamedPlateCropPreset>,&UE::CoreUObject::Private::Destruct<FNamedPlateCropPreset>,&UE::CoreUObject::Private::Copy<FNamedPlateCropPreset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ACineCameraActor @ 146ab2610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ACineCameraActor(void)

{
  if (Z_Registration_Info_UClass_ACineCameraActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ACineCameraActor.OuterSingleton,
               &Z_Construct_UClass_ACineCameraActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ACineCameraActor.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCameraLookatTrackingSettings @ 146ab2650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraLookatTrackingSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraLookatTrackingSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraLookatTrackingSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraLookatTrackingSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraLookatTrackingSettings.InnerSingleton;
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

// NewProp_bEnableLookAtTracking_SetBit @ 146ab26d0

void __cdecl
Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::
NewProp_bEnableLookAtTracking_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return;
}

// NewProp_bDrawDebugLookAtTrackingPosition_SetBit @ 146ab26e0

void __cdecl
Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::
NewProp_bDrawDebugLookAtTrackingPosition_SetBit(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 2;
  return;
}

// NewProp_bAllowRoll_SetBit @ 146ab26f0

void __cdecl
Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x68) = *(byte *)((longlong)param_1 + 0x68) | 1;
  return;
}

// NewStructOps @ 146ab2700

void * __cdecl Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraLookatTrackingSettings,&UE::CoreUObject::Private::Construct<FCameraLookatTrackingSettings>,&UE::CoreUObject::Private::ConstructForTests<FCameraLookatTrackingSettings>,&UE::CoreUObject::Private::Destruct<FCameraLookatTrackingSettings>,&UE::CoreUObject::Private::Copy<FCameraLookatTrackingSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ECameraFocusMethod_StaticEnum @ 146ab2810

UEnum * __cdecl ECameraFocusMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod,(UObject *)pUVar1,
                       L"ECameraFocusMethod");
  }
  return Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton;
}

// NewProp_bDrawDebugTrackingFocusPoint_SetBit @ 146ab2850

void __cdecl
Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::
NewProp_bDrawDebugTrackingFocusPoint_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) | 1;
  return;
}

// NewStructOps @ 146ab2860

void * __cdecl Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraTrackingFocusSettings,&UE::CoreUObject::Private::Construct<FCameraTrackingFocusSettings>,&UE::CoreUObject::Private::ConstructForTests<FCameraTrackingFocusSettings>,&UE::CoreUObject::Private::Destruct<FCameraTrackingFocusSettings>,&UE::CoreUObject::Private::Copy<FCameraTrackingFocusSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent @ 146ab28a0

UFunction * __cdecl Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSmoothFocusChanges_SetBit @ 146ab28e0

void __cdecl
Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) | 1;
  return;
}

// NewStructOps @ 146ab28f0

void * __cdecl Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraFocusSettings,&UE::CoreUObject::Private::Construct<FCameraFocusSettings>,&UE::CoreUObject::Private::ConstructForTests<FCameraFocusSettings>,&UE::CoreUObject::Private::Destruct<FCameraFocusSettings>,&UE::CoreUObject::Private::Copy<FCameraFocusSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ECameraExposureMethod_StaticEnum @ 146ab2930

UEnum * __cdecl ECameraExposureMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraExposureMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UEnum_ECameraExposureMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraExposureMethod,(UObject *)pUVar1,
                       L"ECameraExposureMethod");
  }
  return Z_Registration_Info_UEnum_ECameraExposureMethod.OuterSingleton;
}

// Z_Construct_UClass_UCineCameraComponent @ 146ab2a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCineCameraComponent(void)

{
  if (Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton,
               &Z_Construct_UClass_UCineCameraComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton;
}

// Z_Construct_UEnum_CinematicCamera_ECameraExposureMethod @ 146ab2aa0

UEnum * __cdecl Z_Construct_UEnum_CinematicCamera_ECameraExposureMethod(void)

{
  if (Z_Registration_Info_UEnum_ECameraExposureMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraExposureMethod.InnerSingleton,
               &Z_Construct_UEnum_CinematicCamera_ECameraExposureMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraExposureMethod.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCameraFilmbackSettings @ 146ab2ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraFilmbackSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraFilmbackSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraFilmbackSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraFilmbackSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraFilmbackSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraFocusSettings @ 146ab2b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraFocusSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraFocusSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraFocusSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraFocusSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCameraFocusSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraLensSettings @ 146ab2be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraLensSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraLensSettings.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraLensSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraLensSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraLensSettings.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCameraLensSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNamedFilmbackPreset @ 146ab2c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamedFilmbackPreset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamedFilmbackPreset.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamedFilmbackPreset.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamedFilmbackPreset.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNamedFilmbackPreset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNamedLensPreset @ 146ab2ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamedLensPreset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamedLensPreset.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamedLensPreset.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamedLensPreset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamedLensPreset.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNamedLensPreset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPlateCropSettings @ 146ab2d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlateCropSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPlateCropSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPlateCropSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPlateCropSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPlateCropSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPlateCropSettings.InnerSingleton;
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

// Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings @ 146ab2ea0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ab2ee0

void __cdecl
Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName @ 146ab2ef0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName @ 146ab2f30

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName @ 146ab2f70

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames @ 146ab2fb0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName @ 146ab2ff0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ab3030

void __cdecl
Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName @ 146ab3040

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy @ 146ab3080

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames @ 146ab30c0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView @ 146ab3100

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ab3140

void __cdecl
Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName @ 146ab3150

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetHorizontalProjectionOffset @ 146ab3190

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetHorizontalProjectionOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetHorizontalProjectionOffset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName @ 146ab31d0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames @ 146ab3210

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy @ 146ab3300

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_SetCropPresets @ 146ab3340

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_SetCropPresets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName @ 146ab3380

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView @ 146ab33c0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset @ 146ab3400

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_GetVerticalProjectionOffset @ 146ab3440

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_GetVerticalProjectionOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_GetVerticalProjectionOffset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength @ 146ab3480

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName @ 146ab34c0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop @ 146ab3500

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetCropSettings @ 146ab3540

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetCropSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName @ 146ab3580

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture @ 146ab35c0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets @ 146ab3600

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength @ 146ab3640

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraSettings_SetLensPresets @ 146ab3680

UFunction * __cdecl Z_Construct_UFunction_UCineCameraSettings_SetLensPresets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane @ 146ab36c0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetFilmback @ 146ab3700

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetFilmback(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName @ 146ab3860

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings @ 146ab38a0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName @ 146ab38e0

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCineCameraComponent_SetLensSettings @ 146ab3920

UFunction * __cdecl Z_Construct_UFunction_UCineCameraComponent_SetLensSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverride_CustomNearClippingPlane_SetBit @ 146ab3960

void __cdecl
Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xb5c) = *(uint *)((longlong)param_1 + 0xb5c) | 1;
  return;
}

// `scalar_deleting_destructor' @ 146ab3970

void * __thiscall
ICinematicCameraModule::_scalar_deleting_destructor_(ICinematicCameraModule *this,uint param_1)

{
  *this = (ICinematicCameraModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ab3a70

void * __thiscall
FCinematicCameraModule::_scalar_deleting_destructor_(FCinematicCameraModule *this,uint param_1)

{
  *this = (FCinematicCameraModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_ACameraRig_Rail @ 146ab3ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ACameraRig_Rail(void)

{
  if (Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton,
               &Z_Construct_UClass_ACameraRig_Rail_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton;
}

// Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent @ 146ab3af0

UFunction * __cdecl Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLockOrientationToRail_SetBit @ 146ab3b30

void __cdecl
Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 1;
  return;
}

// CastChecked<UCineCameraComponent_const_,UObject_const_> @ 146ab3c40

UCineCameraComponent * __cdecl
CastChecked<UCineCameraComponent_const_,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCineCameraComponent_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCineCameraComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCineCameraComponent *)param_1;
  }
  pFVar3 = GetTypeName<UCineCameraComponent_const_>(&local_28);
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

// CastChecked<UCineCameraComponent,UObject> @ 146ab3d00

UCineCameraComponent * __cdecl CastChecked<UCineCameraComponent,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCineCameraComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCineCameraComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCineCameraComponent *)param_1;
  }
  pFVar3 = GetTypeName<UCineCameraComponent>(&local_28);
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

// ConstructItems<FNamedFilmbackPreset,FNamedFilmbackPreset,int> @ 146ab3dc0

void __cdecl
ConstructItems<FNamedFilmbackPreset,FNamedFilmbackPreset,int>
          (void *param_1,FNamedFilmbackPreset *param_2,int param_3)

{
  undefined4 *puVar1;
  ITextData *pIVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_1 + 0x10);
    puVar4 = &(param_2->DisplayName).Flags;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar4),
                       (FString *)(puVar4 + -6));
      *plVar5 = 0;
      pIVar2 = (((FText *)(puVar4 + -2))->TextData).Reference;
      *plVar5 = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      *(uint *)(plVar5 + 1) = *puVar4;
      lVar3 = *(longlong *)(puVar4 + 4);
      plVar5[2] = *(longlong *)(puVar4 + 2);
      plVar5[3] = lVar3;
      puVar1 = puVar4 + 6;
      puVar4 = puVar4 + 0xe;
      *(undefined4 *)(plVar5 + 4) = *puVar1;
      plVar5 = plVar5 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNamedLensPreset,FNamedLensPreset,int> @ 146ab3e70

void __cdecl
ConstructItems<FNamedLensPreset,FNamedLensPreset,int>
          (void *param_1,FNamedLensPreset *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar3 + (longlong)param_2),&param_2->Name);
      uVar2 = *(undefined8 *)&(param_2->LensSettings).MinFStop;
      puVar1 = (undefined8 *)(lVar3 + 0x10 + (longlong)param_2);
      *puVar1 = *(undefined8 *)&param_2->LensSettings;
      puVar1[1] = uVar2;
      *(undefined8 *)(lVar3 + 0x20 + (longlong)param_2) =
           *(undefined8 *)&(param_2->LensSettings).MinimumFocusDistance;
      *(int *)(lVar3 + 0x28 + (longlong)param_2) = (param_2->LensSettings).DiaphragmBladeCount;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNamedPlateCropPreset,FNamedPlateCropPreset,int> @ 146ab3ee0

void __cdecl
ConstructItems<FNamedPlateCropPreset,FNamedPlateCropPreset,int>
          (void *param_1,FNamedPlateCropPreset *param_2,int param_3)

{
  FPlateCropSettings *pFVar1;
  FString *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FString *)(lVar2 + (longlong)param_2);
      FString::FString(this,&param_2->Name);
      pFVar1 = &param_2->CropSettings;
      param_2 = param_2 + 1;
      *(float *)&this[1].Data.AllocatorInstance.Data = pFVar1->AspectRatio;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FNamedFilmbackPreset,int> @ 146ab3f50

void __cdecl DestructItems<FNamedFilmbackPreset,int>(FNamedFilmbackPreset *param_1,int param_2)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->DisplayName).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pFVar2 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNamedLensPreset,int> @ 146ab3fa0

void __cdecl DestructItems<FNamedLensPreset,int>(FNamedLensPreset *param_1,int param_2)

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

// DestructItems<FNamedPlateCropPreset,int> @ 146ab3fe0

void __cdecl DestructItems<FNamedPlateCropPreset,int>(FNamedPlateCropPreset *param_1,int param_2)

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

// GetTypeName<UCineCameraComponent_const_> @ 146ab4020

FString * __cdecl GetTypeName<UCineCameraComponent_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCineCameraComponent::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UCineCameraComponent> @ 146ab4060

FString * __cdecl GetTypeName<UCineCameraComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCineCameraComponent::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<ACameraRig_Crane> @ 146ab40a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ACameraRig_Crane>(FObjectInitializer *param_1)

{
  if ((ACameraRig_Crane *)param_1->Obj != (ACameraRig_Crane *)0x0) {
    ACameraRig_Crane::ACameraRig_Crane((ACameraRig_Crane *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ACameraRig_Rail> @ 146ab40c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ACameraRig_Rail>(FObjectInitializer *param_1)

{
  if ((ACameraRig_Rail *)param_1->Obj != (ACameraRig_Rail *)0x0) {
    ACameraRig_Rail::ACameraRig_Rail((ACameraRig_Rail *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ACineCameraActor> @ 146ab40e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ACineCameraActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  int iVar2;
  ACameraActor *this;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UCameraComponent *pUVar6;
  FName local_res8;
  
  this = (ACameraActor *)param_1->Obj;
  if (this == (ACameraActor *)0x0) {
    return;
  }
  pFVar4 = FName::FName(&local_res8,L"CameraComponent");
  FVar3 = *pFVar4;
  pUVar5 = UCineCameraComponent::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar3);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar3,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  ACameraActor::ACameraActor(this,param_1);
  this->_padding_ = (longlong)&___7ACineCameraActor__6B_;
  FCameraLookatTrackingSettings::FCameraLookatTrackingSettings
            ((FCameraLookatTrackingSettings *)(this + 1));
  pUVar6 = (this->CameraComponent).field0_0x0.DebugPtr;
  if (pUVar6 != (UCameraComponent *)0x0) {
    pUVar5 = UCineCameraComponent::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) goto LAB_146ab4194;
  }
  pUVar6 = (UCameraComponent *)0x0;
LAB_146ab4194:
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this[1]._padding_ = (longlong)pUVar6;
  AActor::SetActorTickEnabled((AActor *)this,true);
  return;
}

// InternalConstructor<UCineCameraComponent> @ 146ab41c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl InternalConstructor<UCineCameraComponent>(FObjectInitializer *param_1)

{
  UCineCameraComponent *this;
  UObject *pUVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FObjectInitializer *pFVar5;
  UClass *this_00;
  
  this = (UCineCameraComponent *)param_1->Obj;
  if (this == (UCineCameraComponent *)0x0) {
    return;
  }
  pFVar5 = FObjectInitializer::Get();
  UCameraComponent::UCameraComponent((UCameraComponent *)this,pFVar5);
  *(undefined ***)this = &UCineCameraComponent::_vftable__for__UObject__;
  (this->FilmbackSettings_DEPRECATED).SensorWidth = 24.89;
  *(undefined ***)&this->field_0x28 =
       &UCineCameraComponent::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 =
       &UCineCameraComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->FilmbackSettings_DEPRECATED).SensorHeight = 18.67;
  (this->FilmbackSettings_DEPRECATED).SensorHorizontalOffset = 0.0;
  (this->FilmbackSettings_DEPRECATED).SensorVerticalOffset = 0.0;
  (this->FilmbackSettings_DEPRECATED).SensorAspectRatio = 1.33;
  (this->Filmback).SensorWidth = 24.89;
  (this->Filmback).SensorHeight = 18.67;
  (this->Filmback).SensorHorizontalOffset = 0.0;
  (this->Filmback).SensorVerticalOffset = 0.0;
  (this->Filmback).SensorAspectRatio = 1.33;
  (this->LensSettings).MinFocalLength = 50.0;
  (this->LensSettings).MaxFocalLength = 50.0;
  (this->LensSettings).MinFStop = 2.0;
  (this->LensSettings).MaxFStop = 2.0;
  (this->LensSettings).MinimumFocusDistance = 15.0;
  (this->LensSettings).SqueezeFactor = 1.0;
  (this->LensSettings).DiaphragmBladeCount = 5;
  FCameraFocusSettings::FCameraFocusSettings(&this->FocusSettings);
  this->field_0x42 = this->field_0x42 | 2;
  this->field_0x9a = this->field_0x9a | 8;
  this->field_0x279 = this->field_0x279 | 1;
  (this->CropSettings).AspectRatio = 0.0;
  (this->FilmbackPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilmbackPresets).ArrayNum = 0;
  (this->FilmbackPresets).ArrayMax = 0;
  (this->LensPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LensPresets).ArrayNum = 0;
  (this->LensPresets).ArrayMax = 0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.ArrayNum = 0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.ArrayMax = 0;
  (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultFilmbackPreset).Data.ArrayNum = 0;
  (this->DefaultFilmbackPreset).Data.ArrayMax = 0;
  (this->DefaultLensPresetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLensPresetName).Data.ArrayNum = 0;
  (this->DefaultLensPresetName).Data.ArrayMax = 0;
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("CineCameraSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CinematicCamera\\Private\\CineCameraComponent.cpp"
                       ,0x31,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UCineCameraComponent::SetFilmbackPresetByNameInternal
            (this,(FString *)&pUVar1[2].field_0x10,&this->Filmback);
  UCineCameraComponent::SetFilmbackPresetByNameInternal
            (this,(FString *)&pUVar1[2].field_0x10,&this->FilmbackSettings_DEPRECATED);
  UCineCameraComponent::SetLensPresetByNameInternal(this,(FString *)&pUVar1[1].field_0x10);
  UCineCameraComponent::SetCropPresetByNameInternal(this,(FString *)&pUVar1[3].field_0x8);
  this->CurrentAperture = *(float *)&pUVar1[1].field_0x24;
  this->CurrentFocalLength = *(float *)&pUVar1[1].field_0x20;
  this->ExposureMethod = Enabled;
  UCineCameraComponent::RecalcDerivedData(this);
  fVar3 = GNearClippingPlane;
  this->bOverride_CustomNearClippingPlane = 0;
  this->CustomNearClippingPlane = fVar3;
  return;
}

// InternalConstructor<UCineCameraSettings> @ 146ab41e0

void __cdecl InternalConstructor<UCineCameraSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UCineCameraSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex = 0;
    this[2].CategoryName.Number = 0;
    this[2].SectionName.ComparisonIndex = 0;
    this[2].SectionName.Number = 0;
    this[3]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<ACameraRig_Crane> @ 146ab4260

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

UObject * __cdecl InternalVTableHelperCtorCaller<ACameraRig_Crane>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ACameraRig_Crane::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ACameraRig_Crane__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ACameraRig_Rail> @ 146ab4330

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

UObject * __cdecl InternalVTableHelperCtorCaller<ACameraRig_Rail>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ACameraRig_Rail::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ACameraRig_Rail__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ACineCameraActor> @ 146ab43f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ACineCameraActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ACameraActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ACineCameraActor::GetPrivateStaticClass();
  this = (ACameraActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ACameraActor *)0x0) {
    ACameraActor::ACameraActor(this,param_1);
    this->_padding_ = (longlong)&___7ACineCameraActor__6B_;
    FCameraLookatTrackingSettings::FCameraLookatTrackingSettings
              ((FCameraLookatTrackingSettings *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCineCameraComponent> @ 146ab44b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCineCameraComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCineCameraComponent::GetPrivateStaticClass();
  this = (UCameraComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraComponent *)0x0) {
    UCameraComponent::UCameraComponent(this,param_1);
    this->_padding_ = (longlong)&UCineCameraComponent::_vftable__for__UObject__;
    *(undefined4 *)&this[1]._padding_ = 0x41c71eb8;
    this->_padding_ = (longlong)&UCineCameraComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UCineCameraComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x41955c29;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3faa3d71;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x41c71eb8;
    this[1]._padding_ = 0x41955c29;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3faa3d71;
    *(undefined4 *)&this[1]._padding_ = 0x42480000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42480000;
    *(undefined4 *)&this[1]._padding_ = 0x40000000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined4 *)&this[1]._padding_ = 0x41700000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 5;
    FCameraFocusSettings::FCameraFocusSettings((FCameraFocusSettings *)&this[1]._padding_);
    *(undefined4 *)&this[1]._padding_ = 0;
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
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCineCameraSettings> @ 146ab4660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCineCameraSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCineCameraSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UCineCameraSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CategoryName.ComparisonIndex = 0;
    this[1].CategoryName.Number = 0;
    this[1].SectionName.ComparisonIndex = 0;
    this[1].SectionName.Number = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].CategoryName.ComparisonIndex = 0;
    this[2].CategoryName.Number = 0;
    this[2].SectionName.ComparisonIndex = 0;
    this[2].SectionName.Number = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_ECameraExposureMethod> @ 146ab4760

UEnum * __cdecl StaticEnum<enum_ECameraExposureMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraExposureMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UEnum_ECameraExposureMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraExposureMethod,(UObject *)pUVar1,
                       L"ECameraExposureMethod");
  }
  return Z_Registration_Info_UEnum_ECameraExposureMethod.OuterSingleton;
}

// StaticEnum<enum_ECameraFocusMethod> @ 146ab47a0

UEnum * __cdecl StaticEnum<enum_ECameraFocusMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod,(UObject *)pUVar1,
                       L"ECameraFocusMethod");
  }
  return Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146ab5704

/* [thunk]:public: virtual void * __ptr64 __cdecl UCineCameraComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCineCameraComponent::_vector_deleting_destructor__adjustor_40__
          (UCineCameraComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCineCameraComponent *)&this[-1].DefaultFilmbackPreset.Data.ArrayNum,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146ab5720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ACameraRig_Crane::_scalar_deleting_destructor_(ACameraRig_Crane *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ACameraRig_Crane__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ab5780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ACameraRig_Rail::_scalar_deleting_destructor_(ACameraRig_Rail *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ACameraRig_Rail__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ab57e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ACineCameraActor::_scalar_deleting_destructor_(ACineCameraActor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ACineCameraActor__6B_;
  pvVar1 = *(void **)&(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  ACameraActor::~ACameraActor((ACameraActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xae0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ab5860

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UCineCameraComponent::_scalar_deleting_destructor_(UCineCameraComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->DefaultLensPresetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFilmbackPresetName_DEPRECATED).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNamedLensPreset,int>
            ((FNamedLensPreset *)(this->LensPresets).AllocatorInstance.Data,
             (this->LensPresets).ArrayNum);
  pFVar1 = (this->LensPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNamedFilmbackPreset,int>
            ((FNamedFilmbackPreset *)(this->FilmbackPresets).AllocatorInstance.Data,
             (this->FilmbackPresets).ArrayNum);
  pFVar1 = (this->FilmbackPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->FocusSettings).TrackingFocusSettings.ActorToTrack.SoftObjectPtr.
                      field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UCameraComponent::~UCameraComponent((UCameraComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xbd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ab5970

void * __thiscall
UCineCameraSettings::_scalar_deleting_destructor_(UCineCameraSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCineCameraSettings__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Notification).SharedReferenceCount.ReferenceController);
  DestructItems<FNamedPlateCropPreset,int>
            ((FNamedPlateCropPreset *)(this->CropPresets).AllocatorInstance.Data,
             (this->CropPresets).ArrayNum);
  pFVar1 = (this->CropPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultCropPresetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNamedFilmbackPreset,int>
            ((FNamedFilmbackPreset *)(this->FilmbackPresets).AllocatorInstance.Data,
             (this->FilmbackPresets).ArrayNum);
  pFVar1 = (this->FilmbackPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNamedLensPreset,int>
            ((FNamedLensPreset *)(this->LensPresets).AllocatorInstance.Data,
             (this->LensPresets).ArrayNum);
  pFVar1 = (this->LensPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultLensPresetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCameraRig_Crane @ 146ab6540

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRig_Crane(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRig_Rail @ 146ab6550

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRig_Rail(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCineCameraActor @ 146ab6560

void __cdecl EmptyLinkFunctionForGeneratedCodeCineCameraActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCineCameraComponent @ 146ab6570

void __cdecl EmptyLinkFunctionForGeneratedCodeCineCameraComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCineCameraSettings @ 146ab6580

void __cdecl EmptyLinkFunctionForGeneratedCodeCineCameraSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCinematicCamera_init @ 146ab6590

void __cdecl EmptyLinkFunctionForGeneratedCodeCinematicCamera_init(void)

{
  return;
}

// Z_Construct_UClass_ACameraRig_Crane_NoRegister @ 146aba2c0

UClass * __cdecl Z_Construct_UClass_ACameraRig_Crane_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CameraRig_Crane",
               &Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton,
               ACameraRig_Crane::StaticRegisterNativesACameraRig_Crane,0x2f0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACameraRig_Crane>,
               InternalVTableHelperCtorCaller<ACameraRig_Crane>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton;
}

// Z_Construct_UClass_ACameraRig_Rail_NoRegister @ 146aba380

UClass * __cdecl Z_Construct_UClass_ACameraRig_Rail_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CameraRig_Rail",
               &Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton,
               ACameraRig_Rail::StaticRegisterNativesACameraRig_Rail,0x2e0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACameraRig_Rail>,InternalVTableHelperCtorCaller<ACameraRig_Rail>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraRig_Rail.InnerSingleton;
}

// Z_Construct_UClass_ACineCameraActor_NoRegister @ 146aba440

UClass * __cdecl Z_Construct_UClass_ACineCameraActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraActor",
               &Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton,
               ACineCameraActor::StaticRegisterNativesACineCameraActor,0xae0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACineCameraActor>,
               InternalVTableHelperCtorCaller<ACineCameraActor>,local_res8,ACameraActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton;
}

// IMPLEMENT_MODULE_CinematicCamera @ 146abcbd0

void __cdecl IMPLEMENT_MODULE_CinematicCamera(void)

{
  return;
}

// CineCameraConfigSection'' @ 1503ddb20

void __cdecl `dynamic_atexit_destructor_for_'UCineCameraSettings::CineCameraConfigSection__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UCineCameraSettings::CineCameraConfigSection.Data.AllocatorInstance.Data;
  if (UCineCameraSettings::CineCameraConfigSection.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UCineCameraSettings::CineCameraConfigSection.Data.AllocatorInstance.Data !=
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

// PositionCurve'' @ 1503ddb40

void __cdecl `dynamic_atexit_destructor_for_'FSpline::PositionCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::PositionCurve._0_8_;
  if (FSpline::PositionCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::PositionCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// RotationCurve'' @ 1503ddb60

void __cdecl `dynamic_atexit_destructor_for_'FSpline::RotationCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::RotationCurve._0_8_;
  if (FSpline::RotationCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::RotationCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// ScaleCurve'' @ 1503ddb80

void __cdecl `dynamic_atexit_destructor_for_'FSpline::ScaleCurve__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FSpline::ScaleCurve._0_8_;
  if (FSpline::ScaleCurve._0_8_ == 0) {
    return;
  }
  if (FSpline::ScaleCurve._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogSpline'' @ 1503ddba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Geometry::Spline::_dynamic_atexit_destructor_for__LogSpline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpline);
  return;
}

