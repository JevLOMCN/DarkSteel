// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 187

// UnitVectors'' @ 1413dfc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FOpenCVHelper::UnitVectors__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  
  uVar6 = _UNK_1508ffb28;
  uVar5 = ___xmm_bff00000000000000000000000000000;
  uVar4 = _UNK_15076c6f8;
  uVar3 = ___xmm_bff00000000000003ff0000000000000;
  uVar2 = _UNK_150689518;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,6,0,&FOpenCVHelper::UnitVectors.AllocatorInstance,6,
             &FOpenCVHelper::UnitVectors.ArrayMax);
  FVar7 = FOpenCVHelper::UnitVectors.AllocatorInstance;
  *(undefined8 *)FOpenCVHelper::UnitVectors.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(FVar7.Data + 8) = uVar2;
  *(undefined8 *)(FVar7.Data + 0x10) = 0;
  *(undefined8 *)(FVar7.Data + 0x18) = 0;
  *(undefined8 *)(FVar7.Data + 0x20) = uVar1;
  *(undefined8 *)(FVar7.Data + 0x28) = uVar2;
  *(undefined8 *)(FVar7.Data + 0x30) = 0;
  *(undefined8 *)(FVar7.Data + 0x38) = 0;
  *(undefined8 *)(FVar7.Data + 0x40) = uVar3;
  *(undefined8 *)(FVar7.Data + 0x48) = uVar4;
  *(undefined8 *)(FVar7.Data + 0x50) = 0;
  *(undefined8 *)(FVar7.Data + 0x58) = 0;
  *(undefined8 *)(FVar7.Data + 0x60) = uVar5;
  *(undefined8 *)(FVar7.Data + 0x68) = uVar6;
  *(undefined8 *)(FVar7.Data + 0x70) = 0;
  *(undefined8 *)(FVar7.Data + 0x78) = 0;
  *(undefined8 *)(FVar7.Data + 0x80) = uVar5;
  *(undefined8 *)(FVar7.Data + 0x88) = uVar6;
  atexit(`dynamic_atexit_destructor_for_'FOpenCVHelper::UnitVectors__);
  return;
}

// `dynamic_initializer_for_'AutoDetect'' @ 1413dfd80

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__AutoDetect__(void)

{
  ::FName::FName(&AutoDetect,"AutoDetect");
  return;
}

// `dynamic_initializer_for_'CVarMediaUtilsStartupProfile'' @ 1413dfda0

void __cdecl _dynamic_initializer_for__CVarMediaUtilsStartupProfile__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarMediaUtilsStartupProfile,L"MediaUtils.StartupProfile",&local_18,
             L"Startup Media Profile\n",4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarMediaUtilsStartupProfile__);
  return;
}

// `dynamic_initializer_for_'DefaultMediaProxyOutputName'' @ 1413dfe10

void __cdecl MediaProfileSettings::_dynamic_initializer_for__DefaultMediaProxyOutputName__(void)

{
  ::FString::FString(&DefaultMediaProxyOutputName,L"DefaultMediaProxyOutput");
  atexit(_dynamic_atexit_destructor_for__DefaultMediaProxyOutputName__);
  return;
}

// `dynamic_initializer_for_'DefaultMediaProxySourceName'' @ 1413dfe40

void __cdecl MediaProfileSettings::_dynamic_initializer_for__DefaultMediaProxySourceName__(void)

{
  ::FString::FString(&DefaultMediaProxySourceName,L"DefaultMediaProxySource");
  atexit(_dynamic_atexit_destructor_for__DefaultMediaProxySourceName__);
  return;
}

// `dynamic_initializer_for_'DefaultMediaTextureName'' @ 1413dfe70

void __cdecl MediaProfilePlaybackManager::_dynamic_initializer_for__DefaultMediaTextureName__(void)

{
  ::FString::FString(&DefaultMediaTextureName,L"MediaProfileTexture");
  atexit(_dynamic_atexit_destructor_for__DefaultMediaTextureName__);
  return;
}

// `dynamic_initializer_for_'DefaultMediaTexturesPath'' @ 1413dfea0

void __cdecl MediaProfilePlaybackManager::_dynamic_initializer_for__DefaultMediaTexturesPath__(void)

{
  ::FString::FString(&DefaultMediaTexturesPath,L"/MediaFrameworkUtilities/DefaultMediaTextures");
  atexit(_dynamic_atexit_destructor_for__DefaultMediaTexturesPath__);
  return;
}

// `dynamic_initializer_for_'DefaultProxiesPath'' @ 1413dfed0

void __cdecl MediaProfileSettings::_dynamic_initializer_for__DefaultProxiesPath__(void)

{
  ::FString::FString(&DefaultProxiesPath,L"/MediaFrameworkUtilities/DefaultProxies");
  atexit(_dynamic_atexit_destructor_for__DefaultProxiesPath__);
  return;
}

// `dynamic_initializer_for_'FailedTextureName'' @ 1413dff00

void __cdecl MediaBundleMaterialParametersName::_dynamic_initializer_for__FailedTextureName__(void)

{
  ::FName::FName(&FailedTextureName,"FailedTexture");
  return;
}

// `dynamic_initializer_for_'FrameDelay'' @ 1413dff20

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__FrameDelay__(void)

{
  ::FName::FName(&FrameDelay,"FrameDelay");
  return;
}

// `dynamic_initializer_for_'GarbageMatteTextureName'' @ 1413dff40

void __cdecl
MediaBundleMaterialParametersName::_dynamic_initializer_for__GarbageMatteTextureName__(void)

{
  ::FName::FName(&GarbageMatteTextureName,"GarbageMatteTexture");
  return;
}

// `dynamic_initializer_for_'IsValidMediaName'' @ 1413dff60

void __cdecl MediaBundleMaterialParametersName::_dynamic_initializer_for__IsValidMediaName__(void)

{
  ::FName::FName(&IsValidMediaName,"IsValid");
  return;
}

// `dynamic_initializer_for_'LensDisplacementMapTextureName'' @ 1413dff80

void __cdecl
MediaBundleMaterialParametersName::_dynamic_initializer_for__LensDisplacementMapTextureName__(void)

{
  ::FName::FName(&LensDisplacementMapTextureName,"UVDisplacementMapTexture");
  return;
}

// `dynamic_initializer_for_'LogMediaFrameworkUtilities'' @ 1413dffa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMediaFrameworkUtilities__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMediaFrameworkUtilities,L"LogMediaFrameworkUtilities",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMediaFrameworkUtilities__);
  return;
}

// `dynamic_initializer_for_'MediaTextureName'' @ 1413dffe0

void __cdecl MediaBundleMaterialParametersName::_dynamic_initializer_for__MediaTextureName__(void)

{
  ::FName::FName(&MediaTextureName,"MediaTexture");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMediaFrameworkUtilities'' @ 1413e0000

void __cdecl _dynamic_initializer_for__ModuleRegistrantMediaFrameworkUtilities__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MediaFrameworkUtilities";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MediaFrameworkUtilities",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FMediaFrameworkUtilitiesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'TimeDelay'' @ 1413e0050

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__TimeDelay__(void)

{
  ::FName::FName(&TimeDelay,"TimeDelay");
  return;
}

// `dynamic_initializer_for_'UseTimeSynchronizatioOption'' @ 1413e0070

void __cdecl TimeSynchronizableMedia::_dynamic_initializer_for__UseTimeSynchronizatioOption__(void)

{
  ::FName::FName(&UseTimeSynchronizatioOption,"UseTimeSynchronization");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h__Script_MediaFrameworkUtilities_1204273902'' @ 1413e0090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h__Script_MediaFrameworkUtilities_1204273902__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h__Script_MediaFrameworkUtilities_470668107'' @ 1413e00d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h__Script_MediaFrameworkUtilities_470668107__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleActorBase_h__Script_MediaFrameworkUtilities_2325669483'' @ 1413e0110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleActorBase_h__Script_MediaFrameworkUtilities_2325669483__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleActorBase_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleTimeSynchronizationSource_h__Script_MediaFrameworkUtilities_772834567'' @ 1413e0150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleTimeSynchronizationSource_h__Script_MediaFrameworkUtilities_772834567__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleTimeSynchronizationSource_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h__Script_MediaFrameworkUtilities_2271974707'' @ 1413e0190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h__Script_MediaFrameworkUtilities_2271974707__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h__Script_MediaFrameworkUtilities_2808230253'' @ 1413e01d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h__Script_MediaFrameworkUtilities_2808230253__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileBlueprintLibrary_h__Script_MediaFrameworkUtilities_1062651854'' @ 1413e0210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileBlueprintLibrary_h__Script_MediaFrameworkUtilities_1062651854__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileBlueprintLibrary_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfilePlaybackManager_h__Script_MediaFrameworkUtilities_4162208841'' @ 1413e0250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfilePlaybackManager_h__Script_MediaFrameworkUtilities_4162208841__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfilePlaybackManager_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h__Script_MediaFrameworkUtilities_975717'' @ 1413e0290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h__Script_MediaFrameworkUtilities_975717__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileSettings_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h__Script_MediaFrameworkUtilities_2290811896'' @ 1413e02d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h__Script_MediaFrameworkUtilities_2290811896__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaFrameworkUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h__Script_MediaFrameworkUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MediaFrameworkUtilities'' @ 1413e0310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MediaFrameworkUtilities__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa4082ccc;
  local_res8[0].DeclarationsHash = 0x31225256;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MediaFrameworkUtilities,L"/Script/MediaFrameworkUtilities"
             ,&Z_Registration_Info_UPackage__Script_MediaFrameworkUtilities,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14d7ca380

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMediaFrameworkUtilitiesModule::ApplyStartupMediaProfile'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UMediaProfile @ 14d7ca3b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaProfile(void)

{
  if (Z_Registration_Info_UClass_UMediaProfile.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaProfile.OuterSingleton,
               &Z_Construct_UClass_UMediaProfile_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaProfile.OuterSingleton;
}

// Z_Construct_UClass_UMediaProfilePlaybackManager_NoRegister @ 14d7ca3f0

UClass * __cdecl Z_Construct_UClass_UMediaProfilePlaybackManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfilePlaybackManager",
               &Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton,
               UMediaProfilePlaybackManager::StaticRegisterNativesUMediaProfilePlaybackManager,0x1b0
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaProfilePlaybackManager>,
               InternalVTableHelperCtorCaller<UMediaProfilePlaybackManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfilePlaybackManager.InnerSingleton;
}

// NewProp_bOverrideTimecodeProvider_SetBit @ 14d7ca4a0

void __cdecl
Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideTimecodeProvider_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewProp_bOverrideCustomTimeStep_SetBit @ 14d7ca4b0

void __cdecl
Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideCustomTimeStep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UClass_UMediaProfileBlueprintLibrary @ 14d7ca580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaProfileBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UClass_UProxyMediaOutput_NoRegister @ 14d7ca5c0

UClass * __cdecl Z_Construct_UClass_UProxyMediaOutput_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"ProxyMediaOutput",
               &Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton,
               UProxyMediaOutput::StaticRegisterNativesUProxyMediaOutput,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UProxyMediaOutput>,
               InternalVTableHelperCtorCaller<UProxyMediaOutput>,local_res8,
               UMediaOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton;
}

// Z_Construct_UClass_UProxyMediaSource_NoRegister @ 14d7ca680

UClass * __cdecl Z_Construct_UClass_UProxyMediaSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"ProxyMediaSource",
               &Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton,
               UProxyMediaSource::StaticRegisterNativesUProxyMediaSource,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UProxyMediaSource>,
               InternalVTableHelperCtorCaller<UProxyMediaSource>,local_res8,
               UMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton;
}

// Z_Construct_UClass_UProxyMediaSource @ 14d7ca800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProxyMediaSource(void)

{
  if (Z_Registration_Info_UClass_UProxyMediaSource.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProxyMediaSource.OuterSingleton,
               &Z_Construct_UClass_UProxyMediaSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProxyMediaSource.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d7ca840

void __cdecl
Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UProxyMediaSource_IsProxyValid @ 14d7ca850

UFunction * __cdecl Z_Construct_UFunction_UProxyMediaSource_IsProxyValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy @ 14d7ca890

UFunction * __cdecl Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14d7ca8d0

void * __thiscall
IMediaFrameworkUtilitiesModule::_scalar_deleting_destructor_
          (IMediaFrameworkUtilitiesModule *this,uint param_1)

{
  *this = (IMediaFrameworkUtilitiesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy @ 14d7ca910

UFunction * __cdecl Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile @ 14d7ca950

UFunction * __cdecl Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile @ 14d7ca990

UFunction * __cdecl Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMediaBundle_NoRegister @ 14d7caa80

UClass * __cdecl Z_Construct_UClass_UMediaBundle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBundle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundle",
               &Z_Registration_Info_UClass_UMediaBundle.InnerSingleton,
               UMediaBundle::StaticRegisterNativesUMediaBundle,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaBundle>,
               InternalVTableHelperCtorCaller<UMediaBundle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBundle.InnerSingleton;
}

// Z_Construct_UClass_UMediaBundle @ 14d7cabe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaBundle(void)

{
  if (Z_Registration_Info_UClass_UMediaBundle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaBundle.OuterSingleton,
               &Z_Construct_UClass_UMediaBundle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaBundle.OuterSingleton;
}

// Z_Construct_UPackage__Script_MediaFrameworkUtilities @ 14d7cac20

UPackage * __cdecl Z_Construct_UPackage__Script_MediaFrameworkUtilities(void)

{
  if (Z_Registration_Info_UPackage__Script_MediaFrameworkUtilities.OuterSingleton == (UPackage *)0x0
     ) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MediaFrameworkUtilities.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MediaFrameworkUtilities.OuterSingleton;
}

// Z_Construct_UClass_UMediaProfilePlaybackManager @ 14d7cac60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaProfilePlaybackManager(void)

{
  if (Z_Registration_Info_UClass_UMediaProfilePlaybackManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaProfilePlaybackManager.OuterSingleton,
               &Z_Construct_UClass_UMediaProfilePlaybackManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaProfilePlaybackManager.OuterSingleton;
}

// Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture @ 14d7caca0

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBundle_GetMaterial @ 14d7cace0

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_GetMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBundle_GetMediaPlayer @ 14d7cad20

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_GetMediaPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBundle_GetMediaSource @ 14d7cad60

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_GetMediaSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBundle_GetMediaTexture @ 14d7cae50

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_GetMediaTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo @ 14d7cae90

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBundle_OnMediaClosed @ 14d7caed0

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_OnMediaClosed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UMediaBundle_OnMediaClosed_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed @ 14d7caf10

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened @ 14d7caf50

UFunction * __cdecl Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLoopMediaSource_SetBit @ 14d7caf90

void __cdecl Z_Construct_UClass_UMediaBundle_Statics::NewProp_bLoopMediaSource_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bReopenSourceOnError_SetBit @ 14d7cafa0

void __cdecl
Z_Construct_UClass_UMediaBundle_Statics::NewProp_bReopenSourceOnError_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UClass_AMediaBundleActorBase @ 14d7cb120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AMediaBundleActorBase(void)

{
  if (Z_Registration_Info_UClass_AMediaBundleActorBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AMediaBundleActorBase.OuterSingleton,
               &Z_Construct_UClass_AMediaBundleActorBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AMediaBundleActorBase.OuterSingleton;
}

// Z_Construct_UClass_UMediaProfileEditorSettings @ 14d7cb160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaProfileEditorSettings(void)

{
  if (Z_Registration_Info_UClass_UMediaProfileEditorSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaProfileEditorSettings.OuterSingleton,
               &Z_Construct_UClass_UMediaProfileEditorSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaProfileEditorSettings.OuterSingleton;
}

// Z_Construct_UClass_UMediaProfileSettings @ 14d7cb1a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaProfileSettings(void)

{
  if (Z_Registration_Info_UClass_UMediaProfileSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaProfileSettings.OuterSingleton,
               &Z_Construct_UClass_UMediaProfileSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaProfileSettings.OuterSingleton;
}

// NewProp_bApplyInCommandlet_SetBit @ 14d7cb1e0

void __cdecl
Z_Construct_UClass_UMediaProfileSettings_Statics::NewProp_bApplyInCommandlet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle @ 14d7cb1f0

UFunction * __cdecl Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource @ 14d7cb230

UFunction * __cdecl Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d7cb270

void __cdecl
Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource @ 14d7cb280

UFunction * __cdecl Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AMediaBundleActorBase_SetComponent @ 14d7cb2c0

UFunction * __cdecl Z_Construct_UFunction_AMediaBundleActorBase_SetComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAutoPlay_SetBit @ 14d7cb300

void __cdecl
Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bAutoPlay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d0) = 1;
  return;
}

// NewProp_bPlayWhileEditing_SetBit @ 14d7cb310

void __cdecl
Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bPlayWhileEditing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2d1) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14d7cb570

void * __thiscall
FMediaFrameworkUtilitiesModule::_scalar_deleting_destructor_
          (FMediaFrameworkUtilitiesModule *this,uint param_1)

{
  FMediaProfileManager::~FMediaProfileManager(&this->MediaProfileManager);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// Z_Construct_UClass_UProxyMediaOutput @ 14d7cb5c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProxyMediaOutput(void)

{
  if (Z_Registration_Info_UClass_UProxyMediaOutput.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProxyMediaOutput.OuterSingleton,
               &Z_Construct_UClass_UProxyMediaOutput_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProxyMediaOutput.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d7cb600

void __cdecl
Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid @ 14d7cb610

UFunction * __cdecl Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UMediaBundleTimeSynchronizationSource @ 14d7cb710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaBundleTimeSynchronizationSource(void)

{
  if (Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.OuterSingleton,
               &Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.OuterSingleton;
}

// Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource @ 14d7cb810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource(void)

{
  if (Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.OuterSingleton,
               &Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.OuterSingleton;
}

// Z_Construct_UClass_UMediaProfile_NoRegister @ 14d7cb850

UClass * __cdecl Z_Construct_UClass_UMediaProfile_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfile",
               &Z_Registration_Info_UClass_UMediaProfile.InnerSingleton,
               UMediaProfile::StaticRegisterNativesUMediaProfile,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaProfile>,
               InternalVTableHelperCtorCaller<UMediaProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfile.InnerSingleton;
}

// AddLambda<`FMediaFrameworkUtilitiesModule::ApplyStartupMediaProfile'::__l2::<lambda_1>_&> @ 14d7cb9b0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FMediaFrameworkUtilitiesModule::ApplyStartupMediaProfile_::__l2::<lambda_1>_&>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMediaFrameworkUtilitiesModule *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FMediaFrameworkUtilitiesModule *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__ApplyStartupMediaProfile_FMediaFrameworkUtilitiesModule__AEAAXXZ___V__6B_
    ;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FMediaFrameworkUtilitiesModule *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FMediaFrameworkUtilitiesModule *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<UMediaProfile,UObject> @ 14d7cca80

UMediaProfile * __cdecl CastChecked<UMediaProfile,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMediaProfile>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMediaProfile::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMediaProfile *)param_1;
  }
  pFVar3 = GetTypeName<UMediaProfile>(&local_28);
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

// ConstructItems<TObjectPtr<UProxyMediaOutput>,TObjectPtr<UProxyMediaOutput>,int> @ 14d7ccb40

void __cdecl
ConstructItems<TObjectPtr<UProxyMediaOutput>,TObjectPtr<UProxyMediaOutput>,int>
          (void *param_1,TObjectPtr<UProxyMediaOutput> *param_2,int param_3)

{
  TObjectPtr<UProxyMediaOutput> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UProxyMediaOutput>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UProxyMediaOutput>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UProxyMediaOutput *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UProxyMediaOutput *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UProxyMediaSource>,TObjectPtr<UProxyMediaSource>,int> @ 14d7ccba0

void __cdecl
ConstructItems<TObjectPtr<UProxyMediaSource>,TObjectPtr<UProxyMediaSource>,int>
          (void *param_1,TObjectPtr<UProxyMediaSource> *param_2,int param_3)

{
  TObjectPtr<UProxyMediaSource> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UProxyMediaSource>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UProxyMediaSource>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UProxyMediaSource *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UProxyMediaSource *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UMediaTexture>,int> @ 14d7ccc80

void __cdecl
DestructItems<TSoftObjectPtr<UMediaTexture>,int>(TSoftObjectPtr<UMediaTexture> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UProxyMediaOutput>,int> @ 14d7cccc0

void __cdecl
DestructItems<TSoftObjectPtr<UProxyMediaOutput>,int>
          (TSoftObjectPtr<UProxyMediaOutput> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UProxyMediaSource>,int> @ 14d7ccd00

void __cdecl
DestructItems<TSoftObjectPtr<UProxyMediaSource>,int>
          (TSoftObjectPtr<UProxyMediaSource> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<void___cdecl(UMediaProfilePlaybackManager_*)>,int> @ 14d7ccd40

void __cdecl
DestructItems<TFunction<void___cdecl(UMediaProfilePlaybackManager_*)>,int>
          (TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>,int> @ 14d7ccd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>,int>
          (TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>,int> @ 14d7ccdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>,int>
          (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *param_1,int param_2)

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

// GetDefault<UMediaProfileSettings> @ 14d7cdb70

UMediaProfileSettings * __cdecl GetDefault<UMediaProfileSettings>(void)

{
  UClass *this;
  
  this = UMediaProfileSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UMediaProfileSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UMediaProfileSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetTypeName<UMediaProfile> @ 14d7ce650

FString * __cdecl GetTypeName<UMediaProfile>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMediaProfile::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<AMediaBundleActorBase> @ 14d7ce690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AMediaBundleActorBase>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AMediaBundleActorBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMediaBundle> @ 14d7ce6f0

void __cdecl InternalConstructor<UMediaBundle>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMediaBundle__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0x3fe0000000000000;
    *(undefined8 *)&this[3].field_0x10 = 0x3fe0000000000000;
    *(undefined8 *)&this[5].field_0x10 = 0x3fe0000000000000;
    *(undefined8 *)&this[5].field_0x18 = 0x3fe0000000000000;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0x3ff0000000000000;
    *(undefined8 *)(this + 3) = 0x3ff0000000000000;
    this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x8 = 0x3ff0000000000000;
    this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 2;
  }
  return;
}

// InternalConstructor<UMediaBundleTimeSynchronizationSource> @ 14d7ce7f0

void __cdecl InternalConstructor<UMediaBundleTimeSynchronizationSource>(FObjectInitializer *param_1)

{
  UTimeSynchronizationSource *this;
  
  this = (UTimeSynchronizationSource *)param_1->Obj;
  if (this != (UTimeSynchronizationSource *)0x0) {
    UTimeSynchronizationSource::UTimeSynchronizationSource(this,param_1);
    this->_padding_ = (longlong)&___7UMediaBundleTimeSynchronizationSource__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].bUseForSynchronization = false;
  }
  return;
}

// InternalConstructor<UMediaPlayerTimeSynchronizationSource> @ 14d7ce830

void __cdecl InternalConstructor<UMediaPlayerTimeSynchronizationSource>(FObjectInitializer *param_1)

{
  UTimeSynchronizationSource *this;
  
  this = (UTimeSynchronizationSource *)param_1->Obj;
  if (this != (UTimeSynchronizationSource *)0x0) {
    UTimeSynchronizationSource::UTimeSynchronizationSource(this,param_1);
    this->_padding_ = (longlong)&___7UMediaPlayerTimeSynchronizationSource__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMediaProfile> @ 14d7ce870

void __cdecl InternalConstructor<UMediaProfile>(FObjectInitializer *param_1)

{
  UObject *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMediaProfile__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    pFVar2 = FName::FName(&local_res8,L"PlaybackManager");
    FVar1 = *pFVar2;
    pUVar3 = UMediaProfilePlaybackManager::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject(this,FVar1,pUVar3,pUVar3,true,true);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&this[3].field_0x20 = pUVar4;
  }
  return;
}

// InternalConstructor<UMediaProfileBlueprintLibrary> @ 14d7ce940

void __cdecl InternalConstructor<UMediaProfileBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMediaProfileBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UMediaProfileEditorSettings> @ 14d7ce970

void __cdecl InternalConstructor<UMediaProfileEditorSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UMediaProfileEditorSettings__6B_;
  }
  return;
}

// InternalConstructor<UMediaProfilePlaybackManager> @ 14d7ce9a0

void __cdecl InternalConstructor<UMediaProfilePlaybackManager>(FObjectInitializer *param_1)

{
  if ((UMediaProfilePlaybackManager *)param_1->Obj != (UMediaProfilePlaybackManager *)0x0) {
    UMediaProfilePlaybackManager::UMediaProfilePlaybackManager
              ((UMediaProfilePlaybackManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMediaProfileSettings> @ 14d7ce9c0

void __cdecl InternalConstructor<UMediaProfileSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMediaProfileSettings__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[2].field_0x18,0);
    return;
  }
  return;
}

// InternalConstructor<UProxyMediaOutput> @ 14d7cea30

void __cdecl InternalConstructor<UProxyMediaOutput>(FObjectInitializer *param_1)

{
  UMediaOutput *this;
  FObjectInitializer *pFVar1;
  
  this = (UMediaOutput *)param_1->Obj;
  if (this != (UMediaOutput *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UMediaOutput::UMediaOutput(this,pFVar1);
    this->_padding_ = (longlong)&___7UProxyMediaOutput__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 0;
  }
  return;
}

// InternalConstructor<UProxyMediaSource> @ 14d7cea80

void __cdecl InternalConstructor<UProxyMediaSource>(FObjectInitializer *param_1)

{
  UMediaSource *this;
  FObjectInitializer *pFVar1;
  
  this = (UMediaSource *)param_1->Obj;
  if (this != (UMediaSource *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UMediaSource::UMediaSource(this,pFVar1);
    this->_padding_ = (longlong)&UProxyMediaSource::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UProxyMediaSource::_vftable__for__IMediaOptions__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AMediaBundleActorBase> @ 14d7ceae0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AMediaBundleActorBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AMediaBundleActorBase::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AMediaBundleActorBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaBundle> @ 14d7cebc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaBundle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaBundle::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaBundle__6B_;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0x3fe0000000000000;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0x3fe0000000000000;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0x3fe0000000000000;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0x3fe0000000000000;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0x3ff0000000000000;
    *(undefined8 *)(pUVar1 + 3) = 0x3ff0000000000000;
    pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0x3ff0000000000000;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0x3ff0000000000000;
    pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaBundleTimeSynchronizationSource> @ 14d7ced40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMediaBundleTimeSynchronizationSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTimeSynchronizationSource *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaBundleTimeSynchronizationSource::GetPrivateStaticClass();
  this = (UTimeSynchronizationSource *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTimeSynchronizationSource *)0x0) {
    UTimeSynchronizationSource::UTimeSynchronizationSource(this,param_1);
    this->_padding_ = (longlong)&___7UMediaBundleTimeSynchronizationSource__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].bUseForSynchronization = false;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaPlayerTimeSynchronizationSource> @ 14d7cee00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMediaPlayerTimeSynchronizationSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTimeSynchronizationSource *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaPlayerTimeSynchronizationSource::GetPrivateStaticClass();
  this = (UTimeSynchronizationSource *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTimeSynchronizationSource *)0x0) {
    UTimeSynchronizationSource::UTimeSynchronizationSource(this,param_1);
    this->_padding_ = (longlong)&___7UMediaPlayerTimeSynchronizationSource__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaProfile> @ 14d7ceec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaProfile>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaProfile::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaProfile__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaProfileBlueprintLibrary> @ 14d7cefa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMediaProfileBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaProfileBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaProfileBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaProfileEditorSettings> @ 14d7cf050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMediaProfileEditorSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaProfileEditorSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaProfileEditorSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaProfilePlaybackManager> @ 14d7cf100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMediaProfilePlaybackManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaProfilePlaybackManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaProfilePlaybackManager__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x14 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMediaProfileSettings> @ 14d7cf2e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMediaProfileSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMediaProfileSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMediaProfileSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[2].field_0x18,0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProxyMediaOutput> @ 14d7cf3c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProxyMediaOutput>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMediaOutput *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProxyMediaOutput::GetPrivateStaticClass();
  this = (UMediaOutput *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMediaOutput *)0x0) {
    UMediaOutput::UMediaOutput(this,param_1);
    this->_padding_ = (longlong)&___7UProxyMediaOutput__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProxyMediaSource> @ 14d7cf480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProxyMediaSource>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMediaSource *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProxyMediaSource::GetPrivateStaticClass();
  this = (UMediaSource *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMediaSource *)0x0) {
    UMediaSource::UMediaSource(this,param_1);
    this->_padding_ = (longlong)&UProxyMediaSource::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UProxyMediaSource::_vftable__for__IMediaOptions__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UMaterialInstanceDynamic,UMaterialInterface_*,0> @ 14d7cf550

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMaterialInstanceDynamic,UMaterialInterface_*,0>
          (TObjectPtr<UMaterialInstanceDynamic> *param_1,UMaterialInterface **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMaterialInstanceDynamic *)0x0) {
    return (UMaterialInstanceDynamic *)*param_2 == (UMaterialInstanceDynamic *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (UMaterialInstanceDynamic *)*param_2;
}

// IsObjectPtrEqual<UMediaSoundComponent,UMediaSoundComponent_*,0> @ 14d7cf570

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UMediaSoundComponent,UMediaSoundComponent_*,0>
          (TObjectPtr<UMediaSoundComponent> *param_1,UMediaSoundComponent **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UMediaSoundComponent *)0x0) {
    return *param_2 == (UMediaSoundComponent *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeShared<MediaProfilePlaybackManager::FActiveViewport,1,UMediaOutput_*_&,FMediaCaptureOptions_const_&> @ 14d7cf590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedRef<MediaProfilePlaybackManager::FActiveViewport,1> * __cdecl
MakeShared<MediaProfilePlaybackManager::FActiveViewport,1,UMediaOutput_*_&,FMediaCaptureOptions_const_&>
          (TSharedRef<MediaProfilePlaybackManager::FActiveViewport,1> *__return_storage_ptr__,
          UMediaOutput **param_1,FMediaCaptureOptions *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UMediaOutput *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TSharedRef<MediaProfilePlaybackManager::FActiveViewport,1> *pTVar10;
  undefined1 local_res8 [8];
  UMediaOutput *local_res20;
  
  pTVar8 = operator_new(0x28);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FActiveViewport *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFActiveViewport_MediaProfilePlaybackManager___00_SharedPointerInternals__6B_
    ;
    pUVar4 = *param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    pTVar8[1]._padding_ = 0;
    local_res20 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar8 + 1),(FObjectPtr)&local_res20);
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    piVar1 = &(GEngine->WorldList).Array.ArrayNum;
    pFVar9 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    iVar3 = *piVar1;
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if (*piVar1 != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar2) break;
      pFVar9 = pFVar9 + 8;
    }
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    plVar5 = (longlong *)pTVar8[2]._padding_;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
      pTVar8[2]._padding_ = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    __return_storage_ptr__->Object = (FActiveViewport *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    if ((FActiveViewport *)(pTVar8 + 1) == (FActiveViewport *)0x0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedRef<MediaProfilePlaybackManager::FActiveViewport,1> *)(*pcVar6)();
        return pTVar10;
      }
    }
  }
  return __return_storage_ptr__;
}

// ObjectPtrDecay<TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>_>,TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_>_> @ 14d7cf760

TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrDecay<TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>_>,TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UProxyMediaOutput>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// ObjectPtrDecay<TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>_>,TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_>_> @ 14d7cf7c0

TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrDecay<TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>_>,TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UProxyMediaSource>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// ObjectPtrWrap<TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>_> @ 14d7cf820

TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrWrap<TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_>_>
          (TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return (TArray<TObjectPtr<UProxyMediaOutput>,TSizedDefaultAllocator<32>_> *)param_1;
}

// ObjectPtrWrap<TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>_> @ 14d7cf830

TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_> * __cdecl
ObjectPtrWrap<TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_>_>
          (TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return (TArray<TObjectPtr<UProxyMediaSource>,TSizedDefaultAllocator<32>_> *)param_1;
}

// ~TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::__l2::<lambda_1>,0,1> @ 14d7d1740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UMediaProfilePlaybackManager::RestartActiveViewportOutput_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::__l2::<lambda_1>,0,1> @ 14d7d1760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UMediaProfilePlaybackManager::RestartManagedViewportOutput_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::__l2::<lambda_1>,0,1> @ 14d7d1780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UMediaProfilePlaybackManager::RestartRenderTargetOutput_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)this + 0x20));
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d7d26f4

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaProfileManager::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMediaProfileManager::_vector_deleting_destructor__adjustor_8__
          (FMediaProfileManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMediaProfileManager *)&this[-1].MediaProfileChangedDelegate.field_0x18,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d7d2710

void * __thiscall
IBaseDelegateInstance<void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2740

void * __thiscall
TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,MediaBundlePrivate::FMediaBundleDeferredCloser,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2770

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d27a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d27d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2800

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2840

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2870

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d28a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d28d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2910

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartActiveViewportOutput'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartManagedViewportOutput'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d29e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMediaProfilePlaybackManager::RestartRenderTargetOutput'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2a30

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<MediaProfilePlaybackManager::FActiveViewport,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<MediaProfilePlaybackManager::FActiveViewport,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2a70

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<MediaProfilePlaybackManager::FManagedViewport,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<MediaProfilePlaybackManager::FManagedViewport,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2ab0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<MediaProfilePlaybackManager::FMediaCaptureGameViewportClient,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<MediaProfilePlaybackManager::FMediaCaptureGameViewportClient,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2af0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSceneViewport,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FSceneViewport,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2b30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
AMediaBundleActorBase::_scalar_deleting_destructor_(AMediaBundleActorBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AMediaBundleActorBase__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2b90

void * __thiscall
MediaProfilePlaybackManager::FMediaCaptureGameViewportClient::_scalar_deleting_destructor_
          (FMediaCaptureGameViewportClient *this,uint param_1)

{
  FCommonViewportClient::~FCommonViewportClient((FCommonViewportClient *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2bd0

void * __thiscall
FMediaProfileManager::_scalar_deleting_destructor_(FMediaProfileManager *this,uint param_1)

{
  ~FMediaProfileManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2c10

void * __thiscall
IMediaProfileManager::_scalar_deleting_destructor_(IMediaProfileManager *this,uint param_1)

{
  *this = (IMediaProfileManager)&___7IMediaProfileManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2c50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall UMediaBundle::_scalar_deleting_destructor_(UMediaBundle *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMediaBundle__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MediaStateChangedDelegate).field_0x8,
             *(int *)&(this->MediaStateChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->MediaStateChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MediaStateChangedDelegate);
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

// `scalar_deleting_destructor' @ 14d7d2cf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall
UMediaBundleTimeSynchronizationSource::_scalar_deleting_destructor_
          (UMediaBundleTimeSynchronizationSource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMediaBundleTimeSynchronizationSource__6B_;
  UTimeSynchronizationSource::~UTimeSynchronizationSource((UTimeSynchronizationSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2d50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall
UMediaPlayerTimeSynchronizationSource::_scalar_deleting_destructor_
          (UMediaPlayerTimeSynchronizationSource *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMediaPlayerTimeSynchronizationSource__6B_;
  UTimeSynchronizationSource::~UTimeSynchronizationSource((UTimeSynchronizationSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2db0

void * __thiscall UMediaProfile::_scalar_deleting_destructor_(UMediaProfile *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMediaProfile__6B_;
  pFVar1 = (this->MediaOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MediaSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d2e30

void * __thiscall
UMediaProfileBlueprintLibrary::_scalar_deleting_destructor_
          (UMediaProfileBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UMediaProfileBlueprintLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d7d2e90

void * __thiscall
UMediaProfileEditorSettings::_scalar_deleting_destructor_
          (UMediaProfileEditorSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UMediaProfileEditorSettings__6B_;
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

// `scalar_deleting_destructor' @ 14d7d2ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
UMediaProfilePlaybackManager::_scalar_deleting_destructor_
          (UMediaProfilePlaybackManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UMediaProfilePlaybackManager__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEnginePreExit,
             this);
  DestructItems<TFunction<void___cdecl(UMediaProfilePlaybackManager_*)>,int>
            ((TFunction<void___cdecl(UMediaProfilePlaybackManager_*)> *)
             (this->RestartCaptureFuncs).AllocatorInstance.Data,(this->RestartCaptureFuncs).ArrayNum
            );
  pFVar1 = (this->RestartCaptureFuncs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CapturesWithError).HashSize = 0;
  FVar2 = (this->CapturesWithError).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMediaCapture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMediaCapture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CapturesWithError).Elements);
  DestructItems<TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>,int>
            ((TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1> *)
             (this->ActiveOutputViewports).AllocatorInstance.Data,
             (this->ActiveOutputViewports).ArrayNum);
  pFVar1 = (this->ActiveOutputViewports).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>,int>
            ((TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)
             (this->ManagedOutputViewports).AllocatorInstance.Data,
             (this->ManagedOutputViewports).ArrayNum);
  pFVar1 = (this->ManagedOutputViewports).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SourceConsumers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SourceConsumers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMediaPlayer>,TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceConsumers);
  *(undefined4 *)&(this->MediaOutputCaptures).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MediaOutputCaptures).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaCapture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaOutputCaptures);
  DestructItems<TSoftObjectPtr<UMediaTexture>,int>
            ((TSoftObjectPtr<UMediaTexture> *)(this->MediaSourceTextures).AllocatorInstance.Data,
             (this->MediaSourceTextures).ArrayNum);
  pFVar1 = (this->MediaSourceTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MediaSourcePlayers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MediaSourcePlayers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMediaPlayer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaSourcePlayers);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1b0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d3080

void * __thiscall
UMediaProfileSettings::_scalar_deleting_destructor_(UMediaProfileSettings *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMediaProfileSettings__6B_;
  pvVar1 = *(void **)&(this->StartupMediaProfile).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSoftObjectPtr<UProxyMediaOutput>,int>
            ((TSoftObjectPtr<UProxyMediaOutput> *)(this->MediaOutputProxy).AllocatorInstance.Data,
             (this->MediaOutputProxy).ArrayNum);
  pFVar2 = (this->MediaOutputProxy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSoftObjectPtr<UProxyMediaSource>,int>
            ((TSoftObjectPtr<UProxyMediaSource> *)(this->MediaSourceProxy).AllocatorInstance.Data,
             (this->MediaSourceProxy).ArrayNum);
  pFVar2 = (this->MediaSourceProxy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d3130

void * __thiscall
UProxyMediaOutput::_scalar_deleting_destructor_(UProxyMediaOutput *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UProxyMediaOutput__6B_;
  UMediaOutput::~UMediaOutput((UMediaOutput *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7d3190

void * __thiscall
UProxyMediaSource::_scalar_deleting_destructor_(UProxyMediaSource *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  UMediaSource::~UMediaSource((UMediaSource *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// CreateManagedViewport @ 14d7d5f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> * __cdecl
MediaProfilePlaybackManager::CreateManagedViewport
          (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *__return_storage_ptr__,
          UMediaOutput *param_1,EViewModeIndex param_2)

{
  FManagedViewport *pFVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FViewportClient,1> *pTVar8;
  TSharedPtr<FSceneViewport,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FSceneViewport *pFVar11;
  FSharedReferencer<1> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  UMediaOutput *local_res8;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> local_50;
  FSceneViewport *local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<SViewport,1> local_38;
  
  pTVar5 = ::operator_new(0x88);
  pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FManagedViewport *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFManagedViewport_MediaProfilePlaybackManager___00_SharedPointerInternals__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar5[1]._padding_ = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaOutput *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar5 + 1),(FObjectPtr)&local_res8);
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[6]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar5[6]._padding_ + 4) = 0x80;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[7].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[8]._padding_ = 0;
    if (((FManagedViewport *)(pTVar5 + 1) == (FManagedViewport *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)(*pcVar2)();
      return pTVar6;
    }
    __return_storage_ptr__->Object = (FManagedViewport *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = ::operator_new(0x50);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMediaCaptureGameViewportClient_MediaProfilePlaybackManager___00_SharedPointerInternals__6B_
    ;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[1]._padding_ = (longlong)&___7FCommonViewportClient__6B_;
    pTVar13 = ::operator_new(0x18);
    pTVar7 = pTVar10;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      pTVar13->_padding_ = 0;
      pTVar13->SharedReferenceCount = (atomic<int>)0x0;
      pTVar13->WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[1]._padding_ = 0;
      pTVar13->_padding_ = 0;
      pTVar13->SharedReferenceCount = (atomic<int>)0x0;
      pTVar13->WeakReferenceCount = (atomic<int>)0x0;
      pTVar13[1]._padding_ = 0;
      pTVar7 = pTVar13;
    }
    *(TReferenceControllerBase<1> **)&pTVar5[2].SharedReferenceCount = pTVar7;
    pTVar13 = pTVar5 + 1;
    pTVar5[2]._padding_ = (longlong)pTVar7;
    pTVar5[1]._padding_ =
         (longlong)&___7FMediaCaptureGameViewportClient_MediaProfilePlaybackManager__6B_;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[4]._padding_ = 0x3f800000;
    *(undefined1 *)((longlong)&pTVar5[4]._padding_ + 4) = 1;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)(*pcVar2)();
      return pTVar6;
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_50.ReferenceController = pTVar5;
  }
  FVar3.ReferenceController = local_50.ReferenceController;
  local_58 = pTVar13;
  if ((__return_storage_ptr__->Object == (FManagedViewport *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)(*pcVar2)();
    return pTVar6;
  }
  pFVar1 = __return_storage_ptr__->Object;
  pTVar8 = &pFVar1->ViewportClient;
  if (pTVar8 != (TSharedPtr<FViewportClient,1> *)&local_58) {
    pTVar8->Object = (FViewportClient *)pTVar13;
    local_58 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar1->ViewportClient).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  pTVar5 = ::operator_new(0x338);
  pFVar11 = ___xmm_00000000000000000000000000000010;
  FVar12.ReferenceController = _UNK_150651568;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFSceneViewport___00_SharedPointerInternals__6B_;
    local_38.Object = (SViewport *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSceneViewport::FSceneViewport
              ((FSceneViewport *)(pTVar5 + 1),(FViewportClient *)pTVar13,&local_38);
    if (((FSceneViewport *)(pTVar5 + 1) == (FSceneViewport *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)(*pcVar2)();
      return pTVar6;
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pFVar11 = (FSceneViewport *)(pTVar5 + 1);
    FVar12.ReferenceController = pTVar5;
    pTVar10 = pTVar5;
  }
  local_48 = pFVar11;
  FStack_40.ReferenceController = FVar12.ReferenceController;
  if ((__return_storage_ptr__->Object == (FManagedViewport *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *)(*pcVar2)();
    return pTVar6;
  }
  pFVar1 = __return_storage_ptr__->Object;
  pTVar9 = &pFVar1->Viewport;
  if (pTVar9 != (TSharedPtr<FSceneViewport,1> *)&local_48) {
    pTVar9->Object = pFVar11;
    local_48 = (FSceneViewport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar1->Viewport).SharedReferenceCount,&FStack_40);
    FVar12.ReferenceController = FStack_40.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeMediaBundle @ 14d7d6810

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaBundle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaBundleActorBase @ 14d7d6820

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaBundleActorBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaBundleTimeSynchronizationSource @ 14d7d6830

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaBundleTimeSynchronizationSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaFrameworkUtilities_init @ 14d7d6840

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaFrameworkUtilities_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaPlayerTimeSynchronizationSource @ 14d7d6850

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaPlayerTimeSynchronizationSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaProfile @ 14d7d6860

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaProfile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaProfileBlueprintLibrary @ 14d7d6870

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaProfileBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaProfilePlaybackManager @ 14d7d6880

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaProfilePlaybackManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMediaProfileSettings @ 14d7d6890

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaProfileSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProxyMediaOutput @ 14d7d68a0

void __cdecl EmptyLinkFunctionForGeneratedCodeProxyMediaOutput(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProxyMediaSource @ 14d7d68b0

void __cdecl EmptyLinkFunctionForGeneratedCodeProxyMediaSource(void)

{
  return;
}

// FindActiveViewport @ 14d7d7140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FSceneViewport,1> * __cdecl
MediaProfilePlaybackManager::FindActiveViewport
          (TSharedPtr<FSceneViewport,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UEngine *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar3 = GEngine;
  pFVar4 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar2 = (GEngine->WorldList).Array.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar3->WorldList).Array.ArrayNum != iVar2) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar4 = pFVar4 + 8;
  }
  __return_storage_ptr__->Object = (FSceneViewport *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTimeSynchronizableMediaSource @ 14d7db380

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UTimeSynchronizableMediaSource * __cdecl
TimeSynchronizationSource::GetTimeSynchronizableMediaSource(UMediaBundle *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UTimeSynchronizableMediaSource *pUVar4;
  UClass *pUVar5;
  
  if ((param_1 == (UMediaBundle *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMediaBundle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\MediaBundleTimeSynchronizationSource.cpp"
                         ,0x17,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UTimeSynchronizableMediaSource *)(*pcVar2)();
    return pUVar4;
  }
  pUVar4 = (UTimeSynchronizableMediaSource *)(param_1->MediaSource).field0_0x0.DebugPtr;
  if (pUVar4 == (UTimeSynchronizableMediaSource *)0x0) {
    return (UTimeSynchronizableMediaSource *)0x0;
  }
  pUVar5 = Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    pUVar5 = UProxyMediaSource::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if (*(int *)(pUVar4->_padding_ + 0x38) < iVar1) {
      return (UTimeSynchronizableMediaSource *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_) {
      return (UTimeSynchronizableMediaSource *)0x0;
    }
    pUVar4 = (UTimeSynchronizableMediaSource *)
             UProxyMediaSource::GetLeafMediaSource((UProxyMediaSource *)pUVar4);
    if (pUVar4 != (UTimeSynchronizableMediaSource *)0x0) {
      pUVar5 = Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
    pUVar4 = (UTimeSynchronizableMediaSource *)0x0;
  }
  return pUVar4;
}

// GetTimeSynchronizableMediaSource @ 14d7db450

UTimeSynchronizableMediaSource * __cdecl
TimeSynchronizationSource::GetTimeSynchronizableMediaSource(UMediaSource *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UTimeSynchronizableMediaSource *pUVar4;
  UClass *pUVar5;
  
  if (param_1 == (UMediaSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMediaSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\MediaPlayerTimeSynchronizationSource.cpp"
                       ,0x17,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UTimeSynchronizableMediaSource *)(*pcVar2)();
      return pUVar4;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return (UTimeSynchronizableMediaSource *)param_1;
    }
  }
  if (param_1 == (UMediaSource *)0x0) {
    return (UTimeSynchronizableMediaSource *)0x0;
  }
  pUVar5 = UProxyMediaSource::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (iVar1 <= *(int *)(param_1->_padding_ + 0x38)) {
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_) {
      return (UTimeSynchronizableMediaSource *)0x0;
    }
    pUVar4 = (UTimeSynchronizableMediaSource *)
             UProxyMediaSource::GetLeafMediaSource((UProxyMediaSource *)param_1);
    if (pUVar4 != (UTimeSynchronizableMediaSource *)0x0) {
      pUVar5 = Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
    return (UTimeSynchronizableMediaSource *)0x0;
  }
  return (UTimeSynchronizableMediaSource *)0x0;
}

// MediaStateChangedRemove @ 14d7dc900

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
MediaBundleActorBasePrivate::MediaStateChangedRemove(FDelegateHandle *param_1,UMediaBundle *param_2)

{
  if ((param_2 != (UMediaBundle *)0x0) && (param_1->ID != 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_2->MediaStateChangedDelegate,(FDelegateHandle)param_1->ID);
    param_1->ID = 0;
  }
  return;
}

// Z_Construct_UClass_AMediaBundleActorBase_NoRegister @ 14d7e2340

UClass * __cdecl Z_Construct_UClass_AMediaBundleActorBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundleActorBase",
               &Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton,
               AMediaBundleActorBase::StaticRegisterNativesAMediaBundleActorBase,0x300,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AMediaBundleActorBase>,
               InternalVTableHelperCtorCaller<AMediaBundleActorBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton;
}

// Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_NoRegister @ 14d7e2400

UClass * __cdecl Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundleTimeSynchronizationSource",
               &Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton,
               UMediaBundleTimeSynchronizationSource::
               StaticRegisterNativesUMediaBundleTimeSynchronizationSource,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaBundleTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<UMediaBundleTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.InnerSingleton;
}

// Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_NoRegister @ 14d7e24c0

UClass * __cdecl Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaPlayerTimeSynchronizationSource",
               &Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton,
               UMediaPlayerTimeSynchronizationSource::
               StaticRegisterNativesUMediaPlayerTimeSynchronizationSource,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaPlayerTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<UMediaPlayerTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.InnerSingleton;
}

// Z_Construct_UClass_UMediaProfileBlueprintLibrary_NoRegister @ 14d7e2580

UClass * __cdecl Z_Construct_UClass_UMediaProfileBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileBlueprintLibrary",
               &Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton,
               UMediaProfileBlueprintLibrary::StaticRegisterNativesUMediaProfileBlueprintLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaProfileBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMediaProfileBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UMediaProfileEditorSettings_NoRegister @ 14d7e2640

UClass * __cdecl Z_Construct_UClass_UMediaProfileEditorSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileEditorSettings",
               &Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton,
               UMediaProfileEditorSettings::StaticRegisterNativesUMediaProfileEditorSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMediaProfileEditorSettings>,
               InternalVTableHelperCtorCaller<UMediaProfileEditorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton;
}

// Z_Construct_UClass_UMediaProfileSettings_NoRegister @ 14d7e26f0

UClass * __cdecl Z_Construct_UClass_UMediaProfileSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileSettings",
               &Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton,
               UMediaProfileSettings::StaticRegisterNativesUMediaProfileSettings,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UMediaProfileSettings>,
               InternalVTableHelperCtorCaller<UMediaProfileSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_MediaFrameworkUtilities @ 14d7e30e0

void __cdecl IMPLEMENT_MODULE_MediaFrameworkUtilities(void)

{
  return;
}

// UnitVectors'' @ 15045a230

void __cdecl `dynamic_atexit_destructor_for_'FOpenCVHelper::UnitVectors__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOpenCVHelper::UnitVectors.AllocatorInstance.Data;
  if (FOpenCVHelper::UnitVectors.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOpenCVHelper::UnitVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarMediaUtilsStartupProfile'' @ 15045a250

void __cdecl _dynamic_atexit_destructor_for__CVarMediaUtilsStartupProfile__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMediaUtilsStartupProfile);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultMediaProxyOutputName'' @ 15045a270

void __cdecl
MediaProfileSettings::_dynamic_atexit_destructor_for__DefaultMediaProxyOutputName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultMediaProxyOutputName.Data.AllocatorInstance.Data;
  if (DefaultMediaProxyOutputName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultMediaProxyOutputName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultMediaProxySourceName'' @ 15045a290

void __cdecl
MediaProfileSettings::_dynamic_atexit_destructor_for__DefaultMediaProxySourceName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultMediaProxySourceName.Data.AllocatorInstance.Data;
  if (DefaultMediaProxySourceName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultMediaProxySourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultMediaTextureName'' @ 15045a2b0

void __cdecl
MediaProfilePlaybackManager::_dynamic_atexit_destructor_for__DefaultMediaTextureName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultMediaTextureName.Data.AllocatorInstance.Data;
  if (DefaultMediaTextureName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultMediaTextureName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultMediaTexturesPath'' @ 15045a2d0

void __cdecl
MediaProfilePlaybackManager::_dynamic_atexit_destructor_for__DefaultMediaTexturesPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultMediaTexturesPath.Data.AllocatorInstance.Data;
  if (DefaultMediaTexturesPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultMediaTexturesPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultProxiesPath'' @ 15045a2f0

void __cdecl MediaProfileSettings::_dynamic_atexit_destructor_for__DefaultProxiesPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultProxiesPath.Data.AllocatorInstance.Data;
  if (DefaultProxiesPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultProxiesPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Instance'' @ 15045a310

void __cdecl
`MediaBundlePrivate::FMediaBundleDeferredCloser::Get'::__l2::
_dynamic_atexit_destructor_for__Instance__(void)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
             &`public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
              ::__l2::Instance);
  if (`public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
      ::__l2::Instance.BundlesToClose.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_MediaBundlePrivate::FMediaBundleDeferredCloser*___ptr64___cdecl_MediaBundlePrivate::FMediaBundleDeferredCloser::Get(void)'
                  ::__l2::Instance.BundlesToClose.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogMediaFrameworkUtilities'' @ 15045a350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMediaFrameworkUtilities__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMediaFrameworkUtilities);
  return;
}

